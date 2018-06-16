/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:16-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_9 9
#define LABEL_1_11 11
#define LABEL_1_8 13
#define LABEL_1_13 15
#define LABEL_1_14 17
#define LABEL_1_15 19
#define LABEL_1_16 21
#define LABEL_1_20 23
#define LABEL_1_22 25
#define LABEL_1_23 27
#define LABEL_1_24 29
#define LABEL_1_26 31
#define LABEL_1_27 33
#define LABEL_1_28 35
#define LABEL_1_30 37
#define LABEL_1_31 39
#define LABEL_1_18 41
#define LABEL_1_33 43
#define LABEL_1_34 45
#define LABEL_1_35 47
#define LABEL_1_36 49
#define LABEL_1_37 51
#define LABEL_1_38 53
#define LABEL_1_39 55
#define LABEL_1_12 57
#define LABEL_1_43 59
#define LABEL_1_41 61
#define TAG_1_42 29
#define ENVIRONMENT_LABEL_1_3 105
#define DEBUGGING_LABEL_1_2 104
#define OBJECT_1_15 103
#define OBJECT_1_14 102
#define OBJECT_1_13 101
#define OBJECT_1_12 100
#define OBJECT_1_11 99
#define OBJECT_1_10 98
#define OBJECT_1_9 97
#define OBJECT_1_8 96
#define OBJECT_1_7 95
#define OBJECT_1_6 94
#define OBJECT_1_5 93
#define OBJECT_1_4 92
#define OBJECT_1_3 91
#define OBJECT_1_2 90
#define OBJECT_1_1 89
#define OBJECT_1_0 88
#define EXECUTE_CACHE_1_45 63
#define EXECUTE_CACHE_1_44 65
#define EXECUTE_CACHE_1_40 67
#define EXECUTE_CACHE_1_32 69
#define EXECUTE_CACHE_1_29 71
#define EXECUTE_CACHE_1_25 73
#define EXECUTE_CACHE_1_21 75
#define EXECUTE_CACHE_1_19 77
#define EXECUTE_CACHE_1_17 79
#define EXECUTE_CACHE_1_10 81
#define EXECUTE_CACHE_1_6 83
#define FREE_REFERENCE_1_1 86
#define FREE_REFERENCE_1_0 87
#define FREE_REFERENCES_LABEL_1_0 62
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reuse_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd120;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd98;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd92;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd78;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd55;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd138;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd163;
  machine_word Wrd161;
  machine_word Wrd195;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd143;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd189;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd176;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd173;
  machine_word Wrd196;
  machine_word Wrd192;
  machine_word Wrd202;
  machine_word Wrd199;
  machine_word Wrd254;
  machine_word Wrd251;
  machine_word Wrd250;
  machine_word Wrd239;
  machine_word Wrd247;
  machine_word Wrd246;
  machine_word Wrd245;
  machine_word Wrd249;
  machine_word Wrd248;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd233;
  machine_word Wrd232;
  machine_word Wrd221;
  machine_word Wrd229;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd220;
  machine_word Wrd217;
  machine_word Wrd216;
  machine_word Wrd205;
  machine_word Wrd213;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd258;
  machine_word Wrd203;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd51;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_1_4);
      goto setup_frame_adjustments_39;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_38;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_41;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto label_42;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto label_43;

    case 7:
      current_block = (Rpc - LABEL_1_14);
      goto label_44;

    case 8:
      current_block = (Rpc - LABEL_1_15);
      goto label_45;

    case 9:
      current_block = (Rpc - LABEL_1_16);
      goto label_46;

    case 10:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_21;

    case 11:
      current_block = (Rpc - LABEL_1_22);
      goto label_57;

    case 12:
      current_block = (Rpc - LABEL_1_23);
      goto label_58;

    case 13:
      current_block = (Rpc - LABEL_1_24);
      goto label_59;

    case 14:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_33;

    case 15:
      current_block = (Rpc - LABEL_1_27);
      goto continuation_19;

    case 16:
      current_block = (Rpc - LABEL_1_28);
      goto label_56;

    case 17:
      current_block = (Rpc - LABEL_1_30);
      goto continuation_31;

    case 18:
      current_block = (Rpc - LABEL_1_31);
      goto label_55;

    case 19:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_1_33);
      goto label_48;

    case 21:
      current_block = (Rpc - LABEL_1_34);
      goto label_49;

    case 22:
      current_block = (Rpc - LABEL_1_35);
      goto label_50;

    case 23:
      current_block = (Rpc - LABEL_1_36);
      goto label_51;

    case 24:
      current_block = (Rpc - LABEL_1_37);
      goto label_52;

    case 25:
      current_block = (Rpc - LABEL_1_38);
      goto label_53;

    case 26:
      current_block = (Rpc - LABEL_1_39);
      goto label_54;

    case 27:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_6;

    case 28:
      current_block = (Rpc - LABEL_1_43);
      goto label_47;

    case 29:
      current_block = (Rpc - LABEL_1_41);
      goto lambda_63;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_frame_adjustments_61)
DEFLABEL (setup_frame_adjustments_39)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (lambda_62)
DEFLABEL (lambda_38)
  INTERRUPT_CHECK (26, LABEL_1_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_122;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_122;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_121)
  if ((Wrd5.Obj) == (current_block [OBJECT_1_2]))
    goto label_64;
  Rvl = (current_block [OBJECT_1_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd24.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_120;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd37.Lng))))
    goto label_120;
  (Wrd31.Obj) = ((Wrd35.pObj) [9]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_119)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_118;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd16.Lng))))
    goto label_118;
  (Wrd10.Obj) = ((Wrd14.pObj) [16]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_117)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_116;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd32.Lng))))
    goto label_116;
  (Wrd26.Obj) = ((Wrd30.pObj) [8]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_115)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_110;
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_114;
  Wrd45 = Wrd49;

DEFLABEL (label_113)
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd60.Obj) = (Rsp [3]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_112;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd59.Lng))))
    goto label_112;
  (Wrd51.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_111)
  (Wrd67.Obj) = (* (Rsp++));
  if (! ((Wrd51.Obj) == (Wrd67.Obj)))
    goto label_110;
  (Wrd74.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_109)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_83;

DEFLABEL (label_82)
  Rsp = (& (Rsp [4]));

DEFLABEL (label_81)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_80)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_79;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_42);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_41])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  ((Wrd11.pObj) [2]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_78;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd22.Lng))))
    goto label_78;
  (Wrd16.Obj) = ((Wrd20.pObj) [19]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_77)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_44]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_30);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  (Wrd139.Obj) = (current_block [OBJECT_1_9]);
  (Wrd140.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd139.Obj);
  (* (Rhp++)) = (Wrd140.Obj);
  (Wrd138.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd138.pObj)));

DEFLABEL (label_68)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_67)
  (Rsp [2]) = (Wrd31.Obj);
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 10)
    goto label_66;

DEFLABEL (label_65)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_14]), 3);

DEFLABEL (label_66)
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd42.Lng))))
    goto label_65;
  ((Wrd40.pObj) [17]) = (Wrd31.Obj);
  Rvl = (current_block [OBJECT_1_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd150.Obj) = (Rsp [1]);
  (Wrd151.uLng) = (OBJECT_TYPE (Wrd150.Obj));
  if (! ((Wrd151.uLng) == 10))
    goto label_76;
  (Wrd147.pObj) = (OBJECT_ADDRESS (Wrd150.Obj));
  (Wrd148.Obj) = ((Wrd147.pObj) [0]);
  (Wrd149.Lng) = (FIXNUM_TO_LONG (Wrd148.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd149.Lng))))
    goto label_76;
  (Wrd143.Obj) = ((Wrd147.pObj) [20]);
  (* (--Rsp)) = (Wrd143.Obj);

DEFLABEL (label_75)
  (Wrd157.Obj) = (Rsp [0]);
  if ((Wrd157.Obj) == ((SCHEME_OBJECT) 0))
    goto label_74;
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd161.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  (Wrd163.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd163.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_32]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_1_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd192.Obj) = (Rsp [1]);
  goto label_70;

DEFLABEL (label_71)
  (Wrd192.Obj) = (Rsp [0]);

DEFLABEL (label_70)
DEFLABEL (label_73)
  (Wrd196.Obj) = (current_block [OBJECT_1_9]);
  (* (Rhp++)) = (Wrd196.Obj);
  (* (Rhp++)) = (Wrd192.Obj);

DEFLABEL (label_72)
  (Wrd195.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd195.pObj)));
  Rsp = (& (Rsp [3]));
  goto label_67;

DEFLABEL (label_74)
  (Wrd167.Obj) = (current_block [OBJECT_1_11]);
  (Wrd168.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd167.Obj);
  (* (Rhp++)) = (Wrd168.Obj);
  goto label_72;

DEFLABEL (label_76)
  (Wrd152.Obj) = (Rsp [1]);
  (Wrd153.Obj) = (current_block [OBJECT_1_10]);
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd156.Obj);
  (* (--Rsp)) = (Wrd153.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.Obj) = (current_block [OBJECT_1_15]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_43]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_79)
  (Wrd31.Obj) = ((SCHEME_OBJECT) 0);
  goto label_68;

DEFLABEL (label_83)
  (Wrd50.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd53.Obj) = ((Wrd50.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_108;
  Wrd49 = Wrd53;

DEFLABEL (label_107)
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd64.Obj) = (Rsp [8]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 10))
    goto label_106;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd63.Lng))))
    goto label_106;
  (Wrd55.Obj) = ((Wrd61.pObj) [11]);

DEFLABEL (label_105)
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_104;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd71.Obj) = ((Wrd72.pObj) [0]);

DEFLABEL (label_103)
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd85.uLng) == 10))
    goto label_102;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [0]);
  (Wrd84.Lng) = (FIXNUM_TO_LONG (Wrd83.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd84.Lng))))
    goto label_102;
  (Wrd78.Obj) = ((Wrd82.pObj) [1]);

DEFLABEL (label_101)
  (Wrd91.Obj) = (* (Rsp++));
  if (! ((Wrd78.Obj) == (Wrd91.Obj)))
    goto label_82;
  (Wrd93.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd96.Obj) = ((Wrd93.pObj) [0]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if ((Wrd97.uLng) == 50)
    goto label_100;
  Wrd92 = Wrd96;

DEFLABEL (label_99)
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd107.Obj) = (Rsp [2]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd108.uLng) == 10))
    goto label_98;
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd105.Obj) = ((Wrd104.pObj) [0]);
  (Wrd106.Lng) = (FIXNUM_TO_LONG (Wrd105.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd106.Lng))))
    goto label_98;
  (Wrd98.Obj) = ((Wrd104.pObj) [1]);

DEFLABEL (label_97)
  (Wrd114.Obj) = (* (Rsp++));
  if (! ((Wrd98.Obj) == (Wrd114.Obj)))
    goto label_82;
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd127.Obj) = (Rsp [2]);
  (Wrd128.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if (! ((Wrd128.uLng) == 10))
    goto label_96;
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd127.Obj));
  (Wrd125.Obj) = ((Wrd124.pObj) [0]);
  (Wrd126.Lng) = (FIXNUM_TO_LONG (Wrd125.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd126.Lng))))
    goto label_96;
  (Wrd120.Obj) = ((Wrd124.pObj) [4]);
  (* (--Rsp)) = (Wrd120.Obj);

DEFLABEL (label_95)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_40]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_1_27);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_82;
  (Wrd173.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd173.Obj);
  (Wrd183.Obj) = (Rsp [2]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if (! ((Wrd184.uLng) == 10))
    goto label_94;
  (Wrd180.pObj) = (OBJECT_ADDRESS (Wrd183.Obj));
  (Wrd181.Obj) = ((Wrd180.pObj) [0]);
  (Wrd182.Lng) = (FIXNUM_TO_LONG (Wrd181.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd182.Lng))))
    goto label_94;
  (Wrd176.Obj) = ((Wrd180.pObj) [4]);
  (* (--Rsp)) = (Wrd176.Obj);

DEFLABEL (label_93)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_1_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_84;
  (Wrd199.Obj) = (Rsp [0]);
  if (! ((Wrd199.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_82;
  (Wrd202.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [4]));
  (* (--Rsp)) = (Wrd202.Obj);
  goto label_80;

DEFLABEL (label_84)
  (Wrd203.Obj) = (Rsp [0]);
  if (! ((Wrd203.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_85;
  (Wrd258.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd258.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (label_85)
  (Wrd214.Obj) = (Rsp [2]);
  (Wrd215.uLng) = (OBJECT_TYPE (Wrd214.Obj));
  if (! ((Wrd215.uLng) == 10))
    goto label_92;
  (Wrd211.pObj) = (OBJECT_ADDRESS (Wrd214.Obj));
  (Wrd212.Obj) = ((Wrd211.pObj) [0]);
  (Wrd213.Lng) = (FIXNUM_TO_LONG (Wrd212.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd213.Lng))))
    goto label_92;
  (Wrd205.Obj) = ((Wrd211.pObj) [4]);

DEFLABEL (label_91)
  (Rsp [2]) = (Wrd205.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd230.Obj) = (Rsp [0]);
  (Wrd231.uLng) = (OBJECT_TYPE (Wrd230.Obj));
  if (! ((Wrd231.uLng) == 10))
    goto label_90;
  (Wrd227.pObj) = (OBJECT_ADDRESS (Wrd230.Obj));
  (Wrd228.Obj) = ((Wrd227.pObj) [0]);
  (Wrd229.Lng) = (FIXNUM_TO_LONG (Wrd228.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd229.Lng))))
    goto label_90;
  (Wrd221.Obj) = ((Wrd227.pObj) [4]);

DEFLABEL (label_89)
  (Wrd237.Obj) = (Rsp [2]);
  if ((Wrd237.Obj) == (Wrd221.Obj))
    goto label_88;
  (* (--Rsp)) = (Wrd237.Obj);
  (Wrd248.Obj) = (Rsp [1]);
  (Wrd249.uLng) = (OBJECT_TYPE (Wrd248.Obj));
  if (! ((Wrd249.uLng) == 10))
    goto label_87;
  (Wrd245.pObj) = (OBJECT_ADDRESS (Wrd248.Obj));
  (Wrd246.Obj) = ((Wrd245.pObj) [0]);
  (Wrd247.Lng) = (FIXNUM_TO_LONG (Wrd246.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd247.Lng))))
    goto label_87;
  (Wrd239.Obj) = ((Wrd245.pObj) [4]);

DEFLABEL (label_86)
  (Rsp [1]) = (Wrd239.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (label_87)
  (Wrd250.Obj) = (Rsp [1]);
  (Wrd251.Obj) = (current_block [OBJECT_1_8]);
  (Wrd254.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd254.Obj);
  (* (--Rsp)) = (Wrd251.Obj);
  (* (--Rsp)) = (Wrd250.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_59)
  (Wrd239.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_88)
  Rsp = (& (Rsp [2]));
  goto label_81;

DEFLABEL (label_90)
  (Wrd232.Obj) = (Rsp [0]);
  (Wrd233.Obj) = (current_block [OBJECT_1_8]);
  (Wrd236.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd236.Obj);
  (* (--Rsp)) = (Wrd233.Obj);
  (* (--Rsp)) = (Wrd232.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_58)
  (Wrd221.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd216.Obj) = (Rsp [2]);
  (Wrd217.Obj) = (current_block [OBJECT_1_8]);
  (Wrd220.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd220.Obj);
  (* (--Rsp)) = (Wrd217.Obj);
  (* (--Rsp)) = (Wrd216.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_57)
  (Wrd205.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd185.Obj) = (Rsp [2]);
  (Wrd186.Obj) = (current_block [OBJECT_1_8]);
  (Wrd189.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd189.Obj);
  (* (--Rsp)) = (Wrd186.Obj);
  (* (--Rsp)) = (Wrd185.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd129.Obj) = (Rsp [2]);
  (Wrd130.Obj) = (current_block [OBJECT_1_8]);
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_39]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd109.Obj) = (Rsp [2]);
  (Wrd110.Obj) = (current_block [OBJECT_1_7]);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_38]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_53)
  (Wrd98.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_37])), (Wrd93.pObj));

DEFLABEL (label_52)
  (Wrd92.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd87.Obj) = (current_block [OBJECT_1_7]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_51)
  (Wrd78.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_35]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_13]), 1);

DEFLABEL (label_50)
  (Wrd71.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd66.Obj) = (Rsp [8]);
  (Wrd67.Obj) = (current_block [OBJECT_1_12]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_49)
  (Wrd55.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_33])), (Wrd50.pObj));

DEFLABEL (label_48)
  (Wrd49.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_109;

DEFLABEL (label_112)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.Obj) = (current_block [OBJECT_1_7]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_46)
  (Wrd51.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd46.pObj));

DEFLABEL (label_45)
  (Wrd45.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_1_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_1_6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.Obj) = (current_block [OBJECT_1_4]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_1_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_41)
  (Wrd5.Obj) = Rvl;
  goto label_121;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_1_41);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_45]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_8 5
#define LABEL_2_5 7
#define TAG_2_6 2
#define LABEL_2_10 9
#define LABEL_2_7 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_13 17
#define TAG_2_14 7
#define LABEL_2_17 19
#define LABEL_2_15 21
#define LABEL_2_18 23
#define LABEL_2_20 25
#define LABEL_2_21 27
#define LABEL_2_22 29
#define LABEL_2_24 31
#define TAG_2_25 14
#define LABEL_2_27 33
#define LABEL_2_26 35
#define LABEL_2_29 37
#define LABEL_2_31 39
#define TAG_2_32 18
#define ENVIRONMENT_LABEL_2_3 65
#define DEBUGGING_LABEL_2_2 64
#define OBJECT_2_7 63
#define OBJECT_2_6 62
#define OBJECT_2_5 61
#define OBJECT_2_4 60
#define OBJECT_2_3 59
#define OBJECT_2_2 58
#define OBJECT_2_1 57
#define OBJECT_2_0 56
#define EXECUTE_CACHE_2_30 41
#define EXECUTE_CACHE_2_28 43
#define EXECUTE_CACHE_2_23 45
#define EXECUTE_CACHE_2_19 47
#define EXECUTE_CACHE_2_16 49
#define EXECUTE_CACHE_2_9 51
#define FREE_REFERENCE_2_1 54
#define FREE_REFERENCE_2_0 55
#define FREE_REFERENCES_LABEL_2_0 40
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reuse_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd61;
  machine_word Wrd38;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_2_4);
      goto order_subproblems_maybe_overwrite_block_21;

    case 1:
      current_block = (Rpc - LABEL_2_8);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_2;

    case 3:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto lambda_33;

    case 8:
      current_block = (Rpc - LABEL_2_17);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_18;

    case 10:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_2_20);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_2_21);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_2_24);
      goto lambda_34;

    case 15:
      current_block = (Rpc - LABEL_2_27);
      goto label_29;

    case 16:
      current_block = (Rpc - LABEL_2_26);
      goto continuation_11;

    case 17:
      current_block = (Rpc - LABEL_2_29);
      goto continuation_12;

    case 18:
      current_block = (Rpc - LABEL_2_31);
      goto lambda_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (order_subproblems_maybe_overwrite_block_31)
DEFLABEL (order_subproblems_maybe_overwrite_block_21)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [4]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_46;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd20.Lng))))
    goto label_46;
  (Wrd14.Obj) = ((Wrd18.pObj) [9]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_44;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd16.Lng))))
    goto label_44;
  (Wrd10.Obj) = ((Wrd14.pObj) [17]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_43)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_42;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_41)
  if ((Wrd26.Obj) == (current_block [OBJECT_2_4]))
    goto label_39;

DEFLABEL (label_38)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_37)
  (Wrd38.Obj) = (Rsp [0]);
  if (! ((Wrd38.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_36;
  (Wrd61.Obj) = (Rsp [2]);
  (Rsp [7]) = (Wrd61.Obj);
  Rsp = (& (Rsp [7]));
  goto lambda_2;

DEFLABEL (label_36)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_13])));
  Rhp += 6;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  Wrd53 = Wrd42;
  (Wrd54.Obj) = (Rsp [6]);
  ((Wrd53.pObj) [2]) = (Wrd54.Obj);
  (Wrd52.Obj) = (Rsp [5]);
  ((Wrd53.pObj) [3]) = (Wrd52.Obj);
  (Wrd50.Obj) = (Rsp [3]);
  ((Wrd53.pObj) [4]) = (Wrd50.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  ((Wrd53.pObj) [5]) = (Wrd48.Obj);
  (Wrd46.Obj) = (Rsp [1]);
  ((Wrd53.pObj) [6]) = (Wrd46.Obj);
  ((Wrd53.pObj) [7]) = (Wrd38.Obj);
  (Rsp [7]) = (Wrd41.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd60.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_39)
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 1)
    goto label_40;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_40)
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd64.Obj) = ((Wrd66.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd64.Obj);
  goto label_37;

DEFLABEL (label_42)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_25)
  (Wrd26.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_2_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_2_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (lambda_32)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_2_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_2_13);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_53;
  Wrd5 = Wrd9;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_51;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_51;
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd62.Lng) < (Wrd63.Lng))
    goto label_48;

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [5]);
  (Rsp [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_2;

DEFLABEL (label_48)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [4]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_50;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd47.Lng))))
    goto label_50;
  (Wrd39.Obj) = ((Wrd49.pObj) [7]);
  ((Wrd45.pObj) [18]) = (Wrd39.Obj);

DEFLABEL (label_49)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = ((Wrd23.pObj) [7]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = ((Wrd23.pObj) [6]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_2_22);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_24])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_50)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd54.pObj) [4]);
  (Wrd55.Obj) = (current_block [OBJECT_2_6]);
  (Wrd56.Obj) = ((Wrd54.pObj) [7]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_7]), 3);

DEFLABEL (label_28)
  goto label_49;

DEFLABEL (label_51)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_48;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_17])), (Wrd6.pObj));

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_52;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_2_24);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_55;
  Wrd15 = Wrd19;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_26);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_30]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_29);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_31])));
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

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_27])), (Wrd16.pObj));

DEFLABEL (label_29)
  (Wrd15.Obj) = Rvl;
  goto label_54;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_2_31);

DEFLABEL (lambda_13)
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

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_9 9
#define LABEL_3_10 11
#define LABEL_3_15 13
#define LABEL_3_11 15
#define LABEL_3_21 17
#define LABEL_3_12 19
#define LABEL_3_13 21
#define LABEL_3_18 23
#define TAG_3_19 10
#define LABEL_3_20 25
#define LABEL_3_22 27
#define LABEL_3_25 29
#define LABEL_3_26 31
#define LABEL_3_33 33
#define LABEL_3_34 35
#define LABEL_3_35 37
#define LABEL_3_36 39
#define LABEL_3_28 41
#define LABEL_3_29 43
#define LABEL_3_16 45
#define TAG_3_17 21
#define LABEL_3_31 47
#define TAG_3_32 22
#define LABEL_3_39 49
#define TAG_3_40 23
#define ENVIRONMENT_LABEL_3_3 77
#define DEBUGGING_LABEL_3_2 76
#define OBJECT_3_6 75
#define OBJECT_3_5 74
#define OBJECT_3_4 73
#define OBJECT_3_3 72
#define OBJECT_3_2 71
#define OBJECT_3_1 70
#define OBJECT_3_0 69
#define EXECUTE_CACHE_3_38 51
#define EXECUTE_CACHE_3_37 53
#define EXECUTE_CACHE_3_30 55
#define EXECUTE_CACHE_3_27 57
#define EXECUTE_CACHE_3_24 59
#define EXECUTE_CACHE_3_23 61
#define EXECUTE_CACHE_3_14 63
#define EXECUTE_CACHE_3_8 65
#define EXECUTE_CACHE_3_6 67
#define FREE_REFERENCES_LABEL_3_0 50
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reuse_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_3_4);
      goto subproblems__nodes_34;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_13;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_15;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_16;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto label_36;

    case 5:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_28;

    case 6:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_23;

    case 7:
      current_block = (Rpc - LABEL_3_21);
      goto lambda_21;

    case 8:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_27;

    case 9:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_26;

    case 10:
      current_block = (Rpc - LABEL_3_18);
      goto lambda_44;

    case 11:
      current_block = (Rpc - LABEL_3_20);
      goto lambda_12;

    case 12:
      current_block = (Rpc - LABEL_3_22);
      goto continuation_17;

    case 13:
      current_block = (Rpc - LABEL_3_25);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_3_26);
      goto lambda_10;

    case 15:
      current_block = (Rpc - LABEL_3_33);
      goto label_37;

    case 16:
      current_block = (Rpc - LABEL_3_34);
      goto label_38;

    case 17:
      current_block = (Rpc - LABEL_3_35);
      goto label_39;

    case 18:
      current_block = (Rpc - LABEL_3_36);
      goto label_40;

    case 19:
      current_block = (Rpc - LABEL_3_28);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_3_29);
      goto continuation_18;

    case 21:
      current_block = (Rpc - LABEL_3_16);
      goto lambda_43;

    case 22:
      current_block = (Rpc - LABEL_3_31);
      goto lambda_47;

    case 23:
      current_block = (Rpc - LABEL_3_39);
      goto lambda_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subproblems__nodes_42)
DEFLABEL (subproblems__nodes_34)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_53;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_53;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd34.Lng) < (Wrd36.Lng))
    goto label_52;

DEFLABEL (label_51)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.pObj) = (& (Rsp [2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto lambda_21;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_18])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Wrd11 = Wrd7;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_50)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.pObj) = (& (Rsp [2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (* (--Rsp)) = Rvl;
  goto lambda_21;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_3_12);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_16])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  (Wrd23.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  Wrd11 = Wrd18;
  Rsp = (& (Rsp [2]));
  goto label_50;

DEFLABEL (label_53)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_52;

DEFLABEL (lambda_45)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_3_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_3_22);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_29]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_30]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_3_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_38]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_3_28);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_37]));

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_3_18);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd8.Obj);
  goto lambda_12;

DEFLABEL (lambda_46)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_3_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_27]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_25);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_31])));
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

DEFLABEL (lambda_48)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_3_26);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_65;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_65;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_64)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == (current_block [OBJECT_3_0]))
    goto label_57;
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_63;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_62)
  if ((Wrd23.Obj) == (current_block [OBJECT_3_0]))
    goto label_56;

DEFLABEL (label_55)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_54)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 62))
    goto label_61;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd43.Lng))))
    goto label_61;
  (Wrd37.Obj) = ((Wrd41.pObj) [2]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_60)
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_59;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [0]);

DEFLABEL (label_58)
  (Wrd60.Obj) = (* (Rsp++));
  if (! ((Wrd51.Obj) == (Wrd60.Obj)))
    goto label_55;

DEFLABEL (label_57)
  Rvl = (current_block [OBJECT_3_6]);
  goto label_54;

DEFLABEL (label_59)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_36]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_5]), 1);

DEFLABEL (label_40)
  (Wrd51.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (current_block [OBJECT_3_4]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_35]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_38)
  (Wrd23.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_3_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_3_16);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd8.Obj);
  goto lambda_12;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_3_31);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_39])));
  Rhp += 3;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd17 = Wrd12;
  ((Wrd17.pObj) [2]) = (Wrd7.Obj);
  ((Wrd17.pObj) [3]) = (Wrd6.Obj);
  ((Wrd17.pObj) [4]) = (Wrd5.Obj);
  Rvl = (Wrd11.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_3_39);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_8 7
#define LABEL_4_9 9
#define LABEL_4_12 11
#define LABEL_4_6 13
#define LABEL_4_13 15
#define LABEL_4_14 17
#define LABEL_4_11 19
#define LABEL_4_16 21
#define ENVIRONMENT_LABEL_4_3 37
#define DEBUGGING_LABEL_4_2 36
#define OBJECT_4_4 35
#define OBJECT_4_3 34
#define OBJECT_4_2 33
#define OBJECT_4_1 32
#define OBJECT_4_0 31
#define EXECUTE_CACHE_4_17 23
#define EXECUTE_CACHE_4_15 25
#define EXECUTE_CACHE_4_10 27
#define EXECUTE_CACHE_4_7 29
#define FREE_REFERENCES_LABEL_4_0 22
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reuse_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
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
      current_block = (Rpc - LABEL_4_4);
      goto overwritten_objectsB_14;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_8);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_4_12);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_4_13);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_4_14);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_4_16);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (overwritten_objectsB_21)
DEFLABEL (overwritten_objectsB_14)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto loop_7;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_27;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_27;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd35.Lng) < (Wrd37.Lng))
    goto label_24;

DEFLABEL (label_23)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd17.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd17.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_26;
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_26;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd30.Lng) - (Wrd32.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_26;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));

DEFLABEL (label_25)
  (Rsp [4]) = (Wrd23.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (label_26)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_19)
  (Wrd23.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_24;

DEFLABEL (loop_22)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_4_8);
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_32;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd42.Lng))))
    goto label_32;
  (Wrd36.Obj) = (current_block [OBJECT_4_0]);
  ((Wrd40.pObj) [21]) = (Wrd36.Obj);

DEFLABEL (label_31)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  if (! ((Wrd5.Obj) == (Wrd8.Obj)))
    goto label_28;
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (label_28)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_30;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd24.Lng))))
    goto label_30;
  (Wrd18.Obj) = ((Wrd22.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_29)
  goto loop_7;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_16);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (label_30)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (current_block [OBJECT_4_3]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (current_block [OBJECT_4_1]);
  (Wrd47.Obj) = (current_block [OBJECT_4_0]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 3);

DEFLABEL (label_17)
  goto label_31;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_9 9
#define LABEL_5_10 11
#define LABEL_5_7 13
#define LABEL_5_8 15
#define LABEL_5_16 17
#define LABEL_5_12 19
#define LABEL_5_17 21
#define LABEL_5_14 23
#define LABEL_5_18 25
#define LABEL_5_20 27
#define LABEL_5_21 29
#define LABEL_5_22 31
#define ENVIRONMENT_LABEL_5_3 53
#define DEBUGGING_LABEL_5_2 52
#define OBJECT_5_8 51
#define OBJECT_5_7 50
#define OBJECT_5_6 49
#define OBJECT_5_5 48
#define OBJECT_5_4 47
#define OBJECT_5_3 46
#define OBJECT_5_2 45
#define OBJECT_5_1 44
#define OBJECT_5_0 43
#define EXECUTE_CACHE_5_23 33
#define EXECUTE_CACHE_5_19 35
#define EXECUTE_CACHE_5_15 37
#define EXECUTE_CACHE_5_13 39
#define EXECUTE_CACHE_5_11 41
#define FREE_REFERENCES_LABEL_5_0 32
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reuse_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd8;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd58;
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
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_5_4);
      goto block_layout_19;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_5_8);
      goto lambda_9;

    case 7:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_5_12);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_5_17);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_5_14);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_5_18);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_5_20);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_5_21);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_5_22);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_layout_30)
DEFLABEL (block_layout_19)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_56;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_56;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_55)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_54;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd29.Lng))))
    goto label_54;
  (Wrd23.Obj) = ((Wrd27.pObj) [7]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_53)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_52;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd50.Lng))))
    goto label_52;
  (Wrd42.Obj) = ((Wrd48.pObj) [6]);

DEFLABEL (label_51)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_50;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [1]);
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_49)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;

DEFLABEL (label_34)
  (Wrd11.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_32;

DEFLABEL (label_33)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.Obj) = (current_block [OBJECT_5_5]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_32)
DEFLABEL (label_48)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_47;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd20.Lng))))
    goto label_47;
  (Wrd14.Obj) = ((Wrd18.pObj) [9]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_46)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;

DEFLABEL (label_42)
  (Wrd7.Obj) = (current_block [OBJECT_5_5]);

DEFLABEL (label_41)
  (Rsp [5]) = (Wrd7.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_40;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd37.Lng))))
    goto label_40;
  (Wrd10.Obj) = ((Wrd35.pObj) [8]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;

DEFLABEL (label_38)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_37;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd21.Lng))))
    goto label_37;
  (Wrd13.Obj) = ((Wrd19.pObj) [8]);

DEFLABEL (label_36)
  (Wrd31.Obj) = (current_block [OBJECT_5_5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));

DEFLABEL (label_35)
  (Rsp [4]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (label_37)
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.Obj) = (current_block [OBJECT_5_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_26)
  (Wrd13.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd12.Obj) = (current_block [OBJECT_5_5]);
  goto label_35;

DEFLABEL (label_40)
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.Obj) = (current_block [OBJECT_5_0]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_38;

DEFLABEL (label_43)
  (Wrd60.Obj) = (Rsp [5]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_45;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd59.Lng))))
    goto label_45;
  (Wrd48.Obj) = ((Wrd57.pObj) [18]);
  if ((Wrd48.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;

DEFLABEL (label_44)
  (Wrd52.Obj) = (Rsp [5]);
  (Wrd53.Obj) = (current_block [OBJECT_5_5]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  goto label_41;

DEFLABEL (label_45)
  (Wrd62.Obj) = (Rsp [5]);
  (Wrd63.Obj) = (current_block [OBJECT_5_8]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_44;

DEFLABEL (label_47)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_5_6]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_50)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.Obj) = (current_block [OBJECT_5_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_23)
  (Wrd42.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_5_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (lambda_31)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_5_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_14);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  Rvl = Rvl;

DEFLABEL (label_57)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5_7]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_60;

DEFLABEL (label_59)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_60)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd20.Lng))))
    goto label_59;
  Rvl = ((Wrd18.pObj) [22]);
  goto label_57;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_9 7
#define TAG_6_10 2
#define LABEL_6_11 9
#define LABEL_6_7 11
#define TAG_6_8 4
#define LABEL_6_14 13
#define LABEL_6_16 15
#define LABEL_6_17 17
#define LABEL_6_18 19
#define LABEL_6_19 21
#define LABEL_6_20 23
#define LABEL_6_23 25
#define LABEL_6_12 27
#define TAG_6_13 12
#define LABEL_6_24 29
#define LABEL_6_22 31
#define LABEL_6_25 33
#define LABEL_6_27 35
#define LABEL_6_28 37
#define LABEL_6_29 39
#define ENVIRONMENT_LABEL_6_3 60
#define DEBUGGING_LABEL_6_2 59
#define OBJECT_6_7 58
#define OBJECT_6_6 57
#define OBJECT_6_5 56
#define OBJECT_6_4 55
#define OBJECT_6_3 54
#define OBJECT_6_2 53
#define OBJECT_6_1 52
#define OBJECT_6_0 51
#define EXECUTE_CACHE_6_26 41
#define EXECUTE_CACHE_6_21 43
#define EXECUTE_CACHE_6_15 45
#define EXECUTE_CACHE_6_6 47
#define FREE_REFERENCE_6_0 50
#define FREE_REFERENCES_LABEL_6_0 40
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reuse_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd57;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_6_4);
      goto subproblem_dependency_set_26;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_9);
      goto lambda_41;

    case 3:
      current_block = (Rpc - LABEL_6_11);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_6_7);
      goto lambda_40;

    case 5:
      current_block = (Rpc - LABEL_6_14);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_6_16);
      goto continuation_15;

    case 7:
      current_block = (Rpc - LABEL_6_17);
      goto loop_19;

    case 8:
      current_block = (Rpc - LABEL_6_18);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_6_19);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_6_20);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_6_23);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_6_12);
      goto lambda_42;

    case 13:
      current_block = (Rpc - LABEL_6_24);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_6_22);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_6_25);
      goto label_37;

    case 16:
      current_block = (Rpc - LABEL_6_27);
      goto label_36;

    case 17:
      current_block = (Rpc - LABEL_6_28);
      goto label_34;

    case 18:
      current_block = (Rpc - LABEL_6_29);
      goto label_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subproblem_dependency_set_39)
DEFLABEL (subproblem_dependency_set_26)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_44;

DEFLABEL (label_45)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_44)
DEFLABEL (label_49)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_9])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  ((Wrd15.pObj) [3]) = (Wrd8.Obj);
  Rvl = (Wrd11.Obj);
  goto label_46;

DEFLABEL (label_47)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_7])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd20 = Wrd19;
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  Rvl = (Wrd18.Obj);

DEFLABEL (label_46)
DEFLABEL (label_48)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_6_9);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_51;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_51;
  (Wrd9.Obj) = ((Wrd13.pObj) [6]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_50)
  goto loop_19;

DEFLABEL (label_51)
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.Obj) = (current_block [OBJECT_6_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_6_7);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_12])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_53;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd19.Lng))))
    goto label_53;
  (Wrd11.Obj) = ((Wrd17.pObj) [6]);

DEFLABEL (label_52)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd27.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (label_53)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_6_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_29)
  (Wrd11.Obj) = Rvl;
  goto label_52;

DEFLABEL (loop_43)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_6_17);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_6_0]))
    goto label_67;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_66;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_65)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_57;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_56)
  (Wrd19.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_55;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_54)
  (Rsp [0]) = (Wrd20.Obj);
  goto loop_19;

DEFLABEL (label_55)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_29]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_35)
  (Wrd20.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_6]), 1);

DEFLABEL (label_34)
  (Wrd7.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_62;
  Wrd35 = Wrd32;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_61)
  (Rsp [2]) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_60;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_59)
  (Rsp [0]) = (Wrd36.Obj);
  goto loop_19;

DEFLABEL (label_60)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_27]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_36)
  (Wrd36.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_64;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_63)
  (Wrd54.Obj) = (Rsp [5]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [3]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_26]));

DEFLABEL (label_64)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_6]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_6]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_67)
  (Wrd22.Obj) = (Rsp [2]);
  if ((Wrd22.Obj) == ((SCHEME_OBJECT) 0))
    goto label_70;

DEFLABEL (label_69)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [3]);
  (Wrd31.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));

DEFLABEL (label_68)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd44.Obj) = (Rsp [5]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 62))
    goto label_78;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd43.Lng))))
    goto label_78;
  (Wrd37.Obj) = ((Wrd41.pObj) [4]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_77)
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd55.Obj) = ((Wrd52.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_76;
  Wrd51 = Wrd55;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 10))
    goto label_74;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd65.Lng))))
    goto label_74;
  (Wrd57.Obj) = ((Wrd63.pObj) [1]);

DEFLABEL (label_73)
  (Wrd73.Obj) = (* (Rsp++));
  if (! ((Wrd57.Obj) == (Wrd73.Obj)))
    goto label_71;
  (Wrd77.Obj) = (Rsp [5]);
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [3]);
  (* (--Rsp)) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_21]));

DEFLABEL (label_71)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_72)
  Rvl = (Rsp [1]);
  goto label_68;

DEFLABEL (label_74)
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.Obj) = (current_block [OBJECT_6_4]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 2);

DEFLABEL (label_33)
  (Wrd57.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_19])), (Wrd52.pObj));

DEFLABEL (label_32)
  (Wrd51.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd46.Obj) = (Rsp [5]);
  (Wrd47.Obj) = (current_block [OBJECT_6_3]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_24);
  (Wrd35.Obj) = Rvl;
  goto label_61;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_6_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  goto label_69;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_6_12);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_8 7
#define LABEL_7_9 9
#define LABEL_7_10 11
#define LABEL_7_6 13
#define LABEL_7_11 15
#define LABEL_7_12 17
#define LABEL_7_13 19
#define LABEL_7_15 21
#define LABEL_7_16 23
#define LABEL_7_20 25
#define LABEL_7_18 27
#define LABEL_7_22 29
#define LABEL_7_23 31
#define LABEL_7_24 33
#define LABEL_7_25 35
#define LABEL_7_27 37
#define ENVIRONMENT_LABEL_7_3 66
#define DEBUGGING_LABEL_7_2 65
#define OBJECT_7_9 64
#define OBJECT_7_8 63
#define OBJECT_7_7 62
#define OBJECT_7_6 61
#define OBJECT_7_5 60
#define OBJECT_7_4 59
#define OBJECT_7_3 58
#define OBJECT_7_2 57
#define OBJECT_7_1 56
#define OBJECT_7_0 55
#define EXECUTE_CACHE_7_26 39
#define EXECUTE_CACHE_7_21 41
#define EXECUTE_CACHE_7_19 43
#define EXECUTE_CACHE_7_17 45
#define EXECUTE_CACHE_7_14 47
#define EXECUTE_CACHE_7_7 49
#define FREE_REFERENCE_7_2 52
#define FREE_REFERENCE_7_1 53
#define FREE_REFERENCE_7_0 54
#define FREE_REFERENCES_LABEL_7_0 38
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reuse_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd58;
  machine_word Wrd27;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd75;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd56;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd59;
  machine_word Wrd120;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd102;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_7_4);
      goto block_dependencyP_26;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto label_34;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_7_11);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_7_12);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_7_13);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_7_15);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_7_16);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_7_20);
      goto continuation_24;

    case 12:
      current_block = (Rpc - LABEL_7_18);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_7_22);
      goto loop_19;

    case 14:
      current_block = (Rpc - LABEL_7_23);
      goto label_35;

    case 15:
      current_block = (Rpc - LABEL_7_24);
      goto label_36;

    case 16:
      current_block = (Rpc - LABEL_7_25);
      goto label_38;

    case 17:
      current_block = (Rpc - LABEL_7_27);
      goto label_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_dependencyP_40)
DEFLABEL (block_dependencyP_26)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_68;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd13.Lng))))
    goto label_68;
  (Wrd7.Obj) = ((Wrd11.pObj) [15]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_67)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_21]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_7_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (label_43)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_66;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd19.Lng))))
    goto label_66;
  (Wrd13.Obj) = ((Wrd17.pObj) [10]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_65)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_63;
  Wrd32 = Wrd36;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_61;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd46.Lng))))
    goto label_61;
  (Wrd38.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_60)
  (Wrd54.Obj) = (* (Rsp++));
  if (! ((Wrd38.Obj) == (Wrd54.Obj)))
    goto label_46;
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd98.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd98.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd111.Obj) = (Rsp [3]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd112.uLng) == 10))
    goto label_59;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd109.Obj) = ((Wrd108.pObj) [0]);
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd110.Lng))))
    goto label_59;
  (Wrd102.Obj) = ((Wrd108.pObj) [8]);

DEFLABEL (label_58)
  (Wrd118.Obj) = (Rsp [1]);
  if ((Wrd118.Obj) == (Wrd102.Obj))
    goto label_45;

DEFLABEL (label_46)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_44;

DEFLABEL (label_45)
  (Wrd120.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd120.Obj);

DEFLABEL (label_44)
DEFLABEL (label_57)
  (Wrd56.Obj) = (Rsp [0]);
  if ((Wrd56.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;
  Wrd59 = Wrd56;

DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_49)
  (Rsp [0]) = (Wrd59.Obj);
  if ((Wrd59.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  Rvl = (Wrd59.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_7_18);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  goto loop_19;

DEFLABEL (label_51)
  (Wrd70.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd73.Obj) = ((Wrd70.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 50)
    goto label_56;
  Wrd69 = Wrd73;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd84.Obj) = (Rsp [3]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 10))
    goto label_54;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd83.Lng))))
    goto label_54;
  (Wrd75.Obj) = ((Wrd81.pObj) [1]);

DEFLABEL (label_53)
  (Wrd91.Obj) = (* (Rsp++));
  if (! ((Wrd75.Obj) == (Wrd91.Obj)))
    goto label_52;
  (Wrd93.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd94.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd94.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (label_52)
  (Wrd59.Obj) = (current_block [OBJECT_7_6]);
  goto label_50;

DEFLABEL (label_54)
  (Wrd86.Obj) = (Rsp [3]);
  (Wrd87.Obj) = (current_block [OBJECT_7_5]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_33)
  (Wrd75.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_15])), (Wrd70.pObj));

DEFLABEL (label_32)
  (Wrd69.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_59)
  (Wrd113.Obj) = (Rsp [3]);
  (Wrd114.Obj) = (current_block [OBJECT_7_2]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_34)
  (Wrd102.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.Obj) = (current_block [OBJECT_7_5]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_31)
  (Wrd38.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_12])), (Wrd33.pObj));

DEFLABEL (label_30)
  (Wrd32.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_64)
  (Wrd59.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_49;

DEFLABEL (label_66)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_7_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_7_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (Wrd59.Obj) = Rvl;
  goto label_49;

DEFLABEL (loop_41)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_7_22);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_78;
  Wrd5 = Wrd9;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_76;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_76;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_75)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_72;
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_71;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd36.Lng))))
    goto label_71;
  (Wrd28.Obj) = ((Wrd34.pObj) [4]);

DEFLABEL (label_70)
  (Rsp [0]) = (Wrd28.Obj);
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_69;
  goto loop_19;

DEFLABEL (label_69)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_7_9]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_27]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_37)
  (Wrd28.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd48.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_74;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd57.Lng))))
    goto label_74;
  (Wrd49.Obj) = ((Wrd55.pObj) [9]);

DEFLABEL (label_73)
  (Rsp [2]) = (Wrd49.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_26]));

DEFLABEL (label_74)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.Obj) = (current_block [OBJECT_7_8]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_25]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_38)
  (Wrd49.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_7_7]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_24]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_36)
  (Wrd11.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_23])), (Wrd6.pObj));

DEFLABEL (label_35)
  (Wrd5.Obj) = Rvl;
  goto label_77;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_8 9
#define LABEL_8_9 11
#define LABEL_8_11 13
#define LABEL_8_12 15
#define LABEL_8_13 17
#define ENVIRONMENT_LABEL_8_3 31
#define DEBUGGING_LABEL_8_2 30
#define OBJECT_8_4 29
#define OBJECT_8_3 28
#define OBJECT_8_2 27
#define OBJECT_8_1 26
#define OBJECT_8_0 25
#define EXECUTE_CACHE_8_10 19
#define EXECUTE_CACHE_8_6 21
#define FREE_REFERENCE_8_0 24
#define FREE_REFERENCES_LABEL_8_0 18
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reuse_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_8_4);
      goto block_sharesP_9;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_8_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_8_12);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_8_13);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_sharesP_17)
DEFLABEL (block_sharesP_9)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = Rvl;

DEFLABEL (label_18)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_34;
  Wrd9 = Wrd13;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_32;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd23.Lng))))
    goto label_32;
  (Wrd15.Obj) = ((Wrd21.pObj) [3]);

DEFLABEL (label_31)
  (Wrd31.Obj) = (* (Rsp++));
  if (! ((Wrd15.Obj) == (Wrd31.Obj)))
    goto label_30;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_29;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd16.Lng))))
    goto label_29;
  (Wrd10.Obj) = ((Wrd14.pObj) [17]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_28)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_27;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_27;
  (Wrd24.Obj) = ((Wrd30.pObj) [4]);

DEFLABEL (label_26)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_25;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd46.Lng))))
    goto label_25;
  (Wrd40.Obj) = ((Wrd44.pObj) [17]);

DEFLABEL (label_24)
  (Wrd53.Obj) = (* (Rsp++));
  if ((Wrd40.Obj) == (Wrd53.Obj))
    goto label_21;

DEFLABEL (label_22)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_20;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_8_4]);

DEFLABEL (label_20)
DEFLABEL (label_23)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd49.Obj) = (current_block [OBJECT_8_2]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_15)
  (Wrd40.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_8_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_14)
  (Wrd24.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_8_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_18;

DEFLABEL (label_32)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (current_block [OBJECT_8_0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_12)
  (Wrd15.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_7])), (Wrd10.pObj));

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_10 7
#define LABEL_9_7 9
#define LABEL_9_13 11
#define LABEL_9_8 13
#define LABEL_9_16 15
#define LABEL_9_11 17
#define LABEL_9_12 19
#define LABEL_9_24 21
#define LABEL_9_14 23
#define LABEL_9_19 25
#define TAG_9_20 11
#define LABEL_9_22 27
#define TAG_9_23 12
#define ENVIRONMENT_LABEL_9_3 51
#define DEBUGGING_LABEL_9_2 50
#define EXECUTE_CACHE_9_27 29
#define EXECUTE_CACHE_9_26 31
#define EXECUTE_CACHE_9_25 33
#define EXECUTE_CACHE_9_21 35
#define EXECUTE_CACHE_9_18 37
#define EXECUTE_CACHE_9_17 39
#define EXECUTE_CACHE_9_15 41
#define EXECUTE_CACHE_9_9 43
#define EXECUTE_CACHE_9_6 45
#define FREE_REFERENCE_9_1 48
#define FREE_REFERENCE_9_0 49
#define FREE_REFERENCES_LABEL_9_0 28
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reuse_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_9_4);
      goto order_subproblems_overwrite_block_16;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_9_13);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_9_24);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_9_19);
      goto lambda_22;

    case 12:
      current_block = (Rpc - LABEL_9_22);
      goto lambda_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (order_subproblems_overwrite_block_21)
DEFLABEL (order_subproblems_overwrite_block_16)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_28;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_16);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_19])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9_10);

DEFLABEL (label_28)
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_27;
  Wrd22 = Wrd26;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_26]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_25;
  Wrd5 = Wrd9;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [5]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_22])));
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

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_24])), (Wrd6.pObj));

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_13])), (Wrd23.pObj));

DEFLABEL (label_18)
  (Wrd22.Obj) = Rvl;
  goto label_26;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_9_19);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_27]));

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_9_22);

DEFLABEL (lambda_12)
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
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_8 7
#define LABEL_10_10 9
#define LABEL_10_11 11
#define LABEL_10_14 13
#define LABEL_10_12 15
#define LABEL_10_16 17
#define LABEL_10_17 19
#define LABEL_10_20 21
#define LABEL_10_13 23
#define LABEL_10_22 25
#define LABEL_10_7 27
#define LABEL_10_23 29
#define LABEL_10_18 31
#define LABEL_10_19 33
#define LABEL_10_26 35
#define ENVIRONMENT_LABEL_10_3 59
#define DEBUGGING_LABEL_10_2 58
#define OBJECT_10_5 57
#define OBJECT_10_4 56
#define OBJECT_10_3 55
#define OBJECT_10_2 54
#define OBJECT_10_1 53
#define OBJECT_10_0 52
#define EXECUTE_CACHE_10_25 37
#define EXECUTE_CACHE_10_24 39
#define EXECUTE_CACHE_10_21 41
#define EXECUTE_CACHE_10_15 43
#define EXECUTE_CACHE_10_9 45
#define EXECUTE_CACHE_10_6 47
#define FREE_REFERENCE_10_1 50
#define FREE_REFERENCE_10_0 51
#define FREE_REFERENCES_LABEL_10_0 36
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reuse_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd32;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd45;
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
      current_block = (Rpc - LABEL_10_4);
      goto generate_assignments_16;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_10_10);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_10_11);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_10_14);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_10_12);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_10_16);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_10_17);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_10_20);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_10_13);
      goto lambda_7;

    case 11:
      current_block = (Rpc - LABEL_10_22);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_10_23);
      goto label_26;

    case 14:
      current_block = (Rpc - LABEL_10_18);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_10_19);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_10_26);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_assignments_29)
DEFLABEL (generate_assignments_16)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_10_0])))
    goto label_31;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_47;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_46)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_45;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_45;
  (Wrd17.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_44)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_43;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [1]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_38;
  Wrd7 = Wrd11;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_36)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_35;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_10_19);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_33;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_10_18);
  (Rsp [3]) = Rvl;
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_25]));

DEFLABEL (label_33)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_17])), (Wrd8.pObj));

DEFLABEL (label_22)
  (Wrd7.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_41;
  Wrd29 = Wrd33;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd29.Obj);
  goto label_36;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_16])), (Wrd30.pObj));

DEFLABEL (label_24)
  (Wrd29.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd25.Obj) = (current_block [OBJECT_10_3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_18)
  (Wrd7.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_48)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_52;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [1]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_50;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);

DEFLABEL (label_49)
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_24]));

DEFLABEL (label_50)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_23]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_26)
  (Wrd6.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (lambda_30)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_10_13);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_56;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_56;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_55)
  (Wrd21.Obj) = (current_block [OBJECT_10_5]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 62)
    goto label_54;

DEFLABEL (label_53)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 2);

DEFLABEL (label_54)
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd31.Lng))))
    goto label_53;
  Rvl = ((Wrd29.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_10_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_55;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_6 9
#define LABEL_11_8 11
#define ENVIRONMENT_LABEL_11_3 19
#define DEBUGGING_LABEL_11_2 18
#define OBJECT_11_2 17
#define OBJECT_11_1 16
#define OBJECT_11_0 15
#define EXECUTE_CACHE_11_9 13
#define FREE_REFERENCES_LABEL_11_0 12
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reuse_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_11_4);
      goto trivial_assignments_7;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto loop_5;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_11_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trivial_assignments_12)
DEFLABEL (trivial_assignments_7)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_5;

DEFLABEL (loop_13)
DEFLABEL (loop_5)
  DLINK_INTERRUPT_CHECK (25, LABEL_11_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_11_0])))
    goto label_14;
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  Rvl = ((Wrd31.pObj) [1]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_14)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_18;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_17)
  Rdl = (& (Rsp [2]));
  goto loop_5;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_16;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_15)
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (label_16)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 1);

DEFLABEL (label_10)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_9)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_8 9
#define LABEL_12_12 11
#define LABEL_12_13 13
#define LABEL_12_15 15
#define LABEL_12_16 17
#define LABEL_12_11 19
#define LABEL_12_9 21
#define ENVIRONMENT_LABEL_12_3 43
#define DEBUGGING_LABEL_12_2 42
#define OBJECT_12_7 41
#define OBJECT_12_6 40
#define OBJECT_12_5 39
#define OBJECT_12_4 38
#define OBJECT_12_3 37
#define OBJECT_12_2 36
#define OBJECT_12_1 35
#define OBJECT_12_0 34
#define EXECUTE_CACHE_12_17 23
#define EXECUTE_CACHE_12_14 25
#define EXECUTE_CACHE_12_10 27
#define EXECUTE_CACHE_12_6 29
#define FREE_REFERENCE_12_1 32
#define FREE_REFERENCE_12_0 33
#define FREE_REFERENCES_LABEL_12_0 22
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reuse_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
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
      goto trivial_assignment_9;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_12_12);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_12_13);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_12_15);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_12_16);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trivial_assignment_17)
DEFLABEL (trivial_assignment_9)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_28;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_28;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_27)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_26;
  Wrd9 = Wrd13;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_24;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd23.Lng))))
    goto label_24;
  (Wrd15.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_23)
  (Wrd31.Obj) = (* (Rsp++));
  if ((Wrd15.Obj) == (Wrd31.Obj))
    goto label_20;

DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_18)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd33.Obj) = (current_block [OBJECT_12_5]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_12_6]);
  (Rsp [2]) = (Wrd35.Obj);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd47.uLng) == 10)
    goto label_22;

DEFLABEL (label_21)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_7]), 3);

DEFLABEL (label_22)
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd45.Lng))))
    goto label_21;
  ((Wrd43.pObj) [23]) = (Wrd35.Obj);
  Rsp = (& (Rsp [4]));
  goto label_18;

DEFLABEL (label_24)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (current_block [OBJECT_12_3]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 2);

DEFLABEL (label_15)
  (Wrd15.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_15])), (Wrd10.pObj));

DEFLABEL (label_14)
  (Wrd9.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_12_2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_33;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd38.Lng))))
    goto label_33;
  (Wrd32.Obj) = ((Wrd36.pObj) [3]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_32)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_31;
  Wrd46 = Wrd50;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (Rsp [3]) = Rvl;
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_8])), (Wrd47.pObj));

DEFLABEL (label_13)
  (Wrd46.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_12_0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_11);
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_7 9
#define LABEL_13_8 11
#define LABEL_13_9 13
#define LABEL_13_10 15
#define LABEL_13_11 17
#define LABEL_13_12 19
#define LABEL_13_13 21
#define LABEL_13_14 23
#define LABEL_13_15 25
#define LABEL_13_17 27
#define ENVIRONMENT_LABEL_13_3 44
#define DEBUGGING_LABEL_13_2 43
#define OBJECT_13_8 42
#define OBJECT_13_7 41
#define OBJECT_13_6 40
#define OBJECT_13_5 39
#define OBJECT_13_4 38
#define OBJECT_13_3 37
#define OBJECT_13_2 36
#define OBJECT_13_1 35
#define OBJECT_13_0 34
#define EXECUTE_CACHE_13_16 29
#define FREE_REFERENCE_13_1 32
#define FREE_REFERENCE_13_0 33
#define FREE_REFERENCES_LABEL_13_0 28
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reuse_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd86;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd80;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd127;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd137;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd109;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd63;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd161;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd39;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd156;
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
      current_block = (Rpc - LABEL_13_4);
      goto node_noopP_16;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_13_8);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_13_9);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_13_10);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_13_11);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_13_12);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_13_13);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_13_14);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_13_15);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_13_17);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_noopP_30)
DEFLABEL (node_noopP_16)
  INTERRUPT_CHECK (26, LABEL_13_4);
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
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_58;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_58;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_57)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd156.uLng) == 62))
    goto label_56;
  (Wrd152.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd153.Obj) = ((Wrd152.pObj) [0]);
  (Wrd154.Lng) = (FIXNUM_TO_LONG (Wrd153.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd154.Lng))))
    goto label_56;
  (Wrd39.Obj) = ((Wrd152.pObj) [2]);
  if ((Wrd39.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;

DEFLABEL (label_31)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_55;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd49.Lng))))
    goto label_55;
  (Wrd43.Obj) = ((Wrd47.pObj) [4]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_54)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_53;
  Wrd57 = Wrd61;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_51;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd71.Lng))))
    goto label_51;
  (Wrd63.Obj) = ((Wrd69.pObj) [1]);

DEFLABEL (label_50)
  (Wrd79.Obj) = (* (Rsp++));
  if ((Wrd63.Obj) == (Wrd79.Obj))
    goto label_45;
  (Wrd81.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd84.Obj) = ((Wrd81.pObj) [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if ((Wrd85.uLng) == 50)
    goto label_44;
  Wrd80 = Wrd84;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd95.Obj) = (Rsp [1]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd96.uLng) == 10))
    goto label_42;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [0]);
  (Wrd94.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd94.Lng))))
    goto label_42;
  (Wrd86.Obj) = ((Wrd92.pObj) [1]);

DEFLABEL (label_41)
  (Wrd102.Obj) = (* (Rsp++));
  if (! ((Wrd86.Obj) == (Wrd102.Obj)))
    goto label_39;
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd108.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd108.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_38;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_38;
  (Wrd7.Obj) = ((Wrd13.pObj) [4]);

DEFLABEL (label_37)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == (Wrd24.Obj))
    goto label_34;

DEFLABEL (label_35)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_33;

DEFLABEL (label_34)
  Rvl = (current_block [OBJECT_13_8]);

DEFLABEL (label_33)
DEFLABEL (label_36)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_13_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_5]), 2);

DEFLABEL (label_28)
  (Wrd7.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_40)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd97.Obj) = (Rsp [1]);
  (Wrd98.Obj) = (current_block [OBJECT_13_4]);
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_5]), 2);

DEFLABEL (label_24)
  (Wrd86.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_13])), (Wrd81.pObj));

DEFLABEL (label_23)
  (Wrd80.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd118.Obj) = (Rsp [0]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 10))
    goto label_49;
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [0]);
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd117.Lng))))
    goto label_49;
  (Wrd109.Obj) = ((Wrd115.pObj) [4]);

DEFLABEL (label_48)
  (Rsp [0]) = (Wrd109.Obj);
  (Wrd125.Obj) = (Rsp [1]);
  if (! ((Wrd125.Obj) == (Wrd109.Obj)))
    goto label_39;
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd137.uLng) == 10))
    goto label_47;
  (Wrd133.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd134.Obj) = ((Wrd133.pObj) [0]);
  (Wrd135.Lng) = (FIXNUM_TO_LONG (Wrd134.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd135.Lng))))
    goto label_47;
  (Wrd127.Obj) = ((Wrd133.pObj) [17]);

DEFLABEL (label_46)
  if (! ((Wrd127.Obj) == (current_block [OBJECT_13_7])))
    goto label_39;
  Rvl = (current_block [OBJECT_13_8]);
  goto label_40;

DEFLABEL (label_47)
  (Wrd138.Obj) = (Rsp [0]);
  (Wrd139.Obj) = (current_block [OBJECT_13_6]);
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_5]), 2);

DEFLABEL (label_26)
  (Wrd127.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd120.Obj) = (Rsp [0]);
  (Wrd121.Obj) = (current_block [OBJECT_13_3]);
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_5]), 2);

DEFLABEL (label_25)
  (Wrd109.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.Obj) = (current_block [OBJECT_13_4]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_5]), 2);

DEFLABEL (label_22)
  (Wrd63.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_9])), (Wrd58.pObj));

DEFLABEL (label_21)
  (Wrd57.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.Obj) = (current_block [OBJECT_13_3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  (Wrd157.Obj) = (Rsp [1]);
  (Wrd158.Obj) = (current_block [OBJECT_13_0]);
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd161.Obj);
  (* (--Rsp)) = (Wrd158.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_31;

DEFLABEL (label_58)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_13_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_19)
  (Wrd21.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_7 9
#define LABEL_14_9 11
#define LABEL_14_10 13
#define LABEL_14_11 15
#define LABEL_14_13 17
#define LABEL_14_12 19
#define LABEL_14_14 21
#define ENVIRONMENT_LABEL_14_3 42
#define DEBUGGING_LABEL_14_2 41
#define OBJECT_14_7 40
#define OBJECT_14_6 39
#define OBJECT_14_5 38
#define OBJECT_14_4 37
#define OBJECT_14_3 36
#define OBJECT_14_2 35
#define OBJECT_14_1 34
#define OBJECT_14_0 33
#define EXECUTE_CACHE_14_17 23
#define EXECUTE_CACHE_14_16 25
#define EXECUTE_CACHE_14_15 27
#define EXECUTE_CACHE_14_8 29
#define FREE_REFERENCE_14_0 32
#define FREE_REFERENCES_LABEL_14_0 22
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reuse_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd56;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd40;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_14_4);
      goto overwrite_10;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_14_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_14_10);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_14_11);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_14_13);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_14_12);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_14_14);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (overwrite_19)
DEFLABEL (overwrite_10)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_32;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_31)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_30;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_30;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_29)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_28;
  Wrd7 = Wrd11;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_26;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_26;
  (Wrd13.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_25)
  (Wrd29.Obj) = (* (Rsp++));
  if ((Wrd13.Obj) == (Wrd29.Obj))
    goto label_23;

DEFLABEL (label_22)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 62))
    goto label_21;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd41.Lng))))
    goto label_21;
  (Wrd35.Obj) = ((Wrd39.pObj) [3]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_20)
  (Wrd49.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_12);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (label_21)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (current_block [OBJECT_14_2]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_24;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd62.Lng))))
    goto label_24;
  (Wrd56.Obj) = (current_block [OBJECT_14_5]);
  ((Wrd60.pObj) [23]) = (Wrd56.Obj);
  goto label_22;

DEFLABEL (label_24)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.Obj) = (current_block [OBJECT_14_6]);
  (Wrd67.Obj) = (current_block [OBJECT_14_5]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_7]), 3);

DEFLABEL (label_17)
  goto label_22;

DEFLABEL (label_26)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_14_3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 2);

DEFLABEL (label_15)
  (Wrd13.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_9])), (Wrd8.pObj));

DEFLABEL (label_14)
  (Wrd7.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_14_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_14_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
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
reuse_so_3a151d024998a81b (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	1,
	2,
	2,
	2,
	2,
	2,
	1,
	1,
	1,
	2,
	2
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

static const struct liarc_code_S arr_decl_reuse_so_3a151d024998a81b [14] =
  {
    { "reuse_so_code_1", 30, reuse_so_code_1 },
    { "reuse_so_code_2", 19, reuse_so_code_2 },
    { "reuse_so_code_3", 24, reuse_so_code_3 },
    { "reuse_so_code_4", 10, reuse_so_code_4 },
    { "reuse_so_code_5", 15, reuse_so_code_5 },
    { "reuse_so_code_6", 19, reuse_so_code_6 },
    { "reuse_so_code_7", 18, reuse_so_code_7 },
    { "reuse_so_code_8", 8, reuse_so_code_8 },
    { "reuse_so_code_9", 13, reuse_so_code_9 },
    { "reuse_so_code_10", 17, reuse_so_code_10 },
    { "reuse_so_code_11", 5, reuse_so_code_11 },
    { "reuse_so_code_12", 10, reuse_so_code_12 },
    { "reuse_so_code_13", 13, reuse_so_code_13 },
    { "reuse_so_code_14", 10, reuse_so_code_14 }
  };

int
decl_reuse_so_3a151d024998a81b (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_reuse_so_3a151d024998a81b);
  return (0);
}

DECLARE_COMPILED_CODE ("reuse.so", 3, decl_reuse_so_3a151d024998a81b, reuse_so_3a151d024998a81b)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_reuse_so_data_3a151d024998a81b [3730] =
  "\x6d\x22\xa0\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x02\xc3\xb9\xc1"
  "\xba\x02\x0d\x02\x0d\xbb\x83\x80\x02\x1d\x02\x02\x0d\xc2\xbc\x02"
  "\x0d\xbd\x0d\xbe\x24\x28\x0d\x28\x0d\xbf\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x82\x88\xb1\x02\xc1\x1c\xb3\xb2\x02\xb4\x02\x0d\xbb"
  "\x0d\x1c\x24\x28\xb7\x28\x0d\xbf\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x83\x88\x07\xb2\x81\x1b\xc2\x1c\x84\x08\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xb4\x83\xb1\x02\x07\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x85\x88\x02\x02\x02\x08\x1b\x85\x86\xb4\x02\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88"
  "\x1b\xb2\xb4\x80\x83\x1b\x85\x08\x0d\x1c\x24\x28\x0d\x1c\x28\x0d"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x83\x02\x82\x06\x80\x02\x07\x02\xb4\x02\xb5\x1b"
  "\x0d\xbd\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x83\x02"
  "\xb4\x82\xb5\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x1c\x0d\x24\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x1b\x82\xb2"
  "\x1b\x08\x1b\x0d\x1c\x24\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\xbd\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb2\x1b\x08\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x07\x02\xb4\x80\x81\x1b\x82"
  "\x1b\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\xba\x28\xb5\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x02\x88\x07\x08\x02\xb4\x80\x83"
  "\x82\x1b\x81\xb6\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x07\xb4\x80"
  "\x82\x1b\x81\x1b\x24\x28\xb2\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\xb5\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x02\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\xb7\xb3\x0d\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x66\x67"
  "\x6f\x70\x74\x2f\x72\x65\x75\x73\x65\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x13\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21"
  "\x04\x63\x61\x72\x0b\x08\x75\x6e\x6b\x6e\x6f\x77\x6e\x14\x06\x6b"
  "\x6e\x6f\x77\x6e\x10\x02\x09\x11\x0c\x63\x6f\x6d\x62\x69\x6e\x61"
  "\x74\x69\x6f\x6e\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x08"
  "\x0e\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x74\x61\x67\x0e\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x61\x67\x03\x04\x09\x66"
  "\x6f\x72\x2d\x65\x61\x63\x68\x03\x18\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x62\x6c\x6f\x63\x6b"
  "\x03\x19\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x6f\x70\x65\x6e"
  "\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x3f\x03\x1b\x63\x6f\x6d\x62"
  "\x69\x6e\x61\x74\x69\x6f\x6e\x2f\x73\x69\x6d\x70\x6c\x65\x2d\x69"
  "\x6e\x6c\x69\x6e\x65\x3f\x03\x1e\x73\x74\x61\x63\x6b\x2d\x62\x6c"
  "\x6f\x63\x6b\x2f\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x61\x6e\x63"
  "\x65\x73\x74\x6f\x72\x04\x21\x62\x6c\x6f\x63\x6b\x2d\x66\x61\x72"
  "\x74\x68\x65\x73\x74\x2d\x75\x6e\x63\x6f\x6d\x6d\x6f\x6e\x2d\x61"
  "\x6e\x63\x65\x73\x74\x6f\x72\x03\x10\x62\x6c\x6f\x63\x6b\x2f\x65"
  "\x78\x74\x65\x72\x6e\x61\x6c\x3f\x04\x10\x62\x6c\x6f\x63\x6b\x2d"
  "\x61\x6e\x63\x65\x73\x74\x6f\x72\x3f\x09\x03\x0a\x69\x63\x2d\x62"
  "\x6c\x6f\x63\x6b\x3f\x0a\x04\x09\x66\x6f\x72\x2d\x61\x6c\x6c\x3f"
  "\x0b\x04\x18\x62\x6c\x6f\x63\x6b\x2d\x61\x6e\x63\x65\x73\x74\x6f"
  "\x72\x2d\x6f\x72\x2d\x73\x65\x6c\x66\x3f\x0c\x0c\x21\x3e\x81\x85"
  "\x02\x20\x3c\x81\x8f\x02\x1f\x3a\x81\x89\x02\x1e\x38\x81\x89\x02"
  "\x1d\x36\x81\x89\x02\x1c\x34\x81\x87\x02\x1b\x32\x81\x89\x02\x1a"
  "\x30\x81\x89\x02\x19\x2e\x81\x89\x02\x18\x2c\x81\x87\x02\x17\x2a"
  "\x81\x87\x02\x16\x28\x81\x8b\x02\x15\x26\x81\x8b\x02\x14\x24\x81"
  "\x89\x02\x13\x22\x81\x87\x02\x12\x20\x81\x8d\x02\x11\x1e\x81\x85"
  "\x02\x10\x1c\x81\x83\x02\x0f\x1a\x81\x87\x02\x0e\x18\x81\x87\x02"
  "\x0d\x16\x81\x89\x02\x0c\x14\x81\x87\x02\x0b\x12\x81\x83\x02\x0a"
  "\x10\x81\x8b\x02\x09\x0e\x81\x87\x02\x08\x0c\x81\x85\x02\x07\x0a"
  "\x81\x89\x02\x06\x08\x81\x83\x02\x05\x06\x83\x04\x04\x04\x83\x04"
  "\x3d\x6a\x0d\x02\x12\x04\x63\x64\x72\x0e\x11\x09\x11\x72\x65\x75"
  "\x73\x65\x2d\x73\x69\x7a\x65\x2d\x6c\x69\x6d\x69\x74\x17\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f"
  "\x70\x75\x73\x68\x0f\x03\x03\x05\x13\x73\x75\x62\x70\x72\x6f\x62"
  "\x6c\x65\x6d\x73\x2d\x3e\x6e\x6f\x64\x65\x73\x03\x07\x6c\x65\x6e"
  "\x67\x74\x68\x10\x07\x22\x6f\x72\x64\x65\x72\x2d\x73\x75\x62\x70"
  "\x72\x6f\x62\x6c\x65\x6d\x73\x2f\x6f\x76\x65\x72\x77\x72\x69\x74"
  "\x65\x2d\x62\x6c\x6f\x63\x6b\x11\x06\x17\x6c\x69\x6e\x65\x61\x72"
  "\x69\x7a\x65\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x73\x21"
  "\x04\x07\x61\x70\x70\x65\x6e\x64\x12\x07\x34\x28\x81\x85\x02\x33"
  "\x26\x81\x87\x02\x32\x24\x81\x87\x02\x31\x22\x81\x8f\x02\x30\x20"
  "\x81\x87\x02\x2f\x1e\x81\x89\x02\x2e\x1c\x81\x89\x02\x2d\x1a\x81"
  "\x89\x02\x2c\x18\x81\x8b\x02\x2b\x16\x81\x91\x02\x2a\x14\x81\x89"
  "\x02\x29\x12\x81\x89\x02\x28\x10\x81\x83\x02\x27\x0e\x81\x91\x02"
  "\x26\x0c\x81\x8d\x02\x25\x0a\x81\x8f\x02\x24\x08\x81\x83\x02\x23"
  "\x06\x81\x8f\x02\x22\x04\x87\x0c\x27\x42\x13\x02\x0e\x0c\x25\x72"
  "\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x14\x03\x10\x05\x15\x6f\x76"
  "\x65\x72\x77\x72\x69\x74\x74\x65\x6e\x2d\x6f\x62\x6a\x65\x63\x74"
  "\x73\x21\x15\x04\x0a\x6c\x69\x73\x74\x2d\x68\x65\x61\x64\x03\x08"
  "\x72\x65\x76\x65\x72\x73\x65\x04\x0a\x6c\x69\x73\x74\x2d\x74\x61"
  "\x69\x6c\x16\x04\x13\x64\x69\x73\x63\x72\x69\x6d\x69\x6e\x61\x74"
  "\x65\x2d\x69\x74\x65\x6d\x73\x04\x1a\x73\x75\x62\x70\x72\x6f\x62"
  "\x6c\x65\x6d\x2f\x64\x65\x70\x65\x6e\x64\x65\x6e\x63\x79\x2d\x73"
  "\x65\x74\x17\x05\x0e\x6d\x61\x6b\x65\x2d\x6e\x6f\x64\x65\x2d\x73"
  "\x65\x74\x04\x04\x6d\x61\x70\x18\x0a\x4c\x32\x81\x85\x02\x4b\x30"
  "\x81\x87\x02\x4a\x2e\x81\x85\x02\x49\x2c\x81\x8b\x02\x48\x2a\x81"
  "\x87\x02\x47\x28\x81\x87\x02\x46\x26\x81\x85\x02\x45\x24\x81\x85"
  "\x02\x44\x22\x81\x83\x02\x43\x20\x83\x04\x42\x1e\x81\x85\x02\x41"
  "\x1c\x81\x85\x02\x40\x1a\x84\x06\x3f\x18\x81\x85\x02\x3e\x16\x81"
  "\x91\x02\x3d\x14\x81\x8d\x02\x3c\x12\x81\x85\x02\x3b\x10\x81\x8d"
  "\x02\x3a\x0e\x81\x8d\x02\x39\x0c\x81\x8d\x02\x38\x0a\x81\x8b\x02"
  "\x37\x08\x81\x89\x02\x36\x06\x81\x87\x02\x35\x04\x85\x08\x31\x4e"
  "\x19\x02\x15\x03\x10\x03\x0d\x62\x6c\x6f\x63\x6b\x2d\x6c\x61\x79"
  "\x6f\x75\x74\x10\x04\x16\x04\x08\x61\x70\x70\x65\x6e\x64\x21\x05"
  "\x56\x16\x81\x87\x02\x55\x14\x81\x85\x02\x54\x12\x81\x8b\x02\x53"
  "\x10\x81\x8b\x02\x52\x0e\x81\x89\x02\x51\x0c\x81\x89\x02\x50\x0a"
  "\x81\x85\x02\x4f\x08\x81\x85\x02\x4e\x06\x81\x87\x02\x4d\x04\x85"
  "\x08\x15\x26\x16\x02\x12\x16\x09\x0e\x08\x04\x18\x6c\x69\x73\x74"
  "\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x6e\x65\x67\x61\x74"
  "\x69\x76\x65\x1a\x03\x13\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f"
  "\x63\x6c\x6f\x73\x75\x72\x65\x3f\x1b\x03\x13\x6c\x76\x61\x6c\x75"
  "\x65\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x3f\x03\x1b\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x72\x69\x76\x69\x61\x6c"
  "\x2d\x63\x6c\x6f\x73\x75\x72\x65\x3f\x08\x12\x06\x65\x20\x81\x8d"
  "\x02\x64\x1e\x81\x8d\x02\x63\x1c\x81\x8d\x02\x62\x1a\x81\x8d\x02"
  "\x61\x18\x81\x83\x02\x60\x16\x81\x8b\x02\x5f\x14\x81\x89\x02\x5e"
  "\x12\x81\x89\x02\x5d\x10\x83\x04\x5c\x0e\x81\x87\x02\x5b\x0c\x81"
  "\x8b\x02\x5a\x0a\x81\x8b\x02\x59\x08\x81\x85\x02\x58\x06\x81\x83"
  "\x02\x57\x04\x83\x04\x1f\x36\x1c\x02\x0e\x14\x0a\x62\x6c\x6f\x63"
  "\x6b\x2d\x74\x61\x67\x1d\x02\x04\x05\x6d\x65\x6d\x71\x1e\x04\x18"
  "\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x70"
  "\x6f\x73\x69\x74\x69\x76\x65\x04\x09\x04\x12\x62\x6c\x6f\x63\x6b"
  "\x2d\x64\x65\x70\x65\x6e\x64\x65\x6e\x63\x79\x3f\x1f\x05\x78\x28"
  "\x81\x8b\x02\x77\x26\x81\x8b\x02\x76\x24\x81\x8b\x02\x75\x22\x81"
  "\x81\x02\x74\x20\x81\x8b\x02\x73\x1e\x81\x8b\x02\x72\x1c\x81\x85"
  "\x02\x71\x1a\x81\x8f\x02\x70\x18\x81\x85\x02\x6f\x16\x81\x83\x02"
  "\x6e\x14\x81\x8d\x02\x6d\x12\x81\x8b\x02\x6c\x10\x81\x8b\x02\x6b"
  "\x0e\x81\x87\x02\x6a\x0c\x81\x85\x02\x69\x0a\x81\x89\x02\x68\x08"
  "\x81\x85\x02\x67\x06\x81\x85\x02\x66\x04\x84\x06\x27\x3d\x20\x02"
  "\x08\x09\x0a\x08\x0f\x1d\x13\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70"
  "\x65\x2f\x63\x6c\x6f\x73\x75\x72\x65\x04\x03\x0a\x03\x1b\x04\x0e"
  "\x62\x6c\x6f\x63\x6b\x2d\x73\x68\x61\x72\x65\x73\x3f\x1b\x04\x09"
  "\x03\x15\x69\x63\x2d\x62\x6c\x6f\x63\x6b\x2f\x75\x73\x65\x2d\x6c"
  "\x6f\x6f\x6b\x75\x70\x3f\x04\x1e\x07\x8a\x01\x26\x81\x87\x02\x89"
  "\x01\x24\x81\x87\x02\x88\x01\x22\x81\x89\x02\x87\x01\x20\x81\x87"
  "\x02\x86\x01\x1e\x81\x87\x02\x85\x01\x1c\x81\x89\x02\x84\x01\x1a"
  "\x81\x87\x02\x83\x01\x18\x81\x85\x02\x82\x01\x16\x81\x83\x02\x81"
  "\x01\x14\x81\x8d\x02\x80\x01\x12\x81\x8b\x02\x7f\x10\x81\x87\x02"
  "\x7e\x0e\x81\x87\x02\x7d\x0c\x81\x89\x02\x7c\x0a\x81\x8b\x02\x7b"
  "\x08\x81\x8b\x02\x7a\x06\x81\x85\x02\x79\x04\x84\x06\x25\x43\x1e"
  "\x02\x09\x11\x02\x04\x0c\x03\x1f\x62\x6c\x6f\x63\x6b\x2d\x6e\x65"
  "\x61\x72\x65\x73\x74\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x61\x6e"
  "\x63\x65\x73\x74\x6f\x72\x03\x92\x01\x12\x81\x89\x02\x91\x01\x10"
  "\x81\x89\x02\x90\x01\x0e\x81\x87\x02\x8f\x01\x0c\x81\x87\x02\x8e"
  "\x01\x0a\x81\x89\x02\x8d\x01\x08\x81\x87\x02\x8c\x01\x06\x81\x85"
  "\x02\x8b\x01\x04\x84\x06\x11\x20\x0c\x02\x0a\x0b\x6e\x6f\x64\x65"
  "\x2f\x6e\x6f\x6f\x70\x3f\x0a\x0b\x6e\x6f\x64\x65\x2d\x76\x61\x6c"
  "\x75\x65\x03\x03\x14\x72\x65\x6f\x72\x64\x65\x72\x2d\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x73\x04\x15\x67\x65\x6e\x65\x72\x61"
  "\x74\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x73\x09\x04"
  "\x12\x04\x17\x62\x6c\x6f\x63\x6b\x2d\x70\x61\x72\x74\x69\x61\x6c"
  "\x2d\x61\x6e\x63\x65\x73\x74\x72\x79\x04\x14\x74\x72\x69\x76\x69"
  "\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x73\x12\x05"
  "\x1b\x6d\x6f\x64\x69\x66\x79\x2d\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x73\x21\x04\x18\x04\x1a\x04"
  "\x28\x61\x64\x64\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63"
  "\x6f\x6e\x74\x65\x78\x74\x2f\x61\x64\x6a\x61\x63\x65\x6e\x74\x2d"
  "\x70\x61\x72\x65\x6e\x74\x73\x21\x0a\x9f\x01\x1c\x81\x85\x02\x9e"
  "\x01\x1a\x81\x85\x02\x9d\x01\x18\x81\x95\x02\x9c\x01\x16\x81\x93"
  "\x02\x9b\x01\x14\x81\x91\x02\x9a\x01\x12\x81\x8f\x02\x99\x01\x10"
  "\x81\x91\x02\x98\x01\x0e\x81\x8f\x02\x97\x01\x0c\x81\x93\x02\x96"
  "\x01\x0a\x81\x8d\x02\x95\x01\x08\x81\x8f\x02\x94\x01\x06\x81\x8b"
  "\x02\x93\x01\x04\x87\x0c\x1b\x34\x1a\x02\x0b\x14\x0e\x0f\x1b\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x2f\x72\x65\x67\x69\x73\x74\x65\x72\x18\x03\x03\x1c\x66\x69\x72"
  "\x73\x74\x2d\x6e\x6f\x64\x65\x2d\x6e\x65\x65\x64\x73\x2d\x74\x65"
  "\x6d\x70\x6f\x72\x61\x72\x79\x3f\x04\x09\x04\x0b\x04\x0a\x6f\x76"
  "\x65\x72\x77\x72\x69\x74\x65\x0f\x04\x13\x74\x72\x69\x76\x69\x61"
  "\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0b\x06\x16\x6c"
  "\x69\x6e\x65\x61\x72\x69\x7a\x65\x2d\x73\x75\x62\x70\x72\x6f\x62"
  "\x6c\x65\x6d\x21\x07\xb0\x01\x24\x81\x8d\x02\xaf\x01\x22\x81\x8b"
  "\x02\xae\x01\x20\x81\x89\x02\xad\x01\x1e\x81\x85\x02\xac\x01\x1c"
  "\x81\x85\x02\xab\x01\x1a\x81\x83\x02\xaa\x01\x18\x83\x04\xa9\x01"
  "\x16\x81\x8f\x02\xa8\x01\x14\x81\x87\x02\xa7\x01\x12\x81\x87\x02"
  "\xa6\x01\x10\x81\x87\x02\xa5\x01\x0e\x81\x8b\x02\xa4\x01\x0c\x81"
  "\x85\x02\xa3\x01\x0a\x81\x85\x02\xa2\x01\x08\x81\x89\x02\xa1\x01"
  "\x06\x81\x85\x02\xa0\x01\x04\x84\x06\x23\x3c\x21\x02\x0c\x0e\x04"
  "\x0b\x02\xb5\x01\x0c\xfd\xff\x03\xb4\x01\x0a\xfd\xff\x03\xb3\x01"
  "\x08\xfd\xff\x03\xb2\x01\x06\xff\xff\x03\xb1\x01\x04\x84\x06\x0b"
  "\x14\x0e\x02\x0d\x17\x14\x18\x0d\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x2d\x74\x61\x67\x18\x03\x03\x0a\x04\x0f\x03\x08\x6c\x76\x61\x6c"
  "\x75\x65\x3f\x06\x05\xbf\x01\x16\x81\x89\x02\xbe\x01\x14\x81\x85"
  "\x02\xbd\x01\x12\x81\x85\x02\xbc\x01\x10\x81\x83\x02\xbb\x01\x0e"
  "\x81\x83\x02\xba\x01\x0c\x81\x87\x02\xb9\x01\x0a\x81\x87\x02\xb8"
  "\x01\x08\x81\x85\x02\xb7\x01\x06\x81\x85\x02\xb6\x01\x04\x84\x06"
  "\x15\x2c\x02\x0e\x11\x14\x1d\x03\x03\x07\x62\x6c\x6f\x63\x6b\x3f"
  "\x02\xcc\x01\x1c\x81\x87\x02\xcb\x01\x1a\x81\x87\x02\xca\x01\x18"
  "\x81\x89\x02\xc9\x01\x16\x81\x87\x02\xc8\x01\x14\x81\x87\x02\xc7"
  "\x01\x12\x81\x87\x02\xc6\x01\x10\x81\x89\x02\xc5\x01\x0e\x81\x87"
  "\x02\xc4\x01\x0c\x81\x85\x02\xc3\x01\x0a\x81\x85\x02\xc2\x01\x08"
  "\x81\x85\x02\xc1\x01\x06\x81\x83\x02\xc0\x01\x04\x83\x04\x1b\x2d"
  "\x1d\x02\x0f\x17\x14\x18\x02\x03\x03\x13\x73\x75\x62\x70\x72\x6f"
  "\x62\x6c\x65\x6d\x2d\x63\x6f\x6e\x74\x65\x78\x74\x04\x11\x73\x63"
  "\x66\x67\x2a\x6e\x6f\x64\x65\x2d\x3e\x6e\x6f\x64\x65\x21\x05\x15"
  "\x6d\x61\x6b\x65\x2d\x73\x74\x61\x63\x6b\x2d\x6f\x76\x65\x72\x77"
  "\x72\x69\x74\x65\x05\xd6\x01\x16\x81\x8f\x02\xd5\x01\x14\x81\x89"
  "\x02\xd4\x01\x12\x81\x8b\x02\xd3\x01\x10\x81\x89\x02\xd2\x01\x0e"
  "\x81\x8b\x02\xd1\x01\x0c\x81\x89\x02\xd0\x01\x0a\x81\x89\x02\xcf"
  "\x01\x08\x81\x87\x02\xce\x01\x06\x81\x85\x02\xcd\x01\x04\x84\x06"
  "\x15\x2b\x18\x0f\x14\x14\x18\x04\x1d\x04\x04\x0e\x04\x21\x04\x1a"
  "\x04\x0c\x04\x1e\x04\x20\x04\x1c\x04\x16\x04\x19\x04\x08\x13\x04"
  "\x0d\x04\x10\x0f\x0a\x0b\x12\x09\x11\x1b\x1f\x17\x10\x15\x28\x6f"
  "\x72\x64\x65\x72\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x73"
  "\x2f\x6d\x61\x79\x62\x65\x2d\x6f\x76\x65\x72\x77\x72\x69\x74\x65"
  "\x2d\x62\x6c\x6f\x63\x6b\x18\x73\x65\x74\x75\x70\x2d\x66\x72\x61"
  "\x6d\x65\x2d\x61\x64\x6a\x75\x73\x74\x6d\x65\x6e\x74\x73\x10\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02"
  "\x07\x11";

SCHEME_OBJECT *
reuse_so_data_3a151d024998a81b (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_reuse_so_data_3a151d024998a81b [0]))), (sizeof (prog_reuse_so_data_3a151d024998a81b)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("reuse.so", reuse_so_data_3a151d024998a81b)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("reuse.so", "9259e67fe9f46cef")
