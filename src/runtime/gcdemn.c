/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:32-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_9 9
#define LABEL_1_8 11
#define LABEL_1_11 13
#define LABEL_1_13 15
#define LABEL_1_12 17
#define LABEL_1_15 19
#define LABEL_1_16 21
#define LABEL_1_17 23
#define LABEL_1_19 25
#define LABEL_1_18 27
#define LABEL_1_20 29
#define LABEL_1_22 31
#define LABEL_1_21 33
#define LABEL_1_23 35
#define LABEL_1_24 37
#define LABEL_1_25 39
#define LABEL_1_27 41
#define LABEL_1_26 43
#define LABEL_1_28 45
#define LABEL_1_30 47
#define LABEL_1_29 49
#define LABEL_1_31 51
#define LABEL_1_32 53
#define LABEL_1_33 55
#define LABEL_1_34 57
#define ENVIRONMENT_LABEL_1_3 85
#define DEBUGGING_LABEL_1_2 84
#define OBJECT_1_3 83
#define OBJECT_1_2 82
#define OBJECT_1_1 81
#define OBJECT_1_0 80
#define EXECUTE_CACHE_1_14 59
#define EXECUTE_CACHE_1_10 61
#define EXECUTE_CACHE_1_6 63
#define FREE_REFERENCE_1_3 66
#define FREE_REFERENCE_1_2 67
#define FREE_REFERENCE_1_1 68
#define FREE_REFERENCE_1_0 69
#define FREE_ASSIGNMENT_1_8 71
#define FREE_ASSIGNMENT_1_7 72
#define FREE_ASSIGNMENT_1_6 73
#define FREE_ASSIGNMENT_1_5 74
#define FREE_ASSIGNMENT_1_4 75
#define FREE_ASSIGNMENT_1_3 76
#define FREE_ASSIGNMENT_1_2 77
#define FREE_ASSIGNMENT_1_1 78
#define FREE_ASSIGNMENT_1_0 79
#define FREE_REFERENCES_LABEL_1_0 58
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcdemn_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_12;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_1_15);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_1_17);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_1_19);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_1_20);
      goto label_21;

    case 14:
      current_block = (Rpc - LABEL_1_22);
      goto label_22;

    case 15:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_1_23);
      goto label_23;

    case 17:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_6;

    case 18:
      current_block = (Rpc - LABEL_1_25);
      goto label_24;

    case 19:
      current_block = (Rpc - LABEL_1_27);
      goto label_25;

    case 20:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_7;

    case 21:
      current_block = (Rpc - LABEL_1_28);
      goto label_26;

    case 22:
      current_block = (Rpc - LABEL_1_30);
      goto label_27;

    case 23:
      current_block = (Rpc - LABEL_1_29);
      goto continuation_8;

    case 24:
      current_block = (Rpc - LABEL_1_31);
      goto label_28;

    case 25:
      current_block = (Rpc - LABEL_1_32);
      goto continuation_9;

    case 26:
      current_block = (Rpc - LABEL_1_33);
      goto label_29;

    case 27:
      current_block = (Rpc - LABEL_1_34);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_32)
DEFLABEL (initialize_packageB_12)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_75;

DEFLABEL (label_74)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_73)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_72;
  Wrd21 = Wrd25;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_70;

DEFLABEL (label_69)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_68)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_67;
  Wrd21 = Wrd25;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_63)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_62;

DEFLABEL (label_61)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_60)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_59;
  Wrd21 = Wrd25;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_57;

DEFLABEL (label_56)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_55)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_54;
  Wrd21 = Wrd25;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_21);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_5]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_50)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_6]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_49;

DEFLABEL (label_48)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_47)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_46;
  Wrd21 = Wrd25;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_7]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_42)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_41;
  Wrd21 = Wrd25;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_29);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_8]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_39;

DEFLABEL (label_38)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_37)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 0);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_36;
  Wrd6 = Wrd10;

DEFLABEL (label_35)
  Wrd5 = Wrd6;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_34;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd19.Lng))))
    goto label_34;
  ((Wrd17.pObj) [12]) = (Wrd6.Obj);

DEFLABEL (label_33)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 1);

DEFLABEL (label_34)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_1_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 3);

DEFLABEL (label_30)
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_33])), (Wrd7.pObj));

DEFLABEL (label_29)
  (Wrd6.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_39)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_38;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_31])), (Wrd6.pObj), Rvl);

DEFLABEL (label_28)
  goto label_37;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_30])), (Wrd22.pObj));

DEFLABEL (label_27)
  (Wrd21.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_44)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_28])), (Wrd6.pObj), Rvl);

DEFLABEL (label_26)
  goto label_42;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_27])), (Wrd22.pObj));

DEFLABEL (label_25)
  (Wrd21.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_49)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_48;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_25])), (Wrd6.pObj), Rvl);

DEFLABEL (label_24)
  goto label_47;

DEFLABEL (label_52)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_51;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_23])), (Wrd6.pObj), Rvl);

DEFLABEL (label_23)
  goto label_50;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_22])), (Wrd22.pObj));

DEFLABEL (label_22)
  (Wrd21.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_57)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_56;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_20])), (Wrd6.pObj), Rvl);

DEFLABEL (label_21)
  goto label_55;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_19])), (Wrd22.pObj));

DEFLABEL (label_20)
  (Wrd21.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_62)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_61;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_17])), (Wrd6.pObj), Rvl);

DEFLABEL (label_19)
  goto label_60;

DEFLABEL (label_65)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_64;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_15])), (Wrd6.pObj), Rvl);

DEFLABEL (label_18)
  goto label_63;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_13])), (Wrd22.pObj));

DEFLABEL (label_17)
  (Wrd21.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_70)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_69;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_11])), (Wrd6.pObj), Rvl);

DEFLABEL (label_16)
  goto label_68;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd22.pObj));

DEFLABEL (label_15)
  (Wrd21.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_75)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_74;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_14)
  goto label_73;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define TAG_2_6 1
#define LABEL_2_8 7
#define ENVIRONMENT_LABEL_2_3 15
#define DEBUGGING_LABEL_2_2 14
#define OBJECT_2_0 13
#define EXECUTE_CACHE_2_7 9
#define FREE_REFERENCE_2_0 12
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcdemn_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_2_4);
      goto add_gc_daemonB_no_restore_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_gc_daemonB_no_restore_5)
DEFLABEL (add_gc_daemonB_no_restore_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = (current_block [OBJECT_2_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [2]);
  (Rsp [0]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_8])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_7 7
#define LABEL_3_8 9
#define ENVIRONMENT_LABEL_3_3 16
#define DEBUGGING_LABEL_3_2 15
#define EXECUTE_CACHE_3_10 11
#define EXECUTE_CACHE_3_9 13
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcdemn_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_3_4);
      goto make_trigger_3;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto lambda_0;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_trigger_6)
DEFLABEL (make_trigger_3)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_3_7);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define ENVIRONMENT_LABEL_4_3 10
#define DEBUGGING_LABEL_4_2 9
#define EXECUTE_CACHE_4_7 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcdemn_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto make_adder_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_adder_4)
DEFLABEL (make_adder_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_5 3
#define LABEL_5_4 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_10 11
#define LABEL_5_11 13
#define LABEL_5_13 15
#define LABEL_5_14 17
#define LABEL_5_15 19
#define ENVIRONMENT_LABEL_5_3 31
#define DEBUGGING_LABEL_5_2 30
#define OBJECT_5_2 29
#define OBJECT_5_1 28
#define OBJECT_5_0 27
#define EXECUTE_CACHE_5_12 21
#define EXECUTE_CACHE_5_9 23
#define EXECUTE_CACHE_5_8 25
#define FREE_REFERENCES_LABEL_5_0 20
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcdemn_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd18;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_5_4);
      goto gc_clean_13;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto loop_10;

    case 5:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_5_14);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_5_15);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_clean_19)
DEFLABEL (gc_clean_13)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_5_0]))
    goto label_26;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_25;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if (! ((Wrd25.Lng) < 0))
    goto label_23;

DEFLABEL (label_22)
  (Wrd22.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd18.Obj) = Rvl;

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  goto loop_10;

DEFLABEL (label_23)
  (Wrd18.Obj) = (Rsp [1]);

DEFLABEL (label_24)
  Rsp = (& (Rsp [1]));
  goto label_21;

DEFLABEL (label_25)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_22;

DEFLABEL (label_26)
  (Wrd18.Obj) = (current_block [OBJECT_5_1]);
  goto label_24;

DEFLABEL (loop_20)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_5_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (* (--Rsp)) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_31;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_31;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) - (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_31;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_30)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_29;
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_29;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if ((Wrd33.Lng) > (Wrd35.Lng))
    goto label_28;

DEFLABEL (label_27)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd31.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_10;

DEFLABEL (label_29)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_28;

DEFLABEL (label_31)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_16)
  (Wrd10.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
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
gcdemn_so_7cff69d3a4ddef6a (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	2,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 5)
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

static const struct liarc_code_S arr_decl_gcdemn_so_7cff69d3a4ddef6a [5] =
  {
    { "gcdemn_so_code_1", 28, gcdemn_so_code_1 },
    { "gcdemn_so_code_2", 3, gcdemn_so_code_2 },
    { "gcdemn_so_code_3", 4, gcdemn_so_code_3 },
    { "gcdemn_so_code_4", 2, gcdemn_so_code_4 },
    { "gcdemn_so_code_5", 9, gcdemn_so_code_5 }
  };

int
decl_gcdemn_so_7cff69d3a4ddef6a (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_gcdemn_so_7cff69d3a4ddef6a);
  return (0);
}

DECLARE_COMPILED_CODE ("gcdemn.so", 3, decl_gcdemn_so_7cff69d3a4ddef6a, gcdemn_so_7cff69d3a4ddef6a)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_gcdemn_so_data_7cff69d3a4ddef6a [1138] =
  "\x59\x12\xf8\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xc3\x02\xc0"
  "\x0d\xb9\x0d\xba\x0d\xbb\x0d\xbc\x0d\xbd\x0d\xbe\x0d\xbf\x0d\x1c"
  "\x0d\x1c\x25\xb1\xb4\xb7\xb2\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82"
  "\x88\x1d\x0d\x24\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x83\x88\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x28\x0d\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0c\x02\x1d\x28\x0d\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xb8\x9c\x1c\x88\x1b\xb0\x2a\x1b"
  "\x2a\x1b\x2a\x1e\x1e\x1e\x1b\x2a\x1e\x1e\x1e\x1e\x1e\x1e\x1b\x2a"
  "\x17\x0d\x1b\x1b\x1b\x1b\xb7\x0d\xb6\xb5\xb4\xb3\xb2\xb1\x0d\x17"
  "\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73"
  "\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65"
  "\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e"
  "\x74\x69\x6d\x65\x2f\x2e\x2f\x67\x63\x64\x65\x6d\x6e\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x1a\x73\x65\x74\x2d\x66\x69\x78\x65"
  "\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d\x76\x65\x63\x74\x6f\x72"
  "\x21\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x0c\x19\x67"
  "\x65\x74\x2d\x66\x69\x78\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73"
  "\x2d\x76\x65\x63\x74\x6f\x72\x15\x70\x72\x69\x6d\x69\x74\x69\x76"
  "\x65\x2d\x67\x63\x2d\x64\x61\x65\x6d\x6f\x6e\x73\x1e\x74\x72\x69"
  "\x67\x67\x65\x72\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x67"
  "\x63\x2d\x64\x61\x65\x6d\x6f\x6e\x73\x21\x19\x61\x64\x64\x2d\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x67\x63\x2d\x64\x61\x65\x6d"
  "\x6f\x6e\x21\x0b\x67\x63\x2d\x64\x61\x65\x6d\x6f\x6e\x73\x14\x74"
  "\x72\x69\x67\x67\x65\x72\x2d\x67\x63\x2d\x64\x61\x65\x6d\x6f\x6e"
  "\x73\x21\x0f\x61\x64\x64\x2d\x67\x63\x2d\x64\x61\x65\x6d\x6f\x6e"
  "\x21\x15\x73\x65\x63\x6f\x6e\x64\x61\x72\x79\x2d\x67\x63\x2d\x64"
  "\x61\x65\x6d\x6f\x6e\x73\x1e\x74\x72\x69\x67\x67\x65\x72\x2d\x73"
  "\x65\x63\x6f\x6e\x64\x61\x72\x79\x2d\x67\x63\x2d\x64\x61\x65\x6d"
  "\x6f\x6e\x73\x21\x09\x19\x61\x64\x64\x2d\x73\x65\x63\x6f\x6e\x64"
  "\x61\x72\x79\x2d\x67\x63\x2d\x64\x61\x65\x6d\x6f\x6e\x21\x0a\x0a"
  "\x05\x02\x0b\x6d\x61\x6b\x65\x2d\x71\x75\x65\x75\x65\x03\x0d\x6d"
  "\x61\x6b\x65\x2d\x74\x72\x69\x67\x67\x65\x72\x0b\x03\x0b\x6d\x61"
  "\x6b\x65\x2d\x61\x64\x64\x65\x72\x0c\x04\x1f\x3a\x81\x83\x02\x1e"
  "\x38\x81\x83\x02\x1d\x36\x81\x81\x02\x1c\x34\x81\x81\x02\x1b\x32"
  "\x81\x81\x02\x1a\x30\x81\x83\x02\x19\x2e\x81\x81\x02\x18\x2c\x81"
  "\x81\x02\x17\x2a\x81\x83\x02\x16\x28\x81\x81\x02\x15\x26\x81\x81"
  "\x02\x14\x24\x81\x81\x02\x13\x22\x81\x81\x02\x12\x20\x81\x83\x02"
  "\x11\x1e\x81\x81\x02\x10\x1c\x81\x81\x02\x0f\x1a\x81\x83\x02\x0e"
  "\x18\x81\x81\x02\x0d\x16\x81\x81\x02\x0c\x14\x81\x81\x02\x0b\x12"
  "\x81\x81\x02\x0a\x10\x81\x83\x02\x09\x0e\x81\x81\x02\x08\x0c\x81"
  "\x81\x02\x07\x0a\x81\x83\x02\x06\x08\x81\x81\x02\x05\x06\x81\x81"
  "\x02\x04\x04\x82\x02\x39\x56\x0d\x02\x02\x19\x2a\x77\x69\x74\x68"
  "\x69\x6e\x2d\x72\x65\x73\x74\x6f\x72\x65\x2d\x77\x69\x6e\x64\x6f"
  "\x77\x3f\x2a\x02\x03\x02\x22\x08\x81\x83\x02\x21\x06\x81\x83\x02"
  "\x20\x04\x83\x04\x07\x10\x0e\x02\x03\x13\x71\x75\x65\x75\x65\x2d"
  "\x3e\x6c\x69\x73\x74\x2f\x75\x6e\x73\x61\x66\x65\x04\x09\x66\x6f"
  "\x72\x2d\x65\x61\x63\x68\x03\x26\x0a\x81\x85\x02\x25\x08\x83\x04"
  "\x24\x06\x81\x83\x02\x23\x04\x83\x04\x09\x11\x0f\x02\x04\x09\x65"
  "\x6e\x71\x75\x65\x75\x65\x21\x02\x28\x06\x81\x85\x02\x27\x04\x83"
  "\x04\x05\x0b\x10\x02\x1f\x74\x68\x72\x65\x73\x68\x6f\x6c\x64\x20"
  "\x6d\x75\x73\x74\x20\x62\x65\x20\x6e\x6f\x6e\x2d\x6e\x65\x67\x61"
  "\x74\x69\x76\x65\x65\x08\x02\x08\x67\x63\x2d\x66\x6c\x69\x70\x04"
  "\x06\x65\x72\x72\x6f\x72\x02\x09\x04\x31\x14\x81\x87\x02\x30\x12"
  "\x81\x87\x02\x2f\x10\x81\x85\x02\x2e\x0e\x81\x85\x02\x2d\x0c\x81"
  "\x85\x02\x2c\x0a\x81\x83\x02\x2b\x08\x81\x85\x02\x2a\x06\x83\x02"
  "\x29\x04\x81\x83\x02\x13\x20\x11\x11\x06\x10\x04\x0f\x04\x0e\x04"
  "\x0d\x04\x0f\x09\x67\x63\x2d\x63\x6c\x65\x61\x6e\x0c\x0b\x0a\x09"
  "\x1a\x61\x64\x64\x2d\x67\x63\x2d\x64\x61\x65\x6d\x6f\x6e\x21\x2f"
  "\x6e\x6f\x2d\x72\x65\x73\x74\x6f\x72\x65\x14\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x0f\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02"
  "\x07\x11";

SCHEME_OBJECT *
gcdemn_so_data_7cff69d3a4ddef6a (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_gcdemn_so_data_7cff69d3a4ddef6a [0]))), (sizeof (prog_gcdemn_so_data_7cff69d3a4ddef6a)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("gcdemn.so", gcdemn_so_data_7cff69d3a4ddef6a)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("gcdemn.so", "ad5d8dcdca19ecf5")
