/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:59-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_8 7
#define LABEL_1_9 9
#define LABEL_1_10 11
#define LABEL_1_11 13
#define LABEL_1_12 15
#define LABEL_1_13 17
#define LABEL_1_14 19
#define LABEL_1_15 21
#define LABEL_1_16 23
#define LABEL_1_17 25
#define LABEL_1_18 27
#define LABEL_1_19 29
#define LABEL_1_20 31
#define LABEL_1_21 33
#define LABEL_1_6 35
#define LABEL_1_24 37
#define LABEL_1_22 39
#define LABEL_1_26 41
#define LABEL_1_27 43
#define LABEL_1_28 45
#define LABEL_1_29 47
#define LABEL_1_31 49
#define LABEL_1_32 51
#define LABEL_1_30 53
#define LABEL_1_33 55
#define LABEL_1_35 57
#define LABEL_1_36 59
#define LABEL_1_34 61
#define LABEL_1_37 63
#define ENVIRONMENT_LABEL_1_3 105
#define DEBUGGING_LABEL_1_2 104
#define OBJECT_1_5 103
#define OBJECT_1_4 102
#define OBJECT_1_3 101
#define OBJECT_1_2 100
#define OBJECT_1_1 99
#define OBJECT_1_0 98
#define EXECUTE_CACHE_1_25 65
#define EXECUTE_CACHE_1_23 67
#define EXECUTE_CACHE_1_7 69
#define FREE_REFERENCE_1_6 72
#define FREE_REFERENCE_1_5 73
#define FREE_REFERENCE_1_4 74
#define FREE_REFERENCE_1_3 75
#define FREE_REFERENCE_1_2 76
#define FREE_REFERENCE_1_1 77
#define FREE_REFERENCE_1_0 78
#define FREE_ASSIGNMENT_1_17 80
#define FREE_ASSIGNMENT_1_16 81
#define FREE_ASSIGNMENT_1_15 82
#define FREE_ASSIGNMENT_1_14 83
#define FREE_ASSIGNMENT_1_13 84
#define FREE_ASSIGNMENT_1_12 85
#define FREE_ASSIGNMENT_1_11 86
#define FREE_ASSIGNMENT_1_10 87
#define FREE_ASSIGNMENT_1_9 88
#define FREE_ASSIGNMENT_1_8 89
#define FREE_ASSIGNMENT_1_7 90
#define FREE_ASSIGNMENT_1_6 91
#define FREE_ASSIGNMENT_1_5 92
#define FREE_ASSIGNMENT_1_4 93
#define FREE_ASSIGNMENT_1_3 94
#define FREE_ASSIGNMENT_1_2 95
#define FREE_ASSIGNMENT_1_1 96
#define FREE_ASSIGNMENT_1_0 97
#define FREE_REFERENCES_LABEL_1_0 64
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd170;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_5;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_1_12);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto label_12;

    case 8:
      current_block = (Rpc - LABEL_1_14);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_1_15);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_1_16);
      goto label_15;

    case 11:
      current_block = (Rpc - LABEL_1_17);
      goto label_16;

    case 12:
      current_block = (Rpc - LABEL_1_18);
      goto label_17;

    case 13:
      current_block = (Rpc - LABEL_1_19);
      goto label_18;

    case 14:
      current_block = (Rpc - LABEL_1_20);
      goto label_19;

    case 15:
      current_block = (Rpc - LABEL_1_21);
      goto label_20;

    case 16:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    case 17:
      current_block = (Rpc - LABEL_1_24);
      goto label_21;

    case 18:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_2;

    case 19:
      current_block = (Rpc - LABEL_1_26);
      goto label_22;

    case 20:
      current_block = (Rpc - LABEL_1_27);
      goto label_23;

    case 21:
      current_block = (Rpc - LABEL_1_28);
      goto label_24;

    case 22:
      current_block = (Rpc - LABEL_1_29);
      goto label_25;

    case 23:
      current_block = (Rpc - LABEL_1_31);
      goto label_26;

    case 24:
      current_block = (Rpc - LABEL_1_32);
      goto label_27;

    case 25:
      current_block = (Rpc - LABEL_1_30);
      goto continuation_3;

    case 26:
      current_block = (Rpc - LABEL_1_33);
      goto label_28;

    case 27:
      current_block = (Rpc - LABEL_1_35);
      goto label_29;

    case 28:
      current_block = (Rpc - LABEL_1_36);
      goto label_30;

    case 29:
      current_block = (Rpc - LABEL_1_34);
      goto continuation_4;

    case 30:
      current_block = (Rpc - LABEL_1_37);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_33)
DEFLABEL (initialize_packageB_5)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_101;
  Wrd5 = Wrd9;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_99;

DEFLABEL (label_98)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_97)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_96;
  Wrd18 = Wrd22;

DEFLABEL (label_95)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd32.Obj) = ((Wrd24.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_94;

DEFLABEL (label_93)
  ((Wrd24.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_92)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd37.Obj) = (current_block [OBJECT_1_2]);
  (Wrd44.Obj) = ((Wrd36.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_91;

DEFLABEL (label_90)
  ((Wrd36.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_89)
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd49.Obj) = (current_block [OBJECT_1_3]);
  (Wrd56.Obj) = ((Wrd48.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_88;

DEFLABEL (label_87)
  ((Wrd48.pObj) [0]) = (Wrd49.Obj);

DEFLABEL (label_86)
  (Wrd60.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_4]));
  (Wrd61.Obj) = (current_block [OBJECT_1_2]);
  (Wrd68.Obj) = ((Wrd60.pObj) [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if ((Wrd69.uLng) == 50)
    goto label_85;

DEFLABEL (label_84)
  ((Wrd60.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_83)
  (Wrd72.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_5]));
  (Wrd73.Obj) = (current_block [OBJECT_1_2]);
  (Wrd80.Obj) = ((Wrd72.pObj) [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd81.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  ((Wrd72.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_80)
  (Wrd84.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_6]));
  (Wrd85.Obj) = (current_block [OBJECT_1_2]);
  (Wrd92.Obj) = ((Wrd84.pObj) [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if ((Wrd93.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  ((Wrd84.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_77)
  (Wrd96.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_7]));
  (Wrd97.Obj) = (current_block [OBJECT_1_2]);
  (Wrd104.Obj) = ((Wrd96.pObj) [0]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd105.uLng) == 50)
    goto label_76;

DEFLABEL (label_75)
  ((Wrd96.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_74)
  (Wrd108.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_8]));
  (Wrd109.Obj) = (current_block [OBJECT_1_2]);
  (Wrd116.Obj) = ((Wrd108.pObj) [0]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if ((Wrd117.uLng) == 50)
    goto label_73;

DEFLABEL (label_72)
  ((Wrd108.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_71)
  (Wrd120.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_9]));
  (Wrd121.Obj) = (current_block [OBJECT_1_2]);
  (Wrd128.Obj) = ((Wrd120.pObj) [0]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if ((Wrd129.uLng) == 50)
    goto label_70;

DEFLABEL (label_69)
  ((Wrd120.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_68)
  (Wrd132.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_10]));
  (Wrd133.Obj) = (current_block [OBJECT_1_4]);
  (Wrd140.Obj) = ((Wrd132.pObj) [0]);
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd140.Obj));
  if ((Wrd141.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd132.pObj) [0]) = (Wrd133.Obj);

DEFLABEL (label_65)
  (Wrd144.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_11]));
  (Wrd145.Obj) = (current_block [OBJECT_1_2]);
  (Wrd152.Obj) = ((Wrd144.pObj) [0]);
  (Wrd153.uLng) = (OBJECT_TYPE (Wrd152.Obj));
  if ((Wrd153.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd144.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_62)
  (Wrd156.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_12]));
  (Wrd157.Obj) = (current_block [OBJECT_1_2]);
  (Wrd164.Obj) = ((Wrd156.pObj) [0]);
  (Wrd165.uLng) = (OBJECT_TYPE (Wrd164.Obj));
  if ((Wrd165.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  ((Wrd156.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_59)
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd170.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_13]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_58;

DEFLABEL (label_57)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_56)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_55;
  Wrd18 = Wrd22;

DEFLABEL (label_54)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_14]));
  (Wrd32.Obj) = ((Wrd24.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  ((Wrd24.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_51)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_15]));
  (Wrd37.Obj) = (current_block [OBJECT_1_2]);
  (Wrd44.Obj) = ((Wrd36.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  ((Wrd36.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_48)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd55.Obj) = ((Wrd52.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_47;
  Wrd51 = Wrd55;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_45;
  Wrd57 = Wrd61;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_30);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_16]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_41)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_40;
  Wrd21 = Wrd25;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_38;
  Wrd27 = Wrd31;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_34);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_17]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_34)
  Rvl = (current_block [OBJECT_1_5]);
  goto pop_return;

DEFLABEL (label_36)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_37])), (Wrd6.pObj), Rvl);

DEFLABEL (label_31)
  goto label_34;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_36])), (Wrd28.pObj));

DEFLABEL (label_30)
  (Wrd27.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_35])), (Wrd22.pObj));

DEFLABEL (label_29)
  (Wrd21.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_43)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_33])), (Wrd6.pObj), Rvl);

DEFLABEL (label_28)
  goto label_41;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_32])), (Wrd58.pObj));

DEFLABEL (label_27)
  (Wrd57.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_31])), (Wrd52.pObj));

DEFLABEL (label_26)
  (Wrd51.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_50)
  if ((Wrd44.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_29])), (Wrd36.pObj), (Wrd37.Obj));

DEFLABEL (label_25)
  goto label_48;

DEFLABEL (label_53)
  if ((Wrd32.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_28])), (Wrd24.pObj), (Wrd18.Obj));

DEFLABEL (label_24)
  goto label_51;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_27])), (Wrd19.pObj));

DEFLABEL (label_23)
  (Wrd18.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_58)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_57;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_26])), (Wrd6.pObj), Rvl);

DEFLABEL (label_22)
  goto label_56;

DEFLABEL (label_61)
  if ((Wrd164.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_60;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_21])), (Wrd156.pObj), (Wrd157.Obj));

DEFLABEL (label_20)
  goto label_59;

DEFLABEL (label_64)
  if ((Wrd152.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_20])), (Wrd144.pObj), (Wrd145.Obj));

DEFLABEL (label_19)
  goto label_62;

DEFLABEL (label_67)
  if ((Wrd140.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_19])), (Wrd132.pObj), (Wrd133.Obj));

DEFLABEL (label_18)
  goto label_65;

DEFLABEL (label_70)
  if ((Wrd128.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_69;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_18])), (Wrd120.pObj), (Wrd121.Obj));

DEFLABEL (label_17)
  goto label_68;

DEFLABEL (label_73)
  if ((Wrd116.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_72;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_17])), (Wrd108.pObj), (Wrd109.Obj));

DEFLABEL (label_16)
  goto label_71;

DEFLABEL (label_76)
  if ((Wrd104.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_75;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_16])), (Wrd96.pObj), (Wrd97.Obj));

DEFLABEL (label_15)
  goto label_74;

DEFLABEL (label_79)
  if ((Wrd92.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_78;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_15])), (Wrd84.pObj), (Wrd85.Obj));

DEFLABEL (label_14)
  goto label_77;

DEFLABEL (label_82)
  if ((Wrd80.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_81;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_14])), (Wrd72.pObj), (Wrd73.Obj));

DEFLABEL (label_13)
  goto label_80;

DEFLABEL (label_85)
  if ((Wrd68.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_84;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_13])), (Wrd60.pObj), (Wrd61.Obj));

DEFLABEL (label_12)
  goto label_83;

DEFLABEL (label_88)
  if ((Wrd56.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_87;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_12])), (Wrd48.pObj), (Wrd49.Obj));

DEFLABEL (label_11)
  goto label_86;

DEFLABEL (label_91)
  if ((Wrd44.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_90;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_11])), (Wrd36.pObj), (Wrd37.Obj));

DEFLABEL (label_10)
  goto label_89;

DEFLABEL (label_94)
  if ((Wrd32.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_93;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_10])), (Wrd24.pObj), (Wrd18.Obj));

DEFLABEL (label_9)
  goto label_92;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd19.pObj));

DEFLABEL (label_8)
  (Wrd18.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_99)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_98;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_7)
  goto label_97;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_24])), (Wrd6.pObj));

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_100;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_5 7
#define LABEL_2_9 9
#define LABEL_2_10 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_13 17
#define LABEL_2_14 19
#define LABEL_2_15 21
#define LABEL_2_16 23
#define LABEL_2_17 25
#define LABEL_2_18 27
#define LABEL_2_19 29
#define LABEL_2_20 31
#define LABEL_2_21 33
#define LABEL_2_22 35
#define LABEL_2_23 37
#define LABEL_2_24 39
#define LABEL_2_25 41
#define LABEL_2_26 43
#define LABEL_2_27 45
#define LABEL_2_28 47
#define LABEL_2_29 49
#define LABEL_2_30 51
#define LABEL_2_31 53
#define LABEL_2_32 55
#define LABEL_2_33 57
#define LABEL_2_34 59
#define LABEL_2_8 61
#define LABEL_2_35 63
#define TAG_2_36 30
#define LABEL_2_38 65
#define LABEL_2_39 67
#define LABEL_2_40 69
#define ENVIRONMENT_LABEL_2_3 130
#define DEBUGGING_LABEL_2_2 129
#define OBJECT_2_28 128
#define OBJECT_2_27 127
#define OBJECT_2_26 126
#define OBJECT_2_25 125
#define OBJECT_2_24 124
#define OBJECT_2_23 123
#define OBJECT_2_22 122
#define OBJECT_2_21 121
#define OBJECT_2_20 120
#define OBJECT_2_19 119
#define OBJECT_2_18 118
#define OBJECT_2_17 117
#define OBJECT_2_16 116
#define OBJECT_2_15 115
#define OBJECT_2_14 114
#define OBJECT_2_13 113
#define OBJECT_2_12 112
#define OBJECT_2_11 111
#define OBJECT_2_10 110
#define OBJECT_2_9 109
#define OBJECT_2_8 108
#define OBJECT_2_7 107
#define OBJECT_2_6 106
#define OBJECT_2_5 105
#define OBJECT_2_4 104
#define OBJECT_2_3 103
#define OBJECT_2_2 102
#define OBJECT_2_1 101
#define OBJECT_2_0 100
#define EXECUTE_CACHE_2_41 71
#define EXECUTE_CACHE_2_37 73
#define EXECUTE_CACHE_2_7 75
#define FREE_REFERENCE_2_21 78
#define FREE_REFERENCE_2_20 79
#define FREE_REFERENCE_2_19 80
#define FREE_REFERENCE_2_18 81
#define FREE_REFERENCE_2_17 82
#define FREE_REFERENCE_2_16 83
#define FREE_REFERENCE_2_15 84
#define FREE_REFERENCE_2_14 85
#define FREE_REFERENCE_2_13 86
#define FREE_REFERENCE_2_12 87
#define FREE_REFERENCE_2_11 88
#define FREE_REFERENCE_2_10 89
#define FREE_REFERENCE_2_9 90
#define FREE_REFERENCE_2_8 91
#define FREE_REFERENCE_2_7 92
#define FREE_REFERENCE_2_6 93
#define FREE_REFERENCE_2_5 94
#define FREE_REFERENCE_2_4 95
#define FREE_REFERENCE_2_3 96
#define FREE_REFERENCE_2_2 97
#define FREE_REFERENCE_2_1 98
#define FREE_REFERENCE_2_0 99
#define FREE_REFERENCES_LABEL_2_0 70
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd505;
  machine_word Wrd504;
  machine_word Wrd502;
  machine_word Wrd503;
  machine_word Wrd501;
  machine_word Wrd500;
  machine_word Wrd498;
  machine_word Wrd494;
  machine_word Wrd496;
  machine_word Wrd497;
  machine_word Wrd490;
  machine_word Wrd492;
  machine_word Wrd493;
  machine_word Wrd484;
  machine_word Wrd489;
  machine_word Wrd488;
  machine_word Wrd485;
  machine_word Wrd482;
  machine_word Wrd481;
  machine_word Wrd479;
  machine_word Wrd475;
  machine_word Wrd477;
  machine_word Wrd478;
  machine_word Wrd471;
  machine_word Wrd473;
  machine_word Wrd474;
  machine_word Wrd465;
  machine_word Wrd470;
  machine_word Wrd469;
  machine_word Wrd466;
  machine_word Wrd463;
  machine_word Wrd462;
  machine_word Wrd460;
  machine_word Wrd456;
  machine_word Wrd458;
  machine_word Wrd459;
  machine_word Wrd452;
  machine_word Wrd454;
  machine_word Wrd455;
  machine_word Wrd446;
  machine_word Wrd451;
  machine_word Wrd450;
  machine_word Wrd447;
  machine_word Wrd444;
  machine_word Wrd443;
  machine_word Wrd441;
  machine_word Wrd437;
  machine_word Wrd439;
  machine_word Wrd440;
  machine_word Wrd433;
  machine_word Wrd435;
  machine_word Wrd436;
  machine_word Wrd427;
  machine_word Wrd432;
  machine_word Wrd431;
  machine_word Wrd428;
  machine_word Wrd425;
  machine_word Wrd424;
  machine_word Wrd422;
  machine_word Wrd418;
  machine_word Wrd420;
  machine_word Wrd421;
  machine_word Wrd414;
  machine_word Wrd416;
  machine_word Wrd417;
  machine_word Wrd408;
  machine_word Wrd413;
  machine_word Wrd412;
  machine_word Wrd409;
  machine_word Wrd406;
  machine_word Wrd405;
  machine_word Wrd403;
  machine_word Wrd399;
  machine_word Wrd401;
  machine_word Wrd402;
  machine_word Wrd395;
  machine_word Wrd397;
  machine_word Wrd398;
  machine_word Wrd389;
  machine_word Wrd394;
  machine_word Wrd393;
  machine_word Wrd390;
  machine_word Wrd387;
  machine_word Wrd386;
  machine_word Wrd384;
  machine_word Wrd380;
  machine_word Wrd382;
  machine_word Wrd383;
  machine_word Wrd376;
  machine_word Wrd378;
  machine_word Wrd379;
  machine_word Wrd370;
  machine_word Wrd375;
  machine_word Wrd374;
  machine_word Wrd371;
  machine_word Wrd368;
  machine_word Wrd367;
  machine_word Wrd365;
  machine_word Wrd361;
  machine_word Wrd363;
  machine_word Wrd364;
  machine_word Wrd357;
  machine_word Wrd359;
  machine_word Wrd360;
  machine_word Wrd351;
  machine_word Wrd356;
  machine_word Wrd355;
  machine_word Wrd352;
  machine_word Wrd349;
  machine_word Wrd348;
  machine_word Wrd346;
  machine_word Wrd342;
  machine_word Wrd344;
  machine_word Wrd345;
  machine_word Wrd338;
  machine_word Wrd340;
  machine_word Wrd341;
  machine_word Wrd332;
  machine_word Wrd337;
  machine_word Wrd336;
  machine_word Wrd333;
  machine_word Wrd330;
  machine_word Wrd329;
  machine_word Wrd327;
  machine_word Wrd323;
  machine_word Wrd325;
  machine_word Wrd326;
  machine_word Wrd319;
  machine_word Wrd321;
  machine_word Wrd322;
  machine_word Wrd313;
  machine_word Wrd318;
  machine_word Wrd317;
  machine_word Wrd314;
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
  machine_word Wrd14;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_2_4);
      goto make_system_global_unparser_table_85;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_87;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_88;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto label_89;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_90;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_91;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto label_92;

    case 8:
      current_block = (Rpc - LABEL_2_14);
      goto label_93;

    case 9:
      current_block = (Rpc - LABEL_2_15);
      goto label_94;

    case 10:
      current_block = (Rpc - LABEL_2_16);
      goto label_95;

    case 11:
      current_block = (Rpc - LABEL_2_17);
      goto label_96;

    case 12:
      current_block = (Rpc - LABEL_2_18);
      goto label_97;

    case 13:
      current_block = (Rpc - LABEL_2_19);
      goto label_98;

    case 14:
      current_block = (Rpc - LABEL_2_20);
      goto label_99;

    case 15:
      current_block = (Rpc - LABEL_2_21);
      goto label_100;

    case 16:
      current_block = (Rpc - LABEL_2_22);
      goto label_101;

    case 17:
      current_block = (Rpc - LABEL_2_23);
      goto label_102;

    case 18:
      current_block = (Rpc - LABEL_2_24);
      goto label_103;

    case 19:
      current_block = (Rpc - LABEL_2_25);
      goto label_104;

    case 20:
      current_block = (Rpc - LABEL_2_26);
      goto label_105;

    case 21:
      current_block = (Rpc - LABEL_2_27);
      goto label_106;

    case 22:
      current_block = (Rpc - LABEL_2_28);
      goto label_107;

    case 23:
      current_block = (Rpc - LABEL_2_29);
      goto label_108;

    case 24:
      current_block = (Rpc - LABEL_2_30);
      goto label_109;

    case 25:
      current_block = (Rpc - LABEL_2_31);
      goto label_110;

    case 26:
      current_block = (Rpc - LABEL_2_32);
      goto label_111;

    case 27:
      current_block = (Rpc - LABEL_2_33);
      goto label_112;

    case 28:
      current_block = (Rpc - LABEL_2_34);
      goto label_113;

    case 29:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_83;

    case 30:
      current_block = (Rpc - LABEL_2_35);
      goto lambda_119;

    case 31:
      current_block = (Rpc - LABEL_2_38);
      goto label_114;

    case 32:
      current_block = (Rpc - LABEL_2_39);
      goto label_115;

    case 33:
      current_block = (Rpc - LABEL_2_40);
      goto label_116;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_system_global_unparser_table_118)
DEFLABEL (make_system_global_unparser_table_85)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_173;
  Wrd8 = Wrd12;

DEFLABEL (label_172)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_171;
  Wrd9 = Wrd13;

DEFLABEL (label_170)
  (Wrd18.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_2_1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_169;
  Wrd28 = Wrd32;

DEFLABEL (label_168)
  (Wrd37.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_2_2]);
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
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_3]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_167;
  Wrd47 = Wrd51;

DEFLABEL (label_166)
  (Wrd56.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd60.Obj) = (current_block [OBJECT_2_3]);
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
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_4]));
  (Wrd70.Obj) = ((Wrd67.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_165;
  Wrd66 = Wrd70;

DEFLABEL (label_164)
  (Wrd75.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (Wrd79.Obj) = (current_block [OBJECT_2_4]);
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
  (Wrd86.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_5]));
  (Wrd89.Obj) = ((Wrd86.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_163;
  Wrd85 = Wrd89;

DEFLABEL (label_162)
  (Wrd94.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd94.Obj);
  (Wrd93.pObj) = (& (Rhp [-2]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd93.pObj)));
  (Wrd98.Obj) = (current_block [OBJECT_2_5]);
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
  (Wrd105.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_6]));
  (Wrd108.Obj) = ((Wrd105.pObj) [0]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if ((Wrd109.uLng) == 50)
    goto label_161;
  Wrd104 = Wrd108;

DEFLABEL (label_160)
  (Wrd113.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd104.Obj);
  (* (Rhp++)) = (Wrd113.Obj);
  (Wrd112.pObj) = (& (Rhp [-2]));
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd112.pObj)));
  (Wrd117.Obj) = (current_block [OBJECT_2_6]);
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
  (Wrd124.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_7]));
  (Wrd127.Obj) = ((Wrd124.pObj) [0]);
  (Wrd128.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if ((Wrd128.uLng) == 50)
    goto label_159;
  Wrd123 = Wrd127;

DEFLABEL (label_158)
  (Wrd132.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd123.Obj);
  (* (Rhp++)) = (Wrd132.Obj);
  (Wrd131.pObj) = (& (Rhp [-2]));
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd131.pObj)));
  (Wrd136.Obj) = (current_block [OBJECT_2_7]);
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
  (Wrd143.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_8]));
  (Wrd146.Obj) = ((Wrd143.pObj) [0]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  if ((Wrd147.uLng) == 50)
    goto label_157;
  Wrd142 = Wrd146;

DEFLABEL (label_156)
  (Wrd151.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd142.Obj);
  (* (Rhp++)) = (Wrd151.Obj);
  (Wrd150.pObj) = (& (Rhp [-2]));
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd150.pObj)));
  (Wrd155.Obj) = (current_block [OBJECT_2_8]);
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
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_9]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_155;
  Wrd161 = Wrd165;

DEFLABEL (label_154)
  (Wrd170.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd161.Obj);
  (* (Rhp++)) = (Wrd170.Obj);
  (Wrd169.pObj) = (& (Rhp [-2]));
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd169.pObj)));
  (Wrd174.Obj) = (current_block [OBJECT_2_9]);
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
  (Wrd181.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_10]));
  (Wrd184.Obj) = ((Wrd181.pObj) [0]);
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd184.Obj));
  if ((Wrd185.uLng) == 50)
    goto label_153;
  Wrd180 = Wrd184;

DEFLABEL (label_152)
  (Wrd189.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd180.Obj);
  (* (Rhp++)) = (Wrd189.Obj);
  (Wrd188.pObj) = (& (Rhp [-2]));
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd188.pObj)));
  (Wrd193.Obj) = (current_block [OBJECT_2_10]);
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
  (Wrd200.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_8]));
  (Wrd203.Obj) = ((Wrd200.pObj) [0]);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if ((Wrd204.uLng) == 50)
    goto label_151;
  Wrd199 = Wrd203;

DEFLABEL (label_150)
  (Wrd208.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd199.Obj);
  (* (Rhp++)) = (Wrd208.Obj);
  (Wrd207.pObj) = (& (Rhp [-2]));
  (Wrd205.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd207.pObj)));
  (Wrd212.Obj) = (current_block [OBJECT_2_11]);
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
  (Wrd219.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_11]));
  (Wrd222.Obj) = ((Wrd219.pObj) [0]);
  (Wrd223.uLng) = (OBJECT_TYPE (Wrd222.Obj));
  if ((Wrd223.uLng) == 50)
    goto label_149;
  Wrd218 = Wrd222;

DEFLABEL (label_148)
  (Wrd227.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd218.Obj);
  (* (Rhp++)) = (Wrd227.Obj);
  (Wrd226.pObj) = (& (Rhp [-2]));
  (Wrd224.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd226.pObj)));
  (Wrd231.Obj) = (current_block [OBJECT_2_12]);
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
  (Wrd238.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_8]));
  (Wrd241.Obj) = ((Wrd238.pObj) [0]);
  (Wrd242.uLng) = (OBJECT_TYPE (Wrd241.Obj));
  if ((Wrd242.uLng) == 50)
    goto label_147;
  Wrd237 = Wrd241;

DEFLABEL (label_146)
  (Wrd246.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd237.Obj);
  (* (Rhp++)) = (Wrd246.Obj);
  (Wrd245.pObj) = (& (Rhp [-2]));
  (Wrd243.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd245.pObj)));
  (Wrd250.Obj) = (current_block [OBJECT_2_13]);
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
  (Wrd257.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_12]));
  (Wrd260.Obj) = ((Wrd257.pObj) [0]);
  (Wrd261.uLng) = (OBJECT_TYPE (Wrd260.Obj));
  if ((Wrd261.uLng) == 50)
    goto label_145;
  Wrd256 = Wrd260;

DEFLABEL (label_144)
  (Wrd265.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd256.Obj);
  (* (Rhp++)) = (Wrd265.Obj);
  (Wrd264.pObj) = (& (Rhp [-2]));
  (Wrd262.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd264.pObj)));
  (Wrd269.Obj) = (current_block [OBJECT_2_14]);
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
  (Wrd276.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_13]));
  (Wrd279.Obj) = ((Wrd276.pObj) [0]);
  (Wrd280.uLng) = (OBJECT_TYPE (Wrd279.Obj));
  if ((Wrd280.uLng) == 50)
    goto label_143;
  Wrd275 = Wrd279;

DEFLABEL (label_142)
  (Wrd284.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd275.Obj);
  (* (Rhp++)) = (Wrd284.Obj);
  (Wrd283.pObj) = (& (Rhp [-2]));
  (Wrd281.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd283.pObj)));
  (Wrd288.Obj) = (current_block [OBJECT_2_15]);
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
  (Wrd295.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_14]));
  (Wrd298.Obj) = ((Wrd295.pObj) [0]);
  (Wrd299.uLng) = (OBJECT_TYPE (Wrd298.Obj));
  if ((Wrd299.uLng) == 50)
    goto label_141;
  Wrd294 = Wrd298;

DEFLABEL (label_140)
  (Wrd303.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd294.Obj);
  (* (Rhp++)) = (Wrd303.Obj);
  (Wrd302.pObj) = (& (Rhp [-2]));
  (Wrd300.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd302.pObj)));
  (Wrd307.Obj) = (current_block [OBJECT_2_16]);
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
  (Wrd314.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_15]));
  (Wrd317.Obj) = ((Wrd314.pObj) [0]);
  (Wrd318.uLng) = (OBJECT_TYPE (Wrd317.Obj));
  if ((Wrd318.uLng) == 50)
    goto label_139;
  Wrd313 = Wrd317;

DEFLABEL (label_138)
  (Wrd322.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd313.Obj);
  (* (Rhp++)) = (Wrd322.Obj);
  (Wrd321.pObj) = (& (Rhp [-2]));
  (Wrd319.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd321.pObj)));
  (Wrd326.Obj) = (current_block [OBJECT_2_17]);
  (* (Rhp++)) = (Wrd326.Obj);
  (* (Rhp++)) = (Wrd319.Obj);
  (Wrd325.pObj) = (& (Rhp [-2]));
  (Wrd323.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd325.pObj)));
  (Wrd327.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd323.Obj);
  (* (Rhp++)) = (Wrd327.Obj);
  (Wrd329.pObj) = (& (Rhp [-2]));
  (Wrd330.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd329.pObj)));
  (* (--Rsp)) = (Wrd330.Obj);
  (Wrd333.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_9]));
  (Wrd336.Obj) = ((Wrd333.pObj) [0]);
  (Wrd337.uLng) = (OBJECT_TYPE (Wrd336.Obj));
  if ((Wrd337.uLng) == 50)
    goto label_137;
  Wrd332 = Wrd336;

DEFLABEL (label_136)
  (Wrd341.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd332.Obj);
  (* (Rhp++)) = (Wrd341.Obj);
  (Wrd340.pObj) = (& (Rhp [-2]));
  (Wrd338.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd340.pObj)));
  (Wrd345.Obj) = (current_block [OBJECT_2_18]);
  (* (Rhp++)) = (Wrd345.Obj);
  (* (Rhp++)) = (Wrd338.Obj);
  (Wrd344.pObj) = (& (Rhp [-2]));
  (Wrd342.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd344.pObj)));
  (Wrd346.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd342.Obj);
  (* (Rhp++)) = (Wrd346.Obj);
  (Wrd348.pObj) = (& (Rhp [-2]));
  (Wrd349.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd348.pObj)));
  (* (--Rsp)) = (Wrd349.Obj);
  (Wrd352.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_16]));
  (Wrd355.Obj) = ((Wrd352.pObj) [0]);
  (Wrd356.uLng) = (OBJECT_TYPE (Wrd355.Obj));
  if ((Wrd356.uLng) == 50)
    goto label_135;
  Wrd351 = Wrd355;

DEFLABEL (label_134)
  (Wrd360.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd351.Obj);
  (* (Rhp++)) = (Wrd360.Obj);
  (Wrd359.pObj) = (& (Rhp [-2]));
  (Wrd357.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd359.pObj)));
  (Wrd364.Obj) = (current_block [OBJECT_2_19]);
  (* (Rhp++)) = (Wrd364.Obj);
  (* (Rhp++)) = (Wrd357.Obj);
  (Wrd363.pObj) = (& (Rhp [-2]));
  (Wrd361.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd363.pObj)));
  (Wrd365.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd361.Obj);
  (* (Rhp++)) = (Wrd365.Obj);
  (Wrd367.pObj) = (& (Rhp [-2]));
  (Wrd368.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd367.pObj)));
  (* (--Rsp)) = (Wrd368.Obj);
  (Wrd371.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_17]));
  (Wrd374.Obj) = ((Wrd371.pObj) [0]);
  (Wrd375.uLng) = (OBJECT_TYPE (Wrd374.Obj));
  if ((Wrd375.uLng) == 50)
    goto label_133;
  Wrd370 = Wrd374;

DEFLABEL (label_132)
  (Wrd379.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd370.Obj);
  (* (Rhp++)) = (Wrd379.Obj);
  (Wrd378.pObj) = (& (Rhp [-2]));
  (Wrd376.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd378.pObj)));
  (Wrd383.Obj) = (current_block [OBJECT_2_20]);
  (* (Rhp++)) = (Wrd383.Obj);
  (* (Rhp++)) = (Wrd376.Obj);
  (Wrd382.pObj) = (& (Rhp [-2]));
  (Wrd380.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd382.pObj)));
  (Wrd384.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd380.Obj);
  (* (Rhp++)) = (Wrd384.Obj);
  (Wrd386.pObj) = (& (Rhp [-2]));
  (Wrd387.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd386.pObj)));
  (* (--Rsp)) = (Wrd387.Obj);
  (Wrd390.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_18]));
  (Wrd393.Obj) = ((Wrd390.pObj) [0]);
  (Wrd394.uLng) = (OBJECT_TYPE (Wrd393.Obj));
  if ((Wrd394.uLng) == 50)
    goto label_131;
  Wrd389 = Wrd393;

DEFLABEL (label_130)
  (Wrd398.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd389.Obj);
  (* (Rhp++)) = (Wrd398.Obj);
  (Wrd397.pObj) = (& (Rhp [-2]));
  (Wrd395.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd397.pObj)));
  (Wrd402.Obj) = (current_block [OBJECT_2_21]);
  (* (Rhp++)) = (Wrd402.Obj);
  (* (Rhp++)) = (Wrd395.Obj);
  (Wrd401.pObj) = (& (Rhp [-2]));
  (Wrd399.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd401.pObj)));
  (Wrd403.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd399.Obj);
  (* (Rhp++)) = (Wrd403.Obj);
  (Wrd405.pObj) = (& (Rhp [-2]));
  (Wrd406.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd405.pObj)));
  (* (--Rsp)) = (Wrd406.Obj);
  (Wrd409.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_8]));
  (Wrd412.Obj) = ((Wrd409.pObj) [0]);
  (Wrd413.uLng) = (OBJECT_TYPE (Wrd412.Obj));
  if ((Wrd413.uLng) == 50)
    goto label_129;
  Wrd408 = Wrd412;

DEFLABEL (label_128)
  (Wrd417.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd408.Obj);
  (* (Rhp++)) = (Wrd417.Obj);
  (Wrd416.pObj) = (& (Rhp [-2]));
  (Wrd414.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd416.pObj)));
  (Wrd421.Obj) = (current_block [OBJECT_2_22]);
  (* (Rhp++)) = (Wrd421.Obj);
  (* (Rhp++)) = (Wrd414.Obj);
  (Wrd420.pObj) = (& (Rhp [-2]));
  (Wrd418.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd420.pObj)));
  (Wrd422.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd418.Obj);
  (* (Rhp++)) = (Wrd422.Obj);
  (Wrd424.pObj) = (& (Rhp [-2]));
  (Wrd425.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd424.pObj)));
  (* (--Rsp)) = (Wrd425.Obj);
  (Wrd428.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_19]));
  (Wrd431.Obj) = ((Wrd428.pObj) [0]);
  (Wrd432.uLng) = (OBJECT_TYPE (Wrd431.Obj));
  if ((Wrd432.uLng) == 50)
    goto label_127;
  Wrd427 = Wrd431;

DEFLABEL (label_126)
  (Wrd436.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd427.Obj);
  (* (Rhp++)) = (Wrd436.Obj);
  (Wrd435.pObj) = (& (Rhp [-2]));
  (Wrd433.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd435.pObj)));
  (Wrd440.Obj) = (current_block [OBJECT_2_23]);
  (* (Rhp++)) = (Wrd440.Obj);
  (* (Rhp++)) = (Wrd433.Obj);
  (Wrd439.pObj) = (& (Rhp [-2]));
  (Wrd437.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd439.pObj)));
  (Wrd441.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd437.Obj);
  (* (Rhp++)) = (Wrd441.Obj);
  (Wrd443.pObj) = (& (Rhp [-2]));
  (Wrd444.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd443.pObj)));
  (* (--Rsp)) = (Wrd444.Obj);
  (Wrd447.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_20]));
  (Wrd450.Obj) = ((Wrd447.pObj) [0]);
  (Wrd451.uLng) = (OBJECT_TYPE (Wrd450.Obj));
  if ((Wrd451.uLng) == 50)
    goto label_125;
  Wrd446 = Wrd450;

DEFLABEL (label_124)
  (Wrd455.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd446.Obj);
  (* (Rhp++)) = (Wrd455.Obj);
  (Wrd454.pObj) = (& (Rhp [-2]));
  (Wrd452.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd454.pObj)));
  (Wrd459.Obj) = (current_block [OBJECT_2_24]);
  (* (Rhp++)) = (Wrd459.Obj);
  (* (Rhp++)) = (Wrd452.Obj);
  (Wrd458.pObj) = (& (Rhp [-2]));
  (Wrd456.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd458.pObj)));
  (Wrd460.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd456.Obj);
  (* (Rhp++)) = (Wrd460.Obj);
  (Wrd462.pObj) = (& (Rhp [-2]));
  (Wrd463.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd462.pObj)));
  (* (--Rsp)) = (Wrd463.Obj);
  (Wrd466.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_8]));
  (Wrd469.Obj) = ((Wrd466.pObj) [0]);
  (Wrd470.uLng) = (OBJECT_TYPE (Wrd469.Obj));
  if ((Wrd470.uLng) == 50)
    goto label_123;
  Wrd465 = Wrd469;

DEFLABEL (label_122)
  (Wrd474.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd465.Obj);
  (* (Rhp++)) = (Wrd474.Obj);
  (Wrd473.pObj) = (& (Rhp [-2]));
  (Wrd471.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd473.pObj)));
  (Wrd478.Obj) = (current_block [OBJECT_2_25]);
  (* (Rhp++)) = (Wrd478.Obj);
  (* (Rhp++)) = (Wrd471.Obj);
  (Wrd477.pObj) = (& (Rhp [-2]));
  (Wrd475.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd477.pObj)));
  (Wrd479.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd475.Obj);
  (* (Rhp++)) = (Wrd479.Obj);
  (Wrd481.pObj) = (& (Rhp [-2]));
  (Wrd482.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd481.pObj)));
  (* (--Rsp)) = (Wrd482.Obj);
  (Wrd485.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_21]));
  (Wrd488.Obj) = ((Wrd485.pObj) [0]);
  (Wrd489.uLng) = (OBJECT_TYPE (Wrd488.Obj));
  if ((Wrd489.uLng) == 50)
    goto label_121;
  Wrd484 = Wrd488;

DEFLABEL (label_120)
  (Wrd493.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd484.Obj);
  (* (Rhp++)) = (Wrd493.Obj);
  (Wrd492.pObj) = (& (Rhp [-2]));
  (Wrd490.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd492.pObj)));
  (Wrd497.Obj) = (current_block [OBJECT_2_26]);
  (* (Rhp++)) = (Wrd497.Obj);
  (* (Rhp++)) = (Wrd490.Obj);
  (Wrd496.pObj) = (& (Rhp [-2]));
  (Wrd494.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd496.pObj)));
  (Wrd498.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd494.Obj);
  (* (Rhp++)) = (Wrd498.Obj);
  (Wrd500.pObj) = (& (Rhp [-2]));
  (Wrd501.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd500.pObj)));
  (* (--Rsp)) = (Wrd501.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd503.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_35])));
  Rhp += 1;
  (Wrd502.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd503.pObj)));
  Wrd504 = Wrd503;
  (Wrd505.Obj) = (Rsp [2]);
  ((Wrd504.pObj) [2]) = (Wrd505.Obj);
  (* (--Rsp)) = (Wrd502.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_37]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_2_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_121)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_34])), (Wrd485.pObj));

DEFLABEL (label_113)
  (Wrd484.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_33])), (Wrd466.pObj));

DEFLABEL (label_112)
  (Wrd465.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_32])), (Wrd447.pObj));

DEFLABEL (label_111)
  (Wrd446.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_31])), (Wrd428.pObj));

DEFLABEL (label_110)
  (Wrd427.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_30])), (Wrd409.pObj));

DEFLABEL (label_109)
  (Wrd408.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_29])), (Wrd390.pObj));

DEFLABEL (label_108)
  (Wrd389.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_28])), (Wrd371.pObj));

DEFLABEL (label_107)
  (Wrd370.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_27])), (Wrd352.pObj));

DEFLABEL (label_106)
  (Wrd351.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_26])), (Wrd333.pObj));

DEFLABEL (label_105)
  (Wrd332.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_25])), (Wrd314.pObj));

DEFLABEL (label_104)
  (Wrd313.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_24])), (Wrd295.pObj));

DEFLABEL (label_103)
  (Wrd294.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_23])), (Wrd276.pObj));

DEFLABEL (label_102)
  (Wrd275.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_22])), (Wrd257.pObj));

DEFLABEL (label_101)
  (Wrd256.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_21])), (Wrd238.pObj));

DEFLABEL (label_100)
  (Wrd237.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_20])), (Wrd219.pObj));

DEFLABEL (label_99)
  (Wrd218.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_19])), (Wrd200.pObj));

DEFLABEL (label_98)
  (Wrd199.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_18])), (Wrd181.pObj));

DEFLABEL (label_97)
  (Wrd180.Obj) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_17])), (Wrd162.pObj));

DEFLABEL (label_96)
  (Wrd161.Obj) = Rvl;
  goto label_154;

DEFLABEL (label_157)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_16])), (Wrd143.pObj));

DEFLABEL (label_95)
  (Wrd142.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_15])), (Wrd124.pObj));

DEFLABEL (label_94)
  (Wrd123.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_14])), (Wrd105.pObj));

DEFLABEL (label_93)
  (Wrd104.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_13])), (Wrd86.pObj));

DEFLABEL (label_92)
  (Wrd85.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_165)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_12])), (Wrd67.pObj));

DEFLABEL (label_91)
  (Wrd66.Obj) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_11])), (Wrd48.pObj));

DEFLABEL (label_90)
  (Wrd47.Obj) = Rvl;
  goto label_166;

DEFLABEL (label_169)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_10])), (Wrd29.pObj));

DEFLABEL (label_89)
  (Wrd28.Obj) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_9])), (Wrd10.pObj));

DEFLABEL (label_88)
  (Wrd9.Obj) = Rvl;
  goto label_170;

DEFLABEL (label_173)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_6])), (Wrd9.pObj));

DEFLABEL (label_87)
  (Wrd8.Obj) = Rvl;
  goto label_172;

DEFLABEL (lambda_119)
  CLOSURE_HEADER (LABEL_2_35);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_179;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_178)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_177;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_176)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_175;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd26.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_174)
  (Rsp [2]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (label_175)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_40]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_27]), 1);

DEFLABEL (label_116)
  (Wrd26.Obj) = Rvl;
  goto label_174;

DEFLABEL (label_177)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_39]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_28]), 1);

DEFLABEL (label_115)
  (Wrd17.Obj) = Rvl;
  goto label_176;

DEFLABEL (label_179)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_38]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_27]), 1);

DEFLABEL (label_114)
  (Wrd8.Obj) = Rvl;
  goto label_178;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 7
#define DEBUGGING_LABEL_3_2 6
#define OBJECT_3_1 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto unparser_table_dispatch_vector_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_table_dispatch_vector_3)
DEFLABEL (unparser_table_dispatch_vector_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

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

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define ENVIRONMENT_LABEL_4_3 17
#define DEBUGGING_LABEL_4_2 16
#define OBJECT_4_3 15
#define OBJECT_4_2 14
#define OBJECT_4_1 13
#define OBJECT_4_0 12
#define FREE_REFERENCE_4_0 11
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto unparser_tableP_4;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_tableP_10)
DEFLABEL (unparser_tableP_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
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
  Rvl = (current_block [OBJECT_4_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_4_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 13
#define DEBUGGING_LABEL_5_2 12
#define OBJECT_5_0 11
#define EXECUTE_CACHE_5_7 7
#define EXECUTE_CACHE_5_6 9
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto guarantee_unparser_table_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_unparser_table_4)
DEFLABEL (guarantee_unparser_table_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_5_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 11
#define DEBUGGING_LABEL_6_2 10
#define OBJECT_6_2 9
#define OBJECT_6_1 8
#define OBJECT_6_0 7
#define EXECUTE_CACHE_6_5 5
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto error_not_unparser_table_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_unparser_table_5)
DEFLABEL (error_not_unparser_table_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_6_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_6_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define ENVIRONMENT_LABEL_7_3 16
#define DEBUGGING_LABEL_7_2 15
#define EXECUTE_CACHE_7_9 9
#define EXECUTE_CACHE_7_8 11
#define EXECUTE_CACHE_7_7 13
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_7_4);
      goto make_unparser_table_2;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_unparser_table_5)
DEFLABEL (make_unparser_table_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 12
#define DEBUGGING_LABEL_8_2 11
#define OBJECT_8_1 10
#define OBJECT_8_0 9
#define EXECUTE_CACHE_8_6 7
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_8_4);
      goto unparser_table_copy_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_table_copy_5)
DEFLABEL (unparser_table_copy_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_8_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define ENVIRONMENT_LABEL_9_3 15
#define DEBUGGING_LABEL_9_2 14
#define OBJECT_9_2 13
#define OBJECT_9_1 12
#define OBJECT_9_0 11
#define EXECUTE_CACHE_9_7 9
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      goto unparser_table_entry_2;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_table_entry_6)
DEFLABEL (unparser_table_entry_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (Rsp [1]) = Rvl;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_8)
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_7;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_7;
  (Wrd8.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd11.pObj) = (& ((Wrd18.pObj) [(Wrd8.Lng)]));
  Rvl = ((Wrd11.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_9_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define ENVIRONMENT_LABEL_10_3 16
#define DEBUGGING_LABEL_10_2 15
#define OBJECT_10_3 14
#define OBJECT_10_2 13
#define OBJECT_10_1 12
#define OBJECT_10_0 11
#define EXECUTE_CACHE_10_7 9
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd22;
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
      goto unparser_table_set_entryB_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_table_set_entryB_6)
DEFLABEL (unparser_table_set_entryB_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (Rsp [1]) = Rvl;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 3);

DEFLABEL (label_8)
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 26))
    goto label_7;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) (Wrd17.Lng)) < ((unsigned long) (Wrd21.Lng))))
    goto label_7;
  (Wrd8.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd11.pObj) = (& ((Wrd19.pObj) [(Wrd8.Lng)]));
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [1]) = (Wrd12.Obj);
  Rvl = (current_block [OBJECT_10_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_10_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
unpars_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto unparser_state_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_state_port_3)
DEFLABEL (unparser_state_port_0)
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
unpars_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto unparser_state_list_depth_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_state_list_depth_3)
DEFLABEL (unparser_state_list_depth_0)
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
unpars_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto unparser_state_slashifyP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_state_slashifyP_3)
DEFLABEL (unparser_state_slashifyP_0)
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
unpars_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto unparser_state_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_state_environment_3)
DEFLABEL (unparser_state_environment_0)
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
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define ENVIRONMENT_LABEL_15_3 17
#define DEBUGGING_LABEL_15_2 16
#define OBJECT_15_3 15
#define OBJECT_15_2 14
#define OBJECT_15_1 13
#define OBJECT_15_0 12
#define FREE_REFERENCE_15_0 11
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto unparser_stateP_4;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparser_stateP_10)
DEFLABEL (unparser_stateP_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
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
  Rvl = (current_block [OBJECT_15_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_15_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
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
unpars_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_unparser_state_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_unparser_state_4)
DEFLABEL (guarantee_unparser_state_1)
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
unpars_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto error_not_unparser_state_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_unparser_state_5)
DEFLABEL (error_not_unparser_state_2)
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
#define LABEL_18_5 5
#define LABEL_18_9 7
#define TAG_18_10 2
#define LABEL_18_12 9
#define LABEL_18_7 11
#define TAG_18_8 4
#define LABEL_18_13 13
#define LABEL_18_14 15
#define LABEL_18_15 17
#define ENVIRONMENT_LABEL_18_3 32
#define DEBUGGING_LABEL_18_2 31
#define OBJECT_18_3 30
#define OBJECT_18_2 29
#define OBJECT_18_1 28
#define OBJECT_18_0 27
#define EXECUTE_CACHE_18_11 19
#define EXECUTE_CACHE_18_6 21
#define FREE_REFERENCE_18_0 24
#define FREE_ASSIGNMENT_18_0 26
#define FREE_REFERENCES_LABEL_18_0 18
#define NUMBER_OF_LINKER_SECTIONS_18_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd17;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_18_4);
      goto with_current_unparser_state_11;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_9);
      goto lambda_20;

    case 3:
      current_block = (Rpc - LABEL_18_12);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_18_7);
      goto swapB_19;

    case 5:
      current_block = (Rpc - LABEL_18_13);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_18_14);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_18_15);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_current_unparser_state_18)
DEFLABEL (with_current_unparser_state_11)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Wrd8.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_7])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_9])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  ((Wrd14.pObj) [3]) = (Wrd8.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_18_9);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd23.Obj) = ((Wrd6.pObj) [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_22;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_22;
  (Wrd8.Obj) = ((Wrd18.pObj) [2]);

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_22)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [3]);
  (Wrd28.Obj) = (current_block [OBJECT_18_1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_21;

DEFLABEL (swapB_19)
  CLOSURE_HEADER (LABEL_18_7);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  Wrd5 = Wrd9;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_26)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_18_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_15])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_16)
  goto label_23;

DEFLABEL (label_28)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_14])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_15)
  goto label_26;

DEFLABEL (label_31)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_13])), (Wrd6.pObj));

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define ENVIRONMENT_LABEL_19_3 17
#define DEBUGGING_LABEL_19_2 16
#define OBJECT_19_2 15
#define OBJECT_19_1 14
#define OBJECT_19_0 13
#define EXECUTE_CACHE_19_8 9
#define EXECUTE_CACHE_19_6 11
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_19_4);
      goto unparse_char_2;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_char_6)
DEFLABEL (unparse_char_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_7)
  (Wrd21.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd21.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_19_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define ENVIRONMENT_LABEL_20_3 17
#define DEBUGGING_LABEL_20_2 16
#define OBJECT_20_2 15
#define OBJECT_20_1 14
#define OBJECT_20_0 13
#define EXECUTE_CACHE_20_8 9
#define EXECUTE_CACHE_20_6 11
#define FREE_REFERENCES_LABEL_20_0 8
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_20_4);
      goto unparse_string_2;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_string_6)
DEFLABEL (unparse_string_2)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_7)
  (Wrd21.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd21.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_20_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define LABEL_21_8 9
#define LABEL_21_9 11
#define LABEL_21_10 13
#define ENVIRONMENT_LABEL_21_3 26
#define DEBUGGING_LABEL_21_2 25
#define OBJECT_21_5 24
#define OBJECT_21_4 23
#define OBJECT_21_3 22
#define OBJECT_21_2 21
#define OBJECT_21_1 20
#define OBJECT_21_0 19
#define EXECUTE_CACHE_21_11 15
#define EXECUTE_CACHE_21_6 17
#define FREE_REFERENCES_LABEL_21_0 14
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
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
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_21_4);
      goto unparse_object_5;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_21_10);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_object_12)
DEFLABEL (unparse_object_5)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_19)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_18;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_18;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_17)
  (Wrd37.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_16;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd46.Lng))))
    goto label_16;
  (Wrd38.Obj) = ((Wrd44.pObj) [5]);

DEFLABEL (label_15)
  (Rsp [4]) = (Wrd38.Obj);
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 62))
    goto label_14;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd62.Lng))))
    goto label_14;
  (Wrd54.Obj) = ((Wrd60.pObj) [4]);

DEFLABEL (label_13)
  (Rsp [3]) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (label_14)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.Obj) = (current_block [OBJECT_21_5]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (label_10)
  (Wrd54.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.Obj) = (current_block [OBJECT_21_4]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (label_9)
  (Wrd38.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_21_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_21_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_5 3
#define LABEL_22_6 5
#define LABEL_22_7 7
#define LABEL_22_9 9
#define LABEL_22_4 11
#define LABEL_22_10 13
#define LABEL_22_12 15
#define LABEL_22_13 17
#define LABEL_22_14 19
#define LABEL_22_15 21
#define LABEL_22_16 23
#define ENVIRONMENT_LABEL_22_3 41
#define DEBUGGING_LABEL_22_2 40
#define OBJECT_22_4 39
#define OBJECT_22_3 38
#define OBJECT_22_2 37
#define OBJECT_22_1 36
#define OBJECT_22_0 35
#define EXECUTE_CACHE_22_18 25
#define EXECUTE_CACHE_22_17 27
#define EXECUTE_CACHE_22_11 29
#define EXECUTE_CACHE_22_8 31
#define FREE_REFERENCE_22_0 34
#define FREE_REFERENCES_LABEL_22_0 24
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd69;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd62;
  machine_word Wrd31;
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
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_22_4);
      goto unparse_object_top_level_5;

    case 5:
      current_block = (Rpc - LABEL_22_10);
      goto label_7;

    case 6:
      current_block = (Rpc - LABEL_22_12);
      goto label_8;

    case 7:
      current_block = (Rpc - LABEL_22_13);
      goto label_9;

    case 8:
      current_block = (Rpc - LABEL_22_14);
      goto label_10;

    case 9:
      current_block = (Rpc - LABEL_22_15);
      goto label_11;

    case 10:
      current_block = (Rpc - LABEL_22_16);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_object_top_level_14)
DEFLABEL (unparse_object_top_level_5)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  if ((Wrd10.Obj) == (current_block [OBJECT_22_0]))
    goto label_25;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd82.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Wrd31.Obj) = (Rsp [5]);

DEFLABEL (label_24)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_23)
  (Rsp [4]) = (Wrd31.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_22;
  Wrd47 = Wrd51;

DEFLABEL (label_21)
  if ((Wrd47.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_19;
  Wrd55 = Wrd59;

DEFLABEL (label_18)
  Wrd54 = Wrd55;
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd69.uLng) == 62))
    goto label_17;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd68.Lng))))
    goto label_17;
  (Wrd62.Obj) = ((Wrd66.pObj) [3]);

DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_15)
  (Rsp [2]) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_17]));

DEFLABEL (label_17)
  (Wrd71.Obj) = (current_block [OBJECT_22_4]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_16]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 2);

DEFLABEL (label_12)
  (Wrd62.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_15])), (Wrd56.pObj));

DEFLABEL (label_11)
  (Wrd55.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd62.Obj) = (current_block [OBJECT_22_3]);
  goto label_16;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_14])), (Wrd48.pObj));

DEFLABEL (label_10)
  (Wrd47.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_31;
  Wrd16 = Wrd20;

DEFLABEL (label_30)
  if (! ((Wrd16.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_26;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_9);
  (Wrd31.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_29;
  Wrd24 = Wrd28;

DEFLABEL (label_28)
  Wrd23 = Wrd24;
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_27;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd37.Lng))))
    goto label_27;
  (Wrd31.Obj) = ((Wrd35.pObj) [5]);
  goto label_24;

DEFLABEL (label_27)
  (Wrd40.Obj) = (current_block [OBJECT_22_1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 2);

DEFLABEL (label_9)
  (Wrd31.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_12])), (Wrd25.pObj));

DEFLABEL (label_8)
  (Wrd24.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_10])), (Wrd17.pObj));

DEFLABEL (label_7)
  (Wrd16.Obj) = Rvl;
  goto label_30;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (Wrd62.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define LABEL_23_9 9
#define LABEL_23_12 11
#define TAG_23_13 4
#define LABEL_23_10 13
#define TAG_23_11 5
#define LABEL_23_16 15
#define LABEL_23_17 17
#define LABEL_23_18 19
#define LABEL_23_19 21
#define LABEL_23_20 23
#define LABEL_23_21 25
#define LABEL_23_22 27
#define LABEL_23_23 29
#define LABEL_23_24 31
#define LABEL_23_25 33
#define LABEL_23_26 35
#define LABEL_23_27 37
#define LABEL_23_28 39
#define LABEL_23_29 41
#define LABEL_23_30 43
#define ENVIRONMENT_LABEL_23_3 70
#define DEBUGGING_LABEL_23_2 69
#define OBJECT_23_3 68
#define OBJECT_23_2 67
#define OBJECT_23_1 66
#define OBJECT_23_0 65
#define EXECUTE_CACHE_23_15 45
#define EXECUTE_CACHE_23_14 47
#define EXECUTE_CACHE_23_8 49
#define EXECUTE_CACHE_23_6 51
#define FREE_REFERENCE_23_4 54
#define FREE_REFERENCE_23_3 55
#define FREE_REFERENCE_23_2 56
#define FREE_REFERENCE_23_1 57
#define FREE_REFERENCE_23_0 58
#define FREE_ASSIGNMENT_23_4 60
#define FREE_ASSIGNMENT_23_3 61
#define FREE_ASSIGNMENT_23_2 62
#define FREE_ASSIGNMENT_23_1 63
#define FREE_ASSIGNMENT_23_0 64
#define FREE_REFERENCES_LABEL_23_0 44
#define NUMBER_OF_LINKER_SECTIONS_23_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_23_4);
      goto unparse_object_internal_38;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_23_9);
      goto label_40;

    case 4:
      current_block = (Rpc - LABEL_23_12);
      goto lambda_59;

    case 5:
      current_block = (Rpc - LABEL_23_10);
      goto swapB_58;

    case 6:
      current_block = (Rpc - LABEL_23_16);
      goto label_41;

    case 7:
      current_block = (Rpc - LABEL_23_17);
      goto label_42;

    case 8:
      current_block = (Rpc - LABEL_23_18);
      goto label_43;

    case 9:
      current_block = (Rpc - LABEL_23_19);
      goto label_44;

    case 10:
      current_block = (Rpc - LABEL_23_20);
      goto label_45;

    case 11:
      current_block = (Rpc - LABEL_23_21);
      goto label_46;

    case 12:
      current_block = (Rpc - LABEL_23_22);
      goto label_47;

    case 13:
      current_block = (Rpc - LABEL_23_23);
      goto label_48;

    case 14:
      current_block = (Rpc - LABEL_23_24);
      goto label_49;

    case 15:
      current_block = (Rpc - LABEL_23_25);
      goto label_50;

    case 16:
      current_block = (Rpc - LABEL_23_26);
      goto label_51;

    case 17:
      current_block = (Rpc - LABEL_23_27);
      goto label_52;

    case 18:
      current_block = (Rpc - LABEL_23_28);
      goto label_53;

    case 19:
      current_block = (Rpc - LABEL_23_29);
      goto label_54;

    case 20:
      current_block = (Rpc - LABEL_23_30);
      goto label_55;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_object_internal_57)
DEFLABEL (unparse_object_internal_38)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 62))
    goto label_61;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_61;
  (Wrd8.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_60)
  (Wrd23.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd21.pObj) = (& (Rhp [-1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-1]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-1]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd35.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd33.pObj) = (& (Rhp [-1]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd63.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_10])));
  Rhp += 5;
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd63.pObj)));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd62.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd60.pObj) = (& (Rhp [-1]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd60.pObj)));
  (Rsp [5]) = (Wrd61.Obj);
  Wrd57 = Wrd63;
  ((Wrd57.pObj) [2]) = (Wrd61.Obj);
  ((Wrd57.pObj) [3]) = (Wrd22.Obj);
  ((Wrd57.pObj) [4]) = (Wrd26.Obj);
  ((Wrd57.pObj) [5]) = (Wrd30.Obj);
  ((Wrd57.pObj) [6]) = (Wrd34.Obj);
  (Rsp [8]) = (Wrd64.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_12])));
  Rhp += 1;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  Wrd40 = Wrd39;
  (Wrd41.Obj) = (Rsp [6]);
  ((Wrd40.pObj) [2]) = (Wrd41.Obj);
  (Rsp [9]) = (Wrd38.Obj);
  (Rsp [10]) = (Wrd64.Obj);
  Rsp = (& (Rsp [8]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_14]));

DEFLABEL (label_61)
  (Wrd16.Obj) = (current_block [OBJECT_23_1]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (lambda_59)
  CLOSURE_HEADER (LABEL_23_12);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_15]));

DEFLABEL (swapB_58)
  CLOSURE_HEADER (LABEL_23_10);

DEFLABEL (swapB_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_106;

DEFLABEL (label_105)
  Wrd5 = Wrd9;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_103;

DEFLABEL (label_102)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_101)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [6]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_100;

DEFLABEL (label_99)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_98)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_97;

DEFLABEL (label_96)
  Wrd57 = Wrd61;

DEFLABEL (label_95)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_94;

DEFLABEL (label_93)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_92)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [5]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_91;

DEFLABEL (label_90)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_89)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_88;

DEFLABEL (label_87)
  Wrd109 = Wrd113;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_85;

DEFLABEL (label_84)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_83)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [4]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_80)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_3]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  Wrd161 = Wrd165;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_76;

DEFLABEL (label_75)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_74)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [3]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_73;

DEFLABEL (label_72)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_71)
  (Wrd214.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_4]));
  (Wrd217.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if ((Wrd218.uLng) == 50)
    goto label_70;

DEFLABEL (label_69)
  Wrd213 = Wrd217;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd225.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_4]));
  (Wrd226.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd235.Obj) = ((Wrd225.pObj) [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if ((Wrd236.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd225.pObj) [0]) = (Wrd226.Obj);

DEFLABEL (label_65)
  (Wrd240.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd243.Obj) = ((Wrd242.pObj) [2]);
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (* (--Rsp)) = (Wrd245.Obj);
  ((Wrd244.pObj) [0]) = (Wrd240.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd253.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_4]));
  (Wrd261.Obj) = ((Wrd253.pObj) [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd262.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd253.pObj) [0]) = (Wrd245.Obj);

DEFLABEL (label_62)
  Rvl = (current_block [OBJECT_23_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_64)
  if ((Wrd261.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_30])), (Wrd253.pObj), (Wrd245.Obj));

DEFLABEL (label_55)
  goto label_62;

DEFLABEL (label_67)
  if ((Wrd235.Obj) == (Wrd226.Obj))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_29])), (Wrd225.pObj), (Wrd226.Obj));

DEFLABEL (label_54)
  goto label_65;

DEFLABEL (label_70)
  if ((Wrd217.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_69;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_23_28])), (Wrd214.pObj));

DEFLABEL (label_53)
  (Wrd213.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_73)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_72;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_27])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_52)
  goto label_71;

DEFLABEL (label_76)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_75;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_26])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_51)
  goto label_74;

DEFLABEL (label_79)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_78;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_23_25])), (Wrd162.pObj));

DEFLABEL (label_50)
  (Wrd161.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_82)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_81;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_24])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_49)
  goto label_80;

DEFLABEL (label_85)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_84;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_23])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_48)
  goto label_83;

DEFLABEL (label_88)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_87;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_23_22])), (Wrd110.pObj));

DEFLABEL (label_47)
  (Wrd109.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_91)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_90;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_21])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_46)
  goto label_89;

DEFLABEL (label_94)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_93;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_20])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_45)
  goto label_92;

DEFLABEL (label_97)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_96;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_23_19])), (Wrd58.pObj));

DEFLABEL (label_44)
  (Wrd57.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_100)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_99;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_18])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_43)
  goto label_98;

DEFLABEL (label_103)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_102;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_17])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_42)
  goto label_101;

DEFLABEL (label_106)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_105;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_23_16])), (Wrd6.pObj));

DEFLABEL (label_41)
  (Wrd5.Obj) = Rvl;
  goto label_104;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_6 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define LABEL_24_9 11
#define LABEL_24_5 13
#define ENVIRONMENT_LABEL_24_3 23
#define DEBUGGING_LABEL_24_2 22
#define EXECUTE_CACHE_24_10 15
#define FREE_REFERENCE_24_3 18
#define FREE_REFERENCE_24_2 19
#define FREE_REFERENCE_24_1 20
#define FREE_REFERENCE_24_0 21
#define FREE_REFERENCES_LABEL_24_0 14
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_24_4);
      goto invoke_user_method_1;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invoke_user_method_8)
DEFLABEL (invoke_user_method_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;
  Wrd9 = Wrd13;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_14;
  Wrd15 = Wrd19;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_12;
  Wrd21 = Wrd25;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_3]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_10;
  Wrd27 = Wrd31;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_9])), (Wrd28.pObj));

DEFLABEL (label_6)
  (Wrd27.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_8])), (Wrd22.pObj));

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_7])), (Wrd16.pObj));

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_6])), (Wrd10.pObj));

DEFLABEL (label_3)
  (Wrd9.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define ENVIRONMENT_LABEL_25_3 12
#define DEBUGGING_LABEL_25_2 11
#define OBJECT_25_0 10
#define FREE_REFERENCE_25_0 9
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_25_4);
      goto Z__unparse_object_2;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_object_7)
DEFLABEL (Z__unparse_object_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_11;
  Wrd6 = Wrd10;

DEFLABEL (label_10)
  Wrd5 = Wrd6;
  (Wrd13.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_9;
  if (! ((Wrd13.uLng) == 26))
    goto label_9;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_9;
  (Wrd18.pObj) = (& ((Wrd22.pObj) [(Wrd15.Lng)]));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 12
#define DEBUGGING_LABEL_26_2 11
#define EXECUTE_CACHE_26_6 7
#define FREE_REFERENCE_26_0 10
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto Z__unparse_char_0;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_char_4)
DEFLABEL (Z__unparse_char_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 12
#define DEBUGGING_LABEL_27_2 11
#define EXECUTE_CACHE_27_6 7
#define FREE_REFERENCE_27_0 10
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto Z__unparse_string_0;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_string_4)
DEFLABEL (Z__unparse_string_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 12
#define DEBUGGING_LABEL_28_2 11
#define EXECUTE_CACHE_28_6 7
#define FREE_REFERENCE_28_0 10
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto Z__unparse_substring_0;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_substring_4)
DEFLABEL (Z__unparse_substring_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define ENVIRONMENT_LABEL_29_3 11
#define DEBUGGING_LABEL_29_2 10
#define OBJECT_29_0 9
#define EXECUTE_CACHE_29_6 7
#define FREE_REFERENCES_LABEL_29_0 6
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto Z__unparse_datum_1;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_datum_4)
DEFLABEL (Z__unparse_datum_1)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_6 5
#define LABEL_30_5 7
#define LABEL_30_8 9
#define LABEL_30_9 11
#define ENVIRONMENT_LABEL_30_3 22
#define DEBUGGING_LABEL_30_2 21
#define OBJECT_30_1 20
#define OBJECT_30_0 19
#define EXECUTE_CACHE_30_10 13
#define EXECUTE_CACHE_30_7 15
#define FREE_REFERENCE_30_0 18
#define FREE_REFERENCES_LABEL_30_0 12
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto Z__unparse_hex_2;

    case 1:
      current_block = (Rpc - LABEL_30_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_30_8);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_hex_7)
DEFLABEL (Z__unparse_hex_2)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_11;
  Wrd9 = Wrd13;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_8])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_6])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_7 9
#define ENVIRONMENT_LABEL_31_3 20
#define DEBUGGING_LABEL_31_2 19
#define EXECUTE_CACHE_31_10 11
#define EXECUTE_CACHE_31_9 13
#define EXECUTE_CACHE_31_8 15
#define FREE_REFERENCE_31_0 18
#define FREE_REFERENCES_LABEL_31_0 10
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_31_4);
      goto Z__unparse_hash_2;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_hash_6)
DEFLABEL (Z__unparse_hash_2)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_6 5
#define LABEL_32_5 7
#define LABEL_32_8 9
#define LABEL_32_9 11
#define LABEL_32_10 13
#define ENVIRONMENT_LABEL_32_3 25
#define DEBUGGING_LABEL_32_2 24
#define OBJECT_32_0 23
#define EXECUTE_CACHE_32_12 15
#define EXECUTE_CACHE_32_11 17
#define EXECUTE_CACHE_32_7 19
#define FREE_REFERENCE_32_0 22
#define FREE_REFERENCES_LABEL_32_0 14
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_32_4);
      goto Z__unparse_readable_hash_3;

    case 1:
      current_block = (Rpc - LABEL_32_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_32_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_readable_hash_8)
DEFLABEL (Z__unparse_readable_hash_3)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_12;
  Wrd9 = Wrd13;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_8])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_6])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define LABEL_33_6 9
#define LABEL_33_11 11
#define LABEL_33_13 13
#define LABEL_33_14 15
#define LABEL_33_10 17
#define LABEL_33_15 19
#define LABEL_33_16 21
#define LABEL_33_19 23
#define LABEL_33_21 25
#define LABEL_33_23 27
#define LABEL_33_22 29
#define LABEL_33_20 31
#define LABEL_33_18 33
#define LABEL_33_24 35
#define LABEL_33_28 37
#define LABEL_33_25 39
#define LABEL_33_27 41
#define ENVIRONMENT_LABEL_33_3 66
#define DEBUGGING_LABEL_33_2 65
#define OBJECT_33_3 64
#define OBJECT_33_2 63
#define OBJECT_33_1 62
#define OBJECT_33_0 61
#define EXECUTE_CACHE_33_30 43
#define EXECUTE_CACHE_33_29 45
#define EXECUTE_CACHE_33_26 47
#define EXECUTE_CACHE_33_17 49
#define EXECUTE_CACHE_33_12 51
#define EXECUTE_CACHE_33_9 53
#define EXECUTE_CACHE_33_8 55
#define FREE_REFERENCE_33_2 58
#define FREE_REFERENCE_33_1 59
#define FREE_REFERENCE_33_0 60
#define FREE_REFERENCES_LABEL_33_0 42
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_33_4);
      goto Z__unparse_with_brackets_11;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_33_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_33_11);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_33_13);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_33_14);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_33_10);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_33_15);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_33_16);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_33_19);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_33_21);
      goto label_17;

    case 12:
      current_block = (Rpc - LABEL_33_23);
      goto label_16;

    case 13:
      current_block = (Rpc - LABEL_33_22);
      goto continuation_3;

    case 14:
      current_block = (Rpc - LABEL_33_20);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_33_18);
      goto continuation_7;

    case 16:
      current_block = (Rpc - LABEL_33_24);
      goto continuation_5;

    case 17:
      current_block = (Rpc - LABEL_33_28);
      goto label_21;

    case 18:
      current_block = (Rpc - LABEL_33_25);
      goto continuation_4;

    case 19:
      current_block = (Rpc - LABEL_33_27);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__unparse_with_brackets_23)
DEFLABEL (Z__unparse_with_brackets_11)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_46;
  Wrd5 = Wrd9;

DEFLABEL (label_45)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd12.Obj) = (Rsp [1]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

DEFLABEL (label_24)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_44;
  Wrd20 = Wrd24;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_40;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_10);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_33_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_39;
  Wrd11 = Wrd15;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_25]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_26]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_29]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_24);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_37;
  Wrd5 = Wrd9;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_33_14);

DEFLABEL (label_35)
  (Wrd17.Obj) = (Rsp [2]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_20]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_33_2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_29;
  Wrd23 = Wrd27;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_33_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_33_13);

DEFLABEL (label_27)
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_26;
  Wrd47 = Wrd51;

DEFLABEL (label_25)
  (Rsp [1]) = (Wrd47.Obj);
  (Wrd53.Obj) = (current_block [OBJECT_33_1]);
  (Rsp [2]) = (Wrd53.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_17]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_16])), (Wrd48.pObj));

DEFLABEL (label_20)
  (Wrd47.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_21])), (Wrd24.pObj));

DEFLABEL (label_17)
  (Wrd23.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_2]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_34;
  Wrd29 = Wrd33;

DEFLABEL (label_33)
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_18]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_33_2]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_32;
  Wrd40 = Wrd44;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_33_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_3]), 1);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_33_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_30]));

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_19])), (Wrd41.pObj));

DEFLABEL (label_19)
  (Wrd40.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_15])), (Wrd30.pObj));

DEFLABEL (label_18)
  (Wrd29.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_28])), (Wrd6.pObj));

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_23])), (Wrd12.pObj));

DEFLABEL (label_16)
  (Wrd11.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_42;
  Wrd15 = Wrd19;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_11])), (Wrd16.pObj));

DEFLABEL (label_15)
  (Wrd15.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_7])), (Wrd21.pObj));

DEFLABEL (label_14)
  (Wrd20.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_5])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_7 7
#define LABEL_34_9 9
#define LABEL_34_14 11
#define TAG_34_15 4
#define LABEL_34_11 13
#define TAG_34_12 5
#define LABEL_34_16 15
#define LABEL_34_17 17
#define ENVIRONMENT_LABEL_34_3 33
#define DEBUGGING_LABEL_34_2 32
#define OBJECT_34_2 31
#define OBJECT_34_1 30
#define OBJECT_34_0 29
#define EXECUTE_CACHE_34_18 19
#define EXECUTE_CACHE_34_13 21
#define EXECUTE_CACHE_34_10 23
#define EXECUTE_CACHE_34_8 25
#define EXECUTE_CACHE_34_6 27
#define FREE_REFERENCES_LABEL_34_0 18
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_34_4);
      goto unparse_default_10;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_34_14);
      goto lambda_15;

    case 5:
      current_block = (Rpc - LABEL_34_11);
      goto lambda_14;

    case 6:
      current_block = (Rpc - LABEL_34_16);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_34_17);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_default_13)
DEFLABEL (unparse_default_10)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (label_16)
  (Wrd10.Obj) = (Rsp [0]);
  if ((Wrd10.Obj) == (current_block [OBJECT_34_1]))
    goto label_17;
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_14])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_11])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  ((Wrd23.pObj) [2]) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_34_14);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_16);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_34_11);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_34_17);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define LABEL_35_8 9
#define ENVIRONMENT_LABEL_35_3 23
#define DEBUGGING_LABEL_35_2 22
#define OBJECT_35_0 21
#define EXECUTE_CACHE_35_12 11
#define EXECUTE_CACHE_35_11 13
#define EXECUTE_CACHE_35_10 15
#define EXECUTE_CACHE_35_9 17
#define EXECUTE_CACHE_35_6 19
#define FREE_REFERENCES_LABEL_35_0 10
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_35_4);
      goto user_object_type_6;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (user_object_type_9)
DEFLABEL (user_object_type_6)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_35_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_6 5
#define LABEL_36_5 7
#define ENVIRONMENT_LABEL_36_3 15
#define DEBUGGING_LABEL_36_2 14
#define OBJECT_36_0 13
#define EXECUTE_CACHE_36_7 9
#define FREE_REFERENCE_36_0 12
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_36_4);
      goto rename_user_object_type_2;

    case 1:
      current_block = (Rpc - LABEL_36_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rename_user_object_type_6)
DEFLABEL (rename_user_object_type_2)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_8;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define ENVIRONMENT_LABEL_37_3 15
#define DEBUGGING_LABEL_37_2 14
#define OBJECT_37_0 13
#define EXECUTE_CACHE_37_7 7
#define EXECUTE_CACHE_37_6 9
#define FREE_REFERENCE_37_0 12
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_37_4);
      goto unparse_false_0;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_false_4)
DEFLABEL (unparse_false_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

DEFLABEL (label_5)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_7;
  Wrd7 = Wrd11;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_37_0]);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_7 7
#define LABEL_38_8 9
#define LABEL_38_9 11
#define LABEL_38_11 13
#define LABEL_38_12 15
#define LABEL_38_13 17
#define LABEL_38_14 19
#define LABEL_38_15 21
#define LABEL_38_16 23
#define LABEL_38_17 25
#define LABEL_38_18 27
#define LABEL_38_19 29
#define LABEL_38_21 31
#define ENVIRONMENT_LABEL_38_3 59
#define DEBUGGING_LABEL_38_2 58
#define OBJECT_38_12 57
#define OBJECT_38_11 56
#define OBJECT_38_10 55
#define OBJECT_38_9 54
#define OBJECT_38_8 53
#define OBJECT_38_7 52
#define OBJECT_38_6 51
#define OBJECT_38_5 50
#define OBJECT_38_4 49
#define OBJECT_38_3 48
#define OBJECT_38_2 47
#define OBJECT_38_1 46
#define OBJECT_38_0 45
#define EXECUTE_CACHE_38_20 33
#define EXECUTE_CACHE_38_10 35
#define EXECUTE_CACHE_38_6 37
#define FREE_REFERENCE_38_4 40
#define FREE_REFERENCE_38_3 41
#define FREE_REFERENCE_38_2 42
#define FREE_REFERENCE_38_1 43
#define FREE_REFERENCE_38_0 44
#define FREE_REFERENCES_LABEL_38_0 32
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd75;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd24;
  machine_word Wrd82;
  machine_word Wrd76;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
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
      goto unparse_constant_9;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_38_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_38_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_38_11);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_38_12);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_38_13);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_38_14);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_38_15);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_38_16);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_38_17);
      goto label_18;

    case 12:
      current_block = (Rpc - LABEL_38_18);
      goto label_20;

    case 13:
      current_block = (Rpc - LABEL_38_19);
      goto label_19;

    case 14:
      current_block = (Rpc - LABEL_38_21);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_constant_25)
DEFLABEL (unparse_constant_9)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_38_0]))
    goto label_58;
  if ((Wrd5.Obj) == (current_block [OBJECT_38_2]))
    goto label_55;
  if ((Wrd5.Obj) == (current_block [OBJECT_38_4]))
    goto label_52;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_27;
  Wrd7 = Wrd11;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_38_12]);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_21])), (Wrd8.pObj));

DEFLABEL (label_14)
  (Wrd7.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_51;
  Wrd15 = Wrd19;

DEFLABEL (label_50)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == (Wrd15.Obj))
    goto label_47;
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_46;
  Wrd23 = Wrd27;

DEFLABEL (label_45)
  (Wrd29.Obj) = (Rsp [0]);
  if ((Wrd29.Obj) == (Wrd23.Obj))
    goto label_42;
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_3]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_41;
  Wrd31 = Wrd35;

DEFLABEL (label_40)
  (Wrd37.Obj) = (Rsp [0]);
  if ((Wrd37.Obj) == (Wrd31.Obj))
    goto label_37;
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_4]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_36;
  Wrd39 = Wrd43;

DEFLABEL (label_35)
  (Wrd45.Obj) = (Rsp [0]);
  if ((Wrd45.Obj) == (Wrd39.Obj))
    goto label_32;
  if ((Wrd45.Obj) == (current_block [OBJECT_38_10]))
    goto label_29;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_20]));

DEFLABEL (label_29)
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_31;
  Wrd48 = Wrd52;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_38_11]);
  (Rsp [1]) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_19])), (Wrd49.pObj));

DEFLABEL (label_19)
  (Wrd48.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_34;
  Wrd55 = Wrd59;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd61.Obj) = (current_block [OBJECT_38_9]);
  (Rsp [1]) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_18])), (Wrd56.pObj));

DEFLABEL (label_20)
  (Wrd55.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_17])), (Wrd40.pObj));

DEFLABEL (label_18)
  (Wrd39.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_39;
  Wrd62 = Wrd66;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd68.Obj) = (current_block [OBJECT_38_8]);
  (Rsp [1]) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_16])), (Wrd63.pObj));

DEFLABEL (label_21)
  (Wrd62.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_15])), (Wrd32.pObj));

DEFLABEL (label_17)
  (Wrd31.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd70.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd73.Obj) = ((Wrd70.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 50)
    goto label_44;
  Wrd69 = Wrd73;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd75.Obj) = (current_block [OBJECT_38_7]);
  (Rsp [1]) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_14])), (Wrd70.pObj));

DEFLABEL (label_22)
  (Wrd69.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_13])), (Wrd24.pObj));

DEFLABEL (label_16)
  (Wrd23.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd80.Obj) = ((Wrd77.pObj) [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd81.uLng) == 50)
    goto label_49;
  Wrd76 = Wrd80;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd82.Obj) = (current_block [OBJECT_38_6]);
  (Rsp [1]) = (Wrd82.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_12])), (Wrd77.pObj));

DEFLABEL (label_23)
  (Wrd76.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_11])), (Wrd16.pObj));

DEFLABEL (label_15)
  (Wrd15.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_54;
  Wrd15 = Wrd19;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_38_5]);
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_8])), (Wrd16.pObj));

DEFLABEL (label_11)
  (Wrd15.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_57;
  Wrd22 = Wrd26;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_38_3]);
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_7])), (Wrd23.pObj));

DEFLABEL (label_12)
  (Wrd22.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_60;
  Wrd29 = Wrd33;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_38_1]);
  (Rsp [1]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_5])), (Wrd30.pObj));

DEFLABEL (label_13)
  (Wrd29.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define TAG_39_6 1
#define LABEL_39_8 7
#define ENVIRONMENT_LABEL_39_3 17
#define DEBUGGING_LABEL_39_2 16
#define OBJECT_39_0 15
#define EXECUTE_CACHE_39_10 9
#define EXECUTE_CACHE_39_9 11
#define EXECUTE_CACHE_39_7 13
#define FREE_REFERENCES_LABEL_39_0 8
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_39_4);
      goto unparse_return_address_2;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_39_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_return_address_5)
DEFLABEL (unparse_return_address_2)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_5])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_39_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define ENVIRONMENT_LABEL_40_3 8
#define DEBUGGING_LABEL_40_2 7
#define EXECUTE_CACHE_40_5 5
#define FREE_REFERENCES_LABEL_40_0 4
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto unparse_interned_symbol_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_interned_symbol_3)
DEFLABEL (unparse_interned_symbol_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_6 7
#define TAG_41_7 2
#define ENVIRONMENT_LABEL_41_3 17
#define DEBUGGING_LABEL_41_2 16
#define OBJECT_41_0 15
#define EXECUTE_CACHE_41_9 9
#define EXECUTE_CACHE_41_8 11
#define FREE_REFERENCE_41_0 14
#define FREE_REFERENCES_LABEL_41_0 8
#define NUMBER_OF_LINKER_SECTIONS_41_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_41_4);
      goto unparse_uninterned_symbol_1;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_uninterned_symbol_5)
DEFLABEL (unparse_uninterned_symbol_1)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (label_7)
  (Wrd12.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_6])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  ((Wrd16.pObj) [2]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_8]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_8;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_41_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_9 7
#define LABEL_42_7 9
#define ENVIRONMENT_LABEL_42_3 22
#define DEBUGGING_LABEL_42_2 21
#define EXECUTE_CACHE_42_12 11
#define EXECUTE_CACHE_42_11 13
#define EXECUTE_CACHE_42_10 15
#define EXECUTE_CACHE_42_8 17
#define EXECUTE_CACHE_42_6 19
#define FREE_REFERENCES_LABEL_42_0 10
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_42_4);
      goto unparse_symbol_3;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_42_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_symbol_6)
DEFLABEL (unparse_symbol_3)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_11]));

DEFLABEL (label_7)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_6 5
#define LABEL_43_5 7
#define LABEL_43_9 9
#define LABEL_43_14 11
#define LABEL_43_13 13
#define LABEL_43_11 15
#define LABEL_43_17 17
#define LABEL_43_8 19
#define LABEL_43_16 21
#define LABEL_43_18 23
#define ENVIRONMENT_LABEL_43_3 43
#define DEBUGGING_LABEL_43_2 42
#define OBJECT_43_5 41
#define OBJECT_43_4 40
#define OBJECT_43_3 39
#define OBJECT_43_2 38
#define OBJECT_43_1 37
#define OBJECT_43_0 36
#define EXECUTE_CACHE_43_15 25
#define EXECUTE_CACHE_43_12 27
#define EXECUTE_CACHE_43_10 29
#define EXECUTE_CACHE_43_7 31
#define FREE_REFERENCE_43_1 34
#define FREE_REFERENCE_43_0 35
#define FREE_REFERENCES_LABEL_43_0 24
#define NUMBER_OF_LINKER_SECTIONS_43_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_43_4);
      goto unparse_keyword_name_8;

    case 1:
      current_block = (Rpc - LABEL_43_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_43_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_43_14);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_43_13);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_43_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_43_17);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_43_8);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_43_16);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_43_18);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_keyword_name_16)
DEFLABEL (unparse_keyword_name_8)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_28;
  Wrd9 = Wrd13;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_43_1]))
    goto label_24;
  if (! (Rvl == (current_block [OBJECT_43_3])))
    goto label_19;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_43_11);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_18;
  Wrd6 = Wrd10;

DEFLABEL (label_17)
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_43_2]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_10]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_17])), (Wrd7.pObj));

DEFLABEL (label_13)
  (Wrd6.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_43_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_23;
  Wrd13 = Wrd17;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_43_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_43_16);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_21;
  Wrd6 = Wrd10;

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_43_5]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_10]));

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_18])), (Wrd7.pObj));

DEFLABEL (label_14)
  (Wrd6.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_14])), (Wrd14.pObj));

DEFLABEL (label_11)
  (Wrd13.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_43_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_1]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_26;
  Wrd27 = Wrd31;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_43_8);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_9])), (Wrd28.pObj));

DEFLABEL (label_12)
  (Wrd27.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_6])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_7 5
#define LABEL_44_9 7
#define LABEL_44_10 9
#define LABEL_44_12 11
#define LABEL_44_13 13
#define LABEL_44_15 15
#define LABEL_44_16 17
#define LABEL_44_17 19
#define LABEL_44_5 21
#define LABEL_44_21 23
#define LABEL_44_22 25
#define LABEL_44_23 27
#define LABEL_44_26 29
#define LABEL_44_6 31
#define LABEL_44_28 33
#define LABEL_44_29 35
#define LABEL_44_25 37
#define LABEL_44_32 39
#define LABEL_44_33 41
#define LABEL_44_35 43
#define LABEL_44_31 45
#define LABEL_44_37 47
#define LABEL_44_34 49
#define LABEL_44_38 51
#define LABEL_44_41 53
#define LABEL_44_40 55
#define LABEL_44_43 57
#define LABEL_44_42 59
#define LABEL_44_45 61
#define LABEL_44_46 63
#define LABEL_44_44 65
#define ENVIRONMENT_LABEL_44_3 104
#define DEBUGGING_LABEL_44_2 103
#define OBJECT_44_6 102
#define OBJECT_44_5 101
#define OBJECT_44_4 100
#define OBJECT_44_3 99
#define OBJECT_44_2 98
#define OBJECT_44_1 97
#define OBJECT_44_0 96
#define EXECUTE_CACHE_44_39 67
#define EXECUTE_CACHE_44_36 69
#define EXECUTE_CACHE_44_30 71
#define EXECUTE_CACHE_44_27 73
#define EXECUTE_CACHE_44_24 75
#define EXECUTE_CACHE_44_20 77
#define EXECUTE_CACHE_44_19 79
#define EXECUTE_CACHE_44_18 81
#define EXECUTE_CACHE_44_14 83
#define EXECUTE_CACHE_44_11 85
#define EXECUTE_CACHE_44_8 87
#define FREE_REFERENCE_44_5 90
#define FREE_REFERENCE_44_4 91
#define FREE_REFERENCE_44_3 92
#define FREE_REFERENCE_44_2 93
#define FREE_REFERENCE_44_1 94
#define FREE_REFERENCE_44_0 95
#define FREE_REFERENCES_LABEL_44_0 66
#define NUMBER_OF_LINKER_SECTIONS_44_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd89;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_44_4);
      goto unparse_symbol_name_28;

    case 1:
      current_block = (Rpc - LABEL_44_7);
      goto label_30;

    case 2:
      current_block = (Rpc - LABEL_44_9);
      goto continuation_11;

    case 3:
      current_block = (Rpc - LABEL_44_10);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_44_12);
      goto continuation_12;

    case 5:
      current_block = (Rpc - LABEL_44_13);
      goto label_41;

    case 6:
      current_block = (Rpc - LABEL_44_15);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_44_16);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_44_17);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_44_21);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_44_22);
      goto label_33;

    case 12:
      current_block = (Rpc - LABEL_44_23);
      goto label_34;

    case 13:
      current_block = (Rpc - LABEL_44_26);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_44_6);
      goto continuation_0;

    case 15:
      current_block = (Rpc - LABEL_44_28);
      goto label_36;

    case 16:
      current_block = (Rpc - LABEL_44_29);
      goto label_35;

    case 17:
      current_block = (Rpc - LABEL_44_25);
      goto continuation_13;

    case 18:
      current_block = (Rpc - LABEL_44_32);
      goto label_37;

    case 19:
      current_block = (Rpc - LABEL_44_33);
      goto loop_25;

    case 20:
      current_block = (Rpc - LABEL_44_35);
      goto label_40;

    case 21:
      current_block = (Rpc - LABEL_44_31);
      goto continuation_15;

    case 22:
      current_block = (Rpc - LABEL_44_37);
      goto label_39;

    case 23:
      current_block = (Rpc - LABEL_44_34);
      goto continuation_18;

    case 24:
      current_block = (Rpc - LABEL_44_38);
      goto label_43;

    case 25:
      current_block = (Rpc - LABEL_44_41);
      goto label_42;

    case 26:
      current_block = (Rpc - LABEL_44_40);
      goto continuation_19;

    case 27:
      current_block = (Rpc - LABEL_44_43);
      goto label_44;

    case 28:
      current_block = (Rpc - LABEL_44_42);
      goto continuation_20;

    case 29:
      current_block = (Rpc - LABEL_44_45);
      goto label_45;

    case 30:
      current_block = (Rpc - LABEL_44_46);
      goto label_46;

    case 31:
      current_block = (Rpc - LABEL_44_44);
      goto continuation_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_symbol_name_48)
DEFLABEL (unparse_symbol_name_28)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_76;
  Wrd12 = Wrd16;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_4]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_71;
  Wrd7 = Wrd11;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_69)
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_30]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_44_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;

DEFLABEL (label_54)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_44_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_53;
  Wrd11 = Wrd15;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_27]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_44_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 30))
    goto label_51;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_50)
  (Wrd19.Obj) = (current_block [OBJECT_44_3]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto loop_25;

DEFLABEL (label_51)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_32]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_26])), (Wrd12.pObj));

DEFLABEL (label_31)
  (Wrd11.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 30))
    goto label_68;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd21.uLng)));

DEFLABEL (label_67)
  if ((Wrd17.Obj) == (current_block [OBJECT_44_3]))
    goto label_54;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_16]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 30))
    goto label_66;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [1]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd42.Lng))))
    goto label_66;
  (Wrd35.uLng) = ((unsigned long) (((unsigned char *) (Wrd40.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd36.Obj) = (MAKE_OBJECT (2, (Wrd35.uLng)));
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_65)
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_2]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_64;
  Wrd50 = Wrd54;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_24]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_44_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_44_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_54;

DEFLABEL (label_62)
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 30))
    goto label_61;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [1]);
  (Wrd62.Obj) = (MAKE_OBJECT (26, (Wrd66.uLng)));

DEFLABEL (label_60)
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if ((Wrd73.Lng) > 1L)
    goto label_59;

DEFLABEL (label_58)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_12]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (current_block [OBJECT_44_2]);
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd80.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_19]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_44_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_54;
  (Wrd90.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_1]));
  (Wrd93.Obj) = ((Wrd90.pObj) [0]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if ((Wrd94.uLng) == 50)
    goto label_57;
  Wrd89 = Wrd93;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd89.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_14]));

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_13])), (Wrd90.pObj));

DEFLABEL (label_41)
  (Wrd89.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd84.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_44_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_54;
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd100.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd100.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_44_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_54;

DEFLABEL (label_61)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_17]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_38)
  (Wrd62.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_23])), (Wrd51.pObj));

DEFLABEL (label_34)
  (Wrd50.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.Obj) = (current_block [OBJECT_44_3]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_22]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_4]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_21]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_32)
  (Wrd17.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_29])), (Wrd8.pObj));

DEFLABEL (label_35)
  (Wrd7.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_3]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_74;
  Wrd14 = Wrd18;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_69;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_28])), (Wrd15.pObj));

DEFLABEL (label_36)
  (Wrd14.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_7])), (Wrd13.pObj));

DEFLABEL (label_30)
  (Wrd12.Obj) = Rvl;
  goto label_75;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_44_31);

DEFLABEL (label_79)
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_78;
  Wrd5 = Wrd9;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_44_5]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_27]));

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_37])), (Wrd6.pObj));

DEFLABEL (label_39)
  (Wrd5.Obj) = Rvl;
  goto label_77;

DEFLABEL (loop_49)
DEFLABEL (loop_25)
  INTERRUPT_CHECK (26, LABEL_44_33);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if ((Wrd13.Lng) < (Wrd15.Lng))
    goto label_80;
  Rsp = (& (Rsp [3]));
  goto label_79;

DEFLABEL (label_80)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_34]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_5]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_93;
  Wrd20 = Wrd24;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_36]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_44_34);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_89;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_40]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_88;
  Wrd13 = Wrd17;

DEFLABEL (label_87)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_39]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_44_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_86;
  Wrd9 = Wrd13;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_27]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_44_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 30))
    goto label_84;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_84;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_84;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd13.pChr) = (& ((Wrd21.pChr) [(Wrd10.Lng)]));
  (Wrd14.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd15.Obj) = (MAKE_OBJECT (2, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_83)
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_1]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_82;
  Wrd31 = Wrd35;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_27]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_44_44);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_25;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_46])), (Wrd32.pObj));

DEFLABEL (label_46)
  (Wrd31.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd26.Obj) = (Rsp [5]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_45]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_4]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_43])), (Wrd10.pObj));

DEFLABEL (label_44)
  (Wrd9.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_41])), (Wrd14.pObj));

DEFLABEL (label_42)
  (Wrd13.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_89)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_91;
  Wrd19 = Wrd23;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_39]));

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_38])), (Wrd20.pObj));

DEFLABEL (label_43)
  (Wrd19.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_35])), (Wrd21.pObj));

DEFLABEL (label_40)
  (Wrd20.Obj) = Rvl;
  goto label_92;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define ENVIRONMENT_LABEL_45_3 11
#define DEBUGGING_LABEL_45_2 10
#define OBJECT_45_3 9
#define OBJECT_45_2 8
#define OBJECT_45_1 7
#define OBJECT_45_0 6
#define FREE_REFERENCES_LABEL_45_0 6
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto looks_specialP_1;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (looks_specialP_5)
DEFLABEL (looks_specialP_1)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 30))
    goto label_10;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd15.Lng))))
    goto label_10;
  (Wrd9.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd5.Obj) = (MAKE_OBJECT (2, (Wrd9.uLng)));

DEFLABEL (label_9)
  if ((Wrd5.Obj) == (current_block [OBJECT_45_2]))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_45_3]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_45_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_6 5
#define LABEL_46_5 7
#define LABEL_46_8 9
#define LABEL_46_9 11
#define LABEL_46_10 13
#define LABEL_46_11 15
#define ENVIRONMENT_LABEL_46_3 30
#define DEBUGGING_LABEL_46_2 29
#define OBJECT_46_7 28
#define OBJECT_46_6 27
#define OBJECT_46_5 26
#define OBJECT_46_4 25
#define OBJECT_46_3 24
#define OBJECT_46_2 23
#define OBJECT_46_1 22
#define OBJECT_46_0 21
#define EXECUTE_CACHE_46_7 17
#define FREE_REFERENCE_46_0 20
#define FREE_REFERENCES_LABEL_46_0 16
#define NUMBER_OF_LINKER_SECTIONS_46_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
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
      current_block = (Rpc - LABEL_46_4);
      goto looks_like_keywordP_8;

    case 1:
      current_block = (Rpc - LABEL_46_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_46_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_46_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_46_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_46_11);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (looks_like_keywordP_16)
DEFLABEL (looks_like_keywordP_8)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_31;
  Wrd9 = Wrd13;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_46_1]))
    goto label_27;
  if (Rvl == (current_block [OBJECT_46_5]))
    goto label_19;

DEFLABEL (label_18)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 30))
    goto label_26;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (Wrd11.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));

DEFLABEL (label_25)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_24;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd28.Lng) = ((Wrd29.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_24;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));

DEFLABEL (label_23)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 30))
    goto label_22;
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_22;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [1]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) (Wrd38.Lng)) < ((unsigned long) (Wrd42.Lng))))
    goto label_22;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd35.pChr) = (& ((Wrd40.pChr) [(Wrd32.Lng)]));
  (Wrd36.uLng) = ((unsigned long) (((unsigned char *) (Wrd35.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd30.Obj) = (MAKE_OBJECT (2, (Wrd36.uLng)));

DEFLABEL (label_21)
  if (! ((Wrd30.Obj) == (current_block [OBJECT_46_4])))
    goto label_18;

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_46_7]);
  goto label_17;

DEFLABEL (label_22)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_11]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 2);

DEFLABEL (label_13)
  (Wrd30.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_12)
  (Wrd26.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_6]), 1);

DEFLABEL (label_11)
  (Wrd11.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 30))
    goto label_29;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [1]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd64.Lng))))
    goto label_29;
  (Wrd58.uLng) = ((unsigned long) (((unsigned char *) (Wrd62.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd54.Obj) = (MAKE_OBJECT (2, (Wrd58.uLng)));

DEFLABEL (label_28)
  if ((Wrd54.Obj) == (current_block [OBJECT_46_4]))
    goto label_20;
  goto label_18;

DEFLABEL (label_29)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (current_block [OBJECT_46_2]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 2);

DEFLABEL (label_14)
  (Wrd54.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_6])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_5 3
#define LABEL_47_6 5
#define LABEL_47_4 7
#define LABEL_47_8 9
#define LABEL_47_11 11
#define LABEL_47_10 13
#define LABEL_47_13 15
#define LABEL_47_14 17
#define ENVIRONMENT_LABEL_47_3 33
#define DEBUGGING_LABEL_47_2 32
#define OBJECT_47_1 31
#define OBJECT_47_0 30
#define EXECUTE_CACHE_47_15 19
#define EXECUTE_CACHE_47_12 21
#define EXECUTE_CACHE_47_9 23
#define EXECUTE_CACHE_47_7 25
#define FREE_REFERENCE_47_1 28
#define FREE_REFERENCE_47_0 29
#define FREE_REFERENCES_LABEL_47_0 18
#define NUMBER_OF_LINKER_SECTIONS_47_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_47_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_47_4);
      goto unparse_character_3;

    case 3:
      current_block = (Rpc - LABEL_47_8);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_47_11);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_47_10);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_47_13);
      goto label_7;

    case 7:
      current_block = (Rpc - LABEL_47_14);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_character_10)
DEFLABEL (unparse_character_3)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_19;
  Wrd5 = Wrd9;

DEFLABEL (label_18)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_12;
  Wrd28 = Wrd32;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_6])), (Wrd29.pObj));

DEFLABEL (label_8)
  (Wrd28.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_13)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_17;
  Wrd16 = Wrd20;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_15;
  Wrd5 = Wrd9;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_47_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_14);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_12]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_13])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_11])), (Wrd17.pObj));

DEFLABEL (label_6)
  (Wrd16.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_8])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_5 3
#define LABEL_48_4 5
#define LABEL_48_6 7
#define LABEL_48_7 9
#define LABEL_48_9 11
#define LABEL_48_10 13
#define LABEL_48_12 15
#define LABEL_48_14 17
#define LABEL_48_11 19
#define LABEL_48_17 21
#define LABEL_48_16 23
#define LABEL_48_20 25
#define LABEL_48_22 27
#define LABEL_48_19 29
#define LABEL_48_23 31
#define LABEL_48_24 33
#define LABEL_48_25 35
#define LABEL_48_26 37
#define LABEL_48_28 39
#define LABEL_48_27 41
#define LABEL_48_29 43
#define LABEL_48_31 45
#define LABEL_48_30 47
#define LABEL_48_33 49
#define LABEL_48_32 51
#define LABEL_48_35 53
#define LABEL_48_36 55
#define LABEL_48_37 57
#define LABEL_48_38 59
#define LABEL_48_39 61
#define LABEL_48_40 63
#define LABEL_48_41 65
#define LABEL_48_42 67
#define LABEL_48_43 69
#define LABEL_48_44 71
#define LABEL_48_34 73
#define LABEL_48_47 75
#define LABEL_48_45 77
#define ENVIRONMENT_LABEL_48_3 117
#define DEBUGGING_LABEL_48_2 116
#define OBJECT_48_19 115
#define OBJECT_48_18 114
#define OBJECT_48_17 113
#define OBJECT_48_16 112
#define OBJECT_48_15 111
#define OBJECT_48_14 110
#define OBJECT_48_13 109
#define OBJECT_48_12 108
#define OBJECT_48_11 107
#define OBJECT_48_10 106
#define OBJECT_48_9 105
#define OBJECT_48_8 104
#define OBJECT_48_7 103
#define OBJECT_48_6 102
#define OBJECT_48_5 101
#define OBJECT_48_4 100
#define OBJECT_48_3 99
#define OBJECT_48_2 98
#define OBJECT_48_1 97
#define OBJECT_48_0 96
#define EXECUTE_CACHE_48_46 79
#define EXECUTE_CACHE_48_21 81
#define EXECUTE_CACHE_48_18 83
#define EXECUTE_CACHE_48_15 85
#define EXECUTE_CACHE_48_13 87
#define EXECUTE_CACHE_48_8 89
#define FREE_REFERENCE_48_3 92
#define FREE_REFERENCE_48_2 93
#define FREE_REFERENCE_48_1 94
#define FREE_REFERENCE_48_0 95
#define FREE_REFERENCES_LABEL_48_0 78
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd58;
  machine_word Wrd49;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd85;
  machine_word Wrd79;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd99;
  machine_word Wrd93;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd106;
  machine_word Wrd100;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd113;
  machine_word Wrd107;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd37;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
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
      current_block = (Rpc - LABEL_48_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_48_4);
      goto unparse_string_30;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto label_32;

    case 3:
      current_block = (Rpc - LABEL_48_7);
      goto label_37;

    case 4:
      current_block = (Rpc - LABEL_48_9);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_48_10);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_48_12);
      goto label_36;

    case 7:
      current_block = (Rpc - LABEL_48_14);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_48_11);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_48_17);
      goto label_38;

    case 10:
      current_block = (Rpc - LABEL_48_16);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_48_20);
      goto label_39;

    case 12:
      current_block = (Rpc - LABEL_48_22);
      goto continuation_27;

    case 13:
      current_block = (Rpc - LABEL_48_19);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_48_23);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_48_24);
      goto label_41;

    case 16:
      current_block = (Rpc - LABEL_48_25);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_48_26);
      goto loop_24;

    case 18:
      current_block = (Rpc - LABEL_48_28);
      goto label_43;

    case 19:
      current_block = (Rpc - LABEL_48_27);
      goto continuation_6;

    case 20:
      current_block = (Rpc - LABEL_48_29);
      goto label_45;

    case 21:
      current_block = (Rpc - LABEL_48_31);
      goto label_44;

    case 22:
      current_block = (Rpc - LABEL_48_30);
      goto continuation_7;

    case 23:
      current_block = (Rpc - LABEL_48_33);
      goto label_46;

    case 24:
      current_block = (Rpc - LABEL_48_32);
      goto continuation_8;

    case 25:
      current_block = (Rpc - LABEL_48_35);
      goto label_47;

    case 26:
      current_block = (Rpc - LABEL_48_36);
      goto label_56;

    case 27:
      current_block = (Rpc - LABEL_48_37);
      goto label_55;

    case 28:
      current_block = (Rpc - LABEL_48_38);
      goto label_54;

    case 29:
      current_block = (Rpc - LABEL_48_39);
      goto label_53;

    case 30:
      current_block = (Rpc - LABEL_48_40);
      goto label_52;

    case 31:
      current_block = (Rpc - LABEL_48_41);
      goto label_51;

    case 32:
      current_block = (Rpc - LABEL_48_42);
      goto label_50;

    case 33:
      current_block = (Rpc - LABEL_48_43);
      goto label_49;

    case 34:
      current_block = (Rpc - LABEL_48_44);
      goto label_48;

    case 35:
      current_block = (Rpc - LABEL_48_34);
      goto continuation_10;

    case 36:
      current_block = (Rpc - LABEL_48_47);
      goto label_57;

    case 37:
      current_block = (Rpc - LABEL_48_45);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_string_59)
DEFLABEL (unparse_string_30)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_87;
  Wrd5 = Wrd9;

DEFLABEL (label_86)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_83;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 30))
    goto label_82;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_81)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_2]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_80;
  Wrd26 = Wrd30;

DEFLABEL (label_79)
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_78;
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_2]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_77;
  Wrd34 = Wrd38;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_75)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_48_1]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_74;
  Wrd46 = Wrd50;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_72;
  Wrd8 = Wrd12;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_48_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_48_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_48_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto loop_24;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_48_19);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_67;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_67;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd35.Lng) < (Wrd37.Lng))
    goto label_64;

DEFLABEL (label_63)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_62;
  Wrd16 = Wrd20;

DEFLABEL (label_61)
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_48_1]);
  (Rsp [2]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_24])), (Wrd17.pObj));

DEFLABEL (label_41)
  (Wrd16.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_22]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_48_3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_66;
  Wrd28 = Wrd32;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_48_22);
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_25])), (Wrd29.pObj));

DEFLABEL (label_42)
  (Wrd28.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_67)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_64;

DEFLABEL (label_68)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_48_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_70;
  Wrd17 = Wrd21;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_21]));

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_20])), (Wrd18.pObj));

DEFLABEL (label_39)
  (Wrd17.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_17])), (Wrd9.pObj));

DEFLABEL (label_38)
  (Wrd8.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_12])), (Wrd47.pObj));

DEFLABEL (label_36)
  (Wrd46.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_14])), (Wrd35.pObj));

DEFLABEL (label_35)
  (Wrd34.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_78)
  (Wrd41.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd41.Obj);
  goto label_75;

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_10])), (Wrd27.pObj));

DEFLABEL (label_34)
  (Wrd26.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_83)
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_85;
  Wrd52 = Wrd56;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_7])), (Wrd53.pObj));

DEFLABEL (label_37)
  (Wrd52.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_6])), (Wrd6.pObj));

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_86;

DEFLABEL (loop_60)
DEFLABEL (loop_24)
  INTERRUPT_CHECK (26, LABEL_48_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_124;
  Wrd8 = Wrd12;

DEFLABEL (label_123)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_48_27);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_120;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_119;
  Wrd13 = Wrd17;

DEFLABEL (label_118)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_48_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_117;
  Wrd9 = Wrd13;

DEFLABEL (label_116)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_48_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd24.Obj) = (Rsp [6]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 30))
    goto label_115;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_115;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_115;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd13.pChr) = (& ((Wrd21.pChr) [(Wrd10.Lng)]));
  (Wrd14.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd15.Obj) = (MAKE_OBJECT (2, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_114)
  (Wrd31.Obj) = (Rsp [0]);
  if ((Wrd31.Obj) == (current_block [OBJECT_48_6]))
    goto label_111;
  if ((Wrd31.Obj) == (current_block [OBJECT_48_8]))
    goto label_108;
  if ((Wrd31.Obj) == (current_block [OBJECT_48_10]))
    goto label_105;
  if ((Wrd31.Obj) == (current_block [OBJECT_48_12]))
    goto label_102;
  if ((Wrd31.Obj) == (current_block [OBJECT_48_14]))
    goto label_99;
  if ((Wrd31.Obj) == (current_block [OBJECT_48_16]))
    goto label_96;
  if ((Wrd31.Obj) == (current_block [OBJECT_48_18]))
    goto label_93;
  if ((Wrd31.Obj) == (current_block [OBJECT_48_4]))
    goto label_90;
  if ((Wrd31.Obj) == (current_block [OBJECT_48_1]))
    goto label_90;
  (Wrd50.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd53.Obj) = ((Wrd50.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_89;
  Wrd49 = Wrd53;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_45]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_46]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_48_45);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_44])), (Wrd50.pObj));

DEFLABEL (label_48)
  (Wrd49.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_90)
  (Wrd60.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd63.Obj) = ((Wrd60.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 50)
    goto label_92;
  Wrd59 = Wrd63;

DEFLABEL (label_91)
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_43])), (Wrd60.pObj));

DEFLABEL (label_49)
  (Wrd59.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_93)
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd69.Obj) = ((Wrd66.pObj) [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 50)
    goto label_95;
  Wrd65 = Wrd69;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd71.Obj) = (current_block [OBJECT_48_19]);
  (Rsp [1]) = (Wrd71.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_42])), (Wrd66.pObj));

DEFLABEL (label_50)
  (Wrd65.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_96)
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd76.Obj) = ((Wrd73.pObj) [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if ((Wrd77.uLng) == 50)
    goto label_98;
  Wrd72 = Wrd76;

DEFLABEL (label_97)
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd78.Obj) = (current_block [OBJECT_48_17]);
  (Rsp [1]) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_41])), (Wrd73.pObj));

DEFLABEL (label_51)
  (Wrd72.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_99)
  (Wrd80.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd83.Obj) = ((Wrd80.pObj) [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if ((Wrd84.uLng) == 50)
    goto label_101;
  Wrd79 = Wrd83;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd85.Obj) = (current_block [OBJECT_48_15]);
  (Rsp [1]) = (Wrd85.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_40])), (Wrd80.pObj));

DEFLABEL (label_52)
  (Wrd79.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_102)
  (Wrd87.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd90.Obj) = ((Wrd87.pObj) [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 50)
    goto label_104;
  Wrd86 = Wrd90;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd92.Obj) = (current_block [OBJECT_48_13]);
  (Rsp [1]) = (Wrd92.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_39])), (Wrd87.pObj));

DEFLABEL (label_53)
  (Wrd86.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_105)
  (Wrd94.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd97.Obj) = ((Wrd94.pObj) [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if ((Wrd98.uLng) == 50)
    goto label_107;
  Wrd93 = Wrd97;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd99.Obj) = (current_block [OBJECT_48_11]);
  (Rsp [1]) = (Wrd99.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_38])), (Wrd94.pObj));

DEFLABEL (label_54)
  (Wrd93.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_108)
  (Wrd101.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd104.Obj) = ((Wrd101.pObj) [0]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd105.uLng) == 50)
    goto label_110;
  Wrd100 = Wrd104;

DEFLABEL (label_109)
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd106.Obj) = (current_block [OBJECT_48_9]);
  (Rsp [1]) = (Wrd106.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (label_110)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_37])), (Wrd101.pObj));

DEFLABEL (label_55)
  (Wrd100.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_111)
  (Wrd108.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd111.Obj) = ((Wrd108.pObj) [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd112.uLng) == 50)
    goto label_113;
  Wrd107 = Wrd111;

DEFLABEL (label_112)
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd113.Obj) = (current_block [OBJECT_48_7]);
  (Rsp [1]) = (Wrd113.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_36])), (Wrd108.pObj));

DEFLABEL (label_56)
  (Wrd107.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd26.Obj) = (Rsp [6]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_35]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_5]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_33])), (Wrd10.pObj));

DEFLABEL (label_46)
  (Wrd9.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_31])), (Wrd14.pObj));

DEFLABEL (label_44)
  (Wrd13.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_120)
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_122;
  Wrd20 = Wrd24;

DEFLABEL (label_121)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_21]));

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_29])), (Wrd21.pObj));

DEFLABEL (label_45)
  (Wrd20.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_28])), (Wrd9.pObj));

DEFLABEL (label_43)
  (Wrd8.Obj) = Rvl;
  goto label_123;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_48_34);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_126;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_126;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_125)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_24;

DEFLABEL (label_126)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_47]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_57)
  (Wrd9.Obj) = Rvl;
  goto label_125;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_6 7
#define LABEL_49_8 9
#define LABEL_49_9 11
#define LABEL_49_12 13
#define LABEL_49_13 15
#define LABEL_49_14 17
#define LABEL_49_15 19
#define LABEL_49_18 21
#define LABEL_49_19 23
#define ENVIRONMENT_LABEL_49_3 39
#define DEBUGGING_LABEL_49_2 38
#define OBJECT_49_0 37
#define EXECUTE_CACHE_49_20 25
#define EXECUTE_CACHE_49_17 27
#define EXECUTE_CACHE_49_16 29
#define EXECUTE_CACHE_49_11 31
#define EXECUTE_CACHE_49_10 33
#define EXECUTE_CACHE_49_7 35
#define FREE_REFERENCES_LABEL_49_0 24
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_49_4);
      goto char__octal_12;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_49_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_49_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_49_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_49_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_49_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_49_14);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_49_15);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_49_18);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_49_19);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (char__octal_15)
DEFLABEL (char__octal_12)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_49_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_49_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_49_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_49_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_49_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_49_14);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_49_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_49_18);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_20]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_6 5
#define LABEL_50_5 7
#define LABEL_50_8 9
#define LABEL_50_9 11
#define LABEL_50_10 13
#define LABEL_50_11 15
#define LABEL_50_12 17
#define ENVIRONMENT_LABEL_50_3 32
#define DEBUGGING_LABEL_50_2 31
#define OBJECT_50_5 30
#define OBJECT_50_4 29
#define OBJECT_50_3 28
#define OBJECT_50_2 27
#define OBJECT_50_1 26
#define OBJECT_50_0 25
#define EXECUTE_CACHE_50_13 19
#define EXECUTE_CACHE_50_7 21
#define FREE_REFERENCE_50_0 24
#define FREE_REFERENCES_LABEL_50_0 18
#define NUMBER_OF_LINKER_SECTIONS_50_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_50_4);
      goto unparse_bit_string_11;

    case 1:
      current_block = (Rpc - LABEL_50_6);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_50_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_50_9);
      goto loop_9;

    case 5:
      current_block = (Rpc - LABEL_50_10);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_50_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_50_12);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_bit_string_17)
DEFLABEL (unparse_bit_string_11)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_22;
  Wrd9 = Wrd13;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 47))
    goto label_20;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_19)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd17.Lng) = ((Wrd16.Lng) - 1L);
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (* (--Rsp)) = (Wrd18.Obj);
  goto loop_9;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_6])), (Wrd10.pObj));

DEFLABEL (label_13)
  (Wrd9.Obj) = Rvl;
  goto label_21;

DEFLABEL (loop_18)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_50_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd6.Lng) < 0))
    goto label_23;
  Rvl = (current_block [OBJECT_50_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_50_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd7.Obj) = (current_block [OBJECT_50_5]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_24;

DEFLABEL (label_25)
  (Wrd14.Obj) = (current_block [OBJECT_50_4]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_24)
DEFLABEL (label_28)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_27;
  Wrd8 = Wrd12;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_50_10);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) - 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_9;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_12])), (Wrd9.pObj));

DEFLABEL (label_15)
  (Wrd8.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_9 7
#define LABEL_51_10 9
#define LABEL_51_11 11
#define LABEL_51_12 13
#define LABEL_51_8 15
#define ENVIRONMENT_LABEL_51_3 29
#define DEBUGGING_LABEL_51_2 28
#define EXECUTE_CACHE_51_13 17
#define EXECUTE_CACHE_51_7 19
#define EXECUTE_CACHE_51_6 21
#define FREE_REFERENCE_51_3 24
#define FREE_REFERENCE_51_2 25
#define FREE_REFERENCE_51_1 26
#define FREE_REFERENCE_51_0 27
#define FREE_REFERENCES_LABEL_51_0 16
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_51_4);
      goto unparse_vector_3;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_51_9);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_51_10);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_51_11);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_51_12);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_51_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_vector_10)
DEFLABEL (unparse_vector_3)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_19;
  Wrd11 = Wrd15;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_17;
  Wrd17 = Wrd21;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_15;
  Wrd23 = Wrd27;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_3]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_13;
  Wrd29 = Wrd33;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_8);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_12])), (Wrd30.pObj));

DEFLABEL (label_8)
  (Wrd29.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_11])), (Wrd24.pObj));

DEFLABEL (label_7)
  (Wrd23.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_10])), (Wrd18.pObj));

DEFLABEL (label_6)
  (Wrd17.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_9])), (Wrd12.pObj));

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_6 7
#define LABEL_52_8 9
#define ENVIRONMENT_LABEL_52_3 21
#define DEBUGGING_LABEL_52_2 20
#define OBJECT_52_2 19
#define OBJECT_52_1 18
#define OBJECT_52_0 17
#define EXECUTE_CACHE_52_10 11
#define EXECUTE_CACHE_52_9 13
#define EXECUTE_CACHE_52_7 15
#define FREE_REFERENCES_LABEL_52_0 10
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_52_4);
      goto unparse_vector_unparser_6;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_52_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_vector_unparser_10)
DEFLABEL (unparse_vector_unparser_6)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_14;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_13)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd16.Lng) > 0)
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_52_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_6);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_52_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_10]));

DEFLABEL (label_14)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_0]), 1);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define LABEL_53_6 7
#define ENVIRONMENT_LABEL_53_3 17
#define DEBUGGING_LABEL_53_2 16
#define OBJECT_53_2 15
#define OBJECT_53_1 14
#define OBJECT_53_0 13
#define EXECUTE_CACHE_53_8 9
#define EXECUTE_CACHE_53_7 11
#define FREE_REFERENCES_LABEL_53_0 8
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_53_4);
      goto unparse_vector_entity_unparser_3;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_53_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_vector_entity_unparser_7)
DEFLABEL (unparse_vector_entity_unparser_3)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_10;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_9)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd16.Lng) > 0)
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_53_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_53_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_53_2]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_8]));

DEFLABEL (label_10)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define TAG_54_6 1
#define LABEL_54_8 7
#define LABEL_54_10 9
#define LABEL_54_12 11
#define LABEL_54_9 13
#define LABEL_54_13 15
#define LABEL_54_14 17
#define LABEL_54_17 19
#define LABEL_54_18 21
#define LABEL_54_20 23
#define LABEL_54_21 25
#define LABEL_54_22 27
#define LABEL_54_23 29
#define LABEL_54_25 31
#define LABEL_54_24 33
#define LABEL_54_26 35
#define LABEL_54_27 37
#define ENVIRONMENT_LABEL_54_3 61
#define DEBUGGING_LABEL_54_2 60
#define OBJECT_54_7 59
#define OBJECT_54_6 58
#define OBJECT_54_5 57
#define OBJECT_54_4 56
#define OBJECT_54_3 55
#define OBJECT_54_2 54
#define OBJECT_54_1 53
#define OBJECT_54_0 52
#define EXECUTE_CACHE_54_19 39
#define EXECUTE_CACHE_54_16 41
#define EXECUTE_CACHE_54_15 43
#define EXECUTE_CACHE_54_11 45
#define EXECUTE_CACHE_54_7 47
#define FREE_REFERENCE_54_1 50
#define FREE_REFERENCE_54_0 51
#define FREE_REFERENCES_LABEL_54_0 38
#define NUMBER_OF_LINKER_SECTIONS_54_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_54_4);
      goto unparse_vector_normal_16;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto lambda_29;

    case 2:
      current_block = (Rpc - LABEL_54_8);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_54_10);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_54_12);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_54_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_54_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_54_14);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_54_17);
      goto loop_12;

    case 9:
      current_block = (Rpc - LABEL_54_18);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_54_20);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_54_21);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_54_22);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_54_23);
      goto label_24;

    case 14:
      current_block = (Rpc - LABEL_54_25);
      goto label_25;

    case 15:
      current_block = (Rpc - LABEL_54_24);
      goto continuation_8;

    case 16:
      current_block = (Rpc - LABEL_54_26);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_54_27);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_vector_normal_28)
DEFLABEL (unparse_vector_normal_16)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_7]));

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_54_5);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_37;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_36)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if ((Wrd23.Lng) > 0)
    goto label_33;
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_32;
  Wrd25 = Wrd29;

DEFLABEL (label_31)
  (Rsp [0]) = (Wrd25.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_54_2]);
  (Rsp [1]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_11]));

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_12])), (Wrd26.pObj));

DEFLABEL (label_19)
  (Wrd25.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_54_1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_35;
  Wrd36 = Wrd40;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_54_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_54_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_54_13);
  (Wrd5.Obj) = (current_block [OBJECT_54_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_12;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_10])), (Wrd37.pObj));

DEFLABEL (label_20)
  (Wrd36.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (loop_30)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_54_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_49;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_48;
  Wrd7 = Wrd11;

DEFLABEL (label_47)
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_46;
  Wrd15 = Wrd19;

DEFLABEL (label_45)
  Wrd14 = Wrd15;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_44;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_44;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if ((Wrd50.Lng) < (Wrd51.Lng))
    goto label_41;

DEFLABEL (label_40)
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_39;
  Wrd31 = Wrd35;

DEFLABEL (label_38)
  (Rsp [1]) = (Wrd31.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_54_6]);
  (Rsp [2]) = (Wrd37.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_11]));

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_23])), (Wrd32.pObj));

DEFLABEL (label_24)
  (Wrd31.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_24]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_54_7]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_43;
  Wrd43 = Wrd47;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_54_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_54_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_54_26);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_12;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_25])), (Wrd44.pObj));

DEFLABEL (label_25)
  (Wrd43.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_22]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_41;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_21])), (Wrd16.pObj));

DEFLABEL (label_22)
  (Wrd15.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_20])), (Wrd8.pObj));

DEFLABEL (label_21)
  (Wrd7.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_51;
  Wrd53 = Wrd57;

DEFLABEL (label_50)
  (Rsp [1]) = (Wrd53.Obj);
  (Wrd59.Obj) = (current_block [OBJECT_54_5]);
  (Rsp [2]) = (Wrd59.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_19]));

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_18])), (Wrd54.pObj));

DEFLABEL (label_26)
  (Wrd53.Obj) = Rvl;
  goto label_50;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_9 5
#define LABEL_55_5 7
#define LABEL_55_6 9
#define TAG_55_7 3
#define LABEL_55_14 11
#define LABEL_55_10 13
#define TAG_55_11 5
#define ENVIRONMENT_LABEL_55_3 27
#define DEBUGGING_LABEL_55_2 26
#define OBJECT_55_4 25
#define OBJECT_55_3 24
#define OBJECT_55_2 23
#define OBJECT_55_1 22
#define OBJECT_55_0 21
#define EXECUTE_CACHE_55_13 15
#define EXECUTE_CACHE_55_12 17
#define EXECUTE_CACHE_55_8 19
#define FREE_REFERENCES_LABEL_55_0 14
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd6;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_55_4);
      goto safe_vector_ref_5;

    case 1:
      current_block = (Rpc - LABEL_55_9);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_55_6);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_55_14);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_55_10);
      goto lambda_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (safe_vector_ref_9)
DEFLABEL (safe_vector_ref_5)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_55_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55_6])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_55_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;

DEFLABEL (label_12)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_55_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55_10])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_12]));

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_55_9);
  goto label_12;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_55_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_55_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [3]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_19;
  (Wrd18.Obj) = ((Wrd31.pObj) [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_19;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd23.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_19;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  (Wrd15.pObj) = (& ((Wrd27.pObj) [(Wrd10.Lng)]));
  (Wrd6.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_18)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd50.Obj) = (current_block [OBJECT_55_1]);
  (Wrd53.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 39L) < ((unsigned long) (Wrd53.Lng)))
    goto label_14;
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_4]), 2);

DEFLABEL (label_14)
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd50.Obj));
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd45.Obj) == (Wrd47.Obj))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_55_3]);

DEFLABEL (label_15)
DEFLABEL (label_17)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [3]);
  (Wrd37.Obj) = ((Wrd36.pObj) [2]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_2]), 2);

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_18;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_55_10);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd27.uLng) == 10)
    goto label_21;

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_2]), 2);

DEFLABEL (label_21)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_20;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_20;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd16.pObj) = (& ((Wrd23.pObj) [(Wrd13.Lng)]));
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define LABEL_56_7 7
#define LABEL_56_8 9
#define LABEL_56_9 11
#define LABEL_56_10 13
#define LABEL_56_6 15
#define ENVIRONMENT_LABEL_56_3 30
#define DEBUGGING_LABEL_56_2 29
#define EXECUTE_CACHE_56_13 17
#define EXECUTE_CACHE_56_12 19
#define EXECUTE_CACHE_56_11 21
#define FREE_REFERENCE_56_4 24
#define FREE_REFERENCE_56_3 25
#define FREE_REFERENCE_56_2 26
#define FREE_REFERENCE_56_1 27
#define FREE_REFERENCE_56_0 28
#define FREE_REFERENCES_LABEL_56_0 16
#define NUMBER_OF_LINKER_SECTIONS_56_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_56_4);
      goto unparse_record_1;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_56_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_56_8);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_56_9);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_56_10);
      goto label_7;

    case 6:
      current_block = (Rpc - LABEL_56_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_record_9)
DEFLABEL (unparse_record_1)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_20;
  Wrd5 = Wrd9;

DEFLABEL (label_19)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_12]));

DEFLABEL (label_10)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_18;
  Wrd15 = Wrd19;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_16;
  Wrd21 = Wrd25;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_3]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_14;
  Wrd27 = Wrd31;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_4]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_12;
  Wrd33 = Wrd37;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_13]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_10])), (Wrd34.pObj));

DEFLABEL (label_7)
  (Wrd33.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_9])), (Wrd28.pObj));

DEFLABEL (label_6)
  (Wrd27.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_8])), (Wrd22.pObj));

DEFLABEL (label_5)
  (Wrd21.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_7])), (Wrd16.pObj));

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_7 7
#define LABEL_57_12 9
#define LABEL_57_13 11
#define LABEL_57_14 13
#define LABEL_57_15 15
#define LABEL_57_11 17
#define ENVIRONMENT_LABEL_57_3 35
#define DEBUGGING_LABEL_57_2 34
#define EXECUTE_CACHE_57_16 19
#define EXECUTE_CACHE_57_10 21
#define EXECUTE_CACHE_57_9 23
#define EXECUTE_CACHE_57_8 25
#define EXECUTE_CACHE_57_6 27
#define FREE_REFERENCE_57_3 30
#define FREE_REFERENCE_57_2 31
#define FREE_REFERENCE_57_1 32
#define FREE_REFERENCE_57_0 33
#define FREE_REFERENCES_LABEL_57_0 18
#define NUMBER_OF_LINKER_SECTIONS_57_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_57_4);
      goto unparse_pair_7;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_57_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_57_12);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_57_13);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_57_14);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_57_15);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_57_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_pair_14)
DEFLABEL (unparse_pair_7)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_9]));

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_57_7);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_24;
  Wrd12 = Wrd16;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_22;
  Wrd18 = Wrd22;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_2]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_20;
  Wrd24 = Wrd28;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_3]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_18;
  Wrd30 = Wrd34;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_57_11);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_15])), (Wrd31.pObj));

DEFLABEL (label_12)
  (Wrd30.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_14])), (Wrd25.pObj));

DEFLABEL (label_11)
  (Wrd24.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_13])), (Wrd19.pObj));

DEFLABEL (label_10)
  (Wrd18.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_12])), (Wrd13.pObj));

DEFLABEL (label_9)
  (Wrd12.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define TAG_58_6 1
#define LABEL_58_9 7
#define LABEL_58_8 9
#define LABEL_58_11 11
#define LABEL_58_12 13
#define LABEL_58_14 15
#define LABEL_58_18 17
#define LABEL_58_15 19
#define ENVIRONMENT_LABEL_58_3 39
#define DEBUGGING_LABEL_58_2 38
#define OBJECT_58_2 37
#define OBJECT_58_1 36
#define OBJECT_58_0 35
#define EXECUTE_CACHE_58_19 21
#define EXECUTE_CACHE_58_17 23
#define EXECUTE_CACHE_58_16 25
#define EXECUTE_CACHE_58_13 27
#define EXECUTE_CACHE_58_10 29
#define EXECUTE_CACHE_58_7 31
#define FREE_REFERENCE_58_0 34
#define FREE_REFERENCES_LABEL_58_0 20
#define NUMBER_OF_LINKER_SECTIONS_58_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_58_4);
      goto unparse_list_6;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_58_9);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_58_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_58_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_58_12);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_58_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_58_18);
      goto label_9;

    case 8:
      current_block = (Rpc - LABEL_58_15);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_list_11)
DEFLABEL (unparse_list_6)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_7]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_58_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;
  Wrd9 = Wrd13;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_58_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_58_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_58_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_58_14);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_58_2]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_10]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_18])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_9])), (Wrd10.pObj));

DEFLABEL (label_8)
  (Wrd9.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_6 7
#define LABEL_59_7 9
#define LABEL_59_10 11
#define TAG_59_11 4
#define LABEL_59_13 13
#define LABEL_59_14 15
#define LABEL_59_15 17
#define LABEL_59_16 19
#define LABEL_59_8 21
#define TAG_59_9 9
#define LABEL_59_18 23
#define LABEL_59_19 25
#define LABEL_59_20 27
#define ENVIRONMENT_LABEL_59_3 42
#define DEBUGGING_LABEL_59_2 41
#define OBJECT_59_1 40
#define OBJECT_59_0 39
#define EXECUTE_CACHE_59_17 29
#define EXECUTE_CACHE_59_12 31
#define FREE_REFERENCE_59_2 34
#define FREE_REFERENCE_59_1 35
#define FREE_REFERENCE_59_0 36
#define FREE_ASSIGNMENT_59_0 38
#define FREE_REFERENCES_LABEL_59_0 28
#define NUMBER_OF_LINKER_SECTIONS_59_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd37;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd23;
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

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_59_4);
      goto limit_unparse_depth_11;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_59_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_59_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_59_10);
      goto lambda_26;

    case 5:
      current_block = (Rpc - LABEL_59_13);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_59_14);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_59_15);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_59_16);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_59_8);
      goto swapB_25;

    case 10:
      current_block = (Rpc - LABEL_59_18);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_59_19);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_59_20);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (limit_unparse_depth_24)
DEFLABEL (limit_unparse_depth_11)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_33;
  Wrd5 = Wrd9;

DEFLABEL (label_32)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_27;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_27)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_31;
  Wrd13 = Wrd17;

DEFLABEL (label_30)
  Wrd12 = Wrd13;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_29;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd24.Lng) = ((Wrd25.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_29;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_28)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd41.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_8])));
  Rhp += 1;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd38.pObj) = (& (Rhp [-1]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd38.pObj)));
  (Rsp [1]) = (Wrd39.Obj);
  ((Wrd41.pObj) [2]) = (Wrd39.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_10])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  Wrd31 = Wrd30;
  (Wrd32.Obj) = (Rsp [2]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (Rsp [2]) = (Wrd42.Obj);
  (Rsp [1]) = (Wrd29.Obj);
  (Rsp [0]) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_12]));

DEFLABEL (label_29)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_6])), (Wrd14.pObj));

DEFLABEL (label_14)
  (Wrd13.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_5])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_32;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_59_10);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_42;
  Wrd5 = Wrd9;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_40;
  Wrd12 = Wrd16;

DEFLABEL (label_39)
  Wrd11 = Wrd12;
  (Wrd18.Obj) = (* (Rsp++));
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_38;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_38;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if ((Wrd37.Lng) > (Wrd38.Lng))
    goto label_35;

DEFLABEL (label_34)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Rsp [0]) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_35)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_2]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_37;
  Wrd30 = Wrd34;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_59_0]);
  (Rsp [1]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_17]));

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_16])), (Wrd31.pObj));

DEFLABEL (label_19)
  (Wrd30.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_15]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_35;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_14])), (Wrd13.pObj));

DEFLABEL (label_17)
  (Wrd12.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_13])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_41;

DEFLABEL (swapB_25)
  CLOSURE_HEADER (LABEL_59_8);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_51;

DEFLABEL (label_50)
  Wrd5 = Wrd9;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_59_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_48;

DEFLABEL (label_47)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_46)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_59_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_45;

DEFLABEL (label_44)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_43)
  Rvl = (current_block [OBJECT_59_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_45)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_44;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_59_20])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_22)
  goto label_43;

DEFLABEL (label_48)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_47;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_59_19])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_21)
  goto label_46;

DEFLABEL (label_51)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_50;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_59_18])), (Wrd6.pObj));

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_49;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_8 5
#define LABEL_60_7 7
#define LABEL_60_5 9
#define LABEL_60_12 11
#define LABEL_60_15 13
#define LABEL_60_14 15
#define LABEL_60_17 17
#define LABEL_60_18 19
#define LABEL_60_19 21
#define LABEL_60_20 23
#define LABEL_60_11 25
#define LABEL_60_16 27
#define LABEL_60_25 29
#define LABEL_60_26 31
#define LABEL_60_22 33
#define LABEL_60_27 35
#define LABEL_60_28 37
#define LABEL_60_29 39
#define LABEL_60_23 41
#define LABEL_60_30 43
#define LABEL_60_32 45
#define ENVIRONMENT_LABEL_60_3 75
#define DEBUGGING_LABEL_60_2 74
#define OBJECT_60_4 73
#define OBJECT_60_3 72
#define OBJECT_60_2 71
#define OBJECT_60_1 70
#define OBJECT_60_0 69
#define EXECUTE_CACHE_60_33 47
#define EXECUTE_CACHE_60_31 49
#define EXECUTE_CACHE_60_24 51
#define EXECUTE_CACHE_60_21 53
#define EXECUTE_CACHE_60_13 55
#define EXECUTE_CACHE_60_10 57
#define EXECUTE_CACHE_60_9 59
#define EXECUTE_CACHE_60_6 61
#define FREE_REFERENCE_60_4 64
#define FREE_REFERENCE_60_3 65
#define FREE_REFERENCE_60_2 66
#define FREE_REFERENCE_60_1 67
#define FREE_REFERENCE_60_0 68
#define FREE_REFERENCES_LABEL_60_0 46
#define NUMBER_OF_LINKER_SECTIONS_60_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd7;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_60_4);
      goto unparse_tail_15;

    case 1:
      current_block = (Rpc - LABEL_60_8);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_60_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_60_12);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_60_15);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_60_14);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_60_17);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_60_18);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_60_19);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_60_20);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_60_11);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_60_16);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_60_25);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_60_26);
      goto label_27;

    case 15:
      current_block = (Rpc - LABEL_60_22);
      goto continuation_6;

    case 16:
      current_block = (Rpc - LABEL_60_27);
      goto label_24;

    case 17:
      current_block = (Rpc - LABEL_60_28);
      goto label_25;

    case 18:
      current_block = (Rpc - LABEL_60_29);
      goto label_26;

    case 19:
      current_block = (Rpc - LABEL_60_23);
      goto continuation_5;

    case 20:
      current_block = (Rpc - LABEL_60_30);
      goto continuation_10;

    case 21:
      current_block = (Rpc - LABEL_60_32);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_tail_30)
DEFLABEL (unparse_tail_15)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 1))
    goto label_53;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_60_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_60_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_40;
  Wrd11 = Wrd15;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_9]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_60_14);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_38;
  Wrd9 = Wrd13;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_2]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_36;
  Wrd15 = Wrd19;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_3]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_34;
  Wrd21 = Wrd25;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_32;
  Wrd27 = Wrd31;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_60_16);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_20])), (Wrd28.pObj));

DEFLABEL (label_23)
  (Wrd27.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_19])), (Wrd22.pObj));

DEFLABEL (label_22)
  (Wrd21.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_18])), (Wrd16.pObj));

DEFLABEL (label_21)
  (Wrd15.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_17])), (Wrd10.pObj));

DEFLABEL (label_20)
  (Wrd9.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_15])), (Wrd12.pObj));

DEFLABEL (label_18)
  (Wrd11.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_60_3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_52;
  Wrd21 = Wrd25;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_60_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_24]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_60_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_60_22);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_4]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_50;
  Wrd5 = Wrd9;

DEFLABEL (label_49)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_4]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_48;
  Wrd13 = Wrd17;

DEFLABEL (label_47)
  Wrd12 = Wrd13;
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_46;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_46;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd37.Lng) < (Wrd38.Lng))
    goto label_43;

DEFLABEL (label_44)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_25]))));
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_42;

DEFLABEL (label_43)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_30]))));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_42)
DEFLABEL (label_45)
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_31]));

DEFLABEL (label_46)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_29]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_43;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_28])), (Wrd14.pObj));

DEFLABEL (label_25)
  (Wrd13.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_27])), (Wrd6.pObj));

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_12])), (Wrd22.pObj));

DEFLABEL (label_19)
  (Wrd21.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_53)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_60_0])))
    goto label_54;
  Rvl = (current_block [OBJECT_60_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_60_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_56;
  Wrd13 = Wrd17;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_60_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_10]));

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_8])), (Wrd14.pObj));

DEFLABEL (label_17)
  (Wrd13.Obj) = Rvl;
  goto label_55;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_60_25);
  (Wrd40.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd40.uLng) == 1))
    goto label_43;
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_58;
  Wrd42 = Wrd46;

DEFLABEL (label_57)
  (Rsp [1]) = (Wrd42.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_60_4]);
  (Rsp [2]) = (Wrd48.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_9]));

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_26])), (Wrd43.pObj));

DEFLABEL (label_27)
  (Wrd42.Obj) = Rvl;
  goto label_57;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_60_30);
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_60;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_60;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_59)
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_33]));

DEFLABEL (label_60)
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_28)
  (Wrd10.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_7 7
#define ENVIRONMENT_LABEL_61_3 17
#define DEBUGGING_LABEL_61_2 16
#define OBJECT_61_0 15
#define EXECUTE_CACHE_61_9 9
#define EXECUTE_CACHE_61_8 11
#define EXECUTE_CACHE_61_6 13
#define FREE_REFERENCES_LABEL_61_0 8
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_61_4);
      goto unparse_list_unparser_4;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_61_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_list_unparser_7)
DEFLABEL (unparse_list_unparser_4)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_61_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define ENVIRONMENT_LABEL_62_3 13
#define DEBUGGING_LABEL_62_2 12
#define OBJECT_62_0 11
#define EXECUTE_CACHE_62_7 7
#define EXECUTE_CACHE_62_6 9
#define FREE_REFERENCES_LABEL_62_0 6
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_62_4);
      goto unparse_list_entity_unparser_1;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_list_entity_unparser_4)
DEFLABEL (unparse_list_entity_unparser_1)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_62_0]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_6 5
#define LABEL_63_5 7
#define LABEL_63_8 9
#define LABEL_63_9 11
#define ENVIRONMENT_LABEL_63_3 24
#define DEBUGGING_LABEL_63_2 23
#define EXECUTE_CACHE_63_12 13
#define EXECUTE_CACHE_63_11 15
#define EXECUTE_CACHE_63_10 17
#define EXECUTE_CACHE_63_7 19
#define FREE_REFERENCE_63_0 22
#define FREE_REFERENCES_LABEL_63_0 12
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_63_4);
      goto unparse_list_prefix_pair_3;

    case 1:
      current_block = (Rpc - LABEL_63_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_63_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_63_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_list_prefix_pair_7)
DEFLABEL (unparse_list_prefix_pair_3)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_63_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_63_8);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_11]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_6])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_6 7
#define LABEL_64_8 9
#define LABEL_64_9 11
#define LABEL_64_10 13
#define ENVIRONMENT_LABEL_64_3 31
#define DEBUGGING_LABEL_64_2 30
#define OBJECT_64_8 29
#define OBJECT_64_7 28
#define OBJECT_64_6 27
#define OBJECT_64_5 26
#define OBJECT_64_4 25
#define OBJECT_64_3 24
#define OBJECT_64_2 23
#define OBJECT_64_1 22
#define OBJECT_64_0 21
#define EXECUTE_CACHE_64_11 15
#define EXECUTE_CACHE_64_7 17
#define FREE_REFERENCE_64_0 20
#define FREE_REFERENCES_LABEL_64_0 14
#define NUMBER_OF_LINKER_SECTIONS_64_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_64_4);
      goto unparse_list_prefix_pairP_11;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_64_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_64_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_64_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_64_10);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_list_prefix_pairP_15)
DEFLABEL (unparse_list_prefix_pairP_11)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_26;
  Wrd5 = Wrd9;

DEFLABEL (label_25)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_6);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_64_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_64_8);
  if (Rvl == (current_block [OBJECT_64_0]))
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_64_10);
  (Rsp [0]) = Rvl;
  if (Rvl == (current_block [OBJECT_64_1]))
    goto label_24;
  if (Rvl == (current_block [OBJECT_64_3]))
    goto label_23;
  if (Rvl == (current_block [OBJECT_64_5]))
    goto label_22;
  if (Rvl == (current_block [OBJECT_64_7]))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_19;

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_64_8]);

DEFLABEL (label_19)
DEFLABEL (label_21)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_64_6]);
  goto label_21;

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_64_4]);
  goto label_21;

DEFLABEL (label_24)
  Rvl = (current_block [OBJECT_64_2]);
  goto label_21;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_5])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define TAG_65_6 1
#define ENVIRONMENT_LABEL_65_3 11
#define DEBUGGING_LABEL_65_2 10
#define OBJECT_65_0 9
#define EXECUTE_CACHE_65_7 7
#define FREE_REFERENCES_LABEL_65_0 6
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_65_4);
      goto safe_car_1;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (safe_car_4)
DEFLABEL (safe_car_1)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_65_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_65_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_65_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_6;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd10.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_0]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define TAG_66_6 1
#define ENVIRONMENT_LABEL_66_3 11
#define DEBUGGING_LABEL_66_2 10
#define OBJECT_66_0 9
#define EXECUTE_CACHE_66_7 7
#define FREE_REFERENCES_LABEL_66_0 6
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_66_4);
      goto safe_cdr_1;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (safe_cdr_4)
DEFLABEL (safe_cdr_1)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_66_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_66_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_66_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_6;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_0]), 1);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_5 3
#define LABEL_67_4 5
#define LABEL_67_6 7
#define LABEL_67_10 9
#define LABEL_67_11 11
#define LABEL_67_12 13
#define LABEL_67_13 15
#define LABEL_67_9 17
#define LABEL_67_7 19
#define LABEL_67_16 21
#define LABEL_67_18 23
#define TAG_67_19 10
#define ENVIRONMENT_LABEL_67_3 45
#define DEBUGGING_LABEL_67_2 44
#define OBJECT_67_0 43
#define EXECUTE_CACHE_67_21 25
#define EXECUTE_CACHE_67_20 27
#define EXECUTE_CACHE_67_17 29
#define EXECUTE_CACHE_67_15 31
#define EXECUTE_CACHE_67_14 33
#define EXECUTE_CACHE_67_8 35
#define FREE_REFERENCE_67_4 38
#define FREE_REFERENCE_67_3 39
#define FREE_REFERENCE_67_2 40
#define FREE_REFERENCE_67_1 41
#define FREE_REFERENCE_67_0 42
#define FREE_REFERENCES_LABEL_67_0 24
#define NUMBER_OF_LINKER_SECTIONS_67_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_67_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_67_4);
      goto unparse_procedure_8;

    case 2:
      current_block = (Rpc - LABEL_67_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_67_10);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_67_11);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_67_12);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_67_13);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_67_9);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_67_7);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_67_16);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_67_18);
      goto lambda_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_procedure_16)
DEFLABEL (unparse_procedure_8)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_34;
  Wrd8 = Wrd12;

DEFLABEL (label_33)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_31)
  (Wrd18.Obj) = (Rsp [0]);
  if (! ((Wrd18.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_67_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_18)
  (Wrd7.Obj) = (current_block [OBJECT_67_0]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_67_16);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_67_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_67_18])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = Rvl;
  Wrd12 = Wrd8;
  goto label_19;

DEFLABEL (label_20)
  (Wrd12.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_19)
DEFLABEL (label_21)
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_20]));

DEFLABEL (label_22)
  (Wrd20.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_30;
  Wrd24 = Wrd28;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_2]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_28;
  Wrd30 = Wrd34;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_3]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_26;
  Wrd36 = Wrd40;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_4]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_24;
  Wrd42 = Wrd46;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_67_9);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_13])), (Wrd43.pObj));

DEFLABEL (label_14)
  (Wrd42.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_12])), (Wrd37.pObj));

DEFLABEL (label_13)
  (Wrd36.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_11])), (Wrd31.pObj));

DEFLABEL (label_12)
  (Wrd30.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_10])), (Wrd25.pObj));

DEFLABEL (label_11)
  (Wrd24.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_6])), (Wrd9.pObj));

DEFLABEL (label_10)
  (Wrd8.Obj) = Rvl;
  goto label_33;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_67_18);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_21]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_8 5
#define LABEL_68_5 7
#define TAG_68_6 2
#define LABEL_68_9 9
#define LABEL_68_11 11
#define LABEL_68_12 13
#define LABEL_68_14 15
#define TAG_68_15 6
#define ENVIRONMENT_LABEL_68_3 32
#define DEBUGGING_LABEL_68_2 31
#define OBJECT_68_1 30
#define OBJECT_68_0 29
#define EXECUTE_CACHE_68_17 17
#define EXECUTE_CACHE_68_16 19
#define EXECUTE_CACHE_68_13 21
#define EXECUTE_CACHE_68_10 23
#define EXECUTE_CACHE_68_7 25
#define FREE_REFERENCE_68_0 28
#define FREE_REFERENCES_LABEL_68_0 16
#define NUMBER_OF_LINKER_SECTIONS_68_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_68_4);
      goto unparse_compound_procedure_6;

    case 1:
      current_block = (Rpc - LABEL_68_8);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_68_5);
      goto lambda_11;

    case 3:
      current_block = (Rpc - LABEL_68_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_68_11);
      goto lambda_4;

    case 5:
      current_block = (Rpc - LABEL_68_12);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_68_14);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_compound_procedure_10)
DEFLABEL (unparse_compound_procedure_6)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_68_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_68_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = (Wrd5.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_7]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_68_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_17;
  Wrd12 = Wrd16;

DEFLABEL (label_16)
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_68_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_16]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_8);
  (Wrd28.Obj) = Rvl;

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_10]));

DEFLABEL (label_15)
  (Wrd28.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_9])), (Wrd13.pObj));

DEFLABEL (label_8)
  (Wrd12.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_12)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_68_11);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_68_1]))
    goto label_19;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_68_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_68_14])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = (Wrd5.Obj);
  Rvl = (Wrd8.Obj);
  goto label_18;

DEFLABEL (label_19)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_18)
DEFLABEL (label_20)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_68_14);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_17]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define TAG_69_6 1
#define LABEL_69_10 7
#define LABEL_69_11 9
#define LABEL_69_8 11
#define TAG_69_9 4
#define LABEL_69_14 13
#define ENVIRONMENT_LABEL_69_3 30
#define DEBUGGING_LABEL_69_2 29
#define OBJECT_69_0 28
#define EXECUTE_CACHE_69_16 15
#define EXECUTE_CACHE_69_15 17
#define EXECUTE_CACHE_69_13 19
#define EXECUTE_CACHE_69_12 21
#define EXECUTE_CACHE_69_7 23
#define FREE_REFERENCE_69_1 26
#define FREE_REFERENCE_69_0 27
#define FREE_REFERENCES_LABEL_69_0 14
#define NUMBER_OF_LINKER_SECTIONS_69_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_69_4);
      goto unparse_primitive_procedure_4;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_69_10);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_69_11);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_69_8);
      goto lambda_11;

    case 5:
      current_block = (Rpc - LABEL_69_14);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_primitive_procedure_9)
DEFLABEL (unparse_primitive_procedure_4)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_69_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_69_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = (Wrd5.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_7]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_69_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_69_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_69_8])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_17;
  Wrd11 = Wrd15;

DEFLABEL (label_16)
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd18.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_1;

DEFLABEL (label_12)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_15;
  Wrd20 = Wrd24;

DEFLABEL (label_14)
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Rsp [1]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_13]));

DEFLABEL (label_13)
  (Wrd31.Obj) = (current_block [OBJECT_69_0]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd32.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_12]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_11])), (Wrd21.pObj));

DEFLABEL (label_7)
  (Wrd20.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_10])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_69_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_69_14);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_16]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_7 5
#define LABEL_70_5 7
#define LABEL_70_11 9
#define LABEL_70_8 11
#define TAG_70_9 4
#define LABEL_70_16 13
#define LABEL_70_13 15
#define TAG_70_14 6
#define LABEL_70_17 17
#define LABEL_70_22 19
#define LABEL_70_18 21
#define LABEL_70_21 23
#define LABEL_70_24 25
#define TAG_70_25 11
#define LABEL_70_30 27
#define LABEL_70_31 29
#define LABEL_70_26 31
#define LABEL_70_33 33
#define LABEL_70_35 35
#define LABEL_70_27 37
#define LABEL_70_37 39
#define LABEL_70_38 41
#define LABEL_70_40 43
#define LABEL_70_41 45
#define LABEL_70_42 47
#define LABEL_70_29 49
#define LABEL_70_43 51
#define LABEL_70_46 53
#define LABEL_70_47 55
#define LABEL_70_34 57
#define LABEL_70_32 59
#define LABEL_70_44 61
#define LABEL_70_49 63
#define LABEL_70_50 65
#define LABEL_70_52 67
#define LABEL_70_39 69
#define ENVIRONMENT_LABEL_70_3 108
#define DEBUGGING_LABEL_70_2 107
#define OBJECT_70_7 106
#define OBJECT_70_6 105
#define OBJECT_70_5 104
#define OBJECT_70_4 103
#define OBJECT_70_3 102
#define OBJECT_70_2 101
#define OBJECT_70_1 100
#define OBJECT_70_0 99
#define EXECUTE_CACHE_70_53 71
#define EXECUTE_CACHE_70_51 73
#define EXECUTE_CACHE_70_48 75
#define EXECUTE_CACHE_70_45 77
#define EXECUTE_CACHE_70_36 79
#define EXECUTE_CACHE_70_28 81
#define EXECUTE_CACHE_70_23 83
#define EXECUTE_CACHE_70_20 85
#define EXECUTE_CACHE_70_19 87
#define EXECUTE_CACHE_70_15 89
#define EXECUTE_CACHE_70_12 91
#define EXECUTE_CACHE_70_10 93
#define EXECUTE_CACHE_70_6 95
#define FREE_REFERENCE_70_0 98
#define FREE_REFERENCES_LABEL_70_0 70
#define NUMBER_OF_LINKER_SECTIONS_70_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd59;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_70_4);
      goto unparse_compiled_entry_32;

    case 1:
      current_block = (Rpc - LABEL_70_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_70_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_70_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_70_8);
      goto lambda_44;

    case 5:
      current_block = (Rpc - LABEL_70_16);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_70_13);
      goto lambda_45;

    case 7:
      current_block = (Rpc - LABEL_70_17);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_70_22);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_70_18);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_70_21);
      goto continuation_17;

    case 11:
      current_block = (Rpc - LABEL_70_24);
      goto lambda_46;

    case 12:
      current_block = (Rpc - LABEL_70_30);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_70_31);
      goto continuation_23;

    case 14:
      current_block = (Rpc - LABEL_70_26);
      goto continuation_19;

    case 15:
      current_block = (Rpc - LABEL_70_33);
      goto label_37;

    case 16:
      current_block = (Rpc - LABEL_70_35);
      goto label_36;

    case 17:
      current_block = (Rpc - LABEL_70_27);
      goto continuation_18;

    case 18:
      current_block = (Rpc - LABEL_70_37);
      goto continuation_13;

    case 19:
      current_block = (Rpc - LABEL_70_38);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_70_40);
      goto label_41;

    case 21:
      current_block = (Rpc - LABEL_70_41);
      goto continuation_9;

    case 22:
      current_block = (Rpc - LABEL_70_42);
      goto continuation_8;

    case 23:
      current_block = (Rpc - LABEL_70_29);
      goto continuation_7;

    case 24:
      current_block = (Rpc - LABEL_70_43);
      goto label_40;

    case 25:
      current_block = (Rpc - LABEL_70_46);
      goto label_39;

    case 26:
      current_block = (Rpc - LABEL_70_47);
      goto label_38;

    case 27:
      current_block = (Rpc - LABEL_70_34);
      goto continuation_20;

    case 28:
      current_block = (Rpc - LABEL_70_32);
      goto continuation_24;

    case 29:
      current_block = (Rpc - LABEL_70_44);
      goto continuation_10;

    case 30:
      current_block = (Rpc - LABEL_70_49);
      goto continuation_22;

    case 31:
      current_block = (Rpc - LABEL_70_50);
      goto continuation_21;

    case 32:
      current_block = (Rpc - LABEL_70_52);
      goto continuation_25;

    case 33:
      current_block = (Rpc - LABEL_70_39);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_compiled_entry_43)
DEFLABEL (unparse_compiled_entry_32)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_70_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_70_0]))
    goto label_48;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_47;

DEFLABEL (label_48)
  (Wrd8.Obj) = (current_block [OBJECT_70_1]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_47)
DEFLABEL (label_52)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_2]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_70_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_70_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_50)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_70_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_70_8])));
  Rhp += 4;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd29 = Wrd22;
  (Wrd30.Obj) = (Rsp [3]);
  ((Wrd29.pObj) [2]) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  ((Wrd29.pObj) [3]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd29.pObj) [4]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  ((Wrd29.pObj) [5]) = (Wrd24.Obj);
  (Rsp [0]) = (Wrd21.Obj);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Rsp [2]) = (Wrd30.Obj);
  (Rsp [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_10]));

DEFLABEL (label_49)
  (Rsp [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_27;

DEFLABEL (label_51)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_50;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_70_8);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd12.Obj) = (current_block [OBJECT_70_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_53;

DEFLABEL (label_54)
  (Wrd30.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_53)
DEFLABEL (label_55)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_70_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_70_13])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd24 = Wrd15;
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd26.pObj) [4]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd26.pObj) [5]);
  ((Wrd24.pObj) [4]) = (Wrd19.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_15]));

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_70_13);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd17.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_70_16);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_56)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_19]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_70_18);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_70_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_70_24])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_57)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_56;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_70_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_64;
  Wrd9 = Wrd13;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_23]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_70_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_28]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_70_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_36]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_70_26);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_70_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_62;
  Wrd13 = Wrd17;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_23]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_70_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_49]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_50]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_51]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_70_50);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_7]), 1);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_70_49);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_36]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_70_31);

DEFLABEL (label_60)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_32]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_70_4]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_59;
  Wrd23 = Wrd27;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_23]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_70_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_7]), 1);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_70_52);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_36]));

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_33])), (Wrd24.pObj));

DEFLABEL (label_37)
  (Wrd23.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_35])), (Wrd14.pObj));

DEFLABEL (label_36)
  (Wrd13.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_22])), (Wrd10.pObj));

DEFLABEL (label_34)
  (Wrd9.Obj) = Rvl;
  goto label_63;

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_70_24);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_78;
  Wrd9 = Wrd13;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_70_29);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_74;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_42]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_76;
  Wrd15 = Wrd19;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_48]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_70_42);

DEFLABEL (label_74)
  (Wrd21.Obj) = (Rsp [1]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_67;
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  if (! ((Wrd25.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_71;

DEFLABEL (label_70)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_38]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_44]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_45]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_70_44);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_53]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_70_38);
  (Wrd53.Obj) = (Rsp [2]);
  if ((Wrd53.Obj) == ((SCHEME_OBJECT) 0))
    goto label_67;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_39]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (current_block [OBJECT_70_4]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd60.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd63.Obj) = ((Wrd60.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 50)
    goto label_69;
  Wrd59 = Wrd63;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_23]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_70_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_36]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_70_37);

DEFLABEL (label_67)
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_66;
  Wrd45 = Wrd49;

DEFLABEL (label_65)
  (Rsp [1]) = (Wrd45.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_70_6]);
  (Rsp [2]) = (Wrd51.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_23]));

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_43])), (Wrd46.pObj));

DEFLABEL (label_40)
  (Wrd45.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_40])), (Wrd60.pObj));

DEFLABEL (label_41)
  (Wrd59.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_41]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_70_4]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_73;
  Wrd31 = Wrd35;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_70_41);
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_46])), (Wrd32.pObj));

DEFLABEL (label_39)
  (Wrd31.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_47])), (Wrd16.pObj));

DEFLABEL (label_38)
  (Wrd15.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_30])), (Wrd10.pObj));

DEFLABEL (label_35)
  (Wrd9.Obj) = Rvl;
  goto label_77;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define TAG_71_6 1
#define LABEL_71_8 7
#define ENVIRONMENT_LABEL_71_3 17
#define DEBUGGING_LABEL_71_2 16
#define OBJECT_71_0 15
#define EXECUTE_CACHE_71_10 9
#define EXECUTE_CACHE_71_9 11
#define EXECUTE_CACHE_71_7 13
#define FREE_REFERENCES_LABEL_71_0 8
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_71_4);
      goto unparse_assignment_2;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_71_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_assignment_5)
DEFLABEL (unparse_assignment_2)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_71_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_71_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_71_5])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_71_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_71_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define TAG_72_6 1
#define LABEL_72_8 7
#define ENVIRONMENT_LABEL_72_3 17
#define DEBUGGING_LABEL_72_2 16
#define OBJECT_72_0 15
#define EXECUTE_CACHE_72_10 9
#define EXECUTE_CACHE_72_9 11
#define EXECUTE_CACHE_72_7 13
#define FREE_REFERENCES_LABEL_72_0 8
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_72_4);
      goto unparse_definition_2;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_72_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_definition_5)
DEFLABEL (unparse_definition_2)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_72_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_72_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_72_5])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_72_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define TAG_73_6 1
#define LABEL_73_8 7
#define ENVIRONMENT_LABEL_73_3 17
#define DEBUGGING_LABEL_73_2 16
#define OBJECT_73_0 15
#define EXECUTE_CACHE_73_10 9
#define EXECUTE_CACHE_73_9 11
#define EXECUTE_CACHE_73_7 13
#define FREE_REFERENCES_LABEL_73_0 8
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_73_4);
      goto unparse_lambda_2;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_73_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_lambda_5)
DEFLABEL (unparse_lambda_2)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_73_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_73_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73_5])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_73_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_73_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define TAG_74_6 1
#define LABEL_74_8 7
#define ENVIRONMENT_LABEL_74_3 17
#define DEBUGGING_LABEL_74_2 16
#define OBJECT_74_0 15
#define EXECUTE_CACHE_74_10 9
#define EXECUTE_CACHE_74_9 11
#define EXECUTE_CACHE_74_7 13
#define FREE_REFERENCES_LABEL_74_0 8
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_74_4);
      goto unparse_variable_2;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_74_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_variable_5)
DEFLABEL (unparse_variable_2)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_74_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_5])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_74_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_74_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_5 3
#define LABEL_75_6 5
#define LABEL_75_7 7
#define LABEL_75_8 9
#define LABEL_75_9 11
#define LABEL_75_10 13
#define LABEL_75_11 15
#define LABEL_75_12 17
#define LABEL_75_13 19
#define LABEL_75_14 21
#define LABEL_75_4 23
#define LABEL_75_17 25
#define LABEL_75_19 27
#define LABEL_75_18 29
#define ENVIRONMENT_LABEL_75_3 54
#define DEBUGGING_LABEL_75_2 53
#define OBJECT_75_12 52
#define OBJECT_75_11 51
#define OBJECT_75_10 50
#define OBJECT_75_9 49
#define OBJECT_75_8 48
#define OBJECT_75_7 47
#define OBJECT_75_6 46
#define OBJECT_75_5 45
#define OBJECT_75_4 44
#define OBJECT_75_3 43
#define OBJECT_75_2 42
#define OBJECT_75_1 41
#define OBJECT_75_0 40
#define EXECUTE_CACHE_75_20 31
#define EXECUTE_CACHE_75_16 33
#define EXECUTE_CACHE_75_15 35
#define FREE_REFERENCE_75_1 38
#define FREE_REFERENCE_75_0 39
#define FREE_REFERENCES_LABEL_75_0 30
#define NUMBER_OF_LINKER_SECTIONS_75_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd36;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd88;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd82;
  machine_word Wrd72;
  machine_word Wrd107;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd60;
  machine_word Wrd50;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd128;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd135;
  machine_word Wrd144;
  machine_word Wrd141;
  machine_word Wrd148;
  machine_word Wrd146;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
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
      current_block = (Rpc - LABEL_75_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_75_6);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_75_7);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_75_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_75_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_75_10);
      goto lambda_10;

    case 6:
      current_block = (Rpc - LABEL_75_11);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_75_12);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_75_13);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_75_14);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_75_4);
      goto unparse_number_18;

    case 11:
      current_block = (Rpc - LABEL_75_17);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_75_19);
      goto label_21;

    case 13:
      current_block = (Rpc - LABEL_75_18);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_number_29)
DEFLABEL (unparse_number_18)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_37;
  Wrd5 = Wrd9;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_35;
  Wrd14 = Wrd18;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_75_7]);
  if (! ((Wrd14.Obj) == (Wrd21.Obj)))
    goto label_30;
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_75_8]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Rsp [2]) = (Wrd21.Obj);
  goto lambda_10;

DEFLABEL (label_30)
  (Wrd23.Obj) = (current_block [OBJECT_75_9]);
  if (! ((Wrd14.Obj) == (Wrd23.Obj)))
    goto label_31;
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_75_10]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Rsp [2]) = (Wrd23.Obj);
  goto lambda_10;

DEFLABEL (label_31)
  (Wrd25.Obj) = (current_block [OBJECT_75_11]);
  if (! ((Wrd14.Obj) == (Wrd25.Obj)))
    goto label_32;
  (Wrd29.Obj) = (current_block [OBJECT_75_6]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_75_12]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Rsp [2]) = (Wrd25.Obj);
  goto lambda_10;

DEFLABEL (label_32)
  (Wrd27.Obj) = (current_block [OBJECT_75_6]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_33)
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_20]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_75_18);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_15]));

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_19])), (Wrd15.pObj));

DEFLABEL (label_21)
  (Wrd14.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_17])), (Wrd6.pObj));

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_36;

DEFLABEL (lambda_28)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_75_10);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd120.Obj) = (current_block [OBJECT_75_0]);
  (Wrd123.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd123.Lng))))
    goto label_61;
  (Wrd43.uLng) = (OBJECT_DATUM (Wrd120.Obj));
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd43.Obj) == (Wrd45.Obj))
    goto label_58;

DEFLABEL (label_60)
  (Wrd110.Obj) = (current_block [OBJECT_75_2]);
  (Wrd113.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd113.Lng))))
    goto label_59;
  (Wrd47.uLng) = (OBJECT_DATUM (Wrd110.Obj));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd47.Obj) == (Wrd49.Obj))
    goto label_58;

DEFLABEL (label_57)
  (Wrd50.Obj) = (current_block [OBJECT_75_3]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd60.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 58L) < ((unsigned long) (Wrd60.Lng)))
    goto label_39;

DEFLABEL (label_38)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_39)
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd50.Obj));
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd54.Obj) == (Wrd56.Obj))
    goto label_41;
  (Wrd52.Obj) = (current_block [OBJECT_75_5]);
  goto label_40;

DEFLABEL (label_41)
  (Wrd52.Obj) = (current_block [OBJECT_75_4]);

DEFLABEL (label_40)
DEFLABEL (label_56)
  Rsp = (& (Rsp [3]));
  if ((Wrd52.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;

DEFLABEL (label_54)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_8]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd99.Obj) = (current_block [OBJECT_75_0]);
  (Wrd102.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd102.Lng))))
    goto label_53;
  (Wrd69.uLng) = (OBJECT_DATUM (Wrd99.Obj));
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd69.Obj) == (Wrd71.Obj))
    goto label_52;

DEFLABEL (label_51)
  (Wrd72.Obj) = (current_block [OBJECT_75_2]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd82.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd82.Lng))))
    goto label_38;
  (Wrd76.uLng) = (OBJECT_DATUM (Wrd72.Obj));
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd76.Obj) == (Wrd78.Obj))
    goto label_43;
  (Wrd74.Obj) = (current_block [OBJECT_75_5]);
  goto label_42;

DEFLABEL (label_43)
  (Wrd74.Obj) = (current_block [OBJECT_75_4]);

DEFLABEL (label_42)
DEFLABEL (label_50)
  Rsp = (& (Rsp [3]));
  if ((Wrd74.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;

DEFLABEL (label_49)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd97.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd97.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_75_5);
  (Wrd136.Obj) = Rvl;
  (Wrd137.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd137.uLng) == 26))
    goto label_48;
  (Wrd138.Obj) = (Rsp [1]);
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if (! ((Wrd139.uLng) == 26))
    goto label_48;
  (Wrd146.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd148.Lng) = (FIXNUM_TO_LONG (Wrd138.Obj));
  if ((Wrd146.Lng) < (Wrd148.Lng))
    goto label_44;

DEFLABEL (label_47)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_7]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd89.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd92.Obj) = ((Wrd89.pObj) [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if ((Wrd93.uLng) == 50)
    goto label_46;
  Wrd88 = Wrd92;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd88.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_75_7);

DEFLABEL (label_44)
  (Wrd135.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd135.Obj);
  goto label_33;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_14])), (Wrd89.pObj));

DEFLABEL (label_22)
  (Wrd88.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd141.Obj) = (Rsp [1]);
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_6]))));
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd136.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_44;

DEFLABEL (label_52)
  Rsp = (& (Rsp [2]));
  goto label_49;

DEFLABEL (label_53)
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_13]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_52;

DEFLABEL (label_55)
  (Wrd63.Obj) = (current_block [OBJECT_75_6]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd63.Obj);
  goto label_33;

DEFLABEL (label_58)
  Rsp = (& (Rsp [2]));
  goto label_54;

DEFLABEL (label_59)
  (Wrd115.Obj) = (Rsp [0]);
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_12]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_58;

DEFLABEL (label_61)
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_11]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  goto label_58;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_75_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_49;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_75_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_54;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define ENVIRONMENT_LABEL_76_3 13
#define DEBUGGING_LABEL_76_2 12
#define OBJECT_76_0 11
#define EXECUTE_CACHE_76_7 7
#define EXECUTE_CACHE_76_6 9
#define FREE_REFERENCES_LABEL_76_0 6
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_76_4);
      goto unparse_flonum_3;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_flonum_7)
DEFLABEL (unparse_flonum_3)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));
  (Wrd11.Obj) = ((SCHEME_OBJECT) 26);
  if (! ((Wrd11.uLng) == 26))
    goto label_10;
  if ((Wrd5.Obj) == (current_block [OBJECT_76_0]))
    goto label_9;

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_6]));

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_7]));

DEFLABEL (label_10)
  (Wrd14.Obj) = (current_block [OBJECT_76_0]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define LABEL_77_6 7
#define LABEL_77_10 9
#define LABEL_77_7 11
#define TAG_77_8 4
#define LABEL_77_11 13
#define LABEL_77_13 15
#define LABEL_77_15 17
#define LABEL_77_12 19
#define LABEL_77_17 21
#define LABEL_77_18 23
#define LABEL_77_20 25
#define LABEL_77_22 27
#define LABEL_77_23 29
#define LABEL_77_19 31
#define LABEL_77_26 33
#define LABEL_77_25 35
#define LABEL_77_27 37
#define ENVIRONMENT_LABEL_77_3 63
#define DEBUGGING_LABEL_77_2 62
#define OBJECT_77_9 61
#define OBJECT_77_8 60
#define OBJECT_77_7 59
#define OBJECT_77_6 58
#define OBJECT_77_5 57
#define OBJECT_77_4 56
#define OBJECT_77_3 55
#define OBJECT_77_2 54
#define OBJECT_77_1 53
#define OBJECT_77_0 52
#define EXECUTE_CACHE_77_24 39
#define EXECUTE_CACHE_77_21 41
#define EXECUTE_CACHE_77_16 43
#define EXECUTE_CACHE_77_14 45
#define EXECUTE_CACHE_77_9 47
#define FREE_REFERENCE_77_1 50
#define FREE_REFERENCE_77_0 51
#define FREE_REFERENCES_LABEL_77_0 38
#define NUMBER_OF_LINKER_SECTIONS_77_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd29;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd37;
  double Dbl36;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd39;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd17;
  double Dbl16;
  machine_word Wrd16;
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
      goto unparse_floating_vector_21;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_77_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_77_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_77_7);
      goto lambda_36;

    case 5:
      current_block = (Rpc - LABEL_77_11);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_77_13);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_77_15);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_77_12);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_77_17);
      goto do_loop_15;

    case 10:
      current_block = (Rpc - LABEL_77_18);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_77_20);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_77_22);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_77_23);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_77_19);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_77_26);
      goto label_32;

    case 16:
      current_block = (Rpc - LABEL_77_25);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_77_27);
      goto label_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_floating_vector_35)
DEFLABEL (unparse_floating_vector_21)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 6))
    goto label_44;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd14.Lng) = (FIXNUM_QUOTIENT ((Wrd11.Lng), ((ADDRESS_UNITS_PER_FLOAT + (ADDRESS_UNITS_PER_OBJECT - 1)) / ADDRESS_UNITS_PER_OBJECT)));
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_43)
  (Wrd22.Obj) = (current_block [OBJECT_77_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_42;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if ((Wrd39.Lng) == 0)
    goto label_39;

DEFLABEL (label_40)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_77_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_77_7])));
  Rhp += 2;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd34 = Wrd31;
  (Wrd35.Obj) = (Rsp [2]);
  ((Wrd34.pObj) [2]) = (Wrd35.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  ((Wrd34.pObj) [3]) = (Wrd33.Obj);
  Wrd36 = Wrd30;
  goto label_38;

DEFLABEL (label_39)
  (Wrd36.Obj) = (current_block [OBJECT_77_2]);

DEFLABEL (label_38)
DEFLABEL (label_41)
  (Wrd37.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd37.Obj);
  (Rsp [2]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_9]));

DEFLABEL (label_42)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_39;

DEFLABEL (label_44)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_77_7);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_52;
  Wrd8 = Wrd12;

DEFLABEL (label_51)
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_49;
  Wrd15 = Wrd19;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_77_10);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_47)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_12]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [2]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 6))
    goto label_46;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd45.Lng))))
    goto label_46;
  Dbl36 = (((double *) (& ((Wrd43.pObj) [1]))) [0]);
  INLINE_DOUBLE_TO_FLONUM (Dbl36, (Wrd37.Obj));
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_77_12);
  (Wrd5.Obj) = (current_block [OBJECT_77_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_15;

DEFLABEL (label_46)
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [2]);
  (Wrd53.Obj) = (current_block [OBJECT_77_3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_13]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_4]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_15])), (Wrd16.pObj));

DEFLABEL (label_26)
  (Wrd15.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd25.Obj);
  goto label_47;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_11])), (Wrd9.pObj));

DEFLABEL (label_25)
  (Wrd8.Obj) = Rvl;
  goto label_51;

DEFLABEL (do_loop_37)
DEFLABEL (do_loop_15)
  INTERRUPT_CHECK (26, LABEL_77_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_69;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_69;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd61.Lng) < (Wrd63.Lng))
    goto label_54;

DEFLABEL (label_55)
  (Wrd15.Obj) = (current_block [OBJECT_77_6]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_53;

DEFLABEL (label_54)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_53)
DEFLABEL (label_68)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_61;
  Rsp = (& (Rsp [2]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_60;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_60;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if ((Wrd44.Lng) < (Wrd48.Lng))
    goto label_57;

DEFLABEL (label_56)
  Rvl = (current_block [OBJECT_77_8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_1]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_59;
  Wrd36 = Wrd40;

DEFLABEL (label_58)
  (Rsp [0]) = (Wrd36.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_77_9]);
  (Rsp [1]) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_24]));

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_23])), (Wrd37.pObj));

DEFLABEL (label_30)
  (Wrd36.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [3]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_22]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_57;

DEFLABEL (label_61)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_19]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (current_block [OBJECT_77_7]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_1]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_67;
  Wrd53 = Wrd57;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_77_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 6))
    goto label_65;
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_65;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_65;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  Dbl16 = (((double *) (& ((Wrd25.pObj) [1]))) [(Wrd9.Lng)]);
  INLINE_DOUBLE_TO_FLONUM (Dbl16, (Wrd17.Obj));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_64)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_14]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_77_25);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_63;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_63;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_62)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_15;

DEFLABEL (label_63)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_27]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_33)
  (Wrd9.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [2]);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_26]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_4]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_20])), (Wrd54.pObj));

DEFLABEL (label_31)
  (Wrd53.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_54;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define LABEL_78_9 7
#define LABEL_78_7 9
#define LABEL_78_11 11
#define LABEL_78_13 13
#define LABEL_78_18 15
#define LABEL_78_14 17
#define LABEL_78_27 19
#define LABEL_78_28 21
#define LABEL_78_29 23
#define LABEL_78_30 25
#define LABEL_78_15 27
#define LABEL_78_33 29
#define LABEL_78_21 31
#define LABEL_78_20 33
#define LABEL_78_26 35
#define LABEL_78_40 37
#define LABEL_78_25 39
#define LABEL_78_24 41
#define LABEL_78_23 43
#define LABEL_78_44 45
#define LABEL_78_45 47
#define LABEL_78_46 49
#define LABEL_78_47 51
#define LABEL_78_36 53
#define TAG_78_37 25
#define LABEL_78_48 55
#define LABEL_78_38 57
#define LABEL_78_39 59
#define LABEL_78_43 61
#define LABEL_78_42 63
#define LABEL_78_41 65
#define ENVIRONMENT_LABEL_78_3 110
#define DEBUGGING_LABEL_78_2 109
#define OBJECT_78_3 108
#define OBJECT_78_2 107
#define OBJECT_78_1 106
#define OBJECT_78_0 105
#define EXECUTE_CACHE_78_52 67
#define EXECUTE_CACHE_78_51 69
#define EXECUTE_CACHE_78_50 71
#define EXECUTE_CACHE_78_49 73
#define EXECUTE_CACHE_78_35 75
#define EXECUTE_CACHE_78_34 77
#define EXECUTE_CACHE_78_32 79
#define EXECUTE_CACHE_78_31 81
#define EXECUTE_CACHE_78_22 83
#define EXECUTE_CACHE_78_19 85
#define EXECUTE_CACHE_78_17 87
#define EXECUTE_CACHE_78_16 89
#define EXECUTE_CACHE_78_12 91
#define EXECUTE_CACHE_78_10 93
#define EXECUTE_CACHE_78_8 95
#define EXECUTE_CACHE_78_6 97
#define FREE_REFERENCE_78_4 100
#define FREE_REFERENCE_78_3 101
#define FREE_REFERENCE_78_2 102
#define FREE_REFERENCE_78_1 103
#define FREE_REFERENCE_78_0 104
#define FREE_REFERENCES_LABEL_78_0 66
#define NUMBER_OF_LINKER_SECTIONS_78_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unpars_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd18;
  machine_word Wrd35;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_78_4);
      goto unparse_entity_30;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_78_9);
      goto plain_27;

    case 3:
      current_block = (Rpc - LABEL_78_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_78_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_78_13);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_78_18);
      goto continuation_21;

    case 7:
      current_block = (Rpc - LABEL_78_14);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_78_27);
      goto label_33;

    case 9:
      current_block = (Rpc - LABEL_78_28);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_78_29);
      goto label_35;

    case 11:
      current_block = (Rpc - LABEL_78_30);
      goto label_36;

    case 12:
      current_block = (Rpc - LABEL_78_15);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_78_33);
      goto continuation_24;

    case 14:
      current_block = (Rpc - LABEL_78_21);
      goto continuation_22;

    case 15:
      current_block = (Rpc - LABEL_78_20);
      goto continuation_23;

    case 16:
      current_block = (Rpc - LABEL_78_26);
      goto continuation_17;

    case 17:
      current_block = (Rpc - LABEL_78_40);
      goto continuation_10;

    case 18:
      current_block = (Rpc - LABEL_78_25);
      goto continuation_5;

    case 19:
      current_block = (Rpc - LABEL_78_24);
      goto continuation_7;

    case 20:
      current_block = (Rpc - LABEL_78_23);
      goto continuation_9;

    case 21:
      current_block = (Rpc - LABEL_78_44);
      goto label_37;

    case 22:
      current_block = (Rpc - LABEL_78_45);
      goto label_38;

    case 23:
      current_block = (Rpc - LABEL_78_46);
      goto label_39;

    case 24:
      current_block = (Rpc - LABEL_78_47);
      goto label_40;

    case 25:
      current_block = (Rpc - LABEL_78_36);
      goto lambda_45;

    case 26:
      current_block = (Rpc - LABEL_78_48);
      goto label_41;

    case 27:
      current_block = (Rpc - LABEL_78_38);
      goto continuation_19;

    case 28:
      current_block = (Rpc - LABEL_78_39);
      goto continuation_18;

    case 29:
      current_block = (Rpc - LABEL_78_43);
      goto continuation_14;

    case 30:
      current_block = (Rpc - LABEL_78_42);
      goto continuation_8;

    case 31:
      current_block = (Rpc - LABEL_78_41);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unparse_entity_43)
DEFLABEL (unparse_entity_30)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_78_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd7.Obj) = (current_block [OBJECT_78_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto plain_27;

DEFLABEL (label_46)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_78_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd7.Obj) = (current_block [OBJECT_78_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto plain_27;

DEFLABEL (label_47)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_78_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_19]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_78_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_22]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_78_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_33]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_35]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_78_33);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_34]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_78_20);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_49)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd8.Obj) = (current_block [OBJECT_78_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_78_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_78_36])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  ((Wrd11.pObj) [2]) = (Wrd5.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_10]));

DEFLABEL (label_48)
  (Wrd15.Obj) = (current_block [OBJECT_78_2]);
  (Rsp [0]) = (Wrd15.Obj);
  goto plain_27;

DEFLABEL (label_50)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_49;

DEFLABEL (label_51)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_77;
  Wrd11 = Wrd15;

DEFLABEL (label_76)
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_17]));

DEFLABEL (label_52)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_78_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_32]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_78_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_67;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_23]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_24]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_25]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_78_25);
  (Wrd45.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd45.uLng) == 10)
    goto label_66;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_65)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == ((SCHEME_OBJECT) 0))
    goto label_63;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_62)
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_53;
  (Wrd35.Obj) = (current_block [OBJECT_78_3]);
  (Rsp [0]) = (Wrd35.Obj);
  goto plain_27;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_43]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_61;
  Wrd11 = Wrd15;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_59;
  Wrd17 = Wrd21;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_3]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_57;
  Wrd23 = Wrd27;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_4]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_55;
  Wrd29 = Wrd33;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_31]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_78_43);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_47])), (Wrd30.pObj));

DEFLABEL (label_40)
  (Wrd29.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_46])), (Wrd24.pObj));

DEFLABEL (label_39)
  (Wrd23.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_45])), (Wrd18.pObj));

DEFLABEL (label_38)
  (Wrd17.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_44])), (Wrd12.pObj));

DEFLABEL (label_37)
  (Wrd11.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_40]))));
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_64)
  (Wrd59.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_16]));

DEFLABEL (label_66)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_42]))));
  (* (--Rsp)) = (Wrd50.Obj);
  goto label_64;

DEFLABEL (label_67)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_75;
  Wrd10 = Wrd14;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_2]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_73;
  Wrd16 = Wrd20;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_3]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_71;
  Wrd22 = Wrd26;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_4]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_69;
  Wrd28 = Wrd32;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_31]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_78_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_16]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_78_39);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_50]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_78_38);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_30])), (Wrd29.pObj));

DEFLABEL (label_36)
  (Wrd28.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_29])), (Wrd23.pObj));

DEFLABEL (label_35)
  (Wrd22.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_28])), (Wrd17.pObj));

DEFLABEL (label_34)
  (Wrd16.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_27])), (Wrd11.pObj));

DEFLABEL (label_33)
  (Wrd10.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_13])), (Wrd12.pObj));

DEFLABEL (label_32)
  (Wrd11.Obj) = Rvl;
  goto label_76;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_78_40);
  (Wrd53.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd53.uLng) == 1)
    goto label_78;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_62;

DEFLABEL (label_78)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_41]))));
  (* (--Rsp)) = (Wrd58.Obj);
  goto label_64;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_78_42);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_51]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_78_24);
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_78_23);
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_78_41);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_52]));

DEFLABEL (plain_44)
DEFLABEL (plain_27)
  INTERRUPT_CHECK (26, LABEL_78_9);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_10]));

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_78_36);

DEFLABEL (lambda_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_4]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_80;
  Wrd5 = Wrd9;

DEFLABEL (label_79)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_49]));

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_48])), (Wrd6.pObj));

DEFLABEL (label_41)
  (Wrd5.Obj) = Rvl;
  goto label_79;

INVOKE_INTERFACE_TARGET_0
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
#define LABEL_28 43
#define LABEL_29 45
#define LABEL_31 47
#define LABEL_32 49
#define LABEL_33 51
#define ENVIRONMENT_LABEL_3 87
#define DEBUGGING_LABEL_2 86
#define PURIFICATION_ROOT 85
#define OBJECT_22 84
#define OBJECT_21 83
#define OBJECT_20 82
#define OBJECT_19 81
#define OBJECT_18 80
#define OBJECT_17 79
#define OBJECT_16 78
#define OBJECT_15 77
#define OBJECT_14 76
#define OBJECT_13 75
#define OBJECT_12 74
#define OBJECT_11 73
#define OBJECT_10 72
#define OBJECT_9 71
#define OBJECT_8 70
#define OBJECT_7 69
#define OBJECT_6 68
#define OBJECT_5 67
#define OBJECT_4 66
#define OBJECT_3 65
#define OBJECT_2 64
#define OBJECT_1 63
#define OBJECT_0 62
#define FREE_REFERENCE_1 53
#define FREE_REFERENCE_0 54
#define GLOBAL_EXECUTE_CACHE_12 56
#define GLOBAL_EXECUTE_CACHE_8 58
#define GLOBAL_EXECUTE_CACHE_5 60
#define FREE_REFERENCES_LABEL_0 52
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
unpars_so_1ef18db4c84db14f (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
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
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_29;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto Z__make_unparser_table_34;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_18;

    case 13:
      current_block = (Rpc - LABEL_24);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_23;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto continuation_19;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_24;

    case 18:
      current_block = (Rpc - LABEL_30);
      goto label_32;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto make_unparser_state_35;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_26;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto continuation_25;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto label_37;

    case 23:
      current_block = (Rpc - LABEL_32);
      goto label_38;

    case 24:
      current_block = (Rpc - LABEL_33);
      goto expression_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_28)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_32])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_38)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_37)
  {
    static const short sections [] =
      {
	0,
	2,
	2,
	1,
	2,
	1,
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
	1,
	1,
	2,
	3,
	2,
	2,
	2,
	1,
	2,
	1,
	1,
	2,
	2,
	1,
	2,
	2,
	2,
	0,
	2,
	2,
	1,
	2,
	1,
	1,
	2,
	2,
	2,
	1,
	1,
	2,
	2,
	2,
	2,
	1,
	2,
	2,
	2,
	1,
	2,
	3,
	2,
	1,
	1,
	1,
	3,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	2,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 78)
      goto label_36;
    blocks = (current_block [OBJECT_22]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_31])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_36)
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
  (Wrd16.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_46;
  Wrd11 = Wrd15;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_44;
  Wrd11 = Wrd15;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
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
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_42;
  Wrd11 = Wrd15;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_40;
  Wrd11 = Wrd15;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_20]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd12.pObj));

DEFLABEL (label_32)
  (Wrd11.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd12.pObj));

DEFLABEL (label_31)
  (Wrd11.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_30)
  (Wrd11.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_29)
  (Wrd11.Obj) = Rvl;
  goto label_45;

DEFLABEL (Z__make_unparser_table_34)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (Z__make_unparser_table_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd7.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (make_unparser_state_35)
  CLOSURE_HEADER (LABEL_26);

DEFLABEL (make_unparser_state_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_unpars_so_1ef18db4c84db14f [78] =
  {
    { "unpars_so_code_1", 31, unpars_so_code_1 },
    { "unpars_so_code_2", 34, unpars_so_code_2 },
    { "unpars_so_code_3", 1, unpars_so_code_3 },
    { "unpars_so_code_4", 4, unpars_so_code_4 },
    { "unpars_so_code_5", 2, unpars_so_code_5 },
    { "unpars_so_code_6", 1, unpars_so_code_6 },
    { "unpars_so_code_7", 3, unpars_so_code_7 },
    { "unpars_so_code_8", 2, unpars_so_code_8 },
    { "unpars_so_code_9", 3, unpars_so_code_9 },
    { "unpars_so_code_10", 3, unpars_so_code_10 },
    { "unpars_so_code_11", 1, unpars_so_code_11 },
    { "unpars_so_code_12", 1, unpars_so_code_12 },
    { "unpars_so_code_13", 1, unpars_so_code_13 },
    { "unpars_so_code_14", 1, unpars_so_code_14 },
    { "unpars_so_code_15", 4, unpars_so_code_15 },
    { "unpars_so_code_16", 2, unpars_so_code_16 },
    { "unpars_so_code_17", 1, unpars_so_code_17 },
    { "unpars_so_code_18", 8, unpars_so_code_18 },
    { "unpars_so_code_19", 3, unpars_so_code_19 },
    { "unpars_so_code_20", 3, unpars_so_code_20 },
    { "unpars_so_code_21", 6, unpars_so_code_21 },
    { "unpars_so_code_22", 11, unpars_so_code_22 },
    { "unpars_so_code_23", 21, unpars_so_code_23 },
    { "unpars_so_code_24", 6, unpars_so_code_24 },
    { "unpars_so_code_25", 3, unpars_so_code_25 },
    { "unpars_so_code_26", 2, unpars_so_code_26 },
    { "unpars_so_code_27", 2, unpars_so_code_27 },
    { "unpars_so_code_28", 2, unpars_so_code_28 },
    { "unpars_so_code_29", 2, unpars_so_code_29 },
    { "unpars_so_code_30", 5, unpars_so_code_30 },
    { "unpars_so_code_31", 4, unpars_so_code_31 },
    { "unpars_so_code_32", 6, unpars_so_code_32 },
    { "unpars_so_code_33", 20, unpars_so_code_33 },
    { "unpars_so_code_34", 8, unpars_so_code_34 },
    { "unpars_so_code_35", 4, unpars_so_code_35 },
    { "unpars_so_code_36", 3, unpars_so_code_36 },
    { "unpars_so_code_37", 2, unpars_so_code_37 },
    { "unpars_so_code_38", 15, unpars_so_code_38 },
    { "unpars_so_code_39", 3, unpars_so_code_39 },
    { "unpars_so_code_40", 1, unpars_so_code_40 },
    { "unpars_so_code_41", 3, unpars_so_code_41 },
    { "unpars_so_code_42", 4, unpars_so_code_42 },
    { "unpars_so_code_43", 11, unpars_so_code_43 },
    { "unpars_so_code_44", 32, unpars_so_code_44 },
    { "unpars_so_code_45", 2, unpars_so_code_45 },
    { "unpars_so_code_46", 7, unpars_so_code_46 },
    { "unpars_so_code_47", 8, unpars_so_code_47 },
    { "unpars_so_code_48", 38, unpars_so_code_48 },
    { "unpars_so_code_49", 11, unpars_so_code_49 },
    { "unpars_so_code_50", 8, unpars_so_code_50 },
    { "unpars_so_code_51", 7, unpars_so_code_51 },
    { "unpars_so_code_52", 4, unpars_so_code_52 },
    { "unpars_so_code_53", 3, unpars_so_code_53 },
    { "unpars_so_code_54", 18, unpars_so_code_54 },
    { "unpars_so_code_55", 6, unpars_so_code_55 },
    { "unpars_so_code_56", 7, unpars_so_code_56 },
    { "unpars_so_code_57", 8, unpars_so_code_57 },
    { "unpars_so_code_58", 9, unpars_so_code_58 },
    { "unpars_so_code_59", 13, unpars_so_code_59 },
    { "unpars_so_code_60", 22, unpars_so_code_60 },
    { "unpars_so_code_61", 3, unpars_so_code_61 },
    { "unpars_so_code_62", 2, unpars_so_code_62 },
    { "unpars_so_code_63", 5, unpars_so_code_63 },
    { "unpars_so_code_64", 6, unpars_so_code_64 },
    { "unpars_so_code_65", 2, unpars_so_code_65 },
    { "unpars_so_code_66", 2, unpars_so_code_66 },
    { "unpars_so_code_67", 11, unpars_so_code_67 },
    { "unpars_so_code_68", 7, unpars_so_code_68 },
    { "unpars_so_code_69", 6, unpars_so_code_69 },
    { "unpars_so_code_70", 34, unpars_so_code_70 },
    { "unpars_so_code_71", 3, unpars_so_code_71 },
    { "unpars_so_code_72", 3, unpars_so_code_72 },
    { "unpars_so_code_73", 3, unpars_so_code_73 },
    { "unpars_so_code_74", 3, unpars_so_code_74 },
    { "unpars_so_code_75", 14, unpars_so_code_75 },
    { "unpars_so_code_76", 2, unpars_so_code_76 },
    { "unpars_so_code_77", 18, unpars_so_code_77 },
    { "unpars_so_code_78", 32, unpars_so_code_78 }
  };

int
decl_unpars_so_1ef18db4c84db14f (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_unpars_so_1ef18db4c84db14f);
  return (0);
}

DECLARE_COMPILED_CODE ("unpars.so", 25, decl_unpars_so_1ef18db4c84db14f, unpars_so_1ef18db4c84db14f)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_unpars_so_data_1ef18db4c84db14f [13835] =
  "\xbf\x01\xb8\x01\xd1\x1a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x07"
  "\x02\x06\x0f\x0f\x0d\xb9\x0d\xba\x0d\xbb\x0d\xbc\x0d\xbd\x0d\xbe"
  "\x0d\xbf\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x25\x0d\x1c\x0d\x1b\x0d\x1c\x0d"
  "\x0d\x1b\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82"
  "\x88\xc1\x1c\xc1\x1c\x0d\x1c\x0d\x1c\x0d\x0d\x1c\x0d\x1c\x0d\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x0d\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x08\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x83\x88\xc2\x1c\x81\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x84\x88\x07\x1b\x80\xc1\x1c\x0e\x1c\x24\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x1d\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x06"
  "\x1d\x0c\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x1b\x81\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x1d\x1b"
  "\x81\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c"
  "\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x81"
  "\x0d\x1c\x1b\x25\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x81\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x0d\x1c"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x83\x84\x81\x1b\x82\x0d\x1c\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x82\x80\x1b\x84\x1d\x1b\x24\x28\x0d\x28\x0d\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x1b\x81\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x25\x1b\x1b\x1b\x1b\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x1b\x24\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x0c\x1b\x24\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x0f\x0f\x0c\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x08"
  "\x8d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x0d\x1c\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x24\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x1d\x0c"
  "\x0c\x0c\x0c\x0c\x1d\x0c\x07\x0c\x08\x1b\x0d\x0d\x0d\x0d\x24\x28"
  "\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\xb2\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0f\x0c\x0d\x1c\x0f\x0d\x1c\x0d\x1c\x1b\x1b\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0f\x0f\xc2\x1c\x80\x0c\xc1\x1c\x0d\x1b\x1b"
  "\x0d\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0f\x1b\x80\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x0f\x1b\x80\x1b\x1b\x1b"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0c\x1b\x1b\x24\x28"
  "\x1b\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x1b\x0f"
  "\x0c\x80\x0f\x1b\x1b\x1b\xb7\xb1\x24\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x0f\xc2\x1d\xc1\x0c\x1b\x24"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b"
  "\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x80\xc1\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80"
  "\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0f\x0c\x0f\x81\x80\x0c\x0c\x1b\x1b\xb5\x24"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x07\x1b\x02\x0c\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x1b\x1b\x24"
  "\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b"
  "\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x82\x0f\x1b\x24\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x1b\x25\xb6\x1b\x1b\x24"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0f\x0c\x1d\x08\x1b\x1b\x1b\x1b"
  "\xb5\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x0c\x0d"
  "\x0c\x0d\x0c\x0d\x08\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\xb3\x1b\x1b\x1b\x1b\x24\x28\x0d\x28\x1b\x28\xb3\x28\x0d\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x0d\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x1b\x24\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0f\x0f\x0f"
  "\x0d\xc1\x07\x0d\x1b\x24\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28"
  "\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x02\x0c\x02\x0c\x82\x02\x06\x07\x02"
  "\x02\x1b\x02\x1b\xb4\x24\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x81\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x1d\x0f\x07\x81\xc2\x80\x06\x0c\xc1\xb5\x1b"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x0d\x0d\x1b\x1b\x1b\x1b"
  "\x1b\x24\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x0d\x1c\x88\x1b\x1b\x88\x1b\x1b\x88\x1b"
  "\x1b\x88\x1b\x1b\x88\x1b\x0d\x1c\x88\x1b\x1b\x88\x1b\x1b\x88\x1b"
  "\x1b\x88\x0d\x1b\x88\x0d\x1b\x88\x08\x14\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1e\x1b\x2a\x1e\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb3\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb1\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\xb2\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d"
  "\x1b\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x0d\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x17\x1b\x0d\x0d\x0d\x0d\x9b\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x9b\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x08\x8b\x1b\x1b"
  "\x0d\x0d\x1b\x1b\x1b\x1b\x9e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x9e\x1b\x0d\x1b\x2a\xc3\x0d\x1c\x0c\x0d\x08"
  "\x88\x08\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb7\xb6"
  "\xb5\xb4\x0d\x17\x1b\x2a\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e"
  "\x1e\x1e\x1e\x1e\x1e\x1b\x2a\x17\x28\x0d\x28\x0d\x28\x0d\x26\x1b"
  "\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f"
  "\x2e\x2f\x75\x6e\x70\x61\x72\x73\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x02\x0b\x01\x23\x01\x5d\x12\x73\x74\x72\x69\x6e\x67\x2d"
  "\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x73\x15\x68\x6f\x6f\x6b\x2f"
  "\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x18"
  "\x68\x6f\x6f\x6b\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x11\x2a\x75\x6e\x70\x61\x72\x73\x65"
  "\x72\x2d\x72\x61\x64\x69\x78\x2a\x1e\x2a\x75\x6e\x70\x61\x72\x73"
  "\x65\x72\x2d\x6c\x69\x73\x74\x2d\x62\x72\x65\x61\x64\x74\x68\x2d"
  "\x6c\x69\x6d\x69\x74\x2a\x1c\x2a\x75\x6e\x70\x61\x72\x73\x65\x72"
  "\x2d\x6c\x69\x73\x74\x2d\x64\x65\x70\x74\x68\x2d\x6c\x69\x6d\x69"
  "\x74\x2a\x1f\x2a\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x72"
  "\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x2d\x6c\x69\x6d\x69\x74"
  "\x2a\x1e\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x73\x2d\x62\x79\x2d\x6e\x61\x6d\x65\x3f\x2a\x09"
  "\x26\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x75\x6e\x69\x6e\x74\x65"
  "\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x2d\x62\x79\x2d"
  "\x6e\x61\x6d\x65\x3f\x2a\x0a\x24\x2a\x75\x6e\x70\x61\x72\x73\x65"
  "\x2d\x77\x69\x74\x68\x2d\x6d\x61\x78\x69\x6d\x75\x6d\x2d\x72\x65"
  "\x61\x64\x61\x62\x69\x6c\x69\x74\x79\x3f\x2a\x0b\x24\x2a\x75\x6e"
  "\x70\x61\x72\x73\x65\x2d\x63\x6f\x6d\x70\x6f\x75\x6e\x64\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d\x65\x73\x3f\x2a"
  "\x0c\x16\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x77\x69\x74\x68\x2d"
  "\x64\x61\x74\x75\x6d\x3f\x2a\x0d\x21\x2a\x75\x6e\x70\x61\x72\x73"
  "\x65\x2d\x61\x62\x62\x72\x65\x76\x69\x61\x74\x65\x2d\x71\x75\x6f"
  "\x74\x61\x74\x69\x6f\x6e\x73\x3f\x2a\x0e\x1d\x73\x79\x73\x74\x65"
  "\x6d\x2d\x67\x6c\x6f\x62\x61\x6c\x2d\x75\x6e\x70\x61\x72\x73\x65"
  "\x72\x2d\x74\x61\x62\x6c\x65\x0f\x11\x2a\x75\x6e\x70\x61\x72\x73"
  "\x65\x72\x2d\x74\x61\x62\x6c\x65\x2a\x10\x19\x2a\x64\x65\x66\x61"
  "\x75\x6c\x74\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61"
  "\x74\x65\x2a\x11\x18\x6e\x6f\x6e\x2d\x63\x61\x6e\x6f\x6e\x2d\x73"
  "\x79\x6d\x62\x6f\x6c\x2d\x71\x75\x6f\x74\x65\x64\x12\x14\x63\x61"
  "\x6e\x6f\x6e\x2d\x73\x79\x6d\x62\x6f\x6c\x2d\x71\x75\x6f\x74\x65"
  "\x64\x13\x13\x0f\x75\x6e\x70\x61\x72\x73\x65\x2d\x73\x79\x6d\x62"
  "\x6f\x6c\x14\x15\x63\x68\x61\x72\x2d\x73\x65\x74\x3a\x6e\x6f\x74"
  "\x2d\x67\x72\x61\x70\x68\x69\x63\x0f\x17\x63\x68\x61\x72\x2d\x73"
  "\x65\x74\x2f\x73\x79\x6d\x62\x6f\x6c\x2d\x71\x75\x6f\x74\x65\x73"
  "\x15\x19\x63\x68\x61\x72\x2d\x73\x65\x74\x2f\x61\x74\x6f\x6d\x2d"
  "\x64\x65\x6c\x69\x6d\x69\x74\x65\x72\x73\x14\x63\x68\x61\x72\x2d"
  "\x73\x65\x74\x3a\x75\x70\x70\x65\x72\x2d\x63\x61\x73\x65\x12\x08"
  "\x04\x09\x63\x68\x61\x72\x2d\x73\x65\x74\x02\x22\x6d\x61\x6b\x65"
  "\x2d\x73\x79\x73\x74\x65\x6d\x2d\x67\x6c\x6f\x62\x61\x6c\x2d\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x16\x04\x0f"
  "\x63\x68\x61\x72\x2d\x73\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x04\x38"
  "\x40\x81\x81\x02\x37\x3e\x81\x81\x02\x36\x3c\x81\x85\x02\x35\x3a"
  "\x81\x83\x02\x34\x38\x81\x81\x02\x33\x36\x81\x81\x02\x32\x34\x81"
  "\x85\x02\x31\x32\x81\x83\x02\x30\x30\x81\x81\x02\x2f\x2e\x81\x81"
  "\x02\x2e\x2c\x81\x81\x02\x2d\x2a\x81\x81\x02\x2c\x28\x81\x81\x02"
  "\x2b\x26\x81\x85\x02\x2a\x24\x81\x83\x02\x29\x22\x81\x81\x02\x28"
  "\x20\x81\x81\x02\x27\x1e\x81\x81\x02\x26\x1c\x81\x81\x02\x25\x1a"
  "\x81\x81\x02\x24\x18\x81\x81\x02\x23\x16\x81\x81\x02\x22\x14\x81"
  "\x81\x02\x21\x12\x81\x81\x02\x20\x10\x81\x81\x02\x1f\x0e\x81\x81"
  "\x02\x1e\x0c\x81\x81\x02\x1d\x0a\x81\x81\x02\x1c\x08\x81\x81\x02"
  "\x1b\x06\x81\x81\x02\x1a\x04\x82\x02\x3f\x6a\x17\x02\x04\x63\x64"
  "\x72\x18\x04\x63\x61\x72\x19\x0b\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x1a\x07\x62\x69\x67\x6e\x75\x6d\x1b\x0a\x63\x68\x61\x72"
  "\x61\x63\x74\x65\x72\x0f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65"
  "\x6e\x74\x72\x79\x1c\x08\x63\x6f\x6d\x70\x6c\x65\x78\x1d\x09\x63"
  "\x6f\x6e\x73\x74\x61\x6e\x74\x0b\x64\x65\x66\x69\x6e\x69\x74\x69"
  "\x6f\x6e\x1e\x07\x65\x6e\x74\x69\x74\x79\x1f\x13\x65\x78\x74\x65"
  "\x6e\x64\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x20\x07"
  "\x66\x6c\x6f\x6e\x75\x6d\x21\x10\x69\x6e\x74\x65\x72\x6e\x65\x64"
  "\x2d\x73\x79\x6d\x62\x6f\x6c\x22\x07\x6c\x61\x6d\x62\x64\x61\x23"
  "\x05\x6c\x69\x73\x74\x24\x10\x6e\x65\x67\x61\x74\x69\x76\x65\x2d"
  "\x66\x69\x78\x6e\x75\x6d\x25\x06\x66\x61\x6c\x73\x65\x10\x70\x6f"
  "\x73\x69\x74\x69\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d\x26\x0a\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x27\x0a\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x28\x07\x72\x61\x74\x6e\x75\x6d\x07\x72\x65\x63\x6f"
  "\x72\x64\x0f\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73"
  "\x73\x29\x07\x73\x74\x72\x69\x6e\x67\x2a\x12\x75\x6e\x69\x6e\x74"
  "\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x2b\x09\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x2c\x07\x76\x65\x63\x74\x6f\x72\x2d\x0a"
  "\x76\x65\x63\x74\x6f\x72\x2d\x31\x62\x10\x75\x6e\x70\x61\x72\x73"
  "\x65\x2f\x64\x65\x66\x61\x75\x6c\x74\x2e\x13\x75\x6e\x70\x61\x72"
  "\x73\x65\x2f\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2f\x0f\x75"
  "\x6e\x70\x61\x72\x73\x65\x2f\x76\x65\x63\x74\x6f\x72\x30\x11\x75"
  "\x6e\x70\x61\x72\x73\x65\x2f\x76\x61\x72\x69\x61\x62\x6c\x65\x31"
  "\x1a\x75\x6e\x70\x61\x72\x73\x65\x2f\x75\x6e\x69\x6e\x74\x65\x72"
  "\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x32\x0f\x75\x6e\x70\x61"
  "\x72\x73\x65\x2f\x73\x74\x72\x69\x6e\x67\x33\x17\x75\x6e\x70\x61"
  "\x72\x73\x65\x2f\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65"
  "\x73\x73\x34\x0f\x75\x6e\x70\x61\x72\x73\x65\x2f\x72\x65\x63\x6f"
  "\x72\x64\x35\x0f\x75\x6e\x70\x61\x72\x73\x65\x2f\x6e\x75\x6d\x62"
  "\x65\x72\x36\x1b\x75\x6e\x70\x61\x72\x73\x65\x2f\x63\x6f\x6d\x70"
  "\x6f\x75\x6e\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x37\x1c"
  "\x75\x6e\x70\x61\x72\x73\x65\x2f\x70\x72\x69\x6d\x69\x74\x69\x76"
  "\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x38\x0e\x75\x6e\x70"
  "\x61\x72\x73\x65\x2f\x66\x61\x6c\x73\x65\x39\x0d\x75\x6e\x70\x61"
  "\x72\x73\x65\x2f\x70\x61\x69\x72\x3a\x0f\x75\x6e\x70\x61\x72\x73"
  "\x65\x2f\x6c\x61\x6d\x62\x64\x61\x3b\x18\x75\x6e\x70\x61\x72\x73"
  "\x65\x2f\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f"
  "\x6c\x3c\x0f\x75\x6e\x70\x61\x72\x73\x65\x2f\x66\x6c\x6f\x6e\x75"
  "\x6d\x3d\x0f\x75\x6e\x70\x61\x72\x73\x65\x2f\x65\x6e\x74\x69\x74"
  "\x79\x3e\x13\x75\x6e\x70\x61\x72\x73\x65\x2f\x64\x65\x66\x69\x6e"
  "\x69\x74\x69\x6f\x6e\x3f\x11\x75\x6e\x70\x61\x72\x73\x65\x2f\x63"
  "\x6f\x6e\x73\x74\x61\x6e\x74\x40\x17\x75\x6e\x70\x61\x72\x73\x65"
  "\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74\x72\x79\x41"
  "\x12\x75\x6e\x70\x61\x72\x73\x65\x2f\x63\x68\x61\x72\x61\x63\x74"
  "\x65\x72\x42\x13\x75\x6e\x70\x61\x72\x73\x65\x2f\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x43\x17\x03\x14\x6d\x61\x6b\x65\x2d\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x44\x04\x09"
  "\x66\x6f\x72\x2d\x65\x61\x63\x68\x05\x1a\x75\x6e\x70\x61\x72\x73"
  "\x65\x72\x2d\x74\x61\x62\x6c\x65\x2f\x73\x65\x74\x2d\x65\x6e\x74"
  "\x72\x79\x21\x45\x04\x5a\x46\x81\x87\x02\x59\x44\x81\x87\x02\x58"
  "\x42\x81\x87\x02\x57\x40\x81\x85\x02\x56\x3e\x81\x83\x02\x55\x3c"
  "\x81\x87\x02\x54\x3a\x81\x87\x02\x53\x38\x81\x87\x02\x52\x36\x81"
  "\x87\x02\x51\x34\x81\x87\x02\x50\x32\x81\x87\x02\x4f\x30\x81\x87"
  "\x02\x4e\x2e\x81\x87\x02\x4d\x2c\x81\x87\x02\x4c\x2a\x81\x87\x02"
  "\x4b\x28\x81\x87\x02\x4a\x26\x81\x87\x02\x49\x24\x81\x87\x02\x48"
  "\x22\x81\x87\x02\x47\x20\x81\x87\x02\x46\x1e\x81\x87\x02\x45\x1c"
  "\x81\x87\x02\x44\x1a\x81\x87\x02\x43\x18\x81\x87\x02\x42\x16\x81"
  "\x87\x02\x41\x14\x81\x87\x02\x40\x12\x81\x87\x02\x3f\x10\x81\x87"
  "\x02\x3e\x0e\x81\x87\x02\x3d\x0c\x81\x87\x02\x3c\x0a\x81\x85\x02"
  "\x3b\x08\x81\x81\x02\x3a\x06\x81\x83\x02\x39\x04\x82\x02\x45\x83"
  "\x01\x46\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x47"
  "\x5b\x04\x83\x04\x03\x48\x02\x47\x0f\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x49\x07\x2e\x74\x61\x67\x2e\x31\x4a"
  "\x02\x5f\x0a\x81\x85\x02\x5e\x08\x81\x83\x02\x5d\x06\x81\x83\x02"
  "\x5c\x04\x83\x04\x09\x12\x4b\x02\x02\x03\x10\x75\x6e\x70\x61\x72"
  "\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x3f\x4c\x04\x19\x65\x72\x72"
  "\x6f\x72\x3a\x6e\x6f\x74\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d"
  "\x74\x61\x62\x6c\x65\x4d\x03\x61\x06\x81\x85\x02\x60\x04\x84\x04"
  "\x05\x0e\x4e\x02\x08\x0f\x75\x6e\x70\x61\x72\x73\x65\x72\x20\x74"
  "\x61\x62\x6c\x65\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e"
  "\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x4f"
  "\x02\x62\x04\x84\x04\x03\x0c\x50\x02\x08\x02\x1a\x6d\x69\x63\x72"
  "\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70\x65\x2f\x63\x6f\x64\x65\x2d"
  "\x6c\x69\x6d\x69\x74\x03\x15\x25\x6d\x61\x6b\x65\x2d\x75\x6e\x70"
  "\x61\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x51\x04\x0c\x6d\x61"
  "\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x04\x65\x08\x81\x87\x02\x64"
  "\x06\x81\x83\x02\x63\x04\x83\x04\x07\x11\x52\x02\x09\x47\x03\x51"
  "\x02\x67\x06\x81\x83\x02\x66\x04\x83\x04\x05\x0d\x53\x02\x0a\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x54\x47\x03\x0f\x6d\x69"
  "\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70\x65\x55\x02\x6a\x08"
  "\x81\x85\x02\x69\x06\x81\x85\x02\x68\x04\x84\x06\x07\x10\x56\x02"
  "\x0b\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x02\x47\x03"
  "\x55\x02\x6d\x08\x81\x87\x02\x6c\x06\x81\x87\x02\x6b\x04\x85\x08"
  "\x07\x11\x55\x02\x0c\x47\x6e\x04\x83\x04\x03\x57\x02\x0d\x47\x6f"
  "\x04\x83\x04\x03\x58\x02\x0e\x47\x70\x04\x83\x04\x03\x59\x02\x0f"
  "\x47\x71\x04\x83\x04\x03\x5a\x02\x10\x47\x49\x07\x2e\x74\x61\x67"
  "\x2e\x32\x49\x02\x75\x0a\x81\x85\x02\x74\x08\x81\x83\x02\x73\x06"
  "\x81\x83\x02\x72\x04\x83\x04\x09\x12\x5b\x02\x11\x02\x03\x10\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61\x74\x65\x3f\x5c\x04"
  "\x19\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x75\x6e\x70\x61\x72"
  "\x73\x65\x72\x2d\x73\x74\x61\x74\x65\x5d\x03\x77\x06\x81\x85\x02"
  "\x76\x04\x84\x04\x05\x0e\x5e\x02\x12\x08\x0f\x75\x6e\x70\x61\x72"
  "\x73\x65\x72\x20\x73\x74\x61\x74\x65\x05\x4f\x02\x78\x04\x84\x04"
  "\x03\x0c\x4f\x02\x13\x02\x47\x1c\x77\x69\x74\x68\x2d\x63\x75\x72"
  "\x72\x65\x6e\x74\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x73\x74"
  "\x61\x74\x65\x5f\x11\x02\x11\x02\x04\x19\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61"
  "\x74\x65\x60\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75"
  "\x69\x64\x2d\x62\x69\x6e\x64\x61\x03\x80\x01\x12\x81\x83\x02\x7f"
  "\x10\x81\x85\x02\x7e\x0e\x81\x83\x02\x7d\x0c\x81\x83\x02\x7c\x0a"
  "\x81\x85\x02\x7b\x08\x81\x83\x02\x7a\x06\x81\x85\x02\x79\x04\x84"
  "\x06\x11\x21\x62\x02\x14\x47\x0d\x75\x6e\x70\x61\x72\x73\x65\x2d"
  "\x63\x68\x61\x72\x63\x04\x60\x04\x0b\x77\x72\x69\x74\x65\x2d\x63"
  "\x68\x61\x72\x03\x83\x01\x08\x81\x85\x02\x82\x01\x06\x81\x85\x02"
  "\x81\x01\x04\x84\x06\x07\x12\x64\x02\x15\x47\x0f\x75\x6e\x70\x61"
  "\x72\x73\x65\x2d\x73\x74\x72\x69\x6e\x67\x65\x04\x60\x04\x0d\x77"
  "\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x03\x86\x01\x08\x81"
  "\x85\x02\x85\x01\x06\x81\x85\x02\x84\x01\x04\x84\x06\x07\x12\x66"
  "\x02\x16\x47\x0f\x75\x6e\x70\x61\x72\x73\x65\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x67\x04\x60\x07\x18\x75\x6e\x70\x61\x72\x73\x65\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x2f\x69\x6e\x74\x65\x72\x6e\x61\x6c\x68\x03"
  "\x8c\x01\x0e\x81\x8b\x02\x8b\x01\x0c\x81\x8b\x02\x8a\x01\x0a\x81"
  "\x87\x02\x89\x01\x08\x81\x85\x02\x88\x01\x06\x81\x85\x02\x87\x01"
  "\x04\x84\x06\x0d\x1b\x69\x02\x17\x47\x08\x11\x02\x04\x16\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x02\x19\x6e\x65\x61\x72\x65\x73\x74\x2d\x72\x65\x70"
  "\x6c\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x07\x68\x03"
  "\x4c\x05\x97\x01\x18\x81\x8d\x02\x96\x01\x16\x81\x8d\x02\x95\x01"
  "\x14\x81\x8d\x02\x94\x01\x12\x81\x8d\x02\x93\x01\x10\x81\x8d\x02"
  "\x92\x01\x0e\x81\x8d\x02\x91\x01\x0c\x86\x0a\x90\x01\x0a\x81\x8b"
  "\x02\x8f\x01\x08\x81\x8d\x02\x8e\x01\x06\x81\x8b\x02\x8d\x01\x04"
  "\x81\x8d\x02\x17\x2a\x6a\x02\x18\x02\x47\x10\x0e\x2a\x6f\x75\x74"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x2a\x47\x0d\x2a\x6c\x69\x73\x74"
  "\x2d\x64\x65\x70\x74\x68\x2a\x6b\x0c\x2a\x73\x6c\x61\x73\x68\x69"
  "\x66\x79\x3f\x2a\x6c\x0e\x2a\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x2a\x6d\x11\x2a\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74"
  "\x61\x62\x6c\x65\x2a\x6e\x06\x47\x6b\x6c\x6d\x6e\x06\x04\x17\x72"
  "\x65\x70\x6c\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d"
  "\x76\x61\x6c\x75\x65\x6f\x04\x19\x67\x75\x61\x72\x61\x6e\x74\x65"
  "\x65\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65"
  "\x70\x05\x61\x03\x10\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x71\x05\xac\x01\x2c\x81\x83\x02\xab\x01\x2a\x81"
  "\x85\x02\xaa\x01\x28\x81\x83\x02\xa9\x01\x26\x81\x83\x02\xa8\x01"
  "\x24\x81\x85\x02\xa7\x01\x22\x81\x83\x02\xa6\x01\x20\x81\x83\x02"
  "\xa5\x01\x1e\x81\x85\x02\xa4\x01\x1c\x81\x83\x02\xa3\x01\x1a\x81"
  "\x83\x02\xa2\x01\x18\x81\x85\x02\xa1\x01\x16\x81\x83\x02\xa0\x01"
  "\x14\x81\x83\x02\x9f\x01\x12\x81\x85\x02\x9e\x01\x10\x81\x83\x02"
  "\x9d\x01\x0e\x81\x83\x02\x9c\x01\x0c\x81\x83\x02\x9b\x01\x0a\x81"
  "\x8b\x02\x9a\x01\x08\x81\x8d\x02\x99\x01\x06\x81\x8b\x02\x98\x01"
  "\x04\x87\x0c\x2b\x47\x72\x02\x19\x6d\x6c\x6b\x47\x05\x06\x14\x6d"
  "\x61\x6b\x65\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61"
  "\x74\x65\x73\x02\xb2\x01\x0e\x81\x87\x02\xb1\x01\x0c\x81\x8f\x02"
  "\xb0\x01\x0a\x81\x8d\x02\xaf\x01\x08\x81\x8b\x02\xae\x01\x06\x81"
  "\x89\x02\xad\x01\x04\x84\x06\x0d\x18\x74\x02\x1a\x54\x6e\x02\xb5"
  "\x01\x08\x81\x83\x02\xb4\x01\x06\x81\x83\x02\xb3\x01\x04\x83\x04"
  "\x07\x0d\x75\x02\x1b\x47\x02\x04\x17\x6f\x75\x74\x70\x75\x74\x2d"
  "\x70\x6f\x72\x74\x2f\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x76"
  "\x02\xb7\x01\x06\x81\x83\x02\xb6\x01\x04\x83\x04\x05\x0d\x77\x02"
  "\x1c\x47\x02\x04\x19\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74"
  "\x2f\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x78\x02\xb9"
  "\x01\x06\x81\x83\x02\xb8\x01\x04\x83\x04\x05\x0d\x79\x02\x1d\x47"
  "\x02\x06\x1c\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x77"
  "\x72\x69\x74\x65\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x7a\x02"
  "\xbb\x01\x06\x81\x87\x02\xba\x01\x04\x85\x08\x05\x0d\x7b\x02\x1e"
  "\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x64\x61\x74\x75\x6d\x7c\x03\x0d"
  "\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x68\x65\x78\x7d\x02\xbd\x01"
  "\x06\x81\x83\x02\xbc\x01\x04\x83\x04\x05\x0c\x7e\x02\x1f\x11\x03"
  "\x23\x78\x47\x02\x04\x78\x04\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e"
  "\x73\x74\x72\x69\x6e\x67\x7f\x03\xc2\x01\x0c\x81\x85\x02\xc1\x01"
  "\x0a\x81\x83\x02\xc0\x01\x08\x81\x83\x02\xbf\x01\x06\x81\x87\x02"
  "\xbe\x01\x04\x83\x04\x0b\x17\x80\x01\x02\x20\x47\x02\x03\x05\x68"
  "\x61\x73\x68\x81\x01\x04\x78\x03\x7f\x04\xc6\x01\x0a\x81\x87\x02"
  "\xc5\x01\x08\x81\x85\x02\xc4\x01\x06\x81\x83\x02\xc3\x01\x04\x83"
  "\x04\x09\x15\x82\x01\x02\x21\x03\x23\x40\x47\x02\x04\x78\x03\x81"
  "\x01\x03\x7f\x04\xcc\x01\x0e\x81\x87\x02\xcb\x01\x0c\x81\x85\x02"
  "\xca\x01\x0a\x81\x83\x02\xc9\x01\x08\x81\x83\x02\xc8\x01\x06\x81"
  "\x87\x02\xc7\x01\x04\x83\x04\x0d\x1a\x83\x01\x02\x22\x7c\x01\x21"
  "\x01\x5e\x03\x23\x5b\x0b\x47\x0d\x04\x04\x78\x03\x17\x2a\x75\x6e"
  "\x70\x61\x72\x73\x65\x2d\x72\x65\x61\x64\x61\x62\x6c\x65\x2d\x68"
  "\x61\x73\x68\x84\x01\x03\x71\x04\x76\x03\x81\x01\x03\x7f\x03\x7d"
  "\x08\xe0\x01\x2a\x81\x89\x02\xdf\x01\x28\x81\x8b\x02\xde\x01\x26"
  "\x81\x8b\x02\xdd\x01\x24\x81\x89\x02\xdc\x01\x22\x81\x87\x02\xdb"
  "\x01\x20\x81\x87\x02\xda\x01\x1e\x81\x87\x02\xd9\x01\x1c\x81\x8b"
  "\x02\xd8\x01\x1a\x81\x8b\x02\xd7\x01\x18\x81\x8b\x02\xd6\x01\x16"
  "\x81\x87\x02\xd5\x01\x14\x81\x87\x02\xd4\x01\x12\x81\x87\x02\xd3"
  "\x01\x10\x81\x87\x02\xd2\x01\x0e\x81\x87\x02\xd1\x01\x0c\x81\x8b"
  "\x02\xd0\x01\x0a\x81\x87\x02\xcf\x01\x08\x81\x8b\x02\xce\x01\x06"
  "\x81\x87\x02\xcd\x01\x04\x85\x08\x29\x43\x81\x01\x02\x23\x7c\x0c"
  "\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72\x05\x63\x65\x6c\x6c"
  "\x05\x70\x61\x69\x72\x07\x74\x72\x69\x70\x6c\x65\x0a\x71\x75\x61"
  "\x64\x72\x75\x70\x6c\x65\x2d\x1c\x03\x11\x75\x73\x65\x72\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x1c\x03\x0f\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x67\x63\x2d\x74\x79\x70\x65\x04\x05\x6d\x65\x6d"
  "\x71\x05\x17\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x77\x69\x74\x68"
  "\x2d\x62\x72\x61\x63\x6b\x65\x74\x73\x85\x01\x03\x7d\x06\xe8\x01"
  "\x12\x81\x83\x02\xe7\x01\x10\x81\x83\x02\xe6\x01\x0e\x81\x83\x02"
  "\xe5\x01\x0c\x81\x83\x02\xe4\x01\x0a\x81\x87\x02\xe3\x01\x08\x81"
  "\x85\x02\xe2\x01\x06\x81\x83\x02\xe1\x01\x04\x83\x04\x11\x22\x86"
  "\x01\x02\x24\x10\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x2d\x74\x79"
  "\x70\x65\x3a\x03\x1a\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74"
  "\x79\x70\x65\x2f\x63\x6f\x64\x65\x2d\x3e\x6e\x61\x6d\x65\x03\x7f"
  "\x03\x18\x72\x65\x6e\x61\x6d\x65\x2d\x75\x73\x65\x72\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x87\x01\x03\x07\x69\x6e\x74"
  "\x65\x72\x6e\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65"
  "\x6e\x64\x06\xec\x01\x0a\x81\x87\x02\xeb\x01\x08\x81\x85\x02\xea"
  "\x01\x06\x81\x83\x02\xe9\x01\x04\x83\x04\x09\x18\x88\x01\x02\x25"
  "\x18\x1a\x72\x65\x6e\x61\x6d\x65\x64\x2d\x75\x73\x65\x72\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x73\x89\x01\x02\x04\x05"
  "\x61\x73\x73\x71\x02\xef\x01\x08\x81\x83\x02\xee\x01\x06\x81\x85"
  "\x02\xed\x01\x04\x83\x04\x07\x10\x8a\x01\x02\x26\x03\x23\x66\x47"
  "\x02\x04\x78\x03\x2e\x03\xf1\x01\x06\x81\x83\x02\xf0\x01\x04\x83"
  "\x04\x05\x10\x8b\x01\x02\x27\x06\x23\x21\x65\x6f\x66\x0d\x23\x21"
  "\x75\x6e\x73\x70\x65\x63\x69\x66\x69\x63\x02\x07\x23\x21\x72\x65"
  "\x73\x74\x0b\x23\x21\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x06\x23\x21"
  "\x6b\x65\x79\x06\x23\x21\x61\x75\x78\x0a\x23\x21\x64\x65\x66\x61"
  "\x75\x6c\x74\x08\x03\x23\x74\x03\x28\x29\x47\x0f\x6c\x61\x6d\x62"
  "\x64\x61\x2d\x74\x61\x67\x3a\x61\x75\x78\x0f\x6c\x61\x6d\x62\x64"
  "\x61\x2d\x74\x61\x67\x3a\x6b\x65\x79\x14\x6c\x61\x6d\x62\x64\x61"
  "\x2d\x74\x61\x67\x3a\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x10\x6c\x61"
  "\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x72\x65\x73\x74\x06\x04\x78"
  "\x03\x0c\x65\x6f\x66\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x03\x2e\x04"
  "\x80\x02\x20\x81\x83\x02\xff\x01\x1e\x81\x83\x02\xfe\x01\x1c\x81"
  "\x83\x02\xfd\x01\x1a\x81\x83\x02\xfc\x01\x18\x81\x83\x02\xfb\x01"
  "\x16\x81\x83\x02\xfa\x01\x14\x81\x83\x02\xf9\x01\x12\x81\x83\x02"
  "\xf8\x01\x10\x81\x83\x02\xf7\x01\x0e\x81\x83\x02\xf6\x01\x0c\x81"
  "\x83\x02\xf5\x01\x0a\x81\x83\x02\xf4\x01\x08\x81\x83\x02\xf3\x01"
  "\x06\x81\x83\x02\xf2\x01\x04\x83\x04\x1f\x3c\x8c\x01\x02\x28\x29"
  "\x05\x85\x01\x03\x14\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72"
  "\x65\x73\x73\x2f\x6e\x61\x6d\x65\x03\x71\x04\x83\x02\x08\x81\x83"
  "\x02\x82\x02\x06\x81\x83\x02\x81\x02\x04\x83\x04\x07\x12\x29\x02"
  "\x29\x03\x02\x84\x02\x04\x83\x04\x03\x8d\x01\x02\x2a\x2b\x0a\x02"
  "\x05\x85\x01\x03\x14\x03\x87\x02\x08\x81\x83\x02\x86\x02\x06\x81"
  "\x83\x02\x85\x02\x04\x83\x04\x07\x12\x8e\x01\x02\x2b\x03\x09\x6b"
  "\x65\x79\x77\x6f\x72\x64\x3f\x03\x0c\x73\x79\x6d\x62\x6f\x6c\x2d"
  "\x6e\x61\x6d\x65\x03\x10\x6b\x65\x79\x77\x6f\x72\x64\x2d\x3e\x73"
  "\x74\x72\x69\x6e\x67\x03\x15\x75\x6e\x70\x61\x72\x73\x65\x2d\x6b"
  "\x65\x79\x77\x6f\x72\x64\x2d\x6e\x61\x6d\x65\x8f\x01\x03\x14\x75"
  "\x6e\x70\x61\x72\x73\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61"
  "\x6d\x65\x90\x01\x06\x8b\x02\x0a\x81\x83\x02\x8a\x02\x08\x81\x83"
  "\x02\x89\x02\x06\x81\x83\x02\x88\x02\x04\x83\x04\x09\x17\x91\x01"
  "\x02\x2c\x01\x5e\x0b\x23\x5b\x6b\x65\x79\x77\x6f\x72\x64\x20\x07"
  "\x73\x75\x66\x66\x69\x78\x92\x01\x01\x3b\x07\x70\x72\x65\x66\x69"
  "\x78\x93\x01\x17\x2a\x70\x61\x72\x73\x65\x72\x2d\x6b\x65\x79\x77"
  "\x6f\x72\x64\x2d\x73\x74\x79\x6c\x65\x2a\x94\x01\x6d\x47\x03\x04"
  "\x6f\x04\x76\x03\x90\x01\x04\x78\x05\x96\x02\x18\x81\x85\x02\x95"
  "\x02\x16\x81\x85\x02\x94\x02\x14\x81\x85\x02\x93\x02\x12\x81\x85"
  "\x02\x92\x02\x10\x81\x85\x02\x91\x02\x0e\x81\x85\x02\x90\x02\x0c"
  "\x81\x89\x02\x8f\x02\x0a\x81\x89\x02\x8e\x02\x08\x81\x83\x02\x8d"
  "\x02\x06\x81\x87\x02\x8c\x02\x04\x83\x04\x17\x2c\x95\x01\x02\x2d"
  "\x01\x5d\x01\x7d\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x96"
  "\x01\x02\x2e\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74"
  "\x68\x97\x01\x1f\x2a\x70\x61\x72\x73\x65\x72\x2d\x63\x61\x6e\x6f"
  "\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x73"
  "\x3f\x2a\x6d\x47\x18\x63\x68\x61\x72\x2d\x73\x65\x74\x2f\x6e\x75"
  "\x6d\x62\x65\x72\x2d\x6c\x65\x61\x64\x65\x72\x73\x12\x13\x15\x07"
  "\x04\x6f\x03\x14\x6c\x6f\x6f\x6b\x73\x2d\x6c\x69\x6b\x65\x2d\x6b"
  "\x65\x79\x77\x6f\x72\x64\x3f\x15\x04\x78\x03\x0f\x6c\x6f\x6f\x6b"
  "\x73\x2d\x73\x70\x65\x63\x69\x61\x6c\x3f\x98\x01\x04\x09\x73\x74"
  "\x72\x69\x6e\x67\x3d\x3f\x03\x0f\x73\x74\x72\x69\x6e\x67\x2d\x3e"
  "\x6e\x75\x6d\x62\x65\x72\x04\x11\x63\x68\x61\x72\x2d\x73\x65\x74"
  "\x2d\x6d\x65\x6d\x62\x65\x72\x3f\x04\x76\x04\x1d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78\x74\x2d\x63\x68\x61"
  "\x72\x2d\x69\x6e\x2d\x73\x65\x74\x06\x20\x73\x75\x62\x73\x74\x72"
  "\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78\x74\x2d\x63\x68"
  "\x61\x72\x2d\x69\x6e\x2d\x73\x65\x74\x99\x01\x06\x7a\x0c\xb6\x02"
  "\x42\x81\x87\x02\xb5\x02\x40\x81\x8b\x02\xb4\x02\x3e\x81\x89\x02"
  "\xb3\x02\x3c\x81\x87\x02\xb2\x02\x3a\x81\x8b\x02\xb1\x02\x38\x81"
  "\x87\x02\xb0\x02\x36\x81\x8f\x02\xaf\x02\x34\x81\x87\x02\xae\x02"
  "\x32\x81\x85\x02\xad\x02\x30\x81\x83\x02\xac\x02\x2e\x81\x83\x02"
  "\xab\x02\x2c\x81\x87\x02\xaa\x02\x2a\x81\x85\x02\xa9\x02\x28\x81"
  "\x85\x02\xa8\x02\x26\x81\x83\x02\xa7\x02\x24\x81\x85\x02\xa6\x02"
  "\x22\x81\x85\x02\xa5\x02\x20\x81\x85\x02\xa4\x02\x1e\x81\x87\x02"
  "\xa3\x02\x1c\x81\x87\x02\xa2\x02\x1a\x81\x85\x02\xa1\x02\x18\x81"
  "\x83\x02\xa0\x02\x16\x81\x83\x02\x9f\x02\x14\x81\x83\x02\x9e\x02"
  "\x12\x81\x83\x02\x9d\x02\x10\x81\x83\x02\x9c\x02\x0e\x81\x83\x02"
  "\x9b\x02\x0c\x81\x83\x02\x9a\x02\x0a\x81\x83\x02\x99\x02\x08\x81"
  "\x83\x02\x98\x02\x06\x81\x89\x02\x97\x02\x04\x83\x04\x41\x69\x9a"
  "\x01\x02\x2e\x01\x24\x96\x01\xb8\x02\x06\x81\x83\x02\xb7\x02\x04"
  "\x83\x04\x05\x0c\x9b\x01\x02\x2f\x97\x01\x92\x01\x01\x3b\x96\x01"
  "\x93\x01\x94\x01\x6d\x02\x04\x6f\x02\xbf\x02\x10\x81\x85\x02\xbe"
  "\x02\x0e\x81\x85\x02\xbd\x02\x0c\x81\x85\x02\xbc\x02\x0a\x81\x85"
  "\x02\xbb\x02\x08\x81\x83\x02\xba\x02\x06\x81\x87\x02\xb9\x02\x04"
  "\x83\x04\x0f\x1f\x94\x01\x02\x30\x03\x23\x5c\x47\x6c\x03\x04\x76"
  "\x03\x0c\x63\x68\x61\x72\x2d\x61\x73\x63\x69\x69\x3f\x04\x78\x04"
  "\x0b\x63\x68\x61\x72\x2d\x3e\x6e\x61\x6d\x65\x05\xc7\x02\x12\x81"
  "\x85\x02\xc6\x02\x10\x81\x83\x02\xc5\x02\x0e\x81\x83\x02\xc4\x02"
  "\x0c\x81\x87\x02\xc3\x02\x0a\x81\x83\x02\xc2\x02\x08\x83\x04\xc1"
  "\x02\x06\x81\x83\x02\xc0\x02\x04\x81\x83\x02\x11\x22\x93\x01\x02"
  "\x31\x01\x62\x01\x08\x01\x67\x01\x0d\x01\x73\x01\x0e\x01\x63\x01"
  "\x09\x01\x77\x01\x0c\x01\x75\x01\x0a\x01\x6f\x01\x0b\x96\x01\x01"
  "\x5d\x04\x2e\x2e\x2e\x01\x23\x97\x01\x6c\x47\x05\x04\x78\x04\x76"
  "\x04\x04\x6d\x69\x6e\x97\x01\x06\x99\x01\x06\x7a\x03\x0c\x63\x68"
  "\x61\x72\x2d\x3e\x6f\x63\x74\x61\x6c\x99\x01\x07\xed\x02\x4e\x81"
  "\x85\x02\xec\x02\x4c\x81\x85\x02\xeb\x02\x4a\x81\x85\x02\xea\x02"
  "\x48\x81\x83\x02\xe9\x02\x46\x81\x83\x02\xe8\x02\x44\x81\x83\x02"
  "\xe7\x02\x42\x81\x83\x02\xe6\x02\x40\x81\x83\x02\xe5\x02\x3e\x81"
  "\x83\x02\xe4\x02\x3c\x81\x83\x02\xe3\x02\x3a\x81\x83\x02\xe2\x02"
  "\x38\x81\x83\x02\xe1\x02\x36\x81\x87\x02\xe0\x02\x34\x81\x85\x02"
  "\xdf\x02\x32\x81\x89\x02\xde\x02\x30\x81\x85\x02\xdd\x02\x2e\x81"
  "\x8d\x02\xdc\x02\x2c\x81\x87\x02\xdb\x02\x2a\x81\x83\x02\xda\x02"
  "\x28\x81\x85\x02\xd9\x02\x26\x81\x83\x02\xd8\x02\x24\x81\x8b\x02"
  "\xd7\x02\x22\x81\x87\x02\xd6\x02\x20\x81\x87\x02\xd5\x02\x1e\x81"
  "\x87\x02\xd4\x02\x1c\x81\x87\x02\xd3\x02\x1a\x81\x8f\x02\xd2\x02"
  "\x18\x81\x87\x02\xd1\x02\x16\x81\x89\x02\xd0\x02\x14\x81\x87\x02"
  "\xcf\x02\x12\x81\x89\x02\xce\x02\x10\x81\x8b\x02\xcd\x02\x0e\x81"
  "\x87\x02\xcc\x02\x0c\x81\x83\x02\xcb\x02\x0a\x81\x83\x02\xca\x02"
  "\x08\x81\x83\x02\xc9\x02\x06\x83\x04\xc8\x02\x04\x81\x85\x02\x4d"
  "\x76\x96\x01\x02\x32\x09\x03\x0c\x63\x68\x61\x72\x2d\x3e\x61\x73"
  "\x63\x69\x69\x03\x18\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76"
  "\x69\x64\x65\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74\x04\x0f\x69\x6e"
  "\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x03\x19\x69\x6e"
  "\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x2d\x72\x65\x6d"
  "\x61\x69\x6e\x64\x65\x72\x04\x0c\x64\x69\x67\x69\x74\x2d\x3e\x63"
  "\x68\x61\x72\x05\x2a\x07\xf8\x02\x18\x81\x8b\x02\xf7\x02\x16\x81"
  "\x87\x02\xf6\x02\x14\x81\x8b\x02\xf5\x02\x12\x81\x87\x02\xf4\x02"
  "\x10\x81\x89\x02\xf3\x02\x0e\x81\x85\x02\xf2\x02\x0c\x81\x87\x02"
  "\xf1\x02\x0a\x81\x83\x02\xf0\x02\x08\x81\x87\x02\xef\x02\x06\x81"
  "\x83\x02\xee\x02\x04\x83\x04\x17\x28\x92\x01\x02\x33\x01\x32\x01"
  "\x31\x0f\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66"
  "\x02\x12\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x03\x23\x2a\x47\x02\x04\x78\x04\x76\x03\x80\x03\x12"
  "\x81\x89\x02\xff\x02\x10\x81\x87\x02\xfe\x02\x0e\x81\x85\x02\xfd"
  "\x02\x0c\x81\x85\x02\xfc\x02\x0a\x81\x83\x02\xfb\x02\x08\x81\x83"
  "\x02\xfa\x02\x06\x81\x87\x02\xf9\x02\x04\x83\x04\x11\x21\x7a\x02"
  "\x34\x6d\x6c\x6b\x47\x05\x03\x18\x75\x6e\x70\x61\x72\x73\x65\x2d"
  "\x76\x65\x63\x74\x6f\x72\x2f\x75\x6e\x70\x61\x72\x73\x65\x72\x6f"
  "\x03\x16\x75\x6e\x70\x61\x72\x73\x65\x2d\x76\x65\x63\x74\x6f\x72"
  "\x2f\x6e\x6f\x72\x6d\x61\x6c\x2a\x06\x73\x04\x87\x03\x10\x81\x87"
  "\x02\x86\x03\x0e\x81\x8f\x02\x85\x03\x0c\x81\x8d\x02\x84\x03\x0a"
  "\x81\x8b\x02\x83\x03\x08\x81\x89\x02\x82\x03\x06\x81\x83\x02\x81"
  "\x03\x04\x83\x04\x0f\x1e\x9c\x01\x02\x35\x2d\x0e\x76\x65\x63\x74"
  "\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x9d\x01\x04\x10\x73\x61\x66"
  "\x65\x2d\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x9e\x01\x04\x1e"
  "\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x61\x67\x2f\x75\x6e"
  "\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x9f\x01\x03"
  "\x1e\x75\x6e\x70\x61\x72\x73\x65\x72\x2f\x74\x61\x67\x67\x65\x64"
  "\x2d\x76\x65\x63\x74\x6f\x72\x2d\x6d\x65\x74\x68\x6f\x64\x04\x8b"
  "\x03\x0a\x81\x83\x02\x8a\x03\x08\x81\x83\x02\x89\x03\x06\x81\x83"
  "\x02\x88\x03\x04\x83\x04\x09\x16\xa0\x01\x02\x36\x2d\x9d\x01\x04"
  "\x9e\x01\x04\x25\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x61"
  "\x67\x2f\x65\x6e\x74\x69\x74\x79\x2d\x75\x6e\x70\x61\x72\x73\x65"
  "\x72\x2d\x6d\x65\x74\x68\x6f\x64\x2d\x03\x8e\x03\x08\x81\x83\x02"
  "\x8d\x03\x06\x81\x83\x02\x8c\x03\x04\x83\x04\x07\x12\xa1\x01\x02"
  "\x37\x01\x21\x06\x20\x2e\x2e\x2e\x29\x01\x2a\x04\x23\x28\x29\x03"
  "\x23\x28\x9d\x01\x47\x03\x03\x14\x6c\x69\x6d\x69\x74\x2d\x75\x6e"
  "\x70\x61\x72\x73\x65\x2d\x64\x65\x70\x74\x68\x9d\x01\x04\x78\x04"
  "\x9e\x01\x03\x71\x04\x76\x06\xa0\x03\x26\x81\x89\x02\x9f\x03\x24"
  "\x81\x87\x02\x9e\x03\x22\x81\x87\x02\x9d\x03\x20\x81\x8b\x02\x9c"
  "\x03\x1e\x81\x87\x02\x9b\x03\x1c\x81\x87\x02\x9a\x03\x1a\x81\x87"
  "\x02\x99\x03\x18\x81\x87\x02\x98\x03\x16\x81\x87\x02\x97\x03\x14"
  "\x81\x87\x02\x96\x03\x12\x81\x87\x02\x95\x03\x10\x81\x85\x02\x94"
  "\x03\x0e\x81\x85\x02\x93\x03\x0c\x81\x85\x02\x92\x03\x0a\x81\x89"
  "\x02\x91\x03\x08\x81\x83\x02\x90\x03\x06\x81\x83\x02\x8f\x03\x04"
  "\x83\x04\x25\x3e\xa2\x01\x02\x38\x0d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x74\x79\x70\x65\x3f\xa3\x01\x54\x28\x2c\x41\x74\x74\x65\x6d\x70"
  "\x74\x20\x74\x6f\x20\x75\x6e\x70\x61\x72\x73\x65\x20\x70\x61\x72"
  "\x74\x69\x61\x6c\x6c\x79\x20\x6d\x61\x72\x6b\x65\x64\x20\x76\x65"
  "\x63\x74\x6f\x72\x2e\x03\x1e\x77\x69\x74\x68\x2d\x61\x62\x73\x6f"
  "\x6c\x75\x74\x65\x6c\x79\x2d\x6e\x6f\x2d\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x73\x03\x13\x6d\x61\x70\x2d\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x2d\x74\x72\x61\x70\x54\x03\x06\x65\x72\x72\x6f\x72"
  "\x04\xa6\x03\x0e\x81\x83\x02\xa5\x03\x0c\x81\x85\x02\xa4\x03\x0a"
  "\x81\x83\x02\xa3\x03\x08\x81\x85\x02\xa2\x03\x06\x81\x85\x02\xa1"
  "\x03\x04\x84\x06\x0d\x1c\xa4\x01\x02\x39\x0b\x6d\x6c\x6b\x47\x06"
  "\x06\x73\x03\x84\x01\x04\x0f\x75\x6e\x70\x61\x72\x73\x65\x2d\x72"
  "\x65\x63\x6f\x72\x64\x04\xad\x03\x10\x81\x83\x02\xac\x03\x0e\x81"
  "\x8b\x02\xab\x03\x0c\x81\x89\x02\xaa\x03\x0a\x81\x87\x02\xa9\x03"
  "\x08\x81\x85\x02\xa8\x03\x06\x81\x83\x02\xa7\x03\x04\x83\x04\x0f"
  "\x1f\xa5\x01\x02\x3a\x6d\x6c\x6b\x47\x05\x03\x1a\x75\x6e\x70\x61"
  "\x72\x73\x65\x2d\x6c\x69\x73\x74\x2f\x70\x72\x65\x66\x69\x78\x2d"
  "\x70\x61\x69\x72\x3f\xa6\x01\x03\x16\x75\x6e\x70\x61\x72\x73\x65"
  "\x2d\x6c\x69\x73\x74\x2f\x75\x6e\x70\x61\x72\x73\x65\x72\xa7\x01"
  "\x04\x19\x75\x6e\x70\x61\x72\x73\x65\x2d\x6c\x69\x73\x74\x2f\x70"
  "\x72\x65\x66\x69\x78\x2d\x70\x61\x69\x72\xa8\x01\x03\x0d\x75\x6e"
  "\x70\x61\x72\x73\x65\x2d\x6c\x69\x73\x74\xa9\x01\x06\x73\x06\xb5"
  "\x03\x12\x81\x87\x02\xb4\x03\x10\x81\x8f\x02\xb3\x03\x0e\x81\x8d"
  "\x02\xb2\x03\x0c\x81\x8b\x02\xb1\x03\x0a\x81\x89\x02\xb0\x03\x08"
  "\x81\x85\x02\xaf\x03\x06\x81\x83\x02\xae\x03\x04\x83\x04\x11\x24"
  "\xaa\x01\x02\x3b\x01\x2a\x01\x29\x47\x02\x03\x9d\x01\x04\x76\x03"
  "\x09\x73\x61\x66\x65\x2d\x63\x61\x72\xab\x01\x03\x09\x73\x61\x66"
  "\x65\x2d\x63\x64\x72\xac\x01\x03\x71\x04\x0d\x75\x6e\x70\x61\x72"
  "\x73\x65\x2d\x74\x61\x69\x6c\xad\x01\x07\xbe\x03\x14\x81\x87\x02"
  "\xbd\x03\x12\x81\x83\x02\xbc\x03\x10\x81\x83\x02\xbb\x03\x0e\x81"
  "\x85\x02\xba\x03\x0c\x81\x83\x02\xb9\x03\x0a\x81\x83\x02\xb8\x03"
  "\x08\x81\x87\x02\xb7\x03\x06\x81\x83\x02\xb6\x03\x04\x83\x04\x13"
  "\x28\xae\x01\x02\x3c\x02\x04\x2e\x2e\x2e\x6b\x02\x6b\x47\x04\x05"
  "\x61\x04\x78\x03\xcb\x03\x1c\x81\x83\x02\xca\x03\x1a\x81\x85\x02"
  "\xc9\x03\x18\x81\x83\x02\xc8\x03\x16\x81\x83\x02\xc7\x03\x14\x81"
  "\x83\x02\xc6\x03\x12\x81\x83\x02\xc5\x03\x10\x81\x85\x02\xc4\x03"
  "\x0e\x81\x83\x02\xc3\x03\x0c\x81\x83\x02\xc2\x03\x0a\x81\x83\x02"
  "\xc1\x03\x08\x81\x83\x02\xc0\x03\x06\x81\x83\x02\xbf\x03\x04\x83"
  "\x04\x1b\x2b\x61\x02\x3d\x05\x20\x2e\x2e\x2e\x01\x21\x04\x20\x2e"
  "\x20\x02\x47\x6d\x6c\x6b\x06\x03\xa7\x01\x04\x78\x03\x71\x04\x76"
  "\x06\x73\x03\xab\x01\x03\xac\x01\x04\xad\x01\x09\xe1\x03\x2e\x81"
  "\x87\x02\xe0\x03\x2c\x81\x87\x02\xdf\x03\x2a\x81\x89\x02\xde\x03"
  "\x28\x81\x87\x02\xdd\x03\x26\x81\x87\x02\xdc\x03\x24\x81\x87\x02"
  "\xdb\x03\x22\x81\x87\x02\xda\x03\x20\x81\x87\x02\xd9\x03\x1e\x81"
  "\x87\x02\xd8\x03\x1c\x81\x87\x02\xd7\x03\x1a\x81\x87\x02\xd6\x03"
  "\x18\x81\x8f\x02\xd5\x03\x16\x81\x8d\x02\xd4\x03\x14\x81\x8b\x02"
  "\xd3\x03\x12\x81\x89\x02\xd2\x03\x10\x81\x87\x02\xd1\x03\x0e\x81"
  "\x8b\x02\xd0\x03\x0c\x81\x8b\x02\xcf\x03\x0a\x81\x85\x02\xce\x03"
  "\x08\x81\x85\x02\xcd\x03\x06\x81\x89\x02\xcc\x03\x04\x84\x06\x2d"
  "\x4c\xaf\x01\x02\x3e\x24\x03\xab\x01\x04\x9f\x01\x03\x1c\x75\x6e"
  "\x70\x61\x72\x73\x65\x72\x2f\x74\x61\x67\x67\x65\x64\x2d\x70\x61"
  "\x69\x72\x2d\x6d\x65\x74\x68\x6f\x64\x04\xe4\x03\x08\x81\x83\x02"
  "\xe3\x03\x06\x81\x83\x02\xe2\x03\x04\x83\x04\x07\x12\x9f\x01\x02"
  "\x3f\x24\x03\xab\x01\x04\x2d\x03\xe6\x03\x06\x81\x83\x02\xe5\x03"
  "\x04\x83\x04\x05\x0e\x2d\x02\x40\x47\x02\x04\x78\x03\xac\x01\x03"
  "\x71\x03\xab\x01\x05\xeb\x03\x0c\x81\x87\x02\xea\x03\x0a\x81\x85"
  "\x02\xe9\x03\x08\x81\x85\x02\xe8\x03\x06\x81\x89\x02\xe7\x03\x04"
  "\x84\x06\x0b\x19\x24\x02\x41\x03\x2c\x40\x11\x75\x6e\x71\x75\x6f"
  "\x74\x65\x2d\x73\x70\x6c\x69\x63\x69\x6e\x67\x02\x2c\x08\x75\x6e"
  "\x71\x75\x6f\x74\x65\x02\x60\x0b\x71\x75\x61\x73\x69\x71\x75\x6f"
  "\x74\x65\x02\x27\x06\x71\x75\x6f\x74\x65\x0e\x02\x03\xac\x01\x03"
  "\xab\x01\x03\xf1\x03\x0e\x81\x83\x02\xf0\x03\x0c\x81\x85\x02\xef"
  "\x03\x0a\x81\x83\x02\xee\x03\x08\x81\x83\x02\xed\x03\x06\x81\x83"
  "\x02\xec\x03\x04\x83\x04\x0d\x20\xb0\x01\x02\x42\x19\x03\x54\x02"
  "\xf3\x03\x06\x81\x83\x02\xf2\x03\x04\x83\x04\x05\x0c\x19\x02\x43"
  "\x18\x03\x54\x02\xf5\x03\x06\x81\x83\x02\xf4\x03\x04\x83\x04\x05"
  "\x0c\x54\x02\x44\x12\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x6d\x6c\x6b\x47\x06\x03\x13\x67\x65\x6e"
  "\x65\x72\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x06"
  "\x73\x03\x03\x17\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d\x65\x05\x85\x01\x03\x71\x07"
  "\x80\x04\x18\x81\x83\x02\xff\x03\x16\x81\x87\x02\xfe\x03\x14\x81"
  "\x87\x02\xfd\x03\x12\x81\x87\x02\xfc\x03\x10\x81\x8f\x02\xfb\x03"
  "\x0e\x81\x8d\x02\xfa\x03\x0c\x81\x8b\x02\xf9\x03\x0a\x81\x89\x02"
  "\xf8\x03\x08\x81\x87\x02\xf7\x03\x06\x84\x06\xf6\x03\x04\x81\x85"
  "\x02\x17\x2e\x18\x02\x45\x15\x23\x5b\x75\x6e\x6e\x61\x6d\x65\x64"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x5d\x13\x63\x6f\x6d\x70"
  "\x6f\x75\x6e\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x0c\x02"
  "\x04\x12\x75\x6e\x70\x61\x72\x73\x65\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\xb1\x01\x05\x85\x01\x03\x11\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x6c\x61\x6d\x62\x64\x61\x04\x13\x6c\x61\x6d\x62"
  "\x64\x61\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x2a\x03\x71"
  "\x06\x87\x04\x10\x81\x83\x02\x86\x04\x0e\x81\x8b\x02\x85\x04\x0c"
  "\x87\x0c\x84\x04\x0a\x81\x89\x02\x83\x04\x08\x81\x83\x02\x82\x04"
  "\x06\x81\x87\x02\x81\x04\x04\x83\x04\x0f\x21\xb2\x01\x02\x46\x14"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\xb3\x01\x09\x0b\x03\x04\xb1\x01\x05\x85\x01\x03\x84"
  "\x01\x03\x19\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d\x65\x03\x71\x06\x8d\x04"
  "\x0e\x81\x83\x02\x8c\x04\x0c\x81\x83\x02\x8b\x04\x0a\x81\x85\x02"
  "\x8a\x04\x08\x81\x85\x02\x89\x04\x06\x81\x83\x02\x88\x04\x04\x83"
  "\x04\x0d\x1f\xb4\x01\x02\x47\x7c\x01\x2a\x01\x29\x01\x21\x11\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65\x1d"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x61\x64"
  "\x64\x72\x65\x73\x73\x2d\x3e\x62\x6c\x6f\x63\x6b\x13\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x47"
  "\x02\x03\x14\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74\x72"
  "\x79\x2d\x74\x79\x70\x65\x04\xb1\x01\x03\x26\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x62\x6c\x6f\x63\x6b\x2f\x6d"
  "\x61\x6e\x69\x66\x65\x73\x74\x2d\x63\x6c\x6f\x73\x75\x72\x65\x3f"
  "\x05\x85\x01\x03\x22\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e"
  "\x74\x72\x79\x2f\x66\x69\x6c\x65\x6e\x61\x6d\x65\x2d\x61\x6e\x64"
  "\x2d\x69\x6e\x64\x65\x78\x03\x18\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x6e\x61\x6d\x65\x7c"
  "\x04\x76\x03\x16\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74"
  "\x72\x79\x2f\x6f\x66\x66\x73\x65\x74\x03\x7d\x03\x0e\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x2d\x6e\x61\x6d\x65\x04\x78\x03\x18\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x3e"
  "\x65\x6e\x74\x72\x79\x03\x71\x0e\xaf\x04\x46\x81\x87\x02\xae\x04"
  "\x44\x81\x83\x02\xad\x04\x42\x81\x87\x02\xac\x04\x40\x81\x85\x02"
  "\xab\x04\x3e\x81\x89\x02\xaa\x04\x3c\x81\x83\x02\xa9\x04\x3a\x81"
  "\x83\x02\xa8\x04\x38\x81\x8b\x02\xa7\x04\x36\x81\x8b\x02\xa6\x04"
  "\x34\x81\x87\x02\xa5\x04\x32\x81\x87\x02\xa4\x04\x30\x81\x87\x02"
  "\xa3\x04\x2e\x81\x87\x02\xa2\x04\x2c\x81\x8b\x02\xa1\x04\x2a\x81"
  "\x87\x02\xa0\x04\x28\x81\x87\x02\x9f\x04\x26\x81\x85\x02\x9e\x04"
  "\x24\x81\x87\x02\x9d\x04\x22\x81\x87\x02\x9c\x04\x20\x81\x83\x02"
  "\x9b\x04\x1e\x81\x83\x02\x9a\x04\x1c\x81\x8b\x02\x99\x04\x1a\x81"
  "\x87\x02\x98\x04\x18\x81\x83\x02\x97\x04\x16\x81\x83\x02\x96\x04"
  "\x14\x81\x87\x02\x95\x04\x12\x81\x83\x02\x94\x04\x10\x81\x83\x02"
  "\x93\x04\x0e\x81\x85\x02\x92\x04\x0c\x81\x83\x02\x91\x04\x0a\x81"
  "\x89\x02\x90\x04\x08\x81\x83\x02\x8f\x04\x06\x81\x87\x02\x8e\x04"
  "\x04\x83\x04\x45\x6d\xb5\x01\x02\x48\x1a\x05\x85\x01\x03\x10\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x6e\x61\x6d\x65\x03\x71"
  "\x04\xb2\x04\x08\x81\x83\x02\xb1\x04\x06\x81\x83\x02\xb0\x04\x04"
  "\x83\x04\x07\x12\x1a\x02\x49\x1e\x05\x85\x01\x03\x10\x64\x65\x66"
  "\x69\x6e\x69\x74\x69\x6f\x6e\x2d\x6e\x61\x6d\x65\x03\x71\x04\xb5"
  "\x04\x08\x81\x83\x02\xb4\x04\x06\x81\x83\x02\xb3\x04\x04\x83\x04"
  "\x07\x12\x1e\x02\x4a\x23\x05\x85\x01\x03\x0c\x6c\x61\x6d\x62\x64"
  "\x61\x2d\x6e\x61\x6d\x65\x03\x71\x04\xb8\x04\x08\x81\x83\x02\xb7"
  "\x04\x06\x81\x83\x02\xb6\x04\x04\x83\x04\x07\x12\xb6\x01\x02\x4b"
  "\x2c\x05\x85\x01\x03\x0e\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x6e"
  "\x61\x6d\x65\x03\x71\x04\xbb\x04\x08\x81\x83\x02\xba\x04\x06\x81"
  "\x83\x02\xb9\x04\x04\x83\x04\x07\x12\x2c\x02\x4c\x03\x23\x78\x11"
  "\x03\x23\x6f\x09\x03\x23\x62\x0b\x3b\x0f\xa3\x01\x1b\x47\x03\x04"
  "\x78\x03\x04\x61\x62\x73\x04\x7f\x04\xc9\x04\x1e\x81\x85\x02\xc8"
  "\x04\x1c\x81\x87\x02\xc7\x04\x1a\x81\x83\x02\xc6\x04\x18\x83\x04"
  "\xc5\x04\x16\x81\x91\x02\xc4\x04\x14\x81\x83\x02\xc3\x04\x12\x81"
  "\x83\x02\xc2\x04\x10\x81\x83\x02\xc1\x04\x0e\x81\x8d\x02\xc0\x04"
  "\x0c\x81\x8d\x02\xbf\x04\x0a\x81\x8d\x02\xbe\x04\x08\x81\x8d\x02"
  "\xbd\x04\x06\x81\x8d\x02\xbc\x04\x04\x81\x8d\x02\x1d\x37\xa3\x01"
  "\x02\x4d\x03\x18\x75\x6e\x70\x61\x72\x73\x65\x2f\x66\x6c\x6f\x61"
  "\x74\x69\x6e\x67\x2d\x76\x65\x63\x74\x6f\x72\x7f\x03\x36\x03\xcb"
  "\x04\x06\x81\x83\x02\xca\x04\x04\x83\x04\x05\x0e\xb7\x01\x02\x4e"
  "\x05\x20\x2e\x2e\x2e\x02\x01\x21\x14\x66\x6c\x6f\x61\x74\x69\x6e"
  "\x67\x2d\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x10\x66\x6c\x6f"
  "\x61\x74\x69\x6e\x67\x2d\x76\x65\x63\x74\x6f\x72\x17\x66\x6c\x6f"
  "\x61\x74\x69\x6e\x67\x2d\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x47\x03\x05\x85\x01\x03\x3d\x04\x97\x01\x04\x76\x04"
  "\x78\x06\xdd\x04\x26\x81\x89\x02\xdc\x04\x24\x81\x89\x02\xdb\x04"
  "\x22\x81\x8b\x02\xda\x04\x20\x81\x89\x02\xd9\x04\x1e\x81\x85\x02"
  "\xd8\x04\x1c\x81\x85\x02\xd7\x04\x1a\x81\x8d\x02\xd6\x04\x18\x81"
  "\x87\x02\xd5\x04\x16\x81\x87\x02\xd4\x04\x14\x81\x85\x02\xd3\x04"
  "\x12\x81\x85\x02\xd2\x04\x10\x81\x87\x02\xd1\x04\x0e\x81\x85\x02"
  "\xd0\x04\x0c\x81\x83\x02\xcf\x04\x0a\x81\x83\x02\xce\x04\x08\x81"
  "\x87\x02\xcd\x04\x06\x81\x83\x02\xcc\x04\x04\x83\x04\x25\x40\x97"
  "\x01\x02\x4f\x1f\x1b\x61\x72\x69\x74\x79\x2d\x64\x69\x73\x70\x61"
  "\x74\x63\x68\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x0b"
  "\x61\x70\x70\x6c\x79\x2d\x68\x6f\x6f\x6b\x0d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x0b\x6d\x6c\x6b\x47\x06\x03\x0e\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x3f\x03\x0c\x61\x70"
  "\x70\x6c\x79\x2d\x68\x6f\x6f\x6b\x3f\x05\x85\x01\x03\x1c\x61\x72"
  "\x69\x74\x79\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x65\x64\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x03\x0d\x65\x6e\x74\x69\x74"
  "\x79\x2d\x65\x78\x74\x72\x61\x03\x84\x01\x03\x11\x65\x6e\x74\x69"
  "\x74\x79\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x03\x17\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x61\x64\x64\x72"
  "\x65\x73\x73\x3f\x06\x73\x03\x08\x72\x65\x63\x6f\x72\x64\x3f\x03"
  "\x7c\x03\x14\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x3f\x04\x78\x03\x17\x72\x65\x63\x6f\x72\x64"
  "\x2d\x65\x6e\x74\x69\x74\x79\x2d\x75\x6e\x70\x61\x72\x73\x65\x72"
  "\x03\x1f\x75\x6e\x70\x61\x72\x73\x65\x2d\x76\x65\x63\x74\x6f\x72"
  "\x2f\x65\x6e\x74\x69\x74\x79\x2d\x75\x6e\x70\x61\x72\x73\x65\x72"
  "\x7c\x03\x1d\x75\x6e\x70\x61\x72\x73\x65\x2d\x6c\x69\x73\x74\x2f"
  "\x65\x6e\x74\x69\x74\x79\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x78"
  "\x11\xfd\x04\x42\x81\x83\x02\xfc\x04\x40\x81\x87\x02\xfb\x04\x3e"
  "\x81\x87\x02\xfa\x04\x3c\x81\x87\x02\xf9\x04\x3a\x81\x85\x02\xf8"
  "\x04\x38\x81\x83\x02\xf7\x04\x36\x81\x83\x02\xf6\x04\x34\x81\x8f"
  "\x02\xf5\x04\x32\x81\x8d\x02\xf4\x04\x30\x81\x8b\x02\xf3\x04\x2e"
  "\x81\x89\x02\xf2\x04\x2c\x81\x83\x02\xf1\x04\x2a\x81\x85\x02\xf0"
  "\x04\x28\x81\x87\x02\xef\x04\x26\x81\x83\x02\xee\x04\x24\x81\x83"
  "\x02\xed\x04\x22\x81\x85\x02\xec\x04\x20\x81\x87\x02\xeb\x04\x1e"
  "\x81\x87\x02\xea\x04\x1c\x81\x85\x02\xe9\x04\x1a\x81\x8b\x02\xe8"
  "\x04\x18\x81\x89\x02\xe7\x04\x16\x81\x87\x02\xe6\x04\x14\x81\x85"
  "\x02\xe5\x04\x12\x81\x83\x02\xe4\x04\x10\x81\x83\x02\xe3\x04\x0e"
  "\x81\x83\x02\xe2\x04\x0c\x81\x83\x02\xe1\x04\x0a\x81\x83\x02\xe0"
  "\x04\x08\x81\x85\x02\xdf\x04\x06\x81\x83\x02\xde\x04\x04\x83\x04"
  "\x41\x6f\x76\x4f\x1f\x1f\x49\x76\x04\x97\x01\x04\xb7\x01\x04\xa3"
  "\x01\x18\x2c\x04\xb6\x01\x04\x1e\x04\x1a\x04\xb5\x01\x04\xb4\x01"
  "\x04\xb2\x01\x04\x18\x06\x54\x04\x19\x04\xb0\x01\x04\x24\x04\x2d"
  "\x04\x9f\x01\x04\xaf\x01\x04\x61\x04\xae\x01\x04\xaa\x01\x04\xa5"
  "\x01\x04\xa4\x01\x04\xa2\x01\x04\xa1\x01\x04\xa0\x01\x04\x9c\x01"
  "\x04\x7a\x04\x92\x01\x04\x96\x01\x06\x93\x01\x08\x94\x01\x04\x9b"
  "\x01\x04\x9a\x01\x04\x95\x01\x04\x91\x01\x04\x8e\x01\x04\x8d\x01"
  "\x04\x29\x04\x8c\x01\x04\x8b\x01\x04\x25\x07\x6e\x75\x6d\x62\x65"
  "\x72\xb7\x01\x26\xb7\x01\x1b\xb7\x01\x21\xb7\x01\x1d\xb7\x01\x22"
  "\x07\x73\x79\x6d\x62\x6f\x6c\xb7\x01\x2b\xb7\x01\x20\x28\x27\xb3"
  "\x01\x06\x6c\x65\x78\x70\x72\x23\x10\x65\x78\x74\x65\x6e\x64\x65"
  "\x64\x2d\x6c\x61\x6d\x62\x64\x61\x23\x0b\x8a\x01\x04\x88\x01\x04"
  "\x86\x01\x04\x81\x01\x04\x83\x01\x04\x82\x01\x04\x80\x01\x04\x7e"
  "\x04\x7b\x04\x79\x04\x77\x04\x75\x04\x74\x04\x72\x04\x6a\x0c\x69"
  "\x04\x66\x04\x64\x04\x62\x04\x4f\x04\x5e\x04\x5b\x04\x4a\x3e\x7f"
  "\x3d\x36\x31\x3b\x3f\x43\x41\x38\x37\xb1\x01\xac\x01\xab\x01\xa6"
  "\x01\xa8\x01\x78\xa7\x01\xad\x01\x9d\x01\xa9\x01\x3a\x35\x9e\x01"
  "\x2a\x7c\x6f\x30\x2f\x99\x01\x33\x42\x15\x98\x01\x90\x01\x8f\x01"
  "\x14\x32\x3c\x34\x40\x39\x89\x01\x87\x01\x1c\x2e\x85\x01\x84\x01"
  "\x0e\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x68\x61\x73\x68\x7d\x0f"
  "\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x64\x61\x74\x75\x6d\x13\x2a"
  "\x75\x6e\x70\x61\x72\x73\x65\x2d\x73\x75\x62\x73\x74\x72\x69\x6e"
  "\x67\x10\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x0e\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x63\x68\x61\x72\x47"
  "\x71\x6e\x6d\x6c\x6b\x13\x69\x6e\x76\x6f\x6b\x65\x2d\x75\x73\x65"
  "\x72\x2d\x6d\x65\x74\x68\x6f\x64\x68\x19\x75\x6e\x70\x61\x72\x73"
  "\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2f\x74\x6f\x70\x2d\x6c\x65\x76"
  "\x65\x6c\x67\x65\x63\x5f\x5d\x60\x5c\x4a\x73\x1b\x75\x6e\x70\x61"
  "\x72\x73\x65\x72\x2d\x73\x74\x61\x74\x65\x2f\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x19\x75\x6e\x70\x61\x72\x73\x65\x72\x2d"
  "\x73\x74\x61\x74\x65\x2f\x73\x6c\x61\x73\x68\x69\x66\x79\x3f\x1a"
  "\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x61\x74\x65\x2f\x6c"
  "\x69\x73\x74\x2d\x64\x65\x70\x74\x68\x14\x75\x6e\x70\x61\x72\x73"
  "\x65\x72\x2d\x73\x74\x61\x74\x65\x2f\x70\x6f\x72\x74\x5a\x04\x59"
  "\x04\x58\x04\x57\x04\x13\x72\x74\x64\x3a\x75\x6e\x70\x61\x72\x73"
  "\x65\x72\x2d\x73\x74\x61\x74\x65\xb7\x01\x0f\x75\x6e\x70\x61\x72"
  "\x73\x65\x72\x2d\x73\x74\x61\x74\x65\x05\x70\x6f\x72\x74\x0b\x6c"
  "\x69\x73\x74\x2d\x64\x65\x70\x74\x68\x0a\x73\x6c\x61\x73\x68\x69"
  "\x66\x79\x3f\x0c\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x4a"
  "\x45\x15\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65"
  "\x2f\x65\x6e\x74\x72\x79\x14\x75\x6e\x70\x61\x72\x73\x65\x72\x2d"
  "\x74\x61\x62\x6c\x65\x2f\x63\x6f\x70\x79\x44\x4d\x70\x4c\x55\x04"
  "\x56\x04\x53\x04\x52\x04\x50\x04\x4e\x04\x4b\x04\x51\x1f\x75\x6e"
  "\x70\x61\x72\x73\x65\x72\x2d\x74\x61\x62\x6c\x65\x2f\x64\x69\x73"
  "\x70\x61\x74\x63\x68\x2d\x76\x65\x63\x74\x6f\x72\x48\x04\x11\x6c"
  "\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x13"
  "\x72\x74\x64\x3a\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x74\x61\x62"
  "\x6c\x65\xb6\x01\x0f\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x74\x61"
  "\x62\x6c\x65\x10\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x76\x65\x63"
  "\x74\x6f\x72\x16\x13\x12\x11\x10\x0f\x0e\x0d\x0c\x0b\x0a\x09\x14"
  "\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61"
  "\x67\x65\x21\x12\x46\x04\x17\x04\x12\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x06\x11\x6d\x61\x6b\x65"
  "\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65"
  "\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74"
  "\x63\x68\x2d\x74\x61\x67\x04\xb6\x01\xb7\x01\x03\x19\x34\x80\x80"
  "\x04\x18\x32\x81\x81\x02\x17\x30\x81\x81\x02\x16\x2e\x81\x85\x02"
  "\x15\x2c\x81\x83\x02\x14\x2a\x81\x8b\x02\x13\x28\x81\x87\x02\x12"
  "\x26\x81\x83\x02\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20"
  "\x81\x85\x02\x0e\x1e\x81\x87\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81"
  "\x83\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x85"
  "\x02\x08\x12\x81\x87\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02"
  "\x05\x0c\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02"
  "\x06\x81\x83\x02\x01\x04\x81\x83\x02\x33\x58";

SCHEME_OBJECT *
unpars_so_data_1ef18db4c84db14f (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_unpars_so_data_1ef18db4c84db14f [0]))), (sizeof (prog_unpars_so_data_1ef18db4c84db14f)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_33]));
}

DECLARE_COMPILED_DATA_NS ("unpars.so", unpars_so_data_1ef18db4c84db14f)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("unpars.so", "15cae106fe7eda74")
