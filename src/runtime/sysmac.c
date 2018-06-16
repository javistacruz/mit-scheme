/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:56-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_5 7
#define LABEL_1_9 9
#define LABEL_1_7 11
#define LABEL_1_10 13
#define LABEL_1_11 15
#define LABEL_1_12 17
#define LABEL_1_13 19
#define LABEL_1_14 21
#define LABEL_1_15 23
#define LABEL_1_16 25
#define LABEL_1_18 27
#define LABEL_1_17 29
#define LABEL_1_19 31
#define LABEL_1_21 33
#define LABEL_1_22 35
#define LABEL_1_24 37
#define LABEL_1_25 39
#define LABEL_1_26 41
#define LABEL_1_28 43
#define LABEL_1_29 45
#define ENVIRONMENT_LABEL_1_3 77
#define DEBUGGING_LABEL_1_2 76
#define OBJECT_1_12 75
#define OBJECT_1_11 74
#define OBJECT_1_10 73
#define OBJECT_1_9 72
#define OBJECT_1_8 71
#define OBJECT_1_7 70
#define OBJECT_1_6 69
#define OBJECT_1_5 68
#define OBJECT_1_4 67
#define OBJECT_1_3 66
#define OBJECT_1_2 65
#define OBJECT_1_1 64
#define OBJECT_1_0 63
#define EXECUTE_CACHE_1_32 47
#define EXECUTE_CACHE_1_31 49
#define EXECUTE_CACHE_1_30 51
#define EXECUTE_CACHE_1_27 53
#define EXECUTE_CACHE_1_23 55
#define EXECUTE_CACHE_1_20 57
#define EXECUTE_CACHE_1_8 59
#define FREE_REFERENCE_1_0 62
#define FREE_REFERENCES_LABEL_1_0 46
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sysmac_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd74;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd18;
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
      goto lambda_33;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_35;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_31;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_22;

    case 4:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_29;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_36;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto label_37;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto label_41;

    case 8:
      current_block = (Rpc - LABEL_1_13);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_1_14);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_1_15);
      goto label_40;

    case 11:
      current_block = (Rpc - LABEL_1_16);
      goto lambda_18;

    case 12:
      current_block = (Rpc - LABEL_1_18);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_0;

    case 14:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_1;

    case 15:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_4;

    case 16:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_3;

    case 17:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_10;

    case 18:
      current_block = (Rpc - LABEL_1_25);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_8;

    case 20:
      current_block = (Rpc - LABEL_1_28);
      goto continuation_2;

    case 21:
      current_block = (Rpc - LABEL_1_29);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_44)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_49;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_48)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd10.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (lambda_45)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_1_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_51;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Rsp [1]) = (Wrd8.Obj);

DEFLABEL (label_50)
  goto lambda_18;

DEFLABEL (label_51)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_69;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_68)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_67;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_66)
  (Wrd76.Obj) = (current_block [OBJECT_1_3]);
  (Wrd79.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd79.Lng))))
    goto label_65;
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd76.Obj));
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd33.Obj) == (Wrd35.Obj))
    goto label_64;

DEFLABEL (label_63)
  (Wrd36.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd46.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd46.Lng)))
    goto label_52;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_52)
  (Wrd40.uLng) = (OBJECT_DATUM (Wrd36.Obj));
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd40.Obj) == (Wrd42.Obj))
    goto label_54;
  (Wrd38.Obj) = (current_block [OBJECT_1_7]);
  goto label_53;

DEFLABEL (label_54)
  (Wrd38.Obj) = (current_block [OBJECT_1_6]);

DEFLABEL (label_53)
DEFLABEL (label_62)
  Rsp = (& (Rsp [3]));
  if ((Wrd38.Obj) == ((SCHEME_OBJECT) 0))
    goto label_60;

DEFLABEL (label_59)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_58;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_57)
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_56;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd66.Obj) = ((Wrd68.pObj) [1]);

DEFLABEL (label_55)
  (Rsp [1]) = (Wrd66.Obj);
  goto label_50;

DEFLABEL (label_56)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_40)
  (Wrd66.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_61;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);
  goto label_50;

DEFLABEL (label_61)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_64)
  Rsp = (& (Rsp [2]));
  goto label_59;

DEFLABEL (label_65)
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_64;

DEFLABEL (label_67)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_36)
  (Wrd16.Obj) = Rvl;
  goto label_68;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_1_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  goto label_59;

DEFLABEL (lambda_46)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_1_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_72;
  Wrd9 = Wrd13;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_9]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_28);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_31]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_21);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_70;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_1_10]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_1_11]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_30]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_25);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_24);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (current_block [OBJECT_1_10]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_18])), (Wrd10.pObj));

DEFLABEL (label_42)
  (Wrd9.Obj) = Rvl;
  goto label_71;

DEFLABEL (lambda_47)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_1_29);
  (Wrd5.Obj) = (current_block [OBJECT_1_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_32]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define ENVIRONMENT_LABEL_2_3 13
#define DEBUGGING_LABEL_2_2 12
#define OBJECT_2_1 11
#define OBJECT_2_0 10
#define FREE_REFERENCE_2_0 9
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sysmac_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
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
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_8;
  Wrd15 = Wrd19;

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_6])), (Wrd16.pObj));

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define ENVIRONMENT_LABEL_3_3 13
#define DEBUGGING_LABEL_3_2 12
#define OBJECT_3_1 11
#define OBJECT_3_0 10
#define FREE_REFERENCE_3_0 9
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sysmac_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
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
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_8;
  Wrd15 = Wrd19;

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_6])), (Wrd16.pObj));

DEFLABEL (label_4)
  (Wrd15.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_6 5
#define LABEL_4_7 7
#define LABEL_4_5 9
#define ENVIRONMENT_LABEL_4_3 18
#define DEBUGGING_LABEL_4_2 17
#define OBJECT_4_1 16
#define OBJECT_4_0 15
#define EXECUTE_CACHE_4_8 11
#define FREE_REFERENCE_4_0 14
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sysmac_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_4_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_11;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_10)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_9;
  Wrd17 = Wrd21;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_7])), (Wrd18.pObj));

DEFLABEL (label_5)
  (Wrd17.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_5 7
#define LABEL_5_10 9
#define LABEL_5_11 11
#define LABEL_5_12 13
#define LABEL_5_9 15
#define LABEL_5_14 17
#define LABEL_5_15 19
#define LABEL_5_16 21
#define LABEL_5_18 23
#define LABEL_5_19 25
#define LABEL_5_20 27
#define LABEL_5_21 29
#define ENVIRONMENT_LABEL_5_3 57
#define DEBUGGING_LABEL_5_2 56
#define OBJECT_5_16 55
#define OBJECT_5_15 54
#define OBJECT_5_14 53
#define OBJECT_5_13 52
#define OBJECT_5_12 51
#define OBJECT_5_11 50
#define OBJECT_5_10 49
#define OBJECT_5_9 48
#define OBJECT_5_8 47
#define OBJECT_5_7 46
#define OBJECT_5_6 45
#define OBJECT_5_5 44
#define OBJECT_5_4 43
#define OBJECT_5_3 42
#define OBJECT_5_2 41
#define OBJECT_5_1 40
#define OBJECT_5_0 39
#define EXECUTE_CACHE_5_17 31
#define EXECUTE_CACHE_5_13 33
#define EXECUTE_CACHE_5_8 35
#define EXECUTE_CACHE_5_7 37
#define FREE_REFERENCES_LABEL_5_0 30
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sysmac_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd116;
  machine_word Wrd118;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd103;
  machine_word Wrd105;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd95;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd34;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_46;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_48;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_10);
      goto label_49;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto label_50;

    case 5:
      current_block = (Rpc - LABEL_5_12);
      goto label_51;

    case 6:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_5_14);
      goto label_52;

    case 8:
      current_block = (Rpc - LABEL_5_15);
      goto label_53;

    case 9:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_5_18);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_5_20);
      goto continuation_20;

    case 13:
      current_block = (Rpc - LABEL_5_21);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_55)
DEFLABEL (lambda_46)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_68;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_67)
  (Wrd17.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_56;
  (Wrd34.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd34.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_56)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_66;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_65)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_64;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_63)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_62;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_60;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_59)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_58;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_57)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_5_20);
  (Wrd8.Obj) = (current_block [OBJECT_5_6]);
  (Wrd9.Obj) = (current_block [OBJECT_5_7]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_5_8]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_21);
  (Wrd8.Obj) = (current_block [OBJECT_5_8]);
  (Wrd9.Obj) = (current_block [OBJECT_5_7]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_5_9]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd22.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_5_10]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_5_11]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_5_6]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_5_12]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd54.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (Wrd61.Obj) = (current_block [OBJECT_5_13]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd69.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd69.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd67.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (Wrd78.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (Wrd82.Obj) = (current_block [OBJECT_5_14]);
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (Wrd87.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd79.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd90.pObj) = (& (Rhp [-2]));
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd90.pObj)));
  (Wrd95.Obj) = (current_block [OBJECT_5_15]);
  (* (Rhp++)) = (Wrd95.Obj);
  (* (Rhp++)) = (Wrd88.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  (* (Rhp++)) = (Wrd92.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd102.pObj) = (& (Rhp [-2]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd102.pObj)));
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd100.Obj);
  (Wrd105.pObj) = (& (Rhp [-2]));
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd105.pObj)));
  (* (Rhp++)) = (Wrd103.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd109.pObj) = (& (Rhp [-2]));
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd109.pObj)));
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd107.Obj);
  (Wrd113.pObj) = (& (Rhp [-2]));
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd113.pObj)));
  (Wrd118.Obj) = (current_block [OBJECT_5_16]);
  (* (Rhp++)) = (Wrd118.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_52)
  (Wrd5.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_50)
  (Wrd20.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_49)
  (Wrd11.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_67;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_7 7
#define LABEL_6_9 9
#define LABEL_6_10 11
#define LABEL_6_11 13
#define LABEL_6_12 15
#define LABEL_6_13 17
#define LABEL_6_14 19
#define ENVIRONMENT_LABEL_6_3 31
#define DEBUGGING_LABEL_6_2 30
#define OBJECT_6_6 29
#define OBJECT_6_5 28
#define OBJECT_6_4 27
#define OBJECT_6_3 26
#define OBJECT_6_2 25
#define OBJECT_6_1 24
#define OBJECT_6_0 23
#define EXECUTE_CACHE_6_8 21
#define FREE_REFERENCES_LABEL_6_0 20
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
sysmac_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd12;
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
      goto lambda_21;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_25;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_20;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_24)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (Wrd9.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_6_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_6_5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_13);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_6_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_6_6]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_14);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_12 17
#define LABEL_13 19
#define LABEL_14 21
#define LABEL_15 23
#define LABEL_16 25
#define LABEL_17 27
#define LABEL_18 29
#define LABEL_19 31
#define LABEL_20 33
#define LABEL_21 35
#define LABEL_23 37
#define LABEL_24 39
#define LABEL_25 41
#define ENVIRONMENT_LABEL_3 66
#define DEBUGGING_LABEL_2 65
#define PURIFICATION_ROOT 64
#define OBJECT_16 63
#define OBJECT_15 62
#define OBJECT_14 61
#define OBJECT_13 60
#define OBJECT_12 59
#define OBJECT_11 58
#define OBJECT_10 57
#define OBJECT_9 56
#define OBJECT_8 55
#define OBJECT_7 54
#define OBJECT_6 53
#define OBJECT_5 52
#define OBJECT_4 51
#define OBJECT_3 50
#define OBJECT_2 49
#define OBJECT_1 48
#define OBJECT_0 47
#define GLOBAL_EXECUTE_CACHE_22 43
#define GLOBAL_EXECUTE_CACHE_7 45
#define FREE_REFERENCES_LABEL_0 42
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
sysmac_so_34b3e9ec59a669e1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd11;
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
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_18;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto continuation_22;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_20;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto label_27;

    case 18:
      current_block = (Rpc - LABEL_24);
      goto label_28;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto expression_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_24)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_24])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_28)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_27)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	2,
	1,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 6)
      goto label_26;
    blocks = (current_block [OBJECT_16]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_23])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_26)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_22]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_20);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_sysmac_so_34b3e9ec59a669e1 [6] =
  {
    { "sysmac_so_code_1", 22, sysmac_so_code_1 },
    { "sysmac_so_code_2", 3, sysmac_so_code_2 },
    { "sysmac_so_code_3", 3, sysmac_so_code_3 },
    { "sysmac_so_code_4", 4, sysmac_so_code_4 },
    { "sysmac_so_code_5", 14, sysmac_so_code_5 },
    { "sysmac_so_code_6", 9, sysmac_so_code_6 }
  };

int
decl_sysmac_so_34b3e9ec59a669e1 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_sysmac_so_34b3e9ec59a669e1);
  return (0);
}

DECLARE_COMPILED_CODE ("sysmac.so", 20, decl_sysmac_so_34b3e9ec59a669e1, sysmac_so_34b3e9ec59a669e1)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_sysmac_so_data_34b3e9ec59a669e1 [1525] =
  "\x51\x0d\xd7\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x81\x0d\xc2"
  "\xb9\x08\x06\x07\x85\xc2\x02\xc1\xba\x0d\xbb\xc1\xbc\x0d\xbd\x24"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xbe\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf"
  "\x1d\xb0\x82\x88\xb1\xb4\x0d\x24\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x83\x88\xb1\xb4\xb5\x24\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbd\x1d\xb0\x84\x88\xb1\xb4\x0d\x24\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x85\x88\xb3"
  "\x0d\x0d\x1c\x0d\x0d\x1c\x08\x89\x06\x1b\x08\x8b\x0d\x1c\x1d\x0d"
  "\x0d\x1b\x08\x89\x08\x89\x1b\x0d\x0d\x08\x1b\x0d\x0d\x0d\xb2\xb6"
  "\x0d\x08\x89\xb4\x28\x0d\x28\x0d\x28\x0d\x28\xb6\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86"
  "\x88\xb3\x1b\x0d\x0d\x0d\x08\x0d\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x9d\x1c\x88\x1b\x0d\x1b\x2a\x0d\x0d\x1b\x2a\x0d\xb1\x2a\x0d"
  "\xb5\x2a\xc2\x02\x02\xc3\x0d\x1b\x2a\xb7\x2a\x28\x0d\x28\x0d\x26"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74"
  "\x69\x6d\x65\x2f\x2e\x2f\x73\x79\x73\x6d\x61\x63\x2e\x69\x6e\x66"
  "\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x72\x6f\x6f\x74\x5d\x02\x02\x61\x12\x64\x65\x66\x69\x6e\x65\x2d"
  "\x69\x6e\x74\x65\x67\x72\x61\x62\x6c\x65\x06\x61\x70\x70\x6c\x79"
  "\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1e\x04\x63"
  "\x61\x72\x06\x62\x65\x67\x69\x6e\x04\x63\x64\x72\x19\x6d\x61\x6b"
  "\x65\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x02\x04\x04\x6d\x61\x70\x03\x10\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x03\x14\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x2d\x6d\x61"
  "\x78\x03\x14\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69"
  "\x74\x79\x2d\x6d\x69\x6e\x04\x05\x69\x6f\x74\x61\x04\x05\x65\x71"
  "\x76\x3f\x04\x07\x73\x79\x6d\x62\x6f\x6c\x08\x2a\x2e\x83\x04\x29"
  "\x2c\x81\x8d\x02\x28\x2a\x81\x8f\x02\x27\x28\x81\x8b\x02\x26\x26"
  "\x81\x89\x02\x25\x24\x81\x8b\x02\x24\x22\x81\x89\x02\x23\x20\x81"
  "\x87\x02\x22\x1e\x81\x85\x02\x21\x1c\x81\x89\x02\x20\x1a\x81\x85"
  "\x02\x1f\x18\x81\x85\x02\x1e\x16\x81\x83\x02\x1d\x14\x81\x83\x02"
  "\x1c\x12\x81\x83\x02\x1b\x10\x81\x85\x02\x1a\x0e\x81\x85\x02\x19"
  "\x0c\x83\x04\x18\x0a\x81\x83\x02\x17\x08\x81\x85\x02\x16\x06\x81"
  "\x87\x02\x15\x04\x84\x06\x2d\x4e\x02\x0f\x6d\x69\x63\x72\x6f\x63"
  "\x6f\x64\x65\x2d\x74\x79\x70\x65\x02\x2d\x08\x81\x85\x02\x2c\x06"
  "\x81\x85\x02\x2b\x04\x84\x06\x07\x0e\x09\x02\x02\x30\x08\x81\x85"
  "\x02\x2f\x06\x81\x85\x02\x2e\x04\x84\x06\x07\x0e\x02\x11\x6d\x69"
  "\x63\x72\x6f\x63\x6f\x64\x65\x2d\x72\x65\x74\x75\x72\x6e\x02\x03"
  "\x14\x6d\x61\x6b\x65\x2d\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64"
  "\x72\x65\x73\x73\x02\x34\x0a\x81\x85\x02\x33\x08\x81\x89\x02\x32"
  "\x06\x81\x87\x02\x31\x04\x84\x06\x09\x13\x02\x1a\x65\x72\x72\x6f"
  "\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x03\x69\x66\x0a\x10\x64\x65\x66\x61\x75\x6c"
  "\x74\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x07\x63\x61\x6c\x6c\x65\x72"
  "\x0b\x0b\x07\x64\x65\x66\x69\x6e\x65\x0c\x04\x08\x64\x65\x63\x6c"
  "\x61\x72\x65\x0a\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x0b\x0a\x04"
  "\x6e\x6f\x74\x07\x6f\x62\x6a\x65\x63\x74\x0b\x02\x3f\x0b\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x0b\x65\x72\x72\x6f\x72\x3a\x6e"
  "\x6f\x74\x2d\x0b\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x04\x0e"
  "\x73\x79\x6e\x74\x61\x78\x2d\x6d\x61\x74\x63\x68\x3f\x03\x12\x69"
  "\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x2d\x73\x79\x6e\x74\x61\x78"
  "\x04\x0d\x63\x6c\x6f\x73\x65\x2d\x73\x79\x6e\x74\x61\x78\x04\x05"
  "\x42\x1e\x81\x91\x02\x41\x1c\x81\x8f\x02\x40\x1a\x81\x8d\x02\x3f"
  "\x18\x81\x8b\x02\x3e\x16\x81\x89\x02\x3d\x14\x81\x87\x02\x3c\x12"
  "\x81\x87\x02\x3b\x10\x81\x85\x02\x3a\x0e\x81\x89\x02\x39\x0c\x81"
  "\x89\x02\x38\x0a\x81\x89\x02\x37\x08\x81\x85\x02\x36\x06\x81\x87"
  "\x02\x35\x04\x84\x06\x1d\x3a\x0b\x02\x0c\x0f\x61\x64\x64\x2d\x62"
  "\x6f\x6f\x74\x2d\x69\x6e\x69\x74\x21\x07\x6c\x61\x6d\x62\x64\x61"
  "\x05\x73\x65\x74\x21\x0b\x75\x6e\x73\x70\x65\x63\x69\x66\x69\x63"
  "\x04\x12\x70\x61\x72\x73\x65\x2d\x64\x65\x66\x69\x6e\x65\x2d\x66"
  "\x6f\x72\x6d\x02\x4b\x14\x81\x89\x02\x4a\x12\x81\x89\x02\x49\x10"
  "\x81\x89\x02\x48\x0e\x81\x89\x02\x47\x0c\x81\x89\x02\x46\x0a\x81"
  "\x87\x02\x45\x08\x81\x87\x02\x44\x06\x81\x87\x02\x43\x04\x85\x08"
  "\x13\x20\x0c\x0a\x0a\x11\x64\x65\x66\x69\x6e\x65\x2d\x67\x75\x61"
  "\x72\x61\x6e\x74\x65\x65\x0c\x04\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x64\x65\x66\x65\x72\x72\x65\x64\x15\x75\x63\x6f\x64\x65\x2d\x72"
  "\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x0b\x04\x10"
  "\x75\x63\x6f\x64\x65\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x04"
  "\x0b\x75\x63\x6f\x64\x65\x2d\x74\x79\x70\x65\x04\x1a\x70\x72\x69"
  "\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65"
  "\x74\x2d\x74\x79\x70\x65\x33\x10\x11\x6c\x6f\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x12\x64\x65\x66\x69\x6e\x65"
  "\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x73\x09\x04\x04\x04\x1f"
  "\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f"
  "\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x04\x1f"
  "\x65\x72\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f"
  "\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x03\x14"
  "\x2a\x80\x80\x04\x13\x28\x81\x81\x02\x12\x26\x81\x81\x02\x11\x24"
  "\x81\x89\x02\x10\x22\x81\x87\x02\x0f\x20\x81\x87\x02\x0e\x1e\x81"
  "\x85\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x87\x02\x0b\x18\x81\x85"
  "\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x87\x02\x08\x12\x81\x85\x02"
  "\x07\x10\x81\x83\x02\x06\x0e\x81\x87\x02\x05\x0c\x81\x85\x02\x04"
  "\x0a\x81\x83\x02\x03\x08\x81\x87\x02\x02\x06\x81\x85\x02\x01\x04"
  "\x81\x83\x02\x29\x43";

SCHEME_OBJECT *
sysmac_so_data_34b3e9ec59a669e1 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_sysmac_so_data_34b3e9ec59a669e1 [0]))), (sizeof (prog_sysmac_so_data_34b3e9ec59a669e1)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_25]));
}

DECLARE_COMPILED_DATA_NS ("sysmac.so", sysmac_so_data_34b3e9ec59a669e1)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("sysmac.so", "d401ffbf5d29195c")
