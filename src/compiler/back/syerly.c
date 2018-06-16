/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:09-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_8 7
#define LABEL_1_5 9
#define LABEL_1_11 11
#define LABEL_1_13 13
#define LABEL_1_9 15
#define TAG_1_10 6
#define LABEL_1_12 17
#define LABEL_1_18 19
#define LABEL_1_19 21
#define LABEL_1_15 23
#define LABEL_1_21 25
#define LABEL_1_22 27
#define LABEL_1_26 29
#define LABEL_1_17 31
#define LABEL_1_27 33
#define LABEL_1_28 35
#define LABEL_1_29 37
#define LABEL_1_30 39
#define LABEL_1_31 41
#define LABEL_1_36 43
#define LABEL_1_33 45
#define TAG_1_34 21
#define ENVIRONMENT_LABEL_1_3 80
#define DEBUGGING_LABEL_1_2 79
#define OBJECT_1_10 78
#define OBJECT_1_9 77
#define OBJECT_1_8 76
#define OBJECT_1_7 75
#define OBJECT_1_6 74
#define OBJECT_1_5 73
#define OBJECT_1_4 72
#define OBJECT_1_3 71
#define OBJECT_1_2 70
#define OBJECT_1_1 69
#define OBJECT_1_0 68
#define EXECUTE_CACHE_1_35 47
#define EXECUTE_CACHE_1_32 49
#define EXECUTE_CACHE_1_25 51
#define EXECUTE_CACHE_1_24 53
#define EXECUTE_CACHE_1_23 55
#define EXECUTE_CACHE_1_20 57
#define EXECUTE_CACHE_1_16 59
#define EXECUTE_CACHE_1_14 61
#define EXECUTE_CACHE_1_7 63
#define FREE_REFERENCE_1_1 66
#define FREE_REFERENCE_1_0 67
#define FREE_REFERENCES_LABEL_1_0 46
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syerly_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_26;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto label_29;

    case 5:
      current_block = (Rpc - LABEL_1_13);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_3;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_1_18);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_1_19);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_23;

    case 12:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_22;

    case 13:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_1_27);
      goto label_33;

    case 16:
      current_block = (Rpc - LABEL_1_28);
      goto label_34;

    case 17:
      current_block = (Rpc - LABEL_1_29);
      goto label_35;

    case 18:
      current_block = (Rpc - LABEL_1_30);
      goto label_36;

    case 19:
      current_block = (Rpc - LABEL_1_31);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_1_36);
      goto continuation_17;

    case 21:
      current_block = (Rpc - LABEL_1_33);
      goto lambda_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_38)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_62;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_9])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  ((Wrd6.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd10.uLng) == 1)
    goto label_60;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  goto lambda_3;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_8);

DEFLABEL (label_60)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_59;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_58)
  if (! ((Wrd16.Obj) == (current_block [OBJECT_1_1])))
    goto label_41;
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_41)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_57;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_56)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_1_21);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_42)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_55;
  Wrd18 = Wrd22;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_53;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_52)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_51;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd49.Obj);
  goto lambda_3;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_26);

DEFLABEL (label_51)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_50;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_49)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_48;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_47)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_46;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_45)
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_44;
  Wrd35 = Wrd39;

DEFLABEL (label_43)
  (Rsp [4]) = (Wrd35.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_32]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_1_31);
  (Rsp [5]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_33])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [7]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [6]) = (Wrd7.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_1_8]);
  (Rsp [7]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_35]));

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_30])), (Wrd36.pObj));

DEFLABEL (label_36)
  (Wrd35.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 1);

DEFLABEL (label_35)
  (Wrd25.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_53)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_18])), (Wrd19.pObj));

DEFLABEL (label_31)
  (Wrd18.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_29)
  (Wrd16.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_62)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (lambda_39)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_1_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_1_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_1_33);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_64;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_1_9]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  goto lambda_3;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_36);

DEFLABEL (label_64)
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_1_10]))
    goto label_63;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_63)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_9 7
#define TAG_2_10 2
#define LABEL_2_7 9
#define LABEL_2_12 11
#define LABEL_2_17 13
#define LABEL_2_19 15
#define LABEL_2_20 17
#define LABEL_2_22 19
#define LABEL_2_24 21
#define LABEL_2_26 23
#define LABEL_2_28 25
#define LABEL_2_15 27
#define LABEL_2_29 29
#define LABEL_2_27 31
#define LABEL_2_23 33
#define LABEL_2_18 35
#define LABEL_2_33 37
#define LABEL_2_31 39
#define LABEL_2_32 41
#define ENVIRONMENT_LABEL_2_3 77
#define DEBUGGING_LABEL_2_2 76
#define OBJECT_2_10 75
#define OBJECT_2_9 74
#define OBJECT_2_8 73
#define OBJECT_2_7 72
#define OBJECT_2_6 71
#define OBJECT_2_5 70
#define OBJECT_2_4 69
#define OBJECT_2_3 68
#define OBJECT_2_2 67
#define OBJECT_2_1 66
#define OBJECT_2_0 65
#define EXECUTE_CACHE_2_30 43
#define EXECUTE_CACHE_2_25 45
#define EXECUTE_CACHE_2_21 47
#define EXECUTE_CACHE_2_16 49
#define EXECUTE_CACHE_2_14 51
#define EXECUTE_CACHE_2_13 53
#define EXECUTE_CACHE_2_11 55
#define EXECUTE_CACHE_2_8 57
#define EXECUTE_CACHE_2_6 59
#define FREE_REFERENCE_2_2 62
#define FREE_REFERENCE_2_1 63
#define FREE_REFERENCE_2_0 64
#define FREE_REFERENCES_LABEL_2_0 42
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syerly_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd56;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd80;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto scode_unquasiquote_26;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_9);
      goto lambda_37;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_2_17);
      goto kernel_24;

    case 6:
      current_block = (Rpc - LABEL_2_19);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_2_20);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_2_22);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_2_24);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_2_26);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_2_28);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_2_29);
      goto lambda_15;

    case 14:
      current_block = (Rpc - LABEL_2_27);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_17;

    case 16:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_22;

    case 17:
      current_block = (Rpc - LABEL_2_33);
      goto label_34;

    case 18:
      current_block = (Rpc - LABEL_2_31);
      goto continuation_12;

    case 19:
      current_block = (Rpc - LABEL_2_32);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_unquasiquote_36)
DEFLABEL (scode_unquasiquote_26)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_9])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (label_40)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (label_41)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_2_3]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_2_9);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_2_0])))
    goto label_42;
  (Wrd11.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto kernel_24;

DEFLABEL (label_42)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_43;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_2_3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (* (--Rsp)) = Rvl;
  goto kernel_24;

DEFLABEL (kernel_38)
DEFLABEL (kernel_24)
  INTERRUPT_CHECK (26, LABEL_2_17);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_2_1]))
    goto label_55;
  if ((Wrd5.Obj) == (current_block [OBJECT_2_6]))
    goto label_50;
  if ((Wrd5.Obj) == (current_block [OBJECT_2_7]))
    goto label_45;
  if ((Wrd5.Obj) == (current_block [OBJECT_2_8]))
    goto label_44;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (Wrd19.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_2_3]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (Rsp [2]) = (Wrd25.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_30]));

DEFLABEL (label_45)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_49;
  Wrd29 = Wrd33;

DEFLABEL (label_48)
  (Rsp [2]) = (Wrd29.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_47;
  Wrd39 = Wrd43;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_2_27);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_9]), 2);

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_28])), (Wrd40.pObj));

DEFLABEL (label_29)
  (Wrd39.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_26])), (Wrd30.pObj));

DEFLABEL (label_28)
  (Wrd29.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_54;
  Wrd46 = Wrd50;

DEFLABEL (label_53)
  (Rsp [2]) = (Wrd46.Obj);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd57.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd60.Obj) = ((Wrd57.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_52;
  Wrd56 = Wrd60;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_23);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_9]), 2);

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_24])), (Wrd57.pObj));

DEFLABEL (label_31)
  (Wrd56.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_22])), (Wrd47.pObj));

DEFLABEL (label_30)
  (Wrd46.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd68.Obj) = (Rsp [4]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_61;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd65.Obj) = ((Wrd67.pObj) [1]);

DEFLABEL (label_60)
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_59;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (* (--Rsp)) = (Wrd75.Obj);

DEFLABEL (label_58)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_57;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_56)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_32);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_33]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 1);

DEFLABEL (label_32)
  (Wrd65.Obj) = Rvl;
  goto label_60;

DEFLABEL (lambda_39)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_2_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_31);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (label_62)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_2_10]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_10 7
#define LABEL_3_11 9
#define LABEL_3_8 11
#define ENVIRONMENT_LABEL_3_3 23
#define DEBUGGING_LABEL_3_2 22
#define OBJECT_3_0 21
#define EXECUTE_CACHE_3_13 13
#define EXECUTE_CACHE_3_12 15
#define EXECUTE_CACHE_3_9 17
#define EXECUTE_CACHE_3_7 19
#define FREE_REFERENCES_LABEL_3_0 12
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syerly_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_3_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_5 3
#define LABEL_4_6 5
#define LABEL_4_4 7
#define LABEL_4_11 9
#define LABEL_4_8 11
#define LABEL_4_12 13
#define LABEL_4_15 15
#define ENVIRONMENT_LABEL_4_3 32
#define DEBUGGING_LABEL_4_2 31
#define OBJECT_4_1 30
#define OBJECT_4_0 29
#define EXECUTE_CACHE_4_16 17
#define EXECUTE_CACHE_4_14 19
#define EXECUTE_CACHE_4_13 21
#define EXECUTE_CACHE_4_10 23
#define EXECUTE_CACHE_4_9 25
#define EXECUTE_CACHE_4_7 27
#define FREE_REFERENCES_LABEL_4_0 16
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syerly_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd28;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_4);
      goto is_operatorP_10;

    case 3:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_4_15);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (is_operatorP_13)
DEFLABEL (is_operatorP_10)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd28.Obj) = (Rsp [2]);
  if (Rvl == (Wrd28.Obj))
    goto label_15;

DEFLABEL (label_16)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_15)
  (Wrd30.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_14)
DEFLABEL (label_27)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Wrd21.Obj) = (Rsp [2]);
  if (Rvl == (Wrd21.Obj))
    goto label_19;
  (Wrd11.Obj) = (current_block [OBJECT_4_1]);
  goto label_18;

DEFLABEL (label_19)
  (Wrd11.Obj) = (current_block [OBJECT_4_0]);

DEFLABEL (label_18)
DEFLABEL (label_25)
  (Rsp [0]) = (Wrd11.Obj);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;
  Rvl = (Wrd11.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_15);
  (Wrd7.Obj) = (Rsp [2]);
  if (Rvl == (Wrd7.Obj))
    goto label_23;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_22;

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_4_0]);

DEFLABEL (label_22)
DEFLABEL (label_24)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd11.Obj) = ((SCHEME_OBJECT) 0);
  goto label_25;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_8 5
#define LABEL_5_5 7
#define TAG_5_6 2
#define LABEL_5_11 9
#define LABEL_5_12 11
#define LABEL_5_13 13
#define LABEL_5_16 15
#define LABEL_5_17 17
#define LABEL_5_19 19
#define LABEL_5_20 21
#define LABEL_5_21 23
#define LABEL_5_7 25
#define LABEL_5_23 27
#define LABEL_5_10 29
#define LABEL_5_26 31
#define LABEL_5_27 33
#define LABEL_5_28 35
#define LABEL_5_25 37
#define LABEL_5_31 39
#define LABEL_5_32 41
#define LABEL_5_29 43
#define LABEL_5_14 45
#define TAG_5_15 21
#define LABEL_5_36 47
#define LABEL_5_38 49
#define LABEL_5_41 51
#define LABEL_5_42 53
#define LABEL_5_43 55
#define LABEL_5_44 57
#define LABEL_5_34 59
#define LABEL_5_45 61
#define LABEL_5_37 63
#define LABEL_5_39 65
#define LABEL_5_47 67
#define LABEL_5_48 69
#define LABEL_5_40 71
#define LABEL_5_50 73
#define LABEL_5_46 75
#define LABEL_5_49 77
#define ENVIRONMENT_LABEL_5_3 103
#define DEBUGGING_LABEL_5_2 102
#define OBJECT_5_6 101
#define OBJECT_5_5 100
#define OBJECT_5_4 99
#define OBJECT_5_3 98
#define OBJECT_5_2 97
#define OBJECT_5_1 96
#define OBJECT_5_0 95
#define EXECUTE_CACHE_5_51 79
#define EXECUTE_CACHE_5_35 81
#define EXECUTE_CACHE_5_33 83
#define EXECUTE_CACHE_5_30 85
#define EXECUTE_CACHE_5_24 87
#define EXECUTE_CACHE_5_22 89
#define EXECUTE_CACHE_5_18 91
#define EXECUTE_CACHE_5_9 93
#define FREE_REFERENCES_LABEL_5_0 78
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syerly_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_43;

    case 1:
      current_block = (Rpc - LABEL_5_8);
      goto label_45;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_11;

    case 3:
      current_block = (Rpc - LABEL_5_11);
      goto label_46;

    case 4:
      current_block = (Rpc - LABEL_5_12);
      goto label_47;

    case 5:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_19;

    case 6:
      current_block = (Rpc - LABEL_5_16);
      goto label_55;

    case 7:
      current_block = (Rpc - LABEL_5_17);
      goto label_56;

    case 8:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_5_20);
      goto label_51;

    case 10:
      current_block = (Rpc - LABEL_5_21);
      goto label_52;

    case 11:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_5_23);
      goto label_48;

    case 13:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_2;

    case 14:
      current_block = (Rpc - LABEL_5_26);
      goto label_49;

    case 15:
      current_block = (Rpc - LABEL_5_27);
      goto label_50;

    case 16:
      current_block = (Rpc - LABEL_5_28);
      goto continuation_9;

    case 17:
      current_block = (Rpc - LABEL_5_25);
      goto continuation_5;

    case 18:
      current_block = (Rpc - LABEL_5_31);
      goto label_53;

    case 19:
      current_block = (Rpc - LABEL_5_32);
      goto label_54;

    case 20:
      current_block = (Rpc - LABEL_5_29);
      goto continuation_10;

    case 21:
      current_block = (Rpc - LABEL_5_14);
      goto lambda_67;

    case 22:
      current_block = (Rpc - LABEL_5_36);
      goto continuation_27;

    case 23:
      current_block = (Rpc - LABEL_5_38);
      goto label_59;

    case 24:
      current_block = (Rpc - LABEL_5_41);
      goto label_60;

    case 25:
      current_block = (Rpc - LABEL_5_42);
      goto continuation_23;

    case 26:
      current_block = (Rpc - LABEL_5_43);
      goto continuation_25;

    case 27:
      current_block = (Rpc - LABEL_5_44);
      goto label_58;

    case 28:
      current_block = (Rpc - LABEL_5_34);
      goto continuation_22;

    case 29:
      current_block = (Rpc - LABEL_5_45);
      goto label_57;

    case 30:
      current_block = (Rpc - LABEL_5_37);
      goto continuation_40;

    case 31:
      current_block = (Rpc - LABEL_5_39);
      goto continuation_37;

    case 32:
      current_block = (Rpc - LABEL_5_47);
      goto label_61;

    case 33:
      current_block = (Rpc - LABEL_5_48);
      goto label_62;

    case 34:
      current_block = (Rpc - LABEL_5_40);
      goto continuation_36;

    case 35:
      current_block = (Rpc - LABEL_5_50);
      goto label_63;

    case 36:
      current_block = (Rpc - LABEL_5_46);
      goto continuation_31;

    case 37:
      current_block = (Rpc - LABEL_5_49);
      goto continuation_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_65)
DEFLABEL (lambda_43)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_81;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_80)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_5_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_69;

DEFLABEL (label_68)
  (Wrd19.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd19.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_11;

DEFLABEL (label_69)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_79;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_78)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_24]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_19);
  (Wrd22.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd22.uLng) == 47))
    goto label_68;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_77;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_76)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_75;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_74)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_22]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_5_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_14])));
  Rhp += 3;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  Wrd51 = Wrd46;
  (Wrd52.Obj) = (Rsp [2]);
  ((Wrd51.pObj) [2]) = (Wrd52.Obj);
  (Wrd50.Obj) = (Rsp [1]);
  ((Wrd51.pObj) [3]) = (Wrd50.Obj);
  (Wrd48.Obj) = (Rsp [0]);
  ((Wrd51.pObj) [4]) = (Wrd48.Obj);
  (Rsp [3]) = (Wrd45.Obj);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_73;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_72)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_71;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd62.Obj) = ((Wrd63.pObj) [0]);

DEFLABEL (label_70)
  (Rsp [2]) = (Wrd62.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (label_71)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_56)
  (Wrd62.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_55)
  (Wrd53.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_51)
  (Wrd26.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_23]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (lambda_66)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_5_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [4]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_96;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_95)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_94;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_93)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_82;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [2]);
  (Rsp [0]) = (Wrd32.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_82)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_92;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_91)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_90;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_89)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_24]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_25);
  if (! (Rvl == (current_block [OBJECT_5_2])))
    goto label_84;

DEFLABEL (label_83)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_29]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = ((Wrd34.pObj) [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_30]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_29);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_84)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_88;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_87)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_86;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_85)
  (Wrd32.Obj) = (current_block [OBJECT_5_4]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_33]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_28);
  goto label_83;

DEFLABEL (label_86)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_32]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_31]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_53)
  (Wrd10.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_49)
  (Wrd10.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_46)
  (Wrd8.Obj) = Rvl;
  goto label_95;

DEFLABEL (lambda_67)
  CLOSURE_HEADER (LABEL_5_14);

DEFLABEL (lambda_41)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_35]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_5_34);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_98;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_42]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_5_6]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_35]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_5_42);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_98;

DEFLABEL (label_97)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [4]);
  (Rsp [2]) = (Wrd39.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_11;

DEFLABEL (label_98)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_43]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_103;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_102)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_5_43);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_97;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_36]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_100;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_99)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_24]));

DEFLABEL (label_100)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_44]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_58)
DEFLABEL (label_101)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (label_103)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_45]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_5_36);
  (Wrd46.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd46.uLng) == 47))
    goto label_97;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_37]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_106;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [1]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_105)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_39]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_40]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd68.Obj) = (Rsp [6]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_104;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (* (--Rsp)) = (Wrd67.Obj);
  goto label_99;

DEFLABEL (label_104)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_41]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_60)
  goto label_101;

DEFLABEL (label_106)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_38]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_5_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_115;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_114)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_24]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_5_49);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_51]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_5_39);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_46]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_113;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_112)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_111;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_110)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_5_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_108;
  (Wrd7.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_107;

DEFLABEL (label_108)
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_107)
DEFLABEL (label_109)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_30]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_5_37);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_111)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_48]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_47]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_61)
  (Wrd13.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_50]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_114;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_9 9
#define LABEL_10 11
#define LABEL_11 13
#define LABEL_12 15
#define LABEL_13 17
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_17 23
#define TAG_18 10
#define LABEL_22 25
#define LABEL_20 27
#define LABEL_26 29
#define LABEL_30 31
#define LABEL_32 33
#define LABEL_34 35
#define LABEL_35 37
#define LABEL_21 39
#define LABEL_37 41
#define LABEL_38 43
#define LABEL_24 45
#define LABEL_25 47
#define LABEL_40 49
#define LABEL_41 51
#define LABEL_43 53
#define LABEL_33 55
#define LABEL_42 57
#define LABEL_47 59
#define LABEL_27 61
#define LABEL_28 63
#define LABEL_29 65
#define LABEL_51 67
#define LABEL_52 69
#define LABEL_45 71
#define TAG_46 34
#define LABEL_56 73
#define LABEL_58 75
#define LABEL_49 77
#define LABEL_50 79
#define LABEL_53 81
#define LABEL_54 83
#define LABEL_60 85
#define LABEL_61 87
#define LABEL_55 89
#define LABEL_59 91
#define LABEL_64 93
#define TAG_65 45
#define LABEL_69 95
#define LABEL_67 97
#define LABEL_71 99
#define LABEL_72 101
#define LABEL_70 103
#define LABEL_75 105
#define LABEL_76 107
#define LABEL_78 109
#define LABEL_79 111
#define LABEL_80 113
#define LABEL_77 115
#define LABEL_84 117
#define LABEL_85 119
#define LABEL_73 121
#define TAG_74 59
#define LABEL_87 123
#define LABEL_83 125
#define LABEL_81 127
#define LABEL_86 129
#define LABEL_89 131
#define LABEL_90 133
#define LABEL_91 135
#define LABEL_92 137
#define ENVIRONMENT_LABEL_3 204
#define DEBUGGING_LABEL_2 203
#define PURIFICATION_ROOT 202
#define OBJECT_27 201
#define OBJECT_26 200
#define OBJECT_25 199
#define OBJECT_24 198
#define OBJECT_23 197
#define OBJECT_22 196
#define OBJECT_21 195
#define OBJECT_20 194
#define OBJECT_19 193
#define OBJECT_18 192
#define OBJECT_17 191
#define OBJECT_16 190
#define OBJECT_15 189
#define OBJECT_14 188
#define OBJECT_13 187
#define OBJECT_12 186
#define OBJECT_11 185
#define OBJECT_10 184
#define OBJECT_9 183
#define OBJECT_8 182
#define OBJECT_7 181
#define OBJECT_6 180
#define OBJECT_5 179
#define OBJECT_4 178
#define OBJECT_3 177
#define OBJECT_2 176
#define OBJECT_1 175
#define OBJECT_0 174
#define EXECUTE_CACHE_88 139
#define EXECUTE_CACHE_82 141
#define EXECUTE_CACHE_68 143
#define EXECUTE_CACHE_66 145
#define EXECUTE_CACHE_63 147
#define EXECUTE_CACHE_62 149
#define EXECUTE_CACHE_57 151
#define EXECUTE_CACHE_48 153
#define EXECUTE_CACHE_44 155
#define EXECUTE_CACHE_39 157
#define EXECUTE_CACHE_36 159
#define EXECUTE_CACHE_31 161
#define EXECUTE_CACHE_23 163
#define EXECUTE_CACHE_19 165
#define EXECUTE_CACHE_14 167
#define EXECUTE_CACHE_8 169
#define GLOBAL_EXECUTE_CACHE_5 172
#define FREE_REFERENCES_LABEL_0 138
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
syerly_so_5a875bcc10c15a39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd70;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto continuation_27;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_26;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_29;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_28;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto lambda_102;

    case 11:
      current_block = (Rpc - LABEL_22);
      goto label_79;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_30;

    case 13:
      current_block = (Rpc - LABEL_26);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_30);
      goto label_85;

    case 15:
      current_block = (Rpc - LABEL_32);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_34);
      goto label_82;

    case 17:
      current_block = (Rpc - LABEL_35);
      goto label_83;

    case 18:
      current_block = (Rpc - LABEL_21);
      goto continuation_8;

    case 19:
      current_block = (Rpc - LABEL_37);
      goto label_80;

    case 20:
      current_block = (Rpc - LABEL_38);
      goto label_81;

    case 21:
      current_block = (Rpc - LABEL_24);
      goto continuation_32;

    case 22:
      current_block = (Rpc - LABEL_25);
      goto continuation_31;

    case 23:
      current_block = (Rpc - LABEL_40);
      goto continuation_33;

    case 24:
      current_block = (Rpc - LABEL_41);
      goto lambda_48;

    case 25:
      current_block = (Rpc - LABEL_43);
      goto label_84;

    case 26:
      current_block = (Rpc - LABEL_33);
      goto continuation_14;

    case 27:
      current_block = (Rpc - LABEL_42);
      goto continuation_35;

    case 28:
      current_block = (Rpc - LABEL_47);
      goto label_86;

    case 29:
      current_block = (Rpc - LABEL_27);
      goto continuation_23;

    case 30:
      current_block = (Rpc - LABEL_28);
      goto continuation_18;

    case 31:
      current_block = (Rpc - LABEL_29);
      goto continuation_17;

    case 32:
      current_block = (Rpc - LABEL_51);
      goto label_87;

    case 33:
      current_block = (Rpc - LABEL_52);
      goto label_88;

    case 34:
      current_block = (Rpc - LABEL_45);
      goto lambda_104;

    case 35:
      current_block = (Rpc - LABEL_56);
      goto label_89;

    case 36:
      current_block = (Rpc - LABEL_58);
      goto parse_75;

    case 37:
      current_block = (Rpc - LABEL_49);
      goto continuation_22;

    case 38:
      current_block = (Rpc - LABEL_50);
      goto continuation_21;

    case 39:
      current_block = (Rpc - LABEL_53);
      goto continuation_46;

    case 40:
      current_block = (Rpc - LABEL_54);
      goto continuation_45;

    case 41:
      current_block = (Rpc - LABEL_60);
      goto label_90;

    case 42:
      current_block = (Rpc - LABEL_61);
      goto label_91;

    case 43:
      current_block = (Rpc - LABEL_55);
      goto continuation_42;

    case 44:
      current_block = (Rpc - LABEL_59);
      goto continuation_49;

    case 45:
      current_block = (Rpc - LABEL_64);
      goto lambda_106;

    case 46:
      current_block = (Rpc - LABEL_69);
      goto continuation_51;

    case 47:
      current_block = (Rpc - LABEL_67);
      goto continuation_50;

    case 48:
      current_block = (Rpc - LABEL_71);
      goto label_92;

    case 49:
      current_block = (Rpc - LABEL_72);
      goto label_93;

    case 50:
      current_block = (Rpc - LABEL_70);
      goto continuation_54;

    case 51:
      current_block = (Rpc - LABEL_75);
      goto label_96;

    case 52:
      current_block = (Rpc - LABEL_76);
      goto label_97;

    case 53:
      current_block = (Rpc - LABEL_78);
      goto label_94;

    case 54:
      current_block = (Rpc - LABEL_79);
      goto label_95;

    case 55:
      current_block = (Rpc - LABEL_80);
      goto continuation_69;

    case 56:
      current_block = (Rpc - LABEL_77);
      goto continuation_64;

    case 57:
      current_block = (Rpc - LABEL_84);
      goto label_98;

    case 58:
      current_block = (Rpc - LABEL_85);
      goto label_99;

    case 59:
      current_block = (Rpc - LABEL_73);
      goto lambda_107;

    case 60:
      current_block = (Rpc - LABEL_87);
      goto label_100;

    case 61:
      current_block = (Rpc - LABEL_83);
      goto continuation_68;

    case 62:
      current_block = (Rpc - LABEL_81);
      goto continuation_70;

    case 63:
      current_block = (Rpc - LABEL_86);
      goto continuation_60;

    case 64:
      current_block = (Rpc - LABEL_89);
      goto continuation_72;

    case 65:
      current_block = (Rpc - LABEL_90);
      goto label_109;

    case 66:
      current_block = (Rpc - LABEL_91);
      goto label_110;

    case 67:
      current_block = (Rpc - LABEL_92);
      goto expression_78;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_78)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_91])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_110)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_109)
  {
    static const short sections [] =
      {
	0,
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
    if (counter > 5)
      goto label_108;
    blocks = (current_block [OBJECT_27]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_90])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_108)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_40);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (lambda_102)
  CLOSURE_HEADER (LABEL_17);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_128;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_127)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_21);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_112;

DEFLABEL (label_111)
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_112)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_126;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_125)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_124;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_123)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_32);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_111;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_122;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_121)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_120;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_119)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18]), 2);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_26);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_111;
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd65.Obj) = (Rsp [4]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_118;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_117)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_116;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_115)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_114;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_113)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_50);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 2);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_49);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_114)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 1);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 1);

DEFLABEL (label_87)
  (Wrd11.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 1);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 1);

DEFLABEL (label_83)
  (* (--Rsp)) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 1);

DEFLABEL (label_82)
  (Wrd35.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 1);

DEFLABEL (label_81)
  (* (--Rsp)) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 1);

DEFLABEL (label_80)
  (Wrd10.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 1);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_127;

DEFLABEL (lambda_103)
DEFLABEL (lambda_48)
  INTERRUPT_CHECK (26, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_133;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_132)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_42);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_129;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_129)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_131;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_130)
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  goto parse_75;

DEFLABEL (label_131)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 1);

DEFLABEL (label_86)
  (Wrd14.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 1);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_132;

DEFLABEL (lambda_104)
  CLOSURE_HEADER (LABEL_45);

DEFLABEL (lambda_47)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_134;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Rsp [3]) = (Wrd25.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_134)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_140;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_139)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_54);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_138;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_137)
  (Wrd17.Obj) = (current_block [OBJECT_20]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_136;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_135)
  (Wrd30.Obj) = (current_block [OBJECT_20]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_53);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_136)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 1);

DEFLABEL (label_91)
  (Wrd18.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 1);

DEFLABEL (label_90)
  (Wrd5.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 1);

DEFLABEL (label_89)
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (parse_105)
DEFLABEL (parse_75)
  INTERRUPT_CHECK (26, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_59);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_141;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_65);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_64])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66]));

DEFLABEL (label_141)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (lambda_106)
  CLOSURE_HEADER (LABEL_64);

DEFLABEL (lambda_74)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_67);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_142;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd30.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_69);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_142;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (label_142)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_161;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_160)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_159;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_158)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_70);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_153;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_152;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_151)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_150;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_149)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_77);
  if (! (Rvl == (current_block [OBJECT_20])))
    goto label_144;

DEFLABEL (label_143)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_81);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_89);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (Rsp [1]) = (Wrd9.Obj);
  goto pop_return;

DEFLABEL (label_144)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_148;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_147)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_146;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_145)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_83);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_80);
  goto label_143;

DEFLABEL (label_146)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 1);

DEFLABEL (label_99)
  (* (--Rsp)) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 1);

DEFLABEL (label_98)
  (Wrd13.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 1);

DEFLABEL (label_95)
  (* (--Rsp)) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 1);

DEFLABEL (label_94)
  (Wrd10.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_153)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73])));
  Rhp += 3;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd32 = Wrd27;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  ((Wrd32.pObj) [2]) = (Wrd35.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd32.pObj) [3]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [4]) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_157;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_156)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_155;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd45.Obj) = ((Wrd46.pObj) [0]);

DEFLABEL (label_154)
  (Rsp [2]) = (Wrd45.Obj);
  (Wrd52.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd52.Obj);
  Rsp = (& (Rsp [1]));
  goto parse_75;

DEFLABEL (label_155)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 1);

DEFLABEL (label_97)
  (Wrd45.Obj) = Rvl;
  goto label_154;

DEFLABEL (label_157)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 1);

DEFLABEL (label_96)
  (Wrd36.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 1);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 1);

DEFLABEL (label_92)
  (Wrd10.Obj) = Rvl;
  goto label_160;

DEFLABEL (lambda_107)
  CLOSURE_HEADER (LABEL_73);

DEFLABEL (lambda_61)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_162;
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [2]);
  (Rsp [0]) = (Wrd37.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (label_162)
  (Wrd7.Obj) = (current_block [OBJECT_25]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_164;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd11.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_163)
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.Obj) = (current_block [OBJECT_20]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [4]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_86);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  goto pop_return;

DEFLABEL (label_164)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 1);

DEFLABEL (label_100)
  (Wrd11.Obj) = Rvl;
  goto label_163;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_syerly_so_5a875bcc10c15a39 [5] =
  {
    { "syerly_so_code_1", 22, syerly_so_code_1 },
    { "syerly_so_code_2", 20, syerly_so_code_2 },
    { "syerly_so_code_3", 5, syerly_so_code_3 },
    { "syerly_so_code_4", 7, syerly_so_code_4 },
    { "syerly_so_code_5", 38, syerly_so_code_5 }
  };

int
decl_syerly_so_5a875bcc10c15a39 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_syerly_so_5a875bcc10c15a39);
  return (0);
}

DECLARE_COMPILED_CODE ("syerly.so", 68, decl_syerly_so_5a875bcc10c15a39, syerly_so_5a875bcc10c15a39)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_syerly_so_data_5a875bcc10c15a39 [2826] =
  "\xcd\x01\x1a\xd1\x04\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x0c\x81"
  "\xc1\xb9\x0c\x0d\x0c\x0c\x0d\x0d\x0d\x0d\x0d\x0d\x08\x8d\x0d\xba"
  "\xc1\xbb\x0d\xbc\x0d\xbd\x24\x28\x0d\xbe\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\xbf\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x82\x88\x0d\xc2\x0d\x0d\x1c\x0d\x1c\xb3\xb1\xb2\x08\x0d\xba"
  "\xc2\x1c\x1b\xb6\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\xb6\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x0d"
  "\x28\x0d\x28\x1b\x28\xb7\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x06\x07\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x85\x88\xb2\x0d\xb8\x0c\x1b\x08\xb1\xb3\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x9c\x1c\x88\x1b"
  "\x0c\x07\x0d\xb0\xb2\x1b\x08\xc2\xc2\x0d\x0d\xb1\x1b\x2a\xb3\x0d"
  "\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x0d\x08\x89\x0d\xc3\xb6\x1b\x2a\x1b"
  "\x2a\xb5\xb4\x99\x08\x08\x99\x28\x0d\x26\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\xb7\x28\x0d"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f"
  "\x62\x61\x63\x6b\x2f\x73\x79\x65\x72\x6c\x79\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x09\x74\x6f\x6f\x2d\x6d\x61\x6e\x79\x14\x75"
  "\x6e\x6b\x6e\x6f\x77\x6e\x20\x69\x6e\x73\x74\x72\x75\x63\x74\x69"
  "\x6f\x6e\x04\x63\x64\x72\x0f\x75\x6e\x6b\x6e\x6f\x77\x6e\x20\x6f"
  "\x70\x63\x6f\x64\x65\x20\x64\x69\x72\x65\x63\x74\x69\x76\x65\x2d"
  "\x3e\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x2d\x73\x65\x71"
  "\x75\x65\x6e\x63\x65\x22\x4c\x41\x50\x3a\x53\x59\x4e\x54\x41\x58"
  "\x2d\x49\x4e\x53\x54\x52\x55\x43\x54\x49\x4f\x4e\x2d\x45\x58\x50"
  "\x41\x4e\x44\x45\x52\x3a\x20\x10\x62\x61\x64\x20\x69\x6e\x73\x74"
  "\x72\x75\x63\x74\x69\x6f\x6e\x07\x65\x71\x75\x61\x74\x65\x0e\x73"
  "\x63\x68\x65\x6d\x65\x2d\x6f\x62\x6a\x65\x63\x74\x12\x73\x63\x68"
  "\x65\x6d\x65\x2d\x65\x76\x61\x6c\x75\x61\x74\x69\x6f\x6e\x0c\x65"
  "\x6e\x74\x72\x79\x2d\x70\x6f\x69\x6e\x74\x06\x6c\x61\x62\x65\x6c"
  "\x0d\x62\x6c\x6f\x63\x6b\x2d\x6f\x66\x66\x73\x65\x74\x08\x75\x6e"
  "\x71\x75\x6f\x74\x65\x04\x63\x61\x72\x13\x65\x61\x72\x6c\x79\x2d"
  "\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x73\x13\x65\x61\x72"
  "\x6c\x79\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x73\x03"
  "\x03\x13\x73\x63\x6f\x64\x65\x2f\x75\x6e\x71\x75\x61\x73\x69\x71"
  "\x75\x6f\x74\x65\x04\x05\x6d\x65\x6d\x71\x04\x0e\x73\x74\x72\x69"
  "\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x04\x05\x61\x73\x73\x71\x03"
  "\x14\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x04\x06\x65\x72\x72\x6f\x72\x09\x04\x17\x73\x63"
  "\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x63\x6f\x6d\x62\x69\x6e\x61"
  "\x74\x69\x6f\x6e\x0a\x03\x14\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b"
  "\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x0b\x08\x15\x65\x61\x72"
  "\x6c\x79\x2d\x70\x61\x74\x74\x65\x72\x6e\x2d\x6c\x6f\x6f\x6b\x75"
  "\x70\x0a\x5a\x2e\x81\x87\x02\x59\x2c\x81\x87\x02\x58\x2a\x81\x91"
  "\x02\x57\x28\x81\x91\x02\x56\x26\x81\x91\x02\x55\x24\x81\x8f\x02"
  "\x54\x22\x81\x8d\x02\x53\x20\x81\x8b\x02\x52\x1e\x81\x8d\x02\x51"
  "\x1c\x81\x8f\x02\x50\x1a\x81\x8b\x02\x4f\x18\x81\x87\x02\x4e\x16"
  "\x81\x8f\x02\x4d\x14\x81\x8d\x02\x4c\x12\x81\x8b\x02\x4b\x10\x81"
  "\x85\x02\x4a\x0e\x81\x8f\x02\x49\x0c\x81\x8b\x02\x48\x0a\x81\x87"
  "\x02\x47\x08\x81\x8b\x02\x46\x06\x81\x89\x02\x45\x04\x85\x08\x2d"
  "\x51\x0c\x02\x11\x75\x6e\x71\x75\x6f\x74\x65\x2d\x73\x70\x6c\x69"
  "\x63\x69\x6e\x67\x06\x61\x70\x70\x6c\x79\x07\x61\x70\x70\x65\x6e"
  "\x64\x06\x63\x6f\x6e\x73\x2a\x0d\x05\x6c\x69\x73\x74\x0e\x05\x63"
  "\x6f\x6e\x73\x05\x63\x6f\x6e\x73\x0f\x0e\x0d\x04\x03\x13\x73\x63"
  "\x6f\x64\x65\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x3f"
  "\x0e\x03\x10\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6e\x73\x74\x61\x6e"
  "\x74\x3f\x0d\x04\x1d\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6d\x62\x69"
  "\x6e\x61\x74\x69\x6f\x6e\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74"
  "\x73\x10\x03\x1a\x73\x63\x6f\x64\x65\x2f\x61\x62\x73\x6f\x6c\x75"
  "\x74\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x3f\x11\x03\x15"
  "\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x76"
  "\x61\x6c\x75\x65\x12\x03\x1e\x73\x63\x6f\x64\x65\x2f\x61\x62\x73"
  "\x6f\x6c\x75\x74\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d"
  "\x6e\x61\x6d\x65\x13\x03\x04\x04\x6d\x61\x70\x04\x0b\x61\x70\x70"
  "\x65\x6e\x64\x2d\x6d\x61\x70\x0a\x6e\x2a\x81\x8b\x02\x6d\x28\x81"
  "\x83\x02\x6c\x26\x81\x8d\x02\x6b\x24\x81\x89\x02\x6a\x22\x81\x89"
  "\x02\x69\x20\x81\x89\x02\x68\x1e\x83\x04\x67\x1c\x81\x87\x02\x66"
  "\x1a\x81\x8d\x02\x65\x18\x81\x89\x02\x64\x16\x81\x8d\x02\x63\x14"
  "\x81\x89\x02\x62\x12\x81\x8b\x02\x61\x10\x81\x8b\x02\x60\x0e\x81"
  "\x89\x02\x5f\x0c\x81\x87\x02\x5e\x0a\x81\x83\x02\x5d\x08\x81\x87"
  "\x02\x5c\x06\x81\x83\x02\x5b\x04\x83\x04\x29\x4e\x14\x02\x0f\x6f"
  "\x70\x74\x69\x6d\x69\x7a\x65\x2d\x67\x72\x6f\x75\x70\x04\x18\x6f"
  "\x70\x74\x69\x6d\x69\x7a\x65\x2d\x67\x72\x6f\x75\x70\x2d\x69\x6e"
  "\x74\x65\x72\x6e\x61\x6c\x03\x0b\x03\x04\x0a\x05\x73\x0c\x81\x87"
  "\x02\x72\x0a\x81\x8b\x02\x71\x08\x81\x87\x02\x70\x06\x81\x87\x02"
  "\x6f\x04\x85\x08\x0b\x18\x15\x02\x03\x12\x03\x10\x73\x63\x6f\x64"
  "\x65\x2f\x76\x61\x72\x69\x61\x62\x6c\x65\x3f\x16\x03\x0d\x03\x11"
  "\x03\x14\x73\x63\x6f\x64\x65\x2f\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x2d\x6e\x61\x6d\x65\x11\x03\x13\x07\x7a\x10\x81\x89\x02\x79\x0e"
  "\x81\x89\x02\x78\x0c\x81\x89\x02\x77\x0a\x81\x89\x02\x76\x08\x85"
  "\x08\x75\x06\x81\x87\x02\x74\x04\x81\x87\x02\x0f\x21\x13\x02\x0c"
  "\x63\x6f\x6e\x73\x2d\x73\x79\x6e\x74\x61\x78\x1f\x43\x4f\x4e\x53"
  "\x2d\x53\x59\x4e\x54\x41\x58\x2d\x45\x58\x50\x41\x4e\x44\x45\x52"
  "\x3a\x20\x62\x61\x64\x20\x74\x61\x69\x6c\x0f\x03\x0d\x04\x10\x03"
  "\x0e\x03\x12\x04\x0a\x04\x09\x05\x0d\x69\x73\x2d\x6f\x70\x65\x72"
  "\x61\x74\x6f\x72\x3f\x17\x04\x13\x69\x6e\x73\x74\x72\x75\x63\x74"
  "\x69\x6f\x6e\x2d\x61\x70\x70\x65\x6e\x64\x09\xa0\x01\x4e\x81\x8f"
  "\x02\x9f\x01\x4c\x81\x8b\x02\x9e\x01\x4a\x81\x91\x02\x9d\x01\x48"
  "\x81\x8d\x02\x9c\x01\x46\x81\x8d\x02\x9b\x01\x44\x81\x8d\x02\x9a"
  "\x01\x42\x81\x8b\x02\x99\x01\x40\x81\x87\x02\x98\x01\x3e\x81\x89"
  "\x02\x97\x01\x3c\x81\x87\x02\x96\x01\x3a\x81\x89\x02\x95\x01\x38"
  "\x81\x87\x02\x94\x01\x36\x81\x87\x02\x93\x01\x34\x81\x8f\x02\x92"
  "\x01\x32\x81\x89\x02\x91\x01\x30\x81\x87\x02\x90\x01\x2e\x81\x87"
  "\x02\x8f\x01\x2c\x81\x85\x02\x8e\x01\x2a\x81\x85\x02\x8d\x01\x28"
  "\x81\x85\x02\x8c\x01\x26\x81\x83\x02\x8b\x01\x24\x81\x83\x02\x8a"
  "\x01\x22\x81\x85\x02\x89\x01\x20\x81\x85\x02\x88\x01\x1e\x81\x83"
  "\x02\x87\x01\x1c\x81\x8b\x02\x86\x01\x1a\x81\x89\x02\x85\x01\x18"
  "\x81\x8b\x02\x84\x01\x16\x81\x8b\x02\x83\x01\x14\x81\x89\x02\x82"
  "\x01\x12\x81\x89\x02\x81\x01\x10\x81\x89\x02\x80\x01\x0e\x81\x89"
  "\x02\x7f\x0c\x81\x85\x02\x7e\x0a\x81\x85\x02\x7d\x08\x81\x83\x02"
  "\x7c\x06\x81\x8b\x02\x7b\x04\x85\x08\x4d\x68\x18\x19\x19\x2e\x49"
  "\x4e\x53\x54\x2d\x3e\x49\x4e\x53\x54\x2d\x53\x45\x51\x2d\x45\x58"
  "\x50\x41\x4e\x44\x45\x52\x3a\x20\x62\x61\x64\x20\x43\x4f\x4e\x53"
  "\x2d\x53\x59\x4e\x54\x41\x58\x20\x74\x61\x69\x6c\x12\x69\x6e\x73"
  "\x74\x72\x75\x63\x74\x69\x6f\x6e\x2d\x74\x61\x69\x6c\x2d\x0f\x12"
  "\x6c\x65\x78\x69\x63\x61\x6c\x2d\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x19\x6c\x65\x78\x69\x63\x61\x6c\x2d\x75\x6e\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x61\x62\x6c\x65\x3f\x15\x63\x6f\x6e\x73\x2d"
  "\x73\x79\x6e\x74\x61\x78\x2d\x65\x78\x70\x61\x6e\x64\x65\x72\x2b"
  "\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x2d\x3e\x69\x6e\x73"
  "\x74\x72\x75\x63\x74\x69\x6f\x6e\x2d\x73\x65\x71\x75\x65\x6e\x63"
  "\x65\x2d\x65\x78\x70\x61\x6e\x64\x65\x72\x18\x04\x18\x6f\x70\x74"
  "\x69\x6d\x69\x7a\x65\x2d\x67\x72\x6f\x75\x70\x2d\x65\x78\x70\x61"
  "\x6e\x64\x65\x72\x17\x13\x08\x1b\x73\x79\x6e\x74\x61\x78\x2d\x65"
  "\x76\x61\x6c\x75\x61\x74\x69\x6f\x6e\x2d\x65\x78\x70\x61\x6e\x64"
  "\x65\x72\x15\x04\x09\x63\x6f\x6d\x70\x69\x6c\x65\x72\x0d\x6c\x61"
  "\x70\x2d\x73\x79\x6e\x74\x61\x78\x65\x72\x20\x6c\x61\x70\x3a\x73"
  "\x79\x6e\x74\x61\x78\x2d\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f"
  "\x6e\x2d\x65\x78\x70\x61\x6e\x64\x65\x72\x11\x6c\x6f\x63\x61\x6c"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x14\x04\x0c\x04\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x02\x03\x16\x73\x63\x6f\x64\x65\x2d\x3e\x73\x63\x6f\x64\x65\x2d"
  "\x65\x78\x70\x61\x6e\x64\x65\x72\x03\x0d\x66\x69\x6e\x64\x2d\x70"
  "\x61\x63\x6b\x61\x67\x65\x03\x14\x70\x61\x63\x6b\x61\x67\x65\x2f"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x0d\x03\x12\x03"
  "\x11\x03\x16\x03\x0e\x03\x0b\x03\x05\x0f\x73\x63\x6f\x64\x65\x2f"
  "\x6d\x61\x6b\x65\x2d\x6c\x65\x74\x04\x0a\x04\x10\x05\x17\x03\x1b"
  "\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x75\x6e\x69\x6e\x74\x65\x72"
  "\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x04\x09\x11\x44\x8a\x01"
  "\x80\x80\x04\x43\x88\x01\x81\x81\x02\x42\x86\x01\x81\x81\x02\x41"
  "\x84\x01\x81\x89\x02\x40\x82\x01\x81\x89\x02\x3f\x80\x01\x81\x87"
  "\x02\x3e\x7e\x81\x89\x02\x3d\x7c\x81\x8b\x02\x3c\x7a\x81\x89\x02"
  "\x3b\x78\x81\x8b\x02\x3a\x76\x81\x8b\x02\x39\x74\x81\x87\x02\x38"
  "\x72\x81\x87\x02\x37\x70\x81\x89\x02\x36\x6e\x81\x89\x02\x35\x6c"
  "\x81\x89\x02\x34\x6a\x81\x89\x02\x33\x68\x81\x87\x02\x32\x66\x81"
  "\x89\x02\x31\x64\x81\x89\x02\x30\x62\x81\x87\x02\x2f\x60\x81\x87"
  "\x02\x2e\x5e\x81\x87\x02\x2d\x5c\x81\x85\x02\x2c\x5a\x81\x8d\x02"
  "\x2b\x58\x81\x8f\x02\x2a\x56\x81\x8d\x02\x29\x54\x81\x8b\x02\x28"
  "\x52\x81\x89\x02\x27\x50\x81\x91\x02\x26\x4e\x81\x8f\x02\x25\x4c"
  "\x81\x85\x02\x24\x4a\x81\x8f\x02\x23\x48\x81\x89\x02\x22\x46\x81"
  "\x93\x02\x21\x44\x81\x93\x02\x20\x42\x81\x8d\x02\x1f\x40\x81\x8b"
  "\x02\x1e\x3e\x81\x89\x02\x1d\x3c\x81\x87\x02\x1c\x3a\x81\x87\x02"
  "\x1b\x38\x81\x8b\x02\x1a\x36\x81\x89\x02\x19\x34\x85\x08\x18\x32"
  "\x81\x87\x02\x17\x30\x81\x85\x02\x16\x2e\x81\x83\x02\x15\x2c\x81"
  "\x8b\x02\x14\x2a\x81\x8b\x02\x13\x28\x81\x89\x02\x12\x26\x81\x8d"
  "\x02\x11\x24\x81\x8d\x02\x10\x22\x81\x89\x02\x0f\x20\x81\x8f\x02"
  "\x0e\x1e\x81\x89\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x8b\x02\x0b"
  "\x18\x81\x89\x02\x0a\x16\x81\x85\x02\x09\x14\x81\x83\x02\x08\x12"
  "\x81\x89\x02\x07\x10\x81\x87\x02\x06\x0e\x81\x85\x02\x05\x0c\x81"
  "\x83\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x85\x02\x02\x06\x81\x83"
  "\x02\x01\x04\x81\x83\x02\x89\x01\xcd\x01";

SCHEME_OBJECT *
syerly_so_data_5a875bcc10c15a39 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_syerly_so_data_5a875bcc10c15a39 [0]))), (sizeof (prog_syerly_so_data_5a875bcc10c15a39)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_92]));
}

DECLARE_COMPILED_DATA_NS ("syerly.so", syerly_so_data_5a875bcc10c15a39)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("syerly.so", "e2c6468f0e5f9a28")
