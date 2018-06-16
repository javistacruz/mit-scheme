/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:16-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_11 7
#define LABEL_1_13 9
#define LABEL_1_6 11
#define LABEL_1_15 13
#define LABEL_1_8 15
#define LABEL_1_9 17
#define LABEL_1_19 19
#define LABEL_1_10 21
#define LABEL_1_12 23
#define LABEL_1_16 25
#define LABEL_1_17 27
#define LABEL_1_25 29
#define LABEL_1_27 31
#define LABEL_1_28 33
#define LABEL_1_31 35
#define LABEL_1_32 37
#define LABEL_1_22 39
#define TAG_1_23 18
#define LABEL_1_24 41
#define LABEL_1_26 43
#define LABEL_1_29 45
#define LABEL_1_30 47
#define LABEL_1_33 49
#define LABEL_1_36 51
#define ENVIRONMENT_LABEL_1_3 84
#define DEBUGGING_LABEL_1_2 83
#define OBJECT_1_9 82
#define OBJECT_1_8 81
#define OBJECT_1_7 80
#define OBJECT_1_6 79
#define OBJECT_1_5 78
#define OBJECT_1_4 77
#define OBJECT_1_3 76
#define OBJECT_1_2 75
#define OBJECT_1_1 74
#define OBJECT_1_0 73
#define EXECUTE_CACHE_1_35 53
#define EXECUTE_CACHE_1_34 55
#define EXECUTE_CACHE_1_21 57
#define EXECUTE_CACHE_1_20 59
#define EXECUTE_CACHE_1_18 61
#define EXECUTE_CACHE_1_14 63
#define EXECUTE_CACHE_1_7 65
#define FREE_REFERENCE_1_4 68
#define FREE_REFERENCE_1_3 69
#define FREE_REFERENCE_1_2 70
#define FREE_REFERENCE_1_1 71
#define FREE_REFERENCE_1_0 72
#define FREE_REFERENCES_LABEL_1_0 52
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reteqv_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
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
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_1_4);
      goto find_equivalent_returnsB_20;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_1_11);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_1_13);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_1_6);
      goto lambda_2;

    case 5:
      current_block = (Rpc - LABEL_1_15);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_19;

    case 7:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_18;

    case 8:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_16;

    case 9:
      current_block = (Rpc - LABEL_1_10);
      goto lambda_17;

    case 10:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_1_16);
      goto lambda_5;

    case 12:
      current_block = (Rpc - LABEL_1_17);
      goto lambda_14;

    case 13:
      current_block = (Rpc - LABEL_1_25);
      goto label_25;

    case 14:
      current_block = (Rpc - LABEL_1_27);
      goto label_26;

    case 15:
      current_block = (Rpc - LABEL_1_28);
      goto label_27;

    case 16:
      current_block = (Rpc - LABEL_1_31);
      goto label_28;

    case 17:
      current_block = (Rpc - LABEL_1_32);
      goto label_29;

    case 18:
      current_block = (Rpc - LABEL_1_22);
      goto lambda_36;

    case 19:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_10;

    case 20:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_9;

    case 21:
      current_block = (Rpc - LABEL_1_29);
      goto continuation_8;

    case 22:
      current_block = (Rpc - LABEL_1_30);
      goto continuation_7;

    case 23:
      current_block = (Rpc - LABEL_1_33);
      goto lambda_13;

    case 24:
      current_block = (Rpc - LABEL_1_36);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_equivalent_returnsB_32)
DEFLABEL (find_equivalent_returnsB_20)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_42;
  Wrd13 = Wrd17;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_40;
  Wrd22 = Wrd26;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd28.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_13])), (Wrd23.pObj));

DEFLABEL (label_23)
  (Wrd22.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_11])), (Wrd14.pObj));

DEFLABEL (label_22)
  (Wrd13.Obj) = Rvl;
  goto label_41;

DEFLABEL (lambda_33)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_1_6);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_47;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_46)
  if ((Wrd5.Obj) == (current_block [OBJECT_1_2]))
    goto label_43;
  Rvl = (current_block [OBJECT_1_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd24.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_1_4]);
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd39.uLng) == 10)
    goto label_45;

DEFLABEL (label_44)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 3);

DEFLABEL (label_45)
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd37.Lng))))
    goto label_44;
  ((Wrd35.pObj) [16]) = (Wrd26.Obj);
  Rvl = (current_block [OBJECT_1_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_1_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_46;

DEFLABEL (lambda_34)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_1_10);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_1_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;

DEFLABEL (label_50)
  Rvl = (Rsp [1]);
  goto label_48;

DEFLABEL (label_49)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));

DEFLABEL (label_48)
DEFLABEL (label_51)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_35)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_1_16);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_22])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_37)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_1_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_61;
  Wrd8 = Wrd12;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_59;
  Wrd17 = Wrd21;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_57;
  Wrd23 = Wrd27;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_55;
  Wrd35 = Wrd39;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd50.Obj) = (Rsp [8]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_53;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd49.Lng))))
    goto label_53;
  (Wrd43.Obj) = ((Wrd47.pObj) [6]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_52)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_35]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_34]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (label_53)
  (Wrd52.Obj) = (Rsp [8]);
  (Wrd53.Obj) = (current_block [OBJECT_1_7]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_31])), (Wrd36.pObj));

DEFLABEL (label_28)
  (Wrd35.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_28])), (Wrd24.pObj));

DEFLABEL (label_27)
  (Wrd23.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_27])), (Wrd18.pObj));

DEFLABEL (label_26)
  (Wrd17.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_25])), (Wrd9.pObj));

DEFLABEL (label_25)
  (Wrd8.Obj) = Rvl;
  goto label_60;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_1_22);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_3]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_63;

DEFLABEL (label_62)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 3);

DEFLABEL (label_63)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd20.Lng))))
    goto label_62;
  ((Wrd18.pObj) [16]) = (Wrd6.Obj);
  Rvl = (current_block [OBJECT_1_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_38)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_1_33);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_68;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_67)
  if ((Wrd5.Obj) == (current_block [OBJECT_1_4]))
    goto label_65;
  Rvl = (current_block [OBJECT_1_9]);
  goto label_64;

DEFLABEL (label_65)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_64)
DEFLABEL (label_66)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_8]), 1);

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_67;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_6 9
#define LABEL_2_9 11
#define LABEL_2_8 13
#define ENVIRONMENT_LABEL_2_3 18
#define DEBUGGING_LABEL_2_2 17
#define OBJECT_2_2 16
#define OBJECT_2_1 15
#define OBJECT_2_0 14
#define FREE_REFERENCES_LABEL_2_0 14
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reteqv_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_2_4);
      goto gmap_8;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gmap_13)
DEFLABEL (gmap_8)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [5]));
  goto loop_6;

DEFLABEL (loop_14)
DEFLABEL (loop_6)
  DLINK_INTERRUPT_CHECK (25, LABEL_2_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_15;
  Rvl = (Wrd6.Obj);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_15)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_19;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_18)
  Rdl = (& (Rsp [2]));
  goto loop_6;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_17;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_16)
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_11)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_10)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_8 7
#define LABEL_3_9 9
#define TAG_3_10 3
#define LABEL_3_12 11
#define LABEL_3_14 13
#define LABEL_3_16 15
#define LABEL_3_20 17
#define LABEL_3_17 19
#define TAG_3_18 8
#define LABEL_3_21 21
#define ENVIRONMENT_LABEL_3_3 39
#define DEBUGGING_LABEL_3_2 38
#define OBJECT_3_4 37
#define OBJECT_3_3 36
#define OBJECT_3_2 35
#define OBJECT_3_1 34
#define OBJECT_3_0 33
#define EXECUTE_CACHE_3_19 23
#define EXECUTE_CACHE_3_15 25
#define EXECUTE_CACHE_3_13 27
#define EXECUTE_CACHE_3_11 29
#define EXECUTE_CACHE_3_7 31
#define FREE_REFERENCES_LABEL_3_0 22
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reteqv_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd16;
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
      goto node_equivalence_classes_14;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_20;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_11;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto lambda_21;

    case 4:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_3_14);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_3_20);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_3_17);
      goto lambda_22;

    case 9:
      current_block = (Rpc - LABEL_3_21);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_equivalence_classes_19)
DEFLABEL (node_equivalence_classes_14)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_9])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd22.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  ((Wrd19.pObj) [3]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_3_9);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rvl = (current_block [OBJECT_3_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_17])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = ((Wrd14.pObj) [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_16);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [3]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  ((Wrd40.pObj) [0]) = (Wrd34.Obj);
  Rvl = (current_block [OBJECT_3_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Rsp [1]) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_27;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_26)
  (Wrd20.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_25;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [1]) = (Wrd24.Obj);
  Rvl = (current_block [OBJECT_3_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_27)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_26;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_3_17);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_29;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_28)
  (Rsp [2]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_29)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_4]), 1);

DEFLABEL (label_17)
  (Wrd11.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_8 9
#define LABEL_4_7 11
#define LABEL_4_11 13
#define LABEL_4_12 15
#define LABEL_4_13 17
#define LABEL_4_14 19
#define LABEL_4_15 21
#define LABEL_4_10 23
#define LABEL_4_16 25
#define LABEL_4_17 27
#define LABEL_4_18 29
#define LABEL_4_19 31
#define LABEL_4_22 33
#define LABEL_4_23 35
#define LABEL_4_24 37
#define LABEL_4_20 39
#define LABEL_4_25 41
#define LABEL_4_26 43
#define LABEL_4_27 45
#define LABEL_4_28 47
#define LABEL_4_30 49
#define ENVIRONMENT_LABEL_4_3 69
#define DEBUGGING_LABEL_4_2 68
#define OBJECT_4_8 67
#define OBJECT_4_7 66
#define OBJECT_4_6 65
#define OBJECT_4_5 64
#define OBJECT_4_4 63
#define OBJECT_4_3 62
#define OBJECT_4_2 61
#define OBJECT_4_1 60
#define OBJECT_4_0 59
#define EXECUTE_CACHE_4_29 51
#define EXECUTE_CACHE_4_21 53
#define EXECUTE_CACHE_4_9 55
#define FREE_REFERENCE_4_0 58
#define FREE_REFERENCES_LABEL_4_0 50
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reteqv_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd43;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd78;
  machine_word Wrd108;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd86;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd85;
  machine_word Wrd112;
  machine_word Wrd113;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd42;
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
      current_block = (Rpc - LABEL_4_4);
      goto return_P_34;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_36;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_37;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_38;

    case 4:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_4_11);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_4_14);
      goto label_46;

    case 9:
      current_block = (Rpc - LABEL_4_15);
      goto label_47;

    case 10:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_4_16);
      goto label_40;

    case 12:
      current_block = (Rpc - LABEL_4_17);
      goto label_41;

    case 13:
      current_block = (Rpc - LABEL_4_18);
      goto label_42;

    case 14:
      current_block = (Rpc - LABEL_4_19);
      goto label_43;

    case 15:
      current_block = (Rpc - LABEL_4_22);
      goto lambda_14;

    case 16:
      current_block = (Rpc - LABEL_4_23);
      goto label_44;

    case 17:
      current_block = (Rpc - LABEL_4_24);
      goto label_45;

    case 18:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_23;

    case 19:
      current_block = (Rpc - LABEL_4_25);
      goto continuation_24;

    case 20:
      current_block = (Rpc - LABEL_4_26);
      goto label_48;

    case 21:
      current_block = (Rpc - LABEL_4_27);
      goto label_49;

    case 22:
      current_block = (Rpc - LABEL_4_28);
      goto continuation_28;

    case 23:
      current_block = (Rpc - LABEL_4_30);
      goto continuation_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (return_P_51)
DEFLABEL (return_P_34)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_89;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_89;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_88)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_87;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_87;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_86)
  (Wrd37.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd37.Obj))
    goto label_53;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_85;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd51.Lng))))
    goto label_85;
  (Wrd45.Obj) = ((Wrd49.pObj) [10]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_84)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_83;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_83;
  (Wrd10.Obj) = ((Wrd14.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_82)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  (Wrd8.Obj) = (Rsp [1]);
  if (Rvl == (Wrd8.Obj))
    goto label_57;

DEFLABEL (label_56)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_55)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_54)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd22.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd22.uLng) == 10))
    goto label_80;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_80;
  (Wrd14.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_79)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_78;
  Wrd29 = Wrd33;

DEFLABEL (label_77)
  (Wrd35.Obj) = (* (Rsp++));
  if ((Wrd29.Obj) == (Wrd35.Obj))
    goto label_59;

DEFLABEL (label_58)
  Rsp = (& (Rsp [2]));
  goto lambda_14;

DEFLABEL (label_59)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_76)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_75;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd46.Lng))))
    goto label_75;
  (Wrd38.Obj) = ((Wrd44.pObj) [9]);

DEFLABEL (label_74)
  (Rsp [0]) = (Wrd38.Obj);
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_73;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd62.Lng))))
    goto label_73;
  (Wrd54.Obj) = ((Wrd60.pObj) [9]);

DEFLABEL (label_72)
  (Rsp [1]) = (Wrd54.Obj);
  (Wrd70.Obj) = (Rsp [0]);
  if ((Wrd70.Obj) == (Wrd54.Obj))
    goto label_71;
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_21]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_21]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_4_25);
  (Rsp [1]) = Rvl;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_70;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd14.Lng))))
    goto label_70;
  (Wrd8.Obj) = ((Wrd12.pObj) [20]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_69)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_68;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd30.Lng))))
    goto label_68;
  (Wrd22.Obj) = ((Wrd28.pObj) [20]);

DEFLABEL (label_67)
  (Wrd38.Obj) = (Rsp [0]);
  if ((Wrd38.Obj) == (Wrd22.Obj))
    goto label_60;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_28]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd45.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_29]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_4_28);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_29]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_4_30);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd12.uLng) == 26)
    goto label_62;

DEFLABEL (label_61)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_62)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_61;
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_64;

DEFLABEL (label_65)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_63;

DEFLABEL (label_64)
  Rvl = (current_block [OBJECT_4_3]);

DEFLABEL (label_63)
DEFLABEL (label_66)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (current_block [OBJECT_4_8]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_49)
  (Wrd22.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_4_8]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_71)
  Rvl = (current_block [OBJECT_4_3]);
  goto label_54;

DEFLABEL (label_73)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.Obj) = (current_block [OBJECT_4_7]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_43)
  (Wrd54.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_4_7]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_42)
  (Wrd38.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_17])), (Wrd30.pObj));

DEFLABEL (label_41)
  (Wrd29.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_4_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_81)
  (Wrd78.Obj) = (Rsp [1]);
  if ((Wrd78.Obj) == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_56;

DEFLABEL (label_83)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_4_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.Obj) = (current_block [OBJECT_4_2]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_4_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_37)
  (Wrd21.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (lambda_52)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_4_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_101;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_101;
  (Wrd8.Obj) = ((Wrd14.pObj) [11]);

DEFLABEL (label_100)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_99;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_98)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_97;
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd95.Obj) = (Rsp [3]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd96.uLng) == 10))
    goto label_96;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [0]);
  (Wrd94.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd94.Lng))))
    goto label_96;
  (Wrd86.Obj) = ((Wrd92.pObj) [11]);

DEFLABEL (label_95)
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd104.uLng) == 1))
    goto label_94;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [0]);
  (* (--Rsp)) = (Wrd103.Obj);

DEFLABEL (label_93)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_12);
  (Wrd113.Obj) = (Rsp [0]);
  if ((Wrd113.Obj) == Rvl)
    goto label_91;
  (Wrd112.Obj) = (current_block [OBJECT_4_4]);
  goto label_90;

DEFLABEL (label_91)
  (Wrd112.Obj) = (current_block [OBJECT_4_3]);

DEFLABEL (label_90)
DEFLABEL (label_92)
  Rsp = (& (Rsp [1]));
  if ((Wrd112.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_76;

DEFLABEL (label_94)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd97.Obj) = (Rsp [3]);
  (Wrd98.Obj) = (current_block [OBJECT_4_5]);
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_46)
  (Wrd86.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_97)
  Rsp = (& (Rsp [1]));
  goto label_55;

DEFLABEL (label_99)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_4_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_44)
  (Wrd8.Obj) = Rvl;
  goto label_100;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define LABEL_5_9 13
#define ENVIRONMENT_LABEL_5_3 19
#define DEBUGGING_LABEL_5_2 18
#define OBJECT_5_3 17
#define OBJECT_5_2 16
#define OBJECT_5_1 15
#define OBJECT_5_0 14
#define FREE_REFERENCES_LABEL_5_0 14
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
reteqv_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd40;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd62;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_5_4);
      goto distance_to_11;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto loop_9;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_5_9);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (distance_to_17)
DEFLABEL (distance_to_11)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_9;

DEFLABEL (loop_18)
DEFLABEL (loop_9)
  DLINK_INTERRUPT_CHECK (25, LABEL_5_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_29;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_28;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_28;
  (Wrd11.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_27)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_26;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd37.Lng))))
    goto label_26;
  (Wrd29.Obj) = ((Wrd35.pObj) [17]);

DEFLABEL (label_25)
  (Wrd49.Obj) = (Rsp [0]);
  if ((Wrd49.Obj) == (Wrd29.Obj))
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_19)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [4]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd57.pObj)));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  Rdl = (& (Rsp [2]));
  goto loop_9;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_20)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_24;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd18.Lng))))
    goto label_24;
  (Wrd12.Obj) = ((Wrd16.pObj) [7]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_23)
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 26)
    goto label_22;

DEFLABEL (label_21)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_22)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_21;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd36.Lng) = ((Wrd38.Lng) + (Wrd40.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd36.Lng)))
    goto label_21;
  Rvl = (LONG_TO_FIXNUM (Wrd36.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_5_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_15)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (current_block [OBJECT_5_3]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_14)
  (Wrd40.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd29.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (current_block [OBJECT_5_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_13)
  (Wrd20.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd20.Obj));
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd62.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd74.Obj) = (Rsp [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 10)
    goto label_31;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_31)
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd73.Lng))))
    goto label_30;
  Rvl = ((Wrd71.pObj) [7]);
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
reteqv_so_0b7c5ed85e38c4ae (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
	2,
	1,
	0,
	2
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

static const struct liarc_code_S arr_decl_reteqv_so_0b7c5ed85e38c4ae [5] =
  {
    { "reteqv_so_code_1", 25, reteqv_so_code_1 },
    { "reteqv_so_code_2", 6, reteqv_so_code_2 },
    { "reteqv_so_code_3", 10, reteqv_so_code_3 },
    { "reteqv_so_code_4", 24, reteqv_so_code_4 },
    { "reteqv_so_code_5", 6, reteqv_so_code_5 }
  };

int
decl_reteqv_so_0b7c5ed85e38c4ae (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_reteqv_so_0b7c5ed85e38c4ae);
  return (0);
}

DECLARE_COMPILED_CODE ("reteqv.so", 3, decl_reteqv_so_0b7c5ed85e38c4ae, reteqv_so_0b7c5ed85e38c4ae)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_reteqv_so_data_0b7c5ed85e38c4ae [1246] =
  "\x58\x0b\xab\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\xc1\xb9\x85"
  "\xc3\x1d\x08\x02\x0d\xc2\xba\x02\x0d\x0d\x0d\xbb\x0d\x0d\x24\x28"
  "\x0d\xbc\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xbd\x28\x0d\xbe\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x82\x88\xc1\x1c\xb1\x08\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x83\x88\x1b\xc2\xb1\x1d\x08\x28\x0d\x28\xb4\x28\x0d\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x84\x88\x02"
  "\x02\x1b\x02\x06\x07\x02\xb2\x82\x0d\x24\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x85\x88\x02\x83\xb2\x86\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x9c\xb8"
  "\x88\xb0\xb2\x2a\xb1\x2a\xb4\x2a\x1b\x2a\xb7\x2a\x9c\x1b\xb3\xb6"
  "\xb5\x0d\x9c\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5a"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x66\x67\x6f\x70\x74\x2f\x72"
  "\x65\x74\x65\x71\x76\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04"
  "\x63\x64\x72\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x02"
  "\x10\x07\x72\x65\x74\x75\x72\x6e\x0b\x76\x65\x63\x74\x6f\x72\x2d"
  "\x72\x65\x66\x08\x15\x6c\x76\x61\x6c\x75\x65\x2f\x75\x6e\x69\x71"
  "\x75\x65\x2d\x73\x6f\x75\x72\x63\x65\x17\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x3f"
  "\x09\x72\x65\x74\x75\x72\x6e\x3d\x3f\x0d\x65\x71\x2d\x73\x65\x74"
  "\x2d\x75\x6e\x69\x6f\x6e\x14\x6c\x76\x61\x6c\x75\x65\x2d\x61\x70"
  "\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x73\x06\x04\x09\x66\x6f\x72"
  "\x2d\x65\x61\x63\x68\x04\x18\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e"
  "\x73\x66\x6f\x72\x6d\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x04\x0b"
  "\x61\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70\x04\x05\x6d\x65\x6d\x71"
  "\x05\x05\x67\x6d\x61\x70\x04\x19\x6e\x6f\x64\x65\x2d\x65\x71\x75"
  "\x69\x76\x61\x6c\x65\x6e\x63\x65\x2d\x63\x6c\x61\x73\x73\x65\x73"
  "\x04\x0e\x65\x71\x2d\x73\x65\x74\x2d\x61\x64\x6a\x6f\x69\x6e\x08"
  "\x1c\x34\x81\x83\x02\x1b\x32\x83\x04\x1a\x30\x81\x8f\x02\x19\x2e"
  "\x81\x8d\x02\x18\x2c\x81\x87\x02\x17\x2a\x81\x83\x02\x16\x28\x81"
  "\x85\x02\x15\x26\x81\x93\x02\x14\x24\x81\x91\x02\x13\x22\x81\x8b"
  "\x02\x12\x20\x81\x89\x02\x11\x1e\x81\x85\x02\x10\x1c\x83\x04\x0f"
  "\x1a\x83\x04\x0e\x18\x81\x8d\x02\x0d\x16\x84\x06\x0c\x14\x81\x85"
  "\x02\x0b\x12\x81\x87\x02\x0a\x10\x81\x85\x02\x09\x0e\x81\x83\x02"
  "\x08\x0c\x83\x04\x07\x0a\x81\x8f\x02\x06\x08\x81\x8b\x02\x05\x06"
  "\x81\x85\x02\x04\x04\x84\x06\x33\x55\x02\x04\x63\x61\x72\x09\x22"
  "\x0e\xfd\xff\x03\x21\x0c\xfd\xff\x03\x20\x0a\xfd\xff\x03\x1f\x08"
  "\xfd\xff\x03\x1e\x06\xff\xff\x03\x1d\x04\x85\x08\x0d\x13\x0a\x02"
  "\x09\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x02\x03\x14\x77\x69\x74"
  "\x68\x2d\x6e\x65\x77\x2d\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x73"
  "\x04\x03\x0d\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x65\x64\x3f\x03"
  "\x0b\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x21\x04\x15\x6c\x69\x73"
  "\x74\x2d\x73\x65\x61\x72\x63\x68\x2d\x70\x6f\x73\x69\x74\x69\x76"
  "\x65\x06\x2c\x16\x81\x87\x02\x2b\x14\x81\x85\x02\x2a\x12\x81\x87"
  "\x02\x29\x10\x81\x85\x02\x28\x0e\x81\x85\x02\x27\x0c\x81\x85\x02"
  "\x26\x0a\x81\x85\x02\x25\x08\x81\x85\x02\x24\x06\x81\x83\x02\x23"
  "\x04\x84\x06\x15\x28\x02\x14\x09\x09\x0b\x0a\x19\x63\x6f\x6e\x74"
  "\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x65\x66"
  "\x66\x65\x63\x74\x02\x03\x13\x72\x76\x61\x6c\x75\x65\x2d\x6b\x6e"
  "\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65\x03\x18\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x62\x6c\x6f"
  "\x63\x6b\x04\x0c\x64\x69\x73\x74\x61\x6e\x63\x65\x2d\x74\x6f\x09"
  "\x04\x44\x32\x81\x87\x02\x43\x30\x81\x87\x02\x42\x2e\x81\x87\x02"
  "\x41\x2c\x81\x85\x02\x40\x2a\x81\x85\x02\x3f\x28\x81\x85\x02\x3e"
  "\x26\x81\x87\x02\x3d\x24\x81\x87\x02\x3c\x22\x81\x85\x02\x3b\x20"
  "\x81\x85\x02\x3a\x1e\x81\x85\x02\x39\x1c\x81\x8b\x02\x38\x1a\x81"
  "\x89\x02\x37\x18\x81\x87\x02\x36\x16\x81\x89\x02\x35\x14\x81\x89"
  "\x02\x34\x12\x81\x85\x02\x33\x10\x81\x87\x02\x32\x0e\x81\x89\x02"
  "\x31\x0c\x81\x85\x02\x30\x0a\x81\x87\x02\x2f\x08\x81\x87\x02\x2e"
  "\x06\x81\x85\x02\x2d\x04\x84\x06\x31\x46\x02\x11\x4a\x0e\xfd\xff"
  "\x03\x49\x0c\xfd\xff\x03\x48\x0a\xfd\xff\x03\x47\x08\xfd\xff\x03"
  "\x46\x06\xff\xff\x03\x45\x04\x84\x06\x0d\x14\x04\x04\x04\x0a\x04"
  "\x04\x09\x19\x66\x69\x6e\x64\x2d\x65\x71\x75\x69\x76\x61\x6c\x65"
  "\x6e\x74\x2d\x72\x65\x74\x75\x72\x6e\x73\x21\x05\x10\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80"
  "\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
reteqv_so_data_0b7c5ed85e38c4ae (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_reteqv_so_data_0b7c5ed85e38c4ae [0]))), (sizeof (prog_reteqv_so_data_0b7c5ed85e38c4ae)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("reteqv.so", reteqv_so_data_0b7c5ed85e38c4ae)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("reteqv.so", "9841ca5b6d16a9ee")
