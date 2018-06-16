/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:16-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_7 5
#define TAG_1_8 1
#define LABEL_1_11 7
#define LABEL_1_12 9
#define LABEL_1_5 11
#define TAG_1_6 4
#define LABEL_1_14 13
#define LABEL_1_15 15
#define LABEL_1_16 17
#define LABEL_1_10 19
#define LABEL_1_17 21
#define LABEL_1_21 23
#define LABEL_1_22 25
#define LABEL_1_18 27
#define TAG_1_19 12
#define LABEL_1_26 29
#define LABEL_1_23 31
#define LABEL_1_25 33
#define LABEL_1_28 35
#define ENVIRONMENT_LABEL_1_3 64
#define DEBUGGING_LABEL_1_2 63
#define OBJECT_1_6 62
#define OBJECT_1_5 61
#define OBJECT_1_4 60
#define OBJECT_1_3 59
#define OBJECT_1_2 58
#define OBJECT_1_1 57
#define OBJECT_1_0 56
#define EXECUTE_CACHE_1_30 37
#define EXECUTE_CACHE_1_29 39
#define EXECUTE_CACHE_1_27 41
#define EXECUTE_CACHE_1_24 43
#define EXECUTE_CACHE_1_20 45
#define EXECUTE_CACHE_1_13 47
#define EXECUTE_CACHE_1_9 49
#define FREE_REFERENCE_1_1 52
#define FREE_REFERENCE_1_0 53
#define FREE_ASSIGNMENT_1_0 55
#define FREE_REFERENCES_LABEL_1_0 36
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
param_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_1_4);
      goto parameter_analysis_21;

    case 1:
      current_block = (Rpc - LABEL_1_7);
      goto lambda_34;

    case 2:
      current_block = (Rpc - LABEL_1_11);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_1_12);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_1_5);
      goto swapB_33;

    case 5:
      current_block = (Rpc - LABEL_1_14);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_1_15);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_1_16);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_1_21);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_1_22);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_1_18);
      goto lambda_35;

    case 13:
      current_block = (Rpc - LABEL_1_26);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_1_25);
      goto continuation_3;

    case 16:
      current_block = (Rpc - LABEL_1_28);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parameter_analysis_32)
DEFLABEL (parameter_analysis_21)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  ((Wrd19.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_1_7);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_45;
  Wrd8 = Wrd12;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_43;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd26.Lng))))
    goto label_43;
  (Wrd18.Obj) = ((Wrd24.pObj) [6]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_36;
  Rvl = (current_block [OBJECT_1_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_18])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_41;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_41;
  (Wrd5.Obj) = ((Wrd15.pObj) [4]);

DEFLABEL (label_40)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_39;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd43.Lng))))
    goto label_39;
  (Wrd30.Obj) = ((Wrd41.pObj) [21]);
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;

DEFLABEL (label_37)
  Rvl = (current_block [OBJECT_1_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_23);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_28);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (label_39)
  (Wrd46.Obj) = (current_block [OBJECT_1_5]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_37;

DEFLABEL (label_41)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_1_4]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_28)
  (Wrd5.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [2]);
  (Wrd34.Obj) = (current_block [OBJECT_1_1]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_11])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_44;

DEFLABEL (swapB_33)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (swapB_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_54;

DEFLABEL (label_53)
  Wrd5 = Wrd9;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_51;

DEFLABEL (label_50)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_49)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_48;

DEFLABEL (label_47)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_46)
  Rvl = (current_block [OBJECT_1_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_48)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_47;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_27)
  goto label_46;

DEFLABEL (label_51)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_50;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_26)
  goto label_49;

DEFLABEL (label_54)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_53;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_14])), (Wrd6.pObj));

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_52;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_1_18);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_56;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd20.Lng))))
    goto label_56;
  (Wrd12.Obj) = ((Wrd18.pObj) [11]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_55)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_25);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_30]));

DEFLABEL (label_56)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_1_6]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_55;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_5 3
#define LABEL_2_6 5
#define LABEL_2_10 7
#define LABEL_2_4 9
#define LABEL_2_9 11
#define LABEL_2_7 13
#define LABEL_2_15 15
#define LABEL_2_17 17
#define LABEL_2_18 19
#define LABEL_2_19 21
#define LABEL_2_21 23
#define LABEL_2_22 25
#define LABEL_2_24 27
#define LABEL_2_25 29
#define LABEL_2_13 31
#define LABEL_2_27 33
#define LABEL_2_29 35
#define LABEL_2_31 37
#define LABEL_2_34 39
#define LABEL_2_36 41
#define LABEL_2_32 43
#define LABEL_2_35 45
#define LABEL_2_40 47
#define LABEL_2_33 49
#define LABEL_2_39 51
#define ENVIRONMENT_LABEL_2_3 96
#define DEBUGGING_LABEL_2_2 95
#define OBJECT_2_7 94
#define OBJECT_2_6 93
#define OBJECT_2_5 92
#define OBJECT_2_4 91
#define OBJECT_2_3 90
#define OBJECT_2_2 89
#define OBJECT_2_1 88
#define OBJECT_2_0 87
#define EXECUTE_CACHE_2_42 53
#define EXECUTE_CACHE_2_41 55
#define EXECUTE_CACHE_2_38 57
#define EXECUTE_CACHE_2_37 59
#define EXECUTE_CACHE_2_30 61
#define EXECUTE_CACHE_2_28 63
#define EXECUTE_CACHE_2_26 65
#define EXECUTE_CACHE_2_23 67
#define EXECUTE_CACHE_2_20 69
#define EXECUTE_CACHE_2_16 71
#define EXECUTE_CACHE_2_14 73
#define EXECUTE_CACHE_2_12 75
#define EXECUTE_CACHE_2_11 77
#define EXECUTE_CACHE_2_8 79
#define FREE_REFERENCE_2_4 82
#define FREE_REFERENCE_2_3 83
#define FREE_REFERENCE_2_2 84
#define FREE_REFERENCE_2_1 85
#define FREE_REFERENCE_2_0 86
#define FREE_REFERENCES_LABEL_2_0 52
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
param_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd74;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd68;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd28;
  machine_word Wrd27;
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
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_10);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_2_4);
      goto walk_node_for_search_23;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_2_15);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_2_17);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_2_18);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_2_19);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_2_22);
      goto label_33;

    case 12:
      current_block = (Rpc - LABEL_2_24);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_2_25);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_2_27);
      goto label_27;

    case 16:
      current_block = (Rpc - LABEL_2_29);
      goto continuation_15;

    case 17:
      current_block = (Rpc - LABEL_2_31);
      goto label_30;

    case 18:
      current_block = (Rpc - LABEL_2_34);
      goto label_28;

    case 19:
      current_block = (Rpc - LABEL_2_36);
      goto label_29;

    case 20:
      current_block = (Rpc - LABEL_2_32);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_2_35);
      goto continuation_18;

    case 22:
      current_block = (Rpc - LABEL_2_40);
      goto label_32;

    case 23:
      current_block = (Rpc - LABEL_2_33);
      goto continuation_17;

    case 24:
      current_block = (Rpc - LABEL_2_39);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_node_for_search_37)
DEFLABEL (walk_node_for_search_23)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_39;

DEFLABEL (label_38)
  Rvl = (current_block [OBJECT_2_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_68;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_70;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_70;
  (Wrd10.Obj) = ((Wrd14.pObj) [6]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_69)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_38;

DEFLABEL (label_68)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_67;
  Wrd18 = Wrd22;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_53;

DEFLABEL (label_52)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_30]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_2_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_33]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_48;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd21.Lng))))
    goto label_48;
  (Wrd15.Obj) = ((Wrd19.pObj) [9]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_47)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_35]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_4]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_46;
  Wrd32 = Wrd36;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_37]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_2_35);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_41)
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_2_32);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_38]));

DEFLABEL (label_42)
  (Wrd10.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_39]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_44;
  Wrd14 = Wrd18;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_39);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_42]));

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_40])), (Wrd15.pObj));

DEFLABEL (label_32)
  (Wrd14.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_36])), (Wrd33.pObj));

DEFLABEL (label_29)
  (Wrd32.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.Obj) = (current_block [OBJECT_2_7]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_34]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd39.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd39.Obj);
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_3]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_51;
  Wrd41 = Wrd45;

DEFLABEL (label_50)
  (Rsp [1]) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_31])), (Wrd42.pObj));

DEFLABEL (label_30)
  (Wrd41.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_65;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd15.Lng))))
    goto label_65;
  (Wrd7.Obj) = ((Wrd13.pObj) [8]);

DEFLABEL (label_64)
  if (! ((Wrd7.Obj) == (current_block [OBJECT_2_6])))
    goto label_52;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_24);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_52;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_63;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd48.Lng))))
    goto label_63;
  (Wrd42.Obj) = ((Wrd46.pObj) [10]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_62)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_17);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd72.Obj) = ((Wrd69.pObj) [0]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd73.uLng) == 50)
    goto label_61;
  Wrd68 = Wrd72;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd83.Obj) = (Rsp [1]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 10))
    goto label_59;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd82.Lng))))
    goto label_59;
  (Wrd74.Obj) = ((Wrd80.pObj) [1]);

DEFLABEL (label_58)
  (Wrd90.Obj) = (* (Rsp++));
  if (! ((Wrd74.Obj) == (Wrd90.Obj)))
    goto label_54;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (label_54)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_57)
  (Wrd58.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd58.Obj);
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_56;
  Wrd60 = Wrd64;

DEFLABEL (label_55)
  (Rsp [1]) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_22])), (Wrd61.pObj));

DEFLABEL (label_33)
  (Wrd60.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_59)
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.Obj) = (current_block [OBJECT_2_3]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_35)
  (Wrd74.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_18])), (Wrd69.pObj));

DEFLABEL (label_34)
  (Wrd68.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.Obj) = (current_block [OBJECT_2_4]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_2_5]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_27)
  (Wrd7.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_10])), (Wrd19.pObj));

DEFLABEL (label_25)
  (Wrd18.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_70)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_2_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_33);
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_52;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_9 7
#define LABEL_3_11 9
#define LABEL_3_13 11
#define LABEL_3_16 13
#define LABEL_3_17 15
#define LABEL_3_18 17
#define LABEL_3_20 19
#define LABEL_3_10 21
#define LABEL_3_22 23
#define LABEL_3_23 25
#define LABEL_3_25 27
#define LABEL_3_26 29
#define LABEL_3_7 31
#define LABEL_3_30 33
#define LABEL_3_29 35
#define LABEL_3_27 37
#define LABEL_3_33 39
#define LABEL_3_19 41
#define LABEL_3_31 43
#define LABEL_3_36 45
#define LABEL_3_32 47
#define LABEL_3_34 49
#define LABEL_3_35 51
#define ENVIRONMENT_LABEL_3_3 88
#define DEBUGGING_LABEL_3_2 87
#define OBJECT_3_10 86
#define OBJECT_3_9 85
#define OBJECT_3_8 84
#define OBJECT_3_7 83
#define OBJECT_3_6 82
#define OBJECT_3_5 81
#define OBJECT_3_4 80
#define OBJECT_3_3 79
#define OBJECT_3_2 78
#define OBJECT_3_1 77
#define OBJECT_3_0 76
#define EXECUTE_CACHE_3_37 53
#define EXECUTE_CACHE_3_28 55
#define EXECUTE_CACHE_3_24 57
#define EXECUTE_CACHE_3_21 59
#define EXECUTE_CACHE_3_15 61
#define EXECUTE_CACHE_3_14 63
#define EXECUTE_CACHE_3_12 65
#define EXECUTE_CACHE_3_8 67
#define EXECUTE_CACHE_3_6 69
#define FREE_REFERENCE_3_1 72
#define FREE_REFERENCE_3_0 73
#define FREE_ASSIGNMENT_3_0 75
#define FREE_REFERENCES_LABEL_3_0 52
#define NUMBER_OF_LINKER_SECTIONS_3_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
param_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd90;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd52;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd69;
  machine_word Wrd68;
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
      goto walk_next_27;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_9);
      goto label_29;

    case 3:
      current_block = (Rpc - LABEL_3_11);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_3_13);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_19;

    case 6:
      current_block = (Rpc - LABEL_3_17);
      goto label_37;

    case 7:
      current_block = (Rpc - LABEL_3_18);
      goto label_38;

    case 8:
      current_block = (Rpc - LABEL_3_20);
      goto label_39;

    case 9:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_3_22);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_3_23);
      goto label_33;

    case 12:
      current_block = (Rpc - LABEL_3_25);
      goto label_34;

    case 13:
      current_block = (Rpc - LABEL_3_26);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 15:
      current_block = (Rpc - LABEL_3_30);
      goto label_36;

    case 16:
      current_block = (Rpc - LABEL_3_29);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_3_27);
      goto continuation_2;

    case 18:
      current_block = (Rpc - LABEL_3_33);
      goto label_40;

    case 19:
      current_block = (Rpc - LABEL_3_19);
      goto continuation_24;

    case 20:
      current_block = (Rpc - LABEL_3_31);
      goto continuation_8;

    case 21:
      current_block = (Rpc - LABEL_3_36);
      goto label_41;

    case 22:
      current_block = (Rpc - LABEL_3_32);
      goto continuation_7;

    case 23:
      current_block = (Rpc - LABEL_3_34);
      goto continuation_5;

    case 24:
      current_block = (Rpc - LABEL_3_35);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_next_43)
DEFLABEL (walk_next_27)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_52;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_49;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_28]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_27);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;
  (Wrd29.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_3_10]);
  (Rsp [0]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (label_44)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_31]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_48;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd21.Lng))))
    goto label_48;
  (Wrd15.Obj) = ((Wrd19.pObj) [8]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_31);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_46;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd19.Lng))))
    goto label_46;
  (Wrd13.Obj) = ((Wrd17.pObj) [7]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_35);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_34);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_37]));

DEFLABEL (label_46)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (current_block [OBJECT_3_9]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_36]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_3_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_29]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_51;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd18.Lng))))
    goto label_51;
  (Wrd12.Obj) = ((Wrd16.pObj) [7]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_29);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_51)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_3_9]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_76;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd15.Lng))))
    goto label_76;
  (Wrd9.Obj) = ((Wrd13.pObj) [8]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_75)
  (Wrd23.Obj) = (Rsp [0]);
  if ((Wrd23.Obj) == (current_block [OBJECT_3_2]))
    goto label_56;
  if ((Wrd23.Obj) == (current_block [OBJECT_3_4]))
    goto label_53;
  (Wrd27.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_3_5]);
  (Rsp [1]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (label_53)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_55;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd38.Lng))))
    goto label_55;
  (Wrd30.Obj) = ((Wrd36.pObj) [10]);

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (label_55)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_3_3]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_30)
  (Wrd30.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd59.Obj) = (Rsp [2]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 10))
    goto label_74;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd58.Lng))))
    goto label_74;
  (Wrd52.Obj) = ((Wrd56.pObj) [10]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_73)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_72;
  Wrd8 = Wrd12;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_70;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd22.Lng))))
    goto label_70;
  (Wrd14.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_69)
  (Wrd30.Obj) = (* (Rsp++));
  if (! ((Wrd14.Obj) == (Wrd30.Obj)))
    goto label_64;
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_3_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_63;
  Wrd62 = Wrd66;

DEFLABEL (label_62)
  (Wrd71.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd71.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd70.pObj) = (& (Rhp [-2]));
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd70.pObj)));
  (Wrd72.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd80.Obj) = ((Wrd72.pObj) [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd81.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  ((Wrd72.pObj) [0]) = (Wrd68.Obj);

DEFLABEL (label_59)
  (Wrd84.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd84.Obj);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd97.Obj) = (Rsp [1]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 10))
    goto label_58;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd96.Lng))))
    goto label_58;
  (Wrd90.Obj) = ((Wrd94.pObj) [11]);
  (* (--Rsp)) = (Wrd90.Obj);

DEFLABEL (label_57)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_3_19);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_58)
  (Wrd99.Obj) = (Rsp [1]);
  (Wrd100.Obj) = (current_block [OBJECT_3_6]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_61)
  if ((Wrd80.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_60;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_18])), (Wrd72.pObj), (Wrd68.Obj));

DEFLABEL (label_38)
  goto label_59;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_17])), (Wrd63.pObj));

DEFLABEL (label_37)
  (Wrd62.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_64)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_68;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd39.Lng))))
    goto label_68;
  (Wrd31.Obj) = ((Wrd37.pObj) [11]);

DEFLABEL (label_67)
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_66;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd47.Obj) = ((Wrd48.pObj) [0]);

DEFLABEL (label_65)
  (Rsp [1]) = (Wrd47.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (label_66)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_8]), 1);

DEFLABEL (label_35)
  (Wrd47.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (current_block [OBJECT_3_6]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_34)
  (Wrd31.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_3_7]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_33)
  (Wrd14.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_22])), (Wrd9.pObj));

DEFLABEL (label_32)
  (Wrd8.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd62.Obj) = (current_block [OBJECT_3_3]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_3_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_75;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_7 5
#define LABEL_4_5 7
#define LABEL_4_8 9
#define ENVIRONMENT_LABEL_4_3 18
#define DEBUGGING_LABEL_4_2 17
#define OBJECT_4_1 16
#define OBJECT_4_0 15
#define EXECUTE_CACHE_4_9 11
#define EXECUTE_CACHE_4_6 13
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
param_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd28;
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
      goto walk_continuation_4;

    case 1:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_continuation_8)
DEFLABEL (walk_continuation_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd21.uLng) == 10))
    goto label_11;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd19.Lng))))
    goto label_11;
  (Wrd13.Obj) = ((Wrd17.pObj) [11]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Wrd28.Obj) = Rvl;

DEFLABEL (label_9)
  (Rsp [2]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_11)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_4_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (label_12)
  (Wrd28.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_9 7
#define LABEL_5_7 9
#define LABEL_5_13 11
#define LABEL_5_12 13
#define LABEL_5_17 15
#define LABEL_5_15 17
#define LABEL_5_20 19
#define LABEL_5_16 21
#define LABEL_5_23 23
#define LABEL_5_19 25
#define LABEL_5_22 27
#define LABEL_5_24 29
#define ENVIRONMENT_LABEL_5_3 55
#define DEBUGGING_LABEL_5_2 54
#define OBJECT_5_0 53
#define EXECUTE_CACHE_5_26 31
#define EXECUTE_CACHE_5_25 33
#define EXECUTE_CACHE_5_21 35
#define EXECUTE_CACHE_5_18 37
#define EXECUTE_CACHE_5_14 39
#define EXECUTE_CACHE_5_11 41
#define EXECUTE_CACHE_5_10 43
#define EXECUTE_CACHE_5_8 45
#define EXECUTE_CACHE_5_6 47
#define FREE_REFERENCE_5_2 50
#define FREE_REFERENCE_5_1 51
#define FREE_REFERENCE_5_0 52
#define FREE_REFERENCES_LABEL_5_0 30
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
param_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_5_4);
      goto walk_node_for_variables_11;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_5_13);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_5_12);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_5_17);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_5_20);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_5_23);
      goto label_16;

    case 11:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_5_22);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_5_24);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_node_for_variables_18)
DEFLABEL (walk_node_for_variables_11)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rvl = (current_block [OBJECT_5_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (label_20)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_29;
  Wrd8 = Wrd12;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_12);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_27;
  Wrd15 = Wrd19;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_25;
  Wrd8 = Wrd12;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_25]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_24);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_26]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_23;
  Wrd10 = Wrd14;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_19);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_20])), (Wrd11.pObj));

DEFLABEL (label_15)
  (Wrd10.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_23])), (Wrd9.pObj));

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_17])), (Wrd16.pObj));

DEFLABEL (label_14)
  (Wrd15.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_13])), (Wrd9.pObj));

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_7 9
#define LABEL_6_8 11
#define LABEL_6_9 13
#define LABEL_6_10 15
#define LABEL_6_13 17
#define LABEL_6_14 19
#define LABEL_6_16 21
#define LABEL_6_17 23
#define LABEL_6_18 25
#define LABEL_6_19 27
#define LABEL_6_20 29
#define LABEL_6_21 31
#define LABEL_6_22 33
#define LABEL_6_23 35
#define LABEL_6_24 37
#define LABEL_6_25 39
#define LABEL_6_28 41
#define LABEL_6_30 43
#define LABEL_6_31 45
#define LABEL_6_33 47
#define LABEL_6_34 49
#define LABEL_6_36 51
#define LABEL_6_37 53
#define LABEL_6_38 55
#define LABEL_6_35 57
#define LABEL_6_29 59
#define LABEL_6_26 61
#define LABEL_6_11 63
#define TAG_6_12 30
#define LABEL_6_39 65
#define TAG_6_40 31
#define LABEL_6_41 67
#define TAG_6_42 32
#define LABEL_6_43 69
#define TAG_6_44 33
#define ENVIRONMENT_LABEL_6_3 102
#define DEBUGGING_LABEL_6_2 101
#define OBJECT_6_12 100
#define OBJECT_6_11 99
#define OBJECT_6_10 98
#define OBJECT_6_9 97
#define OBJECT_6_8 96
#define OBJECT_6_7 95
#define OBJECT_6_6 94
#define OBJECT_6_5 93
#define OBJECT_6_4 92
#define OBJECT_6_3 91
#define OBJECT_6_2 90
#define OBJECT_6_1 89
#define OBJECT_6_0 88
#define EXECUTE_CACHE_6_32 71
#define EXECUTE_CACHE_6_27 73
#define EXECUTE_CACHE_6_15 75
#define FREE_REFERENCE_6_9 78
#define FREE_REFERENCE_6_8 79
#define FREE_REFERENCE_6_7 80
#define FREE_REFERENCE_6_6 81
#define FREE_REFERENCE_6_5 82
#define FREE_REFERENCE_6_4 83
#define FREE_REFERENCE_6_3 84
#define FREE_REFERENCE_6_2 85
#define FREE_REFERENCE_6_1 86
#define FREE_REFERENCE_6_0 87
#define FREE_REFERENCES_LABEL_6_0 70
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
param_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd94;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd96;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd134;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd135;
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
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd142;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd176;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd175;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd160;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd223;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd208;
  machine_word Wrd216;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd207;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd192;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd198;
  machine_word Wrd202;
  machine_word Wrd201;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd240;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd225;
  machine_word Wrd233;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd235;
  machine_word Wrd234;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd261;
  machine_word Wrd285;
  machine_word Wrd279;
  machine_word Wrd280;
  machine_word Wrd281;
  machine_word Wrd278;
  machine_word Wrd275;
  machine_word Wrd274;
  machine_word Wrd263;
  machine_word Wrd271;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd273;
  machine_word Wrd272;
  machine_word Wrd333;
  machine_word Wrd332;
  machine_word Wrd330;
  machine_word Wrd331;
  machine_word Wrd326;
  machine_word Wrd328;
  machine_word Wrd325;
  machine_word Wrd324;
  machine_word Wrd321;
  machine_word Wrd320;
  machine_word Wrd309;
  machine_word Wrd317;
  machine_word Wrd316;
  machine_word Wrd315;
  machine_word Wrd319;
  machine_word Wrd318;
  machine_word Wrd308;
  machine_word Wrd303;
  machine_word Wrd302;
  machine_word Wrd304;
  machine_word Wrd301;
  machine_word Wrd298;
  machine_word Wrd297;
  machine_word Wrd286;
  machine_word Wrd294;
  machine_word Wrd293;
  machine_word Wrd292;
  machine_word Wrd296;
  machine_word Wrd295;
  machine_word Wrd256;
  machine_word Wrd253;
  machine_word Wrd252;
  machine_word Wrd241;
  machine_word Wrd249;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd251;
  machine_word Wrd250;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_6_4);
      goto find_node_values_46;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_48;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto label_49;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto label_67;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto label_70;

    case 5:
      current_block = (Rpc - LABEL_6_9);
      goto label_71;

    case 6:
      current_block = (Rpc - LABEL_6_10);
      goto label_72;

    case 7:
      current_block = (Rpc - LABEL_6_13);
      goto label_68;

    case 8:
      current_block = (Rpc - LABEL_6_14);
      goto label_69;

    case 9:
      current_block = (Rpc - LABEL_6_16);
      goto label_50;

    case 10:
      current_block = (Rpc - LABEL_6_17);
      goto label_66;

    case 11:
      current_block = (Rpc - LABEL_6_18);
      goto label_51;

    case 12:
      current_block = (Rpc - LABEL_6_19);
      goto label_64;

    case 13:
      current_block = (Rpc - LABEL_6_20);
      goto label_65;

    case 14:
      current_block = (Rpc - LABEL_6_21);
      goto label_52;

    case 15:
      current_block = (Rpc - LABEL_6_22);
      goto label_62;

    case 16:
      current_block = (Rpc - LABEL_6_23);
      goto label_63;

    case 17:
      current_block = (Rpc - LABEL_6_24);
      goto label_53;

    case 18:
      current_block = (Rpc - LABEL_6_25);
      goto label_61;

    case 19:
      current_block = (Rpc - LABEL_6_28);
      goto label_54;

    case 20:
      current_block = (Rpc - LABEL_6_30);
      goto label_59;

    case 21:
      current_block = (Rpc - LABEL_6_31);
      goto label_60;

    case 22:
      current_block = (Rpc - LABEL_6_33);
      goto label_55;

    case 23:
      current_block = (Rpc - LABEL_6_34);
      goto label_56;

    case 24:
      current_block = (Rpc - LABEL_6_36);
      goto label_57;

    case 25:
      current_block = (Rpc - LABEL_6_37);
      goto label_58;

    case 26:
      current_block = (Rpc - LABEL_6_38);
      goto lambda_3;

    case 27:
      current_block = (Rpc - LABEL_6_35);
      goto lambda_15;

    case 28:
      current_block = (Rpc - LABEL_6_29);
      goto continuation_18;

    case 29:
      current_block = (Rpc - LABEL_6_26);
      goto continuation_23;

    case 30:
      current_block = (Rpc - LABEL_6_11);
      goto lambda_75;

    case 31:
      current_block = (Rpc - LABEL_6_39);
      goto lambda_77;

    case 32:
      current_block = (Rpc - LABEL_6_41);
      goto lambda_79;

    case 33:
      current_block = (Rpc - LABEL_6_43);
      goto lambda_80;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_node_values_74)
DEFLABEL (find_node_values_46)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_144;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_144;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_143)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_142;
  Wrd22 = Wrd26;

DEFLABEL (label_141)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_126;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_125;
  Wrd30 = Wrd34;

DEFLABEL (label_124)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == (Wrd30.Obj))
    goto label_121;
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_2]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_120;
  Wrd38 = Wrd42;

DEFLABEL (label_119)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == (Wrd38.Obj))
    goto label_114;
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_3]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_113;
  Wrd46 = Wrd50;

DEFLABEL (label_112)
  (Wrd52.Obj) = (Rsp [0]);
  if ((Wrd52.Obj) == (Wrd46.Obj))
    goto label_107;
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_4]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_106;
  Wrd54 = Wrd58;

DEFLABEL (label_105)
  (Wrd60.Obj) = (Rsp [0]);
  if ((Wrd60.Obj) == (Wrd54.Obj))
    goto label_99;
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_5]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_98;
  Wrd62 = Wrd66;

DEFLABEL (label_97)
  (Wrd68.Obj) = (Rsp [0]);
  if ((Wrd68.Obj) == (Wrd62.Obj))
    goto label_92;
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_7]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_91;
  Wrd70 = Wrd74;

DEFLABEL (label_90)
  (Wrd76.Obj) = (Rsp [0]);
  if (! ((Wrd76.Obj) == (Wrd70.Obj)))
    goto label_82;

DEFLABEL (label_81)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_35]))));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_8]));
  (Wrd82.Obj) = ((Wrd79.pObj) [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if ((Wrd83.uLng) == 50)
    goto label_89;
  Wrd78 = Wrd82;

DEFLABEL (label_88)
  (Wrd84.Obj) = (Rsp [0]);
  if ((Wrd84.Obj) == (Wrd78.Obj))
    goto label_81;
  (Wrd87.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_9]));
  (Wrd90.Obj) = ((Wrd87.pObj) [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 50)
    goto label_87;
  Wrd86 = Wrd90;

DEFLABEL (label_86)
  (Wrd92.Obj) = (Rsp [0]);
  if ((Wrd92.Obj) == (Wrd86.Obj))
    goto label_83;
  (Rsp [1]) = (Wrd92.Obj);
  (Wrd94.Obj) = (current_block [OBJECT_6_11]);
  (Rsp [0]) = (Wrd94.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (label_83)
  (Rsp [0]) = ((SCHEME_OBJECT) 0);
  (Wrd105.Obj) = (Rsp [1]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd106.uLng) == 10))
    goto label_85;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [0]);
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd104.Lng))))
    goto label_85;
  (Wrd96.Obj) = ((Wrd102.pObj) [10]);

DEFLABEL (label_84)
  (Rsp [1]) = (Wrd96.Obj);
  goto lambda_3;

DEFLABEL (label_85)
  (Wrd107.Obj) = (Rsp [1]);
  (Wrd108.Obj) = (current_block [OBJECT_6_6]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_37]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_58)
  (Wrd96.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_36])), (Wrd87.pObj));

DEFLABEL (label_57)
  (Wrd86.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_34])), (Wrd79.pObj));

DEFLABEL (label_56)
  (Wrd78.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_33])), (Wrd71.pObj));

DEFLABEL (label_55)
  (Wrd70.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_92)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_29]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd127.Obj) = (Rsp [2]);
  (Wrd128.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if (! ((Wrd128.uLng) == 10))
    goto label_96;
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd127.Obj));
  (Wrd125.Obj) = ((Wrd124.pObj) [0]);
  (Wrd126.Lng) = (FIXNUM_TO_LONG (Wrd125.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd126.Lng))))
    goto label_96;
  (Wrd120.Obj) = ((Wrd124.pObj) [9]);
  (* (--Rsp)) = (Wrd120.Obj);

DEFLABEL (label_95)
  (Wrd135.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_6]));
  (Wrd138.Obj) = ((Wrd135.pObj) [0]);
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if ((Wrd139.uLng) == 50)
    goto label_94;
  Wrd134 = Wrd138;

DEFLABEL (label_93)
  (* (--Rsp)) = (Wrd134.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_32]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_6_29);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_42);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_41])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_31])), (Wrd135.pObj));

DEFLABEL (label_60)
  (Wrd134.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd129.Obj) = (Rsp [2]);
  (Wrd130.Obj) = (current_block [OBJECT_6_10]);
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_30]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_28])), (Wrd63.pObj));

DEFLABEL (label_54)
  (Wrd62.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_99)
  (Wrd149.Obj) = (Rsp [1]);
  (Wrd150.uLng) = (OBJECT_TYPE (Wrd149.Obj));
  if (! ((Wrd150.uLng) == 10))
    goto label_104;
  (Wrd146.pObj) = (OBJECT_ADDRESS (Wrd149.Obj));
  (Wrd147.Obj) = ((Wrd146.pObj) [0]);
  (Wrd148.Lng) = (FIXNUM_TO_LONG (Wrd147.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd148.Lng))))
    goto label_104;
  (Wrd142.Obj) = ((Wrd146.pObj) [9]);
  (* (--Rsp)) = (Wrd142.Obj);

DEFLABEL (label_103)
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_26]))));
  (* (--Rsp)) = (Wrd158.Obj);
  (Wrd159.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd159.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_27]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_6_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  (Wrd8.Obj) = (Rsp [0]);
  goto label_100;

DEFLABEL (label_101)
  (Wrd8.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_100)
DEFLABEL (label_102)
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_44);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_43])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  Rvl = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_104)
  (Wrd151.Obj) = (Rsp [1]);
  (Wrd152.Obj) = (current_block [OBJECT_6_10]);
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_24])), (Wrd55.pObj));

DEFLABEL (label_53)
  (Wrd54.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_107)
  (Wrd169.Obj) = (Rsp [1]);
  (Wrd170.uLng) = (OBJECT_TYPE (Wrd169.Obj));
  if (! ((Wrd170.uLng) == 10))
    goto label_111;
  (Wrd166.pObj) = (OBJECT_ADDRESS (Wrd169.Obj));
  (Wrd167.Obj) = ((Wrd166.pObj) [0]);
  (Wrd168.Lng) = (FIXNUM_TO_LONG (Wrd167.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd168.Lng))))
    goto label_111;
  (Wrd160.Obj) = ((Wrd166.pObj) [9]);

DEFLABEL (label_110)
  (Rsp [0]) = (Wrd160.Obj);
  (Wrd185.Obj) = (Rsp [1]);
  (Wrd186.uLng) = (OBJECT_TYPE (Wrd185.Obj));
  if (! ((Wrd186.uLng) == 10))
    goto label_109;
  (Wrd182.pObj) = (OBJECT_ADDRESS (Wrd185.Obj));
  (Wrd183.Obj) = ((Wrd182.pObj) [0]);
  (Wrd184.Lng) = (FIXNUM_TO_LONG (Wrd183.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd184.Lng))))
    goto label_109;
  (Wrd176.Obj) = ((Wrd182.pObj) [10]);

DEFLABEL (label_108)
  (Rsp [1]) = (Wrd176.Obj);
  goto lambda_3;

DEFLABEL (label_109)
  (Wrd187.Obj) = (Rsp [1]);
  (Wrd188.Obj) = (current_block [OBJECT_6_6]);
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd188.Obj);
  (* (--Rsp)) = (Wrd187.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_63)
  (Wrd176.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd171.Obj) = (Rsp [1]);
  (Wrd172.Obj) = (current_block [OBJECT_6_10]);
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd172.Obj);
  (* (--Rsp)) = (Wrd171.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_62)
  (Wrd160.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_21])), (Wrd47.pObj));

DEFLABEL (label_52)
  (Wrd46.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_114)
  (Wrd201.Obj) = (Rsp [1]);
  (Wrd202.uLng) = (OBJECT_TYPE (Wrd201.Obj));
  if (! ((Wrd202.uLng) == 10))
    goto label_118;
  (Wrd198.pObj) = (OBJECT_ADDRESS (Wrd201.Obj));
  (Wrd199.Obj) = ((Wrd198.pObj) [0]);
  (Wrd200.Lng) = (FIXNUM_TO_LONG (Wrd199.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd200.Lng))))
    goto label_118;
  (Wrd192.Obj) = ((Wrd198.pObj) [9]);

DEFLABEL (label_117)
  (Rsp [0]) = (Wrd192.Obj);
  (Wrd217.Obj) = (Rsp [1]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if (! ((Wrd218.uLng) == 10))
    goto label_116;
  (Wrd214.pObj) = (OBJECT_ADDRESS (Wrd217.Obj));
  (Wrd215.Obj) = ((Wrd214.pObj) [0]);
  (Wrd216.Lng) = (FIXNUM_TO_LONG (Wrd215.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd216.Lng))))
    goto label_116;
  (Wrd208.Obj) = ((Wrd214.pObj) [10]);

DEFLABEL (label_115)
  (Rsp [1]) = (Wrd208.Obj);
  goto lambda_3;

DEFLABEL (label_116)
  (Wrd219.Obj) = (Rsp [1]);
  (Wrd220.Obj) = (current_block [OBJECT_6_6]);
  (Wrd223.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd223.Obj);
  (* (--Rsp)) = (Wrd220.Obj);
  (* (--Rsp)) = (Wrd219.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_65)
  (Wrd208.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd203.Obj) = (Rsp [1]);
  (Wrd204.Obj) = (current_block [OBJECT_6_10]);
  (Wrd207.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd207.Obj);
  (* (--Rsp)) = (Wrd204.Obj);
  (* (--Rsp)) = (Wrd203.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_64)
  (Wrd192.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_18])), (Wrd39.pObj));

DEFLABEL (label_51)
  (Wrd38.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_121)
  (Rsp [0]) = ((SCHEME_OBJECT) 0);
  (Wrd234.Obj) = (Rsp [1]);
  (Wrd235.uLng) = (OBJECT_TYPE (Wrd234.Obj));
  if (! ((Wrd235.uLng) == 10))
    goto label_123;
  (Wrd231.pObj) = (OBJECT_ADDRESS (Wrd234.Obj));
  (Wrd232.Obj) = ((Wrd231.pObj) [0]);
  (Wrd233.Lng) = (FIXNUM_TO_LONG (Wrd232.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd233.Lng))))
    goto label_123;
  (Wrd225.Obj) = ((Wrd231.pObj) [10]);

DEFLABEL (label_122)
  (Rsp [1]) = (Wrd225.Obj);
  goto lambda_3;

DEFLABEL (label_123)
  (Wrd236.Obj) = (Rsp [1]);
  (Wrd237.Obj) = (current_block [OBJECT_6_6]);
  (Wrd240.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd240.Obj);
  (* (--Rsp)) = (Wrd237.Obj);
  (* (--Rsp)) = (Wrd236.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_66)
  (Wrd225.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_16])), (Wrd31.pObj));

DEFLABEL (label_50)
  (Wrd30.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_126)
  (Wrd250.Obj) = (Rsp [1]);
  (Wrd251.uLng) = (OBJECT_TYPE (Wrd250.Obj));
  if (! ((Wrd251.uLng) == 10))
    goto label_140;
  (Wrd247.pObj) = (OBJECT_ADDRESS (Wrd250.Obj));
  (Wrd248.Obj) = ((Wrd247.pObj) [0]);
  (Wrd249.Lng) = (FIXNUM_TO_LONG (Wrd248.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd249.Lng))))
    goto label_140;
  (Wrd241.Obj) = ((Wrd247.pObj) [8]);

DEFLABEL (label_139)
  (Rsp [0]) = (Wrd241.Obj);
  if ((Wrd241.Obj) == (current_block [OBJECT_6_3]))
    goto label_132;
  if ((Wrd241.Obj) == (current_block [OBJECT_6_7]))
    goto label_127;
  (Wrd261.Obj) = (current_block [OBJECT_6_9]);
  (Rsp [0]) = (Wrd261.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (label_127)
  (Rsp [0]) = ((SCHEME_OBJECT) 0);
  (Wrd272.Obj) = (Rsp [1]);
  (Wrd273.uLng) = (OBJECT_TYPE (Wrd272.Obj));
  if (! ((Wrd273.uLng) == 10))
    goto label_131;
  (Wrd269.pObj) = (OBJECT_ADDRESS (Wrd272.Obj));
  (Wrd270.Obj) = ((Wrd269.pObj) [0]);
  (Wrd271.Lng) = (FIXNUM_TO_LONG (Wrd270.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd271.Lng))))
    goto label_131;
  (Wrd263.Obj) = ((Wrd269.pObj) [11]);

DEFLABEL (label_130)
  (Wrd281.uLng) = (OBJECT_TYPE (Wrd263.Obj));
  if (! ((Wrd281.uLng) == 1))
    goto label_129;
  (Wrd280.pObj) = (OBJECT_ADDRESS (Wrd263.Obj));
  (Wrd279.Obj) = ((Wrd280.pObj) [0]);

DEFLABEL (label_128)
  (Rsp [1]) = (Wrd279.Obj);
  goto lambda_3;

DEFLABEL (label_129)
  (Wrd285.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd285.Obj);
  (* (--Rsp)) = (Wrd263.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_8]), 1);

DEFLABEL (label_69)
  (Wrd279.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd274.Obj) = (Rsp [1]);
  (Wrd275.Obj) = (current_block [OBJECT_6_4]);
  (Wrd278.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd278.Obj);
  (* (--Rsp)) = (Wrd275.Obj);
  (* (--Rsp)) = (Wrd274.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_68)
  (Wrd263.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_132)
  (Wrd295.Obj) = (Rsp [1]);
  (Wrd296.uLng) = (OBJECT_TYPE (Wrd295.Obj));
  if (! ((Wrd296.uLng) == 10))
    goto label_138;
  (Wrd292.pObj) = (OBJECT_ADDRESS (Wrd295.Obj));
  (Wrd293.Obj) = ((Wrd292.pObj) [0]);
  (Wrd294.Lng) = (FIXNUM_TO_LONG (Wrd293.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd294.Lng))))
    goto label_138;
  (Wrd286.Obj) = ((Wrd292.pObj) [11]);

DEFLABEL (label_137)
  (Wrd304.uLng) = (OBJECT_TYPE (Wrd286.Obj));
  if (! ((Wrd304.uLng) == 1))
    goto label_136;
  (Wrd302.pObj) = (OBJECT_ADDRESS (Wrd286.Obj));
  (Wrd303.Obj) = ((Wrd302.pObj) [1]);
  (* (--Rsp)) = (Wrd303.Obj);

DEFLABEL (label_135)
  (Wrd318.Obj) = (Rsp [2]);
  (Wrd319.uLng) = (OBJECT_TYPE (Wrd318.Obj));
  if (! ((Wrd319.uLng) == 10))
    goto label_134;
  (Wrd315.pObj) = (OBJECT_ADDRESS (Wrd318.Obj));
  (Wrd316.Obj) = ((Wrd315.pObj) [0]);
  (Wrd317.Lng) = (FIXNUM_TO_LONG (Wrd316.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd317.Lng))))
    goto label_134;
  (Wrd309.Obj) = ((Wrd315.pObj) [10]);

DEFLABEL (label_133)
  (Wrd325.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd309.Obj);
  (* (Rhp++)) = (Wrd325.Obj);
  (Wrd328.pObj) = (& (Rhp [-2]));
  (Wrd326.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd328.pObj)));
  (Rsp [1]) = (Wrd326.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd331.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_11])));
  Rhp += 1;
  (Wrd330.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd331.pObj)));
  Wrd332 = Wrd331;
  (Wrd333.Obj) = (Rsp [0]);
  ((Wrd332.pObj) [2]) = (Wrd333.Obj);
  Rvl = (Wrd330.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_134)
  (Wrd320.Obj) = (Rsp [2]);
  (Wrd321.Obj) = (current_block [OBJECT_6_6]);
  (Wrd324.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd324.Obj);
  (* (--Rsp)) = (Wrd321.Obj);
  (* (--Rsp)) = (Wrd320.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_72)
  (Wrd309.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd308.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd308.Obj);
  (* (--Rsp)) = (Wrd286.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 1);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd297.Obj) = (Rsp [1]);
  (Wrd298.Obj) = (current_block [OBJECT_6_4]);
  (Wrd301.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd301.Obj);
  (* (--Rsp)) = (Wrd298.Obj);
  (* (--Rsp)) = (Wrd297.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_70)
  (Wrd286.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  (Wrd252.Obj) = (Rsp [1]);
  (Wrd253.Obj) = (current_block [OBJECT_6_2]);
  (Wrd256.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd256.Obj);
  (* (--Rsp)) = (Wrd253.Obj);
  (* (--Rsp)) = (Wrd252.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_67)
  (Wrd241.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_6])), (Wrd23.pObj));

DEFLABEL (label_49)
  (Wrd22.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_6_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_143;

DEFLABEL (lambda_76)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_6_38);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_146;
  (Wrd11.Obj) = (current_block [OBJECT_6_12]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  goto label_145;

DEFLABEL (label_146)
  (Wrd7.Obj) = (current_block [OBJECT_6_12]);

DEFLABEL (label_145)
DEFLABEL (label_147)
  (Rsp [1]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_39])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  ((Wrd17.pObj) [2]) = (Wrd7.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  Rvl = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_78)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_6_35);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_6_12]);
  (Rsp [2]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_75)
  CLOSURE_HEADER (LABEL_6_11);

DEFLABEL (lambda_41)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_77)
  CLOSURE_HEADER (LABEL_6_39);

DEFLABEL (lambda_1)
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

DEFLABEL (lambda_79)
  CLOSURE_HEADER (LABEL_6_41);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_80)
  CLOSURE_HEADER (LABEL_6_43);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6_12]);
  (Rsp [2]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_5 3
#define LABEL_7_4 5
#define LABEL_7_7 7
#define LABEL_7_8 9
#define LABEL_7_6 11
#define LABEL_7_11 13
#define LABEL_7_12 15
#define LABEL_7_13 17
#define LABEL_7_18 19
#define LABEL_7_19 21
#define LABEL_7_20 23
#define LABEL_7_21 25
#define LABEL_7_22 27
#define LABEL_7_16 29
#define ENVIRONMENT_LABEL_7_3 49
#define DEBUGGING_LABEL_7_2 48
#define OBJECT_7_3 47
#define OBJECT_7_2 46
#define OBJECT_7_1 45
#define OBJECT_7_0 44
#define EXECUTE_CACHE_7_17 31
#define EXECUTE_CACHE_7_15 33
#define EXECUTE_CACHE_7_14 35
#define EXECUTE_CACHE_7_10 37
#define EXECUTE_CACHE_7_9 39
#define FREE_REFERENCE_7_1 42
#define FREE_REFERENCE_7_0 43
#define FREE_REFERENCES_LABEL_7_0 30
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
param_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd54;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
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
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_7_4);
      goto values__variables_15;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_7_13);
      goto lambda_12;

    case 8:
      current_block = (Rpc - LABEL_7_18);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_7_19);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_7_20);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_7_21);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_7_22);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_7_16);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (values__variables_25)
DEFLABEL (values__variables_15)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_34;
  Wrd10 = Wrd14;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_32;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd24.Lng))))
    goto label_32;
  (Wrd16.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_31)
  (Wrd32.Obj) = (* (Rsp++));
  if (! ((Wrd16.Obj) == (Wrd32.Obj)))
    goto label_29;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  goto label_28;

DEFLABEL (label_29)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_28)
DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_7_12);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (label_32)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (current_block [OBJECT_7_1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_18)
  (Wrd16.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_7])), (Wrd11.pObj));

DEFLABEL (label_17)
  (Wrd10.Obj) = Rvl;
  goto label_33;

DEFLABEL (lambda_26)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_7_13);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_46;
  Wrd5 = Wrd9;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_44;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_44;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_43)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_36;

DEFLABEL (label_35)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_42;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd38.Lng))))
    goto label_42;
  (Wrd30.Obj) = ((Wrd36.pObj) [4]);

DEFLABEL (label_41)
  (Rsp [0]) = (Wrd30.Obj);
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_40;
  Wrd48 = Wrd52;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_38;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd62.Lng))))
    goto label_38;
  (Wrd54.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_37)
  (Wrd70.Obj) = (* (Rsp++));
  if (! ((Wrd54.Obj) == (Wrd70.Obj)))
    goto label_35;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (label_38)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.Obj) = (current_block [OBJECT_7_1]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_23)
  (Wrd54.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_21])), (Wrd49.pObj));

DEFLABEL (label_22)
  (Wrd48.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_7_3]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_21)
  (Wrd30.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_7_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_20)
  (Wrd11.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_18])), (Wrd6.pObj));

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_45;

DEFLABEL (lambda_27)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_7_16);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_3]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_48;

DEFLABEL (label_47)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_48)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_47;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_5 7
#define LABEL_8_8 9
#define TAG_8_9 3
#define LABEL_8_10 11
#define LABEL_8_12 13
#define TAG_8_13 5
#define LABEL_8_14 15
#define LABEL_8_15 17
#define TAG_8_16 7
#define LABEL_8_21 19
#define LABEL_8_17 21
#define TAG_8_18 9
#define LABEL_8_19 23
#define TAG_8_20 10
#define LABEL_8_23 25
#define LABEL_8_24 27
#define TAG_8_25 12
#define LABEL_8_26 29
#define LABEL_8_28 31
#define LABEL_8_30 33
#define ENVIRONMENT_LABEL_8_3 52
#define DEBUGGING_LABEL_8_2 51
#define OBJECT_8_1 50
#define OBJECT_8_0 49
#define EXECUTE_CACHE_8_31 35
#define EXECUTE_CACHE_8_29 37
#define EXECUTE_CACHE_8_27 39
#define EXECUTE_CACHE_8_22 41
#define EXECUTE_CACHE_8_11 43
#define EXECUTE_CACHE_8_7 45
#define FREE_REFERENCE_8_0 48
#define FREE_REFERENCES_LABEL_8_0 34
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
param_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_8_4);
      goto complex_parallel_constraints_15;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_14;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto lambda_21;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_8_12);
      goto lambda_3;

    case 6:
      current_block = (Rpc - LABEL_8_14);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_8_15);
      goto lambda_23;

    case 8:
      current_block = (Rpc - LABEL_8_21);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_8_17);
      goto lambda_24;

    case 10:
      current_block = (Rpc - LABEL_8_19);
      goto lambda_25;

    case 11:
      current_block = (Rpc - LABEL_8_23);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_8_24);
      goto lambda_26;

    case 13:
      current_block = (Rpc - LABEL_8_26);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_8_28);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_8_30);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (complex_parallel_constraints_20)
DEFLABEL (complex_parallel_constraints_15)
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
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_8])));
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

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_6])), (Wrd9.pObj));

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_27;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_8_8);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_12])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  goto lambda_3;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_8_14);
  (Rsp [3]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_17])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [4]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_22)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_8_12);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_15])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_8_15);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_19])));
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
    goto label_30;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd19.Lng))))
    goto label_30;
  (Wrd11.Obj) = ((Wrd17.pObj) [6]);

DEFLABEL (label_29)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd27.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_22]));

DEFLABEL (label_30)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_8_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_21]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_18)
  (Wrd11.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_8_17);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_24])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  goto lambda_3;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_8_26);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8_23);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_8_19);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_27]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_8_24);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_29]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_31]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_30);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_29]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 12
#define DEBUGGING_LABEL_9_2 11
#define EXECUTE_CACHE_9_6 7
#define FREE_REFERENCE_9_0 10
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
param_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_9_4);
      goto node_bad_variables_0;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (node_bad_variables_4)
DEFLABEL (node_bad_variables_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 12
#define DEBUGGING_LABEL_10_2 11
#define EXECUTE_CACHE_10_6 7
#define FREE_REFERENCE_10_0 10
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
param_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_10_4);
      goto set_node_bad_variablesB_0;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_node_bad_variablesB_4)
DEFLABEL (set_node_bad_variablesB_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_9 7
#define LABEL_11_6 9
#define LABEL_11_7 11
#define LABEL_11_12 13
#define LABEL_11_13 15
#define LABEL_11_8 17
#define LABEL_11_15 19
#define ENVIRONMENT_LABEL_11_3 37
#define DEBUGGING_LABEL_11_2 36
#define OBJECT_11_3 35
#define OBJECT_11_2 34
#define OBJECT_11_1 33
#define OBJECT_11_0 32
#define EXECUTE_CACHE_11_16 21
#define EXECUTE_CACHE_11_14 23
#define EXECUTE_CACHE_11_11 25
#define EXECUTE_CACHE_11_10 27
#define FREE_REFERENCE_11_1 30
#define FREE_REFERENCE_11_0 31
#define FREE_REFERENCES_LABEL_11_0 20
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
param_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_11_4);
      goto bad_free_variables_6;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_11_9);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_11_7);
      goto lambda_4;

    case 5:
      current_block = (Rpc - LABEL_11_12);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_11_13);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_11_15);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bad_free_variables_14)
DEFLABEL (bad_free_variables_6)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_21;
  Wrd5 = Wrd9;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_19;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_19;
  (Wrd21.Obj) = ((Wrd25.pObj) [4]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_17;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (label_17)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_3]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.Obj) = (current_block [OBJECT_11_0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (lambda_15)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_11_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_25;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_24)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_23;
  Wrd22 = Wrd26;

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_13])), (Wrd23.pObj));

DEFLABEL (label_11)
  (Wrd22.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_11_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_6 5
#define LABEL_12_7 7
#define LABEL_12_5 9
#define LABEL_12_10 11
#define LABEL_12_9 13
#define ENVIRONMENT_LABEL_12_3 26
#define DEBUGGING_LABEL_12_2 25
#define OBJECT_12_3 24
#define OBJECT_12_2 23
#define OBJECT_12_1 22
#define OBJECT_12_0 21
#define EXECUTE_CACHE_12_11 15
#define EXECUTE_CACHE_12_8 17
#define FREE_REFERENCE_12_0 20
#define FREE_REFERENCES_LABEL_12_0 14
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
param_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto linearize_block_tree_6;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_12_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (linearize_block_tree_12)
DEFLABEL (linearize_block_tree_6)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_19;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_19;
  (Wrd10.Obj) = ((Wrd14.pObj) [6]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_18)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_17;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_17;
  (Wrd26.Obj) = ((Wrd30.pObj) [5]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_12_3]);
  if (! (Rvl == (Wrd6.Obj)))
    goto label_13;
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_15;
  Wrd11 = Wrd15;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (Wrd10.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_10])), (Wrd12.pObj));

DEFLABEL (label_10)
  (Wrd11.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_12_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_12_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
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
#define ENVIRONMENT_LABEL_13_3 21
#define DEBUGGING_LABEL_13_2 20
#define OBJECT_13_7 19
#define OBJECT_13_6 18
#define OBJECT_13_5 17
#define OBJECT_13_4 16
#define OBJECT_13_3 15
#define OBJECT_13_2 14
#define OBJECT_13_1 13
#define OBJECT_13_0 12
#define FREE_REFERENCES_LABEL_13_0 12
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
param_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd26;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
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
      current_block = (Rpc - LABEL_13_4);
      goto interesting_variableP_7;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_13_8);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interesting_variableP_14)
DEFLABEL (interesting_variableP_7)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd13.Lng))))
    goto label_25;
  (Wrd5.Obj) = ((Wrd11.pObj) [17]);

DEFLABEL (label_24)
  if ((Wrd5.Obj) == (current_block [OBJECT_13_2]))
    goto label_17;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_23;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd69.Lng))))
    goto label_23;
  (Wrd26.Obj) = ((Wrd67.pObj) [23]);
  if (! ((Wrd26.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_16;

DEFLABEL (label_22)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_21;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd36.Lng))))
    goto label_21;
  (Wrd28.Obj) = ((Wrd34.pObj) [16]);

DEFLABEL (label_20)
  if ((Wrd28.Obj) == (current_block [OBJECT_13_5]))
    goto label_16;
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_19;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd53.Lng))))
    goto label_19;
  (Wrd45.Obj) = ((Wrd51.pObj) [16]);

DEFLABEL (label_18)
  if ((Wrd45.Obj) == (current_block [OBJECT_13_6]))
    goto label_16;
  Rvl = (current_block [OBJECT_13_7]);
  goto label_15;

DEFLABEL (label_19)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (current_block [OBJECT_13_4]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_11)
  (Wrd45.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_13_4]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_10)
  (Wrd28.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd73.Obj) = (current_block [OBJECT_13_3]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_16;

DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_24;

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
param_so_f59a4679b0cb3665 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	1,
	3,
	2,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 13)
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

static const struct liarc_code_S arr_decl_param_so_f59a4679b0cb3665 [13] =
  {
    { "param_so_code_1", 17, param_so_code_1 },
    { "param_so_code_2", 25, param_so_code_2 },
    { "param_so_code_3", 25, param_so_code_3 },
    { "param_so_code_4", 4, param_so_code_4 },
    { "param_so_code_5", 14, param_so_code_5 },
    { "param_so_code_6", 34, param_so_code_6 },
    { "param_so_code_7", 14, param_so_code_7 },
    { "param_so_code_8", 16, param_so_code_8 },
    { "param_so_code_9", 2, param_so_code_9 },
    { "param_so_code_10", 2, param_so_code_10 },
    { "param_so_code_11", 9, param_so_code_11 },
    { "param_so_code_12", 6, param_so_code_12 },
    { "param_so_code_13", 5, param_so_code_13 }
  };

int
decl_param_so_f59a4679b0cb3665 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_param_so_f59a4679b0cb3665);
  return (0);
}

DECLARE_COMPILED_CODE ("param.so", 3, decl_param_so_f59a4679b0cb3665, param_so_f59a4679b0cb3665)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_param_so_data_f59a4679b0cb3665 [3305] =
  "\x6f\x1c\x9c\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x02\x02\x83\x1d"
  "\xc2\xb9\x85\x08\x0d\xba\x25\x0d\xbb\xb2\x24\x28\x0d\x28\x0d\xbc"
  "\x28\x0d\x28\x0d\x28\x0d\xbd\x28\x0d\xbe\x28\x0d\xbf\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x02\x0d\x1c\x02\x02\x80\xb1\x85"
  "\x08\x0d\x1c\x0d\x1c\x0d\x1c\xb7\x0d\x1c\x24\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28\xb7\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x0c\x86\xc1\x1c\x80"
  "\x02\x0c\x0d\x1c\x02\x1b\xb1\x02\xb2\x25\xb2\x1b\x24\x28\x1b\x28"
  "\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\xb5\x28\x1b\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xb1\x02\x28"
  "\x1b\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x85\x88\x08\x1b\x1b\x0d\xbd\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x86\x88\x08\x0c\x02\x0c\x1b\x1b\x02\xc1\x1c\x02\x1b\x02\xb1"
  "\x80\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x24\x28\x1b\x28\x0d"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x83\xb1\x80\x08\x0d\x0d\x24\x28\xb3\x28\x0d\x28\xb4\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\x85\x1b\x24\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02"
  "\x88\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x02\xb1\x83\x0d\xb2\x24\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x84"
  "\xb1\x85\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x0d"
  "\x02\x02\x08\xb1\x02\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x17\xb9\x88\xb1\x1b\x2a\x1b\x2a\x1b\x2a\x0c\x1b\x2a"
  "\x1b\x2a\xb4\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x17\xb3\x1b\xb6\x1b\x0d\x0d\x1b\xb5\x1b\x1b\x1b\xb2"
  "\x1b\xb7\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x66\x67\x6f\x70\x74\x2f"
  "\x70\x61\x72\x61\x6d\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0b"
  "\x15\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x15\x2a\x69"
  "\x6e\x6c\x69\x6e\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x73\x2a\x02\x16\x69\x6e\x74\x65\x72\x65\x73\x74\x69\x6e\x67\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x3f\x03\x05\x13\x73\x68\x61\x6c"
  "\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x04\x18"
  "\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x70"
  "\x6f\x73\x69\x74\x69\x76\x65\x03\x14\x77\x69\x74\x68\x2d\x6e\x65"
  "\x77\x2d\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x73\x04\x12\x65\x71"
  "\x2d\x73\x65\x74\x2d\x64\x69\x66\x66\x65\x72\x65\x6e\x63\x65\x03"
  "\x0f\x65\x64\x67\x65\x2d\x6e\x65\x78\x74\x2d\x6e\x6f\x64\x65\x03"
  "\x13\x62\x61\x64\x2d\x66\x72\x65\x65\x2d\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x73\x03\x15\x77\x61\x6c\x6b\x2d\x6e\x6f\x64\x65\x2d\x66"
  "\x6f\x72\x2d\x73\x65\x61\x72\x63\x68\x08\x14\x24\x81\x87\x02\x13"
  "\x22\x81\x83\x02\x12\x20\x81\x87\x02\x11\x1e\x81\x85\x02\x10\x1c"
  "\x81\x83\x02\x0f\x1a\x81\x87\x02\x0e\x18\x81\x87\x02\x0d\x16\x81"
  "\x85\x02\x0c\x14\x81\x83\x02\x0b\x12\x81\x83\x02\x0a\x10\x81\x85"
  "\x02\x09\x0e\x81\x83\x02\x08\x0c\x81\x83\x02\x07\x0a\x81\x87\x02"
  "\x06\x08\x81\x85\x02\x05\x06\x81\x83\x02\x04\x04\x83\x04\x23\x41"
  "\x09\x02\x09\x0c\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x0a"
  "\x08\x0a\x17\x6e\x6f\x64\x65\x2f\x62\x61\x64\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x73\x2d\x74\x61\x67\x0b\x0e\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x74\x61\x67\x0c\x18\x77\x61\x6c\x6b\x2d\x6e"
  "\x6f\x64\x65\x2d\x66\x6f\x72\x2d\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x73\x0d\x13\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2d\x73\x69"
  "\x6d\x70\x6c\x65\x3f\x0e\x06\x03\x0b\x6e\x6f\x64\x65\x2d\x6d\x61"
  "\x72\x6b\x21\x0f\x04\x0d\x63\x66\x67\x2d\x6e\x6f\x64\x65\x2d\x67"
  "\x65\x74\x10\x03\x0d\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x65\x64"
  "\x3f\x03\x0d\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x3f\x11"
  "\x03\x09\x65\x64\x67\x65\x73\x3e\x31\x3f\x03\x17\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x69\x6e\x6c\x69\x6e\x65\x2d\x63\x6f\x64"
  "\x65\x3f\x12\x04\x0a\x77\x61\x6c\x6b\x2d\x6e\x65\x78\x74\x13\x03"
  "\x13\x72\x76\x61\x6c\x75\x65\x2d\x6b\x6e\x6f\x77\x6e\x2d\x76\x61"
  "\x6c\x75\x65\x14\x03\x1b\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x2f\x73\x69\x6d\x70\x6c\x65\x2d\x69\x6e\x6c\x69\x6e\x65\x3f"
  "\x03\x0a\x70\x61\x72\x61\x6c\x6c\x65\x6c\x3f\x15\x04\x09\x66\x6f"
  "\x72\x2d\x61\x6c\x6c\x3f\x03\x04\x10\x6f\x72\x64\x65\x72\x2d\x70"
  "\x61\x72\x61\x6c\x6c\x65\x6c\x21\x16\x04\x1d\x63\x6f\x6d\x70\x6c"
  "\x65\x78\x2d\x70\x61\x72\x61\x6c\x6c\x65\x6c\x2d\x63\x6f\x6e\x73"
  "\x74\x72\x61\x69\x6e\x74\x73\x17\x0f\x2d\x34\x81\x85\x02\x2c\x32"
  "\x81\x87\x02\x2b\x30\x81\x87\x02\x2a\x2e\x81\x83\x02\x29\x2c\x81"
  "\x85\x02\x28\x2a\x81\x85\x02\x27\x28\x81\x89\x02\x26\x26\x81\x85"
  "\x02\x25\x24\x81\x85\x02\x24\x22\x81\x85\x02\x23\x20\x81\x85\x02"
  "\x22\x1e\x81\x89\x02\x21\x1c\x81\x85\x02\x20\x1a\x81\x85\x02\x1f"
  "\x18\x81\x85\x02\x1e\x16\x81\x85\x02\x1d\x14\x81\x83\x02\x1c\x12"
  "\x81\x87\x02\x1b\x10\x81\x85\x02\x1a\x0e\x81\x83\x02\x19\x0c\x81"
  "\x83\x02\x18\x0a\x83\x04\x17\x08\x81\x85\x02\x16\x06\x81\x83\x02"
  "\x15\x04\x81\x83\x02\x33\x61\x18\x02\x0d\x49\x6c\x6c\x65\x67\x61"
  "\x6c\x20\x6e\x6f\x64\x65\x04\x63\x61\x72\x19\x0b\x19\x49\x6c\x6c"
  "\x65\x67\x61\x6c\x20\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e"
  "\x20\x74\x79\x70\x65\x07\x72\x65\x74\x75\x72\x6e\x1a\x0a\x0a\x08"
  "\x02\x0c\x03\x03\x11\x03\x07\x73\x6e\x6f\x64\x65\x3f\x03\x14\x04"
  "\x12\x77\x61\x6c\x6b\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x11\x04\x06\x65\x72\x72\x6f\x72\x0c\x03\x03\x12\x03\x07"
  "\x70\x6e\x6f\x64\x65\x3f\x04\x0d\x65\x71\x2d\x73\x65\x74\x2d\x75"
  "\x6e\x69\x6f\x6e\x12\x0a\x46\x34\x81\x89\x02\x45\x32\x81\x87\x02"
  "\x44\x30\x81\x87\x02\x43\x2e\x81\x8b\x02\x42\x2c\x81\x85\x02\x41"
  "\x2a\x81\x87\x02\x40\x28\x81\x89\x02\x3f\x26\x81\x85\x02\x3e\x24"
  "\x81\x85\x02\x3d\x22\x81\x87\x02\x3c\x20\x81\x85\x02\x3b\x1e\x81"
  "\x87\x02\x3a\x1c\x81\x87\x02\x39\x1a\x81\x89\x02\x38\x18\x81\x87"
  "\x02\x37\x16\x81\x87\x02\x36\x14\x81\x89\x02\x35\x12\x81\x87\x02"
  "\x34\x10\x81\x87\x02\x33\x0e\x81\x87\x02\x32\x0c\x81\x87\x02\x31"
  "\x0a\x81\x89\x02\x30\x08\x81\x85\x02\x2f\x06\x81\x85\x02\x2e\x04"
  "\x84\x06\x33\x59\x1b\x02\x0b\x03\x14\x03\x03\x4a\x0a\x81\x89\x02"
  "\x49\x08\x81\x85\x02\x48\x06\x81\x87\x02\x47\x04\x84\x06\x09\x13"
  "\x14\x02\x0b\x0d\x12\x76\x61\x6c\x75\x65\x73\x2d\x3e\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x73\x04\x03\x15\x03\x0f\x04\x16\x03\x0d\x04"
  "\x10\x04\x13\x05\x0e\x63\x66\x67\x2d\x6e\x6f\x64\x65\x2d\x70\x75"
  "\x74\x21\x16\x03\x11\x66\x69\x6e\x64\x2d\x6e\x6f\x64\x65\x2d\x76"
  "\x61\x6c\x75\x65\x73\x15\x04\x12\x0a\x58\x1e\x81\x8d\x02\x57\x1c"
  "\x81\x89\x02\x56\x1a\x81\x85\x02\x55\x18\x81\x8b\x02\x54\x16\x81"
  "\x87\x02\x53\x14\x81\x89\x02\x52\x12\x81\x85\x02\x51\x10\x81\x89"
  "\x02\x50\x0e\x81\x83\x02\x4f\x0c\x81\x85\x02\x4e\x0a\x81\x83\x02"
  "\x4d\x08\x81\x83\x02\x4c\x06\x81\x83\x02\x4b\x04\x83\x04\x1d\x38"
  "\x0f\x02\x13\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6e\x6f\x64\x65\x20"
  "\x74\x79\x70\x65\x3a\x09\x19\x49\x6c\x6c\x65\x67\x61\x6c\x20\x61"
  "\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x20\x74\x79\x70\x65\x19"
  "\x1a\x0a\x04\x63\x64\x72\x1a\x0b\x0a\x08\x10\x61\x70\x70\x6c\x69"
  "\x63\x61\x74\x69\x6f\x6e\x2d\x74\x61\x67\x13\x76\x69\x72\x74\x75"
  "\x61\x6c\x2d\x72\x65\x74\x75\x72\x6e\x2d\x74\x61\x67\x0f\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x74\x61\x67\x0f\x64\x65\x66"
  "\x69\x6e\x69\x74\x69\x6f\x6e\x2d\x74\x61\x67\x14\x73\x74\x61\x63"
  "\x6b\x2d\x6f\x76\x65\x72\x77\x72\x69\x74\x65\x2d\x74\x61\x67\x0d"
  "\x70\x61\x72\x61\x6c\x6c\x65\x6c\x2d\x74\x61\x67\x1a\x73\x75\x62"
  "\x70\x72\x6f\x62\x6c\x65\x6d\x2d\x66\x72\x65\x65\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x73\x08\x70\x6f\x70\x2d\x74\x61\x67\x0c\x66"
  "\x67\x2d\x6e\x6f\x6f\x70\x2d\x74\x61\x67\x0e\x74\x72\x75\x65\x2d"
  "\x74\x65\x73\x74\x2d\x74\x61\x67\x0b\x04\x0c\x03\x08\x6c\x76\x61"
  "\x6c\x75\x65\x3f\x04\x0b\x61\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70"
  "\x19\x04\x7a\x46\x81\x85\x02\x79\x44\x81\x85\x02\x78\x42\x81\x85"
  "\x02\x77\x40\x81\x85\x02\x76\x3e\x81\x87\x02\x75\x3c\x81\x85\x02"
  "\x74\x3a\x83\x04\x73\x38\x81\x85\x02\x72\x36\x81\x85\x02\x71\x34"
  "\x81\x85\x02\x70\x32\x81\x85\x02\x6f\x30\x81\x85\x02\x6e\x2e\x81"
  "\x89\x02\x6d\x2c\x81\x87\x02\x6c\x2a\x81\x85\x02\x6b\x28\x81\x85"
  "\x02\x6a\x26\x81\x85\x02\x69\x24\x81\x85\x02\x68\x22\x81\x85\x02"
  "\x67\x20\x81\x85\x02\x66\x1e\x81\x85\x02\x65\x1c\x81\x85\x02\x64"
  "\x1a\x81\x85\x02\x63\x18\x81\x85\x02\x62\x16\x81\x85\x02\x61\x14"
  "\x81\x85\x02\x60\x12\x81\x85\x02\x5f\x10\x81\x87\x02\x5e\x0e\x81"
  "\x85\x02\x5d\x0c\x81\x85\x02\x5c\x0a\x81\x85\x02\x5b\x08\x81\x85"
  "\x02\x5a\x06\x81\x83\x02\x59\x04\x83\x04\x45\x67\x0c\x02\x08\x0d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x74\x61\x67\x0e\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x74\x61\x67\x03\x03\x03\x0d\x6c\x69"
  "\x73\x74\x2d\x3e\x65\x71\x2d\x73\x65\x74\x04\x04\x12\x04\x0c\x6d"
  "\x61\x70\x2d\x3e\x65\x71\x2d\x73\x65\x74\x06\x88\x01\x1e\x83\x04"
  "\x87\x01\x1c\x81\x85\x02\x86\x01\x1a\x81\x83\x02\x85\x01\x18\x81"
  "\x83\x02\x84\x01\x16\x81\x85\x02\x83\x01\x14\x81\x83\x02\x82\x01"
  "\x12\x83\x04\x81\x01\x10\x81\x87\x02\x80\x01\x0e\x81\x85\x02\x7f"
  "\x0c\x81\x85\x02\x7e\x0a\x81\x89\x02\x7d\x08\x81\x87\x02\x7c\x06"
  "\x84\x06\x7b\x04\x81\x87\x02\x1d\x32\x12\x02\x09\x0c\x25\x72\x65"
  "\x63\x6f\x72\x64\x2d\x72\x65\x66\x0e\x02\x04\x13\x64\x69\x73\x63"
  "\x72\x69\x6d\x69\x6e\x61\x74\x65\x2d\x69\x74\x65\x6d\x73\x02\x16"
  "\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x2d"
  "\x67\x72\x61\x70\x68\x04\x0e\x74\x68\x65\x72\x65\x2d\x65\x78\x69"
  "\x73\x74\x73\x3f\x04\x05\x6d\x65\x6d\x71\x0e\x05\x14\x61\x64\x64"
  "\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x2d\x73\x65\x74\x21"
  "\x04\x07\x61\x70\x70\x65\x6e\x64\x0a\x07\x98\x01\x22\x81\x87\x02"
  "\x97\x01\x20\x81\x87\x02\x96\x01\x1e\x81\x8b\x02\x95\x01\x1c\x81"
  "\x87\x02\x94\x01\x1a\x81\x87\x02\x93\x01\x18\x81\x85\x02\x92\x01"
  "\x16\x81\x87\x02\x91\x01\x14\x81\x87\x02\x90\x01\x12\x81\x85\x02"
  "\x8f\x01\x10\x81\x8b\x02\x8e\x01\x0e\x81\x85\x02\x8d\x01\x0c\x81"
  "\x87\x02\x8c\x01\x0a\x81\x87\x02\x8b\x01\x08\x81\x85\x02\x8a\x01"
  "\x06\x81\x87\x02\x89\x01\x04\x84\x06\x21\x35\x02\x0a\x0b\x02\x04"
  "\x10\x02\x9a\x01\x06\x81\x85\x02\x99\x01\x04\x83\x04\x05\x0d\x10"
  "\x02\x0b\x0b\x02\x05\x16\x02\x9c\x01\x06\x81\x87\x02\x9b\x01\x04"
  "\x84\x06\x05\x0d\x16\x02\x0c\x1a\x08\x25\x62\x6c\x6f\x63\x6b\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x2d\x6e\x6f\x6e\x74\x72\x61"
  "\x6e\x73\x69\x74\x69\x76\x65\x6c\x79\x2d\x66\x72\x65\x65\x03\x03"
  "\x15\x6c\x69\x6e\x65\x61\x72\x69\x7a\x65\x2d\x62\x6c\x6f\x63\x6b"
  "\x2d\x74\x72\x65\x65\x1a\x04\x19\x04\x0e\x04\x18\x6c\x69\x73\x74"
  "\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x6e\x65\x67\x61\x74"
  "\x69\x76\x65\x05\xa5\x01\x14\x81\x89\x02\xa4\x01\x12\x81\x89\x02"
  "\xa3\x01\x10\x81\x85\x02\xa2\x01\x0e\x81\x83\x02\xa1\x01\x0c\x83"
  "\x04\xa0\x01\x0a\x81\x85\x02\x9f\x01\x08\x81\x8b\x02\x9e\x01\x06"
  "\x81\x83\x02\x9d\x01\x04\x83\x04\x13\x26\x19\x02\x0d\x1a\x02\x04"
  "\x0a\x04\x0c\x61\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70\x21\x03\xab"
  "\x01\x0e\x81\x85\x02\xaa\x01\x0c\x81\x89\x02\xa9\x01\x0a\x81\x83"
  "\x02\xa8\x01\x08\x81\x87\x02\xa7\x01\x06\x81\x85\x02\xa6\x01\x04"
  "\x83\x04\x0d\x1b\x0e\x02\x0e\x09\x23\x5b\x76\x61\x6c\x75\x65\x5d"
  "\x10\x23\x5b\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x5d"
  "\x10\x17\x11\xb0\x01\x0c\x81\x83\x02\xaf\x01\x0a\x81\x83\x02\xae"
  "\x01\x08\x81\x83\x02\xad\x01\x06\x81\x83\x02\xac\x01\x04\x83\x04"
  "\x0b\x16\x0a\x0e\x0a\x04\x0e\x04\x19\x04\x12\x62\x61\x64\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x73\x2d\x74\x61\x67\x16\x04\x10\x04"
  "\x04\x12\x06\x0c\x04\x0f\x04\x14\x04\x1b\x04\x18\x0a\x09\x04\x10"
  "\x1a\x0b\x18\x73\x65\x74\x2d\x6e\x6f\x64\x65\x2f\x62\x61\x64\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x21\x13\x6e\x6f\x64\x65\x2f"
  "\x62\x61\x64\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x17\x15\x0d"
  "\x11\x13\x13\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x2d\x61\x6e\x61"
  "\x6c\x79\x73\x69\x73\x10\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d"
  "\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81"
  "\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
param_so_data_f59a4679b0cb3665 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_param_so_data_f59a4679b0cb3665 [0]))), (sizeof (prog_param_so_data_f59a4679b0cb3665)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("param.so", param_so_data_f59a4679b0cb3665)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("param.so", "f04281d282e5d3ab")
