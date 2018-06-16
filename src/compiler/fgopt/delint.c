/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:15-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define ENVIRONMENT_LABEL_1_3 21
#define DEBUGGING_LABEL_1_2 20
#define OBJECT_1_2 19
#define OBJECT_1_1 18
#define OBJECT_1_0 17
#define EXECUTE_CACHE_1_9 11
#define EXECUTE_CACHE_1_6 13
#define FREE_REFERENCE_1_0 16
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
delint_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_1_4);
      goto delete_integrated_parameters_3;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_2;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_integrated_parameters_8)
DEFLABEL (delete_integrated_parameters_3)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (lambda_9)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_12;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_12;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_11)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_10;
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_12)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_1_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_10 7
#define LABEL_2_11 9
#define LABEL_2_13 11
#define LABEL_2_6 13
#define LABEL_2_14 15
#define LABEL_2_19 17
#define LABEL_2_20 19
#define LABEL_2_7 21
#define LABEL_2_23 23
#define LABEL_2_24 25
#define LABEL_2_25 27
#define LABEL_2_8 29
#define LABEL_2_26 31
#define LABEL_2_29 33
#define LABEL_2_9 35
#define LABEL_2_30 37
#define LABEL_2_32 39
#define LABEL_2_15 41
#define LABEL_2_37 43
#define LABEL_2_16 45
#define TAG_2_17 21
#define LABEL_2_39 47
#define LABEL_2_40 49
#define LABEL_2_18 51
#define LABEL_2_27 53
#define LABEL_2_33 55
#define TAG_2_34 26
#define LABEL_2_35 57
#define LABEL_2_36 59
#define LABEL_2_41 61
#define ENVIRONMENT_LABEL_2_3 89
#define DEBUGGING_LABEL_2_2 88
#define OBJECT_2_9 87
#define OBJECT_2_8 86
#define OBJECT_2_7 85
#define OBJECT_2_6 84
#define OBJECT_2_5 83
#define OBJECT_2_4 82
#define OBJECT_2_3 81
#define OBJECT_2_2 80
#define OBJECT_2_1 79
#define OBJECT_2_0 78
#define EXECUTE_CACHE_2_38 63
#define EXECUTE_CACHE_2_31 65
#define EXECUTE_CACHE_2_28 67
#define EXECUTE_CACHE_2_22 69
#define EXECUTE_CACHE_2_21 71
#define EXECUTE_CACHE_2_12 73
#define FREE_REFERENCE_2_1 76
#define FREE_REFERENCE_2_0 77
#define FREE_REFERENCES_LABEL_2_0 62
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
delint_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd43;
  machine_word Wrd52;
  machine_word Wrd6;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd32;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd28;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd101;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_2_4);
      goto delete_integrated_parametersB_36;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_38;

    case 2:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_20;

    case 3:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_19;

    case 4:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_18;

    case 5:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_2_14);
      goto label_39;

    case 7:
      current_block = (Rpc - LABEL_2_19);
      goto label_40;

    case 8:
      current_block = (Rpc - LABEL_2_20);
      goto label_41;

    case 9:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_2_23);
      goto label_42;

    case 11:
      current_block = (Rpc - LABEL_2_24);
      goto label_43;

    case 12:
      current_block = (Rpc - LABEL_2_25);
      goto continuation_2;

    case 13:
      current_block = (Rpc - LABEL_2_8);
      goto lambda_14;

    case 14:
      current_block = (Rpc - LABEL_2_26);
      goto label_44;

    case 15:
      current_block = (Rpc - LABEL_2_29);
      goto continuation_7;

    case 16:
      current_block = (Rpc - LABEL_2_9);
      goto lambda_12;

    case 17:
      current_block = (Rpc - LABEL_2_30);
      goto label_45;

    case 18:
      current_block = (Rpc - LABEL_2_32);
      goto lambda_9;

    case 19:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_28;

    case 20:
      current_block = (Rpc - LABEL_2_37);
      goto label_46;

    case 21:
      current_block = (Rpc - LABEL_2_16);
      goto lambda_51;

    case 22:
      current_block = (Rpc - LABEL_2_39);
      goto label_48;

    case 23:
      current_block = (Rpc - LABEL_2_40);
      goto label_47;

    case 24:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_31;

    case 25:
      current_block = (Rpc - LABEL_2_27);
      goto continuation_3;

    case 26:
      current_block = (Rpc - LABEL_2_33);
      goto lambda_55;

    case 27:
      current_block = (Rpc - LABEL_2_35);
      goto continuation_8;

    case 28:
      current_block = (Rpc - LABEL_2_36);
      goto continuation_34;

    case 29:
      current_block = (Rpc - LABEL_2_41);
      goto continuation_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delete_integrated_parametersB_50)
DEFLABEL (delete_integrated_parametersB_36)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_61;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_61;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_60)
  (Wrd24.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-1]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.pObj) = (& (Rsp [2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd37.Obj);
  goto lambda_9;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Wrd5.pObj) = (& (Rsp [1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd5.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_59;
  Wrd8 = Wrd12;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_57;
  Wrd14 = Wrd18;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_9;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_24])), (Wrd15.pObj));

DEFLABEL (label_43)
  (Wrd14.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_23])), (Wrd9.pObj));

DEFLABEL (label_42)
  (Wrd8.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_76;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_76;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_75)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_74;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (Rsp [3]);
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [0]);
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd83.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd83.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (Wrd85.Obj) = (Rsp [2]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  ((Wrd86.pObj) [0]) = Rvl;
  (Wrd87.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd88.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd88.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if ((Wrd101.uLng) == 10)
    goto label_63;

DEFLABEL (label_62)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 3);

DEFLABEL (label_63)
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd98.Obj) = ((Wrd97.pObj) [0]);
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd99.Lng))))
    goto label_62;
  ((Wrd97.pObj) [8]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_73)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_16])));
  Rhp += 2;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  Wrd38 = Wrd35;
  (Wrd39.Obj) = (Rsp [2]);
  ((Wrd38.pObj) [2]) = (Wrd39.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  ((Wrd38.pObj) [3]) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_72;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd51.Lng))))
    goto label_72;
  (Wrd45.Obj) = ((Wrd49.pObj) [10]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_71)
  (Wrd68.Obj) = (Rsp [5]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 10))
    goto label_70;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd67.Lng))))
    goto label_70;
  (Wrd61.Obj) = ((Wrd65.pObj) [9]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_69)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_2_2])))
    goto label_64;
  Rvl = (current_block [OBJECT_2_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd9.Obj) = (current_block [OBJECT_2_5]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_36]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_68;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd24.Lng))))
    goto label_68;
  (Wrd18.Obj) = ((Wrd22.pObj) [9]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_67)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_38]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_2_36);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_66;

DEFLABEL (label_65)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 3);

DEFLABEL (label_66)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_65;
  ((Wrd15.pObj) [9]) = Rvl;
  Rvl = (current_block [OBJECT_2_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.Obj) = (current_block [OBJECT_2_5]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_37]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd70.Obj) = (Rsp [5]);
  (Wrd71.Obj) = (current_block [OBJECT_2_5]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd54.Obj) = (Rsp [4]);
  (Wrd55.Obj) = (current_block [OBJECT_2_4]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  Rsp = (& (Rsp [2]));
  goto label_73;

DEFLABEL (label_76)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_2_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_2_13);
  goto label_73;

DEFLABEL (lambda_52)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_2_8);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_80;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_80;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_79)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd35.uLng) == 1)
    goto label_77;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_7]), 2);

DEFLABEL (label_77)
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd33.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [1]) = (Wrd33.Obj);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_78)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  ((Wrd8.pObj) [0]) = Rvl;
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_44)
  (Wrd5.Obj) = Rvl;
  goto label_79;

DEFLABEL (lambda_53)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_2_9);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_84;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_84;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_83)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd26.uLng) == 1)
    goto label_81;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 1);

DEFLABEL (label_81)
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_82)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_31]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_35);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_84)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_6]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_45)
  (Wrd5.Obj) = Rvl;
  goto label_83;

DEFLABEL (lambda_54)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_2_32);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_33])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd13 = Wrd6;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd15.pObj) [0]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_35]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_29);
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_2_16);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [2]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_88;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd51.Lng))))
    goto label_88;
  (Wrd43.Obj) = (Rsp [1]);
  ((Wrd49.pObj) [9]) = (Wrd43.Obj);

DEFLABEL (label_87)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_86;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd26.Lng))))
    goto label_86;
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd24.pObj) [10]) = (Wrd18.Obj);

DEFLABEL (label_85)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_2_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  ((Wrd8.pObj) [0]) = Rvl;
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [2]);
  (Wrd34.Obj) = (current_block [OBJECT_2_4]);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_40]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 3);

DEFLABEL (label_47)
  goto label_85;

DEFLABEL (label_88)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [2]);
  (Wrd59.Obj) = (current_block [OBJECT_2_5]);
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_39]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 3);

DEFLABEL (label_48)
  goto label_87;

DEFLABEL (lambda_55)
  CLOSURE_HEADER (LABEL_2_33);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_2_2])))
    goto label_89;
  Rvl = (current_block [OBJECT_2_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_89)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_25);
  goto label_78;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_9 5
#define LABEL_3_10 7
#define LABEL_3_6 9
#define TAG_3_7 3
#define LABEL_3_13 11
#define LABEL_3_8 13
#define LABEL_3_5 15
#define LABEL_3_12 17
#define LABEL_3_15 19
#define LABEL_3_16 21
#define LABEL_3_19 23
#define LABEL_3_20 25
#define TAG_3_21 11
#define LABEL_3_17 27
#define TAG_3_18 12
#define ENVIRONMENT_LABEL_3_3 37
#define DEBUGGING_LABEL_3_2 36
#define OBJECT_3_2 35
#define OBJECT_3_1 34
#define OBJECT_3_0 33
#define EXECUTE_CACHE_3_14 29
#define EXECUTE_CACHE_3_11 31
#define FREE_REFERENCES_LABEL_3_0 28
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
delint_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_3_4);
      goto find_integrated_bindings_19;

    case 1:
      current_block = (Rpc - LABEL_3_9);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_3_10);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_3_6);
      goto lambda_29;

    case 4:
      current_block = (Rpc - LABEL_3_13);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_16;

    case 6:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_17;

    case 7:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_3_15);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_3_16);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_3_19);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_3_20);
      goto lambda_32;

    case 12:
      current_block = (Rpc - LABEL_3_17);
      goto lambda_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_integrated_bindings_28)
DEFLABEL (find_integrated_bindings_19)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_3_0])))
    goto label_33;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_6])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_37;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_36)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_35;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_35)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_3_6);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_46)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_40;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd7.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_39)
  (Wrd25.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Rsp [3]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_20])));
  Rhp += 3;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd33 = Wrd28;
  (Wrd34.Obj) = (Rsp [2]);
  ((Wrd33.pObj) [2]) = (Wrd34.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  ((Wrd33.pObj) [3]) = (Wrd32.Obj);
  (Wrd30.Obj) = (Rsp [0]);
  ((Wrd33.pObj) [4]) = (Wrd30.Obj);
  Rvl = (Wrd27.Obj);

DEFLABEL (label_38)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_24)
  (Wrd7.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [3]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_45;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd36.Obj) = ((Wrd40.pObj) [0]);

DEFLABEL (label_44)
  (Wrd54.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Rsp [1]) = (Wrd51.Obj);
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [2]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_43;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd55.Obj) = ((Wrd59.pObj) [0]);

DEFLABEL (label_42)
  (Wrd73.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (Rsp [2]) = (Wrd70.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd76.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_17])));
  Rhp += 3;
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd76.pObj)));
  Wrd81 = Wrd76;
  (Wrd82.Obj) = (Rsp [2]);
  ((Wrd81.pObj) [2]) = (Wrd82.Obj);
  (Wrd80.Obj) = (Rsp [1]);
  ((Wrd81.pObj) [3]) = (Wrd80.Obj);
  (Wrd78.Obj) = (Rsp [0]);
  ((Wrd81.pObj) [4]) = (Wrd78.Obj);
  Rvl = (Wrd75.Obj);
  goto label_38;

DEFLABEL (label_43)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_26)
  (Wrd55.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_25)
  (Wrd36.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (lambda_30)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_3_5);
  (Wrd5.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [3]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_3_20);

DEFLABEL (lambda_11)
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

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_3_17);

DEFLABEL (lambda_7)
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
#define LABEL_4_7 5
#define LABEL_4_6 7
#define LABEL_4_5 9
#define LABEL_4_11 11
#define LABEL_4_12 13
#define LABEL_4_9 15
#define TAG_4_10 6
#define LABEL_4_15 17
#define LABEL_4_16 19
#define LABEL_4_17 21
#define LABEL_4_19 23
#define LABEL_4_20 25
#define TAG_4_21 11
#define LABEL_4_13 27
#define TAG_4_14 12
#define ENVIRONMENT_LABEL_4_3 39
#define DEBUGGING_LABEL_4_2 38
#define OBJECT_4_4 37
#define OBJECT_4_3 36
#define OBJECT_4_2 35
#define OBJECT_4_1 34
#define OBJECT_4_0 33
#define EXECUTE_CACHE_4_18 29
#define EXECUTE_CACHE_4_8 31
#define FREE_REFERENCES_LABEL_4_0 28
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
delint_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd21;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd73;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd102;
  machine_word Wrd103;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd100;
  machine_word Wrd96;
  machine_word Wrd82;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_4_4);
      goto find_integrated_variables_18;

    case 1:
      current_block = (Rpc - LABEL_4_7);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_15;

    case 3:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_16;

    case 4:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_4_9);
      goto lambda_28;

    case 7:
      current_block = (Rpc - LABEL_4_15);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_4_16);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_4_17);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_4_19);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_4_20);
      goto lambda_31;

    case 12:
      current_block = (Rpc - LABEL_4_13);
      goto lambda_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_integrated_variables_27)
DEFLABEL (find_integrated_variables_18)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_4_0])))
    goto label_32;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_9])));
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

DEFLABEL (label_34)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (lambda_29)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_4_5);
  (Wrd5.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_4_9);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_46;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_45)
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_44;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd72.Lng))))
    goto label_44;
  (Wrd21.Obj) = ((Wrd70.pObj) [22]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;

DEFLABEL (label_38)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [2]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_37;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd41.Obj) = ((Wrd45.pObj) [0]);

DEFLABEL (label_36)
  (Wrd59.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (Rsp [2]) = (Wrd56.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd62.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_20])));
  Rhp += 2;
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd62.pObj)));
  Wrd65 = Wrd62;
  (Wrd66.Obj) = (Rsp [1]);
  ((Wrd65.pObj) [2]) = (Wrd66.Obj);
  (Wrd64.Obj) = (Rsp [0]);
  ((Wrd65.pObj) [3]) = (Wrd64.Obj);
  Rvl = (Wrd61.Obj);

DEFLABEL (label_35)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_19]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_23)
  (Wrd41.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_43;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_38;
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [2]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_41;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd82.Obj) = ((Wrd86.pObj) [0]);

DEFLABEL (label_40)
  (Wrd100.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd100.Obj);
  (Wrd99.pObj) = (& (Rhp [-2]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd99.pObj)));
  (Rsp [1]) = (Wrd97.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd103.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_13])));
  Rhp += 2;
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd103.pObj)));
  Wrd106 = Wrd103;
  (Wrd107.Obj) = (Rsp [1]);
  ((Wrd106.pObj) [2]) = (Wrd107.Obj);
  (Wrd105.Obj) = (Rsp [0]);
  ((Wrd106.pObj) [3]) = (Wrd105.Obj);
  Rvl = (Wrd102.Obj);
  goto label_35;

DEFLABEL (label_41)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_25)
  (Wrd82.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  (Wrd75.Obj) = (current_block [OBJECT_4_3]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 2);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_38;

DEFLABEL (label_46)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_45;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_4_20);

DEFLABEL (lambda_11)
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

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_4_13);

DEFLABEL (lambda_7)
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
delint_so_9e44918a98575286 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 4)
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

static const struct liarc_code_S arr_decl_delint_so_9e44918a98575286 [4] =
  {
    { "delint_so_code_1", 4, delint_so_code_1 },
    { "delint_so_code_2", 30, delint_so_code_2 },
    { "delint_so_code_3", 13, delint_so_code_3 },
    { "delint_so_code_4", 13, delint_so_code_4 }
  };

int
decl_delint_so_9e44918a98575286 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_delint_so_9e44918a98575286);
  return (0);
}

DECLARE_COMPILED_CODE ("delint.so", 3, decl_delint_so_9e44918a98575286, delint_so_9e44918a98575286)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_delint_so_data_9e44918a98575286 [1017] =
  "\x5e\x0c\xf7\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\xc2\xb9\x82"
  "\x0d\x24\x28\x0d\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbb\x1d\xb0\x82\x88\x1d\xc1\xbc\xc2\x85\x02\x02\xc3"
  "\x08\xb1\x02\x0d\x0d\x24\x28\x0d\x28\x0d\xbd\x28\x0d\xbe\x28\x0d"
  "\x28\x0d\xbf\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xc1\x1c\xb4\x08\x28\xb5"
  "\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\xb1\x02\x1b\xb4\x08\x28\xb7\x28\xb6\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x9b\xbe\x88"
  "\xb6\x1b\x2a\x1b\x2a\x1b\x2a\xb3\x2a\x9b\xb7\xb5\xb2\x0d\x9b\x28"
  "\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5a\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x2f\x66\x67\x6f\x70\x74\x2f\x64\x65\x6c\x69\x6e"
  "\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x0b\x76\x65\x63"
  "\x74\x6f\x72\x2d\x72\x65\x66\x11\x62\x6c\x6f\x63\x6b\x2d\x74\x79"
  "\x70\x65\x2f\x73\x74\x61\x63\x6b\x02\x04\x09\x66\x6f\x72\x2d\x65"
  "\x61\x63\x68\x03\x1e\x64\x65\x6c\x65\x74\x65\x2d\x69\x6e\x74\x65"
  "\x67\x72\x61\x74\x65\x64\x2d\x70\x61\x72\x61\x6d\x65\x74\x65\x72"
  "\x73\x21\x03\x07\x0a\x81\x85\x02\x06\x08\x81\x83\x02\x05\x06\x83"
  "\x04\x04\x04\x83\x04\x09\x16\x02\x02\x04\x63\x64\x72\x09\x73\x65"
  "\x74\x2d\x63\x64\x72\x21\x09\x0a\x0c\x76\x65\x63\x74\x6f\x72\x2d"
  "\x73\x65\x74\x21\x08\x18\x73\x65\x74\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x21\x13\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x6f\x70\x74\x69\x6f\x6e\x61\x6c"
  "\x03\x04\x0e\x65\x71\x2d\x73\x65\x74\x2d\x61\x64\x6a\x6f\x69\x6e"
  "\x04\x19\x66\x69\x6e\x64\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x65"
  "\x64\x2d\x62\x69\x6e\x64\x69\x6e\x67\x73\x03\x11\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x2d\x75\x6e\x75\x73\x65\x64\x3f\x04\x0d\x65\x71"
  "\x2d\x73\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x03\x1a\x66\x69\x6e\x64"
  "\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x73\x04\x12\x65\x71\x2d\x73\x65\x74\x2d\x64\x69"
  "\x66\x66\x65\x72\x65\x6e\x63\x65\x07\x25\x3e\x81\x89\x02\x24\x3c"
  "\x81\x87\x02\x23\x3a\x81\x89\x02\x22\x38\x81\x87\x02\x21\x36\x81"
  "\x87\x02\x20\x34\x81\x8b\x02\x1f\x32\x81\x89\x02\x1e\x30\x81\x89"
  "\x02\x1d\x2e\x81\x89\x02\x1c\x2c\x81\x8b\x02\x1b\x2a\x81\x87\x02"
  "\x1a\x28\x81\x87\x02\x19\x26\x81\x83\x02\x18\x24\x83\x04\x17\x22"
  "\x81\x8b\x02\x16\x20\x81\x85\x02\x15\x1e\x84\x06\x14\x1c\x81\x87"
  "\x02\x13\x1a\x81\x85\x02\x12\x18\x81\x83\x02\x11\x16\x81\x81\x02"
  "\x10\x14\x81\x8f\x02\x0f\x12\x81\x8d\x02\x0e\x10\x81\x89\x02\x0d"
  "\x0e\x81\x87\x02\x0c\x0c\x81\x87\x02\x0b\x0a\x81\x83\x02\x0a\x08"
  "\x81\x83\x02\x09\x06\x81\x83\x02\x08\x04\x83\x04\x3d\x5a\x09\x02"
  "\x04\x63\x61\x72\x0a\x04\x03\x03\x32\x1c\x81\x85\x02\x31\x1a\x81"
  "\x85\x02\x30\x18\x81\x89\x02\x2f\x16\x81\x89\x02\x2e\x14\x81\x89"
  "\x02\x2d\x12\x81\x89\x02\x2c\x10\x83\x04\x2b\x0e\x81\x87\x02\x2a"
  "\x0c\x81\x8b\x02\x29\x0a\x81\x89\x02\x28\x08\x81\x8b\x02\x27\x06"
  "\x81\x89\x02\x26\x04\x84\x06\x1b\x26\x0b\x02\x16\x0a\x03\x03\x03"
  "\x3f\x1c\x81\x85\x02\x3e\x1a\x81\x85\x02\x3d\x18\x81\x87\x02\x3c"
  "\x16\x81\x89\x02\x3b\x14\x81\x87\x02\x3a\x12\x81\x87\x02\x39\x10"
  "\x81\x87\x02\x38\x0e\x81\x87\x02\x37\x0c\x81\x87\x02\x36\x0a\x83"
  "\x04\x35\x08\x81\x83\x02\x34\x06\x81\x85\x02\x33\x04\x83\x04\x1b"
  "\x28\x0a\x0a\x04\x0b\x04\x09\x04\x04\x1d\x64\x65\x6c\x65\x74\x65"
  "\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x2d\x70\x61\x72\x61"
  "\x6d\x65\x74\x65\x72\x73\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d"
  "\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81"
  "\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
delint_so_data_9e44918a98575286 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_delint_so_data_9e44918a98575286 [0]))), (sizeof (prog_delint_so_data_9e44918a98575286)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("delint.so", delint_so_data_9e44918a98575286)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("delint.so", "de2c0c55f16cfed0")
