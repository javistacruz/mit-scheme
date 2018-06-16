/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:32-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_8 11
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
#define LABEL_1_21 35
#define LABEL_1_20 37
#define LABEL_1_22 39
#define LABEL_1_23 41
#define LABEL_1_24 43
#define LABEL_1_25 45
#define LABEL_1_26 47
#define LABEL_1_27 49
#define ENVIRONMENT_LABEL_1_3 83
#define DEBUGGING_LABEL_1_2 82
#define OBJECT_1_11 81
#define OBJECT_1_10 80
#define OBJECT_1_9 79
#define OBJECT_1_8 78
#define OBJECT_1_7 77
#define OBJECT_1_6 76
#define OBJECT_1_5 75
#define OBJECT_1_4 74
#define OBJECT_1_3 73
#define OBJECT_1_2 72
#define OBJECT_1_1 71
#define OBJECT_1_0 70
#define FREE_REFERENCE_1_8 51
#define FREE_REFERENCE_1_7 52
#define FREE_REFERENCE_1_6 53
#define FREE_REFERENCE_1_5 54
#define FREE_REFERENCE_1_4 55
#define FREE_REFERENCE_1_3 56
#define FREE_REFERENCE_1_2 57
#define FREE_REFERENCE_1_1 58
#define FREE_REFERENCE_1_0 59
#define FREE_ASSIGNMENT_1_8 61
#define FREE_ASSIGNMENT_1_7 62
#define FREE_ASSIGNMENT_1_6 63
#define FREE_ASSIGNMENT_1_5 64
#define FREE_ASSIGNMENT_1_4 65
#define FREE_ASSIGNMENT_1_3 66
#define FREE_ASSIGNMENT_1_2 67
#define FREE_ASSIGNMENT_1_1 68
#define FREE_ASSIGNMENT_1_0 69
#define FREE_REFERENCES_LABEL_1_0 50
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd156;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd142;
  machine_word Wrd136;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd124;
  machine_word Wrd118;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd106;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_8;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_1_12);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_1_13);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_1_14);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_1_15);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_1_16);
      goto label_21;

    case 13:
      current_block = (Rpc - LABEL_1_17);
      goto label_22;

    case 14:
      current_block = (Rpc - LABEL_1_18);
      goto label_23;

    case 15:
      current_block = (Rpc - LABEL_1_19);
      goto label_24;

    case 16:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_3;

    case 17:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_1;

    case 18:
      current_block = (Rpc - LABEL_1_22);
      goto label_25;

    case 19:
      current_block = (Rpc - LABEL_1_23);
      goto label_26;

    case 20:
      current_block = (Rpc - LABEL_1_24);
      goto label_30;

    case 21:
      current_block = (Rpc - LABEL_1_25);
      goto label_27;

    case 22:
      current_block = (Rpc - LABEL_1_26);
      goto label_28;

    case 23:
      current_block = (Rpc - LABEL_1_27);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_32)
DEFLABEL (initialize_packageB_8)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_86;

DEFLABEL (label_85)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_84)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_83;
  Wrd17 = Wrd21;

DEFLABEL (label_82)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd31.Obj) = ((Wrd23.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_81;

DEFLABEL (label_80)
  ((Wrd23.pObj) [0]) = (Wrd17.Obj);

DEFLABEL (label_79)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_78;
  Wrd35 = Wrd39;

DEFLABEL (label_77)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd49.Obj) = ((Wrd41.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_76;

DEFLABEL (label_75)
  ((Wrd41.pObj) [0]) = (Wrd35.Obj);

DEFLABEL (label_74)
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_73;
  Wrd53 = Wrd57;

DEFLABEL (label_72)
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd67.Obj) = ((Wrd59.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_71;

DEFLABEL (label_70)
  ((Wrd59.pObj) [0]) = (Wrd53.Obj);

DEFLABEL (label_69)
  (Wrd72.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd75.Obj) = ((Wrd72.pObj) [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if ((Wrd76.uLng) == 50)
    goto label_68;
  Wrd71 = Wrd75;

DEFLABEL (label_67)
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_4]));
  (Wrd85.Obj) = ((Wrd77.pObj) [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd86.uLng) == 50)
    goto label_66;

DEFLABEL (label_65)
  ((Wrd77.pObj) [0]) = (Wrd71.Obj);

DEFLABEL (label_64)
  (Wrd89.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_5]));
  (Wrd90.Obj) = (current_block [OBJECT_1_1]);
  (Wrd97.Obj) = ((Wrd89.pObj) [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if ((Wrd98.uLng) == 50)
    goto label_63;

DEFLABEL (label_62)
  ((Wrd89.pObj) [0]) = (Wrd90.Obj);

DEFLABEL (label_61)
  (Wrd104.Obj) = (current_block [OBJECT_1_2]);
  (Wrd105.Obj) = (current_block [OBJECT_1_3]);
  (* (Rhp++)) = (Wrd104.Obj);
  (* (Rhp++)) = (Wrd105.Obj);
  (Wrd103.pObj) = (& (Rhp [-2]));
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd103.pObj)));
  (Wrd106.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_6]));
  (Wrd114.Obj) = ((Wrd106.pObj) [0]);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if ((Wrd115.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd106.pObj) [0]) = (Wrd101.Obj);

DEFLABEL (label_58)
  (Wrd119.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd122.Obj) = ((Wrd119.pObj) [0]);
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if ((Wrd123.uLng) == 50)
    goto label_57;
  Wrd118 = Wrd122;

DEFLABEL (label_56)
  (Wrd124.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_7]));
  (Wrd132.Obj) = ((Wrd124.pObj) [0]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if ((Wrd133.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  ((Wrd124.pObj) [0]) = (Wrd118.Obj);

DEFLABEL (label_53)
  (Wrd137.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd140.Obj) = ((Wrd137.pObj) [0]);
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd140.Obj));
  if ((Wrd141.uLng) == 50)
    goto label_52;
  Wrd136 = Wrd140;

DEFLABEL (label_51)
  (Wrd142.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_8]));
  (Wrd150.Obj) = ((Wrd142.pObj) [0]);
  (Wrd151.uLng) = (OBJECT_TYPE (Wrd150.Obj));
  if ((Wrd151.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  ((Wrd142.pObj) [0]) = (Wrd136.Obj);

DEFLABEL (label_48)
  (Wrd156.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 0);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_47;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_47;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_46)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_45;
  Wrd25 = Wrd29;

DEFLABEL (label_44)
  Wrd24 = Wrd25;
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 10))
    goto label_43;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd82.Lng))))
    goto label_43;
  ((Wrd80.pObj) [1]) = (Wrd25.Obj);

DEFLABEL (label_42)
  (Wrd31.Obj) = (current_block [OBJECT_1_9]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_7]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_41;
  Wrd34 = Wrd38;

DEFLABEL (label_40)
  (Rsp [2]) = (Wrd34.Obj);
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 10)
    goto label_34;

DEFLABEL (label_33)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_8]), 3);

DEFLABEL (label_34)
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd72.Lng))))
    goto label_33;
  ((Wrd70.pObj) [3]) = (Wrd34.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_39)
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_8]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_38;
  Wrd42 = Wrd46;

DEFLABEL (label_37)
  Wrd41 = Wrd42;
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_36;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd55.Lng))))
    goto label_36;
  ((Wrd53.pObj) [13]) = (Wrd42.Obj);

DEFLABEL (label_35)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_11]), 1);

DEFLABEL (label_36)
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.Obj) = (current_block [OBJECT_1_10]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_8]), 3);

DEFLABEL (label_29)
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_26])), (Wrd43.pObj));

DEFLABEL (label_28)
  (Wrd42.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_25])), (Wrd35.pObj));

DEFLABEL (label_27)
  (Wrd34.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd85.Obj) = (Rsp [0]);
  (Wrd86.Obj) = (current_block [OBJECT_1_7]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_8]), 3);

DEFLABEL (label_30)
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_23])), (Wrd26.pObj));

DEFLABEL (label_26)
  (Wrd25.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_1_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_50)
  if ((Wrd150.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_19])), (Wrd142.pObj), (Wrd136.Obj));

DEFLABEL (label_24)
  goto label_48;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_18])), (Wrd137.pObj));

DEFLABEL (label_23)
  (Wrd136.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_55)
  if ((Wrd132.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_54;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_17])), (Wrd124.pObj), (Wrd118.Obj));

DEFLABEL (label_22)
  goto label_53;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_16])), (Wrd119.pObj));

DEFLABEL (label_21)
  (Wrd118.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_60)
  if ((Wrd114.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_15])), (Wrd106.pObj), (Wrd101.Obj));

DEFLABEL (label_20)
  goto label_58;

DEFLABEL (label_63)
  if ((Wrd97.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_62;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_14])), (Wrd89.pObj), (Wrd90.Obj));

DEFLABEL (label_19)
  goto label_61;

DEFLABEL (label_66)
  if ((Wrd85.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_65;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_13])), (Wrd77.pObj), (Wrd71.Obj));

DEFLABEL (label_18)
  goto label_64;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd72.pObj));

DEFLABEL (label_17)
  (Wrd71.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_71)
  if ((Wrd67.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_70;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_11])), (Wrd59.pObj), (Wrd53.Obj));

DEFLABEL (label_16)
  goto label_69;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_10])), (Wrd54.pObj));

DEFLABEL (label_15)
  (Wrd53.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_76)
  if ((Wrd49.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_75;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_9])), (Wrd41.pObj), (Wrd35.Obj));

DEFLABEL (label_14)
  goto label_74;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd36.pObj));

DEFLABEL (label_13)
  (Wrd35.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_81)
  if ((Wrd31.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_80;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_7])), (Wrd23.pObj), (Wrd17.Obj));

DEFLABEL (label_12)
  goto label_79;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd18.pObj));

DEFLABEL (label_11)
  (Wrd17.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_86)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_85;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_10)
  goto label_84;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_21);
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 12
#define DEBUGGING_LABEL_2_2 11
#define EXECUTE_CACHE_2_6 7
#define FREE_REFERENCE_2_0 10
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto condition_handler_gc_0;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_handler_gc_4)
DEFLABEL (condition_handler_gc_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 11
#define DEBUGGING_LABEL_3_2 10
#define OBJECT_3_0 9
#define EXECUTE_CACHE_3_6 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto condition_handler_stack_overflow_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_handler_stack_overflow_4)
DEFLABEL (condition_handler_stack_overflow_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define ENVIRONMENT_LABEL_4_3 14
#define DEBUGGING_LABEL_4_2 13
#define OBJECT_4_1 12
#define OBJECT_4_0 11
#define EXECUTE_CACHE_4_7 9
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_4_4);
      goto condition_handler_hardware_trap_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_handler_hardware_trap_5)
DEFLABEL (condition_handler_hardware_trap_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_5 3
#define LABEL_5_6 5
#define LABEL_5_7 7
#define LABEL_5_8 9
#define LABEL_5_9 11
#define LABEL_5_10 13
#define LABEL_5_12 15
#define LABEL_5_13 17
#define LABEL_5_4 19
#define LABEL_5_14 21
#define LABEL_5_15 23
#define LABEL_5_16 25
#define LABEL_5_17 27
#define ENVIRONMENT_LABEL_5_3 42
#define DEBUGGING_LABEL_5_2 41
#define OBJECT_5_3 40
#define OBJECT_5_2 39
#define OBJECT_5_1 38
#define OBJECT_5_0 37
#define EXECUTE_CACHE_5_19 29
#define EXECUTE_CACHE_5_18 31
#define EXECUTE_CACHE_5_11 33
#define FREE_REFERENCE_5_0 36
#define FREE_REFERENCES_LABEL_5_0 28
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd59;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd61;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd91;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd81;
  machine_word Wrd90;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd114;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd63;
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
      goto continuation_10;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_5_12);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_5_4);
      goto default_gc_flip_17;

    case 9:
      current_block = (Rpc - LABEL_5_14);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_5_15);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_5_16);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_5_17);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_gc_flip_28)
DEFLABEL (default_gc_flip_17)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_53;
  Wrd8 = Wrd12;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_51;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_50)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 1)
    goto label_32;
  Rsp = (& (Rsp [3]));

DEFLABEL (label_31)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_30)
  (Wrd27.Obj) = (Rsp [0]);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;
  Rvl = (Wrd27.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_19]));

DEFLABEL (label_32)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  if (! ((Wrd24.uLng) == 1))
    goto label_49;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_48)
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd49.uLng) == 1)
    goto label_47;
  (Wrd54.Obj) = (Rsp [4]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_46;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [0]);

DEFLABEL (label_45)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  (Wrd63.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd63.uLng) == 1)
    goto label_33;
  Rsp = (& (Rsp [4]));
  goto label_31;

DEFLABEL (label_33)
  if (! ((Wrd63.uLng) == 1))
    goto label_43;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  if ((Wrd68.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;

DEFLABEL (label_37)
  (Wrd102.Obj) = (Rsp [2]);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd103.uLng) == 1))
    goto label_36;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd101.Obj) = (current_block [OBJECT_5_3]);
  ((Wrd100.pObj) [1]) = (Wrd101.Obj);

DEFLABEL (label_35)
  (Wrd91.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd91.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd96.Obj) = (Rsp [0]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if ((Wrd97.uLng) == 1)
    goto label_34;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_34)
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd93.Obj) = ((Wrd95.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd93.Obj);
  goto label_30;

DEFLABEL (label_36)
  (Wrd105.Obj) = (current_block [OBJECT_5_3]);
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_25)
  goto label_35;

DEFLABEL (label_38)
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_42;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [1]);

DEFLABEL (label_41)
  (Wrd84.Obj) = (Rsp [2]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_40;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  ((Wrd83.pObj) [1]) = (Wrd70.Obj);

DEFLABEL (label_39)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd81.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_5);
  goto label_35;

DEFLABEL (label_40)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_24)
  goto label_39;

DEFLABEL (label_42)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_23)
  (Wrd70.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_37;

DEFLABEL (label_46)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_22)
  (Wrd51.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd61.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd61.Obj);
  goto label_44;

DEFLABEL (label_49)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_21)
  (Wrd40.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_14])), (Wrd9.pObj));

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_52;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (* (--Rsp)) = Rvl;
  goto label_30;

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
gc_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto queued_purification_failure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (queued_purification_failure_3)
DEFLABEL (queued_purification_failure_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define TAG_7_8 2
#define LABEL_7_10 9
#define LABEL_7_11 11
#define LABEL_7_12 13
#define LABEL_7_13 15
#define LABEL_7_14 17
#define LABEL_7_16 19
#define LABEL_7_15 21
#define LABEL_7_18 23
#define LABEL_7_20 25
#define ENVIRONMENT_LABEL_7_3 46
#define DEBUGGING_LABEL_7_2 45
#define OBJECT_7_4 44
#define OBJECT_7_3 43
#define OBJECT_7_2 42
#define OBJECT_7_1 41
#define OBJECT_7_0 40
#define EXECUTE_CACHE_7_21 27
#define EXECUTE_CACHE_7_19 29
#define EXECUTE_CACHE_7_17 31
#define EXECUTE_CACHE_7_9 33
#define EXECUTE_CACHE_7_6 35
#define FREE_REFERENCE_7_1 38
#define FREE_REFERENCE_7_0 39
#define FREE_REFERENCES_LABEL_7_0 26
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_7_4);
      goto default_purify_13;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto lambda_23;

    case 3:
      current_block = (Rpc - LABEL_7_10);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_7_12);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_7_14);
      goto loop_7;

    case 8:
      current_block = (Rpc - LABEL_7_16);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_7_15);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_7_18);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_7_20);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_purify_22)
DEFLABEL (default_purify_13)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  Rvl = (current_block [OBJECT_7_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd9.Obj) = (Rsp [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_7])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (label_26)
  goto loop_7;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_7_7);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_34;
  Wrd6 = Wrd10;

DEFLABEL (label_33)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_32;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd12.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_31)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_30;
  Wrd26 = Wrd30;

DEFLABEL (label_29)
  (Wrd32.Obj) = (* (Rsp++));
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_28;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  ((Wrd35.pObj) [1]) = (Wrd32.Obj);

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_7_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_18)
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_12])), (Wrd27.pObj));

DEFLABEL (label_17)
  (Wrd26.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_16)
  (Wrd12.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_10])), (Wrd7.pObj));

DEFLABEL (label_15)
  (Wrd6.Obj) = Rvl;
  goto label_33;

DEFLABEL (loop_24)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_7_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_40;
  Wrd8 = Wrd12;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_15);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_35;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_20);
  Rsp = (& (Rsp [1]));
  goto loop_7;

DEFLABEL (label_35)
  if (! ((Wrd6.uLng) == 1))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;

DEFLABEL (label_36)
  Rvl = (current_block [OBJECT_7_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd14.Obj) = (current_block [OBJECT_7_4]);
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (label_38)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 1);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_36;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_16])), (Wrd9.pObj));

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 9
#define DEBUGGING_LABEL_8_2 8
#define OBJECT_8_0 7
#define EXECUTE_CACHE_8_5 5
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto default_stack_overflow_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_stack_overflow_3)
DEFLABEL (default_stack_overflow_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 9
#define DEBUGGING_LABEL_9_2 8
#define OBJECT_9_0 7
#define EXECUTE_CACHE_9_5 5
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto default_hardware_trap_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_hardware_trap_3)
DEFLABEL (default_hardware_trap_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define LABEL_10_8 9
#define ENVIRONMENT_LABEL_10_3 17
#define DEBUGGING_LABEL_10_2 16
#define OBJECT_10_0 15
#define EXECUTE_CACHE_10_9 11
#define EXECUTE_CACHE_10_6 13
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto gc_flip_internal_5;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_flip_internal_8)
DEFLABEL (gc_flip_internal_5)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_8 7
#define LABEL_11_7 9
#define LABEL_11_9 11
#define ENVIRONMENT_LABEL_11_3 20
#define DEBUGGING_LABEL_11_2 19
#define OBJECT_11_1 18
#define OBJECT_11_0 17
#define EXECUTE_CACHE_11_10 13
#define EXECUTE_CACHE_11_6 15
#define FREE_REFERENCES_LABEL_11_0 12
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_11_4);
      goto purify_internal_6;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_11_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (purify_internal_10)
DEFLABEL (purify_internal_6)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_8);
  goto label_11;

DEFLABEL (label_14)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
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
gc_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto default_gc_start_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_gc_start_3)
DEFLABEL (default_gc_start_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 5
#define DEBUGGING_LABEL_13_2 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto default_gc_finish_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_gc_finish_3)
DEFLABEL (default_gc_finish_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_5 3
#define LABEL_14_4 5
#define LABEL_14_6 7
#define LABEL_14_8 9
#define LABEL_14_9 11
#define LABEL_14_7 13
#define LABEL_14_14 15
#define LABEL_14_17 17
#define LABEL_14_18 19
#define LABEL_14_19 21
#define LABEL_14_10 23
#define LABEL_14_11 25
#define LABEL_14_12 27
#define LABEL_14_23 29
#define LABEL_14_16 31
#define LABEL_14_21 33
#define ENVIRONMENT_LABEL_14_3 63
#define DEBUGGING_LABEL_14_2 62
#define OBJECT_14_9 61
#define OBJECT_14_8 60
#define OBJECT_14_7 59
#define OBJECT_14_6 58
#define OBJECT_14_5 57
#define OBJECT_14_4 56
#define OBJECT_14_3 55
#define OBJECT_14_2 54
#define OBJECT_14_1 53
#define OBJECT_14_0 52
#define EXECUTE_CACHE_14_25 35
#define EXECUTE_CACHE_14_24 37
#define EXECUTE_CACHE_14_22 39
#define EXECUTE_CACHE_14_20 41
#define EXECUTE_CACHE_14_15 43
#define EXECUTE_CACHE_14_13 45
#define FREE_REFERENCE_14_3 48
#define FREE_REFERENCE_14_2 49
#define FREE_REFERENCE_14_1 50
#define FREE_REFERENCE_14_0 51
#define FREE_REFERENCES_LABEL_14_0 34
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_14_5);
      goto continuation_5;

    case 1:
      current_block = (Rpc - LABEL_14_4);
      goto gc_finish_11;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_14_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_14_14);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_14_17);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_14_18);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_14_19);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_14_11);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_14_12);
      goto lambda_2;

    case 13:
      current_block = (Rpc - LABEL_14_23);
      goto label_19;

    case 14:
      current_block = (Rpc - LABEL_14_16);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_14_21);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_finish_21)
DEFLABEL (gc_finish_11)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_36;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 4096L)
    goto label_26;

DEFLABEL (label_25)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_24;
  Wrd14 = Wrd18;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14_7);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_8])), (Wrd15.pObj));

DEFLABEL (label_13)
  (Wrd14.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_35;
  Wrd20 = Wrd24;

DEFLABEL (label_34)
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 0);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_32;
  Wrd9 = Wrd13;

DEFLABEL (label_31)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd19.uLng) == 30))
    goto label_30;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (Wrd18.Obj) = (MAKE_OBJECT (26, (Wrd17.uLng)));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_29)
  (Wrd24.Obj) = (current_block [OBJECT_14_4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_2]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_28;
  Wrd25 = Wrd29;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_5]), 4);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_16);
  (Wrd5.Obj) = (current_block [OBJECT_14_8]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_9]), 1);

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_19])), (Wrd26.pObj));

DEFLABEL (label_18)
  (Wrd25.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_17])), (Wrd10.pObj));

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_22]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_25]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_5);
  goto label_25;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_9])), (Wrd21.pObj));

DEFLABEL (label_14)
  (Wrd20.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd45.Obj) = (current_block [OBJECT_14_0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_26;

DEFLABEL (lambda_22)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_14_12);
  (Wrd5.Obj) = (current_block [OBJECT_14_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_3]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_38;
  Wrd7 = Wrd11;

DEFLABEL (label_37)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_24]));

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_23])), (Wrd8.pObj));

DEFLABEL (label_19)
  (Wrd7.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_5 3
#define LABEL_15_4 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define ENVIRONMENT_LABEL_15_3 19
#define DEBUGGING_LABEL_15_2 18
#define OBJECT_15_0 17
#define EXECUTE_CACHE_15_8 11
#define FREE_REFERENCE_15_0 14
#define FREE_ASSIGNMENT_15_0 16
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_15_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_15_4);
      goto set_gc_safety_marginB_2;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_gc_safety_marginB_7)
DEFLABEL (set_gc_safety_marginB_2)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_15_0]))
    goto label_10;
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_0]));
  (Wrd17.Obj) = ((Wrd9.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd9.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_11)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_5);

DEFLABEL (label_10)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_9;
  Wrd26 = Wrd30;

DEFLABEL (label_8)
  Rvl = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_6])), (Wrd27.pObj));

DEFLABEL (label_5)
  (Wrd26.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd17.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_7])), (Wrd9.pObj), (Wrd5.Obj));

DEFLABEL (label_4)
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define TAG_16_6 1
#define LABEL_16_8 7
#define ENVIRONMENT_LABEL_16_3 17
#define DEBUGGING_LABEL_16_2 16
#define OBJECT_16_0 15
#define EXECUTE_CACHE_16_9 9
#define EXECUTE_CACHE_16_7 11
#define FREE_REFERENCE_16_0 14
#define FREE_REFERENCES_LABEL_16_0 8
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_16_4);
      goto gc_flip_3;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_16_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_flip_7)
DEFLABEL (gc_flip_3)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_16_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_16_0]))
    goto label_10;
  Wrd9 = Wrd7;

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (label_10)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_12;
  Wrd12 = Wrd16;

DEFLABEL (label_11)
  Wrd9 = Wrd12;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_8])), (Wrd13.pObj));

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define ENVIRONMENT_LABEL_17_3 20
#define DEBUGGING_LABEL_17_2 19
#define OBJECT_17_1 18
#define OBJECT_17_0 17
#define EXECUTE_CACHE_17_9 11
#define EXECUTE_CACHE_17_8 13
#define FREE_REFERENCE_17_0 16
#define FREE_REFERENCES_LABEL_17_0 10
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_17_4);
      goto flush_purification_queueB_3;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flush_purification_queueB_8)
DEFLABEL (flush_purification_queueB_3)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_13;
  Wrd6 = Wrd10;

DEFLABEL (label_12)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_11;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd12.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_10)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_9;
  Rvl = (current_block [OBJECT_17_1]);
  goto pop_return;

DEFLABEL (label_9)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_7);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (label_11)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_6)
  (Wrd12.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_5])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 12
#define DEBUGGING_LABEL_18_2 11
#define OBJECT_18_1 10
#define OBJECT_18_0 9
#define EXECUTE_CACHE_18_6 7
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_18_4);
      goto purify_3;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (purify_6)
DEFLABEL (purify_3)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == (current_block [OBJECT_18_0]))
    goto label_8;
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_7;

DEFLABEL (label_8)
  (Wrd13.Obj) = (current_block [OBJECT_18_1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_7)
DEFLABEL (label_9)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define LABEL_19_8 9
#define ENVIRONMENT_LABEL_19_3 17
#define DEBUGGING_LABEL_19_2 16
#define OBJECT_19_2 15
#define OBJECT_19_1 14
#define OBJECT_19_0 13
#define EXECUTE_CACHE_19_6 11
#define FREE_REFERENCES_LABEL_19_0 10
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gc_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd38;
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
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
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
      goto constant_space_in_use_4;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constant_space_in_use_9)
DEFLABEL (constant_space_in_use_4)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_13;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_13;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 26)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_11)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_10;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) - (Wrd46.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_10;
  Rvl = (LONG_TO_FIXNUM (Wrd42.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_19_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_7)
  (Wrd21.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_19_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_14;

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
gc_so_0dae60a3445e52e0 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	3,
	2,
	0,
	0,
	1,
	1,
	1,
	1,
	2,
	1,
	2,
	1,
	1,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 19)
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

static const struct liarc_code_S arr_decl_gc_so_0dae60a3445e52e0 [19] =
  {
    { "gc_so_code_1", 24, gc_so_code_1 },
    { "gc_so_code_2", 2, gc_so_code_2 },
    { "gc_so_code_3", 2, gc_so_code_3 },
    { "gc_so_code_4", 3, gc_so_code_4 },
    { "gc_so_code_5", 13, gc_so_code_5 },
    { "gc_so_code_6", 1, gc_so_code_6 },
    { "gc_so_code_7", 12, gc_so_code_7 },
    { "gc_so_code_8", 1, gc_so_code_8 },
    { "gc_so_code_9", 1, gc_so_code_9 },
    { "gc_so_code_10", 4, gc_so_code_10 },
    { "gc_so_code_11", 5, gc_so_code_11 },
    { "gc_so_code_12", 1, gc_so_code_12 },
    { "gc_so_code_13", 1, gc_so_code_13 },
    { "gc_so_code_14", 16, gc_so_code_14 },
    { "gc_so_code_15", 4, gc_so_code_15 },
    { "gc_so_code_16", 3, gc_so_code_16 },
    { "gc_so_code_17", 4, gc_so_code_17 },
    { "gc_so_code_18", 2, gc_so_code_18 },
    { "gc_so_code_19", 4, gc_so_code_19 }
  };

int
decl_gc_so_0dae60a3445e52e0 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_gc_so_0dae60a3445e52e0);
  return (0);
}

DECLARE_COMPILED_CODE ("gc.so", 3, decl_gc_so_0dae60a3445e52e0, gc_so_0dae60a3445e52e0)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_gc_so_data_0dae60a3445e52e0 [2812] =
  "\x57\x2e\x8f\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\x02\x82\xc3"
  "\x80\xc2\xb9\x81\xc0\x08\x0d\xba\x02\x07\x0d\xbb\x0d\xbc\x0d\xbd"
  "\x0d\xbe\x0d\xbf\x0d\x1c\xb2\x0d\x1c\x0d\x1c\x25\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x82\x88\x1b\x24\x28\xb4\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xc1\x28\xb6\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xc1\x82\x28\xb7\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x08\xc2\x1c\xc1\x1c"
  "\xc1\x1c\xb2\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88"
  "\x0c\x28\x0d\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b"
  "\x1b\x1b\x1d\xb2\x1b\x24\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc1\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xc3\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c"
  "\x1d\xb0\x02\x88\xc1\x02\x07\x0c\xc4\x80\xc1\xc0\xc1\x02\x0d\xb3"
  "\x0d\x1c\x0d\x24\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x25\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x1b\x24\x28\x1b\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\xb2\x24\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x1d\x28\xb5\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x81\xb1\x82\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xb9\x17\xb8\x88\xb0\xb1\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x0c\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1e"
  "\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1e\x1e\x1e"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x0d\x1b\x1b\x0d\x1b\xb3"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb2\x1b\x1b\x1b\x1b\x1b\x1b\xb7\xb6"
  "\xb5\xb4\x1b\x1b\x1b\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x51\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x67\x63"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x1a\x73\x65\x74\x2d\x66"
  "\x69\x78\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d\x76\x65\x63"
  "\x74\x6f\x72\x21\x0d\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74"
  "\x21\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x19\x67\x65\x74"
  "\x2d\x66\x69\x78\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d\x76"
  "\x65\x63\x74\x6f\x72\x15\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x73"
  "\x70\x61\x63\x65\x2d\x71\x75\x65\x75\x65\x95\x23\x11\x67\x63\x2d"
  "\x62\x6f\x6f\x74\x2d\x6c\x6f\x61\x64\x69\x6e\x67\x3f\x0d\x68\x6f"
  "\x6f\x6b\x2f\x67\x63\x2d\x66\x6c\x69\x70\x0c\x68\x6f\x6f\x6b\x2f"
  "\x70\x75\x72\x69\x66\x79\x14\x68\x6f\x6f\x6b\x2f\x73\x74\x61\x63"
  "\x6b\x2d\x6f\x76\x65\x72\x66\x6c\x6f\x77\x13\x68\x6f\x6f\x6b\x2f"
  "\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74\x72\x61\x70\x16\x64\x65"
  "\x66\x61\x75\x6c\x74\x2d\x73\x61\x66\x65\x74\x79\x2d\x6d\x61\x72"
  "\x67\x69\x6e\x09\x0e\x68\x6f\x6f\x6b\x2f\x67\x63\x2d\x73\x74\x61"
  "\x72\x74\x0a\x0f\x68\x6f\x6f\x6b\x2f\x67\x63\x2d\x66\x69\x6e\x69"
  "\x73\x68\x0b\x0a\x10\x64\x65\x66\x61\x75\x6c\x74\x2f\x67\x63\x2d"
  "\x66\x6c\x69\x70\x0c\x0f\x64\x65\x66\x61\x75\x6c\x74\x2f\x70\x75"
  "\x72\x69\x66\x79\x0d\x17\x64\x65\x66\x61\x75\x6c\x74\x2f\x73\x74"
  "\x61\x63\x6b\x2d\x6f\x76\x65\x72\x66\x6c\x6f\x77\x0e\x16\x64\x65"
  "\x66\x61\x75\x6c\x74\x2f\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74"
  "\x72\x61\x70\x0f\x11\x64\x65\x66\x61\x75\x6c\x74\x2f\x67\x63\x2d"
  "\x73\x74\x61\x72\x74\x10\x12\x64\x65\x66\x61\x75\x6c\x74\x2f\x67"
  "\x63\x2d\x66\x69\x6e\x69\x73\x68\x11\x21\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72\x2f\x73\x74\x61\x63"
  "\x6b\x2d\x6f\x76\x65\x72\x66\x6c\x6f\x77\x12\x15\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72\x2f\x67\x63"
  "\x13\x20\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x68\x61\x6e\x64"
  "\x6c\x65\x72\x2f\x68\x61\x72\x64\x77\x61\x72\x65\x2d\x74\x72\x61"
  "\x70\x14\x0a\x1b\x32\x81\x83\x02\x1a\x30\x81\x83\x02\x19\x2e\x81"
  "\x87\x02\x18\x2c\x81\x83\x02\x17\x2a\x81\x83\x02\x16\x28\x81\x85"
  "\x02\x15\x26\x81\x81\x02\x14\x24\x81\x83\x02\x13\x22\x81\x81\x02"
  "\x12\x20\x81\x81\x02\x11\x1e\x81\x81\x02\x10\x1c\x81\x81\x02\x0f"
  "\x1a\x81\x81\x02\x0e\x18\x81\x81\x02\x0d\x16\x81\x81\x02\x0c\x14"
  "\x81\x81\x02\x0b\x12\x81\x81\x02\x0a\x10\x81\x81\x02\x09\x0e\x81"
  "\x81\x02\x08\x0c\x81\x81\x02\x07\x0a\x81\x81\x02\x06\x08\x81\x81"
  "\x02\x05\x06\x81\x81\x02\x04\x04\x82\x02\x31\x54\x15\x02\x09\x02"
  "\x03\x02\x1d\x06\x81\x85\x02\x1c\x04\x84\x06\x05\x0d\x16\x02\x17"
  "\x73\x65\x74\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x65\x6e"
  "\x61\x62\x6c\x65\x73\x21\x02\x02\x1f\x06\x81\x85\x02\x1e\x04\x84"
  "\x06\x05\x0c\x17\x02\x10\x73\x65\x74\x2d\x74\x72\x61\x70\x2d\x73"
  "\x74\x61\x74\x65\x21\x03\x02\x22\x08\x81\x85\x02\x21\x06\x81\x83"
  "\x02\x20\x04\x83\x04\x07\x0f\x18\x02\x09\x73\x65\x74\x2d\x63\x64"
  "\x72\x21\x19\x04\x63\x64\x72\x1a\x04\x63\x61\x72\x1b\x02\x02\x1c"
  "\x71\x75\x65\x75\x65\x64\x2d\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x66\x61\x69\x6c\x75\x72\x65\x1c\x05\x10\x70\x75"
  "\x72\x69\x66\x79\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x1d\x03\x11"
  "\x67\x63\x2d\x66\x6c\x69\x70\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c"
  "\x1e\x04\x2f\x1c\x81\x8d\x02\x2e\x1a\x81\x8d\x02\x2d\x18\x81\x83"
  "\x02\x2c\x16\x81\x85\x02\x2b\x14\x83\x04\x2a\x12\x81\x83\x02\x29"
  "\x10\x81\x87\x02\x28\x0e\x81\x87\x02\x27\x0c\x81\x87\x02\x26\x0a"
  "\x81\x87\x02\x25\x08\x81\x85\x02\x24\x06\x81\x8b\x02\x23\x04\x81"
  "\x87\x02\x1b\x2b\x1f\x02\x32\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f"
  "\x20\x70\x75\x72\x69\x66\x79\x20\x61\x6c\x6c\x20\x71\x75\x65\x75"
  "\x65\x64\x20\x69\x74\x65\x6d\x73\x3b\x20\x64\x65\x71\x75\x65\x75"
  "\x69\x6e\x67\x20\x6f\x6e\x65\x2e\x03\x05\x77\x61\x72\x6e\x02\x30"
  "\x04\x82\x02\x03\x0a\x20\x02\x08\x2a\x50\x55\x52\x49\x46\x59\x3a"
  "\x20\x6e\x6f\x74\x20\x65\x6e\x6f\x75\x67\x68\x20\x72\x6f\x6f\x6d"
  "\x20\x69\x6e\x20\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20\x73\x70\x61"
  "\x63\x65\x1b\x19\x1a\x02\x09\x03\x03\x11\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x3f\x03\x1e\x77\x69\x74\x68"
  "\x2d\x61\x62\x73\x6f\x6c\x75\x74\x65\x6c\x79\x2d\x6e\x6f\x2d\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x1b\x05\x1d\x04\x06\x65\x72"
  "\x72\x6f\x72\x02\x08\x67\x63\x2d\x66\x6c\x69\x70\x19\x06\x3c\x1a"
  "\x81\x89\x02\x3b\x18\x81\x89\x02\x3a\x16\x81\x87\x02\x39\x14\x81"
  "\x89\x02\x38\x12\x81\x87\x02\x37\x10\x81\x83\x02\x36\x0e\x81\x85"
  "\x02\x35\x0c\x81\x83\x02\x34\x0a\x81\x83\x02\x33\x08\x81\x83\x02"
  "\x32\x06\x81\x87\x02\x31\x04\x85\x08\x19\x2f\x21\x02\x09\x2c\x41"
  "\x62\x6f\x72\x74\x69\x6e\x67\x21\x3a\x20\x6d\x61\x78\x69\x6d\x75"
  "\x6d\x20\x72\x65\x63\x75\x72\x73\x69\x6f\x6e\x20\x64\x65\x70\x74"
  "\x68\x20\x65\x78\x63\x65\x65\x64\x65\x64\x03\x0f\x61\x62\x6f\x72"
  "\x74\x2d\x3e\x6e\x65\x61\x72\x65\x73\x74\x22\x02\x3d\x04\x82\x02"
  "\x03\x0a\x23\x02\x0a\x20\x41\x62\x6f\x72\x74\x69\x6e\x67\x21\x3a"
  "\x20\x74\x68\x65\x20\x68\x61\x72\x64\x77\x61\x72\x65\x20\x74\x72"
  "\x61\x70\x70\x65\x64\x03\x22\x02\x3e\x04\x83\x04\x03\x0a\x24\x02"
  "\x0b\x10\x67\x61\x72\x62\x61\x67\x65\x2d\x63\x6f\x6c\x6c\x65\x63"
  "\x74\x02\x0a\x04\x0a\x67\x63\x2d\x66\x69\x6e\x69\x73\x68\x25\x03"
  "\x42\x0a\x81\x87\x02\x41\x08\x81\x85\x02\x40\x06\x81\x83\x02\x3f"
  "\x04\x83\x04\x09\x12\x26\x02\x0c\x1a\x11\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x2d\x70\x75\x72\x69\x66\x79\x02\x0a\x04\x25\x03\x47"
  "\x0c\x81\x8d\x02\x46\x0a\x81\x89\x02\x45\x08\x81\x8b\x02\x44\x06"
  "\x81\x87\x02\x43\x04\x85\x08\x0b\x15\x27\x02\x0d\x48\x04\x82\x02"
  "\x03\x28\x02\x0e\x49\x04\x84\x06\x03\x29\x02\x0f\x10\x65\x78\x69"
  "\x74\x2d\x77\x69\x74\x68\x2d\x76\x61\x6c\x75\x65\x15\x19\x41\x62"
  "\x6f\x72\x74\x69\x6e\x67\x21\x3a\x20\x6f\x75\x74\x20\x6f\x66\x20"
  "\x6d\x65\x6d\x6f\x72\x79\x0e\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x77"
  "\x72\x69\x74\x65\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x13\x74\x74\x79\x2d\x6f\x75\x74\x70\x75\x74\x2d\x63\x68"
  "\x61\x6e\x6e\x65\x6c\x14\x72\x65\x71\x75\x65\x73\x74\x2d\x69\x6e"
  "\x74\x65\x72\x72\x75\x70\x74\x73\x21\x81\x20\x17\x69\x6e\x74\x65"
  "\x72\x72\x75\x70\x74\x2d\x62\x69\x74\x2f\x61\x66\x74\x65\x72\x2d"
  "\x67\x63\x16\x67\x63\x2d\x62\x6f\x6f\x74\x2d\x64\x65\x61\x74\x68"
  "\x2d\x6d\x65\x73\x73\x61\x67\x65\x2a\x09\x67\x63\x2d\x63\x6c\x65"
  "\x61\x6e\x05\x03\x14\x63\x6d\x64\x6c\x2d\x6d\x65\x73\x73\x61\x67"
  "\x65\x2f\x61\x63\x74\x69\x76\x65\x04\x0b\x03\x22\x03\x15\x63\x6d"
  "\x64\x6c\x2d\x6d\x65\x73\x73\x61\x67\x65\x2f\x73\x74\x72\x69\x6e"
  "\x67\x73\x04\x16\x77\x69\x74\x68\x2d\x67\x63\x2d\x6e\x6f\x74\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x21\x04\x14\x63\x6d\x64\x6c\x2d"
  "\x6d\x65\x73\x73\x61\x67\x65\x2f\x61\x70\x70\x65\x6e\x64\x07\x59"
  "\x22\x81\x8b\x02\x58\x20\x81\x83\x02\x57\x1e\x81\x85\x02\x56\x1c"
  "\x83\x04\x55\x1a\x81\x89\x02\x54\x18\x81\x87\x02\x53\x16\x81\x89"
  "\x02\x52\x14\x81\x85\x02\x51\x12\x81\x85\x02\x50\x10\x81\x87\x02"
  "\x4f\x0e\x81\x85\x02\x4e\x0c\x81\x85\x02\x4d\x0a\x81\x87\x02\x4c"
  "\x08\x81\x85\x02\x4b\x06\x84\x06\x4a\x04\x81\x85\x02\x21\x40\x22"
  "\x02\x10\x08\x09\x02\x09\x02\x03\x19\x02\x5d\x0a\x81\x83\x02\x5c"
  "\x08\x81\x83\x02\x5b\x06\x83\x02\x5a\x04\x81\x83\x02\x09\x14\x2b"
  "\x02\x11\x08\x09\x02\x03\x1b\x03\x03\x60\x08\x81\x83\x02\x5f\x06"
  "\x81\x83\x02\x5e\x04\x83\x02\x07\x12\x1b\x02\x12\x02\x1a\x02\x02"
  "\x19\x02\x1a\x66\x6c\x75\x73\x68\x2d\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x71\x75\x65\x75\x65\x21\x1a\x03\x64\x0a"
  "\x81\x81\x02\x63\x08\x81\x81\x02\x62\x06\x81\x81\x02\x61\x04\x82"
  "\x02\x09\x15\x2c\x02\x13\x08\x05\x02\x66\x06\x81\x87\x02\x65\x04"
  "\x85\x04\x05\x0d\x2d\x02\x14\x02\x10\x67\x63\x2d\x73\x70\x61\x63"
  "\x65\x2d\x73\x74\x61\x74\x75\x73\x02\x6a\x0a\x81\x85\x02\x69\x08"
  "\x81\x83\x02\x68\x06\x81\x81\x02\x67\x04\x82\x02\x09\x12\x14\x04"
  "\x2d\x04\x2c\x04\x1b\x04\x2b\x06\x49\x0a\x3b\x3b\x20\x41\x62\x6f"
  "\x72\x74\x69\x6e\x67\x20\x62\x6f\x6f\x74\x2d\x6c\x6f\x61\x64\x3a"
  "\x20\x4e\x6f\x74\x20\x65\x6e\x6f\x75\x67\x68\x20\x6d\x65\x6d\x6f"
  "\x72\x79\x20\x74\x6f\x20\x6c\x6f\x61\x64\x20\x2d\x2d\x20\x55\x73"
  "\x65\x20\x2d\x6c\x61\x72\x67\x65\x20\x6f\x70\x74\x69\x6f\x6e\x2e"
  "\x0a\x22\x06\x29\x04\x28\x04\x27\x04\x26\x04\x24\x04\x23\x04\x21"
  "\x04\x20\x04\x1f\x14\x18\x04\x17\x04\x16\x04\x15\x04\x1e\x16\x63"
  "\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x73\x70\x61\x63\x65\x2f\x69\x6e"
  "\x2d\x75\x73\x65\x07\x70\x75\x72\x69\x66\x79\x1a\x19\x16\x73\x65"
  "\x74\x2d\x67\x63\x2d\x73\x61\x66\x65\x74\x79\x2d\x6d\x61\x72\x67"
  "\x69\x6e\x21\x2a\x25\x11\x10\x1d\x1e\x0b\x0a\x0f\x0e\x0d\x1c\x0c"
  "\x09\x14\x12\x13\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d"
  "\x70\x61\x63\x6b\x61\x67\x65\x21\x1e\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04"
  "\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
gc_so_data_0dae60a3445e52e0 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_gc_so_data_0dae60a3445e52e0 [0]))), (sizeof (prog_gc_so_data_0dae60a3445e52e0)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("gc.so", gc_so_data_0dae60a3445e52e0)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("gc.so", "c3080ff46391a602")
