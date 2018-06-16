/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:40-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_9 11
#define LABEL_1_10 13
#define LABEL_1_11 15
#define LABEL_1_12 17
#define LABEL_1_14 19
#define LABEL_1_15 21
#define LABEL_1_16 23
#define LABEL_1_17 25
#define LABEL_1_18 27
#define LABEL_1_19 29
#define LABEL_1_20 31
#define LABEL_1_21 33
#define LABEL_1_24 35
#define LABEL_1_25 37
#define LABEL_1_26 39
#define LABEL_1_27 41
#define LABEL_1_23 43
#define LABEL_1_31 45
#define LABEL_1_28 47
#define TAG_1_29 22
#define LABEL_1_34 49
#define LABEL_1_33 51
#define LABEL_1_36 53
#define LABEL_1_37 55
#define ENVIRONMENT_LABEL_1_3 101
#define DEBUGGING_LABEL_1_2 100
#define OBJECT_1_13 99
#define OBJECT_1_12 98
#define OBJECT_1_11 97
#define OBJECT_1_10 96
#define OBJECT_1_9 95
#define OBJECT_1_8 94
#define OBJECT_1_7 93
#define OBJECT_1_6 92
#define OBJECT_1_5 91
#define OBJECT_1_4 90
#define OBJECT_1_3 89
#define OBJECT_1_2 88
#define OBJECT_1_1 87
#define OBJECT_1_0 86
#define EXECUTE_CACHE_1_35 57
#define EXECUTE_CACHE_1_32 59
#define EXECUTE_CACHE_1_30 61
#define EXECUTE_CACHE_1_22 63
#define EXECUTE_CACHE_1_13 65
#define EXECUTE_CACHE_1_6 67
#define FREE_REFERENCE_1_3 70
#define FREE_REFERENCE_1_2 71
#define FREE_REFERENCE_1_1 72
#define FREE_REFERENCE_1_0 73
#define FREE_ASSIGNMENT_1_10 75
#define FREE_ASSIGNMENT_1_9 76
#define FREE_ASSIGNMENT_1_8 77
#define FREE_ASSIGNMENT_1_7 78
#define FREE_ASSIGNMENT_1_6 79
#define FREE_ASSIGNMENT_1_5 80
#define FREE_ASSIGNMENT_1_4 81
#define FREE_ASSIGNMENT_1_3 82
#define FREE_ASSIGNMENT_1_2 83
#define FREE_ASSIGNMENT_1_1 84
#define FREE_ASSIGNMENT_1_0 85
#define FREE_REFERENCES_LABEL_1_0 56
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
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
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd94;
  machine_word Wrd92;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_25;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_1_14);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_1_15);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_1_16);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_1_17);
      goto label_33;

    case 12:
      current_block = (Rpc - LABEL_1_18);
      goto label_34;

    case 13:
      current_block = (Rpc - LABEL_1_19);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_1_20);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_4;

    case 16:
      current_block = (Rpc - LABEL_1_24);
      goto label_37;

    case 17:
      current_block = (Rpc - LABEL_1_25);
      goto label_38;

    case 18:
      current_block = (Rpc - LABEL_1_26);
      goto label_39;

    case 19:
      current_block = (Rpc - LABEL_1_27);
      goto label_40;

    case 20:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_23;

    case 21:
      current_block = (Rpc - LABEL_1_31);
      goto label_41;

    case 22:
      current_block = (Rpc - LABEL_1_28);
      goto lambda_47;

    case 23:
      current_block = (Rpc - LABEL_1_34);
      goto label_42;

    case 24:
      current_block = (Rpc - LABEL_1_33);
      goto continuation_7;

    case 25:
      current_block = (Rpc - LABEL_1_36);
      goto label_43;

    case 26:
      current_block = (Rpc - LABEL_1_37);
      goto label_44;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_46)
DEFLABEL (initialize_packageB_25)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_88;

DEFLABEL (label_87)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_86)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_85;

DEFLABEL (label_84)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_83)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_80)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_77)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_4]));
  (Wrd19.Obj) = (current_block [OBJECT_1_3]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_76;

DEFLABEL (label_75)
  ((Wrd18.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_74)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_5]));
  (Wrd31.Obj) = (current_block [OBJECT_1_3]);
  (Wrd38.Obj) = ((Wrd30.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_73;

DEFLABEL (label_72)
  ((Wrd30.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_71)
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_6]));
  (Wrd43.Obj) = (current_block [OBJECT_1_3]);
  (Wrd50.Obj) = ((Wrd42.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_70;

DEFLABEL (label_69)
  ((Wrd42.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_68)
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_7]));
  (Wrd55.Obj) = (current_block [OBJECT_1_3]);
  (Wrd62.Obj) = ((Wrd54.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd54.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_65)
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_8]));
  (Wrd67.Obj) = (current_block [OBJECT_1_3]);
  (Wrd74.Obj) = ((Wrd66.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd66.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_62)
  (Wrd78.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_9]));
  (Wrd79.Obj) = (current_block [OBJECT_1_3]);
  (Wrd86.Obj) = ((Wrd78.pObj) [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd87.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  ((Wrd78.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_59)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd94.Obj) = (current_block [OBJECT_1_4]);
  (* (--Rsp)) = (Wrd94.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_22]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_58;
  Wrd9 = Wrd13;

DEFLABEL (label_57)
  (Wrd18.Obj) = (current_block [OBJECT_1_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_1_6]);
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
    goto label_56;
  Wrd28 = Wrd32;

DEFLABEL (label_55)
  (Wrd37.Obj) = (current_block [OBJECT_1_5]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_1_7]);
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
    goto label_54;
  Wrd47 = Wrd51;

DEFLABEL (label_53)
  (Wrd56.Obj) = (current_block [OBJECT_1_5]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd60.Obj) = (current_block [OBJECT_1_8]);
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
    goto label_52;
  Wrd66 = Wrd70;

DEFLABEL (label_51)
  (Wrd75.Obj) = (current_block [OBJECT_1_5]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (Wrd79.Obj) = (current_block [OBJECT_1_9]);
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
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd85.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_28])));
  Rhp += 1;
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd85.pObj)));
  Wrd86 = Wrd85;
  (Wrd87.Obj) = (Rsp [2]);
  ((Wrd86.pObj) [2]) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_30]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_1_23);
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_10]));
  (Wrd15.Obj) = ((Wrd7.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  ((Wrd7.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_48)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_32]));

DEFLABEL (label_50)
  if ((Wrd15.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_31])), (Wrd7.pObj), (Wrd6.Obj));

DEFLABEL (label_41)
  goto label_48;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_27])), (Wrd67.pObj));

DEFLABEL (label_40)
  (Wrd66.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_26])), (Wrd48.pObj));

DEFLABEL (label_39)
  (Wrd47.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_25])), (Wrd29.pObj));

DEFLABEL (label_38)
  (Wrd28.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_24])), (Wrd10.pObj));

DEFLABEL (label_37)
  (Wrd9.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_61)
  if ((Wrd86.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_60;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_20])), (Wrd78.pObj), (Wrd79.Obj));

DEFLABEL (label_36)
  goto label_59;

DEFLABEL (label_64)
  if ((Wrd74.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_19])), (Wrd66.pObj), (Wrd67.Obj));

DEFLABEL (label_35)
  goto label_62;

DEFLABEL (label_67)
  if ((Wrd62.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_18])), (Wrd54.pObj), (Wrd55.Obj));

DEFLABEL (label_34)
  goto label_65;

DEFLABEL (label_70)
  if ((Wrd50.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_69;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_17])), (Wrd42.pObj), (Wrd43.Obj));

DEFLABEL (label_33)
  goto label_68;

DEFLABEL (label_73)
  if ((Wrd38.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_72;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_16])), (Wrd30.pObj), (Wrd31.Obj));

DEFLABEL (label_32)
  goto label_71;

DEFLABEL (label_76)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_75;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_15])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_31)
  goto label_74;

DEFLABEL (label_79)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_78;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_14])), (Wrd6.pObj), Rvl);

DEFLABEL (label_30)
  goto label_77;

DEFLABEL (label_82)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_81;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_11])), (Wrd6.pObj), Rvl);

DEFLABEL (label_29)
  goto label_80;

DEFLABEL (label_85)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_84;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_28)
  goto label_83;

DEFLABEL (label_88)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_87;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_27)
  goto label_86;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_1_28);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_96;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_95)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_35]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_33);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_94;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_93)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_92;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_91)
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 10)
    goto label_90;

DEFLABEL (label_89)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_13]), 3);

DEFLABEL (label_90)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_89;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd33.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_89;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd27.pObj) = (& ((Wrd35.pObj) [(Wrd24.Lng)]));
  ((Wrd27.pObj) [1]) = (Wrd15.Obj);
  Rvl = (current_block [OBJECT_1_12]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_92)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_37]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_10]), 1);

DEFLABEL (label_44)
  (Wrd15.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_11]), 1);

DEFLABEL (label_43)
  (Wrd6.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_10]), 1);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_95;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 6
#define DEBUGGING_LABEL_2_2 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto clear_interruptsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (clear_interruptsB_3)
DEFLABEL (clear_interruptsB_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 6
#define DEBUGGING_LABEL_3_2 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto tty_next_interrupt_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tty_next_interrupt_char_3)
DEFLABEL (tty_next_interrupt_char_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 6
#define DEBUGGING_LABEL_4_2 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto set_fixed_objects_vectorB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_fixed_objects_vectorB_3)
DEFLABEL (set_fixed_objects_vectorB_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 6
#define DEBUGGING_LABEL_5_2 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto process_timer_clear_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_timer_clear_3)
DEFLABEL (process_timer_clear_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 0);

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
intrpt_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto real_timer_clear_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (real_timer_clear_3)
DEFLABEL (real_timer_clear_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_5 7
#define ENVIRONMENT_LABEL_7_3 15
#define DEBUGGING_LABEL_7_2 14
#define OBJECT_7_0 13
#define EXECUTE_CACHE_7_7 9
#define FREE_REFERENCE_7_0 12
#define FREE_REFERENCES_LABEL_7_0 8
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_7_4);
      goto timer_interrupt_handler_1;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (timer_interrupt_handler_5)
DEFLABEL (timer_interrupt_handler_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_7;
  Wrd8 = Wrd12;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_5 7
#define LABEL_8_7 9
#define LABEL_8_9 11
#define LABEL_8_10 13
#define LABEL_8_11 15
#define LABEL_8_15 17
#define LABEL_8_13 19
#define LABEL_8_14 21
#define LABEL_8_16 23
#define LABEL_8_17 25
#define LABEL_8_18 27
#define ENVIRONMENT_LABEL_8_3 52
#define DEBUGGING_LABEL_8_2 51
#define OBJECT_8_4 50
#define OBJECT_8_3 49
#define OBJECT_8_2 48
#define OBJECT_8_1 47
#define OBJECT_8_0 46
#define EXECUTE_CACHE_8_22 29
#define EXECUTE_CACHE_8_21 31
#define EXECUTE_CACHE_8_20 33
#define EXECUTE_CACHE_8_19 35
#define EXECUTE_CACHE_8_12 37
#define EXECUTE_CACHE_8_8 39
#define FREE_REFERENCE_8_3 42
#define FREE_REFERENCE_8_2 43
#define FREE_REFERENCE_8_1 44
#define FREE_REFERENCE_8_0 45
#define FREE_REFERENCES_LABEL_8_0 28
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_8_4);
      goto suspend_interrupt_handler_10;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_8_10);
      goto lambda_2;

    case 6:
      current_block = (Rpc - LABEL_8_11);
      goto lambda_9;

    case 7:
      current_block = (Rpc - LABEL_8_15);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_8_13);
      goto lambda_8;

    case 9:
      current_block = (Rpc - LABEL_8_14);
      goto lambda_4;

    case 10:
      current_block = (Rpc - LABEL_8_16);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_8_17);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_8_18);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (suspend_interrupt_handler_17)
DEFLABEL (suspend_interrupt_handler_10)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_28;
  Wrd8 = Wrd12;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_26;
  Wrd5 = Wrd9;

DEFLABEL (label_25)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (label_22)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_2]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_24;
  Wrd13 = Wrd17;

DEFLABEL (label_23)
  (Wrd22.Obj) = (current_block [OBJECT_8_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (Rsp [2]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_9])), (Wrd14.pObj));

DEFLABEL (label_14)
  (Wrd13.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_7])), (Wrd6.pObj));

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_6])), (Wrd9.pObj));

DEFLABEL (label_12)
  (Wrd8.Obj) = Rvl;
  goto label_27;

DEFLABEL (lambda_18)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_8_10);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (lambda_19)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_8_11);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_3]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_30;
  Wrd10 = Wrd14;

DEFLABEL (label_29)
  (Wrd19.Obj) = (current_block [OBJECT_8_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_15])), (Wrd11.pObj));

DEFLABEL (label_15)
  (Wrd10.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_20)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_8_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_22]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  Rvl = (current_block [OBJECT_8_3]);
  goto pop_return;

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (lambda_21)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_8_14);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_20]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
intrpt_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto gc_out_of_space_handler_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_out_of_space_handler_3)
DEFLABEL (gc_out_of_space_handler_0)
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
#define ENVIRONMENT_LABEL_10_3 15
#define DEBUGGING_LABEL_10_2 14
#define OBJECT_10_0 13
#define EXECUTE_CACHE_10_6 9
#define FREE_REFERENCE_10_0 12
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_10_4);
      goto after_gc_interrupt_handler_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (after_gc_interrupt_handler_5)
DEFLABEL (after_gc_interrupt_handler_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_7;
  Wrd6 = Wrd10;

DEFLABEL (label_6)
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_7])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_6 5
#define LABEL_11_5 7
#define LABEL_11_7 9
#define LABEL_11_9 11
#define LABEL_11_11 13
#define ENVIRONMENT_LABEL_11_3 27
#define DEBUGGING_LABEL_11_2 26
#define OBJECT_11_1 25
#define OBJECT_11_0 24
#define EXECUTE_CACHE_11_12 15
#define EXECUTE_CACHE_11_10 17
#define EXECUTE_CACHE_11_8 19
#define FREE_REFERENCE_11_1 22
#define FREE_REFERENCE_11_0 23
#define FREE_REFERENCES_LABEL_11_0 14
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_11_4);
      goto console_resize_handler_5;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_11_9);
      goto lambda_2;

    case 5:
      current_block = (Rpc - LABEL_11_11);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (console_resize_handler_10)
DEFLABEL (console_resize_handler_5)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_14;
  Wrd8 = Wrd12;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_11_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_6])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_13;

DEFLABEL (lambda_11)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_11_9);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_11])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define TAG_12_6 1
#define LABEL_12_7 7
#define ENVIRONMENT_LABEL_12_3 14
#define DEBUGGING_LABEL_12_2 13
#define OBJECT_12_1 12
#define OBJECT_12_0 11
#define EXECUTE_CACHE_12_8 9
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto illegal_interrupt_handler_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (illegal_interrupt_handler_5)
DEFLABEL (illegal_interrupt_handler_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_12_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Wrd5.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_6 5
#define LABEL_13_5 7
#define LABEL_13_8 9
#define LABEL_13_7 11
#define LABEL_13_9 13
#define LABEL_13_10 15
#define ENVIRONMENT_LABEL_13_3 27
#define DEBUGGING_LABEL_13_2 26
#define OBJECT_13_3 25
#define OBJECT_13_2 24
#define OBJECT_13_1 23
#define OBJECT_13_0 22
#define EXECUTE_CACHE_13_11 17
#define FREE_REFERENCE_13_1 20
#define FREE_REFERENCE_13_0 21
#define FREE_REFERENCES_LABEL_13_0 16
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_13_4);
      goto external_interrupt_handler_6;

    case 1:
      current_block = (Rpc - LABEL_13_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_13_9);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_13_10);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (external_interrupt_handler_12)
DEFLABEL (external_interrupt_handler_6)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_20;
  Wrd8 = Wrd12;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 0);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_18;
  Wrd7 = Wrd11;

DEFLABEL (label_17)
  Wrd6 = Wrd7;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_16;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_16;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_16;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  (Wrd16.pObj) = (& ((Wrd22.pObj) [(Wrd14.Lng)]));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_15)
  (Wrd31.Obj) = (Rsp [0]);
  if ((Wrd31.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;

DEFLABEL (label_13)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_14)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_13_3]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_8);
  goto label_13;

DEFLABEL (label_16)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_9])), (Wrd8.pObj));

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_6])), (Wrd9.pObj));

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_7 9
#define ENVIRONMENT_LABEL_14_3 18
#define DEBUGGING_LABEL_14_2 17
#define EXECUTE_CACHE_14_8 11
#define FREE_REFERENCE_14_2 14
#define FREE_REFERENCE_14_1 15
#define FREE_REFERENCE_14_0 16
#define FREE_REFERENCES_LABEL_14_0 10
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_14_4);
      goto Z__b_interrupt_handler_0;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__b_interrupt_handler_6)
DEFLABEL (Z__b_interrupt_handler_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_10;
  Wrd12 = Wrd16;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_2]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_8;
  Wrd19 = Wrd23;

DEFLABEL (label_7)
  (Rsp [3]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_7])), (Wrd20.pObj));

DEFLABEL (label_4)
  (Wrd19.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_6])), (Wrd13.pObj));

DEFLABEL (label_3)
  (Wrd12.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define ENVIRONMENT_LABEL_15_3 18
#define DEBUGGING_LABEL_15_2 17
#define EXECUTE_CACHE_15_8 11
#define FREE_REFERENCE_15_2 14
#define FREE_REFERENCE_15_1 15
#define FREE_REFERENCE_15_0 16
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_15_4);
      goto Z__g_interrupt_handler_0;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__g_interrupt_handler_6)
DEFLABEL (Z__g_interrupt_handler_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_10;
  Wrd12 = Wrd16;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_2]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_8;
  Wrd19 = Wrd23;

DEFLABEL (label_7)
  (Rsp [3]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_7])), (Wrd20.pObj));

DEFLABEL (label_4)
  (Wrd19.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_6])), (Wrd13.pObj));

DEFLABEL (label_3)
  (Wrd12.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_7 9
#define ENVIRONMENT_LABEL_16_3 18
#define DEBUGGING_LABEL_16_2 17
#define EXECUTE_CACHE_16_8 11
#define FREE_REFERENCE_16_2 14
#define FREE_REFERENCE_16_1 15
#define FREE_REFERENCE_16_0 16
#define FREE_REFERENCES_LABEL_16_0 10
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_16_4);
      goto Z__u_interrupt_handler_0;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__u_interrupt_handler_6)
DEFLABEL (Z__u_interrupt_handler_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_10;
  Wrd12 = Wrd16;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_2]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_8;
  Wrd19 = Wrd23;

DEFLABEL (label_7)
  (Rsp [3]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_7])), (Wrd20.pObj));

DEFLABEL (label_4)
  (Wrd19.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_6])), (Wrd13.pObj));

DEFLABEL (label_3)
  (Wrd12.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define ENVIRONMENT_LABEL_17_3 18
#define DEBUGGING_LABEL_17_2 17
#define EXECUTE_CACHE_17_8 11
#define FREE_REFERENCE_17_2 14
#define FREE_REFERENCE_17_1 15
#define FREE_REFERENCE_17_0 16
#define FREE_REFERENCES_LABEL_17_0 10
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_17_4);
      goto Z__x_interrupt_handler_0;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__x_interrupt_handler_6)
DEFLABEL (Z__x_interrupt_handler_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_10;
  Wrd12 = Wrd16;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_2]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_8;
  Wrd19 = Wrd23;

DEFLABEL (label_7)
  (Rsp [3]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_7])), (Wrd20.pObj));

DEFLABEL (label_4)
  (Wrd19.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_6])), (Wrd13.pObj));

DEFLABEL (label_3)
  (Wrd12.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_7 5
#define LABEL_18_5 7
#define LABEL_18_6 9
#define LABEL_18_13 11
#define LABEL_18_14 13
#define LABEL_18_9 15
#define TAG_18_10 6
#define ENVIRONMENT_LABEL_18_3 27
#define DEBUGGING_LABEL_18_2 26
#define OBJECT_18_0 25
#define EXECUTE_CACHE_18_12 17
#define EXECUTE_CACHE_18_11 19
#define EXECUTE_CACHE_18_8 21
#define FREE_REFERENCE_18_0 24
#define FREE_REFERENCES_LABEL_18_0 16
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      goto signal_interrupt_6;

    case 1:
      current_block = (Rpc - LABEL_18_7);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_18_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_18_13);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_18_14);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_18_9);
      goto lambda_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (signal_interrupt_10)
DEFLABEL (signal_interrupt_6)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_14;
  Wrd11 = Wrd15;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_9])));
  Rhp += 4;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd16 = Wrd9;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (Rsp [4]) = (Wrd8.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_11]));

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_18_0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_7])), (Wrd12.pObj));

DEFLABEL (label_8)
  (Wrd11.Obj) = Rvl;
  goto label_13;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_18_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_14);

DEFLABEL (label_17)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [4]);
  if (! ((Wrd17.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_16;

DEFLABEL (label_15)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Rsp [0]) = (Wrd28.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_16)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  Rvl = (current_block [OBJECT_18_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define LABEL_19_8 9
#define LABEL_19_9 11
#define LABEL_19_10 13
#define LABEL_19_11 15
#define LABEL_19_12 17
#define LABEL_19_13 19
#define LABEL_19_14 21
#define LABEL_19_15 23
#define LABEL_19_19 25
#define LABEL_19_17 27
#define LABEL_19_21 29
#define LABEL_19_22 31
#define LABEL_19_16 33
#define LABEL_19_24 35
#define LABEL_19_25 37
#define LABEL_19_26 39
#define LABEL_19_27 41
#define LABEL_19_29 43
#define LABEL_19_30 45
#define LABEL_19_31 47
#define LABEL_19_32 49
#define LABEL_19_33 51
#define LABEL_19_34 53
#define LABEL_19_35 55
#define LABEL_19_36 57
#define LABEL_19_37 59
#define LABEL_19_38 61
#define LABEL_19_39 63
#define LABEL_19_40 65
#define LABEL_19_41 67
#define LABEL_19_42 69
#define LABEL_19_43 71
#define LABEL_19_44 73
#define LABEL_19_45 75
#define LABEL_19_46 77
#define LABEL_19_47 79
#define LABEL_19_48 81
#define LABEL_19_49 83
#define LABEL_19_50 85
#define LABEL_19_51 87
#define LABEL_19_52 89
#define LABEL_19_53 91
#define LABEL_19_54 93
#define LABEL_19_55 95
#define LABEL_19_58 97
#define LABEL_19_59 99
#define LABEL_19_56 101
#define LABEL_19_61 103
#define LABEL_19_62 105
#define LABEL_19_63 107
#define LABEL_19_64 109
#define LABEL_19_65 111
#define LABEL_19_66 113
#define LABEL_19_67 115
#define LABEL_19_68 117
#define ENVIRONMENT_LABEL_19_3 161
#define DEBUGGING_LABEL_19_2 160
#define OBJECT_19_12 159
#define OBJECT_19_11 158
#define OBJECT_19_10 157
#define OBJECT_19_9 156
#define OBJECT_19_8 155
#define OBJECT_19_7 154
#define OBJECT_19_6 153
#define OBJECT_19_5 152
#define OBJECT_19_4 151
#define OBJECT_19_3 150
#define OBJECT_19_2 149
#define OBJECT_19_1 148
#define OBJECT_19_0 147
#define EXECUTE_CACHE_19_60 119
#define EXECUTE_CACHE_19_57 121
#define EXECUTE_CACHE_19_23 123
#define EXECUTE_CACHE_19_28 125
#define EXECUTE_CACHE_19_20 127
#define EXECUTE_CACHE_19_18 129
#define EXECUTE_CACHE_19_6 131
#define FREE_REFERENCE_19_12 134
#define FREE_REFERENCE_19_11 135
#define FREE_REFERENCE_19_10 136
#define FREE_REFERENCE_19_9 137
#define FREE_REFERENCE_19_8 138
#define FREE_REFERENCE_19_7 139
#define FREE_REFERENCE_19_6 140
#define FREE_REFERENCE_19_5 141
#define FREE_REFERENCE_19_4 142
#define FREE_REFERENCE_19_3 143
#define FREE_REFERENCE_19_2 144
#define FREE_REFERENCE_19_1 145
#define FREE_REFERENCE_19_0 146
#define FREE_REFERENCES_LABEL_19_0 118
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
intrpt_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd28;
  machine_word Wrd37;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd8;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd152;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd153;
  machine_word Wrd177;
  machine_word Wrd173;
  machine_word Wrd172;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd145;
  machine_word Wrd146;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd147;
  machine_word Wrd193;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd138;
  machine_word Wrd139;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd209;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd131;
  machine_word Wrd132;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd133;
  machine_word Wrd225;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd217;
  machine_word Wrd216;
  machine_word Wrd215;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd124;
  machine_word Wrd125;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd241;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd233;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd235;
  machine_word Wrd234;
  machine_word Wrd117;
  machine_word Wrd118;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd257;
  machine_word Wrd253;
  machine_word Wrd252;
  machine_word Wrd249;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd251;
  machine_word Wrd250;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd273;
  machine_word Wrd269;
  machine_word Wrd268;
  machine_word Wrd265;
  machine_word Wrd264;
  machine_word Wrd263;
  machine_word Wrd267;
  machine_word Wrd266;
  machine_word Wrd103;
  machine_word Wrd104;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd289;
  machine_word Wrd285;
  machine_word Wrd284;
  machine_word Wrd281;
  machine_word Wrd280;
  machine_word Wrd279;
  machine_word Wrd283;
  machine_word Wrd282;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd305;
  machine_word Wrd301;
  machine_word Wrd300;
  machine_word Wrd297;
  machine_word Wrd296;
  machine_word Wrd295;
  machine_word Wrd299;
  machine_word Wrd298;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd321;
  machine_word Wrd317;
  machine_word Wrd316;
  machine_word Wrd313;
  machine_word Wrd312;
  machine_word Wrd311;
  machine_word Wrd315;
  machine_word Wrd314;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd338;
  machine_word Wrd334;
  machine_word Wrd333;
  machine_word Wrd330;
  machine_word Wrd329;
  machine_word Wrd328;
  machine_word Wrd325;
  machine_word Wrd332;
  machine_word Wrd331;
  machine_word Wrd354;
  machine_word Wrd350;
  machine_word Wrd349;
  machine_word Wrd346;
  machine_word Wrd345;
  machine_word Wrd344;
  machine_word Wrd348;
  machine_word Wrd347;
  machine_word Wrd75;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd361;
  machine_word Wrd358;
  machine_word Wrd370;
  machine_word Wrd369;
  machine_word Wrd368;
  machine_word Wrd366;
  machine_word Wrd364;
  machine_word Wrd363;
  machine_word Wrd372;
  machine_word Wrd371;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_19_4);
      goto install_54;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto lambda_53;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto label_56;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto label_57;

    case 5:
      current_block = (Rpc - LABEL_19_10);
      goto label_58;

    case 6:
      current_block = (Rpc - LABEL_19_11);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_19_12);
      goto label_59;

    case 8:
      current_block = (Rpc - LABEL_19_13);
      goto label_60;

    case 9:
      current_block = (Rpc - LABEL_19_14);
      goto continuation_0;

    case 10:
      current_block = (Rpc - LABEL_19_15);
      goto label_61;

    case 11:
      current_block = (Rpc - LABEL_19_19);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_19_17);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_19_21);
      goto label_66;

    case 14:
      current_block = (Rpc - LABEL_19_22);
      goto label_67;

    case 15:
      current_block = (Rpc - LABEL_19_16);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_19_24);
      goto label_62;

    case 17:
      current_block = (Rpc - LABEL_19_25);
      goto label_63;

    case 18:
      current_block = (Rpc - LABEL_19_26);
      goto label_64;

    case 19:
      current_block = (Rpc - LABEL_19_27);
      goto label_65;

    case 20:
      current_block = (Rpc - LABEL_19_29);
      goto continuation_26;

    case 21:
      current_block = (Rpc - LABEL_19_30);
      goto continuation_23;

    case 22:
      current_block = (Rpc - LABEL_19_31);
      goto do_loop_29;

    case 23:
      current_block = (Rpc - LABEL_19_32);
      goto label_70;

    case 24:
      current_block = (Rpc - LABEL_19_33);
      goto label_93;

    case 25:
      current_block = (Rpc - LABEL_19_34);
      goto label_92;

    case 26:
      current_block = (Rpc - LABEL_19_35);
      goto label_71;

    case 27:
      current_block = (Rpc - LABEL_19_36);
      goto label_91;

    case 28:
      current_block = (Rpc - LABEL_19_37);
      goto label_72;

    case 29:
      current_block = (Rpc - LABEL_19_38);
      goto label_90;

    case 30:
      current_block = (Rpc - LABEL_19_39);
      goto label_73;

    case 31:
      current_block = (Rpc - LABEL_19_40);
      goto label_89;

    case 32:
      current_block = (Rpc - LABEL_19_41);
      goto label_74;

    case 33:
      current_block = (Rpc - LABEL_19_42);
      goto label_88;

    case 34:
      current_block = (Rpc - LABEL_19_43);
      goto label_75;

    case 35:
      current_block = (Rpc - LABEL_19_44);
      goto label_87;

    case 36:
      current_block = (Rpc - LABEL_19_45);
      goto label_76;

    case 37:
      current_block = (Rpc - LABEL_19_46);
      goto label_86;

    case 38:
      current_block = (Rpc - LABEL_19_47);
      goto label_77;

    case 39:
      current_block = (Rpc - LABEL_19_48);
      goto label_85;

    case 40:
      current_block = (Rpc - LABEL_19_49);
      goto label_78;

    case 41:
      current_block = (Rpc - LABEL_19_50);
      goto label_84;

    case 42:
      current_block = (Rpc - LABEL_19_51);
      goto label_79;

    case 43:
      current_block = (Rpc - LABEL_19_52);
      goto label_83;

    case 44:
      current_block = (Rpc - LABEL_19_53);
      goto label_80;

    case 45:
      current_block = (Rpc - LABEL_19_54);
      goto label_82;

    case 46:
      current_block = (Rpc - LABEL_19_55);
      goto label_81;

    case 47:
      current_block = (Rpc - LABEL_19_58);
      goto label_69;

    case 48:
      current_block = (Rpc - LABEL_19_59);
      goto label_68;

    case 49:
      current_block = (Rpc - LABEL_19_56);
      goto continuation_44;

    case 50:
      current_block = (Rpc - LABEL_19_61);
      goto label_95;

    case 51:
      current_block = (Rpc - LABEL_19_62);
      goto label_94;

    case 52:
      current_block = (Rpc - LABEL_19_63);
      goto continuation_46;

    case 53:
      current_block = (Rpc - LABEL_19_64);
      goto label_97;

    case 54:
      current_block = (Rpc - LABEL_19_65);
      goto label_96;

    case 55:
      current_block = (Rpc - LABEL_19_66);
      goto continuation_48;

    case 56:
      current_block = (Rpc - LABEL_19_67);
      goto label_98;

    case 57:
      current_block = (Rpc - LABEL_19_68);
      goto continuation_50;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (install_100)
DEFLABEL (install_54)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (lambda_101)
DEFLABEL (lambda_53)
  INTERRUPT_CHECK (26, LABEL_19_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_132;
  Wrd5 = Wrd9;

DEFLABEL (label_131)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 0);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_130;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_130;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd15.Lng))))
    goto label_130;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.pObj) = (& ((Wrd13.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_129)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_128;
  Wrd22 = Wrd26;

DEFLABEL (label_127)
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 0);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_11);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_126;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_126;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd15.Lng))))
    goto label_126;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.pObj) = (& ((Wrd13.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_125)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_2]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_124;
  Wrd22 = Wrd26;

DEFLABEL (label_123)
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_14);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_122;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_122;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd15.Lng))))
    goto label_122;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.pObj) = (& ((Wrd13.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_121)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_17]))));
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_18]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_19_17);
  (* (--Rsp)) = Rvl;
  (Wrd56.Obj) = (Rsp [4]);
  if (! ((Wrd56.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_103;
  (* (--Rsp)) = Rvl;
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_20]));

DEFLABEL (label_103)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_120;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd58.Obj) = (MAKE_OBJECT (26, (Wrd62.uLng)));

DEFLABEL (label_119)
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 26))
    goto label_118;
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd71.uLng) == 26))
    goto label_118;
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! ((Wrd82.Lng) > (Wrd83.Lng)))
    goto label_105;

DEFLABEL (label_104)
  (Wrd80.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd80.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_23]));

DEFLABEL (label_105)
  (Wrd79.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd79.Obj);

DEFLABEL (label_117)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 10))
    goto label_116;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_115)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_107;

DEFLABEL (label_106)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_28]));

DEFLABEL (label_107)
  if (! ((Wrd20.uLng) == 10))
    goto label_114;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd21.Obj) = (MAKE_OBJECT (26, (Wrd25.uLng)));

DEFLABEL (label_113)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_112;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_112;
  if (! ((Wrd21.Obj) == (Wrd33.Obj)))
    goto label_106;

DEFLABEL (label_111)
  (Wrd42.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_110)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_109;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Obj) = (MAKE_OBJECT (26, (Wrd46.uLng)));
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_108)
  (Wrd54.Obj) = (current_block [OBJECT_19_3]);
  (* (--Rsp)) = (Wrd54.Obj);
  goto do_loop_29;

DEFLABEL (label_109)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_27]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (label_112)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_26]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_64)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_106;
  goto label_111;

DEFLABEL (label_114)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_25]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_63)
  (Wrd21.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_24]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_22]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_67)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_105;
  goto label_104;

DEFLABEL (label_120)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_21]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 1);

DEFLABEL (label_66)
  (Wrd58.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_13])), (Wrd23.pObj));

DEFLABEL (label_60)
  (Wrd22.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_10])), (Wrd23.pObj));

DEFLABEL (label_58)
  (Wrd22.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_7])), (Wrd6.pObj));

DEFLABEL (label_56)
  (Wrd5.Obj) = Rvl;
  goto label_131;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_19_19);
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_19_16);
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (do_loop_102)
DEFLABEL (do_loop_29)
  INTERRUPT_CHECK (26, LABEL_19_31);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_140;
  (Wrd66.Obj) = (Rsp [4]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 10))
    goto label_139;
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_139;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) (Wrd61.Lng)) < ((unsigned long) (Wrd65.Lng))))
    goto label_139;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd11.pObj) = (& ((Wrd63.pObj) [(Wrd8.Lng)]));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_134;

DEFLABEL (label_133)
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  (Wrd57.Lng) = ((Wrd56.Lng) + 1L);
  (Wrd54.Obj) = (LONG_TO_FIXNUM (Wrd57.Lng));
  (Rsp [0]) = (Wrd54.Obj);
  goto do_loop_29;

DEFLABEL (label_134)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_30]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Lng) = 1L;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = (FIXNUM_LSH ((Wrd18.Lng), (Wrd20.Lng)));
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Lng) = ((Wrd21.Lng) - 1L);
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (Wrd46.Obj) = (Rsp [4]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_138;
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_138;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) (Wrd20.Lng)) < ((unsigned long) (Wrd45.Lng))))
    goto label_138;
  (Wrd34.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd37.pObj) = (& ((Wrd43.pObj) [(Wrd34.Lng)]));
  ((Wrd37.pObj) [1]) = (Wrd23.Obj);

DEFLABEL (label_137)
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_29]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_60]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_19_29);
  (Rsp [2]) = Rvl;
  (Wrd371.Obj) = (Rsp [0]);
  (Wrd372.uLng) = (OBJECT_TYPE (Wrd371.Obj));
  if ((Wrd372.uLng) == 10)
    goto label_136;

DEFLABEL (label_135)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_136)
  (Wrd363.Obj) = (Rsp [1]);
  (Wrd364.uLng) = (OBJECT_TYPE (Wrd363.Obj));
  if (! ((Wrd364.uLng) == 26))
    goto label_135;
  (Wrd366.Lng) = (FIXNUM_TO_LONG (Wrd363.Obj));
  (Wrd368.pObj) = (OBJECT_ADDRESS (Wrd371.Obj));
  (Wrd369.Obj) = ((Wrd368.pObj) [0]);
  (Wrd370.Lng) = (FIXNUM_TO_LONG (Wrd369.Obj));
  if (! (((unsigned long) (Wrd366.Lng)) < ((unsigned long) (Wrd370.Lng))))
    goto label_135;
  (Wrd358.uLng) = (OBJECT_DATUM (Wrd363.Obj));
  (Wrd361.pObj) = (& ((Wrd368.pObj) [(Wrd358.Lng)]));
  ((Wrd361.pObj) [1]) = Rvl;
  Rsp = (& (Rsp [4]));
  goto label_133;

DEFLABEL (label_138)
  (Wrd48.Obj) = (Rsp [4]);
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_59]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_68)
  goto label_137;

DEFLABEL (label_139)
  (Wrd68.Obj) = (Rsp [4]);
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_58]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_69)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_134;
  goto label_133;

DEFLABEL (label_140)
  Rsp = (& (Rsp [2]));
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_3]));
  (Wrd80.Obj) = ((Wrd77.pObj) [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd81.uLng) == 50)
    goto label_198;
  Wrd76 = Wrd80;

DEFLABEL (label_197)
  Wrd75 = Wrd76;
  (Wrd347.Obj) = (Rsp [0]);
  (Wrd348.uLng) = (OBJECT_TYPE (Wrd347.Obj));
  if (! ((Wrd348.uLng) == 10))
    goto label_196;
  (Wrd344.pObj) = (OBJECT_ADDRESS (Wrd347.Obj));
  (Wrd345.Obj) = ((Wrd344.pObj) [0]);
  (Wrd346.Lng) = (FIXNUM_TO_LONG (Wrd345.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd346.Lng))))
    goto label_196;
  ((Wrd344.pObj) [1]) = (Wrd76.Obj);

DEFLABEL (label_195)
  (Wrd331.Obj) = (Rsp [0]);
  (Wrd332.uLng) = (OBJECT_TYPE (Wrd331.Obj));
  if (! ((Wrd332.uLng) == 10))
    goto label_194;
  (Wrd325.Obj) = (current_block [OBJECT_19_5]);
  (Wrd328.pObj) = (OBJECT_ADDRESS (Wrd331.Obj));
  (Wrd329.Obj) = ((Wrd328.pObj) [0]);
  (Wrd330.Lng) = (FIXNUM_TO_LONG (Wrd329.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd330.Lng))))
    goto label_194;
  ((Wrd328.pObj) [3]) = (Wrd325.Obj);

DEFLABEL (label_193)
  (Wrd84.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_4]));
  (Wrd87.Obj) = ((Wrd84.pObj) [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd88.uLng) == 50)
    goto label_192;
  Wrd83 = Wrd87;

DEFLABEL (label_191)
  Wrd82 = Wrd83;
  (Wrd314.Obj) = (Rsp [2]);
  (Wrd315.uLng) = (OBJECT_TYPE (Wrd314.Obj));
  if (! ((Wrd315.uLng) == 10))
    goto label_190;
  (Wrd311.pObj) = (OBJECT_ADDRESS (Wrd314.Obj));
  (Wrd312.Obj) = ((Wrd311.pObj) [0]);
  (Wrd313.Lng) = (FIXNUM_TO_LONG (Wrd312.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd313.Lng))))
    goto label_190;
  ((Wrd311.pObj) [7]) = (Wrd83.Obj);

DEFLABEL (label_189)
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_5]));
  (Wrd94.Obj) = ((Wrd91.pObj) [0]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if ((Wrd95.uLng) == 50)
    goto label_188;
  Wrd90 = Wrd94;

DEFLABEL (label_187)
  Wrd89 = Wrd90;
  (Wrd298.Obj) = (Rsp [0]);
  (Wrd299.uLng) = (OBJECT_TYPE (Wrd298.Obj));
  if (! ((Wrd299.uLng) == 10))
    goto label_186;
  (Wrd295.pObj) = (OBJECT_ADDRESS (Wrd298.Obj));
  (Wrd296.Obj) = ((Wrd295.pObj) [0]);
  (Wrd297.Lng) = (FIXNUM_TO_LONG (Wrd296.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd297.Lng))))
    goto label_186;
  ((Wrd295.pObj) [7]) = (Wrd90.Obj);

DEFLABEL (label_185)
  (Wrd98.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_6]));
  (Wrd101.Obj) = ((Wrd98.pObj) [0]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if ((Wrd102.uLng) == 50)
    goto label_184;
  Wrd97 = Wrd101;

DEFLABEL (label_183)
  Wrd96 = Wrd97;
  (Wrd282.Obj) = (Rsp [2]);
  (Wrd283.uLng) = (OBJECT_TYPE (Wrd282.Obj));
  if (! ((Wrd283.uLng) == 10))
    goto label_182;
  (Wrd279.pObj) = (OBJECT_ADDRESS (Wrd282.Obj));
  (Wrd280.Obj) = ((Wrd279.pObj) [0]);
  (Wrd281.Lng) = (FIXNUM_TO_LONG (Wrd280.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd281.Lng))))
    goto label_182;
  ((Wrd279.pObj) [5]) = (Wrd97.Obj);

DEFLABEL (label_181)
  (Wrd105.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_7]));
  (Wrd108.Obj) = ((Wrd105.pObj) [0]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if ((Wrd109.uLng) == 50)
    goto label_180;
  Wrd104 = Wrd108;

DEFLABEL (label_179)
  Wrd103 = Wrd104;
  (Wrd266.Obj) = (Rsp [0]);
  (Wrd267.uLng) = (OBJECT_TYPE (Wrd266.Obj));
  if (! ((Wrd267.uLng) == 10))
    goto label_178;
  (Wrd263.pObj) = (OBJECT_ADDRESS (Wrd266.Obj));
  (Wrd264.Obj) = ((Wrd263.pObj) [0]);
  (Wrd265.Lng) = (FIXNUM_TO_LONG (Wrd264.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd265.Lng))))
    goto label_178;
  ((Wrd263.pObj) [5]) = (Wrd104.Obj);

DEFLABEL (label_177)
  (Wrd112.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_8]));
  (Wrd115.Obj) = ((Wrd112.pObj) [0]);
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if ((Wrd116.uLng) == 50)
    goto label_176;
  Wrd111 = Wrd115;

DEFLABEL (label_175)
  Wrd110 = Wrd111;
  (Wrd250.Obj) = (Rsp [2]);
  (Wrd251.uLng) = (OBJECT_TYPE (Wrd250.Obj));
  if (! ((Wrd251.uLng) == 10))
    goto label_174;
  (Wrd247.pObj) = (OBJECT_ADDRESS (Wrd250.Obj));
  (Wrd248.Obj) = ((Wrd247.pObj) [0]);
  (Wrd249.Lng) = (FIXNUM_TO_LONG (Wrd248.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd249.Lng))))
    goto label_174;
  ((Wrd247.pObj) [6]) = (Wrd111.Obj);

DEFLABEL (label_173)
  (Wrd119.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_7]));
  (Wrd122.Obj) = ((Wrd119.pObj) [0]);
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if ((Wrd123.uLng) == 50)
    goto label_172;
  Wrd118 = Wrd122;

DEFLABEL (label_171)
  Wrd117 = Wrd118;
  (Wrd234.Obj) = (Rsp [0]);
  (Wrd235.uLng) = (OBJECT_TYPE (Wrd234.Obj));
  if (! ((Wrd235.uLng) == 10))
    goto label_170;
  (Wrd231.pObj) = (OBJECT_ADDRESS (Wrd234.Obj));
  (Wrd232.Obj) = ((Wrd231.pObj) [0]);
  (Wrd233.Lng) = (FIXNUM_TO_LONG (Wrd232.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd233.Lng))))
    goto label_170;
  ((Wrd231.pObj) [6]) = (Wrd118.Obj);

DEFLABEL (label_169)
  (Wrd126.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_9]));
  (Wrd129.Obj) = ((Wrd126.pObj) [0]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if ((Wrd130.uLng) == 50)
    goto label_168;
  Wrd125 = Wrd129;

DEFLABEL (label_167)
  Wrd124 = Wrd125;
  (Wrd218.Obj) = (Rsp [2]);
  (Wrd219.uLng) = (OBJECT_TYPE (Wrd218.Obj));
  if (! ((Wrd219.uLng) == 10))
    goto label_166;
  (Wrd215.pObj) = (OBJECT_ADDRESS (Wrd218.Obj));
  (Wrd216.Obj) = ((Wrd215.pObj) [0]);
  (Wrd217.Lng) = (FIXNUM_TO_LONG (Wrd216.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd217.Lng))))
    goto label_166;
  ((Wrd215.pObj) [9]) = (Wrd125.Obj);

DEFLABEL (label_165)
  (Wrd133.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_7]));
  (Wrd136.Obj) = ((Wrd133.pObj) [0]);
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd136.Obj));
  if ((Wrd137.uLng) == 50)
    goto label_164;
  Wrd132 = Wrd136;

DEFLABEL (label_163)
  Wrd131 = Wrd132;
  (Wrd202.Obj) = (Rsp [0]);
  (Wrd203.uLng) = (OBJECT_TYPE (Wrd202.Obj));
  if (! ((Wrd203.uLng) == 10))
    goto label_162;
  (Wrd199.pObj) = (OBJECT_ADDRESS (Wrd202.Obj));
  (Wrd200.Obj) = ((Wrd199.pObj) [0]);
  (Wrd201.Lng) = (FIXNUM_TO_LONG (Wrd200.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd201.Lng))))
    goto label_162;
  ((Wrd199.pObj) [9]) = (Wrd132.Obj);

DEFLABEL (label_161)
  (Wrd140.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_10]));
  (Wrd143.Obj) = ((Wrd140.pObj) [0]);
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if ((Wrd144.uLng) == 50)
    goto label_160;
  Wrd139 = Wrd143;

DEFLABEL (label_159)
  Wrd138 = Wrd139;
  (Wrd186.Obj) = (Rsp [2]);
  (Wrd187.uLng) = (OBJECT_TYPE (Wrd186.Obj));
  if (! ((Wrd187.uLng) == 10))
    goto label_158;
  (Wrd183.pObj) = (OBJECT_ADDRESS (Wrd186.Obj));
  (Wrd184.Obj) = ((Wrd183.pObj) [0]);
  (Wrd185.Lng) = (FIXNUM_TO_LONG (Wrd184.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd185.Lng))))
    goto label_158;
  ((Wrd183.pObj) [8]) = (Wrd139.Obj);

DEFLABEL (label_157)
  (Wrd147.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_11]));
  (Wrd150.Obj) = ((Wrd147.pObj) [0]);
  (Wrd151.uLng) = (OBJECT_TYPE (Wrd150.Obj));
  if ((Wrd151.uLng) == 50)
    goto label_156;
  Wrd146 = Wrd150;

DEFLABEL (label_155)
  Wrd145 = Wrd146;
  (Wrd170.Obj) = (Rsp [0]);
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd170.Obj));
  if (! ((Wrd171.uLng) == 10))
    goto label_154;
  (Wrd167.pObj) = (OBJECT_ADDRESS (Wrd170.Obj));
  (Wrd168.Obj) = ((Wrd167.pObj) [0]);
  (Wrd169.Lng) = (FIXNUM_TO_LONG (Wrd168.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd169.Lng))))
    goto label_154;
  ((Wrd167.pObj) [8]) = (Wrd146.Obj);

DEFLABEL (label_153)
  (Wrd153.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_12]));
  (Wrd156.Obj) = ((Wrd153.pObj) [0]);
  (Wrd157.uLng) = (OBJECT_TYPE (Wrd156.Obj));
  if ((Wrd157.uLng) == 50)
    goto label_152;
  Wrd152 = Wrd156;

DEFLABEL (label_151)
  (* (--Rsp)) = (Wrd152.Obj);
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_56]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (Wrd161.Obj) = (current_block [OBJECT_19_11]);
  (* (--Rsp)) = (Wrd161.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_57]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_19_56);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_150;
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 26))
    goto label_150;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_150;
  (Wrd16.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd19.pObj) = (& ((Wrd23.pObj) [(Wrd16.Lng)]));
  ((Wrd19.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_149)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_148;
  Wrd7 = Wrd11;

DEFLABEL (label_147)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_63]))));
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 0);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_19_63);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd25.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd25.uLng) == 10))
    goto label_146;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_146;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd22.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_146;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd18.pObj) = (& ((Wrd22.pObj) [(Wrd16.Lng)]));
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [1]) = (Wrd19.Obj);

DEFLABEL (label_145)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_144;
  Wrd7 = Wrd11;

DEFLABEL (label_143)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_66]))));
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 0);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_19_66);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 10))
    goto label_142;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_142;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) (Wrd15.Lng)) < ((unsigned long) (Wrd18.Lng))))
    goto label_142;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd12.pObj) = (& ((Wrd16.pObj) [(Wrd10.Lng)]));
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [1]) = (Wrd13.Obj);

DEFLABEL (label_141)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_68]))));
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 0);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_19_68);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_12]), 1);

DEFLABEL (label_142)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_67]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_98)
  goto label_141;

DEFLABEL (label_144)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_65])), (Wrd8.pObj));

DEFLABEL (label_96)
  (Wrd7.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_64]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_97)
  goto label_145;

DEFLABEL (label_148)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_62])), (Wrd8.pObj));

DEFLABEL (label_94)
  (Wrd7.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_61]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_95)
  goto label_149;

DEFLABEL (label_152)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_55])), (Wrd153.pObj));

DEFLABEL (label_81)
  (Wrd152.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd172.Obj) = (Rsp [0]);
  (Wrd173.Obj) = (current_block [OBJECT_19_10]);
  (Wrd177.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_54]))));
  (* (--Rsp)) = (Wrd177.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  (* (--Rsp)) = (Wrd172.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_82)
  goto label_153;

DEFLABEL (label_156)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_53])), (Wrd147.pObj));

DEFLABEL (label_80)
  (Wrd146.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  (Wrd188.Obj) = (Rsp [2]);
  (Wrd189.Obj) = (current_block [OBJECT_19_10]);
  (Wrd193.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_52]))));
  (* (--Rsp)) = (Wrd193.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd189.Obj);
  (* (--Rsp)) = (Wrd188.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_83)
  goto label_157;

DEFLABEL (label_160)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_51])), (Wrd140.pObj));

DEFLABEL (label_79)
  (Wrd139.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  (Wrd204.Obj) = (Rsp [0]);
  (Wrd205.Obj) = (current_block [OBJECT_19_9]);
  (Wrd209.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_50]))));
  (* (--Rsp)) = (Wrd209.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd205.Obj);
  (* (--Rsp)) = (Wrd204.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_84)
  goto label_161;

DEFLABEL (label_164)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_49])), (Wrd133.pObj));

DEFLABEL (label_78)
  (Wrd132.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  (Wrd220.Obj) = (Rsp [2]);
  (Wrd221.Obj) = (current_block [OBJECT_19_9]);
  (Wrd225.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_48]))));
  (* (--Rsp)) = (Wrd225.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd221.Obj);
  (* (--Rsp)) = (Wrd220.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_85)
  goto label_165;

DEFLABEL (label_168)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_47])), (Wrd126.pObj));

DEFLABEL (label_77)
  (Wrd125.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  (Wrd236.Obj) = (Rsp [0]);
  (Wrd237.Obj) = (current_block [OBJECT_19_8]);
  (Wrd241.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_46]))));
  (* (--Rsp)) = (Wrd241.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd237.Obj);
  (* (--Rsp)) = (Wrd236.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_86)
  goto label_169;

DEFLABEL (label_172)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_45])), (Wrd119.pObj));

DEFLABEL (label_76)
  (Wrd118.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  (Wrd252.Obj) = (Rsp [2]);
  (Wrd253.Obj) = (current_block [OBJECT_19_8]);
  (Wrd257.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_44]))));
  (* (--Rsp)) = (Wrd257.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd253.Obj);
  (* (--Rsp)) = (Wrd252.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_87)
  goto label_173;

DEFLABEL (label_176)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_43])), (Wrd112.pObj));

DEFLABEL (label_75)
  (Wrd111.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd268.Obj) = (Rsp [0]);
  (Wrd269.Obj) = (current_block [OBJECT_19_7]);
  (Wrd273.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_42]))));
  (* (--Rsp)) = (Wrd273.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd269.Obj);
  (* (--Rsp)) = (Wrd268.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_88)
  goto label_177;

DEFLABEL (label_180)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_41])), (Wrd105.pObj));

DEFLABEL (label_74)
  (Wrd104.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  (Wrd284.Obj) = (Rsp [2]);
  (Wrd285.Obj) = (current_block [OBJECT_19_7]);
  (Wrd289.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_40]))));
  (* (--Rsp)) = (Wrd289.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd285.Obj);
  (* (--Rsp)) = (Wrd284.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_89)
  goto label_181;

DEFLABEL (label_184)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_39])), (Wrd98.pObj));

DEFLABEL (label_73)
  (Wrd97.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_186)
  (Wrd300.Obj) = (Rsp [0]);
  (Wrd301.Obj) = (current_block [OBJECT_19_6]);
  (Wrd305.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_38]))));
  (* (--Rsp)) = (Wrd305.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd301.Obj);
  (* (--Rsp)) = (Wrd300.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_90)
  goto label_185;

DEFLABEL (label_188)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_37])), (Wrd91.pObj));

DEFLABEL (label_72)
  (Wrd90.Obj) = Rvl;
  goto label_187;

DEFLABEL (label_190)
  (Wrd316.Obj) = (Rsp [2]);
  (Wrd317.Obj) = (current_block [OBJECT_19_6]);
  (Wrd321.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_36]))));
  (* (--Rsp)) = (Wrd321.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd317.Obj);
  (* (--Rsp)) = (Wrd316.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_91)
  goto label_189;

DEFLABEL (label_192)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_35])), (Wrd84.pObj));

DEFLABEL (label_71)
  (Wrd83.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  (Wrd333.Obj) = (Rsp [0]);
  (Wrd334.Obj) = (current_block [OBJECT_19_5]);
  (Wrd338.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_34]))));
  (* (--Rsp)) = (Wrd338.Obj);
  (* (--Rsp)) = (Wrd334.Obj);
  (* (--Rsp)) = (Wrd334.Obj);
  (* (--Rsp)) = (Wrd333.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_92)
  goto label_193;

DEFLABEL (label_196)
  (Wrd349.Obj) = (Rsp [0]);
  (Wrd350.Obj) = (current_block [OBJECT_19_3]);
  (Wrd354.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_33]))));
  (* (--Rsp)) = (Wrd354.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd350.Obj);
  (* (--Rsp)) = (Wrd349.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_93)
  goto label_195;

DEFLABEL (label_198)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_32])), (Wrd77.pObj));

DEFLABEL (label_70)
  (Wrd76.Obj) = Rvl;
  goto label_197;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_19_30);
  goto label_133;

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
intrpt_so_88294bba767e0866 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	2,
	2,
	2,
	1,
	2,
	2,
	1,
	2,
	2,
	0,
	0,
	0,
	0,
	0,
	3
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

static const struct liarc_code_S arr_decl_intrpt_so_88294bba767e0866 [19] =
  {
    { "intrpt_so_code_1", 27, intrpt_so_code_1 },
    { "intrpt_so_code_2", 1, intrpt_so_code_2 },
    { "intrpt_so_code_3", 1, intrpt_so_code_3 },
    { "intrpt_so_code_4", 1, intrpt_so_code_4 },
    { "intrpt_so_code_5", 1, intrpt_so_code_5 },
    { "intrpt_so_code_6", 1, intrpt_so_code_6 },
    { "intrpt_so_code_7", 3, intrpt_so_code_7 },
    { "intrpt_so_code_8", 13, intrpt_so_code_8 },
    { "intrpt_so_code_9", 1, intrpt_so_code_9 },
    { "intrpt_so_code_10", 3, intrpt_so_code_10 },
    { "intrpt_so_code_11", 6, intrpt_so_code_11 },
    { "intrpt_so_code_12", 3, intrpt_so_code_12 },
    { "intrpt_so_code_13", 7, intrpt_so_code_13 },
    { "intrpt_so_code_14", 4, intrpt_so_code_14 },
    { "intrpt_so_code_15", 4, intrpt_so_code_15 },
    { "intrpt_so_code_16", 4, intrpt_so_code_16 },
    { "intrpt_so_code_17", 4, intrpt_so_code_17 },
    { "intrpt_so_code_18", 7, intrpt_so_code_18 },
    { "intrpt_so_code_19", 58, intrpt_so_code_19 }
  };

int
decl_intrpt_so_88294bba767e0866 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_intrpt_so_88294bba767e0866);
  return (0);
}

DECLARE_COMPILED_CODE ("intrpt.so", 3, decl_intrpt_so_88294bba767e0866, intrpt_so_88294bba767e0866)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_intrpt_so_data_88294bba767e0866 [3956] =
  "\xb7\x01\x2e\x9f\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc3\xb9\x1d"
  "\xc1\xc1\x0f\x0f\x0f\x0f\x08\x02\x06\x0d\x0d\x0d\x0d\xba\x0d\xbb"
  "\x0d\xbc\x0d\xbd\x0d\xbe\x0d\xbf\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x25\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\xc1\x1c\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x83\x88\xc0\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x84"
  "\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x85\x88\xc0\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x86\x88\xc0\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x0d\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d\x07\x08\x1b\x0d\x0d\x1c\x0d"
  "\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x28\x0d\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x0d\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x1b\x0d\xb5\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xc2\x1c\x1b\x1b\x0d\x1b\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x1b\x0d\x24\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb6\x1b\x0d\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x1b\x0d\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6"
  "\x1b\x0d\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x24\x28\x0d\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x02\x02\x85\x84\x86\x82\xb1\x80"
  "\xc1\x1b\xc0\xb4\xb3\xb2\x0d\x0d\x1c\x0d\x0d\x1c\x0d\x0d\xb9\x0d"
  "\xb8\x0d\x1c\x0d\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17"
  "\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1e\x1b\x2a\x1e\x1e\x1e\x02\x02\x02\x86\x85\x84\x82"
  "\x81\x80\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb7\xb6\x1b\x1b\x1b\xb5"
  "\xb1\x1b\xb0\x1b\x1b\xb4\xb3\xb2\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x69"
  "\x6e\x74\x72\x70\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0c"
  "\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x02\x04\x63\x64\x72"
  "\x04\x63\x61\x72\x01\x43\x01\x48\x01\x56\x01\x59\x81\x02\x22\x6d"
  "\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x65\x72\x6d\x69\x6e\x61"
  "\x74\x69\x6f\x6e\x73\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73"
  "\x16\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x2d"
  "\x76\x65\x63\x74\x6f\x72\x18\x73\x79\x73\x74\x65\x6d\x2d\x69\x6e"
  "\x74\x65\x72\x72\x75\x70\x74\x2d\x76\x65\x63\x74\x6f\x72\x17\x69"
  "\x6e\x64\x65\x78\x3a\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x76"
  "\x65\x63\x74\x6f\x72\x1c\x69\x6e\x64\x65\x78\x3a\x69\x6e\x74\x65"
  "\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x2d\x76\x65\x63\x74\x6f"
  "\x72\x19\x69\x6e\x64\x65\x78\x3a\x74\x65\x72\x6d\x69\x6e\x61\x74"
  "\x69\x6f\x6e\x2d\x76\x65\x63\x74\x6f\x72\x15\x65\x76\x65\x6e\x74"
  "\x3a\x63\x6f\x6e\x73\x6f\x6c\x65\x2d\x72\x65\x73\x69\x7a\x65\x21"
  "\x68\x6f\x6f\x6b\x2f\x63\x6c\x65\x61\x6e\x2d\x69\x6e\x70\x75\x74"
  "\x2f\x66\x6c\x75\x73\x68\x2d\x74\x79\x70\x65\x61\x68\x65\x61\x64"
  "\x20\x68\x6f\x6f\x6b\x2f\x63\x6c\x65\x61\x6e\x2d\x69\x6e\x70\x75"
  "\x74\x2f\x6b\x65\x65\x70\x2d\x74\x79\x70\x65\x61\x68\x65\x61\x64"
  "\x12\x68\x6f\x6f\x6b\x2f\x5e\x62\x2d\x69\x6e\x74\x65\x72\x72\x75"
  "\x70\x74\x09\x12\x68\x6f\x6f\x6b\x2f\x5e\x67\x2d\x69\x6e\x74\x65"
  "\x72\x72\x75\x70\x74\x0a\x12\x68\x6f\x6f\x6b\x2f\x5e\x75\x2d\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x0b\x12\x68\x6f\x6f\x6b\x2f\x5e"
  "\x78\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x0c\x1a\x6b\x65\x79"
  "\x62\x6f\x61\x72\x64\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d"
  "\x76\x65\x63\x74\x6f\x72\x0d\x0c\x15\x5e\x78\x2d\x69\x6e\x74\x65"
  "\x72\x72\x75\x70\x74\x2d\x68\x61\x6e\x64\x6c\x65\x72\x0e\x15\x5e"
  "\x75\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x68\x61\x6e\x64"
  "\x6c\x65\x72\x0f\x15\x5e\x67\x2d\x69\x6e\x74\x65\x72\x72\x75\x70"
  "\x74\x2d\x68\x61\x6e\x64\x6c\x65\x72\x10\x15\x5e\x62\x2d\x69\x6e"
  "\x74\x65\x72\x72\x75\x70\x74\x2d\x68\x61\x6e\x64\x6c\x65\x72\x11"
  "\x05\x03\x1a\x66\x69\x78\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73"
  "\x2d\x76\x65\x63\x74\x6f\x72\x2d\x73\x6c\x6f\x74\x02\x17\x6d\x61"
  "\x6b\x65\x2d\x65\x76\x65\x6e\x74\x2d\x64\x69\x73\x74\x72\x69\x62"
  "\x75\x74\x6f\x72\x04\x0c\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f"
  "\x72\x12\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x02\x08\x69\x6e"
  "\x73\x74\x61\x6c\x6c\x13\x03\x0c\x63\x68\x61\x72\x2d\x3e\x61\x73"
  "\x63\x69\x69\x07\x1e\x38\x81\x87\x02\x1d\x36\x81\x87\x02\x1c\x34"
  "\x81\x87\x02\x1b\x32\x81\x89\x02\x1a\x30\x81\x85\x02\x19\x2e\x81"
  "\x81\x02\x18\x2c\x81\x83\x02\x17\x2a\x81\x87\x02\x16\x28\x81\x87"
  "\x02\x15\x26\x81\x87\x02\x14\x24\x81\x85\x02\x13\x22\x81\x81\x02"
  "\x12\x20\x81\x81\x02\x11\x1e\x81\x81\x02\x10\x1c\x81\x81\x02\x0f"
  "\x1a\x81\x81\x02\x0e\x18\x81\x81\x02\x0d\x16\x81\x81\x02\x0c\x14"
  "\x81\x81\x02\x0b\x12\x81\x81\x02\x0a\x10\x81\x81\x02\x09\x0e\x81"
  "\x81\x02\x08\x0c\x81\x81\x02\x07\x0a\x81\x81\x02\x06\x08\x81\x81"
  "\x02\x05\x06\x81\x81\x02\x04\x04\x82\x02\x37\x66\x14\x02\x12\x63"
  "\x6c\x65\x61\x72\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x21"
  "\x15\x1f\x04\x83\x04\x03\x16\x02\x18\x74\x74\x79\x2d\x6e\x65\x78"
  "\x74\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x63\x68\x61\x72"
  "\x17\x20\x04\x82\x02\x03\x18\x02\x1a\x73\x65\x74\x2d\x66\x69\x78"
  "\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d\x76\x65\x63\x74\x6f"
  "\x72\x21\x19\x21\x04\x83\x04\x03\x1a\x02\x14\x70\x72\x6f\x63\x65"
  "\x73\x73\x2d\x74\x69\x6d\x65\x72\x2d\x63\x6c\x65\x61\x72\x22\x04"
  "\x82\x02\x03\x1b\x02\x11\x72\x65\x61\x6c\x2d\x74\x69\x6d\x65\x72"
  "\x2d\x63\x6c\x65\x61\x72\x23\x04\x82\x02\x03\x1c\x02\x08\x15\x14"
  "\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x62\x69\x74\x2f\x74\x69"
  "\x6d\x65\x72\x02\x02\x1f\x74\x68\x72\x65\x61\x64\x2d\x74\x69\x6d"
  "\x65\x72\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x68\x61\x6e"
  "\x64\x6c\x65\x72\x02\x26\x08\x81\x85\x02\x25\x06\x81\x87\x02\x24"
  "\x04\x84\x06\x07\x10\x1d\x02\x09\x0f\x73\x63\x68\x65\x6d\x65\x5f"
  "\x73\x75\x73\x70\x65\x6e\x64\x02\x15\x16\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x2d\x62\x69\x74\x2f\x73\x75\x73\x70\x65\x6e\x64\x17"
  "\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x73\x75\x73\x70\x65\x6e\x64"
  "\x2d\x66\x69\x6c\x65\x3f\x1e\x21\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x3a\x73\x65\x72\x69\x6f\x75\x73\x2d\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x17\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x77\x61\x72\x6e\x69\x6e\x67\x05"
  "\x02\x06\x25\x65\x78\x69\x74\x05\x17\x62\x69\x6e\x64\x2d\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72\x02"
  "\x16\x75\x73\x65\x72\x2d\x68\x6f\x6d\x65\x64\x69\x72\x2d\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x02\x0f\x6d\x75\x66\x66\x6c\x65\x2d\x77"
  "\x61\x72\x6e\x69\x6e\x67\x04\x0a\x64\x69\x73\x6b\x2d\x73\x61\x76"
  "\x65\x04\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x73\x07\x33\x1c\x81\x87\x02\x32\x1a\x81\x85\x02\x31\x18\x81"
  "\x81\x02\x30\x16\x83\x04\x2f\x14\x82\x02\x2e\x12\x81\x85\x02\x2d"
  "\x10\x82\x02\x2c\x0e\x83\x04\x2b\x0c\x81\x85\x02\x2a\x0a\x81\x85"
  "\x02\x29\x08\x81\x85\x02\x28\x06\x81\x87\x02\x27\x04\x84\x06\x1b"
  "\x35\x1f\x02\x0a\x18\x41\x62\x6f\x72\x74\x69\x6e\x67\x21\x20\x4f"
  "\x75\x74\x20\x6f\x66\x20\x6d\x65\x6d\x6f\x72\x79\x03\x0f\x61\x62"
  "\x6f\x72\x74\x2d\x3e\x6e\x65\x61\x72\x65\x73\x74\x02\x34\x04\xff"
  "\x03\x03\x0a\x20\x02\x0b\x15\x17\x69\x6e\x74\x65\x72\x72\x75\x70"
  "\x74\x2d\x62\x69\x74\x2f\x61\x66\x74\x65\x72\x2d\x67\x63\x02\x02"
  "\x14\x74\x72\x69\x67\x67\x65\x72\x2d\x67\x63\x2d\x64\x61\x65\x6d"
  "\x6f\x6e\x73\x21\x02\x37\x08\x81\x85\x02\x36\x06\x81\x85\x02\x35"
  "\x04\x84\x06\x07\x10\x21\x02\x0c\x02\x15\x17\x69\x6e\x74\x65\x72"
  "\x72\x75\x70\x74\x2d\x62\x69\x74\x2f\x67\x6c\x6f\x62\x61\x6c\x2d"
  "\x33\x03\x02\x0f\x63\x6f\x6e\x73\x6f\x6c\x65\x2d\x74\x68\x72\x65"
  "\x61\x64\x04\x14\x73\x69\x67\x6e\x61\x6c\x2d\x74\x68\x72\x65\x61"
  "\x64\x2d\x65\x76\x65\x6e\x74\x22\x03\x1a\x65\x76\x65\x6e\x74\x2d"
  "\x64\x69\x73\x74\x72\x69\x62\x75\x74\x6f\x72\x2f\x69\x6e\x76\x6f"
  "\x6b\x65\x21\x04\x3d\x0e\x81\x81\x02\x3c\x0c\x82\x02\x3b\x0a\x81"
  "\x85\x02\x3a\x08\x81\x85\x02\x39\x06\x81\x87\x02\x38\x04\x84\x06"
  "\x0d\x1c\x23\x02\x0d\x13\x49\x6c\x6c\x65\x67\x61\x6c\x20\x69\x6e"
  "\x74\x65\x72\x72\x75\x70\x74\x3a\x15\x06\x06\x65\x72\x72\x6f\x72"
  "\x24\x02\x40\x08\x81\x87\x02\x3f\x06\x81\x87\x02\x3e\x04\x83\x04"
  "\x07\x0f\x25\x02\x0e\x19\x42\x61\x64\x20\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x20\x63\x68\x61\x72\x61\x63\x74\x65\x72\x3a\x0b\x76"
  "\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x26\x17\x15\x12\x69\x6e\x74"
  "\x65\x72\x72\x75\x70\x74\x2d\x62\x69\x74\x2f\x6b\x62\x64\x0d\x03"
  "\x04\x24\x02\x47\x10\x81\x83\x02\x46\x0e\x81\x83\x02\x45\x0c\x81"
  "\x85\x02\x44\x0a\x81\x85\x02\x43\x08\x81\x85\x02\x42\x06\x81\x87"
  "\x02\x41\x04\x84\x06\x0f\x1c\x24\x02\x0f\x09\x1a\x63\x6d\x64\x6c"
  "\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2f\x62\x72\x65\x61\x6b"
  "\x70\x6f\x69\x6e\x74\x04\x06\x11\x73\x69\x67\x6e\x61\x6c\x2d\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x17\x02\x4b\x0a\x81\x89\x02\x4a"
  "\x08\x81\x87\x02\x49\x06\x81\x85\x02\x48\x04\x83\x04\x09\x13\x15"
  "\x02\x10\x0a\x1f\x63\x6d\x64\x6c\x2d\x69\x6e\x74\x65\x72\x72\x75"
  "\x70\x74\x2f\x61\x62\x6f\x72\x74\x2d\x74\x6f\x70\x2d\x6c\x65\x76"
  "\x65\x6c\x04\x06\x17\x02\x4f\x0a\x81\x89\x02\x4e\x08\x81\x87\x02"
  "\x4d\x06\x81\x85\x02\x4c\x04\x83\x04\x09\x13\x27\x02\x11\x0b\x1e"
  "\x63\x6d\x64\x6c\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2f\x61"
  "\x62\x6f\x72\x74\x2d\x70\x72\x65\x76\x69\x6f\x75\x73\x04\x06\x17"
  "\x02\x53\x0a\x81\x89\x02\x52\x08\x81\x87\x02\x51\x06\x81\x85\x02"
  "\x50\x04\x83\x04\x09\x13\x28\x02\x12\x0c\x1d\x63\x6d\x64\x6c\x2d"
  "\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2f\x61\x62\x6f\x72\x74\x2d"
  "\x6e\x65\x61\x72\x65\x73\x74\x04\x06\x17\x02\x57\x0a\x81\x89\x02"
  "\x56\x08\x81\x87\x02\x55\x06\x81\x85\x02\x54\x04\x83\x04\x09\x13"
  "\x29\x02\x13\x02\x11\x63\x6f\x6e\x73\x6f\x6c\x65\x2d\x69\x2f\x6f"
  "\x2d\x70\x6f\x72\x74\x02\x03\x12\x70\x6f\x72\x74\x2f\x74\x68\x72"
  "\x65\x61\x64\x2d\x6d\x75\x74\x65\x78\x04\x22\x03\x13\x74\x68\x72"
  "\x65\x61\x64\x2d\x6d\x75\x74\x65\x78\x2d\x6f\x77\x6e\x65\x72\x04"
  "\x5e\x10\x81\x83\x02\x5d\x0e\x81\x83\x02\x5c\x0c\x81\x83\x02\x5b"
  "\x0a\x81\x8b\x02\x5a\x08\x81\x89\x02\x59\x06\x81\x8d\x02\x58\x04"
  "\x86\x0a\x0f\x1c\x22\x02\x14\x19\x10\x67\x63\x2d\x6f\x75\x74\x2d"
  "\x6f\x66\x2d\x73\x70\x61\x63\x65\x08\x09\x0e\x76\x65\x63\x74\x6f"
  "\x72\x2d\x6c\x65\x6e\x67\x74\x68\x26\x19\x67\x65\x74\x2d\x66\x69"
  "\x78\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d\x76\x65\x63\x74"
  "\x6f\x72\x14\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73"
  "\x6b\x2f\x6e\x6f\x6e\x65\x18\x74\x69\x6d\x65\x72\x2d\x69\x6e\x74"
  "\x65\x72\x72\x75\x70\x74\x2d\x68\x61\x6e\x64\x6c\x65\x72\x26\x15"
  "\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x2f\x67"
  "\x63\x2d\x6f\x6b\x1b\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x69\x6e"
  "\x74\x65\x72\x72\x75\x70\x74\x2d\x68\x61\x6e\x64\x6c\x65\x72\x19"
  "\x18\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x2f"
  "\x74\x69\x6d\x65\x72\x2d\x6f\x6b\x1b\x61\x66\x74\x65\x72\x2d\x67"
  "\x63\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x68\x61\x6e\x64"
  "\x6c\x65\x72\x1a\x73\x75\x73\x70\x65\x6e\x64\x2d\x69\x6e\x74\x65"
  "\x72\x72\x75\x70\x74\x2d\x68\x61\x6e\x64\x6c\x65\x72\x17\x63\x6f"
  "\x6e\x73\x6f\x6c\x65\x2d\x72\x65\x73\x69\x7a\x65\x2d\x68\x61\x6e"
  "\x64\x6c\x65\x72\x2a\x13\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d"
  "\x6d\x61\x73\x6b\x2f\x61\x6c\x6c\x18\x67\x63\x2d\x6f\x75\x74\x2d"
  "\x6f\x66\x2d\x73\x70\x61\x63\x65\x2d\x68\x61\x6e\x64\x6c\x65\x72"
  "\x2b\x0e\x03\x13\x77\x69\x74\x68\x6f\x75\x74\x2d\x69\x6e\x74\x65"
  "\x72\x72\x75\x70\x74\x73\x02\x21\x6d\x69\x63\x72\x6f\x63\x6f\x64"
  "\x65\x2d\x74\x65\x72\x6d\x69\x6e\x61\x74\x69\x6f\x6e\x2f\x63\x6f"
  "\x64\x65\x2d\x6c\x69\x6d\x69\x74\x04\x12\x03\x12\x04\x0c\x76\x65"
  "\x63\x74\x6f\x72\x2d\x67\x72\x6f\x77\x03\x16\x6d\x69\x63\x72\x6f"
  "\x63\x6f\x64\x65\x2d\x74\x65\x72\x6d\x69\x6e\x61\x74\x69\x6f\x6e"
  "\x03\x1a\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x2d\x68\x61\x6e\x64\x6c\x65\x72\x12\x08\x98\x01\x76"
  "\x81\x8b\x02\x97\x01\x74\x81\x8b\x02\x96\x01\x72\x81\x8d\x02\x95"
  "\x01\x70\x81\x8b\x02\x94\x01\x6e\x81\x8b\x02\x93\x01\x6c\x81\x8d"
  "\x02\x92\x01\x6a\x81\x8b\x02\x91\x01\x68\x81\x8b\x02\x90\x01\x66"
  "\x81\x8d\x02\x8f\x01\x64\x81\x83\x02\x8e\x01\x62\x81\x8f\x02\x8d"
  "\x01\x60\x81\x8b\x02\x8c\x01\x5e\x81\x8b\x02\x8b\x01\x5c\x81\x8b"
  "\x02\x8a\x01\x5a\x81\x8b\x02\x89\x01\x58\x81\x8b\x02\x88\x01\x56"
  "\x81\x8b\x02\x87\x01\x54\x81\x8b\x02\x86\x01\x52\x81\x8b\x02\x85"
  "\x01\x50\x81\x8b\x02\x84\x01\x4e\x81\x8b\x02\x83\x01\x4c\x81\x8b"
  "\x02\x82\x01\x4a\x81\x8b\x02\x81\x01\x48\x81\x8b\x02\x80\x01\x46"
  "\x81\x8b\x02\x7f\x44\x81\x8b\x02\x7e\x42\x81\x8b\x02\x7d\x40\x81"
  "\x8b\x02\x7c\x3e\x81\x8b\x02\x7b\x3c\x81\x8b\x02\x7a\x3a\x81\x8b"
  "\x02\x79\x38\x81\x8b\x02\x78\x36\x81\x8b\x02\x77\x34\x81\x8b\x02"
  "\x76\x32\x81\x8b\x02\x75\x30\x81\x8f\x02\x74\x2e\x81\x8f\x02\x73"
  "\x2c\x81\x87\x02\x72\x2a\x81\x8b\x02\x71\x28\x81\x83\x02\x70\x26"
  "\x81\x83\x02\x6f\x24\x81\x8b\x02\x6e\x22\x81\x87\x02\x6d\x20\x81"
  "\x83\x02\x6c\x1e\x81\x83\x02\x6b\x1c\x81\x89\x02\x6a\x1a\x81\x89"
  "\x02\x69\x18\x81\x85\x02\x68\x16\x81\x87\x02\x67\x14\x81\x85\x02"
  "\x66\x12\x81\x83\x02\x65\x10\x81\x85\x02\x64\x0e\x81\x83\x02\x63"
  "\x0c\x81\x81\x02\x62\x0a\x81\x83\x02\x61\x08\x81\x81\x02\x60\x06"
  "\x82\x02\x5f\x04\x82\x02\x75\xa2\x01\x2c\x14\x2d\x2d\x2c\x04\x22"
  "\x04\x29\x04\x28\x04\x27\x04\x15\x04\x24\x04\x25\x04\x23\x04\x21"
  "\x04\x20\x04\x1f\x04\x1d\x04\x10\x09\x08\x1c\x04\x1b\x04\x1a\x04"
  "\x18\x04\x16\x04\x14\x04\x29\x13\x17\x0e\x0f\x10\x11\x19\x0c\x0b"
  "\x0a\x09\x0d\x12\x2a\x2b\x1e\x26\x17\x69\x6c\x6c\x65\x67\x61\x6c"
  "\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x73\x6c\x6f\x74\x0d"
  "\x73\x75\x73\x70\x65\x6e\x64\x2d\x73\x6c\x6f\x74\x14\x63\x6f\x6e"
  "\x73\x6f\x6c\x65\x2d\x72\x65\x73\x69\x7a\x65\x2d\x73\x6c\x6f\x74"
  "\x0b\x74\x69\x6d\x65\x72\x2d\x73\x6c\x6f\x74\x0e\x61\x66\x74\x65"
  "\x72\x2d\x67\x63\x2d\x73\x6c\x6f\x74\x0f\x63\x68\x61\x72\x61\x63"
  "\x74\x65\x72\x2d\x73\x6c\x6f\x74\x08\x67\x63\x2d\x73\x6c\x6f\x74"
  "\x0f\x67\x6c\x6f\x62\x61\x6c\x2d\x67\x63\x2d\x73\x6c\x6f\x74\x14"
  "\x73\x74\x61\x63\x6b\x2d\x6f\x76\x65\x72\x66\x6c\x6f\x77\x2d\x73"
  "\x6c\x6f\x74\x11\x72\x65\x61\x6c\x2d\x74\x69\x6d\x65\x72\x2d\x63"
  "\x6c\x65\x61\x72\x14\x70\x72\x6f\x63\x65\x73\x73\x2d\x74\x69\x6d"
  "\x65\x72\x2d\x63\x6c\x65\x61\x72\x1a\x73\x65\x74\x2d\x66\x69\x78"
  "\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d\x76\x65\x63\x74\x6f"
  "\x72\x21\x18\x74\x74\x79\x2d\x6e\x65\x78\x74\x2d\x69\x6e\x74\x65"
  "\x72\x72\x75\x70\x74\x2d\x63\x68\x61\x72\x12\x63\x6c\x65\x61\x72"
  "\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x21\x14\x69\x6e\x69"
  "\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21"
  "\x29\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81"
  "\x81\x02\x07\x11";

SCHEME_OBJECT *
intrpt_so_data_88294bba767e0866 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_intrpt_so_data_88294bba767e0866 [0]))), (sizeof (prog_intrpt_so_data_88294bba767e0866)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("intrpt.so", intrpt_so_data_88294bba767e0866)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("intrpt.so", "5f18a6a8bed19459")
