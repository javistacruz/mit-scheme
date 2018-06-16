/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:29-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_8 7
#define ENVIRONMENT_LABEL_1_3 19
#define DEBUGGING_LABEL_1_2 18
#define OBJECT_1_0 17
#define EXECUTE_CACHE_1_9 9
#define EXECUTE_CACHE_1_7 11
#define EXECUTE_CACHE_1_6 13
#define FREE_REFERENCE_1_0 16
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_1_4);
      goto debug_3;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debug_7)
DEFLABEL (debug_3)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_1_0]))
    goto label_8;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (label_9)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_11;
  Wrd9 = Wrd13;

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd10.pObj));

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define TAG_2_8 2
#define LABEL_2_10 9
#define LABEL_2_14 11
#define LABEL_2_11 13
#define TAG_2_12 5
#define LABEL_2_16 15
#define LABEL_2_17 17
#define TAG_2_18 7
#define LABEL_2_22 19
#define LABEL_2_21 21
#define LABEL_2_29 23
#define LABEL_2_30 25
#define LABEL_2_26 27
#define LABEL_2_27 29
#define LABEL_2_24 31
#define LABEL_2_31 33
#define LABEL_2_32 35
#define LABEL_2_38 37
#define LABEL_2_33 39
#define LABEL_2_35 41
#define LABEL_2_37 43
#define LABEL_2_39 45
#define LABEL_2_40 47
#define LABEL_2_42 49
#define LABEL_2_43 51
#define LABEL_2_44 53
#define LABEL_2_45 55
#define LABEL_2_46 57
#define ENVIRONMENT_LABEL_2_3 101
#define DEBUGGING_LABEL_2_2 100
#define OBJECT_2_13 99
#define OBJECT_2_12 98
#define OBJECT_2_11 97
#define OBJECT_2_10 96
#define OBJECT_2_9 95
#define OBJECT_2_8 94
#define OBJECT_2_7 93
#define OBJECT_2_6 92
#define OBJECT_2_5 91
#define OBJECT_2_4 90
#define OBJECT_2_3 89
#define OBJECT_2_2 88
#define OBJECT_2_1 87
#define OBJECT_2_0 86
#define EXECUTE_CACHE_2_41 59
#define EXECUTE_CACHE_2_36 61
#define EXECUTE_CACHE_2_34 63
#define EXECUTE_CACHE_2_28 65
#define EXECUTE_CACHE_2_25 67
#define EXECUTE_CACHE_2_23 69
#define EXECUTE_CACHE_2_20 71
#define EXECUTE_CACHE_2_19 73
#define EXECUTE_CACHE_2_15 75
#define EXECUTE_CACHE_2_13 77
#define EXECUTE_CACHE_2_9 79
#define EXECUTE_CACHE_2_6 81
#define FREE_REFERENCE_2_1 84
#define FREE_REFERENCE_2_0 85
#define FREE_REFERENCES_LABEL_2_0 58
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_2_4);
      goto debug_internal_28;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto lambda_38;

    case 3:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_25;

    case 4:
      current_block = (Rpc - LABEL_2_14);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto lambda_39;

    case 6:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_23;

    case 7:
      current_block = (Rpc - LABEL_2_17);
      goto lambda_40;

    case 8:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_2_29);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_2_30);
      goto label_35;

    case 12:
      current_block = (Rpc - LABEL_2_26);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_2_27);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_2_24);
      goto continuation_3;

    case 15:
      current_block = (Rpc - LABEL_2_31);
      goto continuation_19;

    case 16:
      current_block = (Rpc - LABEL_2_32);
      goto continuation_8;

    case 17:
      current_block = (Rpc - LABEL_2_38);
      goto label_31;

    case 18:
      current_block = (Rpc - LABEL_2_33);
      goto continuation_4;

    case 19:
      current_block = (Rpc - LABEL_2_35);
      goto continuation_20;

    case 20:
      current_block = (Rpc - LABEL_2_37);
      goto continuation_11;

    case 21:
      current_block = (Rpc - LABEL_2_39);
      goto continuation_21;

    case 22:
      current_block = (Rpc - LABEL_2_40);
      goto continuation_12;

    case 23:
      current_block = (Rpc - LABEL_2_42);
      goto label_32;

    case 24:
      current_block = (Rpc - LABEL_2_43);
      goto label_33;

    case 25:
      current_block = (Rpc - LABEL_2_44);
      goto continuation_14;

    case 26:
      current_block = (Rpc - LABEL_2_45);
      goto continuation_15;

    case 27:
      current_block = (Rpc - LABEL_2_46);
      goto label_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debug_internal_37)
DEFLABEL (debug_internal_28)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_7])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = Rvl;
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_2_7);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_11])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_42;
  Wrd5 = Wrd9;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [3]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_14])), (Wrd6.pObj));

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_41;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_2_11);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_17])));
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
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_3]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_2_17);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_22);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_34]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_33);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_36]));

DEFLABEL (label_43)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_60)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_59;
  if ((Wrd11.Obj) == (current_block [OBJECT_2_5]))
    goto label_45;

DEFLABEL (label_46)
  (Wrd15.Obj) = (current_block [OBJECT_2_9]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_44;

DEFLABEL (label_45)
  (Wrd16.Obj) = (current_block [OBJECT_2_10]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_44)
DEFLABEL (label_58)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_11]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_40);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_57;
  Wrd6 = Wrd10;

DEFLABEL (label_56)
  Wrd5 = Wrd6;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_55;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_55;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd36.Lng) > (Wrd37.Lng))
    goto label_52;

DEFLABEL (label_51)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_44]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_34]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_2_29);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_50;
  if ((Wrd12.Obj) == (current_block [OBJECT_2_5]))
    goto label_48;

DEFLABEL (label_47)
  (Wrd16.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [3]);
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (label_48)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_49)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_36]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_2_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_36]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_2_39);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (label_50)
  (Wrd22.Obj) = (current_block [OBJECT_2_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_48;

DEFLABEL (label_52)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_45]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_2_12]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_2_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_54;
  Wrd11 = Wrd15;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_34]));

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_46])), (Wrd12.pObj));

DEFLABEL (label_34)
  (Wrd11.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_43]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_52;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_42])), (Wrd7.pObj));

DEFLABEL (label_32)
  (Wrd6.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd18.Obj) = (current_block [OBJECT_2_5]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_38]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_45;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_26);
  goto label_49;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_21);
  goto label_60;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_9 9
#define LABEL_3_11 11
#define LABEL_3_13 13
#define LABEL_3_10 15
#define LABEL_3_14 17
#define LABEL_3_17 19
#define LABEL_3_18 21
#define ENVIRONMENT_LABEL_3_3 39
#define DEBUGGING_LABEL_3_2 38
#define OBJECT_3_2 37
#define OBJECT_3_1 36
#define OBJECT_3_0 35
#define EXECUTE_CACHE_3_19 23
#define EXECUTE_CACHE_3_16 25
#define EXECUTE_CACHE_3_15 27
#define EXECUTE_CACHE_3_12 29
#define EXECUTE_CACHE_3_8 31
#define EXECUTE_CACHE_3_6 33
#define FREE_REFERENCES_LABEL_3_0 22
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto stack_trace_14;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto loop_11;

    case 4:
      current_block = (Rpc - LABEL_3_11);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_3_14);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_3_17);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_trace_18)
DEFLABEL (stack_trace_14)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  goto loop_11;

DEFLABEL (loop_19)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_3_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_23;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_23;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;

DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  Rvl = (current_block [OBJECT_3_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_18);
  goto loop_11;

DEFLABEL (label_23)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_3_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_9 7
#define LABEL_4_10 9
#define LABEL_4_7 11
#define LABEL_4_16 13
#define LABEL_4_15 15
#define LABEL_4_13 17
#define LABEL_4_17 19
#define LABEL_4_20 21
#define LABEL_4_21 23
#define LABEL_4_22 25
#define LABEL_4_23 27
#define LABEL_4_24 29
#define LABEL_4_25 31
#define LABEL_4_28 33
#define LABEL_4_26 35
#define LABEL_4_30 37
#define LABEL_4_33 39
#define ENVIRONMENT_LABEL_4_3 79
#define DEBUGGING_LABEL_4_2 78
#define OBJECT_4_9 77
#define OBJECT_4_8 76
#define OBJECT_4_7 75
#define OBJECT_4_6 74
#define OBJECT_4_5 73
#define OBJECT_4_4 72
#define OBJECT_4_3 71
#define OBJECT_4_2 70
#define OBJECT_4_1 69
#define OBJECT_4_0 68
#define EXECUTE_CACHE_4_34 41
#define EXECUTE_CACHE_4_32 43
#define EXECUTE_CACHE_4_31 45
#define EXECUTE_CACHE_4_29 47
#define EXECUTE_CACHE_4_27 49
#define EXECUTE_CACHE_4_19 51
#define EXECUTE_CACHE_4_18 53
#define EXECUTE_CACHE_4_14 55
#define EXECUTE_CACHE_4_12 57
#define EXECUTE_CACHE_4_11 59
#define EXECUTE_CACHE_4_8 61
#define EXECUTE_CACHE_4_6 63
#define FREE_REFERENCE_4_1 66
#define FREE_REFERENCE_4_0 67
#define FREE_REFERENCES_LABEL_4_0 40
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto make_initial_dstate_23;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_16;

    case 2:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_21;

    case 3:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_20;

    case 4:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_17;

    case 5:
      current_block = (Rpc - LABEL_4_16);
      goto lambda_15;

    case 6:
      current_block = (Rpc - LABEL_4_15);
      goto continuation_19;

    case 7:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_18;

    case 8:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_4_20);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_4_21);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_4_22);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_4_23);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_4_24);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_4_25);
      goto loop_11;

    case 15:
      current_block = (Rpc - LABEL_4_28);
      goto continuation_7;

    case 16:
      current_block = (Rpc - LABEL_4_26);
      goto continuation_6;

    case 17:
      current_block = (Rpc - LABEL_4_30);
      goto continuation_8;

    case 18:
      current_block = (Rpc - LABEL_4_33);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_initial_dstate_30)
DEFLABEL (make_initial_dstate_23)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (* (--Rsp)) = Rvl;
  goto lambda_15;

DEFLABEL (label_33)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_4_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_4_15);
  (* (--Rsp)) = Rvl;
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  goto lambda_15;

DEFLABEL (label_34)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_4_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  goto lambda_15;

DEFLABEL (label_35)
  (Wrd9.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4_1]);
  (Rsp [2]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (lambda_31)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_4_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_17);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_47;
  Wrd5 = Wrd9;

DEFLABEL (label_46)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd12.Obj) = (current_block [OBJECT_4_4]);

DEFLABEL (label_40)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 62))
    goto label_39;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd42.Lng))))
    goto label_39;
  ((Wrd40.pObj) [7]) = (Wrd12.Obj);

DEFLABEL (label_38)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_37;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd26.Lng))))
    goto label_37;
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd24.pObj) [11]) = (Wrd20.Obj);

DEFLABEL (label_36)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_4_8]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto loop_11;

DEFLABEL (label_37)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (current_block [OBJECT_4_7]);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 3);

DEFLABEL (label_26)
  goto label_36;

DEFLABEL (label_39)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (current_block [OBJECT_4_5]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_6]), 3);

DEFLABEL (label_27)
  goto label_38;

DEFLABEL (label_41)
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd55.Obj) = ((Wrd52.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_45;
  Wrd51 = Wrd55;

DEFLABEL (label_44)
  if ((Wrd51.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd12.Obj) = (current_block [OBJECT_4_3]);
  goto label_42;

DEFLABEL (label_43)
  (Wrd12.Obj) = (current_block [OBJECT_4_2]);

DEFLABEL (label_42)
  goto label_40;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_21])), (Wrd52.pObj));

DEFLABEL (label_28)
  (Wrd51.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_20])), (Wrd6.pObj));

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_46;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_4_24);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (loop_32)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_4_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_27]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_26);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;

DEFLABEL (label_49)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_31]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_30);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_48;
  (Wrd12.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_32]));

DEFLABEL (label_48)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_34]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_33);
  (Rsp [0]) = Rvl;
  goto loop_11;

DEFLABEL (label_50)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_28]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_4_9]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_29]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_28);
  goto label_49;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define LABEL_5_9 13
#define LABEL_5_10 15
#define ENVIRONMENT_LABEL_5_3 25
#define DEBUGGING_LABEL_5_2 24
#define OBJECT_5_2 23
#define OBJECT_5_1 22
#define OBJECT_5_0 21
#define EXECUTE_CACHE_5_11 17
#define FREE_REFERENCE_5_0 20
#define FREE_REFERENCES_LABEL_5_0 16
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_5_4);
      goto count_subproblems_7;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto do_loop_5;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_5_9);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (count_subproblems_14)
DEFLABEL (count_subproblems_7)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_17;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_17;
  (Wrd6.Obj) = ((Wrd12.pObj) [2]);

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd6.Obj);
  goto do_loop_5;

DEFLABEL (label_17)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_5_1]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_16;

DEFLABEL (do_loop_15)
DEFLABEL (do_loop_5)
  INTERRUPT_CHECK (26, LABEL_5_6);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_19;

DEFLABEL (label_18)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_25;
  Wrd8 = Wrd12;

DEFLABEL (label_24)
  Wrd7 = Wrd8;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_23;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_23;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd40.Lng) > (Wrd41.Lng))
    goto label_18;

DEFLABEL (label_22)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_21;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd32.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_21;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd27.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (Rsp [1]) = Rvl;
  goto do_loop_5;

DEFLABEL (label_21)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_12)
  (Wrd27.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_18;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_7])), (Wrd9.pObj));

DEFLABEL (label_10)
  (Wrd8.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto dstate_subproblem_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstate_subproblem_3)
DEFLABEL (dstate_subproblem_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

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

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 7
#define DEBUGGING_LABEL_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto dstate_previous_subproblems_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstate_previous_subproblems_3)
DEFLABEL (dstate_previous_subproblems_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

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

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 7
#define DEBUGGING_LABEL_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto dstate_subproblem_number_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstate_subproblem_number_3)
DEFLABEL (dstate_subproblem_number_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

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

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 7
#define DEBUGGING_LABEL_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto dstate_number_of_reductions_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstate_number_of_reductions_3)
DEFLABEL (dstate_number_of_reductions_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

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

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto dstate_reduction_number_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstate_reduction_number_3)
DEFLABEL (dstate_reduction_number_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

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
debug_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dstate_history_state_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstate_history_state_3)
DEFLABEL (dstate_history_state_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
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
debug_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dstate_expression_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstate_expression_3)
DEFLABEL (dstate_expression_0)
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
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
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
debug_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dstate_subexpression_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstate_subexpression_3)
DEFLABEL (dstate_subexpression_0)
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
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
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
debug_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dstate_environment_list_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstate_environment_list_3)
DEFLABEL (dstate_environment_list_0)
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
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 7
#define DEBUGGING_LABEL_15_2 6
#define OBJECT_15_1 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto dstate_condition_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstate_condition_3)
DEFLABEL (dstate_condition_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [11]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 8
#define DEBUGGING_LABEL_16_2 7
#define OBJECT_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_16_4);
      goto set_dstate_subproblemB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dstate_subproblemB_3)
DEFLABEL (set_dstate_subproblemB_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_16_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 8
#define DEBUGGING_LABEL_17_2 7
#define OBJECT_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_17_4);
      goto set_dstate_previous_subproblemsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dstate_previous_subproblemsB_3)
DEFLABEL (set_dstate_previous_subproblemsB_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_17_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 8
#define DEBUGGING_LABEL_18_2 7
#define OBJECT_18_2 6
#define OBJECT_18_1 5
#define OBJECT_18_0 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_18_4);
      goto set_dstate_subproblem_numberB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dstate_subproblem_numberB_3)
DEFLABEL (set_dstate_subproblem_numberB_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_18_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 8
#define DEBUGGING_LABEL_19_2 7
#define OBJECT_19_2 6
#define OBJECT_19_1 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_19_4);
      goto set_dstate_number_of_reductionsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dstate_number_of_reductionsB_3)
DEFLABEL (set_dstate_number_of_reductionsB_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_19_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 8
#define DEBUGGING_LABEL_20_2 7
#define OBJECT_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_20_4);
      goto set_dstate_reduction_numberB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dstate_reduction_numberB_3)
DEFLABEL (set_dstate_reduction_numberB_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_20_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 8
#define DEBUGGING_LABEL_21_2 7
#define OBJECT_21_2 6
#define OBJECT_21_1 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_21_4);
      goto set_dstate_history_stateB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dstate_history_stateB_3)
DEFLABEL (set_dstate_history_stateB_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_21_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 8
#define DEBUGGING_LABEL_22_2 7
#define OBJECT_22_2 6
#define OBJECT_22_1 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_22_4);
      goto set_dstate_expressionB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dstate_expressionB_3)
DEFLABEL (set_dstate_expressionB_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_22_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 8
#define DEBUGGING_LABEL_23_2 7
#define OBJECT_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_23_4);
      goto set_dstate_subexpressionB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dstate_subexpressionB_3)
DEFLABEL (set_dstate_subexpressionB_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [9]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_23_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 8
#define DEBUGGING_LABEL_24_2 7
#define OBJECT_24_2 6
#define OBJECT_24_1 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_24_4);
      goto set_dstate_environment_listB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dstate_environment_listB_3)
DEFLABEL (set_dstate_environment_listB_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [10]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_24_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 8
#define DEBUGGING_LABEL_25_2 7
#define OBJECT_25_2 6
#define OBJECT_25_1 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_25_4);
      goto set_dstate_conditionB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dstate_conditionB_3)
DEFLABEL (set_dstate_conditionB_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [11]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_25_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_7 9
#define ENVIRONMENT_LABEL_26_3 17
#define DEBUGGING_LABEL_26_2 16
#define OBJECT_26_3 15
#define OBJECT_26_2 14
#define OBJECT_26_1 13
#define OBJECT_26_0 12
#define FREE_REFERENCE_26_0 11
#define FREE_REFERENCES_LABEL_26_0 10
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto dstateP_4;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstateP_10)
DEFLABEL (dstateP_4)
  INTERRUPT_CHECK (26, LABEL_26_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
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
  Rvl = (current_block [OBJECT_26_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_26_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define ENVIRONMENT_LABEL_27_3 16
#define DEBUGGING_LABEL_27_2 15
#define OBJECT_27_1 14
#define OBJECT_27_0 13
#define EXECUTE_CACHE_27_8 9
#define EXECUTE_CACHE_27_6 11
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto dstate_reduction_2;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstate_reduction_6)
DEFLABEL (dstate_reduction_2)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_27_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 12
#define DEBUGGING_LABEL_28_2 11
#define OBJECT_28_1 10
#define OBJECT_28_0 9
#define EXECUTE_CACHE_28_6 7
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto dstate_reductions_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstate_reductions_5)
DEFLABEL (dstate_reductions_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_28_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_6 5
#define LABEL_29_7 7
#define LABEL_29_8 9
#define LABEL_29_9 11
#define LABEL_29_10 13
#define LABEL_29_11 15
#define LABEL_29_12 17
#define LABEL_29_13 19
#define LABEL_29_14 21
#define LABEL_29_15 23
#define LABEL_29_16 25
#define LABEL_29_17 27
#define LABEL_29_18 29
#define LABEL_29_19 31
#define LABEL_29_20 33
#define LABEL_29_21 35
#define LABEL_29_22 37
#define LABEL_29_23 39
#define LABEL_29_24 41
#define LABEL_29_25 43
#define LABEL_29_26 45
#define LABEL_29_27 47
#define LABEL_29_28 49
#define LABEL_29_29 51
#define LABEL_29_30 53
#define LABEL_29_31 55
#define LABEL_29_5 57
#define LABEL_29_33 59
#define LABEL_29_34 61
#define LABEL_29_35 63
#define ENVIRONMENT_LABEL_29_3 154
#define DEBUGGING_LABEL_29_2 153
#define OBJECT_29_54 152
#define OBJECT_29_53 151
#define OBJECT_29_52 150
#define OBJECT_29_51 149
#define OBJECT_29_50 148
#define OBJECT_29_49 147
#define OBJECT_29_48 146
#define OBJECT_29_47 145
#define OBJECT_29_46 144
#define OBJECT_29_45 143
#define OBJECT_29_44 142
#define OBJECT_29_43 141
#define OBJECT_29_42 140
#define OBJECT_29_41 139
#define OBJECT_29_40 138
#define OBJECT_29_39 137
#define OBJECT_29_38 136
#define OBJECT_29_37 135
#define OBJECT_29_36 134
#define OBJECT_29_35 133
#define OBJECT_29_34 132
#define OBJECT_29_33 131
#define OBJECT_29_32 130
#define OBJECT_29_31 129
#define OBJECT_29_30 128
#define OBJECT_29_29 127
#define OBJECT_29_28 126
#define OBJECT_29_27 125
#define OBJECT_29_26 124
#define OBJECT_29_25 123
#define OBJECT_29_24 122
#define OBJECT_29_23 121
#define OBJECT_29_22 120
#define OBJECT_29_21 119
#define OBJECT_29_20 118
#define OBJECT_29_19 117
#define OBJECT_29_18 116
#define OBJECT_29_17 115
#define OBJECT_29_16 114
#define OBJECT_29_15 113
#define OBJECT_29_14 112
#define OBJECT_29_13 111
#define OBJECT_29_12 110
#define OBJECT_29_11 109
#define OBJECT_29_10 108
#define OBJECT_29_9 107
#define OBJECT_29_8 106
#define OBJECT_29_7 105
#define OBJECT_29_6 104
#define OBJECT_29_5 103
#define OBJECT_29_4 102
#define OBJECT_29_3 101
#define OBJECT_29_2 100
#define OBJECT_29_1 99
#define OBJECT_29_0 98
#define EXECUTE_CACHE_29_32 65
#define FREE_REFERENCE_29_26 68
#define FREE_REFERENCE_29_25 69
#define FREE_REFERENCE_29_24 70
#define FREE_REFERENCE_29_23 71
#define FREE_REFERENCE_29_22 72
#define FREE_REFERENCE_29_21 73
#define FREE_REFERENCE_29_20 74
#define FREE_REFERENCE_29_19 75
#define FREE_REFERENCE_29_18 76
#define FREE_REFERENCE_29_17 77
#define FREE_REFERENCE_29_16 78
#define FREE_REFERENCE_29_15 79
#define FREE_REFERENCE_29_14 80
#define FREE_REFERENCE_29_13 81
#define FREE_REFERENCE_29_12 82
#define FREE_REFERENCE_29_11 83
#define FREE_REFERENCE_29_10 84
#define FREE_REFERENCE_29_9 85
#define FREE_REFERENCE_29_8 86
#define FREE_REFERENCE_29_7 87
#define FREE_REFERENCE_29_6 88
#define FREE_REFERENCE_29_5 89
#define FREE_REFERENCE_29_4 90
#define FREE_REFERENCE_29_3 91
#define FREE_REFERENCE_29_2 92
#define FREE_REFERENCE_29_1 93
#define FREE_REFERENCE_29_0 94
#define FREE_ASSIGNMENT_29_1 96
#define FREE_ASSIGNMENT_29_0 97
#define FREE_REFERENCES_LABEL_29_0 64
#define NUMBER_OF_LINKER_SECTIONS_29_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd606;
  machine_word Wrd605;
  machine_word Wrd604;
  machine_word Wrd602;
  machine_word Wrd598;
  machine_word Wrd600;
  machine_word Wrd601;
  machine_word Wrd595;
  machine_word Wrd597;
  machine_word Wrd590;
  machine_word Wrd592;
  machine_word Wrd594;
  machine_word Wrd593;
  machine_word Wrd584;
  machine_word Wrd589;
  machine_word Wrd588;
  machine_word Wrd585;
  machine_word Wrd582;
  machine_word Wrd581;
  machine_word Wrd579;
  machine_word Wrd575;
  machine_word Wrd577;
  machine_word Wrd578;
  machine_word Wrd572;
  machine_word Wrd574;
  machine_word Wrd567;
  machine_word Wrd569;
  machine_word Wrd571;
  machine_word Wrd570;
  machine_word Wrd561;
  machine_word Wrd566;
  machine_word Wrd565;
  machine_word Wrd562;
  machine_word Wrd559;
  machine_word Wrd558;
  machine_word Wrd556;
  machine_word Wrd552;
  machine_word Wrd554;
  machine_word Wrd555;
  machine_word Wrd549;
  machine_word Wrd551;
  machine_word Wrd544;
  machine_word Wrd546;
  machine_word Wrd548;
  machine_word Wrd547;
  machine_word Wrd538;
  machine_word Wrd543;
  machine_word Wrd542;
  machine_word Wrd539;
  machine_word Wrd536;
  machine_word Wrd535;
  machine_word Wrd533;
  machine_word Wrd529;
  machine_word Wrd531;
  machine_word Wrd532;
  machine_word Wrd526;
  machine_word Wrd528;
  machine_word Wrd521;
  machine_word Wrd523;
  machine_word Wrd525;
  machine_word Wrd524;
  machine_word Wrd515;
  machine_word Wrd520;
  machine_word Wrd519;
  machine_word Wrd516;
  machine_word Wrd513;
  machine_word Wrd512;
  machine_word Wrd510;
  machine_word Wrd506;
  machine_word Wrd508;
  machine_word Wrd509;
  machine_word Wrd503;
  machine_word Wrd505;
  machine_word Wrd498;
  machine_word Wrd500;
  machine_word Wrd502;
  machine_word Wrd501;
  machine_word Wrd492;
  machine_word Wrd497;
  machine_word Wrd496;
  machine_word Wrd493;
  machine_word Wrd490;
  machine_word Wrd489;
  machine_word Wrd487;
  machine_word Wrd483;
  machine_word Wrd485;
  machine_word Wrd486;
  machine_word Wrd480;
  machine_word Wrd482;
  machine_word Wrd475;
  machine_word Wrd477;
  machine_word Wrd479;
  machine_word Wrd478;
  machine_word Wrd469;
  machine_word Wrd474;
  machine_word Wrd473;
  machine_word Wrd470;
  machine_word Wrd467;
  machine_word Wrd466;
  machine_word Wrd464;
  machine_word Wrd460;
  machine_word Wrd462;
  machine_word Wrd463;
  machine_word Wrd457;
  machine_word Wrd459;
  machine_word Wrd452;
  machine_word Wrd454;
  machine_word Wrd456;
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
  machine_word Wrd434;
  machine_word Wrd436;
  machine_word Wrd429;
  machine_word Wrd431;
  machine_word Wrd433;
  machine_word Wrd432;
  machine_word Wrd423;
  machine_word Wrd428;
  machine_word Wrd427;
  machine_word Wrd424;
  machine_word Wrd421;
  machine_word Wrd420;
  machine_word Wrd418;
  machine_word Wrd414;
  machine_word Wrd416;
  machine_word Wrd417;
  machine_word Wrd411;
  machine_word Wrd413;
  machine_word Wrd406;
  machine_word Wrd408;
  machine_word Wrd410;
  machine_word Wrd409;
  machine_word Wrd400;
  machine_word Wrd405;
  machine_word Wrd404;
  machine_word Wrd401;
  machine_word Wrd398;
  machine_word Wrd397;
  machine_word Wrd395;
  machine_word Wrd391;
  machine_word Wrd393;
  machine_word Wrd394;
  machine_word Wrd388;
  machine_word Wrd390;
  machine_word Wrd383;
  machine_word Wrd385;
  machine_word Wrd387;
  machine_word Wrd386;
  machine_word Wrd377;
  machine_word Wrd382;
  machine_word Wrd381;
  machine_word Wrd378;
  machine_word Wrd375;
  machine_word Wrd374;
  machine_word Wrd372;
  machine_word Wrd368;
  machine_word Wrd370;
  machine_word Wrd371;
  machine_word Wrd365;
  machine_word Wrd367;
  machine_word Wrd360;
  machine_word Wrd362;
  machine_word Wrd364;
  machine_word Wrd363;
  machine_word Wrd354;
  machine_word Wrd359;
  machine_word Wrd358;
  machine_word Wrd355;
  machine_word Wrd352;
  machine_word Wrd351;
  machine_word Wrd349;
  machine_word Wrd345;
  machine_word Wrd347;
  machine_word Wrd348;
  machine_word Wrd342;
  machine_word Wrd344;
  machine_word Wrd337;
  machine_word Wrd339;
  machine_word Wrd341;
  machine_word Wrd340;
  machine_word Wrd331;
  machine_word Wrd336;
  machine_word Wrd335;
  machine_word Wrd332;
  machine_word Wrd329;
  machine_word Wrd328;
  machine_word Wrd326;
  machine_word Wrd322;
  machine_word Wrd324;
  machine_word Wrd325;
  machine_word Wrd319;
  machine_word Wrd321;
  machine_word Wrd314;
  machine_word Wrd316;
  machine_word Wrd318;
  machine_word Wrd317;
  machine_word Wrd308;
  machine_word Wrd313;
  machine_word Wrd312;
  machine_word Wrd309;
  machine_word Wrd306;
  machine_word Wrd305;
  machine_word Wrd303;
  machine_word Wrd299;
  machine_word Wrd301;
  machine_word Wrd302;
  machine_word Wrd296;
  machine_word Wrd298;
  machine_word Wrd291;
  machine_word Wrd293;
  machine_word Wrd295;
  machine_word Wrd294;
  machine_word Wrd285;
  machine_word Wrd290;
  machine_word Wrd289;
  machine_word Wrd286;
  machine_word Wrd283;
  machine_word Wrd282;
  machine_word Wrd280;
  machine_word Wrd276;
  machine_word Wrd278;
  machine_word Wrd279;
  machine_word Wrd273;
  machine_word Wrd275;
  machine_word Wrd268;
  machine_word Wrd270;
  machine_word Wrd272;
  machine_word Wrd271;
  machine_word Wrd262;
  machine_word Wrd267;
  machine_word Wrd266;
  machine_word Wrd263;
  machine_word Wrd260;
  machine_word Wrd259;
  machine_word Wrd257;
  machine_word Wrd253;
  machine_word Wrd255;
  machine_word Wrd256;
  machine_word Wrd250;
  machine_word Wrd252;
  machine_word Wrd245;
  machine_word Wrd247;
  machine_word Wrd249;
  machine_word Wrd248;
  machine_word Wrd239;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd240;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd234;
  machine_word Wrd230;
  machine_word Wrd232;
  machine_word Wrd233;
  machine_word Wrd227;
  machine_word Wrd229;
  machine_word Wrd222;
  machine_word Wrd224;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd216;
  machine_word Wrd221;
  machine_word Wrd220;
  machine_word Wrd217;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd211;
  machine_word Wrd207;
  machine_word Wrd209;
  machine_word Wrd210;
  machine_word Wrd204;
  machine_word Wrd206;
  machine_word Wrd199;
  machine_word Wrd201;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd193;
  machine_word Wrd198;
  machine_word Wrd197;
  machine_word Wrd194;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd188;
  machine_word Wrd184;
  machine_word Wrd186;
  machine_word Wrd187;
  machine_word Wrd181;
  machine_word Wrd183;
  machine_word Wrd176;
  machine_word Wrd178;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd170;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd165;
  machine_word Wrd161;
  machine_word Wrd163;
  machine_word Wrd164;
  machine_word Wrd158;
  machine_word Wrd160;
  machine_word Wrd153;
  machine_word Wrd155;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd147;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd148;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd142;
  machine_word Wrd138;
  machine_word Wrd140;
  machine_word Wrd141;
  machine_word Wrd135;
  machine_word Wrd137;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd124;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd119;
  machine_word Wrd115;
  machine_word Wrd117;
  machine_word Wrd118;
  machine_word Wrd112;
  machine_word Wrd114;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd101;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd95;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd78;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_29_4);
      goto initialize_packageB_105;

    case 1:
      current_block = (Rpc - LABEL_29_6);
      goto label_107;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto label_108;

    case 3:
      current_block = (Rpc - LABEL_29_8);
      goto label_109;

    case 4:
      current_block = (Rpc - LABEL_29_9);
      goto label_110;

    case 5:
      current_block = (Rpc - LABEL_29_10);
      goto label_111;

    case 6:
      current_block = (Rpc - LABEL_29_11);
      goto label_112;

    case 7:
      current_block = (Rpc - LABEL_29_12);
      goto label_113;

    case 8:
      current_block = (Rpc - LABEL_29_13);
      goto label_114;

    case 9:
      current_block = (Rpc - LABEL_29_14);
      goto label_115;

    case 10:
      current_block = (Rpc - LABEL_29_15);
      goto label_116;

    case 11:
      current_block = (Rpc - LABEL_29_16);
      goto label_117;

    case 12:
      current_block = (Rpc - LABEL_29_17);
      goto label_118;

    case 13:
      current_block = (Rpc - LABEL_29_18);
      goto label_119;

    case 14:
      current_block = (Rpc - LABEL_29_19);
      goto label_120;

    case 15:
      current_block = (Rpc - LABEL_29_20);
      goto label_121;

    case 16:
      current_block = (Rpc - LABEL_29_21);
      goto label_122;

    case 17:
      current_block = (Rpc - LABEL_29_22);
      goto label_123;

    case 18:
      current_block = (Rpc - LABEL_29_23);
      goto label_124;

    case 19:
      current_block = (Rpc - LABEL_29_24);
      goto label_125;

    case 20:
      current_block = (Rpc - LABEL_29_25);
      goto label_126;

    case 21:
      current_block = (Rpc - LABEL_29_26);
      goto label_127;

    case 22:
      current_block = (Rpc - LABEL_29_27);
      goto label_128;

    case 23:
      current_block = (Rpc - LABEL_29_28);
      goto label_129;

    case 24:
      current_block = (Rpc - LABEL_29_29);
      goto label_130;

    case 25:
      current_block = (Rpc - LABEL_29_30);
      goto label_131;

    case 26:
      current_block = (Rpc - LABEL_29_31);
      goto label_132;

    case 27:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_104;

    case 28:
      current_block = (Rpc - LABEL_29_33);
      goto label_133;

    case 29:
      current_block = (Rpc - LABEL_29_34);
      goto label_134;

    case 30:
      current_block = (Rpc - LABEL_29_35);
      goto label_135;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_137)
DEFLABEL (initialize_packageB_105)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_197;
  Wrd9 = Wrd13;

DEFLABEL (label_196)
  (Wrd18.Obj) = (current_block [OBJECT_29_0]);
  (Wrd19.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_29_2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_195;
  Wrd32 = Wrd36;

DEFLABEL (label_194)
  (Wrd41.Obj) = (current_block [OBJECT_29_3]);
  (Wrd42.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd49.Obj) = (current_block [OBJECT_29_4]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Wrd50.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_2]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_193;
  Wrd55 = Wrd59;

DEFLABEL (label_192)
  (Wrd64.Obj) = (current_block [OBJECT_29_5]);
  (Wrd65.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Wrd72.Obj) = (current_block [OBJECT_29_6]);
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (Wrd73.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd75.pObj) = (& (Rhp [-2]));
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd75.pObj)));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_3]));
  (Wrd82.Obj) = ((Wrd79.pObj) [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if ((Wrd83.uLng) == 50)
    goto label_191;
  Wrd78 = Wrd82;

DEFLABEL (label_190)
  (Wrd87.Obj) = (current_block [OBJECT_29_7]);
  (Wrd88.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd88.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd91.pObj) = (& (Rhp [-2]));
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd91.pObj)));
  (Wrd95.Obj) = (current_block [OBJECT_29_8]);
  (* (Rhp++)) = (Wrd95.Obj);
  (* (Rhp++)) = (Wrd89.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  (Wrd96.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd92.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd102.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_4]));
  (Wrd105.Obj) = ((Wrd102.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_189;
  Wrd101 = Wrd105;

DEFLABEL (label_188)
  (Wrd110.Obj) = (current_block [OBJECT_29_9]);
  (Wrd111.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd110.Obj);
  (* (Rhp++)) = (Wrd111.Obj);
  (Wrd109.pObj) = (& (Rhp [-2]));
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd109.pObj)));
  (* (Rhp++)) = (Wrd101.Obj);
  (* (Rhp++)) = (Wrd107.Obj);
  (Wrd114.pObj) = (& (Rhp [-2]));
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd114.pObj)));
  (Wrd118.Obj) = (current_block [OBJECT_29_10]);
  (* (Rhp++)) = (Wrd118.Obj);
  (* (Rhp++)) = (Wrd112.Obj);
  (Wrd117.pObj) = (& (Rhp [-2]));
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd117.pObj)));
  (Wrd119.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd115.Obj);
  (* (Rhp++)) = (Wrd119.Obj);
  (Wrd121.pObj) = (& (Rhp [-2]));
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd121.pObj)));
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd125.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_5]));
  (Wrd128.Obj) = ((Wrd125.pObj) [0]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if ((Wrd129.uLng) == 50)
    goto label_187;
  Wrd124 = Wrd128;

DEFLABEL (label_186)
  (Wrd133.Obj) = (current_block [OBJECT_29_11]);
  (Wrd134.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd133.Obj);
  (* (Rhp++)) = (Wrd134.Obj);
  (Wrd132.pObj) = (& (Rhp [-2]));
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd132.pObj)));
  (* (Rhp++)) = (Wrd124.Obj);
  (* (Rhp++)) = (Wrd130.Obj);
  (Wrd137.pObj) = (& (Rhp [-2]));
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd137.pObj)));
  (Wrd141.Obj) = (current_block [OBJECT_29_12]);
  (* (Rhp++)) = (Wrd141.Obj);
  (* (Rhp++)) = (Wrd135.Obj);
  (Wrd140.pObj) = (& (Rhp [-2]));
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd140.pObj)));
  (Wrd142.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd138.Obj);
  (* (Rhp++)) = (Wrd142.Obj);
  (Wrd144.pObj) = (& (Rhp [-2]));
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd144.pObj)));
  (* (--Rsp)) = (Wrd145.Obj);
  (Wrd148.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_6]));
  (Wrd151.Obj) = ((Wrd148.pObj) [0]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if ((Wrd152.uLng) == 50)
    goto label_185;
  Wrd147 = Wrd151;

DEFLABEL (label_184)
  (Wrd156.Obj) = (current_block [OBJECT_29_13]);
  (Wrd157.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd156.Obj);
  (* (Rhp++)) = (Wrd157.Obj);
  (Wrd155.pObj) = (& (Rhp [-2]));
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd155.pObj)));
  (* (Rhp++)) = (Wrd147.Obj);
  (* (Rhp++)) = (Wrd153.Obj);
  (Wrd160.pObj) = (& (Rhp [-2]));
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd160.pObj)));
  (Wrd164.Obj) = (current_block [OBJECT_29_14]);
  (* (Rhp++)) = (Wrd164.Obj);
  (* (Rhp++)) = (Wrd158.Obj);
  (Wrd163.pObj) = (& (Rhp [-2]));
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd163.pObj)));
  (Wrd165.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd161.Obj);
  (* (Rhp++)) = (Wrd165.Obj);
  (Wrd167.pObj) = (& (Rhp [-2]));
  (Wrd168.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd167.pObj)));
  (* (--Rsp)) = (Wrd168.Obj);
  (Wrd171.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_7]));
  (Wrd174.Obj) = ((Wrd171.pObj) [0]);
  (Wrd175.uLng) = (OBJECT_TYPE (Wrd174.Obj));
  if ((Wrd175.uLng) == 50)
    goto label_183;
  Wrd170 = Wrd174;

DEFLABEL (label_182)
  (Wrd179.Obj) = (current_block [OBJECT_29_15]);
  (Wrd180.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd179.Obj);
  (* (Rhp++)) = (Wrd180.Obj);
  (Wrd178.pObj) = (& (Rhp [-2]));
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd178.pObj)));
  (* (Rhp++)) = (Wrd170.Obj);
  (* (Rhp++)) = (Wrd176.Obj);
  (Wrd183.pObj) = (& (Rhp [-2]));
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd183.pObj)));
  (Wrd187.Obj) = (current_block [OBJECT_29_16]);
  (* (Rhp++)) = (Wrd187.Obj);
  (* (Rhp++)) = (Wrd181.Obj);
  (Wrd186.pObj) = (& (Rhp [-2]));
  (Wrd184.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd186.pObj)));
  (Wrd188.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd184.Obj);
  (* (Rhp++)) = (Wrd188.Obj);
  (Wrd190.pObj) = (& (Rhp [-2]));
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd190.pObj)));
  (* (--Rsp)) = (Wrd191.Obj);
  (Wrd194.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_8]));
  (Wrd197.Obj) = ((Wrd194.pObj) [0]);
  (Wrd198.uLng) = (OBJECT_TYPE (Wrd197.Obj));
  if ((Wrd198.uLng) == 50)
    goto label_181;
  Wrd193 = Wrd197;

DEFLABEL (label_180)
  (Wrd202.Obj) = (current_block [OBJECT_29_17]);
  (Wrd203.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd202.Obj);
  (* (Rhp++)) = (Wrd203.Obj);
  (Wrd201.pObj) = (& (Rhp [-2]));
  (Wrd199.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd201.pObj)));
  (* (Rhp++)) = (Wrd193.Obj);
  (* (Rhp++)) = (Wrd199.Obj);
  (Wrd206.pObj) = (& (Rhp [-2]));
  (Wrd204.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd206.pObj)));
  (Wrd210.Obj) = (current_block [OBJECT_29_18]);
  (* (Rhp++)) = (Wrd210.Obj);
  (* (Rhp++)) = (Wrd204.Obj);
  (Wrd209.pObj) = (& (Rhp [-2]));
  (Wrd207.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd209.pObj)));
  (Wrd211.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd207.Obj);
  (* (Rhp++)) = (Wrd211.Obj);
  (Wrd213.pObj) = (& (Rhp [-2]));
  (Wrd214.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd213.pObj)));
  (* (--Rsp)) = (Wrd214.Obj);
  (Wrd217.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_9]));
  (Wrd220.Obj) = ((Wrd217.pObj) [0]);
  (Wrd221.uLng) = (OBJECT_TYPE (Wrd220.Obj));
  if ((Wrd221.uLng) == 50)
    goto label_179;
  Wrd216 = Wrd220;

DEFLABEL (label_178)
  (Wrd225.Obj) = (current_block [OBJECT_29_19]);
  (Wrd226.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd225.Obj);
  (* (Rhp++)) = (Wrd226.Obj);
  (Wrd224.pObj) = (& (Rhp [-2]));
  (Wrd222.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd224.pObj)));
  (* (Rhp++)) = (Wrd216.Obj);
  (* (Rhp++)) = (Wrd222.Obj);
  (Wrd229.pObj) = (& (Rhp [-2]));
  (Wrd227.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd229.pObj)));
  (Wrd233.Obj) = (current_block [OBJECT_29_20]);
  (* (Rhp++)) = (Wrd233.Obj);
  (* (Rhp++)) = (Wrd227.Obj);
  (Wrd232.pObj) = (& (Rhp [-2]));
  (Wrd230.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd232.pObj)));
  (Wrd234.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd230.Obj);
  (* (Rhp++)) = (Wrd234.Obj);
  (Wrd236.pObj) = (& (Rhp [-2]));
  (Wrd237.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd236.pObj)));
  (* (--Rsp)) = (Wrd237.Obj);
  (Wrd240.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_10]));
  (Wrd243.Obj) = ((Wrd240.pObj) [0]);
  (Wrd244.uLng) = (OBJECT_TYPE (Wrd243.Obj));
  if ((Wrd244.uLng) == 50)
    goto label_177;
  Wrd239 = Wrd243;

DEFLABEL (label_176)
  (Wrd248.Obj) = (current_block [OBJECT_29_21]);
  (Wrd249.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd248.Obj);
  (* (Rhp++)) = (Wrd249.Obj);
  (Wrd247.pObj) = (& (Rhp [-2]));
  (Wrd245.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd247.pObj)));
  (* (Rhp++)) = (Wrd239.Obj);
  (* (Rhp++)) = (Wrd245.Obj);
  (Wrd252.pObj) = (& (Rhp [-2]));
  (Wrd250.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd252.pObj)));
  (Wrd256.Obj) = (current_block [OBJECT_29_22]);
  (* (Rhp++)) = (Wrd256.Obj);
  (* (Rhp++)) = (Wrd250.Obj);
  (Wrd255.pObj) = (& (Rhp [-2]));
  (Wrd253.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd255.pObj)));
  (Wrd257.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd253.Obj);
  (* (Rhp++)) = (Wrd257.Obj);
  (Wrd259.pObj) = (& (Rhp [-2]));
  (Wrd260.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd259.pObj)));
  (* (--Rsp)) = (Wrd260.Obj);
  (Wrd263.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_11]));
  (Wrd266.Obj) = ((Wrd263.pObj) [0]);
  (Wrd267.uLng) = (OBJECT_TYPE (Wrd266.Obj));
  if ((Wrd267.uLng) == 50)
    goto label_175;
  Wrd262 = Wrd266;

DEFLABEL (label_174)
  (Wrd271.Obj) = (current_block [OBJECT_29_23]);
  (Wrd272.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd271.Obj);
  (* (Rhp++)) = (Wrd272.Obj);
  (Wrd270.pObj) = (& (Rhp [-2]));
  (Wrd268.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd270.pObj)));
  (* (Rhp++)) = (Wrd262.Obj);
  (* (Rhp++)) = (Wrd268.Obj);
  (Wrd275.pObj) = (& (Rhp [-2]));
  (Wrd273.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd275.pObj)));
  (Wrd279.Obj) = (current_block [OBJECT_29_24]);
  (* (Rhp++)) = (Wrd279.Obj);
  (* (Rhp++)) = (Wrd273.Obj);
  (Wrd278.pObj) = (& (Rhp [-2]));
  (Wrd276.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd278.pObj)));
  (Wrd280.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd276.Obj);
  (* (Rhp++)) = (Wrd280.Obj);
  (Wrd282.pObj) = (& (Rhp [-2]));
  (Wrd283.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd282.pObj)));
  (* (--Rsp)) = (Wrd283.Obj);
  (Wrd286.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_12]));
  (Wrd289.Obj) = ((Wrd286.pObj) [0]);
  (Wrd290.uLng) = (OBJECT_TYPE (Wrd289.Obj));
  if ((Wrd290.uLng) == 50)
    goto label_173;
  Wrd285 = Wrd289;

DEFLABEL (label_172)
  (Wrd294.Obj) = (current_block [OBJECT_29_25]);
  (Wrd295.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd294.Obj);
  (* (Rhp++)) = (Wrd295.Obj);
  (Wrd293.pObj) = (& (Rhp [-2]));
  (Wrd291.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd293.pObj)));
  (* (Rhp++)) = (Wrd285.Obj);
  (* (Rhp++)) = (Wrd291.Obj);
  (Wrd298.pObj) = (& (Rhp [-2]));
  (Wrd296.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd298.pObj)));
  (Wrd302.Obj) = (current_block [OBJECT_29_26]);
  (* (Rhp++)) = (Wrd302.Obj);
  (* (Rhp++)) = (Wrd296.Obj);
  (Wrd301.pObj) = (& (Rhp [-2]));
  (Wrd299.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd301.pObj)));
  (Wrd303.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd299.Obj);
  (* (Rhp++)) = (Wrd303.Obj);
  (Wrd305.pObj) = (& (Rhp [-2]));
  (Wrd306.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd305.pObj)));
  (* (--Rsp)) = (Wrd306.Obj);
  (Wrd309.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_13]));
  (Wrd312.Obj) = ((Wrd309.pObj) [0]);
  (Wrd313.uLng) = (OBJECT_TYPE (Wrd312.Obj));
  if ((Wrd313.uLng) == 50)
    goto label_171;
  Wrd308 = Wrd312;

DEFLABEL (label_170)
  (Wrd317.Obj) = (current_block [OBJECT_29_27]);
  (Wrd318.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd317.Obj);
  (* (Rhp++)) = (Wrd318.Obj);
  (Wrd316.pObj) = (& (Rhp [-2]));
  (Wrd314.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd316.pObj)));
  (* (Rhp++)) = (Wrd308.Obj);
  (* (Rhp++)) = (Wrd314.Obj);
  (Wrd321.pObj) = (& (Rhp [-2]));
  (Wrd319.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd321.pObj)));
  (Wrd325.Obj) = (current_block [OBJECT_29_28]);
  (* (Rhp++)) = (Wrd325.Obj);
  (* (Rhp++)) = (Wrd319.Obj);
  (Wrd324.pObj) = (& (Rhp [-2]));
  (Wrd322.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd324.pObj)));
  (Wrd326.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd322.Obj);
  (* (Rhp++)) = (Wrd326.Obj);
  (Wrd328.pObj) = (& (Rhp [-2]));
  (Wrd329.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd328.pObj)));
  (* (--Rsp)) = (Wrd329.Obj);
  (Wrd332.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_14]));
  (Wrd335.Obj) = ((Wrd332.pObj) [0]);
  (Wrd336.uLng) = (OBJECT_TYPE (Wrd335.Obj));
  if ((Wrd336.uLng) == 50)
    goto label_169;
  Wrd331 = Wrd335;

DEFLABEL (label_168)
  (Wrd340.Obj) = (current_block [OBJECT_29_29]);
  (Wrd341.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd340.Obj);
  (* (Rhp++)) = (Wrd341.Obj);
  (Wrd339.pObj) = (& (Rhp [-2]));
  (Wrd337.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd339.pObj)));
  (* (Rhp++)) = (Wrd331.Obj);
  (* (Rhp++)) = (Wrd337.Obj);
  (Wrd344.pObj) = (& (Rhp [-2]));
  (Wrd342.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd344.pObj)));
  (Wrd348.Obj) = (current_block [OBJECT_29_30]);
  (* (Rhp++)) = (Wrd348.Obj);
  (* (Rhp++)) = (Wrd342.Obj);
  (Wrd347.pObj) = (& (Rhp [-2]));
  (Wrd345.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd347.pObj)));
  (Wrd349.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd345.Obj);
  (* (Rhp++)) = (Wrd349.Obj);
  (Wrd351.pObj) = (& (Rhp [-2]));
  (Wrd352.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd351.pObj)));
  (* (--Rsp)) = (Wrd352.Obj);
  (Wrd355.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_15]));
  (Wrd358.Obj) = ((Wrd355.pObj) [0]);
  (Wrd359.uLng) = (OBJECT_TYPE (Wrd358.Obj));
  if ((Wrd359.uLng) == 50)
    goto label_167;
  Wrd354 = Wrd358;

DEFLABEL (label_166)
  (Wrd363.Obj) = (current_block [OBJECT_29_31]);
  (Wrd364.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd363.Obj);
  (* (Rhp++)) = (Wrd364.Obj);
  (Wrd362.pObj) = (& (Rhp [-2]));
  (Wrd360.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd362.pObj)));
  (* (Rhp++)) = (Wrd354.Obj);
  (* (Rhp++)) = (Wrd360.Obj);
  (Wrd367.pObj) = (& (Rhp [-2]));
  (Wrd365.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd367.pObj)));
  (Wrd371.Obj) = (current_block [OBJECT_29_32]);
  (* (Rhp++)) = (Wrd371.Obj);
  (* (Rhp++)) = (Wrd365.Obj);
  (Wrd370.pObj) = (& (Rhp [-2]));
  (Wrd368.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd370.pObj)));
  (Wrd372.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd368.Obj);
  (* (Rhp++)) = (Wrd372.Obj);
  (Wrd374.pObj) = (& (Rhp [-2]));
  (Wrd375.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd374.pObj)));
  (* (--Rsp)) = (Wrd375.Obj);
  (Wrd378.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_16]));
  (Wrd381.Obj) = ((Wrd378.pObj) [0]);
  (Wrd382.uLng) = (OBJECT_TYPE (Wrd381.Obj));
  if ((Wrd382.uLng) == 50)
    goto label_165;
  Wrd377 = Wrd381;

DEFLABEL (label_164)
  (Wrd386.Obj) = (current_block [OBJECT_29_33]);
  (Wrd387.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd386.Obj);
  (* (Rhp++)) = (Wrd387.Obj);
  (Wrd385.pObj) = (& (Rhp [-2]));
  (Wrd383.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd385.pObj)));
  (* (Rhp++)) = (Wrd377.Obj);
  (* (Rhp++)) = (Wrd383.Obj);
  (Wrd390.pObj) = (& (Rhp [-2]));
  (Wrd388.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd390.pObj)));
  (Wrd394.Obj) = (current_block [OBJECT_29_34]);
  (* (Rhp++)) = (Wrd394.Obj);
  (* (Rhp++)) = (Wrd388.Obj);
  (Wrd393.pObj) = (& (Rhp [-2]));
  (Wrd391.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd393.pObj)));
  (Wrd395.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd391.Obj);
  (* (Rhp++)) = (Wrd395.Obj);
  (Wrd397.pObj) = (& (Rhp [-2]));
  (Wrd398.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd397.pObj)));
  (* (--Rsp)) = (Wrd398.Obj);
  (Wrd401.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_17]));
  (Wrd404.Obj) = ((Wrd401.pObj) [0]);
  (Wrd405.uLng) = (OBJECT_TYPE (Wrd404.Obj));
  if ((Wrd405.uLng) == 50)
    goto label_163;
  Wrd400 = Wrd404;

DEFLABEL (label_162)
  (Wrd409.Obj) = (current_block [OBJECT_29_35]);
  (Wrd410.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd409.Obj);
  (* (Rhp++)) = (Wrd410.Obj);
  (Wrd408.pObj) = (& (Rhp [-2]));
  (Wrd406.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd408.pObj)));
  (* (Rhp++)) = (Wrd400.Obj);
  (* (Rhp++)) = (Wrd406.Obj);
  (Wrd413.pObj) = (& (Rhp [-2]));
  (Wrd411.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd413.pObj)));
  (Wrd417.Obj) = (current_block [OBJECT_29_36]);
  (* (Rhp++)) = (Wrd417.Obj);
  (* (Rhp++)) = (Wrd411.Obj);
  (Wrd416.pObj) = (& (Rhp [-2]));
  (Wrd414.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd416.pObj)));
  (Wrd418.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd414.Obj);
  (* (Rhp++)) = (Wrd418.Obj);
  (Wrd420.pObj) = (& (Rhp [-2]));
  (Wrd421.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd420.pObj)));
  (* (--Rsp)) = (Wrd421.Obj);
  (Wrd424.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_18]));
  (Wrd427.Obj) = ((Wrd424.pObj) [0]);
  (Wrd428.uLng) = (OBJECT_TYPE (Wrd427.Obj));
  if ((Wrd428.uLng) == 50)
    goto label_161;
  Wrd423 = Wrd427;

DEFLABEL (label_160)
  (Wrd432.Obj) = (current_block [OBJECT_29_37]);
  (Wrd433.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd432.Obj);
  (* (Rhp++)) = (Wrd433.Obj);
  (Wrd431.pObj) = (& (Rhp [-2]));
  (Wrd429.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd431.pObj)));
  (* (Rhp++)) = (Wrd423.Obj);
  (* (Rhp++)) = (Wrd429.Obj);
  (Wrd436.pObj) = (& (Rhp [-2]));
  (Wrd434.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd436.pObj)));
  (Wrd440.Obj) = (current_block [OBJECT_29_38]);
  (* (Rhp++)) = (Wrd440.Obj);
  (* (Rhp++)) = (Wrd434.Obj);
  (Wrd439.pObj) = (& (Rhp [-2]));
  (Wrd437.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd439.pObj)));
  (Wrd441.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd437.Obj);
  (* (Rhp++)) = (Wrd441.Obj);
  (Wrd443.pObj) = (& (Rhp [-2]));
  (Wrd444.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd443.pObj)));
  (* (--Rsp)) = (Wrd444.Obj);
  (Wrd447.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_19]));
  (Wrd450.Obj) = ((Wrd447.pObj) [0]);
  (Wrd451.uLng) = (OBJECT_TYPE (Wrd450.Obj));
  if ((Wrd451.uLng) == 50)
    goto label_159;
  Wrd446 = Wrd450;

DEFLABEL (label_158)
  (Wrd455.Obj) = (current_block [OBJECT_29_39]);
  (Wrd456.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd455.Obj);
  (* (Rhp++)) = (Wrd456.Obj);
  (Wrd454.pObj) = (& (Rhp [-2]));
  (Wrd452.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd454.pObj)));
  (* (Rhp++)) = (Wrd446.Obj);
  (* (Rhp++)) = (Wrd452.Obj);
  (Wrd459.pObj) = (& (Rhp [-2]));
  (Wrd457.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd459.pObj)));
  (Wrd463.Obj) = (current_block [OBJECT_29_40]);
  (* (Rhp++)) = (Wrd463.Obj);
  (* (Rhp++)) = (Wrd457.Obj);
  (Wrd462.pObj) = (& (Rhp [-2]));
  (Wrd460.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd462.pObj)));
  (Wrd464.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd460.Obj);
  (* (Rhp++)) = (Wrd464.Obj);
  (Wrd466.pObj) = (& (Rhp [-2]));
  (Wrd467.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd466.pObj)));
  (* (--Rsp)) = (Wrd467.Obj);
  (Wrd470.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_20]));
  (Wrd473.Obj) = ((Wrd470.pObj) [0]);
  (Wrd474.uLng) = (OBJECT_TYPE (Wrd473.Obj));
  if ((Wrd474.uLng) == 50)
    goto label_157;
  Wrd469 = Wrd473;

DEFLABEL (label_156)
  (Wrd478.Obj) = (current_block [OBJECT_29_41]);
  (Wrd479.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd478.Obj);
  (* (Rhp++)) = (Wrd479.Obj);
  (Wrd477.pObj) = (& (Rhp [-2]));
  (Wrd475.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd477.pObj)));
  (* (Rhp++)) = (Wrd469.Obj);
  (* (Rhp++)) = (Wrd475.Obj);
  (Wrd482.pObj) = (& (Rhp [-2]));
  (Wrd480.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd482.pObj)));
  (Wrd486.Obj) = (current_block [OBJECT_29_42]);
  (* (Rhp++)) = (Wrd486.Obj);
  (* (Rhp++)) = (Wrd480.Obj);
  (Wrd485.pObj) = (& (Rhp [-2]));
  (Wrd483.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd485.pObj)));
  (Wrd487.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd483.Obj);
  (* (Rhp++)) = (Wrd487.Obj);
  (Wrd489.pObj) = (& (Rhp [-2]));
  (Wrd490.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd489.pObj)));
  (* (--Rsp)) = (Wrd490.Obj);
  (Wrd493.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_21]));
  (Wrd496.Obj) = ((Wrd493.pObj) [0]);
  (Wrd497.uLng) = (OBJECT_TYPE (Wrd496.Obj));
  if ((Wrd497.uLng) == 50)
    goto label_155;
  Wrd492 = Wrd496;

DEFLABEL (label_154)
  (Wrd501.Obj) = (current_block [OBJECT_29_43]);
  (Wrd502.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd501.Obj);
  (* (Rhp++)) = (Wrd502.Obj);
  (Wrd500.pObj) = (& (Rhp [-2]));
  (Wrd498.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd500.pObj)));
  (* (Rhp++)) = (Wrd492.Obj);
  (* (Rhp++)) = (Wrd498.Obj);
  (Wrd505.pObj) = (& (Rhp [-2]));
  (Wrd503.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd505.pObj)));
  (Wrd509.Obj) = (current_block [OBJECT_29_44]);
  (* (Rhp++)) = (Wrd509.Obj);
  (* (Rhp++)) = (Wrd503.Obj);
  (Wrd508.pObj) = (& (Rhp [-2]));
  (Wrd506.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd508.pObj)));
  (Wrd510.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd506.Obj);
  (* (Rhp++)) = (Wrd510.Obj);
  (Wrd512.pObj) = (& (Rhp [-2]));
  (Wrd513.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd512.pObj)));
  (* (--Rsp)) = (Wrd513.Obj);
  (Wrd516.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_22]));
  (Wrd519.Obj) = ((Wrd516.pObj) [0]);
  (Wrd520.uLng) = (OBJECT_TYPE (Wrd519.Obj));
  if ((Wrd520.uLng) == 50)
    goto label_153;
  Wrd515 = Wrd519;

DEFLABEL (label_152)
  (Wrd524.Obj) = (current_block [OBJECT_29_45]);
  (Wrd525.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd524.Obj);
  (* (Rhp++)) = (Wrd525.Obj);
  (Wrd523.pObj) = (& (Rhp [-2]));
  (Wrd521.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd523.pObj)));
  (* (Rhp++)) = (Wrd515.Obj);
  (* (Rhp++)) = (Wrd521.Obj);
  (Wrd528.pObj) = (& (Rhp [-2]));
  (Wrd526.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd528.pObj)));
  (Wrd532.Obj) = (current_block [OBJECT_29_46]);
  (* (Rhp++)) = (Wrd532.Obj);
  (* (Rhp++)) = (Wrd526.Obj);
  (Wrd531.pObj) = (& (Rhp [-2]));
  (Wrd529.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd531.pObj)));
  (Wrd533.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd529.Obj);
  (* (Rhp++)) = (Wrd533.Obj);
  (Wrd535.pObj) = (& (Rhp [-2]));
  (Wrd536.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd535.pObj)));
  (* (--Rsp)) = (Wrd536.Obj);
  (Wrd539.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_23]));
  (Wrd542.Obj) = ((Wrd539.pObj) [0]);
  (Wrd543.uLng) = (OBJECT_TYPE (Wrd542.Obj));
  if ((Wrd543.uLng) == 50)
    goto label_151;
  Wrd538 = Wrd542;

DEFLABEL (label_150)
  (Wrd547.Obj) = (current_block [OBJECT_29_47]);
  (Wrd548.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd547.Obj);
  (* (Rhp++)) = (Wrd548.Obj);
  (Wrd546.pObj) = (& (Rhp [-2]));
  (Wrd544.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd546.pObj)));
  (* (Rhp++)) = (Wrd538.Obj);
  (* (Rhp++)) = (Wrd544.Obj);
  (Wrd551.pObj) = (& (Rhp [-2]));
  (Wrd549.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd551.pObj)));
  (Wrd555.Obj) = (current_block [OBJECT_29_48]);
  (* (Rhp++)) = (Wrd555.Obj);
  (* (Rhp++)) = (Wrd549.Obj);
  (Wrd554.pObj) = (& (Rhp [-2]));
  (Wrd552.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd554.pObj)));
  (Wrd556.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd552.Obj);
  (* (Rhp++)) = (Wrd556.Obj);
  (Wrd558.pObj) = (& (Rhp [-2]));
  (Wrd559.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd558.pObj)));
  (* (--Rsp)) = (Wrd559.Obj);
  (Wrd562.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_24]));
  (Wrd565.Obj) = ((Wrd562.pObj) [0]);
  (Wrd566.uLng) = (OBJECT_TYPE (Wrd565.Obj));
  if ((Wrd566.uLng) == 50)
    goto label_149;
  Wrd561 = Wrd565;

DEFLABEL (label_148)
  (Wrd570.Obj) = (current_block [OBJECT_29_49]);
  (Wrd571.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd570.Obj);
  (* (Rhp++)) = (Wrd571.Obj);
  (Wrd569.pObj) = (& (Rhp [-2]));
  (Wrd567.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd569.pObj)));
  (* (Rhp++)) = (Wrd561.Obj);
  (* (Rhp++)) = (Wrd567.Obj);
  (Wrd574.pObj) = (& (Rhp [-2]));
  (Wrd572.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd574.pObj)));
  (Wrd578.Obj) = (current_block [OBJECT_29_50]);
  (* (Rhp++)) = (Wrd578.Obj);
  (* (Rhp++)) = (Wrd572.Obj);
  (Wrd577.pObj) = (& (Rhp [-2]));
  (Wrd575.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd577.pObj)));
  (Wrd579.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd575.Obj);
  (* (Rhp++)) = (Wrd579.Obj);
  (Wrd581.pObj) = (& (Rhp [-2]));
  (Wrd582.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd581.pObj)));
  (* (--Rsp)) = (Wrd582.Obj);
  (Wrd585.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_25]));
  (Wrd588.Obj) = ((Wrd585.pObj) [0]);
  (Wrd589.uLng) = (OBJECT_TYPE (Wrd588.Obj));
  if ((Wrd589.uLng) == 50)
    goto label_147;
  Wrd584 = Wrd588;

DEFLABEL (label_146)
  (Wrd593.Obj) = (current_block [OBJECT_29_51]);
  (Wrd594.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd593.Obj);
  (* (Rhp++)) = (Wrd594.Obj);
  (Wrd592.pObj) = (& (Rhp [-2]));
  (Wrd590.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd592.pObj)));
  (* (Rhp++)) = (Wrd584.Obj);
  (* (Rhp++)) = (Wrd590.Obj);
  (Wrd597.pObj) = (& (Rhp [-2]));
  (Wrd595.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd597.pObj)));
  (Wrd601.Obj) = (current_block [OBJECT_29_52]);
  (* (Rhp++)) = (Wrd601.Obj);
  (* (Rhp++)) = (Wrd595.Obj);
  (Wrd600.pObj) = (& (Rhp [-2]));
  (Wrd598.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd600.pObj)));
  (Wrd602.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd598.Obj);
  (* (Rhp++)) = (Wrd602.Obj);
  (Wrd604.pObj) = (& (Rhp [-2]));
  (Wrd605.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd604.pObj)));
  (* (--Rsp)) = (Wrd605.Obj);
  (Wrd606.Obj) = (current_block [OBJECT_29_53]);
  (* (--Rsp)) = (Wrd606.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_32]));

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_145;

DEFLABEL (label_144)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_143)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_26]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_142;
  Wrd18 = Wrd22;

DEFLABEL (label_141)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_1]));
  (Wrd32.Obj) = ((Wrd24.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_140;

DEFLABEL (label_139)
  ((Wrd24.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_138)
  Rvl = (current_block [OBJECT_29_54]);
  goto pop_return;

DEFLABEL (label_140)
  if ((Wrd32.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_139;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_35])), (Wrd24.pObj), (Wrd18.Obj));

DEFLABEL (label_135)
  goto label_138;

DEFLABEL (label_142)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_34])), (Wrd19.pObj));

DEFLABEL (label_134)
  (Wrd18.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_145)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_144;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_33])), (Wrd6.pObj), Rvl);

DEFLABEL (label_133)
  goto label_143;

DEFLABEL (label_147)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_31])), (Wrd585.pObj));

DEFLABEL (label_132)
  (Wrd584.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_30])), (Wrd562.pObj));

DEFLABEL (label_131)
  (Wrd561.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_29])), (Wrd539.pObj));

DEFLABEL (label_130)
  (Wrd538.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_28])), (Wrd516.pObj));

DEFLABEL (label_129)
  (Wrd515.Obj) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_27])), (Wrd493.pObj));

DEFLABEL (label_128)
  (Wrd492.Obj) = Rvl;
  goto label_154;

DEFLABEL (label_157)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_26])), (Wrd470.pObj));

DEFLABEL (label_127)
  (Wrd469.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_25])), (Wrd447.pObj));

DEFLABEL (label_126)
  (Wrd446.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_24])), (Wrd424.pObj));

DEFLABEL (label_125)
  (Wrd423.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_23])), (Wrd401.pObj));

DEFLABEL (label_124)
  (Wrd400.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_165)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_22])), (Wrd378.pObj));

DEFLABEL (label_123)
  (Wrd377.Obj) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_21])), (Wrd355.pObj));

DEFLABEL (label_122)
  (Wrd354.Obj) = Rvl;
  goto label_166;

DEFLABEL (label_169)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_20])), (Wrd332.pObj));

DEFLABEL (label_121)
  (Wrd331.Obj) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_19])), (Wrd309.pObj));

DEFLABEL (label_120)
  (Wrd308.Obj) = Rvl;
  goto label_170;

DEFLABEL (label_173)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_18])), (Wrd286.pObj));

DEFLABEL (label_119)
  (Wrd285.Obj) = Rvl;
  goto label_172;

DEFLABEL (label_175)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_17])), (Wrd263.pObj));

DEFLABEL (label_118)
  (Wrd262.Obj) = Rvl;
  goto label_174;

DEFLABEL (label_177)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_16])), (Wrd240.pObj));

DEFLABEL (label_117)
  (Wrd239.Obj) = Rvl;
  goto label_176;

DEFLABEL (label_179)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_15])), (Wrd217.pObj));

DEFLABEL (label_116)
  (Wrd216.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_181)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_14])), (Wrd194.pObj));

DEFLABEL (label_115)
  (Wrd193.Obj) = Rvl;
  goto label_180;

DEFLABEL (label_183)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_13])), (Wrd171.pObj));

DEFLABEL (label_114)
  (Wrd170.Obj) = Rvl;
  goto label_182;

DEFLABEL (label_185)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_12])), (Wrd148.pObj));

DEFLABEL (label_113)
  (Wrd147.Obj) = Rvl;
  goto label_184;

DEFLABEL (label_187)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_11])), (Wrd125.pObj));

DEFLABEL (label_112)
  (Wrd124.Obj) = Rvl;
  goto label_186;

DEFLABEL (label_189)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_10])), (Wrd102.pObj));

DEFLABEL (label_111)
  (Wrd101.Obj) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_9])), (Wrd79.pObj));

DEFLABEL (label_110)
  (Wrd78.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_8])), (Wrd56.pObj));

DEFLABEL (label_109)
  (Wrd55.Obj) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_7])), (Wrd33.pObj));

DEFLABEL (label_108)
  (Wrd32.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_197)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_6])), (Wrd10.pObj));

DEFLABEL (label_107)
  (Wrd9.Obj) = Rvl;
  goto label_196;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_6 5
#define LABEL_30_5 7
#define LABEL_30_9 9
#define LABEL_30_10 11
#define LABEL_30_11 13
#define LABEL_30_12 15
#define LABEL_30_13 17
#define LABEL_30_14 19
#define LABEL_30_15 21
#define LABEL_30_16 23
#define LABEL_30_17 25
#define LABEL_30_19 27
#define LABEL_30_20 29
#define LABEL_30_18 31
#define LABEL_30_24 33
#define LABEL_30_25 35
#define LABEL_30_26 37
#define LABEL_30_21 39
#define TAG_30_22 18
#define ENVIRONMENT_LABEL_30_3 61
#define DEBUGGING_LABEL_30_2 60
#define OBJECT_30_10 59
#define OBJECT_30_9 58
#define OBJECT_30_8 57
#define OBJECT_30_7 56
#define OBJECT_30_6 55
#define OBJECT_30_5 54
#define OBJECT_30_4 53
#define OBJECT_30_3 52
#define OBJECT_30_2 51
#define OBJECT_30_1 50
#define OBJECT_30_0 49
#define EXECUTE_CACHE_30_27 41
#define EXECUTE_CACHE_30_23 43
#define EXECUTE_CACHE_30_8 45
#define EXECUTE_CACHE_30_7 47
#define FREE_REFERENCES_LABEL_30_0 40
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd135;
  machine_word Wrd137;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd128;
  machine_word Wrd122;
  machine_word Wrd124;
  machine_word Wrd125;
  machine_word Wrd118;
  machine_word Wrd120;
  machine_word Wrd121;
  machine_word Wrd113;
  machine_word Wrd115;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd112;
  machine_word Wrd106;
  machine_word Wrd107;
  machine_word Wrd98;
  machine_word Wrd90;
  machine_word Wrd94;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd110;
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
      current_block = (Rpc - LABEL_30_4);
      goto lambda_49;

    case 1:
      current_block = (Rpc - LABEL_30_6);
      goto label_51;

    case 2:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto label_52;

    case 4:
      current_block = (Rpc - LABEL_30_10);
      goto label_53;

    case 5:
      current_block = (Rpc - LABEL_30_11);
      goto label_54;

    case 6:
      current_block = (Rpc - LABEL_30_12);
      goto label_55;

    case 7:
      current_block = (Rpc - LABEL_30_13);
      goto label_56;

    case 8:
      current_block = (Rpc - LABEL_30_14);
      goto label_57;

    case 9:
      current_block = (Rpc - LABEL_30_15);
      goto label_58;

    case 10:
      current_block = (Rpc - LABEL_30_16);
      goto label_59;

    case 11:
      current_block = (Rpc - LABEL_30_17);
      goto label_60;

    case 12:
      current_block = (Rpc - LABEL_30_19);
      goto label_61;

    case 13:
      current_block = (Rpc - LABEL_30_20);
      goto label_62;

    case 14:
      current_block = (Rpc - LABEL_30_18);
      goto continuation_43;

    case 15:
      current_block = (Rpc - LABEL_30_24);
      goto label_63;

    case 16:
      current_block = (Rpc - LABEL_30_25);
      goto label_64;

    case 17:
      current_block = (Rpc - LABEL_30_26);
      goto label_65;

    case 18:
      current_block = (Rpc - LABEL_30_21);
      goto lambda_68;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_67)
DEFLABEL (lambda_49)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_99;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_98)
  (Wrd17.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_69;
  (Wrd110.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd110.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (label_69)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_97;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_96)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_95;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_94)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_93;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_92)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_91;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_90)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_89;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_88)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_87;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_86)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_85;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd53.Obj) = ((Wrd54.pObj) [0]);

DEFLABEL (label_84)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_83;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd60.Obj) = ((Wrd61.pObj) [1]);

DEFLABEL (label_82)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_81;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_80)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_18]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd80.Obj) = (Rsp [3]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_79;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd77.Obj) = ((Wrd79.pObj) [1]);

DEFLABEL (label_78)
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_77;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [1]);
  (* (--Rsp)) = (Wrd87.Obj);

DEFLABEL (label_76)
  (Wrd96.Obj) = (Rsp [3]);
  (Wrd97.Obj) = (current_block [OBJECT_30_3]);
  (* (Rhp++)) = (Wrd96.Obj);
  (* (Rhp++)) = (Wrd97.Obj);
  (Wrd95.pObj) = (& (Rhp [-2]));
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd95.pObj)));
  (Wrd101.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd101.Obj);
  (* (Rhp++)) = (Wrd93.Obj);
  (Wrd99.pObj) = (& (Rhp [-2]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd99.pObj)));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd105.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_21])));
  Rhp += 2;
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd105.pObj)));
  Wrd108 = Wrd105;
  (Wrd109.Obj) = (Rsp [6]);
  ((Wrd108.pObj) [2]) = (Wrd109.Obj);
  ((Wrd108.pObj) [3]) = (Wrd100.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd104.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_23]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_30_18);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_30_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_30_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_30_5]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_30_6]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd55.Obj) = (current_block [OBJECT_30_7]);
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (* (Rhp++)) = (Wrd59.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd63.Obj);
  (Wrd69.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd69.pObj)));
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (Wrd85.Obj) = (current_block [OBJECT_30_8]);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd79.Obj);
  (Wrd84.pObj) = (& (Rhp [-2]));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd84.pObj)));
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd87.pObj) = (& (Rhp [-2]));
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd87.pObj)));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd93.Obj) = (Rsp [3]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 1))
    goto label_75;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd90.Obj) = ((Wrd92.pObj) [1]);

DEFLABEL (label_74)
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd101.uLng) == 1))
    goto label_73;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd99.Obj) = ((Wrd100.pObj) [0]);

DEFLABEL (label_72)
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd108.uLng) == 1))
    goto label_71;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd106.Obj) = ((Wrd107.pObj) [0]);

DEFLABEL (label_70)
  (Wrd116.Obj) = (Rsp [2]);
  (Wrd117.Obj) = (current_block [OBJECT_30_3]);
  (* (Rhp++)) = (Wrd116.Obj);
  (* (Rhp++)) = (Wrd117.Obj);
  (Wrd115.pObj) = (& (Rhp [-2]));
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd115.pObj)));
  (Wrd121.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd121.Obj);
  (* (Rhp++)) = (Wrd113.Obj);
  (Wrd120.pObj) = (& (Rhp [-2]));
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd120.pObj)));
  (Wrd125.Obj) = (current_block [OBJECT_30_9]);
  (* (Rhp++)) = (Wrd125.Obj);
  (* (Rhp++)) = (Wrd118.Obj);
  (Wrd124.pObj) = (& (Rhp [-2]));
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd124.pObj)));
  (* (Rhp++)) = (Wrd106.Obj);
  (* (Rhp++)) = (Wrd122.Obj);
  (Wrd128.pObj) = (& (Rhp [-2]));
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd128.pObj)));
  (Wrd129.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd126.Obj);
  (* (Rhp++)) = (Wrd129.Obj);
  (Wrd132.pObj) = (& (Rhp [-2]));
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd132.pObj)));
  (Wrd137.Obj) = (current_block [OBJECT_30_10]);
  (* (Rhp++)) = (Wrd137.Obj);
  (* (Rhp++)) = (Wrd130.Obj);
  (Wrd135.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd135.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_26]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_65)
  (Wrd106.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_25]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_64)
  (Wrd99.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_24]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_63)
  (Wrd90.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_20]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_19]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_61)
  (Wrd77.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_16]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_59)
  (Wrd60.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_58)
  (Wrd53.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_14]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_57)
  (Wrd44.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_55)
  (Wrd30.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_54)
  (Wrd23.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_53)
  (Wrd16.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_52)
  (Wrd7.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (lambda_68)
  CLOSURE_HEADER (LABEL_30_21);

DEFLABEL (lambda_39)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_27]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_7 9
#define ENVIRONMENT_LABEL_31_3 22
#define DEBUGGING_LABEL_31_2 21
#define OBJECT_31_2 20
#define OBJECT_31_1 19
#define OBJECT_31_0 18
#define EXECUTE_CACHE_31_9 11
#define EXECUTE_CACHE_31_8 13
#define FREE_REFERENCE_31_1 16
#define FREE_REFERENCE_31_0 17
#define FREE_REFERENCES_LABEL_31_0 10
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_31_4);
      goto command_print_subproblem_or_reduction_6;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_31_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_print_subproblem_or_reduction_12)
DEFLABEL (command_print_subproblem_or_reduction_6)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_31_0]))
    goto label_21;
  Wrd7 = Wrd5;

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_31_0]))
    goto label_17;
  Wrd10 = Wrd8;

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_15;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd20.Lng))))
    goto label_15;
  (Wrd13.Obj) = ((Wrd18.pObj) [6]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (label_15)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_31_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_13;

DEFLABEL (label_17)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_1]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_19;
  Wrd29 = Wrd33;

DEFLABEL (label_18)
  Wrd10 = Wrd29;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_6])), (Wrd30.pObj));

DEFLABEL (label_9)
  (Wrd29.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_23;
  Wrd35 = Wrd39;

DEFLABEL (label_22)
  Wrd7 = Wrd35;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_5])), (Wrd36.pObj));

DEFLABEL (label_10)
  (Wrd35.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_7 9
#define TAG_32_8 3
#define ENVIRONMENT_LABEL_32_3 20
#define DEBUGGING_LABEL_32_2 19
#define OBJECT_32_0 18
#define EXECUTE_CACHE_32_10 11
#define EXECUTE_CACHE_32_9 13
#define FREE_REFERENCE_32_1 16
#define FREE_REFERENCE_32_0 17
#define FREE_REFERENCES_LABEL_32_0 10
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_32_4);
      goto command_print_subproblem_6;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_32_7);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_print_subproblem_11)
DEFLABEL (command_print_subproblem_6)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_32_0]))
    goto label_18;
  Wrd7 = Wrd5;

DEFLABEL (label_17)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_32_0]))
    goto label_14;
  Wrd10 = Wrd8;

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_7])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  ((Wrd16.pObj) [2]) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (label_14)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_16;
  Wrd19 = Wrd23;

DEFLABEL (label_15)
  Wrd10 = Wrd19;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_6])), (Wrd20.pObj));

DEFLABEL (label_8)
  (Wrd19.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_20;
  Wrd25 = Wrd29;

DEFLABEL (label_19)
  Wrd7 = Wrd25;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_5])), (Wrd26.pObj));

DEFLABEL (label_9)
  (Wrd25.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_32_7);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define LABEL_33_7 9
#define TAG_33_8 3
#define LABEL_33_10 11
#define LABEL_33_11 13
#define LABEL_33_12 15
#define ENVIRONMENT_LABEL_33_3 31
#define DEBUGGING_LABEL_33_2 30
#define OBJECT_33_3 29
#define OBJECT_33_2 28
#define OBJECT_33_1 27
#define OBJECT_33_0 26
#define EXECUTE_CACHE_33_14 17
#define EXECUTE_CACHE_33_13 19
#define EXECUTE_CACHE_33_9 21
#define FREE_REFERENCE_33_1 24
#define FREE_REFERENCE_33_0 25
#define FREE_REFERENCES_LABEL_33_0 16
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd33;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_33_4);
      goto command_print_reduction_9;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_33_7);
      goto lambda_17;

    case 4:
      current_block = (Rpc - LABEL_33_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_33_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_33_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_print_reduction_16)
DEFLABEL (command_print_reduction_9)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_33_0]))
    goto label_23;
  Wrd7 = Wrd5;

DEFLABEL (label_22)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_33_0]))
    goto label_19;
  Wrd10 = Wrd8;

DEFLABEL (label_18)
  (Rsp [1]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_7])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  ((Wrd16.pObj) [2]) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

DEFLABEL (label_19)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_21;
  Wrd19 = Wrd23;

DEFLABEL (label_20)
  Wrd10 = Wrd19;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_6])), (Wrd20.pObj));

DEFLABEL (label_11)
  (Wrd19.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_25;
  Wrd25 = Wrd29;

DEFLABEL (label_24)
  Wrd7 = Wrd25;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_5])), (Wrd26.pObj));

DEFLABEL (label_12)
  (Wrd25.Obj) = Rvl;
  goto label_24;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_33_7);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_29;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_29;
  (Wrd9.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_28)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [3]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 62))
    goto label_27;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd41.Lng))))
    goto label_27;
  (Wrd33.Obj) = ((Wrd39.pObj) [4]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_26)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [3]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [3]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_12);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [3]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_14]));

DEFLABEL (label_27)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [3]);
  (Wrd49.Obj) = (current_block [OBJECT_33_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Wrd25.Obj) = (current_block [OBJECT_33_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_6 7
#define LABEL_34_7 9
#define LABEL_34_8 11
#define LABEL_34_10 13
#define TAG_34_11 5
#define LABEL_34_14 15
#define LABEL_34_16 17
#define LABEL_34_17 19
#define LABEL_34_19 21
#define LABEL_34_20 23
#define LABEL_34_22 25
#define LABEL_34_21 27
#define LABEL_34_24 29
#define LABEL_34_25 31
#define LABEL_34_26 33
#define ENVIRONMENT_LABEL_34_3 61
#define DEBUGGING_LABEL_34_2 60
#define OBJECT_34_9 59
#define OBJECT_34_8 58
#define OBJECT_34_7 57
#define OBJECT_34_6 56
#define OBJECT_34_5 55
#define OBJECT_34_4 54
#define OBJECT_34_3 53
#define OBJECT_34_2 52
#define OBJECT_34_1 51
#define OBJECT_34_0 50
#define EXECUTE_CACHE_34_23 35
#define EXECUTE_CACHE_34_18 37
#define EXECUTE_CACHE_34_15 39
#define EXECUTE_CACHE_34_13 41
#define EXECUTE_CACHE_34_12 43
#define EXECUTE_CACHE_34_9 45
#define FREE_REFERENCE_34_1 48
#define FREE_REFERENCE_34_0 49
#define FREE_REFERENCES_LABEL_34_0 34
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_34_4);
      goto command_print_reductions_23;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_34_6);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_34_7);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_34_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_34_10);
      goto lambda_34;

    case 6:
      current_block = (Rpc - LABEL_34_14);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_34_16);
      goto loop_18;

    case 8:
      current_block = (Rpc - LABEL_34_17);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_34_19);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_34_20);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_34_22);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_34_21);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_34_24);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_34_25);
      goto label_30;

    case 15:
      current_block = (Rpc - LABEL_34_26);
      goto label_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_print_reductions_33)
DEFLABEL (command_print_reductions_23)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_34_0]))
    goto label_44;
  Wrd7 = Wrd5;

DEFLABEL (label_43)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_34_0]))
    goto label_40;
  Wrd10 = Wrd8;

DEFLABEL (label_39)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_38;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_38;
  (Wrd13.Obj) = ((Wrd17.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_37)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_8);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_36;
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_3]);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_13]));

DEFLABEL (label_36)
  (Wrd10.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_10])));
  Rhp += 3;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd18 = Wrd13;
  ((Wrd18.pObj) [2]) = (Wrd10.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  ((Wrd18.pObj) [4]) = Rvl;
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_12]));

DEFLABEL (label_38)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_34_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_1]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_42;
  Wrd31 = Wrd35;

DEFLABEL (label_41)
  Wrd10 = Wrd31;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_6])), (Wrd32.pObj));

DEFLABEL (label_26)
  (Wrd31.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_46;
  Wrd37 = Wrd41;

DEFLABEL (label_45)
  Wrd7 = Wrd37;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_5])), (Wrd38.pObj));

DEFLABEL (label_27)
  (Wrd37.Obj) = Rvl;
  goto label_45;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_34_10);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_34_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_34_14);
  (Wrd5.Obj) = (current_block [OBJECT_34_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_18;

DEFLABEL (loop_35)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_34_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_34_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_34_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_34_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_34_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_55;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_54)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_34_21);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_53;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_52)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_47;
  Rvl = (current_block [OBJECT_34_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_51;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_50)
  (Rsp [0]) = (Wrd17.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_49;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd35.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd33.Lng)))
    goto label_49;
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));

DEFLABEL (label_48)
  (Rsp [1]) = (Wrd30.Obj);
  goto loop_18;

DEFLABEL (label_49)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_26]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_31)
  (Wrd30.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_25]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_8]), 1);

DEFLABEL (label_30)
  (Wrd17.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_8]), 1);

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_22]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_7]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define LABEL_35_7 9
#define TAG_35_8 3
#define LABEL_35_10 11
#define LABEL_35_11 13
#define LABEL_35_13 15
#define LABEL_35_17 17
#define LABEL_35_19 19
#define LABEL_35_20 21
#define LABEL_35_21 23
#define ENVIRONMENT_LABEL_35_3 51
#define DEBUGGING_LABEL_35_2 50
#define OBJECT_35_7 49
#define OBJECT_35_6 48
#define OBJECT_35_5 47
#define OBJECT_35_4 46
#define OBJECT_35_3 45
#define OBJECT_35_2 44
#define OBJECT_35_1 43
#define OBJECT_35_0 42
#define EXECUTE_CACHE_35_22 25
#define EXECUTE_CACHE_35_18 27
#define EXECUTE_CACHE_35_16 29
#define EXECUTE_CACHE_35_15 31
#define EXECUTE_CACHE_35_14 33
#define EXECUTE_CACHE_35_12 35
#define EXECUTE_CACHE_35_9 37
#define FREE_REFERENCE_35_1 40
#define FREE_REFERENCE_35_0 41
#define FREE_REFERENCES_LABEL_35_0 24
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_35_4);
      goto command_print_expression_14;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_35_7);
      goto lambda_21;

    case 4:
      current_block = (Rpc - LABEL_35_10);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_35_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_35_13);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_35_17);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_35_19);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_35_20);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_35_21);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_print_expression_20)
DEFLABEL (command_print_expression_14)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_35_0]))
    goto label_27;
  Wrd7 = Wrd5;

DEFLABEL (label_26)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_35_0]))
    goto label_23;
  Wrd10 = Wrd8;

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_7])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  ((Wrd16.pObj) [2]) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

DEFLABEL (label_23)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_25;
  Wrd19 = Wrd23;

DEFLABEL (label_24)
  Wrd10 = Wrd19;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_6])), (Wrd20.pObj));

DEFLABEL (label_16)
  (Wrd19.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_29;
  Wrd25 = Wrd29;

DEFLABEL (label_28)
  Wrd7 = Wrd25;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_5])), (Wrd26.pObj));

DEFLABEL (label_17)
  (Wrd25.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_35_7);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_34;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_34;
  (Wrd9.Obj) = ((Wrd15.pObj) [8]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_33)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_35_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd7.Obj) = (current_block [OBJECT_35_3]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_15]));

DEFLABEL (label_30)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_35_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_35_4]);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_35_5]);
  (Rsp [3]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_16]));

DEFLABEL (label_31)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_35_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  (Wrd14.Obj) = (current_block [OBJECT_35_6]);
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [2]);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_15]));

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_35_7]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_35_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_35_21);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_35_20);
  (Rsp [0]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_15]));

DEFLABEL (label_34)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Wrd25.Obj) = (current_block [OBJECT_35_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_7 9
#define TAG_36_8 3
#define ENVIRONMENT_LABEL_36_3 20
#define DEBUGGING_LABEL_36_2 19
#define OBJECT_36_0 18
#define EXECUTE_CACHE_36_10 11
#define EXECUTE_CACHE_36_9 13
#define FREE_REFERENCE_36_1 16
#define FREE_REFERENCE_36_0 17
#define FREE_REFERENCES_LABEL_36_0 10
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_36_4);
      goto command_print_environment_procedure_6;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_36_7);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_print_environment_procedure_11)
DEFLABEL (command_print_environment_procedure_6)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_36_0]))
    goto label_18;
  Wrd7 = Wrd5;

DEFLABEL (label_17)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_36_0]))
    goto label_14;
  Wrd10 = Wrd8;

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_7])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (label_14)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_16;
  Wrd18 = Wrd22;

DEFLABEL (label_15)
  Wrd10 = Wrd18;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_6])), (Wrd19.pObj));

DEFLABEL (label_8)
  (Wrd18.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_20;
  Wrd24 = Wrd28;

DEFLABEL (label_19)
  Wrd7 = Wrd24;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_5])), (Wrd25.pObj));

DEFLABEL (label_9)
  (Wrd24.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_36_7);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define LABEL_37_9 9
#define LABEL_37_11 11
#define ENVIRONMENT_LABEL_37_3 24
#define DEBUGGING_LABEL_37_2 23
#define EXECUTE_CACHE_37_13 13
#define EXECUTE_CACHE_37_12 15
#define EXECUTE_CACHE_37_10 17
#define EXECUTE_CACHE_37_8 19
#define EXECUTE_CACHE_37_6 21
#define FREE_REFERENCES_LABEL_37_0 12
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto print_subproblem_4;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_37_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_37_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_subproblem_7)
DEFLABEL (print_subproblem_4)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_11);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_13]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_6 7
#define LABEL_38_8 9
#define LABEL_38_9 11
#define LABEL_38_11 13
#define LABEL_38_13 15
#define LABEL_38_14 17
#define LABEL_38_15 19
#define LABEL_38_16 21
#define LABEL_38_17 23
#define ENVIRONMENT_LABEL_38_3 42
#define DEBUGGING_LABEL_38_2 41
#define OBJECT_38_9 40
#define OBJECT_38_8 39
#define OBJECT_38_7 38
#define OBJECT_38_6 37
#define OBJECT_38_5 36
#define OBJECT_38_4 35
#define OBJECT_38_3 34
#define OBJECT_38_2 33
#define OBJECT_38_1 32
#define OBJECT_38_0 31
#define EXECUTE_CACHE_38_12 25
#define EXECUTE_CACHE_38_10 27
#define EXECUTE_CACHE_38_7 29
#define FREE_REFERENCES_LABEL_38_0 24
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_38_4);
      goto print_subproblem_identification_13;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_38_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_38_8);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_38_9);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_38_11);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_38_13);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_38_14);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_38_15);
      goto lambda_5;

    case 9:
      current_block = (Rpc - LABEL_38_16);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_38_17);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_subproblem_identification_20)
DEFLABEL (print_subproblem_identification_13)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_35;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_35;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_34)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_38_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_6);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_33;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_32)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_38_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_38_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_25;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd19.Lng) == 0)
    goto label_23;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_38_6]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd16.Obj) = (current_block [OBJECT_38_7]);
  (Rsp [1]) = (Wrd16.Obj);

DEFLABEL (label_24)
  Rsp = (& (Rsp [1]));
  goto lambda_5;

DEFLABEL (label_25)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_23;

DEFLABEL (label_26)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_31;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if ((Wrd30.Lng) == 0)
    goto label_28;

DEFLABEL (label_29)
  (Wrd27.Obj) = (current_block [OBJECT_38_4]);
  goto label_27;

DEFLABEL (label_28)
  (Wrd27.Obj) = (current_block [OBJECT_38_5]);

DEFLABEL (label_27)
DEFLABEL (label_30)
  (Rsp [1]) = (Wrd27.Obj);
  goto label_24;

DEFLABEL (label_31)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_28;

DEFLABEL (label_33)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_38_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_38_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (lambda_21)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_38_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_38_17);
  (Wrd5.Obj) = (current_block [OBJECT_38_9]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define LABEL_39_7 9
#define LABEL_39_12 11
#define LABEL_39_9 13
#define LABEL_39_10 15
#define LABEL_39_16 17
#define LABEL_39_17 19
#define LABEL_39_14 21
#define LABEL_39_15 23
#define LABEL_39_19 25
#define LABEL_39_23 27
#define LABEL_39_22 29
#define LABEL_39_28 31
#define LABEL_39_30 33
#define LABEL_39_32 35
#define LABEL_39_24 37
#define LABEL_39_35 39
#define LABEL_39_26 41
#define LABEL_39_29 43
#define LABEL_39_31 45
#define LABEL_39_38 47
#define LABEL_39_39 49
#define LABEL_39_41 51
#define LABEL_39_40 53
#define LABEL_39_42 55
#define LABEL_39_43 57
#define LABEL_39_44 59
#define ENVIRONMENT_LABEL_39_3 101
#define DEBUGGING_LABEL_39_2 100
#define OBJECT_39_11 99
#define OBJECT_39_10 98
#define OBJECT_39_9 97
#define OBJECT_39_8 96
#define OBJECT_39_7 95
#define OBJECT_39_6 94
#define OBJECT_39_5 93
#define OBJECT_39_4 92
#define OBJECT_39_3 91
#define OBJECT_39_2 90
#define OBJECT_39_1 89
#define OBJECT_39_0 88
#define EXECUTE_CACHE_39_37 61
#define EXECUTE_CACHE_39_36 63
#define EXECUTE_CACHE_39_34 65
#define EXECUTE_CACHE_39_33 67
#define EXECUTE_CACHE_39_27 69
#define EXECUTE_CACHE_39_25 71
#define EXECUTE_CACHE_39_21 73
#define EXECUTE_CACHE_39_20 75
#define EXECUTE_CACHE_39_18 77
#define EXECUTE_CACHE_39_13 79
#define EXECUTE_CACHE_39_11 81
#define EXECUTE_CACHE_39_8 83
#define FREE_REFERENCE_39_1 86
#define FREE_REFERENCE_39_0 87
#define FREE_REFERENCES_LABEL_39_0 60
#define NUMBER_OF_LINKER_SECTIONS_39_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_39_4);
      goto print_subproblem_expression_29;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_31;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto label_32;

    case 3:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_39_12);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_39_9);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_39_10);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_39_16);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_39_17);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_39_14);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_39_15);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_39_19);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_39_23);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_39_22);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_39_28);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_39_30);
      goto label_35;

    case 16:
      current_block = (Rpc - LABEL_39_32);
      goto label_36;

    case 17:
      current_block = (Rpc - LABEL_39_24);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_39_35);
      goto label_34;

    case 19:
      current_block = (Rpc - LABEL_39_26);
      goto continuation_8;

    case 20:
      current_block = (Rpc - LABEL_39_29);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_39_31);
      goto continuation_20;

    case 22:
      current_block = (Rpc - LABEL_39_38);
      goto continuation_22;

    case 23:
      current_block = (Rpc - LABEL_39_39);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_39_41);
      goto label_37;

    case 25:
      current_block = (Rpc - LABEL_39_40);
      goto continuation_24;

    case 26:
      current_block = (Rpc - LABEL_39_42);
      goto continuation_25;

    case 27:
      current_block = (Rpc - LABEL_39_43);
      goto continuation_26;

    case 28:
      current_block = (Rpc - LABEL_39_44);
      goto label_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_subproblem_expression_40)
DEFLABEL (print_subproblem_expression_29)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_66;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_66;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_65)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_64;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd29.Lng))))
    goto label_64;
  (Wrd23.Obj) = ((Wrd27.pObj) [8]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_63)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_39_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_39_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_39_17);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_39_16);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_21]));

DEFLABEL (label_41)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_15]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd7.Obj) = (current_block [OBJECT_39_7]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_42;

DEFLABEL (label_43)
  (Wrd8.Obj) = (current_block [OBJECT_39_6]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_42)
DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_39_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_39_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_39_26);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_37]));

DEFLABEL (label_45)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_39_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  (Wrd7.Obj) = (current_block [OBJECT_39_5]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_46;

DEFLABEL (label_47)
  (Wrd8.Obj) = (current_block [OBJECT_39_4]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_46)
DEFLABEL (label_62)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_39_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_20]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_39_19);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_61;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_61;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_60)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_24]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_39_24);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_50;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_28]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_34]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_39_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;

DEFLABEL (label_50)
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_49;
  Wrd9 = Wrd13;

DEFLABEL (label_48)
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_36]));

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_35])), (Wrd10.pObj));

DEFLABEL (label_34)
  (Wrd9.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_29]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_59;
  Wrd26 = Wrd30;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_31]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_1]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_57;
  Wrd36 = Wrd40;

DEFLABEL (label_56)
  (Wrd45.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd49.Obj) = (current_block [OBJECT_39_9]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd50.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_33]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_39_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_36]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_39_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_20]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_39_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_21]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_39_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_55;
  Wrd9 = Wrd13;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_37]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_39_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_21]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_39_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_20]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_39_43);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_53;
  Wrd7 = Wrd11;

DEFLABEL (label_52)
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_36]));

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_44])), (Wrd8.pObj));

DEFLABEL (label_38)
  (Wrd7.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_41])), (Wrd10.pObj));

DEFLABEL (label_37)
  (Wrd9.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_32])), (Wrd37.pObj));

DEFLABEL (label_36)
  (Wrd36.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_30])), (Wrd27.pObj));

DEFLABEL (label_35)
  (Wrd26.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_39_8]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_64)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_39_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_39_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_65;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_6 7
#define LABEL_40_8 9
#define ENVIRONMENT_LABEL_40_3 22
#define DEBUGGING_LABEL_40_2 21
#define OBJECT_40_3 20
#define OBJECT_40_2 19
#define OBJECT_40_1 18
#define OBJECT_40_0 17
#define EXECUTE_CACHE_40_10 11
#define EXECUTE_CACHE_40_9 13
#define EXECUTE_CACHE_40_7 15
#define FREE_REFERENCES_LABEL_40_0 10
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_40_4);
      goto print_subproblem_environment_5;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_40_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_40_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_subproblem_environment_10)
DEFLABEL (print_subproblem_environment_5)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd7.Obj) = ((Wrd11.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_11;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_8);
  (Wrd5.Obj) = (current_block [OBJECT_40_3]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_10]));

DEFLABEL (label_11)
  if (! ((Wrd22.uLng) == 1))
    goto label_13;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

DEFLABEL (label_13)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 1);

DEFLABEL (label_8)
  (Wrd27.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_40_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_6 7
#define LABEL_41_8 9
#define LABEL_41_10 11
#define LABEL_41_11 13
#define LABEL_41_14 15
#define LABEL_41_13 17
#define LABEL_41_15 19
#define ENVIRONMENT_LABEL_41_3 36
#define DEBUGGING_LABEL_41_2 35
#define OBJECT_41_7 34
#define OBJECT_41_6 33
#define OBJECT_41_5 32
#define OBJECT_41_4 31
#define OBJECT_41_3 30
#define OBJECT_41_2 29
#define OBJECT_41_1 28
#define OBJECT_41_0 27
#define EXECUTE_CACHE_41_12 21
#define EXECUTE_CACHE_41_9 23
#define EXECUTE_CACHE_41_7 25
#define FREE_REFERENCES_LABEL_41_0 20
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_41_4);
      goto print_subproblem_reduction_9;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_41_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_41_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_41_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_41_14);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_41_13);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_41_15);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_subproblem_reduction_15)
DEFLABEL (print_subproblem_reduction_9)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_21;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd20.Lng) > 0)
    goto label_17;

DEFLABEL (label_16)
  (Wrd12.Obj) = (current_block [OBJECT_41_2]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (label_17)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_41_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_41_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_41_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_41_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_20;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) > 1L)
    goto label_19;

DEFLABEL (label_18)
  (Wrd11.Obj) = (current_block [OBJECT_41_6]);
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (label_19)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_41_7]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_41_14);
  goto label_18;

DEFLABEL (label_20)
  (Wrd19.Obj) = (current_block [OBJECT_41_5]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

DEFLABEL (label_21)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_17;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_41_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define LABEL_42_9 9
#define ENVIRONMENT_LABEL_42_3 20
#define DEBUGGING_LABEL_42_2 19
#define EXECUTE_CACHE_42_11 11
#define EXECUTE_CACHE_42_10 13
#define EXECUTE_CACHE_42_8 15
#define EXECUTE_CACHE_42_6 17
#define FREE_REFERENCES_LABEL_42_0 10
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_42_4);
      goto print_reduction_3;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_42_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_reduction_6)
DEFLABEL (print_reduction_3)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_7 7
#define LABEL_43_9 9
#define ENVIRONMENT_LABEL_43_3 18
#define DEBUGGING_LABEL_43_2 17
#define OBJECT_43_1 16
#define OBJECT_43_0 15
#define EXECUTE_CACHE_43_8 11
#define EXECUTE_CACHE_43_6 13
#define FREE_REFERENCES_LABEL_43_0 10
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto print_reduction_identification_3;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_43_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_reduction_identification_6)
DEFLABEL (print_reduction_identification_3)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_43_9);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_7 7
#define LABEL_44_9 9
#define LABEL_44_10 11
#define ENVIRONMENT_LABEL_44_3 24
#define DEBUGGING_LABEL_44_2 23
#define OBJECT_44_1 22
#define OBJECT_44_0 21
#define EXECUTE_CACHE_44_11 13
#define EXECUTE_CACHE_44_8 15
#define EXECUTE_CACHE_44_6 17
#define FREE_REFERENCE_44_0 20
#define FREE_REFERENCES_LABEL_44_0 12
#define NUMBER_OF_LINKER_SECTIONS_44_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_44_4);
      goto print_reduction_expression_3;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_44_9);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_44_10);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_reduction_expression_8)
DEFLABEL (print_reduction_expression_3)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_7);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_12;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_10;
  Wrd15 = Wrd19;

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_10])), (Wrd16.pObj));

DEFLABEL (label_6)
  (Wrd15.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_6 7
#define ENVIRONMENT_LABEL_45_3 14
#define DEBUGGING_LABEL_45_2 13
#define OBJECT_45_1 12
#define OBJECT_45_0 11
#define EXECUTE_CACHE_45_7 9
#define FREE_REFERENCES_LABEL_45_0 8
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_45_4);
      goto print_reduction_environment_2;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_45_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_reduction_environment_7)
DEFLABEL (print_reduction_environment_2)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_11;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_10)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_9;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_7]));

DEFLABEL (label_9)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_5)
  (Wrd14.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_7 7
#define LABEL_46_9 9
#define LABEL_46_11 11
#define LABEL_46_12 13
#define LABEL_46_15 15
#define LABEL_46_17 17
#define LABEL_46_20 19
#define LABEL_46_18 21
#define LABEL_46_21 23
#define ENVIRONMENT_LABEL_46_3 48
#define DEBUGGING_LABEL_46_2 47
#define OBJECT_46_5 46
#define OBJECT_46_4 45
#define OBJECT_46_3 44
#define OBJECT_46_2 43
#define OBJECT_46_1 42
#define OBJECT_46_0 41
#define EXECUTE_CACHE_46_22 25
#define EXECUTE_CACHE_46_19 27
#define EXECUTE_CACHE_46_16 29
#define EXECUTE_CACHE_46_14 31
#define EXECUTE_CACHE_46_13 33
#define EXECUTE_CACHE_46_10 35
#define EXECUTE_CACHE_46_8 37
#define EXECUTE_CACHE_46_6 39
#define FREE_REFERENCES_LABEL_46_0 24
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_46_4);
      goto print_environment_12;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_46_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_46_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_46_12);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_46_15);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_46_17);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_46_20);
      goto label_14;

    case 9:
      current_block = (Rpc - LABEL_46_18);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_46_21);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_environment_17)
DEFLABEL (print_environment_12)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_46_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = (current_block [OBJECT_46_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_46_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_46_12);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_46_1])))
    goto label_19;
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_46_2]);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_14]));

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_46_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_46_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_46_18);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_23;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = ((Wrd13.Lng) - 11L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_23;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_22)
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_46_17);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_21;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_16]));

DEFLABEL (label_21)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 1);

DEFLABEL (label_14)
  (Wrd6.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd7.Obj) = (current_block [OBJECT_46_5]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_5 3
#define LABEL_47_6 5
#define LABEL_47_4 7
#define LABEL_47_7 9
#define LABEL_47_8 11
#define LABEL_47_9 13
#define LABEL_47_10 15
#define TAG_47_11 6
#define LABEL_47_14 17
#define LABEL_47_16 19
#define LABEL_47_18 21
#define LABEL_47_19 23
#define LABEL_47_20 25
#define TAG_47_21 11
#define LABEL_47_22 27
#define LABEL_47_24 29
#define LABEL_47_27 31
#define ENVIRONMENT_LABEL_47_3 60
#define DEBUGGING_LABEL_47_2 59
#define OBJECT_47_8 58
#define OBJECT_47_7 57
#define OBJECT_47_6 56
#define OBJECT_47_5 55
#define OBJECT_47_4 54
#define OBJECT_47_3 53
#define OBJECT_47_2 52
#define OBJECT_47_1 51
#define OBJECT_47_0 50
#define EXECUTE_CACHE_47_26 33
#define EXECUTE_CACHE_47_25 35
#define EXECUTE_CACHE_47_23 37
#define EXECUTE_CACHE_47_17 39
#define EXECUTE_CACHE_47_15 41
#define EXECUTE_CACHE_47_13 43
#define EXECUTE_CACHE_47_12 45
#define FREE_REFERENCE_47_1 48
#define FREE_REFERENCE_47_0 49
#define FREE_REFERENCES_LABEL_47_0 32
#define NUMBER_OF_LINKER_SECTIONS_47_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd34;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd59;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd65;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd5;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd77;
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
      current_block = (Rpc - LABEL_47_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_47_6);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_47_4);
      goto command_summarize_subproblems_22;

    case 3:
      current_block = (Rpc - LABEL_47_7);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_47_8);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_47_9);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_47_10);
      goto lambda_30;

    case 7:
      current_block = (Rpc - LABEL_47_14);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_47_16);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_47_18);
      goto loop_17;

    case 10:
      current_block = (Rpc - LABEL_47_19);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_47_20);
      goto lambda_32;

    case 12:
      current_block = (Rpc - LABEL_47_22);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_47_24);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_47_27);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_summarize_subproblems_29)
DEFLABEL (command_summarize_subproblems_22)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_47_1]))
    goto label_45;
  Wrd7 = Wrd5;

DEFLABEL (label_44)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_47_1]))
    goto label_41;
  Wrd10 = Wrd8;

DEFLABEL (label_40)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_39;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd22.Lng))))
    goto label_39;
  (Wrd16.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_38)
  (Wrd30.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == (current_block [OBJECT_47_4]))
    goto label_35;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Rsp [0]) = Rvl;
  (Wrd77.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd77.uLng) == 1)
    goto label_33;
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_0]), 1);

DEFLABEL (label_33)
  (Wrd75.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd73.Obj) = ((Wrd75.pObj) [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd73.Obj);

DEFLABEL (label_34)
  (Wrd50.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd50.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd53.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_10])));
  Rhp += 2;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd53.pObj)));
  Wrd56 = Wrd53;
  ((Wrd56.pObj) [2]) = (Wrd50.Obj);
  (Wrd55.Obj) = (Rsp [0]);
  ((Wrd56.pObj) [3]) = (Wrd55.Obj);
  (Rsp [2]) = (Wrd52.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_12]));

DEFLABEL (label_35)
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_47_5]);
  (Rsp [1]) = (Wrd37.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd49.uLng) == 62)
    goto label_37;

DEFLABEL (label_36)
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_3]), 2);

DEFLABEL (label_37)
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd47.Lng))))
    goto label_36;
  (Wrd39.Obj) = ((Wrd45.pObj) [2]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd39.Obj);
  goto label_34;

DEFLABEL (label_39)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_47_2]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_3]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd60.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_1]));
  (Wrd63.Obj) = ((Wrd60.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 50)
    goto label_43;
  Wrd59 = Wrd63;

DEFLABEL (label_42)
  Wrd10 = Wrd59;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_8])), (Wrd60.pObj));

DEFLABEL (label_25)
  (Wrd59.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd69.Obj) = ((Wrd66.pObj) [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 50)
    goto label_47;
  Wrd65 = Wrd69;

DEFLABEL (label_46)
  Wrd7 = Wrd65;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_7])), (Wrd66.pObj));

DEFLABEL (label_26)
  (Wrd65.Obj) = Rvl;
  goto label_46;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_47_6);
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_47_10);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_47_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_47_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_47_16);
  (Wrd5.Obj) = (current_block [OBJECT_47_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_17;

DEFLABEL (loop_31)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_47_18);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_48;
  Rvl = (current_block [OBJECT_47_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_20])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_23]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_47_22);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_47_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_47_24);
  (Rsp [0]) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_50;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_50;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_49)
  (Rsp [1]) = (Wrd10.Obj);
  goto loop_17;

DEFLABEL (label_50)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_27)
  (Wrd10.Obj) = Rvl;
  goto label_49;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_47_20);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_26]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define LABEL_48_8 9
#define LABEL_48_9 11
#define LABEL_48_11 13
#define LABEL_48_14 15
#define LABEL_48_15 17
#define LABEL_48_21 19
#define LABEL_48_18 21
#define LABEL_48_17 23
#define LABEL_48_16 25
#define LABEL_48_20 27
#define LABEL_48_30 29
#define LABEL_48_28 31
#define LABEL_48_27 33
#define LABEL_48_22 35
#define TAG_48_23 16
#define LABEL_48_33 37
#define LABEL_48_35 39
#define LABEL_48_37 41
#define TAG_48_38 19
#define LABEL_48_31 43
#define TAG_48_32 20
#define LABEL_48_43 45
#define TAG_48_44 21
#define LABEL_48_41 47
#define TAG_48_42 22
#define LABEL_48_51 49
#define LABEL_48_52 51
#define LABEL_48_53 53
#define LABEL_48_46 55
#define LABEL_48_47 57
#define LABEL_48_49 59
#define ENVIRONMENT_LABEL_48_3 112
#define DEBUGGING_LABEL_48_2 111
#define OBJECT_48_9 110
#define OBJECT_48_8 109
#define OBJECT_48_7 108
#define OBJECT_48_6 107
#define OBJECT_48_5 106
#define OBJECT_48_4 105
#define OBJECT_48_3 104
#define OBJECT_48_2 103
#define OBJECT_48_1 102
#define OBJECT_48_0 101
#define EXECUTE_CACHE_48_55 61
#define EXECUTE_CACHE_48_50 63
#define EXECUTE_CACHE_48_48 65
#define EXECUTE_CACHE_48_45 67
#define EXECUTE_CACHE_48_40 69
#define EXECUTE_CACHE_48_39 71
#define EXECUTE_CACHE_48_36 73
#define EXECUTE_CACHE_48_34 75
#define EXECUTE_CACHE_48_29 77
#define EXECUTE_CACHE_48_26 79
#define EXECUTE_CACHE_48_25 81
#define EXECUTE_CACHE_48_24 83
#define EXECUTE_CACHE_48_19 85
#define EXECUTE_CACHE_48_13 87
#define EXECUTE_CACHE_48_54 89
#define EXECUTE_CACHE_48_12 91
#define EXECUTE_CACHE_48_10 93
#define EXECUTE_CACHE_48_6 95
#define FREE_REFERENCE_48_0 98
#define FREE_ASSIGNMENT_48_0 100
#define FREE_REFERENCES_LABEL_48_0 60
#define NUMBER_OF_LINKER_SECTIONS_48_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_48_4);
      goto terse_print_expression_33;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_48_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_48_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_48_14);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_48_15);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_48_21);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_48_18);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_48_17);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_48_16);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_48_20);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_48_30);
      goto continuation_18;

    case 14:
      current_block = (Rpc - LABEL_48_28);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_48_27);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_48_22);
      goto lambda_40;

    case 17:
      current_block = (Rpc - LABEL_48_33);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_48_35);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_48_37);
      goto lambda_42;

    case 20:
      current_block = (Rpc - LABEL_48_31);
      goto lambda_41;

    case 21:
      current_block = (Rpc - LABEL_48_43);
      goto lambda_44;

    case 22:
      current_block = (Rpc - LABEL_48_41);
      goto swapB_43;

    case 23:
      current_block = (Rpc - LABEL_48_51);
      goto label_35;

    case 24:
      current_block = (Rpc - LABEL_48_52);
      goto label_36;

    case 25:
      current_block = (Rpc - LABEL_48_53);
      goto label_37;

    case 26:
      current_block = (Rpc - LABEL_48_46);
      goto continuation_19;

    case 27:
      current_block = (Rpc - LABEL_48_47);
      goto continuation_20;

    case 28:
      current_block = (Rpc - LABEL_48_49);
      goto continuation_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (terse_print_expression_39)
DEFLABEL (terse_print_expression_33)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_48_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_48_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_48_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_18]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_48_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd15.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_25]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_48_17);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_52)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_26]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_48_21);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_45;
  (Wrd20.Obj) = (current_block [OBJECT_48_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_22])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_24]));

DEFLABEL (label_45)
  (Wrd12.Obj) = (current_block [OBJECT_48_4]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_48_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_48_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_48_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_29]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_48_28);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_50;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_33]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_34]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_48_33);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_47;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_37])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_48_6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_24]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_48_27);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_46)
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (label_47)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_39]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_48_30);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_31])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_48_6]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_24]));

DEFLABEL (label_48)
  (Wrd5.Obj) = (current_block [OBJECT_48_5]);

DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));
  goto label_46;

DEFLABEL (label_50)
  (Wrd5.Obj) = (current_block [OBJECT_48_7]);
  goto label_49;

DEFLABEL (label_53)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_52;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_48_16);
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_48_22);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_36]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_48_35);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_40]));

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_48_37);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (current_block [OBJECT_48_8]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_42);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_41])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  ((Wrd20.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_44);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_43])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_45]));

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_48_31);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_47]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_48]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_48_47);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_48_46);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_54]));

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_48_43);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_50]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_48_49);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_55]));

DEFLABEL (swapB_43)
  CLOSURE_HEADER (LABEL_48_41);

DEFLABEL (swapB_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_62;

DEFLABEL (label_61)
  Wrd5 = Wrd9;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_48_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_57)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_48_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_54)
  Rvl = (current_block [OBJECT_48_9]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_56)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_55;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_48_53])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_37)
  goto label_54;

DEFLABEL (label_59)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_58;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_48_52])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_36)
  goto label_57;

DEFLABEL (label_62)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_61;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_48_51])), (Wrd6.pObj));

DEFLABEL (label_35)
  (Wrd5.Obj) = Rvl;
  goto label_60;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_6 7
#define LABEL_49_7 9
#define LABEL_49_9 11
#define ENVIRONMENT_LABEL_49_3 23
#define DEBUGGING_LABEL_49_2 22
#define OBJECT_49_0 21
#define EXECUTE_CACHE_49_10 13
#define EXECUTE_CACHE_49_8 15
#define FREE_REFERENCE_49_2 18
#define FREE_REFERENCE_49_1 19
#define FREE_REFERENCE_49_0 20
#define FREE_REFERENCES_LABEL_49_0 12
#define NUMBER_OF_LINKER_SECTIONS_49_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_49_4);
      goto command_earlier_subproblem_6;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_49_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_49_9);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_earlier_subproblem_12)
DEFLABEL (command_earlier_subproblem_6)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_49_0]))
    goto label_20;
  Wrd7 = Wrd5;

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_49_0]))
    goto label_16;
  Wrd10 = Wrd8;

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_49_7);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (Rsp [3]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_10]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_9])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_18;
  Wrd16 = Wrd20;

DEFLABEL (label_17)
  Wrd10 = Wrd16;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_6])), (Wrd17.pObj));

DEFLABEL (label_8)
  (Wrd16.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_22;
  Wrd22 = Wrd26;

DEFLABEL (label_21)
  Wrd7 = Wrd22;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_5])), (Wrd23.pObj));

DEFLABEL (label_9)
  (Wrd22.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_6 7
#define LABEL_50_11 9
#define LABEL_50_10 11
#define LABEL_50_8 13
#define ENVIRONMENT_LABEL_50_3 29
#define DEBUGGING_LABEL_50_2 28
#define OBJECT_50_4 27
#define OBJECT_50_3 26
#define OBJECT_50_2 25
#define OBJECT_50_1 24
#define OBJECT_50_0 23
#define EXECUTE_CACHE_50_13 15
#define EXECUTE_CACHE_50_12 17
#define EXECUTE_CACHE_50_9 19
#define EXECUTE_CACHE_50_7 21
#define FREE_REFERENCES_LABEL_50_0 14
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_50_4);
      goto earlier_subproblem_10;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_50_11);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_50_10);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_50_8);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (earlier_subproblem_15)
DEFLABEL (earlier_subproblem_10)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_17;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_17;
  (Wrd10.Obj) = ((Wrd16.pObj) [3]);

DEFLABEL (label_16)
  (Wrd29.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_50_10);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd7.Obj);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_17)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_50_4]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_13)
  (Wrd10.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_18)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_50_2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd36.Obj);
  if ((Wrd36.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd36.Obj);
  goto label_19;

DEFLABEL (label_20)
  (Wrd42.Obj) = (current_block [OBJECT_50_3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_19)
DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_50_8);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_13]));

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_50_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_7 5
#define LABEL_51_5 7
#define ENVIRONMENT_LABEL_51_3 16
#define DEBUGGING_LABEL_51_2 15
#define EXECUTE_CACHE_51_9 9
#define EXECUTE_CACHE_51_8 11
#define EXECUTE_CACHE_51_6 13
#define FREE_REFERENCES_LABEL_51_0 8
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto next_subproblem_3;

    case 1:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (next_subproblem_6)
DEFLABEL (next_subproblem_3)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;

DEFLABEL (label_7)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_6 7
#define LABEL_52_7 9
#define LABEL_52_9 11
#define ENVIRONMENT_LABEL_52_3 23
#define DEBUGGING_LABEL_52_2 22
#define OBJECT_52_0 21
#define EXECUTE_CACHE_52_10 13
#define EXECUTE_CACHE_52_8 15
#define FREE_REFERENCE_52_2 18
#define FREE_REFERENCE_52_1 19
#define FREE_REFERENCE_52_0 20
#define FREE_REFERENCES_LABEL_52_0 12
#define NUMBER_OF_LINKER_SECTIONS_52_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_52_4);
      goto command_later_subproblem_6;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_52_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_52_9);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_later_subproblem_12)
DEFLABEL (command_later_subproblem_6)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_52_0]))
    goto label_20;
  Wrd7 = Wrd5;

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_52_0]))
    goto label_16;
  Wrd10 = Wrd8;

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_52_7);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (Rsp [3]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_10]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_9])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_18;
  Wrd16 = Wrd20;

DEFLABEL (label_17)
  Wrd10 = Wrd16;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_6])), (Wrd17.pObj));

DEFLABEL (label_8)
  (Wrd16.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_22;
  Wrd22 = Wrd26;

DEFLABEL (label_21)
  Wrd7 = Wrd22;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_5])), (Wrd23.pObj));

DEFLABEL (label_9)
  (Wrd22.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define LABEL_53_9 7
#define LABEL_53_10 9
#define LABEL_53_11 11
#define LABEL_53_8 13
#define LABEL_53_6 15
#define ENVIRONMENT_LABEL_53_3 30
#define DEBUGGING_LABEL_53_2 29
#define OBJECT_53_5 28
#define OBJECT_53_4 27
#define OBJECT_53_3 26
#define OBJECT_53_2 25
#define OBJECT_53_1 24
#define OBJECT_53_0 23
#define EXECUTE_CACHE_53_13 17
#define EXECUTE_CACHE_53_12 19
#define EXECUTE_CACHE_53_7 21
#define FREE_REFERENCES_LABEL_53_0 16
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd59;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
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
      current_block = (Rpc - LABEL_53_4);
      goto later_subproblem_8;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_53_9);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_53_10);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_53_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_53_8);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_53_6);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (later_subproblem_15)
DEFLABEL (later_subproblem_8)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_23)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_53_2])))
    goto label_16;
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_6]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (current_block [OBJECT_53_3]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd64.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd64.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_53_6);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_13]));

DEFLABEL (label_16)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_22;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd33.Lng))))
    goto label_22;
  (Wrd27.Obj) = ((Wrd31.pObj) [3]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_21)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_20;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_19)
  (Wrd50.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_18;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [1]);

DEFLABEL (label_17)
  (Rsp [2]) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_12]));

DEFLABEL (label_18)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_11]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_5]), 1);

DEFLABEL (label_13)
  (Wrd51.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_4]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_53_0]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_53_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_23;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_53_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_6 7
#define LABEL_54_7 9
#define LABEL_54_9 11
#define LABEL_54_10 13
#define LABEL_54_13 15
#define LABEL_54_14 17
#define ENVIRONMENT_LABEL_54_3 34
#define DEBUGGING_LABEL_54_2 33
#define OBJECT_54_2 32
#define OBJECT_54_1 31
#define OBJECT_54_0 30
#define EXECUTE_CACHE_54_15 19
#define EXECUTE_CACHE_54_12 21
#define EXECUTE_CACHE_54_11 23
#define EXECUTE_CACHE_54_8 25
#define FREE_REFERENCE_54_1 28
#define FREE_REFERENCE_54_0 29
#define FREE_REFERENCES_LABEL_54_0 18
#define NUMBER_OF_LINKER_SECTIONS_54_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_54_4);
      goto command_goto_11;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_54_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_54_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_54_9);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_54_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_54_13);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_54_14);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_goto_18)
DEFLABEL (command_goto_11)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_54_0]))
    goto label_28;
  Wrd7 = Wrd5;

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_54_0]))
    goto label_24;
  Wrd10 = Wrd8;

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_54_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_54_10);
  (* (--Rsp)) = Rvl;
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd9.uLng) == 1))
    goto label_22;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_20;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [2]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_15]));

DEFLABEL (label_20)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 1);

DEFLABEL (label_16)
  (Wrd15.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_26;
  Wrd16 = Wrd20;

DEFLABEL (label_25)
  Wrd10 = Wrd16;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_6])), (Wrd17.pObj));

DEFLABEL (label_13)
  (Wrd16.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_30;
  Wrd22 = Wrd26;

DEFLABEL (label_29)
  Wrd7 = Wrd22;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_5])), (Wrd23.pObj));

DEFLABEL (label_14)
  (Wrd22.Obj) = Rvl;
  goto label_29;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_54_9);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_12]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_6 7
#define LABEL_55_7 9
#define LABEL_55_9 11
#define LABEL_55_10 13
#define LABEL_55_11 15
#define LABEL_55_12 17
#define LABEL_55_13 19
#define LABEL_55_14 21
#define LABEL_55_15 23
#define LABEL_55_17 25
#define LABEL_55_18 27
#define LABEL_55_19 29
#define LABEL_55_24 31
#define LABEL_55_21 33
#define LABEL_55_22 35
#define ENVIRONMENT_LABEL_55_3 56
#define DEBUGGING_LABEL_55_2 55
#define OBJECT_55_7 54
#define OBJECT_55_6 53
#define OBJECT_55_5 52
#define OBJECT_55_4 51
#define OBJECT_55_3 50
#define OBJECT_55_2 49
#define OBJECT_55_1 48
#define OBJECT_55_0 47
#define EXECUTE_CACHE_55_25 37
#define EXECUTE_CACHE_55_23 39
#define EXECUTE_CACHE_55_20 41
#define EXECUTE_CACHE_55_16 43
#define EXECUTE_CACHE_55_8 45
#define FREE_REFERENCES_LABEL_55_0 36
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd93;
  machine_word Wrd91;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd78;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd57;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
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
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd96;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_55_4);
      goto select_subproblem_23;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto top_level_loop_21;

    case 2:
      current_block = (Rpc - LABEL_55_6);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_55_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_55_9);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_55_10);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_55_11);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_55_12);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_55_13);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_55_14);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_55_15);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_55_17);
      goto loop_15;

    case 12:
      current_block = (Rpc - LABEL_55_18);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_55_19);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_55_24);
      goto label_34;

    case 15:
      current_block = (Rpc - LABEL_55_21);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_55_22);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (select_subproblem_36)
DEFLABEL (select_subproblem_23)
  INTERRUPT_CHECK (26, LABEL_55_4);
  goto top_level_loop_21;

DEFLABEL (top_level_loop_37)
DEFLABEL (top_level_loop_21)
  INTERRUPT_CHECK (26, LABEL_55_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_55;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_55;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_54)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd26.Obj) = (current_block [OBJECT_55_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_55_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_53;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_53;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) - (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_53;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_52)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_51;
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if ((Wrd96.Lng) < 0)
    goto label_44;

DEFLABEL (label_43)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_42;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd33.Lng))))
    goto label_42;
  (Wrd27.Obj) = ((Wrd31.pObj) [3]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_41)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_40;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd49.Lng))))
    goto label_40;
  (Wrd43.Obj) = ((Wrd47.pObj) [2]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_39)
  goto loop_15;

DEFLABEL (label_40)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.Obj) = (current_block [OBJECT_55_4]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_12]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_55_3]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd66.Obj) = (Rsp [1]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 62))
    goto label_50;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd65.Lng))))
    goto label_50;
  (Wrd57.Obj) = ((Wrd63.pObj) [3]);

DEFLABEL (label_49)
  (Rsp [1]) = (Wrd57.Obj);
  (Wrd79.Obj) = (Rsp [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 26))
    goto label_48;
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  (Wrd81.Lng) = (0 - (Wrd85.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd81.Lng)))
    goto label_48;
  (Wrd78.Obj) = (LONG_TO_FIXNUM (Wrd81.Lng));

DEFLABEL (label_47)
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd91.uLng) == 26))
    goto label_46;
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  (Wrd92.Lng) = ((Wrd93.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd92.Lng)))
    goto label_46;
  (Wrd90.Obj) = (LONG_TO_FIXNUM (Wrd92.Lng));

DEFLABEL (label_45)
  (Rsp [2]) = (Wrd90.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_16]));

DEFLABEL (label_46)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_15]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_32)
  (Wrd90.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd73.Obj) = (current_block [OBJECT_55_5]);
  (Wrd74.Obj) = (Rsp [0]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_14]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_31)
  (Wrd78.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.Obj) = (current_block [OBJECT_55_3]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_13]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_30)
  (Wrd57.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_51)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (label_53)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_55_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (loop_38)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_55_17);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_61;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd23.Lng) == 0))
    goto label_57;

DEFLABEL (label_56)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_19]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_55_19);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_58;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_21]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_55_6]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_22]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_55_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_55_21);
  Rsp = (& (Rsp [4]));
  goto top_level_loop_21;

DEFLABEL (label_58)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_60;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd21.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_60;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_59)
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_15;

DEFLABEL (label_60)
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_24]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_34)
  (Wrd16.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_61)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_56;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define LABEL_56_6 7
#define LABEL_56_7 9
#define LABEL_56_9 11
#define LABEL_56_11 13
#define LABEL_56_12 15
#define LABEL_56_13 17
#define LABEL_56_14 19
#define LABEL_56_15 21
#define LABEL_56_16 23
#define LABEL_56_17 25
#define LABEL_56_18 27
#define LABEL_56_19 29
#define LABEL_56_20 31
#define LABEL_56_22 33
#define LABEL_56_25 35
#define LABEL_56_26 37
#define LABEL_56_23 39
#define LABEL_56_27 41
#define LABEL_56_28 43
#define ENVIRONMENT_LABEL_56_3 73
#define DEBUGGING_LABEL_56_2 72
#define OBJECT_56_7 71
#define OBJECT_56_6 70
#define OBJECT_56_5 69
#define OBJECT_56_4 68
#define OBJECT_56_3 67
#define OBJECT_56_2 66
#define OBJECT_56_1 65
#define OBJECT_56_0 64
#define EXECUTE_CACHE_56_31 45
#define EXECUTE_CACHE_56_30 47
#define EXECUTE_CACHE_56_29 49
#define EXECUTE_CACHE_56_24 51
#define EXECUTE_CACHE_56_21 53
#define EXECUTE_CACHE_56_10 55
#define EXECUTE_CACHE_56_8 57
#define FREE_REFERENCE_56_3 60
#define FREE_REFERENCE_56_2 61
#define FREE_REFERENCE_56_1 62
#define FREE_REFERENCE_56_0 63
#define FREE_REFERENCES_LABEL_56_0 44
#define NUMBER_OF_LINKER_SECTIONS_56_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd67;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd122;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd116;
  machine_word Wrd119;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd129;
  machine_word Wrd132;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd108;
  machine_word Wrd133;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd88;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd81;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd143;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_56_4);
      goto command_earlier_reduction_23;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_56_6);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_56_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_56_9);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_56_11);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_56_12);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_56_13);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_56_14);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_56_15);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_56_16);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_56_17);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_56_18);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_56_19);
      goto label_37;

    case 14:
      current_block = (Rpc - LABEL_56_20);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_56_22);
      goto label_32;

    case 16:
      current_block = (Rpc - LABEL_56_25);
      goto lambda_5;

    case 17:
      current_block = (Rpc - LABEL_56_26);
      goto label_38;

    case 18:
      current_block = (Rpc - LABEL_56_23);
      goto lambda_11;

    case 19:
      current_block = (Rpc - LABEL_56_27);
      goto continuation_10;

    case 20:
      current_block = (Rpc - LABEL_56_28);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_earlier_reduction_40)
DEFLABEL (command_earlier_reduction_23)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_56_0]))
    goto label_76;
  Wrd7 = Wrd5;

DEFLABEL (label_75)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_56_0]))
    goto label_72;
  Wrd10 = Wrd8;

DEFLABEL (label_71)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_56_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_56_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;

DEFLABEL (label_43)
  goto lambda_5;

DEFLABEL (label_44)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_70;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_70;
  (Wrd9.Obj) = ((Wrd13.pObj) [6]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_69)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_68;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd31.Lng))))
    goto label_68;
  (Wrd25.Obj) = ((Wrd29.pObj) [5]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_67)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_66;
  (Wrd143.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if ((Wrd143.Lng) == 0)
    goto label_45;

DEFLABEL (label_65)
  (Wrd46.Obj) = (Rsp [1]);
  if ((Wrd46.Obj) == ((SCHEME_OBJECT) 0))
    goto label_64;
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_63;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd55.Lng) = ((Wrd57.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd55.Lng)))
    goto label_63;
  (Wrd52.Obj) = (LONG_TO_FIXNUM (Wrd55.Lng));

DEFLABEL (label_62)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_61;
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_61;
  (Wrd135.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd136.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if ((Wrd135.Lng) < (Wrd136.Lng))
    goto label_49;

DEFLABEL (label_48)
  (Wrd68.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_2]));
  (Wrd71.Obj) = ((Wrd68.pObj) [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd72.uLng) == 50)
    goto label_47;
  Wrd67 = Wrd71;

DEFLABEL (label_46)
  if (! ((Wrd67.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_45;
  Rsp = (& (Rsp [2]));
  (Wrd75.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (current_block [OBJECT_56_6]);
  (Rsp [2]) = (Wrd77.Obj);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_23]))));
  (Rsp [3]) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_24]));

DEFLABEL (label_45)
  Rsp = (& (Rsp [2]));
  goto label_43;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_22])), (Wrd68.pObj));

DEFLABEL (label_32)
  (Wrd67.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd82.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_2]));
  (Wrd85.Obj) = ((Wrd82.pObj) [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd86.uLng) == 50)
    goto label_60;
  Wrd81 = Wrd85;

DEFLABEL (label_59)
  if ((Wrd81.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd97.Obj) = (Rsp [2]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 62))
    goto label_58;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd96.Lng))))
    goto label_58;
  (Wrd88.Obj) = ((Wrd94.pObj) [4]);

DEFLABEL (label_57)
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd104.uLng) == 26))
    goto label_56;
  (Wrd133.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if ((Wrd133.Lng) > 0)
    goto label_54;

DEFLABEL (label_53)
  (Wrd110.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd111.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd111.Obj);
  (Wrd117.Obj) = (Rsp [2]);
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd118.uLng) == 26))
    goto label_52;
  (Wrd121.Lng) = (FIXNUM_TO_LONG (Wrd117.Obj));
  (Wrd119.Lng) = ((Wrd121.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd119.Lng)))
    goto label_52;
  (Wrd116.Obj) = (LONG_TO_FIXNUM (Wrd119.Lng));

DEFLABEL (label_51)
  (Rsp [4]) = (Wrd116.Obj);
  (Wrd122.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd122.Obj);

DEFLABEL (label_50)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_21]));

DEFLABEL (label_52)
  (Wrd112.Obj) = (Rsp [2]);
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_20]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_36)
  (Wrd116.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd124.Obj) = (Rsp [1]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd125.uLng) == 26))
    goto label_55;
  (Wrd132.Lng) = (FIXNUM_TO_LONG (Wrd124.Obj));
  if ((Wrd132.Lng) == 0)
    goto label_48;
  goto label_53;

DEFLABEL (label_55)
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_19]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_48;

DEFLABEL (label_56)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_18]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_54;

DEFLABEL (label_58)
  (Wrd99.Obj) = (Rsp [2]);
  (Wrd100.Obj) = (current_block [OBJECT_56_5]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_17]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_2]), 2);

DEFLABEL (label_34)
  (Wrd88.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_16])), (Wrd82.pObj));

DEFLABEL (label_33)
  (Wrd81.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_61)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_15]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  goto label_49;

DEFLABEL (label_63)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_14]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_30)
  (Wrd52.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_64)
  (Wrd137.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd137.Obj);
  (Wrd138.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd138.Obj);
  (Wrd139.Obj) = (current_block [OBJECT_56_4]);
  (Rsp [3]) = (Wrd139.Obj);
  goto label_50;

DEFLABEL (label_66)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_13]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  goto label_45;

DEFLABEL (label_68)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_56_3]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_2]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_56_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_2]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_74;
  Wrd16 = Wrd20;

DEFLABEL (label_73)
  Wrd10 = Wrd16;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_6])), (Wrd17.pObj));

DEFLABEL (label_25)
  (Wrd16.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_78;
  Wrd22 = Wrd26;

DEFLABEL (label_77)
  Wrd7 = Wrd22;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_5])), (Wrd23.pObj));

DEFLABEL (label_26)
  (Wrd22.Obj) = Rvl;
  goto label_77;

DEFLABEL (lambda_41)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_56_25);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_3]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_80;
  Wrd9 = Wrd13;

DEFLABEL (label_79)
  (Rsp [3]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_24]));

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_26])), (Wrd10.pObj));

DEFLABEL (label_38)
  (Wrd9.Obj) = Rvl;
  goto label_79;

DEFLABEL (lambda_42)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_56_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_56_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_56_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_29]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_56_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_31]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_56_27);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_30]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_6 7
#define LABEL_57_7 9
#define LABEL_57_9 11
#define LABEL_57_11 13
#define LABEL_57_13 15
#define LABEL_57_14 17
#define LABEL_57_15 19
#define LABEL_57_16 21
#define LABEL_57_19 23
#define LABEL_57_17 25
#define LABEL_57_21 27
#define LABEL_57_23 29
#define LABEL_57_24 31
#define LABEL_57_26 33
#define LABEL_57_29 35
#define LABEL_57_30 37
#define LABEL_57_22 39
#define LABEL_57_31 41
#define LABEL_57_27 43
#define TAG_57_28 20
#define LABEL_57_36 45
#define LABEL_57_33 47
#define LABEL_57_37 49
#define LABEL_57_38 51
#define LABEL_57_40 53
#define LABEL_57_41 55
#define LABEL_57_42 57
#define LABEL_57_43 59
#define LABEL_57_34 61
#define ENVIRONMENT_LABEL_57_3 100
#define DEBUGGING_LABEL_57_2 99
#define OBJECT_57_10 98
#define OBJECT_57_9 97
#define OBJECT_57_8 96
#define OBJECT_57_7 95
#define OBJECT_57_6 94
#define OBJECT_57_5 93
#define OBJECT_57_4 92
#define OBJECT_57_3 91
#define OBJECT_57_2 90
#define OBJECT_57_1 89
#define OBJECT_57_0 88
#define EXECUTE_CACHE_57_44 63
#define EXECUTE_CACHE_57_39 65
#define EXECUTE_CACHE_57_35 67
#define EXECUTE_CACHE_57_32 69
#define EXECUTE_CACHE_57_25 71
#define EXECUTE_CACHE_57_20 73
#define EXECUTE_CACHE_57_18 75
#define EXECUTE_CACHE_57_12 77
#define EXECUTE_CACHE_57_10 79
#define EXECUTE_CACHE_57_8 81
#define FREE_REFERENCE_57_3 84
#define FREE_REFERENCE_57_2 85
#define FREE_REFERENCE_57_1 86
#define FREE_REFERENCE_57_0 87
#define FREE_REFERENCES_LABEL_57_0 62
#define NUMBER_OF_LINKER_SECTIONS_57_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd61;
  machine_word Wrd78;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd24;
  machine_word Wrd68;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd70;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd72;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd75;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd80;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_57_4);
      goto command_later_reduction_30;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto label_33;

    case 2:
      current_block = (Rpc - LABEL_57_6);
      goto label_32;

    case 3:
      current_block = (Rpc - LABEL_57_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_57_9);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_57_11);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_57_13);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_57_14);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_57_15);
      goto label_36;

    case 9:
      current_block = (Rpc - LABEL_57_16);
      goto label_37;

    case 10:
      current_block = (Rpc - LABEL_57_19);
      goto label_38;

    case 11:
      current_block = (Rpc - LABEL_57_17);
      goto continuation_21;

    case 12:
      current_block = (Rpc - LABEL_57_21);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_57_23);
      goto label_40;

    case 14:
      current_block = (Rpc - LABEL_57_24);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_57_26);
      goto lambda_17;

    case 16:
      current_block = (Rpc - LABEL_57_29);
      goto lambda_5;

    case 17:
      current_block = (Rpc - LABEL_57_30);
      goto label_43;

    case 18:
      current_block = (Rpc - LABEL_57_22);
      goto continuation_24;

    case 19:
      current_block = (Rpc - LABEL_57_31);
      goto label_44;

    case 20:
      current_block = (Rpc - LABEL_57_27);
      goto lambda_54;

    case 21:
      current_block = (Rpc - LABEL_57_36);
      goto continuation_14;

    case 22:
      current_block = (Rpc - LABEL_57_33);
      goto continuation_9;

    case 23:
      current_block = (Rpc - LABEL_57_37);
      goto label_45;

    case 24:
      current_block = (Rpc - LABEL_57_38);
      goto label_46;

    case 25:
      current_block = (Rpc - LABEL_57_40);
      goto label_47;

    case 26:
      current_block = (Rpc - LABEL_57_41);
      goto label_48;

    case 27:
      current_block = (Rpc - LABEL_57_42);
      goto label_49;

    case 28:
      current_block = (Rpc - LABEL_57_43);
      goto label_50;

    case 29:
      current_block = (Rpc - LABEL_57_34);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_later_reduction_52)
DEFLABEL (command_later_reduction_30)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_57_0]))
    goto label_87;
  Wrd7 = Wrd5;

DEFLABEL (label_86)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_57_0]))
    goto label_83;
  Wrd10 = Wrd8;

DEFLABEL (label_82)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_57_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_57_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_79;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_78;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_78;
  (Wrd9.Obj) = ((Wrd13.pObj) [6]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_77)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_76;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd31.Lng))))
    goto label_76;
  (Wrd23.Obj) = ((Wrd29.pObj) [5]);

DEFLABEL (label_75)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_74;
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! ((Wrd75.Lng) == 0))
    goto label_57;

DEFLABEL (label_56)
  Rsp = (& (Rsp [1]));
  goto lambda_5;

DEFLABEL (label_57)
  (Wrd45.Obj) = (Rsp [0]);
  if (! ((Wrd45.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_58;
  (Rsp [0]) = ((SCHEME_OBJECT) 0);
  goto lambda_17;

DEFLABEL (label_58)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_73;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if ((Wrd72.Lng) > 0)
    goto label_70;

DEFLABEL (label_69)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_17]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_18]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_57_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_64;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_64;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_63)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_62;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_62;
  (Wrd28.Obj) = ((Wrd32.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_61)
  (Wrd42.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_25]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_57_22);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_60;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd14.Lng))))
    goto label_60;
  ((Wrd12.pObj) [6]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_59)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_32]));

DEFLABEL (label_60)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_57_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_31]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_7]), 3);

DEFLABEL (label_44)
  goto label_59;

DEFLABEL (label_62)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.Obj) = (current_block [OBJECT_57_6]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_24]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_2]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_57_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_23]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_2]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_3]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_68;
  Wrd43 = Wrd47;

DEFLABEL (label_67)
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_66;
  Rsp = (& (Rsp [1]));
  goto lambda_5;

DEFLABEL (label_66)
  (Wrd51.Obj) = (current_block [OBJECT_57_4]);
  (Rsp [0]) = (Wrd51.Obj);
  goto lambda_17;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_21])), (Wrd44.pObj));

DEFLABEL (label_42)
  (Wrd43.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd58.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd59.Obj);
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 26))
    goto label_72;
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  (Wrd67.Lng) = ((Wrd69.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd67.Lng)))
    goto label_72;
  (Wrd64.Obj) = (LONG_TO_FIXNUM (Wrd67.Lng));

DEFLABEL (label_71)
  (Rsp [3]) = (Wrd64.Obj);
  (Wrd70.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_20]));

DEFLABEL (label_72)
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_19]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_38)
  (Wrd64.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_73)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_16]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  goto label_70;

DEFLABEL (label_74)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_15]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_56;

DEFLABEL (label_76)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_57_3]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_14]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_2]), 2);

DEFLABEL (label_35)
  (Wrd23.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_57_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_2]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_79)
  (Wrd76.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd77.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd81.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_2]));
  (Wrd84.Obj) = ((Wrd81.pObj) [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if ((Wrd85.uLng) == 50)
    goto label_81;
  Wrd80 = Wrd84;

DEFLABEL (label_80)
  (Rsp [3]) = (Wrd80.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_12]));

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_11])), (Wrd81.pObj));

DEFLABEL (label_39)
  (Wrd80.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_85;
  Wrd16 = Wrd20;

DEFLABEL (label_84)
  Wrd10 = Wrd16;
  goto label_82;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_6])), (Wrd17.pObj));

DEFLABEL (label_32)
  (Wrd16.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_89;
  Wrd22 = Wrd26;

DEFLABEL (label_88)
  Wrd7 = Wrd22;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_5])), (Wrd23.pObj));

DEFLABEL (label_33)
  (Wrd22.Obj) = Rvl;
  goto label_88;

DEFLABEL (lambda_53)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_57_26);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_27])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_12]));

DEFLABEL (lambda_55)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_57_29);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_91;
  Wrd9 = Wrd13;

DEFLABEL (label_90)
  (Rsp [3]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_12]));

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_30])), (Wrd10.pObj));

DEFLABEL (label_43)
  (Wrd9.Obj) = Rvl;
  goto label_90;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_57_27);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_57_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_35]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_57_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_44]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_57_33);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_107;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_107;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_106)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_93;

DEFLABEL (label_92)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_39]));

DEFLABEL (label_93)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_105;
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! ((Wrd80.Lng) > 0))
    goto label_92;

DEFLABEL (label_104)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_36]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_3]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_103;
  Wrd34 = Wrd38;

DEFLABEL (label_102)
  if ((Wrd34.Obj) == ((SCHEME_OBJECT) 0))
    goto label_97;
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_101;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd49.Lng))))
    goto label_101;
  (Wrd41.Obj) = ((Wrd47.pObj) [4]);

DEFLABEL (label_100)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_99;
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if ((Wrd78.Lng) > 0)
    goto label_98;

DEFLABEL (label_97)
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 26))
    goto label_96;
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  (Wrd71.Lng) = ((Wrd73.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd71.Lng)))
    goto label_96;
  (Wrd68.Obj) = (LONG_TO_FIXNUM (Wrd71.Lng));

DEFLABEL (label_95)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_94)
  (Wrd74.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd74.Obj);
  (Wrd75.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd75.Obj);
  (Rsp [3]) = (Wrd68.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_20]));

DEFLABEL (label_96)
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_43]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_50)
  (Wrd68.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd68.Obj) = (current_block [OBJECT_57_10]);
  goto label_95;

DEFLABEL (label_99)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_42]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_49)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_97;
  goto label_98;

DEFLABEL (label_101)
  (Wrd52.Obj) = (Rsp [3]);
  (Wrd53.Obj) = (current_block [OBJECT_57_9]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_41]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_2]), 2);

DEFLABEL (label_48)
  (Wrd41.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_40])), (Wrd35.pObj));

DEFLABEL (label_47)
  (Wrd34.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_38]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_46)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  goto label_104;

DEFLABEL (label_107)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_57_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_37]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_2]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_57_36);
  (Wrd68.Obj) = Rvl;
  goto label_94;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_6 7
#define LABEL_58_7 9
#define ENVIRONMENT_LABEL_58_3 22
#define DEBUGGING_LABEL_58_2 21
#define OBJECT_58_2 20
#define OBJECT_58_1 19
#define OBJECT_58_0 18
#define EXECUTE_CACHE_58_9 11
#define EXECUTE_CACHE_58_8 13
#define FREE_REFERENCE_58_1 16
#define FREE_REFERENCE_58_0 17
#define FREE_REFERENCES_LABEL_58_0 10
#define NUMBER_OF_LINKER_SECTIONS_58_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
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
  machine_word Wrd10;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_58_4);
      goto command_show_current_frame_7;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_58_7);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_show_current_frame_13)
DEFLABEL (command_show_current_frame_7)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_58_0]))
    goto label_22;
  Wrd7 = Wrd5;

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_58_0]))
    goto label_18;
  Wrd10 = Wrd8;

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_16;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd19.Lng))))
    goto label_16;
  (Wrd11.Obj) = ((Wrd17.pObj) [10]);

DEFLABEL (label_15)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_14;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_9]));

DEFLABEL (label_14)
  (Wrd29.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_8]));

DEFLABEL (label_16)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_58_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 2);

DEFLABEL (label_9)
  (Wrd11.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_1]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_20;
  Wrd31 = Wrd35;

DEFLABEL (label_19)
  Wrd10 = Wrd31;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_6])), (Wrd32.pObj));

DEFLABEL (label_10)
  (Wrd31.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_24;
  Wrd37 = Wrd41;

DEFLABEL (label_23)
  Wrd7 = Wrd37;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_5])), (Wrd38.pObj));

DEFLABEL (label_11)
  (Wrd37.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_6 7
#define LABEL_59_7 9
#define LABEL_59_8 11
#define LABEL_59_11 13
#define ENVIRONMENT_LABEL_59_3 30
#define DEBUGGING_LABEL_59_2 29
#define OBJECT_59_4 28
#define OBJECT_59_3 27
#define OBJECT_59_2 26
#define OBJECT_59_1 25
#define OBJECT_59_0 24
#define EXECUTE_CACHE_59_12 15
#define EXECUTE_CACHE_59_10 17
#define EXECUTE_CACHE_59_9 19
#define FREE_REFERENCE_59_1 22
#define FREE_REFERENCE_59_0 23
#define FREE_REFERENCES_LABEL_59_0 14
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_59_4);
      goto command_show_all_frames_10;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_59_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_59_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_59_8);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_59_11);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_show_all_frames_17)
DEFLABEL (command_show_all_frames_10)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_59_0]))
    goto label_28;
  Wrd7 = Wrd5;

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_59_0]))
    goto label_24;
  Wrd10 = Wrd8;

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_22;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd19.Lng))))
    goto label_22;
  (Wrd13.Obj) = ((Wrd17.pObj) [10]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_21)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 1)
    goto label_18;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_10]));

DEFLABEL (label_18)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_59_8);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_20;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_59_4]);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_12]));

DEFLABEL (label_20)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_3]), 1);

DEFLABEL (label_15)
  (Wrd6.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_59_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_2]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_1]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_26;
  Wrd34 = Wrd38;

DEFLABEL (label_25)
  Wrd10 = Wrd34;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_6])), (Wrd35.pObj));

DEFLABEL (label_13)
  (Wrd34.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_30;
  Wrd40 = Wrd44;

DEFLABEL (label_29)
  Wrd7 = Wrd40;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_5])), (Wrd41.pObj));

DEFLABEL (label_14)
  (Wrd40.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define LABEL_60_6 7
#define LABEL_60_7 9
#define LABEL_60_9 11
#define LABEL_60_8 13
#define LABEL_60_13 15
#define LABEL_60_12 17
#define LABEL_60_16 19
#define ENVIRONMENT_LABEL_60_3 42
#define DEBUGGING_LABEL_60_2 41
#define OBJECT_60_6 40
#define OBJECT_60_5 39
#define OBJECT_60_4 38
#define OBJECT_60_3 37
#define OBJECT_60_2 36
#define OBJECT_60_1 35
#define OBJECT_60_0 34
#define EXECUTE_CACHE_60_17 21
#define EXECUTE_CACHE_60_15 23
#define EXECUTE_CACHE_60_14 25
#define EXECUTE_CACHE_60_11 27
#define EXECUTE_CACHE_60_10 29
#define FREE_REFERENCE_60_1 32
#define FREE_REFERENCE_60_0 33
#define FREE_REFERENCES_LABEL_60_0 20
#define NUMBER_OF_LINKER_SECTIONS_60_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
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
      current_block = (Rpc - LABEL_60_4);
      goto command_move_to_parent_environment_15;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_60_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_60_7);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_60_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_60_8);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_60_13);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_60_12);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_60_16);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_move_to_parent_environment_24)
DEFLABEL (command_move_to_parent_environment_15)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_60_0]))
    goto label_40;
  Wrd7 = Wrd5;

DEFLABEL (label_39)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_60_0]))
    goto label_36;
  Wrd10 = Wrd8;

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_34;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd19.Lng))))
    goto label_34;
  (Wrd13.Obj) = ((Wrd17.pObj) [10]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_33)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 1)
    goto label_25;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_11]));

DEFLABEL (label_25)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  if (! ((Wrd28.uLng) == 1))
    goto label_32;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_60_8);
  if (Rvl == (current_block [OBJECT_60_4]))
    goto label_26;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60_5]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_15]));

DEFLABEL (label_26)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_30;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_60_12);
  (Wrd9.Obj) = (Rsp [0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_28;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd19.Lng))))
    goto label_28;
  ((Wrd17.pObj) [10]) = (Wrd6.Obj);

DEFLABEL (label_27)
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_60_4]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_17]));

DEFLABEL (label_28)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_60_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_16]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_6]), 3);

DEFLABEL (label_22)
  goto label_27;

DEFLABEL (label_30)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_13]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_3]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_60_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_1]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_38;
  Wrd42 = Wrd46;

DEFLABEL (label_37)
  Wrd10 = Wrd42;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_6])), (Wrd43.pObj));

DEFLABEL (label_19)
  (Wrd42.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_42;
  Wrd48 = Wrd52;

DEFLABEL (label_41)
  Wrd7 = Wrd48;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_5])), (Wrd49.pObj));

DEFLABEL (label_20)
  (Wrd48.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_6 7
#define LABEL_61_7 9
#define LABEL_61_8 11
#define LABEL_61_9 13
#define LABEL_61_10 15
#define LABEL_61_11 17
#define ENVIRONMENT_LABEL_61_3 36
#define DEBUGGING_LABEL_61_2 35
#define OBJECT_61_6 34
#define OBJECT_61_5 33
#define OBJECT_61_4 32
#define OBJECT_61_3 31
#define OBJECT_61_2 30
#define OBJECT_61_1 29
#define OBJECT_61_0 28
#define EXECUTE_CACHE_61_14 19
#define EXECUTE_CACHE_61_13 21
#define EXECUTE_CACHE_61_12 23
#define FREE_REFERENCE_61_1 26
#define FREE_REFERENCE_61_0 27
#define FREE_REFERENCES_LABEL_61_0 18
#define NUMBER_OF_LINKER_SECTIONS_61_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd85;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd91;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd92;
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
      current_block = (Rpc - LABEL_61_4);
      goto command_move_to_child_environment_13;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_61_6);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_61_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_61_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_61_9);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_61_10);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_61_11);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_move_to_child_environment_23)
DEFLABEL (command_move_to_child_environment_13)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_61_0]))
    goto label_41;
  Wrd7 = Wrd5;

DEFLABEL (label_40)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_61_0]))
    goto label_37;
  Wrd10 = Wrd8;

DEFLABEL (label_36)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_35;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd19.Lng))))
    goto label_35;
  (Wrd13.Obj) = ((Wrd17.pObj) [10]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_34)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_33;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd35.Lng))))
    goto label_33;
  (Wrd27.Obj) = ((Wrd33.pObj) [10]);

DEFLABEL (label_32)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd43.uLng) == 1)
    goto label_24;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_14]));

DEFLABEL (label_24)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_31;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_30)
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd54.uLng) == 1)
    goto label_25;
  (Wrd55.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd55.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_61_6]);
  (Rsp [2]) = (Wrd56.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_13]));

DEFLABEL (label_25)
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_29;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_28)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 62))
    goto label_27;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd76.Lng))))
    goto label_27;
  ((Wrd74.pObj) [10]) = (Wrd58.Obj);

DEFLABEL (label_26)
  (Wrd67.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd67.Obj);
  (Wrd68.Obj) = (current_block [OBJECT_61_5]);
  (Rsp [1]) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_12]));

DEFLABEL (label_27)
  (Wrd79.Obj) = (Rsp [1]);
  (Wrd80.Obj) = (current_block [OBJECT_61_1]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_11]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_4]), 3);

DEFLABEL (label_19)
  goto label_26;

DEFLABEL (label_29)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_10]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_3]), 1);

DEFLABEL (label_18)
  (Wrd58.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_9]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_3]), 1);

DEFLABEL (label_17)
  (Wrd45.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_61_1]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 2);

DEFLABEL (label_16)
  (Wrd27.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_61_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd86.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_1]));
  (Wrd89.Obj) = ((Wrd86.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_39;
  Wrd85 = Wrd89;

DEFLABEL (label_38)
  Wrd10 = Wrd85;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_6])), (Wrd86.pObj));

DEFLABEL (label_20)
  (Wrd85.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd92.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd95.Obj) = ((Wrd92.pObj) [0]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd96.uLng) == 50)
    goto label_43;
  Wrd91 = Wrd95;

DEFLABEL (label_42)
  Wrd7 = Wrd91;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_5])), (Wrd92.pObj));

DEFLABEL (label_21)
  (Wrd91.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define TAG_62_6 1
#define LABEL_62_8 7
#define LABEL_62_10 9
#define LABEL_62_9 11
#define LABEL_62_12 13
#define ENVIRONMENT_LABEL_62_3 26
#define DEBUGGING_LABEL_62_2 25
#define OBJECT_62_3 24
#define OBJECT_62_2 23
#define OBJECT_62_1 22
#define OBJECT_62_0 21
#define EXECUTE_CACHE_62_13 15
#define EXECUTE_CACHE_62_11 17
#define EXECUTE_CACHE_62_7 19
#define FREE_REFERENCES_LABEL_62_0 14
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_62_4);
      goto show_current_frame_6;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_62_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_62_10);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_62_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_62_12);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_current_frame_12)
DEFLABEL (show_current_frame_6)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_62_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_19;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_19;
  (Wrd9.Obj) = ((Wrd15.pObj) [10]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_18)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_17;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_62_9);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_15;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [3]);
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Rsp [3]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_13]));

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_3]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [4]);
  (Wrd25.Obj) = (current_block [OBJECT_62_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_6 7
#define LABEL_63_7 9
#define ENVIRONMENT_LABEL_63_3 22
#define DEBUGGING_LABEL_63_2 21
#define OBJECT_63_2 20
#define OBJECT_63_1 19
#define OBJECT_63_0 18
#define EXECUTE_CACHE_63_9 11
#define EXECUTE_CACHE_63_8 13
#define FREE_REFERENCE_63_1 16
#define FREE_REFERENCE_63_0 17
#define FREE_REFERENCES_LABEL_63_0 10
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_63_4);
      goto command_enter_read_eval_print_loop_6;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_63_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_63_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_enter_read_eval_print_loop_11)
DEFLABEL (command_enter_read_eval_print_loop_6)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_63_0]))
    goto label_17;
  Wrd7 = Wrd5;

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_63_0]))
    goto label_13;
  Wrd10 = Wrd8;

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_63_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_63_1]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_63_2]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_9]));

DEFLABEL (label_13)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_15;
  Wrd16 = Wrd20;

DEFLABEL (label_14)
  Wrd10 = Wrd16;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_6])), (Wrd17.pObj));

DEFLABEL (label_8)
  (Wrd16.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_19;
  Wrd22 = Wrd26;

DEFLABEL (label_18)
  Wrd7 = Wrd22;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_5])), (Wrd23.pObj));

DEFLABEL (label_9)
  (Wrd22.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_6 7
#define LABEL_64_7 9
#define ENVIRONMENT_LABEL_64_3 20
#define DEBUGGING_LABEL_64_2 19
#define OBJECT_64_0 18
#define EXECUTE_CACHE_64_9 11
#define EXECUTE_CACHE_64_8 13
#define FREE_REFERENCE_64_1 16
#define FREE_REFERENCE_64_0 17
#define FREE_REFERENCES_LABEL_64_0 10
#define NUMBER_OF_LINKER_SECTIONS_64_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_64_4);
      goto command_eval_in_current_environment_6;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_64_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_64_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_eval_in_current_environment_11)
DEFLABEL (command_eval_in_current_environment_6)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_64_0]))
    goto label_17;
  Wrd7 = Wrd5;

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_64_0]))
    goto label_13;
  Wrd10 = Wrd8;

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_64_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_9]));

DEFLABEL (label_13)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_15;
  Wrd16 = Wrd20;

DEFLABEL (label_14)
  Wrd10 = Wrd16;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_6])), (Wrd17.pObj));

DEFLABEL (label_8)
  (Wrd16.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_19;
  Wrd22 = Wrd26;

DEFLABEL (label_18)
  Wrd7 = Wrd22;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_5])), (Wrd23.pObj));

DEFLABEL (label_9)
  (Wrd22.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_6 7
#define LABEL_65_7 9
#define ENVIRONMENT_LABEL_65_3 19
#define DEBUGGING_LABEL_65_2 18
#define OBJECT_65_0 17
#define EXECUTE_CACHE_65_8 11
#define FREE_REFERENCE_65_2 14
#define FREE_REFERENCE_65_1 15
#define FREE_REFERENCE_65_0 16
#define FREE_REFERENCES_LABEL_65_0 10
#define NUMBER_OF_LINKER_SECTIONS_65_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_65_4);
      goto command_enter_where_5;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_65_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_65_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_enter_where_11)
DEFLABEL (command_enter_where_5)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_65_0]))
    goto label_19;
  Wrd7 = Wrd5;

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_65_0]))
    goto label_15;
  Wrd10 = Wrd8;

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_2]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_13;
  Wrd14 = Wrd18;

DEFLABEL (label_12)
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_8]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_7])), (Wrd15.pObj));

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_17;
  Wrd20 = Wrd24;

DEFLABEL (label_16)
  Wrd10 = Wrd20;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_6])), (Wrd21.pObj));

DEFLABEL (label_8)
  (Wrd20.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_21;
  Wrd26 = Wrd30;

DEFLABEL (label_20)
  Wrd7 = Wrd26;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_5])), (Wrd27.pObj));

DEFLABEL (label_9)
  (Wrd26.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_6 7
#define LABEL_66_7 9
#define LABEL_66_9 11
#define TAG_66_10 4
#define ENVIRONMENT_LABEL_66_3 27
#define DEBUGGING_LABEL_66_2 26
#define OBJECT_66_3 25
#define OBJECT_66_2 24
#define OBJECT_66_1 23
#define OBJECT_66_0 22
#define EXECUTE_CACHE_66_12 13
#define EXECUTE_CACHE_66_11 15
#define EXECUTE_CACHE_66_8 17
#define FREE_REFERENCE_66_1 20
#define FREE_REFERENCE_66_0 21
#define FREE_REFERENCES_LABEL_66_0 12
#define NUMBER_OF_LINKER_SECTIONS_66_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
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
      current_block = (Rpc - LABEL_66_4);
      goto command_condition_report_8;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_66_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_66_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_66_9);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_condition_report_14)
DEFLABEL (command_condition_report_8)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_66_0]))
    goto label_24;
  Wrd7 = Wrd5;

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_66_0]))
    goto label_20;
  Wrd10 = Wrd8;

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_18;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd19.Lng))))
    goto label_18;
  (Wrd13.Obj) = ((Wrd17.pObj) [11]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_17)
  (Wrd27.Obj) = (Rsp [0]);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd29.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd29.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_66_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_66_9])));
  Rhp += 2;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  Wrd35 = Wrd32;
  ((Wrd35.pObj) [2]) = (Wrd29.Obj);
  ((Wrd35.pObj) [3]) = (Wrd27.Obj);
  (Rsp [2]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_11]));

DEFLABEL (label_16)
  (Wrd38.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_66_3]);
  (Rsp [2]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_8]));

DEFLABEL (label_18)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_66_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_2]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_1]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_22;
  Wrd41 = Wrd45;

DEFLABEL (label_21)
  Wrd10 = Wrd41;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_6])), (Wrd42.pObj));

DEFLABEL (label_11)
  (Wrd41.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_26;
  Wrd47 = Wrd51;

DEFLABEL (label_25)
  Wrd7 = Wrd47;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_5])), (Wrd48.pObj));

DEFLABEL (label_12)
  (Wrd47.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_66_9);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_12]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_6 7
#define LABEL_67_7 9
#define LABEL_67_8 11
#define LABEL_67_12 13
#define LABEL_67_14 15
#define TAG_67_15 6
#define LABEL_67_20 17
#define LABEL_67_16 19
#define TAG_67_17 8
#define LABEL_67_22 21
#define LABEL_67_19 23
#define LABEL_67_23 25
#define LABEL_67_25 27
#define LABEL_67_27 29
#define LABEL_67_32 31
#define LABEL_67_28 33
#define LABEL_67_30 35
#define LABEL_67_31 37
#define LABEL_67_34 39
#define LABEL_67_35 41
#define LABEL_67_36 43
#define LABEL_67_38 45
#define ENVIRONMENT_LABEL_67_3 90
#define DEBUGGING_LABEL_67_2 89
#define OBJECT_67_12 88
#define OBJECT_67_11 87
#define OBJECT_67_10 86
#define OBJECT_67_9 85
#define OBJECT_67_8 84
#define OBJECT_67_7 83
#define OBJECT_67_6 82
#define OBJECT_67_5 81
#define OBJECT_67_4 80
#define OBJECT_67_3 79
#define OBJECT_67_2 78
#define OBJECT_67_1 77
#define OBJECT_67_0 76
#define EXECUTE_CACHE_67_40 47
#define EXECUTE_CACHE_67_39 49
#define EXECUTE_CACHE_67_37 51
#define EXECUTE_CACHE_67_33 53
#define EXECUTE_CACHE_67_29 55
#define EXECUTE_CACHE_67_26 57
#define EXECUTE_CACHE_67_24 59
#define EXECUTE_CACHE_67_21 61
#define EXECUTE_CACHE_67_18 63
#define EXECUTE_CACHE_67_13 65
#define EXECUTE_CACHE_67_11 67
#define EXECUTE_CACHE_67_10 69
#define EXECUTE_CACHE_67_9 71
#define FREE_REFERENCE_67_1 74
#define FREE_REFERENCE_67_0 75
#define FREE_REFERENCES_LABEL_67_0 46
#define NUMBER_OF_LINKER_SECTIONS_67_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd32;
  machine_word Wrd14;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_67_4);
      goto command_condition_restart_29;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto label_33;

    case 2:
      current_block = (Rpc - LABEL_67_6);
      goto label_32;

    case 3:
      current_block = (Rpc - LABEL_67_7);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_67_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_67_12);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_67_14);
      goto lambda_14;

    case 7:
      current_block = (Rpc - LABEL_67_20);
      goto label_34;

    case 8:
      current_block = (Rpc - LABEL_67_16);
      goto lambda_40;

    case 9:
      current_block = (Rpc - LABEL_67_22);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_67_19);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_67_23);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_67_25);
      goto continuation_20;

    case 13:
      current_block = (Rpc - LABEL_67_27);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_67_32);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_67_28);
      goto lambda_11;

    case 16:
      current_block = (Rpc - LABEL_67_30);
      goto continuation_21;

    case 17:
      current_block = (Rpc - LABEL_67_31);
      goto continuation_19;

    case 18:
      current_block = (Rpc - LABEL_67_34);
      goto continuation_10;

    case 19:
      current_block = (Rpc - LABEL_67_35);
      goto continuation_9;

    case 20:
      current_block = (Rpc - LABEL_67_36);
      goto continuation_8;

    case 21:
      current_block = (Rpc - LABEL_67_38);
      goto continuation_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_condition_restart_38)
DEFLABEL (command_condition_restart_29)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_67_0]))
    goto label_51;
  Wrd7 = Wrd5;

DEFLABEL (label_50)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_67_0]))
    goto label_47;
  Wrd10 = Wrd8;

DEFLABEL (label_46)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_45;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd19.Lng))))
    goto label_45;
  (Wrd13.Obj) = ((Wrd17.pObj) [11]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_44)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_67_8);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_67_3])))
    goto label_42;
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_67_4]);
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_11]));

DEFLABEL (label_42)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_67_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_67_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_67_14])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  ((Wrd11.pObj) [4]) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_67_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_67_16])));
  Rhp += 4;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd23 = Wrd16;
  ((Wrd23.pObj) [2]) = (Wrd13.Obj);
  ((Wrd23.pObj) [3]) = (Wrd10.Obj);
  ((Wrd23.pObj) [4]) = Rvl;
  ((Wrd23.pObj) [5]) = (Wrd5.Obj);
  (Rsp [5]) = (Wrd15.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_18]));

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_9]));

DEFLABEL (label_45)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_67_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_2]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_1]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_49;
  Wrd33 = Wrd37;

DEFLABEL (label_48)
  Wrd10 = Wrd33;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_6])), (Wrd34.pObj));

DEFLABEL (label_32)
  (Wrd33.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_0]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_53;
  Wrd39 = Wrd43;

DEFLABEL (label_52)
  Wrd7 = Wrd39;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_5])), (Wrd40.pObj));

DEFLABEL (label_33)
  (Wrd39.Obj) = Rvl;
  goto label_52;

DEFLABEL (lambda_39)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_67_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = ((Wrd6.pObj) [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_55;
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_55;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd28.Lng) - (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_55;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_54)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_67_19);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_26]));

DEFLABEL (label_55)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [4]);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_20]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_67_16);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_61;
  if ((Wrd7.Obj) == (current_block [OBJECT_67_5]))
    goto label_59;

DEFLABEL (label_58)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_23]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_67_6]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_24]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_67_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_29]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_67_27);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd22.Obj) = ((Wrd6.pObj) [4]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_57;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd28.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_57;
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_56)
  (Wrd30.Obj) = (current_block [OBJECT_67_5]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_67_8]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_33]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_67_31);
  (Rsp [1]) = Rvl;
  goto lambda_14;

DEFLABEL (label_57)
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [4]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_32]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_25]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_67_7]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_24]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_67_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_29]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_67_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_67_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_39]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_67_38);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_67_5]);
  (Rsp [1]) = (Wrd10.Obj);
  goto lambda_14;

DEFLABEL (label_60)
  Rvl = (current_block [OBJECT_67_12]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd30.Obj) = (current_block [OBJECT_67_5]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_22]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_59;

DEFLABEL (lambda_41)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_67_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_35]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_67_9]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_36]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_37]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_67_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_40]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_67_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_24]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_67_34);
  (Wrd5.Obj) = (current_block [OBJECT_67_11]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_24]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_6 7
#define LABEL_68_8 9
#define LABEL_68_7 11
#define ENVIRONMENT_LABEL_68_3 27
#define DEBUGGING_LABEL_68_2 26
#define OBJECT_68_3 25
#define OBJECT_68_2 24
#define OBJECT_68_1 23
#define OBJECT_68_0 22
#define EXECUTE_CACHE_68_11 13
#define EXECUTE_CACHE_68_10 15
#define EXECUTE_CACHE_68_9 17
#define FREE_REFERENCE_68_1 20
#define FREE_REFERENCE_68_0 21
#define FREE_REFERENCES_LABEL_68_0 12
#define NUMBER_OF_LINKER_SECTIONS_68_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_68_4);
      goto command_return_from_8;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_68_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_68_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_68_7);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_return_from_14)
DEFLABEL (command_return_from_8)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_68_0]))
    goto label_23;
  Wrd7 = Wrd5;

DEFLABEL (label_22)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_68_0]))
    goto label_19;
  Wrd10 = Wrd8;

DEFLABEL (label_18)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_17;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_17;
  (Wrd16.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_68_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = Rvl;
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_11]));

DEFLABEL (label_15)
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_68_3]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_10]));

DEFLABEL (label_17)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_68_1]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_2]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_21;
  Wrd30 = Wrd34;

DEFLABEL (label_20)
  Wrd10 = Wrd30;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_6])), (Wrd31.pObj));

DEFLABEL (label_11)
  (Wrd30.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_25;
  Wrd36 = Wrd40;

DEFLABEL (label_24)
  Wrd7 = Wrd36;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_5])), (Wrd37.pObj));

DEFLABEL (label_12)
  (Wrd36.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define LABEL_69_6 7
#define LABEL_69_7 9
#define ENVIRONMENT_LABEL_69_3 20
#define DEBUGGING_LABEL_69_2 19
#define OBJECT_69_2 18
#define OBJECT_69_1 17
#define OBJECT_69_0 16
#define EXECUTE_CACHE_69_8 11
#define FREE_REFERENCE_69_1 14
#define FREE_REFERENCE_69_0 15
#define FREE_REFERENCES_LABEL_69_0 10
#define NUMBER_OF_LINKER_SECTIONS_69_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_69_4);
      goto command_return_to_6;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_69_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_69_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_return_to_12)
DEFLABEL (command_return_to_6)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_69_0]))
    goto label_20;
  Wrd7 = Wrd5;

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_69_0]))
    goto label_16;
  Wrd10 = Wrd8;

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_14;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_14;
  (Wrd12.Obj) = ((Wrd18.pObj) [2]);

DEFLABEL (label_13)
  (Wrd28.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd28.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_8]));

DEFLABEL (label_14)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_69_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_2]), 2);

DEFLABEL (label_8)
  (Wrd12.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_1]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_18;
  Wrd29 = Wrd33;

DEFLABEL (label_17)
  Wrd10 = Wrd29;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_6])), (Wrd30.pObj));

DEFLABEL (label_9)
  (Wrd29.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_0]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_22;
  Wrd35 = Wrd39;

DEFLABEL (label_21)
  Wrd7 = Wrd35;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_5])), (Wrd36.pObj));

DEFLABEL (label_10)
  (Wrd35.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_8 7
#define LABEL_70_7 9
#define LABEL_70_14 11
#define LABEL_70_10 13
#define LABEL_70_15 15
#define LABEL_70_11 17
#define LABEL_70_20 19
#define LABEL_70_12 21
#define LABEL_70_18 23
#define LABEL_70_16 25
#define LABEL_70_24 27
#define LABEL_70_26 29
#define LABEL_70_28 31
#define LABEL_70_31 33
#define LABEL_70_37 35
#define LABEL_70_32 37
#define TAG_70_33 17
#define LABEL_70_29 39
#define LABEL_70_35 41
#define LABEL_70_39 43
#define ENVIRONMENT_LABEL_70_3 89
#define DEBUGGING_LABEL_70_2 88
#define OBJECT_70_10 87
#define OBJECT_70_9 86
#define OBJECT_70_8 85
#define OBJECT_70_7 84
#define OBJECT_70_6 83
#define OBJECT_70_5 82
#define OBJECT_70_4 81
#define OBJECT_70_3 80
#define OBJECT_70_2 79
#define OBJECT_70_1 78
#define OBJECT_70_0 77
#define EXECUTE_CACHE_70_40 45
#define EXECUTE_CACHE_70_38 47
#define EXECUTE_CACHE_70_36 49
#define EXECUTE_CACHE_70_34 51
#define EXECUTE_CACHE_70_30 53
#define EXECUTE_CACHE_70_27 55
#define EXECUTE_CACHE_70_25 57
#define EXECUTE_CACHE_70_23 59
#define EXECUTE_CACHE_70_22 61
#define EXECUTE_CACHE_70_21 63
#define EXECUTE_CACHE_70_19 65
#define EXECUTE_CACHE_70_17 67
#define EXECUTE_CACHE_70_13 69
#define EXECUTE_CACHE_70_9 71
#define EXECUTE_CACHE_70_6 73
#define FREE_REFERENCE_70_0 76
#define FREE_REFERENCES_LABEL_70_0 44
#define NUMBER_OF_LINKER_SECTIONS_70_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_70_4);
      goto enter_subproblem_25;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_70_8);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_70_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_70_14);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_70_10);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_70_15);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_70_11);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_70_20);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_70_12);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_70_18);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_70_16);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_70_24);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_70_26);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_70_28);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_70_31);
      goto continuation_19;

    case 16:
      current_block = (Rpc - LABEL_70_37);
      goto label_30;

    case 17:
      current_block = (Rpc - LABEL_70_32);
      goto lambda_33;

    case 18:
      current_block = (Rpc - LABEL_70_29);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_70_35);
      goto continuation_13;

    case 20:
      current_block = (Rpc - LABEL_70_39);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (enter_subproblem_32)
DEFLABEL (enter_subproblem_25)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_70_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_42;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_42;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_70_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd18.Obj) = (current_block [OBJECT_70_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto label_34;

DEFLABEL (label_35)
  (Wrd20.Obj) = (current_block [OBJECT_70_2]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_34)
DEFLABEL (label_40)
  (Wrd19.Obj) = (current_block [OBJECT_70_4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_70_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_70_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;

DEFLABEL (label_36)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_22]));

DEFLABEL (label_37)
  if (! (Rvl == (current_block [OBJECT_70_6])))
    goto label_36;
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_39;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd19.Lng))))
    goto label_39;
  (Wrd13.Obj) = ((Wrd17.pObj) [8]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_38)
  (Wrd27.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_21]));

DEFLABEL (label_39)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_70_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_20]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_42)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_70_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_70_10);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_48;
  Wrd6 = Wrd10;

DEFLABEL (label_47)
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_70_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_70_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_70_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_19]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_70_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_36]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_70_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_70_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_40]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_70_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_43;
  Rvl = (current_block [OBJECT_70_5]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_17]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_70_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_27]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_70_26);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_31]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_70_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_70_32])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_70_8]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_34]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_70_31);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_45;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_45;
  (Wrd5.Obj) = ((Wrd11.pObj) [11]);

DEFLABEL (label_44)
  (Rsp [4]) = (Wrd5.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_38]));

DEFLABEL (label_45)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_70_9]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_37]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_30]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_70_29);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_15])), (Wrd7.pObj));

DEFLABEL (label_28)
  (Wrd6.Obj) = Rvl;
  goto label_47;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_70_32);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_30]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_70_39);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define ENVIRONMENT_LABEL_71_3 12
#define DEBUGGING_LABEL_71_2 11
#define OBJECT_71_1 10
#define OBJECT_71_0 9
#define EXECUTE_CACHE_71_6 7
#define FREE_REFERENCES_LABEL_71_0 6
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_71_4);
      goto dstate_other_thread_2;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstate_other_thread_6)
DEFLABEL (dstate_other_thread_2)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd5.Obj) = ((Wrd11.pObj) [11]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_6]));

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_71_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define ENVIRONMENT_LABEL_72_3 6
#define DEBUGGING_LABEL_72_2 5
#define OBJECT_72_0 4
#define FREE_REFERENCES_LABEL_72_0 4
#define NUMBER_OF_LINKER_SECTIONS_72_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_72_4);
      goto default_debugger_before_return_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_debugger_before_return_3)
DEFLABEL (default_debugger_before_return_0)
  INTERRUPT_CHECK (26, LABEL_72_4);
  Rvl = (current_block [OBJECT_72_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_7 5
#define LABEL_73_5 7
#define TAG_73_6 2
#define LABEL_73_11 9
#define LABEL_73_12 11
#define LABEL_73_13 13
#define LABEL_73_14 15
#define LABEL_73_15 17
#define LABEL_73_16 19
#define LABEL_73_9 21
#define ENVIRONMENT_LABEL_73_3 40
#define DEBUGGING_LABEL_73_2 39
#define OBJECT_73_3 38
#define OBJECT_73_2 37
#define OBJECT_73_1 36
#define OBJECT_73_0 35
#define EXECUTE_CACHE_73_17 23
#define EXECUTE_CACHE_73_10 25
#define EXECUTE_CACHE_73_8 27
#define FREE_REFERENCE_73_1 30
#define FREE_REFERENCE_73_0 31
#define FREE_ASSIGNMENT_73_1 33
#define FREE_ASSIGNMENT_73_0 34
#define FREE_REFERENCES_LABEL_73_0 22
#define NUMBER_OF_LINKER_SECTIONS_73_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
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
      goto command_internal_16;

    case 1:
      current_block = (Rpc - LABEL_73_7);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_73_5);
      goto swapB_26;

    case 3:
      current_block = (Rpc - LABEL_73_11);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_73_12);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_73_13);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_73_14);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_73_15);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_73_16);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_73_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_internal_25)
DEFLABEL (command_internal_16)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_73_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73_5])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-1]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd20.pObj)));
  (Rsp [2]) = (Wrd21.Obj);
  Wrd13 = Wrd23;
  ((Wrd13.pObj) [2]) = (Wrd21.Obj);
  ((Wrd13.pObj) [3]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_7]))));
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [0]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_8]));

DEFLABEL (lambda_27)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_73_7);
  (Wrd5.Obj) = (current_block [OBJECT_73_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_73_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_73_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_73_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_17]));

DEFLABEL (swapB_26)
  CLOSURE_HEADER (LABEL_73_5);

DEFLABEL (swapB_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_45;

DEFLABEL (label_44)
  Wrd5 = Wrd9;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_73_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_42;

DEFLABEL (label_41)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_40)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_73_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_39;

DEFLABEL (label_38)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_37)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  Wrd57 = Wrd61;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_73_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_31)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [2]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_73_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_73_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_73_16])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_23)
  goto label_28;

DEFLABEL (label_33)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_73_15])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_22)
  goto label_31;

DEFLABEL (label_36)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_73_14])), (Wrd58.pObj));

DEFLABEL (label_21)
  (Wrd57.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_39)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_38;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_73_13])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_20)
  goto label_37;

DEFLABEL (label_42)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_41;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_73_12])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_19)
  goto label_40;

DEFLABEL (label_45)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_44;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_73_11])), (Wrd6.pObj));

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_6 7
#define LABEL_74_7 9
#define TAG_74_8 3
#define LABEL_74_10 11
#define LABEL_74_13 13
#define LABEL_74_12 15
#define LABEL_74_18 17
#define LABEL_74_15 19
#define TAG_74_16 8
#define LABEL_74_17 21
#define LABEL_74_20 23
#define ENVIRONMENT_LABEL_74_3 48
#define DEBUGGING_LABEL_74_2 47
#define OBJECT_74_4 46
#define OBJECT_74_3 45
#define OBJECT_74_2 44
#define OBJECT_74_1 43
#define OBJECT_74_0 42
#define EXECUTE_CACHE_74_23 25
#define EXECUTE_CACHE_74_22 27
#define EXECUTE_CACHE_74_21 29
#define EXECUTE_CACHE_74_19 31
#define EXECUTE_CACHE_74_14 33
#define EXECUTE_CACHE_74_11 35
#define EXECUTE_CACHE_74_9 37
#define FREE_REFERENCE_74_1 40
#define FREE_REFERENCE_74_0 41
#define FREE_REFERENCES_LABEL_74_0 24
#define NUMBER_OF_LINKER_SECTIONS_74_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_74_4);
      goto command_frame_13;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_74_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_74_7);
      goto lambda_21;

    case 4:
      current_block = (Rpc - LABEL_74_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_74_13);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_74_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_74_18);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_74_15);
      goto lambda_22;

    case 9:
      current_block = (Rpc - LABEL_74_17);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_74_20);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_frame_20)
DEFLABEL (command_frame_13)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_74_0]))
    goto label_28;
  Wrd7 = Wrd5;

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_74_0]))
    goto label_24;
  Wrd10 = Wrd8;

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_7])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  ((Wrd16.pObj) [2]) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_9]));

DEFLABEL (label_24)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_26;
  Wrd19 = Wrd23;

DEFLABEL (label_25)
  Wrd10 = Wrd19;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74_6])), (Wrd20.pObj));

DEFLABEL (label_15)
  (Wrd19.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_30;
  Wrd25 = Wrd29;

DEFLABEL (label_29)
  Wrd7 = Wrd25;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74_5])), (Wrd26.pObj));

DEFLABEL (label_16)
  (Wrd25.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_74_7);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_74_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_74_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd26.Obj) = ((Wrd9.pObj) [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 62))
    goto label_34;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd23.Lng))))
    goto label_34;
  (Wrd15.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_74_12);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_15])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd29.Obj) = ((Wrd9.pObj) [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_32;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd26.Lng))))
    goto label_32;
  (Wrd18.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_74_17);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_22]));

DEFLABEL (label_32)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [3]);
  (Wrd34.Obj) = (current_block [OBJECT_74_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_18]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_3]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [3]);
  (Wrd31.Obj) = (current_block [OBJECT_74_2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_3]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_74_15);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_74_20);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_74_4]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_23]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_6 7
#define LABEL_75_7 9
#define TAG_75_8 3
#define LABEL_75_10 11
#define LABEL_75_13 13
#define LABEL_75_12 15
#define LABEL_75_15 17
#define LABEL_75_17 19
#define ENVIRONMENT_LABEL_75_3 41
#define DEBUGGING_LABEL_75_2 40
#define OBJECT_75_3 39
#define OBJECT_75_2 38
#define OBJECT_75_1 37
#define OBJECT_75_0 36
#define EXECUTE_CACHE_75_19 21
#define EXECUTE_CACHE_75_18 23
#define EXECUTE_CACHE_75_16 25
#define EXECUTE_CACHE_75_14 27
#define EXECUTE_CACHE_75_11 29
#define EXECUTE_CACHE_75_9 31
#define FREE_REFERENCE_75_1 34
#define FREE_REFERENCE_75_0 35
#define FREE_REFERENCES_LABEL_75_0 20
#define NUMBER_OF_LINKER_SECTIONS_75_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_75_4);
      goto command_print_frame_elements_11;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_75_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_75_7);
      goto lambda_18;

    case 4:
      current_block = (Rpc - LABEL_75_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_75_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_75_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_75_15);
      goto lambda_8;

    case 8:
      current_block = (Rpc - LABEL_75_17);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (command_print_frame_elements_17)
DEFLABEL (command_print_frame_elements_11)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_75_0]))
    goto label_25;
  Wrd7 = Wrd5;

DEFLABEL (label_24)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_75_0]))
    goto label_21;
  Wrd10 = Wrd8;

DEFLABEL (label_20)
  (Rsp [1]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_7])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  ((Wrd16.pObj) [2]) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_9]));

DEFLABEL (label_21)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_23;
  Wrd19 = Wrd23;

DEFLABEL (label_22)
  Wrd10 = Wrd19;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_6])), (Wrd20.pObj));

DEFLABEL (label_13)
  (Wrd19.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_27;
  Wrd25 = Wrd29;

DEFLABEL (label_26)
  Wrd7 = Wrd25;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_5])), (Wrd26.pObj));

DEFLABEL (label_14)
  (Wrd25.Obj) = Rvl;
  goto label_26;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_75_7);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_75_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_75_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_29;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_29;
  (Wrd12.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_75_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_15]))));
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_16]));

DEFLABEL (label_29)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [3]);
  (Wrd28.Obj) = (current_block [OBJECT_75_2]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_3]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (lambda_19)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_75_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_75_17);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_19]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define LABEL_76_6 7
#define LABEL_76_7 9
#define LABEL_76_8 11
#define ENVIRONMENT_LABEL_76_3 24
#define DEBUGGING_LABEL_76_2 23
#define OBJECT_76_7 22
#define OBJECT_76_6 21
#define OBJECT_76_5 20
#define OBJECT_76_4 19
#define OBJECT_76_3 18
#define OBJECT_76_2 17
#define OBJECT_76_1 16
#define OBJECT_76_0 15
#define EXECUTE_CACHE_76_9 13
#define FREE_REFERENCES_LABEL_76_0 12
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd51;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
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
      current_block = (Rpc - LABEL_76_4);
      goto maybe_start_using_historyB_5;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_76_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_76_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_76_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_start_using_historyB_12)
DEFLABEL (maybe_start_using_historyB_5)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_21)
  if ((Wrd5.Obj) == (current_block [OBJECT_76_2]))
    goto label_14;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_76_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 62))
    goto label_20;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd57.Lng))))
    goto label_20;
  (Wrd51.Obj) = (current_block [OBJECT_76_3]);
  ((Wrd55.pObj) [7]) = (Wrd51.Obj);

DEFLABEL (label_19)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_18;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_18;
  (Wrd24.Obj) = ((Wrd30.pObj) [5]);

DEFLABEL (label_17)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_16;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if ((Wrd48.Lng) == 0)
    goto label_13;

DEFLABEL (label_15)
  (Wrd46.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd46.Obj);
  (Wrd47.Obj) = (current_block [OBJECT_76_6]);
  (Rsp [1]) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_9]));

DEFLABEL (label_16)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_13;

DEFLABEL (label_18)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_76_5]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

DEFLABEL (label_8)
  (Wrd24.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.Obj) = (current_block [OBJECT_76_0]);
  (Wrd62.Obj) = (current_block [OBJECT_76_3]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_6]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_4]), 3);

DEFLABEL (label_10)
  goto label_19;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_76_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define LABEL_77_6 7
#define LABEL_77_7 9
#define LABEL_77_8 11
#define ENVIRONMENT_LABEL_77_3 24
#define DEBUGGING_LABEL_77_2 23
#define OBJECT_77_7 22
#define OBJECT_77_6 21
#define OBJECT_77_5 20
#define OBJECT_77_4 19
#define OBJECT_77_3 18
#define OBJECT_77_2 17
#define OBJECT_77_1 16
#define OBJECT_77_0 15
#define EXECUTE_CACHE_77_9 13
#define FREE_REFERENCES_LABEL_77_0 12
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd51;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
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
      current_block = (Rpc - LABEL_77_4);
      goto maybe_stop_using_historyB_5;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_77_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_77_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_77_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_stop_using_historyB_12)
DEFLABEL (maybe_stop_using_historyB_5)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_21)
  if ((Wrd5.Obj) == (current_block [OBJECT_77_2]))
    goto label_14;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_77_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 62))
    goto label_20;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd57.Lng))))
    goto label_20;
  (Wrd51.Obj) = (current_block [OBJECT_77_3]);
  ((Wrd55.pObj) [7]) = (Wrd51.Obj);

DEFLABEL (label_19)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_18;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_18;
  (Wrd24.Obj) = ((Wrd30.pObj) [5]);

DEFLABEL (label_17)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_16;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if ((Wrd48.Lng) == 0)
    goto label_13;

DEFLABEL (label_15)
  (Wrd46.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd46.Obj);
  (Wrd47.Obj) = (current_block [OBJECT_77_6]);
  (Rsp [1]) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_9]));

DEFLABEL (label_16)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_13;

DEFLABEL (label_18)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_77_5]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_8)
  (Wrd24.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.Obj) = (current_block [OBJECT_77_0]);
  (Wrd62.Obj) = (current_block [OBJECT_77_3]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_6]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_4]), 3);

DEFLABEL (label_10)
  goto label_19;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_77_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define LABEL_78_6 7
#define ENVIRONMENT_LABEL_78_3 14
#define DEBUGGING_LABEL_78_2 13
#define OBJECT_78_4 12
#define OBJECT_78_3 11
#define OBJECT_78_2 10
#define OBJECT_78_1 9
#define OBJECT_78_0 8
#define FREE_REFERENCES_LABEL_78_0 8
#define NUMBER_OF_LINKER_SECTIONS_78_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_78_4);
      goto dstate_using_historyP_3;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_78_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstate_using_historyP_8)
DEFLABEL (dstate_using_historyP_3)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_14)
  if ((Wrd5.Obj) == (current_block [OBJECT_78_2]))
    goto label_10;
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_13;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd30.Lng))))
    goto label_13;
  (Wrd22.Obj) = ((Wrd28.pObj) [7]);

DEFLABEL (label_12)
  if ((Wrd22.Obj) == (current_block [OBJECT_78_3]))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_78_4]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (current_block [OBJECT_78_0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_6]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_6)
  (Wrd22.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_78_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define ENVIRONMENT_LABEL_79_3 11
#define DEBUGGING_LABEL_79_2 10
#define OBJECT_79_3 9
#define OBJECT_79_2 8
#define OBJECT_79_1 7
#define OBJECT_79_0 6
#define FREE_REFERENCES_LABEL_79_0 6
#define NUMBER_OF_LINKER_SECTIONS_79_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_79_4);
      goto dstate_auto_toggleP_2;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dstate_auto_toggleP_6)
DEFLABEL (dstate_auto_toggleP_2)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_10)
  if ((Wrd5.Obj) == (current_block [OBJECT_79_2]))
    goto label_8;
  Rvl = (current_block [OBJECT_79_3]);
  goto label_7;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_79_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_6 7
#define LABEL_80_7 9
#define LABEL_80_9 11
#define LABEL_80_10 13
#define LABEL_80_13 15
#define LABEL_80_11 17
#define LABEL_80_14 19
#define LABEL_80_17 21
#define TAG_80_18 9
#define LABEL_80_19 23
#define LABEL_80_20 25
#define LABEL_80_21 27
#define ENVIRONMENT_LABEL_80_3 50
#define DEBUGGING_LABEL_80_2 49
#define OBJECT_80_9 48
#define OBJECT_80_8 47
#define OBJECT_80_7 46
#define OBJECT_80_6 45
#define OBJECT_80_5 44
#define OBJECT_80_4 43
#define OBJECT_80_3 42
#define OBJECT_80_2 41
#define OBJECT_80_1 40
#define OBJECT_80_0 39
#define EXECUTE_CACHE_80_22 29
#define EXECUTE_CACHE_80_16 31
#define EXECUTE_CACHE_80_15 33
#define EXECUTE_CACHE_80_12 35
#define EXECUTE_CACHE_80_8 37
#define FREE_REFERENCES_LABEL_80_0 28
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd41;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_80_4);
      goto set_current_subproblemB_13;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_80_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_80_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_80_9);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_80_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_80_13);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_80_11);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_80_14);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_80_17);
      goto lambda_23;

    case 10:
      current_block = (Rpc - LABEL_80_19);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_80_20);
      goto label_19;

    case 12:
      current_block = (Rpc - LABEL_80_21);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_current_subproblemB_22)
DEFLABEL (set_current_subproblemB_13)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_31;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd34.Lng))))
    goto label_31;
  (Wrd28.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [2]) = (Wrd28.Obj);

DEFLABEL (label_30)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_29;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_29;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd11.Obj);

DEFLABEL (label_28)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_80_7);
  (Wrd5.Obj) = Rvl;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_27;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_27;
  ((Wrd18.pObj) [4]) = Rvl;

DEFLABEL (label_26)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_80_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_80_10);
  (Wrd5.Obj) = Rvl;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_25;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_25;
  ((Wrd15.pObj) [5]) = Rvl;

DEFLABEL (label_24)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_14]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_15]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_80_14);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_80_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_80_17])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_25)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_80_4]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 3);

DEFLABEL (label_18)
  goto label_24;

DEFLABEL (label_27)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_80_3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 3);

DEFLABEL (label_17)
  goto label_26;

DEFLABEL (label_29)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_80_2]);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 3);

DEFLABEL (label_15)
  goto label_28;

DEFLABEL (label_31)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_80_0]);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 3);

DEFLABEL (label_16)
  goto label_30;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_80_17);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [2]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 62))
    goto label_40;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd49.Lng))))
    goto label_40;
  (Wrd41.Obj) = (Rsp [1]);
  ((Wrd47.pObj) [8]) = (Wrd41.Obj);

DEFLABEL (label_39)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_38;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd24.Lng))))
    goto label_38;
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [9]) = (Wrd16.Obj);

DEFLABEL (label_37)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_80_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd7.Obj) = (current_block [OBJECT_80_7]);
  goto label_32;

DEFLABEL (label_33)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_80_7]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));

DEFLABEL (label_32)
DEFLABEL (label_36)
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_8]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 62)
    goto label_35;

DEFLABEL (label_34)
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 3);

DEFLABEL (label_35)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd19.Lng))))
    goto label_34;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [10]) = (Wrd12.Obj);
  Rvl = (current_block [OBJECT_80_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [2]);
  (Wrd32.Obj) = (current_block [OBJECT_80_6]);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_20]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 3);

DEFLABEL (label_19)
  goto label_37;

DEFLABEL (label_40)
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd54.Obj) = ((Wrd56.pObj) [2]);
  (Wrd57.Obj) = (current_block [OBJECT_80_5]);
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_19]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 3);

DEFLABEL (label_20)
  goto label_39;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_7 5
#define LABEL_81_5 7
#define LABEL_81_9 9
#define LABEL_81_10 11
#define LABEL_81_11 13
#define ENVIRONMENT_LABEL_81_3 29
#define DEBUGGING_LABEL_81_2 28
#define OBJECT_81_4 27
#define OBJECT_81_3 26
#define OBJECT_81_2 25
#define OBJECT_81_1 24
#define OBJECT_81_0 23
#define EXECUTE_CACHE_81_13 15
#define EXECUTE_CACHE_81_12 17
#define EXECUTE_CACHE_81_8 19
#define EXECUTE_CACHE_81_6 21
#define FREE_REFERENCES_LABEL_81_0 14
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd50;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
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
      current_block = (Rpc - LABEL_81_4);
      goto finish_move_to_subproblemB_5;

    case 1:
      current_block = (Rpc - LABEL_81_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_81_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_81_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_81_11);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finish_move_to_subproblemB_11)
DEFLABEL (finish_move_to_subproblemB_5)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_81_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_18;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_18;
  (Wrd7.Obj) = ((Wrd13.pObj) [5]);

DEFLABEL (label_17)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_16;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd50.Lng) > 0))
    goto label_12;

DEFLABEL (label_15)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_7]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_81_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (Wrd53.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd54.Obj);
  (Wrd55.Obj) = (current_block [OBJECT_81_0]);
  (Rsp [2]) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_8]));

DEFLABEL (label_12)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_14;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd37.Lng))))
    goto label_14;
  ((Wrd35.pObj) [6]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_12]));

DEFLABEL (label_14)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (current_block [OBJECT_81_3]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_11]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_4]), 3);

DEFLABEL (label_9)
  goto label_13;

DEFLABEL (label_16)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_15;

DEFLABEL (label_18)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_81_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_2]), 2);

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define LABEL_82_6 7
#define LABEL_82_8 9
#define LABEL_82_9 11
#define LABEL_82_10 13
#define ENVIRONMENT_LABEL_82_3 26
#define DEBUGGING_LABEL_82_2 25
#define OBJECT_82_5 24
#define OBJECT_82_4 23
#define OBJECT_82_3 22
#define OBJECT_82_2 21
#define OBJECT_82_1 20
#define OBJECT_82_0 19
#define EXECUTE_CACHE_82_11 15
#define EXECUTE_CACHE_82_7 17
#define FREE_REFERENCES_LABEL_82_0 14
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_82_4);
      goto move_to_reductionB_6;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_82_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_82_8);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_82_9);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_82_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (move_to_reductionB_13)
DEFLABEL (move_to_reductionB_6)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_21;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_21;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd11.Obj);

DEFLABEL (label_20)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_82_6);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_19;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_18)
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_17;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd13.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_16)
  (Wrd23.Obj) = (current_block [OBJECT_82_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  ((Wrd32.pObj) [10]) = (Wrd20.Obj);

DEFLABEL (label_14)
  (Wrd24.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_11]));

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_82_5]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_10]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 3);

DEFLABEL (label_11)
  goto label_14;

DEFLABEL (label_17)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_3]), 1);

DEFLABEL (label_10)
  (Wrd13.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_2]), 1);

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_82_0]);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 3);

DEFLABEL (label_8)
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define LABEL_83_7 7
#define LABEL_83_6 9
#define ENVIRONMENT_LABEL_83_3 19
#define DEBUGGING_LABEL_83_2 18
#define OBJECT_83_2 17
#define OBJECT_83_1 16
#define OBJECT_83_0 15
#define EXECUTE_CACHE_83_8 11
#define FREE_REFERENCE_83_0 14
#define FREE_REFERENCES_LABEL_83_0 10
#define NUMBER_OF_LINKER_SECTIONS_83_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_83_4);
      goto special_history_subproblemP_2;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_83_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_83_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (special_history_subproblemP_7)
DEFLABEL (special_history_subproblemP_2)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_83_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_12;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_12;
  (Wrd16.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_83_6);
  (Wrd5.Obj) = (* (Rsp++));
  if (Rvl == (Wrd5.Obj))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_83_2]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_83_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define LABEL_84_6 7
#define LABEL_84_7 9
#define ENVIRONMENT_LABEL_84_3 13
#define DEBUGGING_LABEL_84_2 12
#define OBJECT_84_1 11
#define OBJECT_84_0 10
#define FREE_REFERENCES_LABEL_84_0 10
#define NUMBER_OF_LINKER_SECTIONS_84_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_84_4);
      goto improper_list_length_6;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto count_4;

    case 2:
      current_block = (Rpc - LABEL_84_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_84_7);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (improper_list_length_11)
DEFLABEL (improper_list_length_6)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd5.Obj) = (current_block [OBJECT_84_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto count_4;

DEFLABEL (count_12)
DEFLABEL (count_4)
  INTERRUPT_CHECK (26, LABEL_84_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_13;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_17;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd18.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_17;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_15;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd19.Obj);
  goto count_4;

DEFLABEL (label_15)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 1);

DEFLABEL (label_9)
  (Wrd19.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_8)
  (Wrd13.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define LABEL_85_6 7
#define LABEL_85_7 9
#define LABEL_85_8 11
#define ENVIRONMENT_LABEL_85_3 15
#define DEBUGGING_LABEL_85_2 14
#define OBJECT_85_1 13
#define OBJECT_85_0 12
#define FREE_REFERENCES_LABEL_85_0 12
#define NUMBER_OF_LINKER_SECTIONS_85_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_85_4);
      goto nth_reduction_6;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto loop_4;

    case 2:
      current_block = (Rpc - LABEL_85_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_85_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_85_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nth_reduction_12)
DEFLABEL (nth_reduction_6)
  INTERRUPT_CHECK (26, LABEL_85_4);
  goto loop_4;

DEFLABEL (loop_13)
DEFLABEL (loop_4)
  INTERRUPT_CHECK (26, LABEL_85_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_21;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd40.Lng) == 0)
    goto label_19;

DEFLABEL (label_18)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_17;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_15;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd30.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_15;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd25.Obj);
  goto loop_4;

DEFLABEL (label_15)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_10)
  (Wrd25.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_0]), 1);

DEFLABEL (label_9)
  (Wrd12.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd31.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_20;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  Rvl = ((Wrd34.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 1);

DEFLABEL (label_21)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define ENVIRONMENT_LABEL_86_3 6
#define DEBUGGING_LABEL_86_2 5
#define OBJECT_86_0 4
#define FREE_REFERENCES_LABEL_86_0 4
#define NUMBER_OF_LINKER_SECTIONS_86_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_86_4);
      goto reduction_expression_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reduction_expression_3)
DEFLABEL (reduction_expression_0)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_4;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define ENVIRONMENT_LABEL_87_3 9
#define DEBUGGING_LABEL_87_2 8
#define OBJECT_87_1 7
#define OBJECT_87_0 6
#define FREE_REFERENCES_LABEL_87_0 6
#define NUMBER_OF_LINKER_SECTIONS_87_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_87_4);
      goto reduction_environment_1;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reduction_environment_5)
DEFLABEL (reduction_environment_1)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_8;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_6;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd16.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 1);

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_7 7
#define ENVIRONMENT_LABEL_88_3 15
#define DEBUGGING_LABEL_88_2 14
#define OBJECT_88_2 13
#define OBJECT_88_1 12
#define OBJECT_88_0 11
#define EXECUTE_CACHE_88_6 9
#define FREE_REFERENCES_LABEL_88_0 8
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_88_4);
      goto wrap_around_in_reductionsP_4;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_88_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wrap_around_in_reductionsP_8)
DEFLABEL (wrap_around_in_reductionsP_4)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == (current_block [OBJECT_88_0]))
    goto label_16;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd8.uLng) == 1))
    goto label_14;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_88_5);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_13;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_12)
  if ((Wrd6.Obj) == (current_block [OBJECT_88_0]))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_88_1]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_2]), 1);

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_88_1]);
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define ENVIRONMENT_LABEL_89_3 12
#define DEBUGGING_LABEL_89_2 11
#define EXECUTE_CACHE_89_7 7
#define EXECUTE_CACHE_89_6 9
#define FREE_REFERENCES_LABEL_89_0 6
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_89_4);
      goto invalid_expressionP_2;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invalid_expressionP_5)
DEFLABEL (invalid_expressionP_2)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_89_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_5 3
#define LABEL_90_4 5
#define LABEL_90_6 7
#define LABEL_90_7 9
#define LABEL_90_9 11
#define ENVIRONMENT_LABEL_90_3 24
#define DEBUGGING_LABEL_90_2 23
#define OBJECT_90_3 22
#define OBJECT_90_2 21
#define OBJECT_90_1 20
#define OBJECT_90_0 19
#define EXECUTE_CACHE_90_11 13
#define EXECUTE_CACHE_90_10 15
#define EXECUTE_CACHE_90_8 17
#define FREE_REFERENCES_LABEL_90_0 12
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd42;
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
      current_block = (Rpc - LABEL_90_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_90_4);
      goto get_evaluation_environment_6;

    case 2:
      current_block = (Rpc - LABEL_90_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_90_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_90_9);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_evaluation_environment_11)
DEFLABEL (get_evaluation_environment_6)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd7.Obj) = ((Wrd11.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_17)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_13;

DEFLABEL (label_12)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_90_3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_90_9);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_11]));

DEFLABEL (label_13)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd30.Obj);
  if (! ((Wrd22.uLng) == 1))
    goto label_16;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_15)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_90_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd42.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd42.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_14;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  Rvl = ((Wrd45.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_16)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_90_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_2]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_5 5
#define LABEL_91_6 7
#define ENVIRONMENT_LABEL_91_3 15
#define DEBUGGING_LABEL_91_2 14
#define OBJECT_91_2 13
#define OBJECT_91_1 12
#define OBJECT_91_0 11
#define EXECUTE_CACHE_91_7 9
#define FREE_REFERENCES_LABEL_91_0 8
#define NUMBER_OF_LINKER_SECTIONS_91_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_91_4);
      goto with_current_environment_4;

    case 1:
      current_block = (Rpc - LABEL_91_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_91_6);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_current_environment_9)
DEFLABEL (with_current_environment_4)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd7.Obj) = ((Wrd11.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_13)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_10;
  (Wrd23.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd23.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_7]));

DEFLABEL (label_10)
  (Wrd25.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd25.Obj);
  if (! ((Wrd22.uLng) == 1))
    goto label_12;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_11)
  (Rsp [3]) = (Wrd26.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_6]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_2]), 1);

DEFLABEL (label_7)
  (Wrd26.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_91_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define ENVIRONMENT_LABEL_92_3 9
#define DEBUGGING_LABEL_92_2 8
#define OBJECT_92_0 7
#define EXECUTE_CACHE_92_5 5
#define FREE_REFERENCES_LABEL_92_0 4
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_92_4);
      goto undefined_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (undefined_environment_3)
DEFLABEL (undefined_environment_0)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_92_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_5 3
#define LABEL_93_4 5
#define ENVIRONMENT_LABEL_93_3 13
#define DEBUGGING_LABEL_93_2 12
#define OBJECT_93_0 11
#define EXECUTE_CACHE_93_7 7
#define EXECUTE_CACHE_93_6 9
#define FREE_REFERENCES_LABEL_93_0 6
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd14;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_93_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_93_4);
      goto reason_message_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reason_message_4)
DEFLABEL (reason_message_1)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_93_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_93_5);
  (Wrd14.Obj) = Rvl;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_6]));

DEFLABEL (label_6)
  (Wrd14.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define LABEL_94_6 7
#define LABEL_94_7 9
#define LABEL_94_10 11
#define TAG_94_11 4
#define LABEL_94_8 13
#define TAG_94_9 5
#define LABEL_94_14 15
#define LABEL_94_15 17
#define LABEL_94_16 19
#define LABEL_94_17 21
#define LABEL_94_18 23
#define LABEL_94_19 25
#define LABEL_94_20 27
#define LABEL_94_21 29
#define LABEL_94_22 31
#define ENVIRONMENT_LABEL_94_3 51
#define DEBUGGING_LABEL_94_2 50
#define OBJECT_94_1 49
#define OBJECT_94_0 48
#define EXECUTE_CACHE_94_13 33
#define EXECUTE_CACHE_94_12 35
#define FREE_REFERENCE_94_5 38
#define FREE_REFERENCE_94_4 39
#define FREE_REFERENCE_94_3 40
#define FREE_REFERENCE_94_2 41
#define FREE_REFERENCE_94_1 42
#define FREE_REFERENCE_94_0 43
#define FREE_ASSIGNMENT_94_2 45
#define FREE_ASSIGNMENT_94_1 46
#define FREE_ASSIGNMENT_94_0 47
#define FREE_REFERENCES_LABEL_94_0 32
#define NUMBER_OF_LINKER_SECTIONS_94_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_94_4);
      goto debugger_pp_21;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_94_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_94_7);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_94_10);
      goto lambda_38;

    case 5:
      current_block = (Rpc - LABEL_94_8);
      goto swapB_37;

    case 6:
      current_block = (Rpc - LABEL_94_14);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_94_15);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_94_16);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_94_17);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_94_18);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_94_19);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_94_20);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_94_21);
      goto label_33;

    case 14:
      current_block = (Rpc - LABEL_94_22);
      goto label_34;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debugger_pp_36)
DEFLABEL (debugger_pp_21)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_44;
  Wrd5 = Wrd9;

DEFLABEL (label_43)
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_42;
  Wrd14 = Wrd18;

DEFLABEL (label_41)
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_40;
  Wrd23 = Wrd27;

DEFLABEL (label_39)
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd30.pObj) = (& (Rhp [-1]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd53.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_8])));
  Rhp += 3;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd53.pObj)));
  (* (--Rsp)) = (Wrd54.Obj);
  Wrd51 = Wrd53;
  (Wrd52.Obj) = (Rsp [3]);
  ((Wrd51.pObj) [2]) = (Wrd52.Obj);
  (Wrd49.Obj) = (Rsp [2]);
  ((Wrd51.pObj) [3]) = (Wrd49.Obj);
  ((Wrd51.pObj) [4]) = (Wrd31.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_10])));
  Rhp += 3;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  Wrd39 = Wrd34;
  (Wrd40.Obj) = (Rsp [6]);
  ((Wrd39.pObj) [2]) = (Wrd40.Obj);
  (Wrd38.Obj) = (Rsp [5]);
  ((Wrd39.pObj) [3]) = (Wrd38.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  ((Wrd39.pObj) [4]) = (Wrd36.Obj);
  (Rsp [5]) = (Wrd33.Obj);
  (Rsp [4]) = (Wrd54.Obj);
  (Rsp [6]) = (Wrd54.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_12]));

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_7])), (Wrd24.pObj));

DEFLABEL (label_25)
  (Wrd23.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_6])), (Wrd15.pObj));

DEFLABEL (label_24)
  (Wrd14.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_5])), (Wrd6.pObj));

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_43;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_94_10);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_94_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [3]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_13]));

DEFLABEL (swapB_37)
  CLOSURE_HEADER (LABEL_94_8);

DEFLABEL (swapB_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_71;

DEFLABEL (label_70)
  Wrd5 = Wrd9;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_94_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_68;

DEFLABEL (label_67)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_66)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_94_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_63)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_4]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_62;

DEFLABEL (label_61)
  Wrd57 = Wrd61;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_94_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_57)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [3]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_94_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_54)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_5]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  Wrd109 = Wrd113;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_94_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_48)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [2]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_94_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_47;

DEFLABEL (label_46)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_45)
  Rvl = (current_block [OBJECT_94_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_47)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_46;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_94_22])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_34)
  goto label_45;

DEFLABEL (label_50)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_94_21])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_33)
  goto label_48;

DEFLABEL (label_53)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_52;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_94_20])), (Wrd110.pObj));

DEFLABEL (label_32)
  (Wrd109.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_56)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_55;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_94_19])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_31)
  goto label_54;

DEFLABEL (label_59)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_58;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_94_18])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_30)
  goto label_57;

DEFLABEL (label_62)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_61;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_94_17])), (Wrd58.pObj));

DEFLABEL (label_29)
  (Wrd57.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_65)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_64;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_94_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_28)
  goto label_63;

DEFLABEL (label_68)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_67;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_94_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_27)
  goto label_66;

DEFLABEL (label_71)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_70;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_94_14])), (Wrd6.pObj));

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_69;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define ENVIRONMENT_LABEL_95_3 9
#define DEBUGGING_LABEL_95_2 8
#define OBJECT_95_0 7
#define EXECUTE_CACHE_95_5 5
#define FREE_REFERENCES_LABEL_95_0 4
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_95_4);
      goto prompt_for_nonnegative_integer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prompt_for_nonnegative_integer_3)
DEFLABEL (prompt_for_nonnegative_integer_0)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_95_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_5 5
#define LABEL_96_6 7
#define LABEL_96_11 9
#define LABEL_96_14 11
#define LABEL_96_16 13
#define LABEL_96_7 15
#define LABEL_96_17 17
#define LABEL_96_19 19
#define LABEL_96_20 21
#define LABEL_96_8 23
#define LABEL_96_13 25
#define LABEL_96_12 27
#define LABEL_96_10 29
#define LABEL_96_18 31
#define LABEL_96_21 33
#define LABEL_96_22 35
#define LABEL_96_25 37
#define ENVIRONMENT_LABEL_96_3 67
#define DEBUGGING_LABEL_96_2 66
#define OBJECT_96_14 65
#define OBJECT_96_13 64
#define OBJECT_96_12 63
#define OBJECT_96_11 62
#define OBJECT_96_10 61
#define OBJECT_96_9 60
#define OBJECT_96_8 59
#define OBJECT_96_7 58
#define OBJECT_96_6 57
#define OBJECT_96_5 56
#define OBJECT_96_4 55
#define OBJECT_96_3 54
#define OBJECT_96_2 53
#define OBJECT_96_1 52
#define OBJECT_96_0 51
#define EXECUTE_CACHE_96_24 39
#define EXECUTE_CACHE_96_23 41
#define EXECUTE_CACHE_96_15 43
#define EXECUTE_CACHE_96_27 45
#define EXECUTE_CACHE_96_26 47
#define EXECUTE_CACHE_96_9 49
#define FREE_REFERENCES_LABEL_96_0 38
#define NUMBER_OF_LINKER_SECTIONS_96_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
debug_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd30;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd76;
  machine_word Wrd74;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd86;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd17;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd38;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_96_4);
      goto prompt_for_integer_21;

    case 1:
      current_block = (Rpc - LABEL_96_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_96_6);
      goto loop_19;

    case 3:
      current_block = (Rpc - LABEL_96_11);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_96_14);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_96_16);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_96_7);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_96_17);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_96_19);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_96_20);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_96_8);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_96_13);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_96_12);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_96_10);
      goto continuation_3;

    case 14:
      current_block = (Rpc - LABEL_96_18);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_96_21);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_96_22);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_96_25);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prompt_for_integer_29)
DEFLABEL (prompt_for_integer_21)
  INTERRUPT_CHECK (26, LABEL_96_4);
  goto loop_19;

DEFLABEL (loop_30)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_96_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd17.Obj) = (Rsp [6]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd19.Obj) = (current_block [OBJECT_96_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_32;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_32;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_15]));

DEFLABEL (label_32)
  (Wrd23.Obj) = (Rsp [8]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_14]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_23)
DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd33.Obj) = (current_block [OBJECT_96_1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_31;

DEFLABEL (label_35)
  (Wrd38.Obj) = (Rsp [6]);
  if ((Wrd38.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd40.Obj) = (current_block [OBJECT_96_1]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_10]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd49.uLng) == 26))
    goto label_36;
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd50.Lng) = ((Wrd52.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd50.Lng)))
    goto label_36;
  (Wrd53.Obj) = (LONG_TO_FIXNUM (Wrd50.Lng));
  (* (--Rsp)) = (Wrd53.Obj);
  goto label_31;

DEFLABEL (label_36)
  (Wrd44.Obj) = (Rsp [8]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_11]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_24)
  goto label_33;

DEFLABEL (label_37)
  (Wrd55.Obj) = (current_block [OBJECT_96_0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_55)
  (Wrd56.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_96_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_24]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_96_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd78.Obj) = (current_block [OBJECT_96_3]);
  (Wrd81.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd81.Lng))))
    goto label_54;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd78.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_53;

DEFLABEL (label_52)
  (Wrd13.Obj) = (current_block [OBJECT_96_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_38;
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_4]), 2);

DEFLABEL (label_38)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_40;
  (Wrd15.Obj) = (current_block [OBJECT_96_7]);
  goto label_39;

DEFLABEL (label_40)
  (Wrd15.Obj) = (current_block [OBJECT_96_6]);

DEFLABEL (label_39)
DEFLABEL (label_51)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;

DEFLABEL (label_49)
  (Wrd31.Obj) = (Rsp [2]);
  if ((Wrd31.Obj) == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_48;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_48;
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if ((Wrd74.Lng) < (Wrd76.Lng))
    goto label_47;

DEFLABEL (label_46)
  (Wrd43.Obj) = (Rsp [3]);
  if (! ((Wrd43.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_42;

DEFLABEL (label_41)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_45;
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_45;
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if ((Wrd64.Lng) < (Wrd66.Lng))
    goto label_41;

DEFLABEL (label_44)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_21]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (current_block [OBJECT_96_9]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_43)
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_23]));

DEFLABEL (label_45)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_20]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_41;

DEFLABEL (label_47)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_22]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (current_block [OBJECT_96_10]);
  (* (--Rsp)) = (Wrd70.Obj);
  goto label_43;

DEFLABEL (label_48)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_19]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_47;

DEFLABEL (label_50)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_18]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_96_8]);
  (* (--Rsp)) = (Wrd28.Obj);
  goto label_43;

DEFLABEL (label_53)
  Rsp = (& (Rsp [2]));
  goto label_49;

DEFLABEL (label_54)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_17]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_4]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_53;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_96_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_96_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_25]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_96_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_96_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_27]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_96_5);
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_96_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_96_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_26]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_96_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_96_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_26]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_96_21);
  Rsp = (& (Rsp [1]));
  goto loop_19;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_96_22);
  Rsp = (& (Rsp [1]));
  goto loop_19;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_96_18);
  Rsp = (& (Rsp [1]));
  goto loop_19;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_96_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  goto label_49;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_9 13
#define LABEL_10 15
#define LABEL_11 17
#define LABEL_12 19
#define LABEL_13 21
#define LABEL_14 23
#define LABEL_15 25
#define LABEL_16 27
#define LABEL_17 29
#define LABEL_22 31
#define LABEL_18 33
#define LABEL_20 35
#define LABEL_21 37
#define LABEL_24 39
#define LABEL_25 41
#define TAG_26 19
#define LABEL_27 43
#define LABEL_28 45
#define LABEL_29 47
#define LABEL_30 49
#define LABEL_31 51
#define LABEL_32 53
#define LABEL_33 55
#define LABEL_34 57
#define LABEL_35 59
#define LABEL_36 61
#define LABEL_37 63
#define LABEL_38 65
#define LABEL_39 67
#define LABEL_40 69
#define LABEL_41 71
#define LABEL_42 73
#define LABEL_43 75
#define LABEL_44 77
#define LABEL_45 79
#define LABEL_48 81
#define LABEL_46 83
#define LABEL_47 85
#define LABEL_49 87
#define LABEL_50 89
#define LABEL_51 91
#define LABEL_52 93
#define LABEL_53 95
#define LABEL_54 97
#define LABEL_55 99
#define LABEL_56 101
#define LABEL_58 103
#define LABEL_59 105
#define LABEL_60 107
#define LABEL_61 109
#define LABEL_62 111
#define LABEL_63 113
#define LABEL_64 115
#define LABEL_65 117
#define LABEL_66 119
#define LABEL_67 121
#define LABEL_68 123
#define LABEL_69 125
#define LABEL_70 127
#define LABEL_71 129
#define LABEL_72 131
#define LABEL_73 133
#define LABEL_74 135
#define LABEL_75 137
#define LABEL_76 139
#define LABEL_77 141
#define LABEL_78 143
#define LABEL_79 145
#define LABEL_80 147
#define LABEL_81 149
#define LABEL_82 151
#define LABEL_83 153
#define LABEL_84 155
#define LABEL_85 157
#define LABEL_86 159
#define LABEL_87 161
#define LABEL_88 163
#define LABEL_89 165
#define LABEL_90 167
#define LABEL_91 169
#define LABEL_92 171
#define LABEL_93 173
#define LABEL_94 175
#define LABEL_95 177
#define LABEL_96 179
#define LABEL_97 181
#define LABEL_98 183
#define LABEL_99 185
#define LABEL_100 187
#define LABEL_101 189
#define LABEL_102 191
#define LABEL_103 193
#define LABEL_104 195
#define LABEL_105 197
#define LABEL_106 199
#define LABEL_107 201
#define LABEL_108 203
#define LABEL_109 205
#define LABEL_110 207
#define LABEL_111 209
#define LABEL_112 211
#define LABEL_113 213
#define LABEL_114 215
#define LABEL_115 217
#define LABEL_116 219
#define LABEL_117 221
#define LABEL_118 223
#define LABEL_119 225
#define LABEL_120 227
#define LABEL_121 229
#define LABEL_122 231
#define LABEL_123 233
#define LABEL_124 235
#define LABEL_125 237
#define LABEL_126 239
#define LABEL_127 241
#define LABEL_128 243
#define LABEL_129 245
#define LABEL_130 247
#define ENVIRONMENT_LABEL_3 481
#define DEBUGGING_LABEL_2 480
#define PURIFICATION_ROOT 479
#define OBJECT_221 478
#define OBJECT_220 477
#define OBJECT_219 476
#define OBJECT_218 475
#define OBJECT_217 474
#define OBJECT_216 473
#define OBJECT_215 472
#define OBJECT_214 471
#define OBJECT_213 470
#define OBJECT_212 469
#define OBJECT_211 468
#define OBJECT_210 467
#define OBJECT_209 466
#define OBJECT_208 465
#define OBJECT_207 464
#define OBJECT_206 463
#define OBJECT_205 462
#define OBJECT_204 461
#define OBJECT_203 460
#define OBJECT_202 459
#define OBJECT_201 458
#define OBJECT_200 457
#define OBJECT_199 456
#define OBJECT_198 455
#define OBJECT_197 454
#define OBJECT_196 453
#define OBJECT_195 452
#define OBJECT_194 451
#define OBJECT_193 450
#define OBJECT_192 449
#define OBJECT_191 448
#define OBJECT_190 447
#define OBJECT_189 446
#define OBJECT_188 445
#define OBJECT_187 444
#define OBJECT_186 443
#define OBJECT_185 442
#define OBJECT_184 441
#define OBJECT_183 440
#define OBJECT_182 439
#define OBJECT_181 438
#define OBJECT_180 437
#define OBJECT_179 436
#define OBJECT_178 435
#define OBJECT_177 434
#define OBJECT_176 433
#define OBJECT_175 432
#define OBJECT_174 431
#define OBJECT_173 430
#define OBJECT_172 429
#define OBJECT_171 428
#define OBJECT_170 427
#define OBJECT_169 426
#define OBJECT_168 425
#define OBJECT_167 424
#define OBJECT_166 423
#define OBJECT_165 422
#define OBJECT_164 421
#define OBJECT_163 420
#define OBJECT_162 419
#define OBJECT_161 418
#define OBJECT_160 417
#define OBJECT_159 416
#define OBJECT_158 415
#define OBJECT_157 414
#define OBJECT_156 413
#define OBJECT_155 412
#define OBJECT_154 411
#define OBJECT_153 410
#define OBJECT_152 409
#define OBJECT_151 408
#define OBJECT_150 407
#define OBJECT_149 406
#define OBJECT_148 405
#define OBJECT_147 404
#define OBJECT_146 403
#define OBJECT_145 402
#define OBJECT_144 401
#define OBJECT_143 400
#define OBJECT_142 399
#define OBJECT_141 398
#define OBJECT_140 397
#define OBJECT_139 396
#define OBJECT_138 395
#define OBJECT_137 394
#define OBJECT_136 393
#define OBJECT_135 392
#define OBJECT_134 391
#define OBJECT_133 390
#define OBJECT_132 389
#define OBJECT_131 388
#define OBJECT_130 387
#define OBJECT_129 386
#define OBJECT_128 385
#define OBJECT_127 384
#define OBJECT_126 383
#define OBJECT_125 382
#define OBJECT_124 381
#define OBJECT_123 380
#define OBJECT_122 379
#define OBJECT_121 378
#define OBJECT_120 377
#define OBJECT_119 376
#define OBJECT_118 375
#define OBJECT_117 374
#define OBJECT_116 373
#define OBJECT_115 372
#define OBJECT_114 371
#define OBJECT_113 370
#define OBJECT_112 369
#define OBJECT_111 368
#define OBJECT_110 367
#define OBJECT_109 366
#define OBJECT_108 365
#define OBJECT_107 364
#define OBJECT_106 363
#define OBJECT_105 362
#define OBJECT_104 361
#define OBJECT_103 360
#define OBJECT_102 359
#define OBJECT_101 358
#define OBJECT_100 357
#define OBJECT_99 356
#define OBJECT_98 355
#define OBJECT_97 354
#define OBJECT_96 353
#define OBJECT_95 352
#define OBJECT_94 351
#define OBJECT_93 350
#define OBJECT_92 349
#define OBJECT_91 348
#define OBJECT_90 347
#define OBJECT_89 346
#define OBJECT_88 345
#define OBJECT_87 344
#define OBJECT_86 343
#define OBJECT_85 342
#define OBJECT_84 341
#define OBJECT_83 340
#define OBJECT_82 339
#define OBJECT_81 338
#define OBJECT_80 337
#define OBJECT_79 336
#define OBJECT_78 335
#define OBJECT_77 334
#define OBJECT_76 333
#define OBJECT_75 332
#define OBJECT_74 331
#define OBJECT_73 330
#define OBJECT_72 329
#define OBJECT_71 328
#define OBJECT_70 327
#define OBJECT_69 326
#define OBJECT_68 325
#define OBJECT_67 324
#define OBJECT_66 323
#define OBJECT_65 322
#define OBJECT_64 321
#define OBJECT_63 320
#define OBJECT_62 319
#define OBJECT_61 318
#define OBJECT_60 317
#define OBJECT_59 316
#define OBJECT_58 315
#define OBJECT_57 314
#define OBJECT_56 313
#define OBJECT_55 312
#define OBJECT_54 311
#define OBJECT_53 310
#define OBJECT_52 309
#define OBJECT_51 308
#define OBJECT_50 307
#define OBJECT_49 306
#define OBJECT_48 305
#define OBJECT_47 304
#define OBJECT_46 303
#define OBJECT_45 302
#define OBJECT_44 301
#define OBJECT_43 300
#define OBJECT_42 299
#define OBJECT_41 298
#define OBJECT_40 297
#define OBJECT_39 296
#define OBJECT_38 295
#define OBJECT_37 294
#define OBJECT_36 293
#define OBJECT_35 292
#define OBJECT_34 291
#define OBJECT_33 290
#define OBJECT_32 289
#define OBJECT_31 288
#define OBJECT_30 287
#define OBJECT_29 286
#define OBJECT_28 285
#define OBJECT_27 284
#define OBJECT_26 283
#define OBJECT_25 282
#define OBJECT_24 281
#define OBJECT_23 280
#define OBJECT_22 279
#define OBJECT_21 278
#define OBJECT_20 277
#define OBJECT_19 276
#define OBJECT_18 275
#define OBJECT_17 274
#define OBJECT_16 273
#define OBJECT_15 272
#define OBJECT_14 271
#define OBJECT_13 270
#define OBJECT_12 269
#define OBJECT_11 268
#define OBJECT_10 267
#define OBJECT_9 266
#define OBJECT_8 265
#define OBJECT_7 264
#define OBJECT_6 263
#define OBJECT_5 262
#define OBJECT_4 261
#define OBJECT_3 260
#define OBJECT_2 259
#define OBJECT_1 258
#define OBJECT_0 257
#define FREE_REFERENCE_0 249
#define GLOBAL_EXECUTE_CACHE_57 251
#define GLOBAL_EXECUTE_CACHE_23 253
#define GLOBAL_EXECUTE_CACHE_19 255
#define FREE_REFERENCES_LABEL_0 248
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
debug_so_853565549e4f3910 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_11);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_12);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_13);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_14);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_15);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_16);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_17);
      goto continuation_24;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto label_133;

    case 15:
      current_block = (Rpc - LABEL_18);
      goto continuation_23;

    case 16:
      current_block = (Rpc - LABEL_20);
      goto continuation_29;

    case 17:
      current_block = (Rpc - LABEL_21);
      goto continuation_25;

    case 18:
      current_block = (Rpc - LABEL_24);
      goto continuation_30;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto allocate_dstate_136;

    case 20:
      current_block = (Rpc - LABEL_27);
      goto continuation_31;

    case 21:
      current_block = (Rpc - LABEL_28);
      goto continuation_32;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto continuation_33;

    case 23:
      current_block = (Rpc - LABEL_30);
      goto continuation_34;

    case 24:
      current_block = (Rpc - LABEL_31);
      goto continuation_35;

    case 25:
      current_block = (Rpc - LABEL_32);
      goto continuation_36;

    case 26:
      current_block = (Rpc - LABEL_33);
      goto continuation_37;

    case 27:
      current_block = (Rpc - LABEL_34);
      goto continuation_38;

    case 28:
      current_block = (Rpc - LABEL_35);
      goto continuation_39;

    case 29:
      current_block = (Rpc - LABEL_36);
      goto continuation_40;

    case 30:
      current_block = (Rpc - LABEL_37);
      goto continuation_41;

    case 31:
      current_block = (Rpc - LABEL_38);
      goto continuation_42;

    case 32:
      current_block = (Rpc - LABEL_39);
      goto continuation_43;

    case 33:
      current_block = (Rpc - LABEL_40);
      goto continuation_44;

    case 34:
      current_block = (Rpc - LABEL_41);
      goto continuation_45;

    case 35:
      current_block = (Rpc - LABEL_42);
      goto continuation_46;

    case 36:
      current_block = (Rpc - LABEL_43);
      goto continuation_47;

    case 37:
      current_block = (Rpc - LABEL_44);
      goto continuation_48;

    case 38:
      current_block = (Rpc - LABEL_45);
      goto continuation_49;

    case 39:
      current_block = (Rpc - LABEL_48);
      goto label_134;

    case 40:
      current_block = (Rpc - LABEL_46);
      goto continuation_51;

    case 41:
      current_block = (Rpc - LABEL_47);
      goto continuation_50;

    case 42:
      current_block = (Rpc - LABEL_49);
      goto continuation_52;

    case 43:
      current_block = (Rpc - LABEL_50);
      goto continuation_53;

    case 44:
      current_block = (Rpc - LABEL_51);
      goto continuation_54;

    case 45:
      current_block = (Rpc - LABEL_52);
      goto continuation_55;

    case 46:
      current_block = (Rpc - LABEL_53);
      goto continuation_56;

    case 47:
      current_block = (Rpc - LABEL_54);
      goto continuation_60;

    case 48:
      current_block = (Rpc - LABEL_55);
      goto continuation_59;

    case 49:
      current_block = (Rpc - LABEL_56);
      goto continuation_57;

    case 50:
      current_block = (Rpc - LABEL_58);
      goto continuation_61;

    case 51:
      current_block = (Rpc - LABEL_59);
      goto continuation_62;

    case 52:
      current_block = (Rpc - LABEL_60);
      goto continuation_63;

    case 53:
      current_block = (Rpc - LABEL_61);
      goto continuation_64;

    case 54:
      current_block = (Rpc - LABEL_62);
      goto continuation_65;

    case 55:
      current_block = (Rpc - LABEL_63);
      goto continuation_66;

    case 56:
      current_block = (Rpc - LABEL_64);
      goto continuation_67;

    case 57:
      current_block = (Rpc - LABEL_65);
      goto continuation_68;

    case 58:
      current_block = (Rpc - LABEL_66);
      goto continuation_69;

    case 59:
      current_block = (Rpc - LABEL_67);
      goto continuation_70;

    case 60:
      current_block = (Rpc - LABEL_68);
      goto continuation_71;

    case 61:
      current_block = (Rpc - LABEL_69);
      goto continuation_72;

    case 62:
      current_block = (Rpc - LABEL_70);
      goto continuation_73;

    case 63:
      current_block = (Rpc - LABEL_71);
      goto continuation_74;

    case 64:
      current_block = (Rpc - LABEL_72);
      goto continuation_75;

    case 65:
      current_block = (Rpc - LABEL_73);
      goto continuation_76;

    case 66:
      current_block = (Rpc - LABEL_74);
      goto continuation_77;

    case 67:
      current_block = (Rpc - LABEL_75);
      goto continuation_78;

    case 68:
      current_block = (Rpc - LABEL_76);
      goto continuation_79;

    case 69:
      current_block = (Rpc - LABEL_77);
      goto continuation_80;

    case 70:
      current_block = (Rpc - LABEL_78);
      goto continuation_81;

    case 71:
      current_block = (Rpc - LABEL_79);
      goto continuation_82;

    case 72:
      current_block = (Rpc - LABEL_80);
      goto continuation_83;

    case 73:
      current_block = (Rpc - LABEL_81);
      goto continuation_84;

    case 74:
      current_block = (Rpc - LABEL_82);
      goto continuation_85;

    case 75:
      current_block = (Rpc - LABEL_83);
      goto continuation_86;

    case 76:
      current_block = (Rpc - LABEL_84);
      goto continuation_87;

    case 77:
      current_block = (Rpc - LABEL_85);
      goto continuation_88;

    case 78:
      current_block = (Rpc - LABEL_86);
      goto continuation_89;

    case 79:
      current_block = (Rpc - LABEL_87);
      goto continuation_90;

    case 80:
      current_block = (Rpc - LABEL_88);
      goto continuation_91;

    case 81:
      current_block = (Rpc - LABEL_89);
      goto continuation_92;

    case 82:
      current_block = (Rpc - LABEL_90);
      goto continuation_93;

    case 83:
      current_block = (Rpc - LABEL_91);
      goto continuation_94;

    case 84:
      current_block = (Rpc - LABEL_92);
      goto continuation_95;

    case 85:
      current_block = (Rpc - LABEL_93);
      goto continuation_96;

    case 86:
      current_block = (Rpc - LABEL_94);
      goto continuation_97;

    case 87:
      current_block = (Rpc - LABEL_95);
      goto continuation_98;

    case 88:
      current_block = (Rpc - LABEL_96);
      goto continuation_99;

    case 89:
      current_block = (Rpc - LABEL_97);
      goto continuation_100;

    case 90:
      current_block = (Rpc - LABEL_98);
      goto continuation_101;

    case 91:
      current_block = (Rpc - LABEL_99);
      goto continuation_102;

    case 92:
      current_block = (Rpc - LABEL_100);
      goto continuation_103;

    case 93:
      current_block = (Rpc - LABEL_101);
      goto continuation_104;

    case 94:
      current_block = (Rpc - LABEL_102);
      goto continuation_105;

    case 95:
      current_block = (Rpc - LABEL_103);
      goto continuation_106;

    case 96:
      current_block = (Rpc - LABEL_104);
      goto continuation_107;

    case 97:
      current_block = (Rpc - LABEL_105);
      goto continuation_108;

    case 98:
      current_block = (Rpc - LABEL_106);
      goto continuation_109;

    case 99:
      current_block = (Rpc - LABEL_107);
      goto continuation_110;

    case 100:
      current_block = (Rpc - LABEL_108);
      goto continuation_111;

    case 101:
      current_block = (Rpc - LABEL_109);
      goto continuation_112;

    case 102:
      current_block = (Rpc - LABEL_110);
      goto continuation_113;

    case 103:
      current_block = (Rpc - LABEL_111);
      goto continuation_114;

    case 104:
      current_block = (Rpc - LABEL_112);
      goto continuation_115;

    case 105:
      current_block = (Rpc - LABEL_113);
      goto continuation_116;

    case 106:
      current_block = (Rpc - LABEL_114);
      goto continuation_117;

    case 107:
      current_block = (Rpc - LABEL_115);
      goto continuation_118;

    case 108:
      current_block = (Rpc - LABEL_116);
      goto continuation_119;

    case 109:
      current_block = (Rpc - LABEL_117);
      goto continuation_120;

    case 110:
      current_block = (Rpc - LABEL_118);
      goto continuation_121;

    case 111:
      current_block = (Rpc - LABEL_119);
      goto continuation_122;

    case 112:
      current_block = (Rpc - LABEL_120);
      goto continuation_123;

    case 113:
      current_block = (Rpc - LABEL_121);
      goto continuation_124;

    case 114:
      current_block = (Rpc - LABEL_122);
      goto continuation_125;

    case 115:
      current_block = (Rpc - LABEL_123);
      goto continuation_126;

    case 116:
      current_block = (Rpc - LABEL_124);
      goto continuation_127;

    case 117:
      current_block = (Rpc - LABEL_125);
      goto continuation_128;

    case 118:
      current_block = (Rpc - LABEL_126);
      goto continuation_129;

    case 119:
      current_block = (Rpc - LABEL_127);
      goto continuation_130;

    case 120:
      current_block = (Rpc - LABEL_128);
      goto label_138;

    case 121:
      current_block = (Rpc - LABEL_129);
      goto label_139;

    case 122:
      current_block = (Rpc - LABEL_130);
      goto expression_132;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_132)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_129])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_139)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_138)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	3,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	2,
	1,
	1,
	1,
	0,
	0,
	1,
	1,
	2,
	2,
	3,
	0,
	1,
	2,
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
	2,
	2,
	2,
	2,
	1,
	2,
	1,
	2,
	1,
	1,
	2,
	3,
	2,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	2,
	1,
	3,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	2,
	2,
	1,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 96)
      goto label_137;
    blocks = (current_block [OBJECT_221]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_128])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_137)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_23]);
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
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd53.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_19]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_143;
  Wrd11 = Wrd15;

DEFLABEL (label_142)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_141;
  Wrd11 = Wrd15;

DEFLABEL (label_140)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_47);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_57]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd9.Obj) = (current_block [OBJECT_82]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83]), 2);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_55);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_167]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_169]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_171]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_172]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_173]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_174]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_175]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_176]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_177]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_178]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_179]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_180]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_181]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_182]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_183]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_184]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_185]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_186]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_188]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_112);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_189]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_190]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_191]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_192]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_193]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_194]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_195]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_196]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_197]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_198]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_199]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_200]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_201]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_202]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_119);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_203]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_204]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_205]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_206]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_207]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_209]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_210]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_123);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_211]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_212]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_213]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_214]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_125);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_215]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_216]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_126);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_217]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_218]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_127);
  (Wrd5.Obj) = (current_block [OBJECT_219]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_220]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (label_141)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48])), (Wrd12.pObj));

DEFLABEL (label_134)
  (Wrd11.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd12.pObj));

DEFLABEL (label_133)
  (Wrd11.Obj) = Rvl;
  goto label_142;

DEFLABEL (allocate_dstate_136)
  CLOSURE_HEADER (LABEL_25);

DEFLABEL (allocate_dstate_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd19.Obj) = (MAKE_OBJECT (0, 11));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-12]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_debug_so_853565549e4f3910 [96] =
  {
    { "debug_so_code_1", 3, debug_so_code_1 },
    { "debug_so_code_2", 28, debug_so_code_2 },
    { "debug_so_code_3", 10, debug_so_code_3 },
    { "debug_so_code_4", 19, debug_so_code_4 },
    { "debug_so_code_5", 7, debug_so_code_5 },
    { "debug_so_code_6", 1, debug_so_code_6 },
    { "debug_so_code_7", 1, debug_so_code_7 },
    { "debug_so_code_8", 1, debug_so_code_8 },
    { "debug_so_code_9", 1, debug_so_code_9 },
    { "debug_so_code_10", 1, debug_so_code_10 },
    { "debug_so_code_11", 1, debug_so_code_11 },
    { "debug_so_code_12", 1, debug_so_code_12 },
    { "debug_so_code_13", 1, debug_so_code_13 },
    { "debug_so_code_14", 1, debug_so_code_14 },
    { "debug_so_code_15", 1, debug_so_code_15 },
    { "debug_so_code_16", 1, debug_so_code_16 },
    { "debug_so_code_17", 1, debug_so_code_17 },
    { "debug_so_code_18", 1, debug_so_code_18 },
    { "debug_so_code_19", 1, debug_so_code_19 },
    { "debug_so_code_20", 1, debug_so_code_20 },
    { "debug_so_code_21", 1, debug_so_code_21 },
    { "debug_so_code_22", 1, debug_so_code_22 },
    { "debug_so_code_23", 1, debug_so_code_23 },
    { "debug_so_code_24", 1, debug_so_code_24 },
    { "debug_so_code_25", 1, debug_so_code_25 },
    { "debug_so_code_26", 4, debug_so_code_26 },
    { "debug_so_code_27", 3, debug_so_code_27 },
    { "debug_so_code_28", 2, debug_so_code_28 },
    { "debug_so_code_29", 31, debug_so_code_29 },
    { "debug_so_code_30", 19, debug_so_code_30 },
    { "debug_so_code_31", 4, debug_so_code_31 },
    { "debug_so_code_32", 4, debug_so_code_32 },
    { "debug_so_code_33", 7, debug_so_code_33 },
    { "debug_so_code_34", 16, debug_so_code_34 },
    { "debug_so_code_35", 11, debug_so_code_35 },
    { "debug_so_code_36", 4, debug_so_code_36 },
    { "debug_so_code_37", 5, debug_so_code_37 },
    { "debug_so_code_38", 11, debug_so_code_38 },
    { "debug_so_code_39", 29, debug_so_code_39 },
    { "debug_so_code_40", 4, debug_so_code_40 },
    { "debug_so_code_41", 9, debug_so_code_41 },
    { "debug_so_code_42", 4, debug_so_code_42 },
    { "debug_so_code_43", 4, debug_so_code_43 },
    { "debug_so_code_44", 5, debug_so_code_44 },
    { "debug_so_code_45", 3, debug_so_code_45 },
    { "debug_so_code_46", 11, debug_so_code_46 },
    { "debug_so_code_47", 15, debug_so_code_47 },
    { "debug_so_code_48", 29, debug_so_code_48 },
    { "debug_so_code_49", 5, debug_so_code_49 },
    { "debug_so_code_50", 6, debug_so_code_50 },
    { "debug_so_code_51", 3, debug_so_code_51 },
    { "debug_so_code_52", 5, debug_so_code_52 },
    { "debug_so_code_53", 7, debug_so_code_53 },
    { "debug_so_code_54", 8, debug_so_code_54 },
    { "debug_so_code_55", 17, debug_so_code_55 },
    { "debug_so_code_56", 21, debug_so_code_56 },
    { "debug_so_code_57", 30, debug_so_code_57 },
    { "debug_so_code_58", 4, debug_so_code_58 },
    { "debug_so_code_59", 6, debug_so_code_59 },
    { "debug_so_code_60", 9, debug_so_code_60 },
    { "debug_so_code_61", 8, debug_so_code_61 },
    { "debug_so_code_62", 6, debug_so_code_62 },
    { "debug_so_code_63", 4, debug_so_code_63 },
    { "debug_so_code_64", 4, debug_so_code_64 },
    { "debug_so_code_65", 4, debug_so_code_65 },
    { "debug_so_code_66", 5, debug_so_code_66 },
    { "debug_so_code_67", 22, debug_so_code_67 },
    { "debug_so_code_68", 5, debug_so_code_68 },
    { "debug_so_code_69", 4, debug_so_code_69 },
    { "debug_so_code_70", 21, debug_so_code_70 },
    { "debug_so_code_71", 2, debug_so_code_71 },
    { "debug_so_code_72", 1, debug_so_code_72 },
    { "debug_so_code_73", 10, debug_so_code_73 },
    { "debug_so_code_74", 11, debug_so_code_74 },
    { "debug_so_code_75", 9, debug_so_code_75 },
    { "debug_so_code_76", 5, debug_so_code_76 },
    { "debug_so_code_77", 5, debug_so_code_77 },
    { "debug_so_code_78", 3, debug_so_code_78 },
    { "debug_so_code_79", 2, debug_so_code_79 },
    { "debug_so_code_80", 13, debug_so_code_80 },
    { "debug_so_code_81", 6, debug_so_code_81 },
    { "debug_so_code_82", 6, debug_so_code_82 },
    { "debug_so_code_83", 4, debug_so_code_83 },
    { "debug_so_code_84", 4, debug_so_code_84 },
    { "debug_so_code_85", 5, debug_so_code_85 },
    { "debug_so_code_86", 1, debug_so_code_86 },
    { "debug_so_code_87", 2, debug_so_code_87 },
    { "debug_so_code_88", 3, debug_so_code_88 },
    { "debug_so_code_89", 2, debug_so_code_89 },
    { "debug_so_code_90", 5, debug_so_code_90 },
    { "debug_so_code_91", 3, debug_so_code_91 },
    { "debug_so_code_92", 1, debug_so_code_92 },
    { "debug_so_code_93", 2, debug_so_code_93 },
    { "debug_so_code_94", 15, debug_so_code_94 },
    { "debug_so_code_95", 1, debug_so_code_95 },
    { "debug_so_code_96", 18, debug_so_code_96 }
  };

int
decl_debug_so_853565549e4f3910 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_debug_so_853565549e4f3910);
  return (0);
}

DECLARE_COMPILED_CODE ("debug.so", 123, decl_debug_so_853565549e4f3910, debug_so_853565549e4f3910)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_debug_so_data_853565549e4f3910 [18943] =
  "\xe2\x03\xbd\x01\xdf\x1f\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x0d"
  "\xb9\x24\x28\x0d\x28\xb1\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xba\x1d\xb0\x82\x88\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x81"
  "\x0c\x0c\x0c\x0d\x0c\x0d\xbb\x0d\xbc\x24\x28\x0d\xbd\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\xbe\x28\x0d\xbf\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x1d\xc2\x1c\x81"
  "\x28\xb5\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0c\x08\x02"
  "\xc3\x1c\x86\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0c\x0d\x1c\x0d\x1c"
  "\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x1b\x81\x80\xb4\x24\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1b\x81\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x86\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x1b\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x81\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x0d\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f"
  "\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f"
  "\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f"
  "\x0c\x0f\x0c\x0f\x0c\x0f\x0c\x0f\x08\x0c\xb3\x0d\x1c\x25\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x0d"
  "\x1c\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1d\x0d\x0d\x1c"
  "\x0d\x0d\x1c\x0d\x08\xc1\x1c\x0d\x1c\x1b\x1b\x08\x8a\x0d\x0d\x1c"
  "\x08\x8a\xc1\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x1d\x1b\x1b"
  "\x24\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x24\x28\xb6\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x83\x1b\x85\x1d\x1b\x1b\x24\x28\xb6\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x0c\x80\x0c\x0c\x1b\x83\x1d"
  "\x1b\x1b\x24\x28\x1b\x28\xb6\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x80\x07\x0c\x1b\x02"
  "\x1d\x1b\x1b\x24\x28\xb6\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x24\x28\x0d\x1c\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0c\x0c\x1d\x0c\x0c\x83\x0c\x1b\x81\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x0c\x08\x02\x0c\x0c\x0c\x0c\x07\x02\x1b\x81\x0d\x1c\x0d\x1c"
  "\x24\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b"
  "\x1b\x02\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x81\x0c\x0c\x0c"
  "\x1b\x84\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x1b\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x02\x1b\x0c\x07\x0d\x1d\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x80\x0c\x81\x08"
  "\x1b\x82\x1d\x1b\x1b\x1b\x24\x28\xb6\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x07\x0c\x02\x0c\x0c\x0c\x02\x0c\x84\x0d\x1c\x25\x1b\x24\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x0d\x1c\x24\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x0c\x0c\x1b\x81\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0c\x08"
  "\x1b\x82\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x1d\x1b\x1b\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x80\x81\x82\x0c\x1b\x83\x28"
  "\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x83\x80\x84\x1b\x85\x1d\x1b\x1b"
  "\x0d\x1c\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x1b\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x83\x0c\x1b\x81\x82\x0c\x84"
  "\x1b\x85\x1d\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\xb7\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x02\x1d\x1b\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80"
  "\x1b\x1b\x02\x1d\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x0c\x07\x1b\x1b\x02\x1d\x1b\x1b\x24\x28\x0d\x28\x1b"
  "\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x07\x1b\x1b\x1b\x02\x1d\x1b\x1b\x24\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x02\x28\xb6"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x1d\x1b\x1b\x24\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x24\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x1b\x1b\x0d\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x02\x1d\x1b\x1b\x24\x28\x1b"
  "\x28\xb6\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x0c\x83\x0c\x0c\x0c\x81\x0c"
  "\x08\x1b\x02\x1d\x1b\x1b\x24\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28"
  "\xb6\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x81\x1d\x1b\x1b\x24\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x1d\x1b\x1b\x24\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x02\x0d\x0c\x0d\x1d\x0c\x0c\x0c\x1b\x02\x0d\x1c\x24"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x02\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x08\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x0d\x0d\x08\x89\x0c\x0c\x1b\x1b\x25\x1b\x1b\x24\x28\x1b\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80"
  "\x1b\x81\x0c\x1d\x1b\x1b\x24\x28\xb6\x28\x1b\x28\x1b\x28\x0d\x28"
  "\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x81\x0c\x1d\x1b\x1b\x24\x28\xb6\x28\x1b\x28"
  "\x0d\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x0c\x84\x1b\x0d\x1c\x1b\x1b\x86\x28\xb7\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x0c\x84\x1b\x1b\x1b\x1b\x86\x28\xb7\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b"
  "\x1b\x86\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x1b\x1b\x86\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x02\x08\x02\x02\x84\x83\x82\x1b\x81\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x85\x1b\x84\x80\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x08\x1b\x1b\x1b\x85"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x81\x0d\x24\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x80\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d"
  "\xb0\x02\x88\x1b\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x07\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x1b\x02\x1b\x28\x1b\x28\xb7\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x02\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x07\x0d\x1c\x0d\xbf\x0d\x1c\x25\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x1b\xb7\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x80\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x06\x07\x02\xc2\x02\x0c\x0c"
  "\x0c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x1b\x1b\x2a"
  "\x1b\x84\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a"
  "\x1b\xb6\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x1b\x2a\x1b\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x0d\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b"
  "\x2a\x1b\x1b\x2a\xc2\x02\x0d\x1b\x1b\x2a\x1b\x2a\xb3\x0d\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x1b\x0d\x1b\x2a\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x1b\x0d\x0d\x0d\x08\x14\x08\x1b\x1b\x2a\xb5\x1b\x2a\x0d\x1b\x2a"
  "\xb1\x1b\x2a\x1b\xb2\x2a\x1b\x02\x1b\x1b\x85\x1b\xb4\x02\x1b\x07"
  "\x1b\xc3\x1b\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x54\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f"
  "\x64\x65\x62\x75\x67\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x08"
  "\x0f\x64\x65\x62\x75\x67\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x02"
  "\x02\x17\x6e\x65\x61\x72\x65\x73\x74\x2d\x72\x65\x70\x6c\x2f\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x03\x03\x1f\x63\x61\x6c\x6c\x2d"
  "\x77\x69\x74\x68\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x04\x7e\x08\x81\x83\x02\x7d"
  "\x06\x81\x83\x02\x7c\x04\x83\x02\x07\x14\x02\x0c\x20\x73\x75\x62"
  "\x70\x72\x6f\x62\x6c\x65\x6d\x0b\x6d\x6f\x72\x65\x20\x74\x68\x61"
  "\x6e\x20\x02\x20\x03\x69\x73\x04\x61\x72\x65\x07\x54\x68\x65\x72"
  "\x65\x20\x0f\x20\x6f\x6e\x20\x74\x68\x65\x20\x73\x74\x61\x63\x6b"
  "\x2e\x02\x73\x28\x54\x68\x69\x73\x20\x65\x72\x72\x6f\x72\x20\x6f"
  "\x63\x63\x75\x72\x72\x65\x64\x20\x69\x6e\x20\x61\x6e\x6f\x74\x68"
  "\x65\x72\x20\x74\x68\x72\x65\x61\x64\x3a\x20\x3e\x59\x6f\x75\x20"
  "\x61\x72\x65\x20\x6e\x6f\x77\x20\x69\x6e\x20\x74\x68\x65\x20\x64"
  "\x65\x62\x75\x67\x67\x65\x72\x2e\x20\x20\x54\x79\x70\x65\x20\x71"
  "\x20\x74\x6f\x20\x71\x75\x69\x74\x2c\x20\x3f\x20\x66\x6f\x72\x20"
  "\x63\x6f\x6d\x6d\x61\x6e\x64\x73\x2e\x07\x64\x65\x62\x75\x67\x3e"
  "\x09\x63\x6f\x6e\x74\x69\x6e\x75\x65\x13\x52\x65\x74\x75\x72\x6e"
  "\x20\x66\x72\x6f\x6d\x20\x44\x45\x42\x55\x47\x2e\x0c\x63\x6f\x6d"
  "\x6d\x61\x6e\x64\x2d\x73\x65\x74\x21\x64\x65\x62\x75\x67\x67\x65"
  "\x72\x3a\x63\x6f\x75\x6e\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c"
  "\x65\x6d\x73\x2d\x6c\x69\x6d\x69\x74\x03\x03\x14\x6d\x61\x6b\x65"
  "\x2d\x69\x6e\x69\x74\x69\x61\x6c\x2d\x64\x73\x74\x61\x74\x65\x05"
  "\x14\x77\x69\x74\x68\x2d\x73\x69\x6d\x70\x6c\x65\x2d\x72\x65\x73"
  "\x74\x61\x72\x74\x03\x14\x63\x6d\x64\x6c\x2d\x6d\x65\x73\x73\x61"
  "\x67\x65\x2f\x61\x63\x74\x69\x76\x65\x06\x10\x6c\x65\x74\x74\x65"
  "\x72\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x73\x04\x16\x64\x65\x62\x75"
  "\x67\x67\x65\x72\x2d\x70\x72\x65\x73\x65\x6e\x74\x61\x74\x69\x6f"
  "\x6e\x04\x11\x64\x65\x62\x75\x67\x67\x65\x72\x2d\x6d\x65\x73\x73"
  "\x61\x67\x65\x03\x14\x64\x73\x74\x61\x74\x65\x2f\x6f\x74\x68\x65"
  "\x72\x2d\x74\x68\x72\x65\x61\x64\x09\x04\x0d\x77\x72\x69\x74\x65"
  "\x2d\x73\x74\x72\x69\x6e\x67\x0a\x03\x12\x63\x6f\x75\x6e\x74\x2d"
  "\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x73\x0b\x04\x06\x77\x72"
  "\x69\x74\x65\x0c\x03\x08\x6e\x65\x77\x6c\x69\x6e\x65\x0d\x04\x11"
  "\x70\x72\x69\x6e\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x0e\x0d\x9a\x01\x3a\x81\x87\x02\x99\x01\x38\x81\x83\x02\x98\x01"
  "\x36\x81\x83\x02\x97\x01\x34\x81\x83\x02\x96\x01\x32\x81\x83\x02"
  "\x95\x01\x30\x81\x83\x02\x94\x01\x2e\x81\x83\x02\x93\x01\x2c\x81"
  "\x83\x02\x92\x01\x2a\x81\x83\x02\x91\x01\x28\x81\x83\x02\x90\x01"
  "\x26\x81\x87\x02\x8f\x01\x24\x81\x83\x02\x8e\x01\x22\x81\x83\x02"
  "\x8d\x01\x20\x81\x83\x02\x8c\x01\x1e\x81\x85\x02\x8b\x01\x1c\x81"
  "\x83\x02\x8a\x01\x1a\x81\x83\x02\x89\x01\x18\x81\x83\x02\x88\x01"
  "\x16\x81\x83\x02\x87\x01\x14\x81\x85\x02\x86\x01\x12\x81\x83\x02"
  "\x85\x01\x10\x81\x85\x02\x84\x01\x0e\x81\x85\x02\x83\x01\x0c\x81"
  "\x87\x02\x82\x01\x0a\x81\x85\x02\x81\x01\x08\x81\x83\x02\x80\x01"
  "\x06\x81\x83\x02\x7f\x04\x83\x04\x39\x66\x0f\x02\x02\x0c\x25\x72"
  "\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x10\x03\x04\x19\x63\x6f\x6d"
  "\x6d\x61\x6e\x64\x2f\x70\x72\x69\x6e\x74\x2d\x73\x75\x62\x70\x72"
  "\x6f\x62\x6c\x65\x6d\x11\x03\x1c\x73\x74\x61\x63\x6b\x2d\x66\x72"
  "\x61\x6d\x65\x2f\x6e\x65\x78\x74\x2d\x73\x75\x62\x70\x72\x6f\x62"
  "\x6c\x65\x6d\x12\x03\x0d\x03\x20\x73\x74\x61\x63\x6b\x2d\x66\x72"
  "\x61\x6d\x65\x2f\x72\x65\x70\x6c\x2d\x65\x76\x61\x6c\x2d\x62\x6f"
  "\x75\x6e\x64\x61\x72\x79\x3f\x13\x04\x1b\x63\x6f\x6d\x6d\x61\x6e"
  "\x64\x2f\x65\x61\x72\x6c\x69\x65\x72\x2d\x73\x75\x62\x70\x72\x6f"
  "\x62\x6c\x65\x6d\x14\x07\xa4\x01\x16\x81\x87\x02\xa3\x01\x14\x81"
  "\x87\x02\xa2\x01\x12\x81\x87\x02\xa1\x01\x10\x81\x87\x02\xa0\x01"
  "\x0e\x81\x89\x02\x9f\x01\x0c\x81\x89\x02\x9e\x01\x0a\x81\x87\x02"
  "\x9d\x01\x08\x81\x87\x02\x9c\x01\x06\x81\x85\x02\x9b\x01\x04\x84"
  "\x06\x15\x28\x15\x02\x14\x4e\x6f\x20\x66\x72\x61\x6d\x65\x73\x20"
  "\x6f\x6e\x20\x73\x74\x61\x63\x6b\x21\x0b\x0d\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x73\x65\x74\x21\x16\x07\x61\x6c\x77\x61\x79\x73\x17"
  "\x08\x65\x6e\x61\x62\x6c\x65\x64\x18\x09\x64\x69\x73\x61\x62\x6c"
  "\x65\x64\x19\x06\x64\x65\x62\x75\x67\x1a\x1a\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x20\x6f\x72\x20\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x16\x64\x65\x62\x75\x67\x67\x65\x72\x3a\x75\x73"
  "\x65\x2d\x68\x69\x73\x74\x6f\x72\x79\x3f\x1b\x16\x64\x65\x62\x75"
  "\x67\x67\x65\x72\x3a\x61\x75\x74\x6f\x2d\x74\x6f\x67\x67\x6c\x65"
  "\x3f\x1c\x03\x03\x0b\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x3f\x03"
  "\x0e\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x3f\x03\x17"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x03\x1a\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x2d\x3e\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d"
  "\x65\x03\x0d\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x3f\x02"
  "\x10\x61\x6c\x6c\x6f\x63\x61\x74\x65\x2d\x64\x73\x74\x61\x74\x65"
  "\x1d\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74"
  "\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x03\x21\x73\x74"
  "\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x73\x6b\x69\x70\x2d\x6e"
  "\x6f\x6e\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x73\x03\x06"
  "\x65\x72\x72\x6f\x72\x03\x13\x05\x18\x73\x65\x74\x2d\x63\x75\x72"
  "\x72\x65\x6e\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x21"
  "\x1e\x03\x11\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x6e"
  "\x65\x78\x74\x0d\xb7\x01\x28\x81\x8d\x02\xb6\x01\x26\x81\x8d\x02"
  "\xb5\x01\x24\x81\x8d\x02\xb4\x01\x22\x81\x8d\x02\xb3\x01\x20\x81"
  "\x8d\x02\xb2\x01\x1e\x81\x87\x02\xb1\x01\x1c\x81\x87\x02\xb0\x01"
  "\x1a\x81\x87\x02\xaf\x01\x18\x81\x87\x02\xae\x01\x16\x81\x87\x02"
  "\xad\x01\x14\x81\x85\x02\xac\x01\x12\x81\x83\x02\xab\x01\x10\x81"
  "\x83\x02\xaa\x01\x0e\x81\x85\x02\xa9\x01\x0c\x81\x83\x02\xa8\x01"
  "\x0a\x81\x85\x02\xa7\x01\x08\x81\x83\x02\xa6\x01\x06\x81\x83\x02"
  "\xa5\x01\x04\x83\x04\x27\x50\x1f\x02\x10\x02\x03\x10\x6e\x65\x78"
  "\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x20\x02\xbe\x01"
  "\x10\x81\x85\x02\xbd\x01\x0e\x81\x85\x02\xbc\x01\x0c\x81\x85\x02"
  "\xbb\x01\x0a\x81\x85\x02\xba\x01\x08\x81\x85\x02\xb9\x01\x06\x81"
  "\x85\x02\xb8\x01\x04\x83\x04\x0f\x1a\x21\x02\x10\xbf\x01\x04\x83"
  "\x04\x03\x22\x02\x08\x10\xc0\x01\x04\x83\x04\x03\x23\x02\x09\x10"
  "\xc1\x01\x04\x83\x04\x03\x24\x02\x0a\x10\xc2\x01\x04\x83\x04\x03"
  "\x25\x02\x0b\x10\xc3\x01\x04\x83\x04\x03\x26\x02\x0c\x10\xc4\x01"
  "\x04\x83\x04\x03\x27\x02\x0d\x10\x08\xc5\x01\x04\x83\x04\x03\x28"
  "\x02\x0e\x10\x09\xc6\x01\x04\x83\x04\x03\x29\x02\x0f\x10\x0a\xc7"
  "\x01\x04\x83\x04\x03\x2a\x02\x10\x10\x0b\xc8\x01\x04\x83\x04\x03"
  "\x2b\x02\x11\x16\x02\xc9\x01\x04\x84\x06\x03\x2c\x02\x12\x16\x02"
  "\xca\x01\x04\x84\x06\x03\x2d\x02\x13\x16\x02\xcb\x01\x04\x84\x06"
  "\x03\x2e\x02\x14\x16\x02\xcc\x01\x04\x84\x06\x03\x2f\x02\x15\x16"
  "\x02\xcd\x01\x04\x84\x06\x03\x30\x02\x16\x16\x02\xce\x01\x04\x84"
  "\x06\x03\x31\x02\x17\x16\x02\x08\xcf\x01\x04\x84\x06\x03\x32\x02"
  "\x18\x16\x02\x09\xd0\x01\x04\x84\x06\x03\x33\x02\x19\x16\x02\x0a"
  "\xd1\x01\x04\x84\x06\x03\x34\x02\x1a\x16\x02\x0b\xd2\x01\x04\x84"
  "\x06\x03\x35\x02\x1b\x10\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x36\x02\xd6\x01"
  "\x0a\x81\x85\x02\xd5\x01\x08\x81\x83\x02\xd4\x01\x06\x81\x83\x02"
  "\xd3\x01\x04\x83\x04\x09\x12\x37\x02\x1c\x10\x03\x12\x64\x73\x74"
  "\x61\x74\x65\x2f\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x73\x38\x04"
  "\x0e\x6e\x74\x68\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x39\x03"
  "\xd9\x01\x08\x81\x85\x02\xd8\x01\x06\x81\x83\x02\xd7\x01\x04\x83"
  "\x04\x07\x11\x3a\x02\x1d\x10\x03\x17\x73\x74\x61\x63\x6b\x2d\x66"
  "\x72\x61\x6d\x65\x2f\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x73\x3b"
  "\x02\xdb\x01\x06\x81\x83\x02\xda\x01\x04\x83\x04\x05\x0d\x3c\x02"
  "\x1e\x02\x0f\x64\x65\x62\x75\x67\x2d\x63\x6f\x6d\x6d\x61\x6e\x64"
  "\x73\x01\x40\x1b\x68\x65\x6c\x70\x2c\x20\x6c\x69\x73\x74\x20\x63"
  "\x6f\x6d\x6d\x61\x6e\x64\x20\x6c\x65\x74\x74\x65\x72\x73\x01\x42"
  "\x3b\x73\x68\x6f\x77\x20\x41\x6c\x6c\x20\x62\x69\x6e\x64\x69\x6e"
  "\x67\x73\x20\x69\x6e\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x61\x6e\x64\x20\x69\x74"
  "\x73\x20\x61\x6e\x63\x65\x73\x74\x6f\x72\x73\x01\x43\x30\x6d\x6f"
  "\x76\x65\x20\x28\x42\x61\x63\x6b\x29\x20\x74\x6f\x20\x6e\x65\x78"
  "\x74\x20\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x20\x28\x65\x61\x72"
  "\x6c\x69\x65\x72\x20\x69\x6e\x20\x74\x69\x6d\x65\x29\x01\x44\x38"
  "\x73\x68\x6f\x77\x20\x62\x69\x6e\x64\x69\x6e\x67\x73\x20\x6f\x66"
  "\x20\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x73\x20\x69\x6e\x20"
  "\x74\x68\x65\x20\x43\x75\x72\x72\x65\x6e\x74\x20\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x01\x45\x37\x6d\x6f\x76\x65\x20\x28"
  "\x44\x6f\x77\x6e\x29\x20\x74\x6f\x20\x74\x68\x65\x20\x70\x72\x65"
  "\x76\x69\x6f\x75\x73\x20\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x20\x28\x6c\x61\x74\x65\x72\x20\x69\x6e\x20\x74\x69\x6d\x65\x29"
  "\x01\x46\x38\x45\x6e\x74\x65\x72\x20\x61\x20\x72\x65\x61\x64\x2d"
  "\x65\x76\x61\x6c\x2d\x70\x72\x69\x6e\x74\x20\x6c\x6f\x6f\x70\x20"
  "\x69\x6e\x20\x74\x68\x65\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x01\x47\x35\x6d\x6f\x76"
  "\x65\x20\x28\x46\x6f\x72\x77\x61\x72\x64\x29\x20\x74\x6f\x20\x70"
  "\x72\x65\x76\x69\x6f\x75\x73\x20\x72\x65\x64\x75\x63\x74\x69\x6f"
  "\x6e\x20\x28\x6c\x61\x74\x65\x72\x20\x69\x6e\x20\x74\x69\x6d\x65"
  "\x29\x01\x48\x1e\x47\x6f\x20\x74\x6f\x20\x61\x20\x70\x61\x72\x74"
  "\x69\x63\x75\x6c\x61\x72\x20\x73\x75\x62\x70\x72\x6f\x62\x6c\x65"
  "\x6d\x01\x49\x2e\x70\x72\x69\x6e\x74\x73\x20\x61\x20\x73\x75\x6d"
  "\x6d\x61\x72\x79\x20\x28\x48\x69\x73\x74\x6f\x72\x79\x29\x20\x6f"
  "\x66\x20\x61\x6c\x6c\x20\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x73\x01\x4a\x21\x72\x65\x64\x69\x73\x70\x6c\x61\x79\x20\x74\x68"
  "\x65\x20\x65\x72\x72\x6f\x72\x20\x6d\x65\x73\x73\x61\x67\x65\x20"
  "\x49\x6e\x66\x6f\x01\x4b\x2e\x72\x65\x74\x75\x72\x6e\x20\x54\x4f"
  "\x20\x74\x68\x65\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x73\x75\x62"
  "\x70\x72\x6f\x62\x6c\x65\x6d\x20\x77\x69\x74\x68\x20\x61\x20\x76"
  "\x61\x6c\x75\x65\x01\x4c\x35\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20"
  "\x74\x68\x65\x20\x70\x72\x6f\x67\x72\x61\x6d\x20\x75\x73\x69\x6e"
  "\x67\x20\x61\x20\x73\x74\x61\x6e\x64\x61\x72\x64\x20\x72\x65\x73"
  "\x74\x61\x72\x74\x20\x6f\x70\x74\x69\x6f\x6e\x01\x4d\x36\x28\x4c"
  "\x69\x73\x74\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x29\x20"
  "\x70\x72\x65\x74\x74\x79\x20\x70\x72\x69\x6e\x74\x20\x74\x68\x65"
  "\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x01\x4e\x43\x28\x46\x72\x61\x6d\x65\x20\x65\x6c\x65"
  "\x6d\x65\x6e\x74\x73\x29\x20\x73\x68\x6f\x77\x20\x74\x68\x65\x20"
  "\x63\x6f\x6e\x74\x65\x6e\x74\x73\x20\x6f\x66\x20\x74\x68\x65\x20"
  "\x73\x74\x61\x63\x6b\x20\x66\x72\x61\x6d\x65\x2c\x20\x69\x6e\x20"
  "\x72\x61\x77\x20\x66\x6f\x72\x6d\x01\x50\x40\x70\x72\x65\x74\x74"
  "\x79\x20\x70\x72\x69\x6e\x74\x20\x74\x68\x65\x20\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x20\x74\x68\x61\x74\x20\x63\x72\x65\x61\x74"
  "\x65\x64\x20\x74\x68\x65\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x01\x51\x3a\x6d\x6f\x76"
  "\x65\x20\x74\x6f\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x20\x74\x68\x61\x74\x20\x69\x73\x20\x50\x61\x72\x65\x6e\x74\x20"
  "\x6f\x66\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x01\x52\x15\x51\x75\x69\x74\x20\x28\x65"
  "\x78\x69\x74\x20\x64\x65\x62\x75\x67\x67\x65\x72\x29\x01\x53\x49"
  "\x70\x72\x69\x6e\x74\x20\x74\x68\x65\x20\x65\x78\x65\x63\x75\x74"
  "\x69\x6f\x6e\x20\x68\x69\x73\x74\x6f\x72\x79\x20\x28\x52\x65\x64"
  "\x75\x63\x74\x69\x6f\x6e\x73\x29\x20\x6f\x66\x20\x74\x68\x65\x20"
  "\x63\x75\x72\x72\x65\x6e\x74\x20\x73\x75\x62\x70\x72\x6f\x62\x6c"
  "\x65\x6d\x20\x6c\x65\x76\x65\x6c\x01\x54\x38\x6d\x6f\x76\x65\x20"
  "\x74\x6f\x20\x63\x68\x69\x6c\x64\x20\x6f\x66\x20\x63\x75\x72\x72"
  "\x65\x6e\x74\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20"
  "\x28\x69\x6e\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x63\x68\x61\x69"
  "\x6e\x29\x01\x55\x2a\x70\x72\x69\x6e\x74\x20\x74\x68\x65\x20\x63"
  "\x75\x72\x72\x65\x6e\x74\x20\x73\x75\x62\x70\x72\x6f\x62\x6c\x65"
  "\x6d\x20\x6f\x72\x20\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x01\x56"
  "\x33\x6d\x6f\x76\x65\x20\x28\x55\x70\x29\x20\x74\x6f\x20\x74\x68"
  "\x65\x20\x6e\x65\x78\x74\x20\x73\x75\x62\x70\x72\x6f\x62\x6c\x65"
  "\x6d\x20\x28\x65\x61\x72\x6c\x69\x65\x72\x20\x69\x6e\x20\x74\x69"
  "\x6d\x65\x29\x01\x57\x2b\x65\x56\x61\x6c\x75\x61\x74\x65\x20\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x20\x69\x6e\x20\x63\x75\x72"
  "\x72\x65\x6e\x74\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x01\x58\x3f\x65\x6e\x74\x65\x72\x20\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x20\x69\x6e\x73\x70\x65\x63\x74\x6f\x72\x20\x28"
  "\x57\x68\x65\x72\x65\x29\x20\x6f\x6e\x20\x74\x68\x65\x20\x63\x75"
  "\x72\x72\x65\x6e\x74\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x01\x59\x3a\x63\x72\x65\x61\x74\x65\x20\x61\x20\x72\x65\x61"
  "\x64\x20\x65\x76\x61\x6c\x20\x70\x72\x69\x6e\x74\x20\x6c\x6f\x6f"
  "\x70\x20\x69\x6e\x20\x74\x68\x65\x20\x64\x65\x62\x75\x67\x67\x65"
  "\x72\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x01\x5a\x20"
  "\x64\x69\x73\x70\x6c\x61\x79\x20\x74\x68\x65\x20\x63\x75\x72\x72"
  "\x65\x6e\x74\x20\x73\x74\x61\x63\x6b\x20\x66\x72\x61\x6d\x65\x01"
  "\x5b\x30\x72\x65\x74\x75\x72\x6e\x20\x46\x52\x4f\x4d\x20\x74\x68"
  "\x65\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x73\x75\x62\x70\x72\x6f"
  "\x62\x6c\x65\x6d\x20\x77\x69\x74\x68\x20\x61\x20\x76\x61\x6c\x75"
  "\x65\x1c\x68\x6f\x6f\x6b\x2f\x64\x65\x62\x75\x67\x67\x65\x72\x2d"
  "\x62\x65\x66\x6f\x72\x65\x2d\x72\x65\x74\x75\x72\x6e\x3d\x03\x14"
  "\x63\x6f\x6d\x6d\x61\x6e\x64\x2f\x72\x65\x74\x75\x72\x6e\x2d\x66"
  "\x72\x6f\x6d\x3e\x0e\x63\x6f\x6d\x6d\x61\x6e\x64\x2f\x66\x72\x61"
  "\x6d\x65\x3f\x11\x63\x6f\x6d\x6d\x61\x6e\x64\x2f\x69\x6e\x74\x65"
  "\x72\x6e\x61\x6c\x40\x14\x63\x6f\x6d\x6d\x61\x6e\x64\x2f\x65\x6e"
  "\x74\x65\x72\x2d\x77\x68\x65\x72\x65\x41\x24\x63\x6f\x6d\x6d\x61"
  "\x6e\x64\x2f\x65\x76\x61\x6c\x2d\x69\x6e\x2d\x63\x75\x72\x72\x65"
  "\x6e\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x42\x14"
  "\x26\x63\x6f\x6d\x6d\x61\x6e\x64\x2f\x70\x72\x69\x6e\x74\x2d\x73"
  "\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2d\x6f\x72\x2d\x72\x65\x64"
  "\x75\x63\x74\x69\x6f\x6e\x43\x22\x63\x6f\x6d\x6d\x61\x6e\x64\x2f"
  "\x6d\x6f\x76\x65\x2d\x74\x6f\x2d\x63\x68\x69\x6c\x64\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x44\x19\x63\x6f\x6d\x6d\x61"
  "\x6e\x64\x2f\x70\x72\x69\x6e\x74\x2d\x72\x65\x64\x75\x63\x74\x69"
  "\x6f\x6e\x73\x45\x16\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x65\x78"
  "\x69\x74\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x23\x63\x6f\x6d\x6d\x61"
  "\x6e\x64\x2f\x6d\x6f\x76\x65\x2d\x74\x6f\x2d\x70\x61\x72\x65\x6e"
  "\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x46\x24\x63"
  "\x6f\x6d\x6d\x61\x6e\x64\x2f\x70\x72\x69\x6e\x74\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x47\x1d\x63\x6f\x6d\x6d\x61\x6e\x64\x2f\x70\x72\x69\x6e"
  "\x74\x2d\x66\x72\x61\x6d\x65\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x73"
  "\x48\x19\x63\x6f\x6d\x6d\x61\x6e\x64\x2f\x70\x72\x69\x6e\x74\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x49\x1a\x63\x6f\x6d\x6d"
  "\x61\x6e\x64\x2f\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x72\x65"
  "\x73\x74\x61\x72\x74\x4a\x12\x63\x6f\x6d\x6d\x61\x6e\x64\x2f\x72"
  "\x65\x74\x75\x72\x6e\x2d\x74\x6f\x4b\x19\x63\x6f\x6d\x6d\x61\x6e"
  "\x64\x2f\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x72\x65\x70\x6f"
  "\x72\x74\x4c\x1e\x63\x6f\x6d\x6d\x61\x6e\x64\x2f\x73\x75\x6d\x6d"
  "\x61\x72\x69\x7a\x65\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x73\x4d\x0d\x63\x6f\x6d\x6d\x61\x6e\x64\x2f\x67\x6f\x74\x6f\x4e"
  "\x18\x63\x6f\x6d\x6d\x61\x6e\x64\x2f\x6c\x61\x74\x65\x72\x2d\x72"
  "\x65\x64\x75\x63\x74\x69\x6f\x6e\x4f\x23\x63\x6f\x6d\x6d\x61\x6e"
  "\x64\x2f\x65\x6e\x74\x65\x72\x2d\x72\x65\x61\x64\x2d\x65\x76\x61"
  "\x6c\x2d\x70\x72\x69\x6e\x74\x2d\x6c\x6f\x6f\x70\x50\x19\x63\x6f"
  "\x6d\x6d\x61\x6e\x64\x2f\x6c\x61\x74\x65\x72\x2d\x73\x75\x62\x70"
  "\x72\x6f\x62\x6c\x65\x6d\x51\x1b\x63\x6f\x6d\x6d\x61\x6e\x64\x2f"
  "\x73\x68\x6f\x77\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x66\x72\x61"
  "\x6d\x65\x52\x1a\x63\x6f\x6d\x6d\x61\x6e\x64\x2f\x65\x61\x72\x6c"
  "\x69\x65\x72\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x53\x18\x63"
  "\x6f\x6d\x6d\x61\x6e\x64\x2f\x73\x68\x6f\x77\x2d\x61\x6c\x6c\x2d"
  "\x66\x72\x61\x6d\x65\x73\x54\x16\x73\x74\x61\x6e\x64\x61\x72\x64"
  "\x2d\x68\x65\x6c\x70\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x1f\x64\x65"
  "\x66\x61\x75\x6c\x74\x2f\x64\x65\x62\x75\x67\x67\x65\x72\x2d\x62"
  "\x65\x66\x6f\x72\x65\x2d\x72\x65\x74\x75\x72\x6e\x55\x1c\x04\x11"
  "\x6d\x61\x6b\x65\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x73\x65\x74"
  "\x02\xfa\x01\x40\x81\x81\x02\xf9\x01\x3e\x81\x81\x02\xf8\x01\x3c"
  "\x81\x81\x02\xf7\x01\x3a\x81\x81\x02\xf6\x01\x38\x81\x85\x02\xf5"
  "\x01\x36\x81\x85\x02\xf4\x01\x34\x81\x85\x02\xf3\x01\x32\x81\x85"
  "\x02\xf2\x01\x30\x81\x85\x02\xf1\x01\x2e\x81\x85\x02\xf0\x01\x2c"
  "\x81\x85\x02\xef\x01\x2a\x81\x85\x02\xee\x01\x28\x81\x85\x02\xed"
  "\x01\x26\x81\x85\x02\xec\x01\x24\x81\x85\x02\xeb\x01\x22\x81\x85"
  "\x02\xea\x01\x20\x81\x85\x02\xe9\x01\x1e\x81\x85\x02\xe8\x01\x1c"
  "\x81\x85\x02\xe7\x01\x1a\x81\x85\x02\xe6\x01\x18\x81\x85\x02\xe5"
  "\x01\x16\x81\x85\x02\xe4\x01\x14\x81\x85\x02\xe3\x01\x12\x81\x85"
  "\x02\xe2\x01\x10\x81\x85\x02\xe1\x01\x0e\x81\x85\x02\xe0\x01\x0c"
  "\x81\x85\x02\xdf\x01\x0a\x81\x85\x02\xde\x01\x08\x81\x85\x02\xdd"
  "\x01\x06\x81\x83\x02\xdc\x01\x04\x82\x02\x3f\x9b\x01\x56\x02\x1f"
  "\x07\x64\x65\x66\x69\x6e\x65\x04\x04\x6c\x65\x74\x07\x2a\x70\x6f"
  "\x72\x74\x2a\x57\x03\x69\x66\x09\x2a\x64\x73\x74\x61\x74\x65\x2a"
  "\x58\x10\x64\x65\x66\x61\x75\x6c\x74\x2d\x6f\x62\x6a\x65\x63\x74"
  "\x3f\x04\x63\x61\x72\x59\x0b\x69\x64\x65\x6e\x74\x69\x66\x69\x65"
  "\x72\x5a\x5a\x5a\x02\x2b\x0b\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x5a\x04\x63\x64\x72\x5b\x04\x0e\x73\x79\x6e\x74\x61\x78\x2d"
  "\x6d\x61\x74\x63\x68\x3f\x03\x12\x69\x6c\x6c\x2d\x66\x6f\x72\x6d"
  "\x65\x64\x2d\x73\x79\x6e\x74\x61\x78\x04\x04\x6d\x61\x70\x05\x17"
  "\x6d\x61\x6b\x65\x2d\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x63"
  "\x6c\x6f\x73\x75\x72\x65\x05\x8d\x02\x28\x81\x85\x02\x8c\x02\x26"
  "\x81\x8b\x02\x8b\x02\x24\x81\x8b\x02\x8a\x02\x22\x81\x8b\x02\x89"
  "\x02\x20\x81\x89\x02\x88\x02\x1e\x81\x8b\x02\x87\x02\x1c\x81\x8b"
  "\x02\x86\x02\x1a\x81\x87\x02\x85\x02\x18\x81\x87\x02\x84\x02\x16"
  "\x81\x87\x02\x83\x02\x14\x81\x87\x02\x82\x02\x12\x81\x85\x02\x81"
  "\x02\x10\x81\x85\x02\x80\x02\x0e\x81\x85\x02\xff\x01\x0c\x81\x85"
  "\x02\xfe\x01\x0a\x81\x85\x02\xfd\x01\x08\x81\x85\x02\xfc\x01\x06"
  "\x81\x87\x02\xfb\x01\x04\x84\x06\x27\x3e\x5c\x02\x20\x10\x08\x58"
  "\x57\x03\x04\x11\x04\x18\x63\x6f\x6d\x6d\x61\x6e\x64\x2f\x70\x72"
  "\x69\x6e\x74\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x5d\x03\x91"
  "\x02\x0a\x81\x85\x02\x90\x02\x08\x81\x85\x02\x8f\x02\x06\x81\x85"
  "\x02\x8e\x02\x04\x84\x02\x09\x17\x5e\x02\x21\x08\x58\x57\x03\x04"
  "\x04\x0e\x03\x95\x02\x0a\x81\x83\x02\x94\x02\x08\x81\x85\x02\x93"
  "\x02\x06\x81\x85\x02\x92\x02\x04\x84\x02\x09\x15\x5f\x02\x22\x10"
  "\x08\x58\x57\x03\x04\x03\x11\x64\x73\x74\x61\x74\x65\x2f\x72\x65"
  "\x64\x75\x63\x74\x69\x6f\x6e\x60\x06\x10\x70\x72\x69\x6e\x74\x2d"
  "\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x61\x04\x9c\x02\x10\x81\x87"
  "\x02\x9b\x02\x0e\x81\x85\x02\x9a\x02\x0c\x81\x83\x02\x99\x02\x0a"
  "\x81\x83\x02\x98\x02\x08\x81\x85\x02\x97\x02\x06\x81\x85\x02\x96"
  "\x02\x04\x84\x02\x0f\x20\x62\x02\x23\x02\x5b\x59\x29\x2d\x2d\x2d"
  "\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d"
  "\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d\x2d"
  "\x2d\x2d\x2d\x2d\x2d\x27\x45\x78\x65\x63\x75\x74\x69\x6f\x6e\x20"
  "\x68\x69\x73\x74\x6f\x72\x79\x20\x66\x6f\x72\x20\x74\x68\x69\x73"
  "\x20\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x3a\x33\x54\x68\x65"
  "\x72\x65\x20\x69\x73\x20\x6e\x6f\x20\x65\x78\x65\x63\x75\x74\x69"
  "\x6f\x6e\x20\x68\x69\x73\x74\x6f\x72\x79\x20\x66\x6f\x72\x20\x74"
  "\x68\x69\x73\x20\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2e\x10"
  "\x08\x58\x57\x03\x03\x38\x04\x04\x11\x64\x65\x62\x75\x67\x67\x65"
  "\x72\x2d\x66\x61\x69\x6c\x75\x72\x65\x63\x04\x0a\x03\x0d\x06\x61"
  "\x07\xac\x02\x22\x81\x87\x02\xab\x02\x20\x81\x87\x02\xaa\x02\x1e"
  "\x81\x87\x02\xa9\x02\x1c\x81\x87\x02\xa8\x02\x1a\x81\x8f\x02\xa7"
  "\x02\x18\x81\x87\x02\xa6\x02\x16\x81\x87\x02\xa5\x02\x14\x81\x87"
  "\x02\xa4\x02\x12\x81\x87\x02\xa3\x02\x10\x81\x83\x02\xa2\x02\x0e"
  "\x81\x83\x02\xa1\x02\x0c\x81\x87\x02\xa0\x02\x0a\x81\x85\x02\x9f"
  "\x02\x08\x81\x85\x02\x9e\x02\x06\x81\x85\x02\x9d\x02\x04\x84\x02"
  "\x21\x3e\x64\x02\x24\x02\x3b\x16\x3b\x75\x6e\x64\x65\x66\x69\x6e"
  "\x65\x64\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x0f\x3b\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x64\x20\x63\x6f\x64\x65\x10\x08\x08\x58"
  "\x57\x03\x04\x03\x1e\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69"
  "\x6e\x66\x6f\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64"
  "\x65\x3f\x65\x03\x25\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69"
  "\x6e\x66\x6f\x2f\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x2d\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x66\x04\x0a\x06\x0d\x70\x72"
  "\x65\x74\x74\x79\x2d\x70\x72\x69\x6e\x74\x67\x03\x16\x64\x65\x62"
  "\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2f\x6e\x6f\x69\x73"
  "\x65\x3f\x68\x03\x15\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69"
  "\x6e\x66\x6f\x2f\x6e\x6f\x69\x73\x65\x69\x08\xb7\x02\x18\x81\x89"
  "\x02\xb6\x02\x16\x81\x85\x02\xb5\x02\x14\x81\x85\x02\xb4\x02\x12"
  "\x81\x85\x02\xb3\x02\x10\x81\x85\x02\xb2\x02\x0e\x81\x85\x02\xb1"
  "\x02\x0c\x81\x83\x02\xb0\x02\x0a\x81\x83\x02\xaf\x02\x08\x81\x85"
  "\x02\xae\x02\x06\x81\x85\x02\xad\x02\x04\x84\x02\x17\x34\x6a\x02"
  "\x25\x08\x58\x57\x03\x05\x19\x77\x69\x74\x68\x2d\x63\x75\x72\x72"
  "\x65\x6e\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x6b"
  "\x04\x1b\x73\x68\x6f\x77\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x03\xbb\x02\x0a"
  "\x81\x85\x02\xba\x02\x08\x81\x85\x02\xb9\x02\x06\x81\x85\x02\xb8"
  "\x02\x04\x84\x02\x09\x15\x6c\x02\x26\x04\x20\x70\x72\x69\x6e\x74"
  "\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2d\x69\x64\x65\x6e"
  "\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x6d\x03\x0d\x04\x1c\x70"
  "\x72\x69\x6e\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x6e\x04\x1d\x70\x72\x69"
  "\x6e\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x6f\x04\x1b\x70\x72\x69\x6e"
  "\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2d\x72\x65\x64"
  "\x75\x63\x74\x69\x6f\x6e\x70\x06\xc0\x02\x0c\x81\x85\x02\xbf\x02"
  "\x0a\x81\x85\x02\xbe\x02\x08\x81\x85\x02\xbd\x02\x06\x81\x85\x02"
  "\xbc\x02\x04\x84\x06\x0b\x19\x71\x02\x27\x13\x20\x73\x75\x62\x70"
  "\x72\x6f\x62\x6c\x65\x6d\x20\x6c\x65\x76\x65\x6c\x29\x0f\x20\x28"
  "\x74\x68\x69\x73\x20\x69\x73\x20\x74\x68\x65\x20\x07\x6c\x6f\x77"
  "\x65\x73\x74\x02\x05\x6f\x6e\x6c\x79\x08\x68\x69\x67\x68\x65\x73"
  "\x74\x13\x53\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x20\x6c\x65\x76"
  "\x65\x6c\x3a\x20\x10\x04\x0a\x04\x0c\x03\x20\x04\xcb\x02\x18\x81"
  "\x87\x02\xca\x02\x16\x81\x87\x02\xc9\x02\x14\x81\x87\x02\xc8\x02"
  "\x12\x81\x89\x02\xc7\x02\x10\x81\x89\x02\xc6\x02\x0e\x81\x89\x02"
  "\xc5\x02\x0c\x81\x89\x02\xc4\x02\x0a\x81\x87\x02\xc3\x02\x08\x81"
  "\x87\x02\xc2\x02\x06\x81\x85\x02\xc1\x02\x04\x84\x06\x17\x2b\x72"
  "\x02\x28\x03\x29\x3a\x27\x20\x73\x75\x62\x70\x72\x6f\x62\x6c\x65"
  "\x6d\x20\x62\x65\x69\x6e\x67\x20\x65\x78\x65\x63\x75\x74\x65\x64"
  "\x20\x28\x6d\x61\x72\x6b\x65\x64\x20\x62\x79\x20\x09\x21\x43\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x20\x63\x6f\x64\x65\x20\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x20\x75\x6e\x6b\x6e\x6f\x77\x6e\x13\x45"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x20\x75\x6e\x6b\x6e\x6f\x77"
  "\x6e\x27\x43\x6f\x6d\x70\x69\x6c\x65\x64\x20\x63\x6f\x64\x65\x20"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x20\x28\x66\x72\x6f\x6d"
  "\x20\x73\x74\x61\x63\x6b\x29\x3a\x19\x45\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x20\x28\x66\x72\x6f\x6d\x20\x73\x74\x61\x63\x6b\x29"
  "\x3a\x08\x10\x17\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x69"
  "\x6e\x64\x65\x6e\x74\x61\x74\x69\x6f\x6e\x73\x15\x73\x75\x62\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x6d\x61\x72\x6b\x65\x72"
  "\x74\x03\x03\x14\x69\x6e\x76\x61\x6c\x69\x64\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x3f\x75\x03\x1b\x73\x74\x61\x63\x6b\x2d"
  "\x66\x72\x61\x6d\x65\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63"
  "\x6f\x64\x65\x3f\x03\x68\x03\x69\x03\x0d\x04\x0a\x03\x66\x03\x1b"
  "\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x72\x65\x74\x75"
  "\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x04\x1c\x75\x6e\x73\x79"
  "\x6e\x74\x61\x78\x2d\x77\x69\x74\x68\x2d\x73\x75\x62\x73\x74\x69"
  "\x74\x75\x74\x69\x6f\x6e\x73\x03\x23\x64\x65\x62\x75\x67\x67\x69"
  "\x6e\x67\x2d\x69\x6e\x66\x6f\x2f\x75\x6e\x6b\x6e\x6f\x77\x6e\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x05\x0c\x64\x65\x62"
  "\x75\x67\x67\x65\x72\x2d\x70\x70\x76\x04\x0c\x0d\xe8\x02\x3c\x81"
  "\x8b\x02\xe7\x02\x3a\x81\x8b\x02\xe6\x02\x38\x81\x8b\x02\xe5\x02"
  "\x36\x81\x8b\x02\xe4\x02\x34\x81\x8f\x02\xe3\x02\x32\x81\x8b\x02"
  "\xe2\x02\x30\x81\x8b\x02\xe1\x02\x2e\x81\x91\x02\xe0\x02\x2c\x81"
  "\x8b\x02\xdf\x02\x2a\x81\x89\x02\xde\x02\x28\x81\x8b\x02\xdd\x02"
  "\x26\x81\x8b\x02\xdc\x02\x24\x81\x93\x02\xdb\x02\x22\x81\x8f\x02"
  "\xda\x02\x20\x81\x8b\x02\xd9\x02\x1e\x81\x89\x02\xd8\x02\x1c\x81"
  "\x89\x02\xd7\x02\x1a\x81\x89\x02\xd6\x02\x18\x81\x8d\x02\xd5\x02"
  "\x16\x81\x89\x02\xd4\x02\x14\x81\x8d\x02\xd3\x02\x12\x81\x89\x02"
  "\xd2\x02\x10\x81\x8d\x02\xd1\x02\x0e\x81\x89\x02\xd0\x02\x0c\x81"
  "\x89\x02\xcf\x02\x0a\x81\x89\x02\xce\x02\x08\x81\x87\x02\xcd\x02"
  "\x06\x81\x85\x02\xcc\x02\x04\x84\x06\x3b\x66\x77\x02\x29\x21\x54"
  "\x68\x65\x72\x65\x20\x69\x73\x20\x6e\x6f\x20\x63\x75\x72\x72\x65"
  "\x6e\x74\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2e\x59"
  "\x10\x0a\x04\x12\x70\x72\x69\x6e\x74\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x78\x03\x0d\x04\x0a\x04\xec\x02\x0a\x81\x87"
  "\x02\xeb\x02\x08\x81\x87\x02\xea\x02\x06\x81\x85\x02\xe9\x02\x04"
  "\x84\x06\x09\x17\x79\x02\x2a\x02\x73\x02\x2e\x0b\x20\x72\x65\x64"
  "\x75\x63\x74\x69\x6f\x6e\x34\x54\x68\x65\x20\x65\x78\x65\x63\x75"
  "\x74\x69\x6f\x6e\x20\x68\x69\x73\x74\x6f\x72\x79\x20\x66\x6f\x72"
  "\x20\x74\x68\x69\x73\x20\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x20\x63\x6f\x6e\x74\x61\x69\x6e\x73\x20\x33\x54\x68\x65\x72\x65"
  "\x20\x69\x73\x20\x6e\x6f\x20\x65\x78\x65\x63\x75\x74\x69\x6f\x6e"
  "\x20\x68\x69\x73\x74\x6f\x72\x79\x20\x66\x6f\x72\x20\x74\x68\x69"
  "\x73\x20\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2e\x10\x03\x0d"
  "\x04\x0a\x04\x0c\x04\xf5\x02\x14\x81\x87\x02\xf4\x02\x12\x81\x87"
  "\x02\xf3\x02\x10\x81\x87\x02\xf2\x02\x0e\x81\x87\x02\xf1\x02\x0c"
  "\x81\x87\x02\xf0\x02\x0a\x81\x87\x02\xef\x02\x08\x81\x87\x02\xee"
  "\x02\x06\x81\x85\x02\xed\x02\x04\x84\x06\x13\x25\x7a\x02\x2b\x05"
  "\x1f\x70\x72\x69\x6e\x74\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e"
  "\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x7b"
  "\x03\x0d\x04\x1b\x70\x72\x69\x6e\x74\x2d\x72\x65\x64\x75\x63\x74"
  "\x69\x6f\x6e\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x7c\x04"
  "\x1c\x70\x72\x69\x6e\x74\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x7d\x05\xf9\x02"
  "\x0a\x81\x89\x02\xf8\x02\x08\x81\x89\x02\xf7\x02\x06\x81\x89\x02"
  "\xf6\x02\x04\x86\x0a\x09\x15\x7e\x02\x2c\x15\x20\x20\x52\x65\x64"
  "\x75\x63\x74\x69\x6f\x6e\x20\x6e\x75\x6d\x62\x65\x72\x3a\x20\x13"
  "\x53\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x20\x6c\x65\x76\x65\x6c"
  "\x3a\x20\x04\x0a\x04\x0c\x03\xfd\x02\x0a\x81\x87\x02\xfc\x02\x08"
  "\x81\x87\x02\xfb\x02\x06\x81\x87\x02\xfa\x02\x04\x85\x08\x09\x13"
  "\x7f\x02\x2d\x59\x25\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x20"
  "\x28\x66\x72\x6f\x6d\x20\x65\x78\x65\x63\x75\x74\x69\x6f\x6e\x20"
  "\x68\x69\x73\x74\x6f\x72\x79\x29\x3a\x73\x02\x04\x0a\x03\x0d\x05"
  "\x76\x04\x82\x03\x0c\x81\x87\x02\x81\x03\x0a\x81\x85\x02\x80\x03"
  "\x08\x81\x85\x02\xff\x02\x06\x81\x85\x02\xfe\x02\x04\x84\x06\x0b"
  "\x19\x80\x01\x02\x2e\x59\x5b\x04\x78\x02\x85\x03\x08\x81\x85\x02"
  "\x84\x03\x06\x81\x85\x02\x83\x03\x04\x84\x06\x07\x0f\x81\x01\x02"
  "\x2f\x0c\x5b\x0e\x20\x61\x70\x70\x6c\x69\x65\x64\x20\x74\x6f\x3a"
  "\x20\x08\x75\x6e\x6b\x6e\x6f\x77\x6e\x02\x03\x0d\x04\x16\x73\x68"
  "\x6f\x77\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x6e"
  "\x61\x6d\x65\x03\x15\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x2d\x3e\x70\x61\x63\x6b\x61\x67\x65\x03\x16\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x73"
  "\x05\x1a\x73\x68\x6f\x77\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x2d\x62\x69\x6e\x64\x69\x6e\x67\x73\x04\x0a\x03\x13\x6f"
  "\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x78\x2d\x73\x69\x7a"
  "\x65\x04\x10\x77\x72\x69\x74\x65\x2d\x74\x6f\x2d\x73\x74\x72\x69"
  "\x6e\x67\x09\x90\x03\x18\x81\x89\x02\x8f\x03\x16\x81\x89\x02\x8e"
  "\x03\x14\x81\x87\x02\x8d\x03\x12\x81\x87\x02\x8c\x03\x10\x81\x87"
  "\x02\x8b\x03\x0e\x81\x85\x02\x8a\x03\x0c\x81\x85\x02\x89\x03\x0a"
  "\x81\x85\x02\x88\x03\x08\x81\x85\x02\x87\x03\x06\x81\x85\x02\x86"
  "\x03\x04\x84\x06\x17\x31\x82\x01\x02\x30\x02\x28\x53\x4c\x23\x20"
  "\x20\x50\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d\x65\x20"
  "\x20\x20\x20\x20\x20\x20\x20\x20\x20\x45\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x10\x08\x59\x58\x57\x03\x04\x03\x0a\x6c\x61\x73\x74"
  "\x2d\x70\x61\x69\x72\x83\x01\x04\x0a\x03\x0d\x03\x1b\x73\x74\x61"
  "\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x64\x65\x62\x75\x67\x67\x69"
  "\x6e\x67\x2d\x69\x6e\x66\x6f\x84\x01\x03\x20\x06\x17\x74\x65\x72"
  "\x73\x65\x2d\x70\x72\x69\x6e\x74\x2d\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x85\x01\x08\x9f\x03\x20\x81\x87\x02\x9e\x03\x1e\x81"
  "\x87\x02\x9d\x03\x1c\x81\x8b\x02\x9c\x03\x1a\x81\x89\x02\x9b\x03"
  "\x18\x81\x87\x02\x9a\x03\x16\x81\x87\x02\x99\x03\x14\x81\x83\x02"
  "\x98\x03\x12\x81\x83\x02\x97\x03\x10\x81\x83\x02\x96\x03\x0e\x81"
  "\x87\x02\x95\x03\x0c\x81\x85\x02\x94\x03\x0a\x81\x85\x02\x93\x03"
  "\x08\x84\x02\x92\x03\x06\x81\x85\x02\x91\x03\x04\x81\x83\x02\x1f"
  "\x3d\x86\x01\x02\x31\x02\x0f\x3b\x63\x6f\x6d\x70\x69\x6c\x65\x64"
  "\x20\x63\x6f\x64\x65\x33\x16\x3b\x75\x6e\x64\x65\x66\x69\x6e\x65"
  "\x64\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x01\x05\x20\x20"
  "\x20\x20\x15\x02\x20\x1e\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x73\x2d\x62\x79\x2d\x6e\x61\x6d"
  "\x65\x3f\x2a\x87\x01\x02\x87\x01\x02\x03\x0d\x03\x0f\x6e\x75\x6d"
  "\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x87\x01\x04\x0a\x03"
  "\x0a\x04\x11\x73\x74\x72\x69\x6e\x67\x2d\x70\x61\x64\x2d\x72\x69"
  "\x67\x68\x74\x03\x0d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x3f\x88\x01\x04\x11\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x73"
  "\x74\x72\x69\x6e\x67\x03\x1b\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d"
  "\x65\x03\x1d\x73\x70\x65\x63\x69\x61\x6c\x2d\x66\x6f\x72\x6d\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d\x65\x3f\x03"
  "\x65\x03\x66\x02\x14\x63\x75\x72\x72\x65\x6e\x74\x2d\x6f\x75\x74"
  "\x70\x75\x74\x2d\x70\x6f\x72\x74\x03\x68\x04\x0f\x77\x72\x69\x74"
  "\x65\x2d\x64\x62\x67\x2d\x6e\x61\x6d\x65\x05\x13\x73\x68\x61\x6c"
  "\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x68\x03"
  "\x69\x03\x09\x75\x6e\x73\x79\x6e\x74\x61\x78\x03\x0c\x13\xbc\x03"
  "\x3c\x81\x83\x02\xbb\x03\x3a\x81\x87\x02\xba\x03\x38\x81\x83\x02"
  "\xb9\x03\x36\x81\x83\x02\xb8\x03\x34\x81\x85\x02\xb7\x03\x32\x81"
  "\x83\x02\xb6\x03\x30\x81\x83\x02\xb5\x03\x2e\x81\x83\x02\xb4\x03"
  "\x2c\x81\x83\x02\xb3\x03\x2a\x81\x83\x02\xb2\x03\x28\x81\x85\x02"
  "\xb1\x03\x26\x81\x8b\x02\xb0\x03\x24\x81\x83\x02\xaf\x03\x22\x81"
  "\x89\x02\xae\x03\x20\x81\x8b\x02\xad\x03\x1e\x81\x8b\x02\xac\x03"
  "\x1c\x81\x89\x02\xab\x03\x1a\x81\x91\x02\xaa\x03\x18\x81\x93\x02"
  "\xa9\x03\x16\x81\x95\x02\xa8\x03\x14\x81\x83\x02\xa7\x03\x12\x81"
  "\x8d\x02\xa6\x03\x10\x81\x89\x02\xa5\x03\x0e\x81\x89\x02\xa4\x03"
  "\x0c\x81\x91\x02\xa3\x03\x0a\x81\x8d\x02\xa2\x03\x08\x81\x89\x02"
  "\xa1\x03\x06\x81\x89\x02\xa0\x03\x04\x86\x0a\x3b\x71\x69\x02\x32"
  "\x08\x58\x57\x1b\x66\x69\x6e\x69\x73\x68\x2d\x6d\x6f\x76\x65\x2d"
  "\x74\x6f\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x21\x89\x01"
  "\x04\x04\x1a\x6d\x61\x79\x62\x65\x2d\x73\x74\x6f\x70\x2d\x75\x73"
  "\x69\x6e\x67\x2d\x68\x69\x73\x74\x6f\x72\x79\x21\x8a\x01\x06\x13"
  "\x65\x61\x72\x6c\x69\x65\x72\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c"
  "\x65\x6d\x8b\x01\x03\xc1\x03\x0c\x81\x89\x02\xc0\x03\x0a\x81\x85"
  "\x02\xbf\x03\x08\x81\x85\x02\xbe\x03\x06\x81\x85\x02\xbd\x03\x04"
  "\x84\x02\x0b\x18\x8c\x01\x02\x33\x14\x6e\x6f\x20\x6d\x6f\x72\x65"
  "\x20\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x73\x25\x61\x6c\x72"
  "\x65\x61\x64\x79\x20\x61\x74\x20\x68\x69\x67\x68\x65\x73\x74\x20"
  "\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x20\x6c\x65\x76\x65\x6c"
  "\x2e\x10\x03\x20\x04\x0f\x72\x65\x61\x73\x6f\x6e\x2b\x6d\x65\x73"
  "\x73\x61\x67\x65\x8d\x01\x05\x1e\x04\x63\x05\xc7\x03\x0e\x81\x8d"
  "\x02\xc6\x03\x0c\x81\x8d\x02\xc5\x03\x0a\x81\x8f\x02\xc4\x03\x08"
  "\x81\x8b\x02\xc3\x03\x06\x81\x89\x02\xc2\x03\x04\x86\x0a\x0d\x1e"
  "\x8e\x01\x02\x34\x03\x12\x03\x20\x03\x13\x04\xca\x03\x08\x81\x83"
  "\x02\xc9\x03\x06\x81\x83\x02\xc8\x03\x04\x83\x04\x07\x11\x13\x02"
  "\x35\x08\x58\x57\x89\x01\x04\x04\x8a\x01\x06\x11\x6c\x61\x74\x65"
  "\x72\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x12\x03\xcf\x03"
  "\x0c\x81\x89\x02\xce\x03\x0a\x81\x85\x02\xcd\x03\x08\x81\x85\x02"
  "\xcc\x03\x06\x81\x85\x02\xcb\x03\x04\x84\x02\x0b\x18\x8f\x01\x02"
  "\x36\x5b\x59\x24\x61\x6c\x72\x65\x61\x64\x79\x20\x61\x74\x20\x6c"
  "\x6f\x77\x65\x73\x74\x20\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x20\x6c\x65\x76\x65\x6c\x2e\x10\x04\x8d\x01\x05\x1e\x04\x63\x04"
  "\xd6\x03\x10\x81\x89\x02\xd5\x03\x0e\x81\x89\x02\xd4\x03\x0c\x81"
  "\x87\x02\xd3\x03\x0a\x81\x83\x02\xd2\x03\x08\x81\x8b\x02\xd1\x03"
  "\x06\x81\x89\x02\xd0\x03\x04\x86\x0a\x0f\x1f\x90\x01\x02\x37\x5b"
  "\x59\x08\x58\x57\x03\x04\x8a\x01\x04\x12\x73\x65\x6c\x65\x63\x74"
  "\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x91\x01\x04\x89\x01"
  "\x05\x1e\x05\xde\x03\x12\x81\x87\x02\xdd\x03\x10\x81\x83\x02\xdc"
  "\x03\x0e\x81\x87\x02\xdb\x03\x0c\x81\x85\x02\xda\x03\x0a\x81\x85"
  "\x02\xd9\x03\x08\x81\x85\x02\xd8\x03\x06\x81\x85\x02\xd7\x03\x04"
  "\x84\x02\x11\x23\x92\x01\x02\x38\x27\x53\x75\x62\x70\x72\x6f\x62"
  "\x6c\x65\x6d\x20\x6e\x75\x6d\x62\x65\x72\x20\x74\x6f\x6f\x20\x6c"
  "\x61\x72\x67\x65\x20\x28\x6c\x69\x6d\x69\x74\x20\x69\x73\x20\x0d"
  "\x20\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x29\x2e\x12\x53\x75\x62"
  "\x70\x72\x6f\x62\x6c\x65\x6d\x20\x6e\x75\x6d\x62\x65\x72\x10\x05"
  "\x1f\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x6e\x6f\x6e\x6e"
  "\x65\x67\x61\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x93"
  "\x01\x04\x0a\x6c\x69\x73\x74\x2d\x74\x61\x69\x6c\x03\x20\x03\x07"
  "\x6c\x65\x6e\x67\x74\x68\x94\x01\x06\x63\x06\xef\x03\x24\x81\x91"
  "\x02\xee\x03\x22\x81\x8d\x02\xed\x03\x20\x81\x8d\x02\xec\x03\x1e"
  "\x81\x8b\x02\xeb\x03\x1c\x81\x8b\x02\xea\x03\x1a\x81\x8b\x02\xe9"
  "\x03\x18\x81\x87\x02\xe8\x03\x16\x81\x87\x02\xe7\x03\x14\x81\x87"
  "\x02\xe6\x03\x12\x81\x89\x02\xe5\x03\x10\x81\x87\x02\xe4\x03\x0e"
  "\x81\x87\x02\xe3\x03\x0c\x81\x85\x02\xe2\x03\x0a\x81\x87\x02\xe1"
  "\x03\x08\x81\x85\x02\xe0\x03\x06\x81\x85\x02\xdf\x03\x04\x84\x06"
  "\x23\x39\x95\x01\x02\x39\x2c\x67\x6f\x69\x6e\x67\x20\x74\x6f\x20"
  "\x74\x68\x65\x20\x6e\x65\x78\x74\x20\x28\x6c\x65\x73\x73\x20\x72"
  "\x65\x63\x65\x6e\x74\x29\x20\x73\x75\x62\x70\x72\x6f\x62\x6c\x65"
  "\x6d\x2e\x13\x6e\x6f\x20\x6d\x6f\x72\x65\x20\x72\x65\x64\x75\x63"
  "\x74\x69\x6f\x6e\x73\x10\x08\x58\x57\x17\x64\x65\x62\x75\x67\x67"
  "\x65\x72\x3a\x73\x74\x75\x64\x65\x6e\x74\x2d\x77\x61\x6c\x6b\x3f"
  "\x96\x01\x89\x01\x05\x04\x1b\x6d\x61\x79\x62\x65\x2d\x73\x74\x61"
  "\x72\x74\x2d\x75\x73\x69\x6e\x67\x2d\x68\x69\x73\x74\x6f\x72\x79"
  "\x21\x97\x01\x03\x16\x64\x73\x74\x61\x74\x65\x2f\x75\x73\x69\x6e"
  "\x67\x2d\x68\x69\x73\x74\x6f\x72\x79\x3f\x98\x01\x05\x13\x6d\x6f"
  "\x76\x65\x2d\x74\x6f\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x21"
  "\x99\x01\x06\x8b\x01\x04\x8d\x01\x04\x89\x01\x04\x08\x84\x04\x2c"
  "\x81\x87\x02\x83\x04\x2a\x81\x85\x02\x82\x04\x28\x84\x06\x81\x04"
  "\x26\x81\x89\x02\x80\x04\x24\x81\x85\x02\xff\x03\x22\x81\x89\x02"
  "\xfe\x03\x20\x81\x8b\x02\xfd\x03\x1e\x81\x89\x02\xfc\x03\x1c\x81"
  "\x89\x02\xfb\x03\x1a\x81\x89\x02\xfa\x03\x18\x81\x89\x02\xf9\x03"
  "\x16\x81\x89\x02\xf8\x03\x14\x81\x89\x02\xf7\x03\x12\x81\x89\x02"
  "\xf6\x03\x10\x81\x87\x02\xf5\x03\x0e\x81\x85\x02\xf4\x03\x0c\x81"
  "\x85\x02\xf3\x03\x0a\x81\x85\x02\xf2\x03\x08\x81\x85\x02\xf1\x03"
  "\x06\x81\x85\x02\xf0\x03\x04\x84\x02\x2b\x4a\x9a\x01\x02\x3a\x30"
  "\x67\x6f\x69\x6e\x67\x20\x74\x6f\x20\x74\x68\x65\x20\x70\x72\x65"
  "\x76\x69\x6f\x75\x73\x20\x28\x6d\x6f\x72\x65\x20\x72\x65\x63\x65"
  "\x6e\x74\x29\x20\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2e\x16"
  "\x13\x6e\x6f\x20\x6d\x6f\x72\x65\x20\x72\x65\x64\x75\x63\x74\x69"
  "\x6f\x6e\x73\x10\x08\x58\x57\x89\x01\x96\x01\x05\x04\x97\x01\x03"
  "\x98\x01\x06\x12\x03\x1c\x73\x70\x65\x63\x69\x61\x6c\x2d\x68\x69"
  "\x73\x74\x6f\x72\x79\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x3f\x9b\x01\x05\x99\x01\x05\x1e\x04\x11\x04\x8d\x01\x04\x89\x01"
  "\x04\x0b\xa2\x04\x3e\x81\x89\x02\xa1\x04\x3c\x81\x8b\x02\xa0\x04"
  "\x3a\x81\x8b\x02\x9f\x04\x38\x81\x8b\x02\x9e\x04\x36\x81\x8b\x02"
  "\x9d\x04\x34\x81\x89\x02\x9c\x04\x32\x81\x87\x02\x9b\x04\x30\x81"
  "\x87\x02\x9a\x04\x2e\x81\x89\x02\x99\x04\x2c\x81\x87\x02\x98\x04"
  "\x2a\x81\x87\x02\x97\x04\x28\x81\x87\x02\x96\x04\x26\x81\x89\x02"
  "\x95\x04\x24\x81\x85\x02\x94\x04\x22\x81\x87\x02\x93\x04\x20\x81"
  "\x8b\x02\x92\x04\x1e\x81\x89\x02\x91\x04\x1c\x81\x87\x02\x90\x04"
  "\x1a\x81\x87\x02\x8f\x04\x18\x81\x89\x02\x8e\x04\x16\x81\x87\x02"
  "\x8d\x04\x14\x81\x87\x02\x8c\x04\x12\x81\x87\x02\x8b\x04\x10\x81"
  "\x85\x02\x8a\x04\x0e\x81\x89\x02\x89\x04\x0c\x81\x85\x02\x88\x04"
  "\x0a\x81\x85\x02\x87\x04\x08\x81\x85\x02\x86\x04\x06\x81\x85\x02"
  "\x85\x04\x04\x84\x02\x3d\x65\x9c\x01\x02\x3b\x10\x0a\x08\x58\x57"
  "\x03\x05\x13\x73\x68\x6f\x77\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d"
  "\x66\x72\x61\x6d\x65\x9d\x01\x03\x16\x75\x6e\x64\x65\x66\x69\x6e"
  "\x65\x64\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x9e\x01"
  "\x03\xa6\x04\x0a\x81\x85\x02\xa5\x04\x08\x81\x85\x02\xa4\x04\x06"
  "\x81\x85\x02\xa3\x04\x04\x84\x02\x09\x17\x9f\x01\x02\x3c\x59\x10"
  "\x0a\x08\x58\x57\x03\x03\x83\x01\x03\x9e\x01\x05\x0c\x73\x68\x6f"
  "\x77\x2d\x66\x72\x61\x6d\x65\x73\x04\xac\x04\x0e\x81\x87\x02\xab"
  "\x04\x0c\x81\x87\x02\xaa\x04\x0a\x81\x85\x02\xa9\x04\x08\x81\x85"
  "\x02\xa8\x04\x06\x81\x85\x02\xa7\x04\x04\x84\x02\x0d\x1f\xa0\x01"
  "\x02\x3d\x16\x27\x54\x68\x65\x20\x63\x75\x72\x72\x65\x6e\x74\x20"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x68\x61\x73\x20"
  "\x6e\x6f\x20\x70\x61\x72\x65\x6e\x74\x2e\x59\x10\x0a\x08\x58\x57"
  "\x03\x03\x18\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x68"
  "\x61\x73\x2d\x70\x61\x72\x65\x6e\x74\x3f\x03\x9e\x01\x03\x13\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x70\x61\x72\x65\x6e"
  "\x74\x04\x63\x05\x9d\x01\x06\xb5\x04\x14\x81\x87\x02\xb4\x04\x12"
  "\x81\x87\x02\xb3\x04\x10\x81\x89\x02\xb2\x04\x0e\x81\x87\x02\xb1"
  "\x04\x0c\x81\x89\x02\xb0\x04\x0a\x81\x85\x02\xaf\x04\x08\x81\x85"
  "\x02\xae\x04\x06\x81\x85\x02\xad\x04\x04\x84\x02\x13\x2b\xa1\x01"
  "\x02\x3e\x36\x54\x68\x69\x73\x20\x69\x73\x20\x74\x68\x65\x20\x69"
  "\x6e\x69\x74\x69\x61\x6c\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x3b\x20\x63\x61\x6e\x27\x74\x20\x6d\x6f\x76\x65\x20\x74"
  "\x6f\x20\x63\x68\x69\x6c\x64\x2e\x16\x5b\x10\x0a\x08\x58\x57\x03"
  "\x05\x9d\x01\x04\x63\x03\x9e\x01\x04\xbd\x04\x12\x81\x87\x02\xbc"
  "\x04\x10\x81\x87\x02\xbb\x04\x0e\x81\x87\x02\xba\x04\x0c\x81\x87"
  "\x02\xb9\x04\x0a\x81\x85\x02\xb8\x04\x08\x81\x85\x02\xb7\x04\x06"
  "\x81\x85\x02\xb6\x04\x04\x84\x02\x11\x25\xa2\x01\x02\x3f\x59\x5b"
  "\x10\x0a\x04\x03\x94\x01\x06\x0b\x73\x68\x6f\x77\x2d\x66\x72\x61"
  "\x6d\x65\x04\xc3\x04\x0e\x81\x87\x02\xc2\x04\x0c\x81\x85\x02\xc1"
  "\x04\x0a\x81\x87\x02\xc0\x04\x08\x81\x83\x02\xbf\x04\x06\x81\x83"
  "\x02\xbe\x04\x04\x85\x08\x0d\x1b\xa3\x01\x02\x40\x1f\x74\x68\x65"
  "\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x66\x6f\x72"
  "\x20\x74\x68\x69\x73\x20\x66\x72\x61\x6d\x65\x0d\x74\x68\x65\x20"
  "\x64\x65\x62\x75\x67\x67\x65\x72\x08\x58\x57\x03\x04\x1b\x67\x65"
  "\x74\x2d\x65\x76\x61\x6c\x75\x61\x74\x69\x6f\x6e\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\xa4\x01\x05\x16\x64\x65\x62\x75"
  "\x67\x2f\x72\x65\x61\x64\x2d\x65\x76\x61\x6c\x2d\x70\x72\x69\x6e"
  "\x74\xa5\x01\x03\xc7\x04\x0a\x81\x85\x02\xc6\x04\x08\x81\x85\x02"
  "\xc5\x04\x06\x81\x85\x02\xc4\x04\x04\x84\x02\x09\x17\xa6\x01\x02"
  "\x41\x08\x58\x57\x03\x04\xa4\x01\x04\x18\x64\x65\x62\x75\x67\x2f"
  "\x72\x65\x61\x64\x2d\x65\x76\x61\x6c\x2d\x70\x72\x69\x6e\x74\x2d"
  "\x31\x03\xcb\x04\x0a\x81\x85\x02\xca\x04\x08\x81\x85\x02\xc9\x04"
  "\x06\x81\x85\x02\xc8\x04\x04\x84\x02\x09\x15\xa7\x01\x02\x42\x08"
  "\x58\x57\x0c\x64\x65\x62\x75\x67\x2f\x77\x68\x65\x72\x65\x04\x05"
  "\x6b\x02\xcf\x04\x0a\x81\x87\x02\xce\x04\x08\x81\x85\x02\xcd\x04"
  "\x06\x81\x85\x02\xcc\x04\x04\x84\x02\x09\x14\xa8\x01\x02\x43\x18"
  "\x4e\x6f\x20\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x74\x6f\x20"
  "\x72\x65\x70\x6f\x72\x74\x2e\x10\x0b\x08\x58\x57\x03\x04\x63\x04"
  "\x04\x17\x77\x72\x69\x74\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x72\x65\x70\x6f\x72\x74\x04\xd4\x04\x0c\x81\x83\x02\xd3"
  "\x04\x0a\x81\x85\x02\xd2\x04\x08\x81\x85\x02\xd1\x04\x06\x81\x85"
  "\x02\xd0\x04\x04\x84\x02\x0b\x1c\xa9\x01\x02\x44\x02\x02\x3a\x10"
  "\x55\x73\x65\x20\x74\x68\x69\x73\x20\x6f\x70\x74\x69\x6f\x6e\x0e"
  "\x4f\x70\x74\x69\x6f\x6e\x20\x6e\x75\x6d\x62\x65\x72\x1a\x54\x68"
  "\x65\x72\x65\x20\x69\x73\x20\x6f\x6e\x6c\x79\x20\x6f\x6e\x65\x20"
  "\x6f\x70\x74\x69\x6f\x6e\x3a\x1c\x43\x68\x6f\x6f\x73\x65\x20\x61"
  "\x6e\x20\x6f\x70\x74\x69\x6f\x6e\x20\x62\x79\x20\x6e\x75\x6d\x62"
  "\x65\x72\x3a\x1b\x4e\x6f\x20\x6f\x70\x74\x69\x6f\x6e\x73\x20\x74"
  "\x6f\x20\x63\x68\x6f\x6f\x73\x65\x20\x66\x72\x6f\x6d\x2e\x10\x0b"
  "\x08\x58\x57\x03\x02\x0f\x62\x6f\x75\x6e\x64\x2d\x72\x65\x73\x74"
  "\x61\x72\x74\x73\x03\x13\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f"
  "\x72\x65\x73\x74\x61\x72\x74\x73\x04\x63\x03\x94\x01\x04\x04\x09"
  "\x6c\x69\x73\x74\x2d\x72\x65\x66\x04\x0a\x04\x1d\x69\x6e\x76\x6f"
  "\x6b\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x2d\x69\x6e\x74\x65\x72"
  "\x61\x63\x74\x69\x76\x65\x6c\x79\x05\x0f\x77\x72\x69\x74\x65\x2d"
  "\x72\x65\x73\x74\x61\x72\x74\x73\x06\x13\x70\x72\x6f\x6d\x70\x74"
  "\x2d\x66\x6f\x72\x2d\x69\x6e\x74\x65\x67\x65\x72\xaa\x01\x03\x87"
  "\x01\x04\x18\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x63\x6f"
  "\x6e\x66\x69\x72\x6d\x61\x74\x69\x6f\x6e\xab\x01\x04\x10\x73\x74"
  "\x72\x69\x6e\x67\x2d\x70\x61\x64\x2d\x6c\x65\x66\x74\x0e\xea\x04"
  "\x2e\x81\x83\x02\xe9\x04\x2c\x81\x8d\x02\xe8\x04\x2a\x81\x89\x02"
  "\xe7\x04\x28\x81\x85\x02\xe6\x04\x26\x81\x85\x02\xe5\x04\x24\x81"
  "\x83\x02\xe4\x04\x22\x84\x06\xe3\x04\x20\x81\x89\x02\xe2\x04\x1e"
  "\x81\x83\x02\xe1\x04\x1c\x81\x83\x02\xe0\x04\x1a\x81\x83\x02\xdf"
  "\x04\x18\x81\x87\x02\xde\x04\x16\x81\x83\x02\xdd\x04\x14\x81\x83"
  "\x02\xdc\x04\x12\x81\x89\x02\xdb\x04\x10\x81\x85\x02\xda\x04\x0e"
  "\x81\x89\x02\xd9\x04\x0c\x81\x87\x02\xd8\x04\x0a\x81\x85\x02\xd7"
  "\x04\x08\x81\x85\x02\xd6\x04\x06\x81\x85\x02\xd5\x04\x04\x84\x02"
  "\x2d\x5b\xac\x01\x02\x45\x12\x43\x61\x6e\x27\x74\x20\x63\x6f\x6e"
  "\x74\x69\x6e\x75\x65\x21\x21\x21\x10\x08\x58\x57\x03\x03\x20\x04"
  "\x63\x05\x11\x65\x6e\x74\x65\x72\x2d\x73\x75\x62\x70\x72\x6f\x62"
  "\x6c\x65\x6d\xad\x01\x04\xef\x04\x0c\x81\x85\x02\xee\x04\x0a\x81"
  "\x87\x02\xed\x04\x08\x81\x85\x02\xec\x04\x06\x81\x85\x02\xeb\x04"
  "\x04\x84\x02\x0b\x1c\xae\x01\x02\x46\x10\x08\x58\x57\x03\x05\xad"
  "\x01\x02\xf3\x04\x0a\x81\x87\x02\xf2\x04\x08\x81\x85\x02\xf1\x04"
  "\x06\x81\x85\x02\xf0\x04\x04\x84\x02\x09\x15\xaf\x01\x02\x47\x08"
  "\x43\x6f\x6e\x66\x69\x72\x6d\x0b\x04\x61\x73\x6b\x13\x54\x68\x61"
  "\x74\x20\x65\x76\x61\x6c\x75\x61\x74\x65\x73\x20\x74\x6f\x3a\x02"
  "\x24\x02\x29\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x20\x74\x6f"
  "\x20\x45\x56\x41\x4c\x55\x41\x54\x45\x20\x61\x6e\x64\x20\x43\x4f"
  "\x4e\x54\x49\x4e\x55\x45\x20\x77\x69\x74\x68\x01\x0e\x20\x28\x24"
  "\x20\x74\x6f\x20\x72\x65\x74\x72\x79\x29\x10\x08\x1e\x64\x65\x62"
  "\x75\x67\x67\x65\x72\x3a\x70\x72\x69\x6e\x74\x2d\x72\x65\x74\x75"
  "\x72\x6e\x2d\x76\x61\x6c\x75\x65\x73\x3f\xb0\x01\x02\x04\xa4\x01"
  "\x03\x75\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e"
  "\x64\xb1\x01\x02\x3d\x03\x0d\x04\x11\x64\x65\x62\x75\x67\x2f\x73"
  "\x63\x6f\x64\x65\x2d\x65\x76\x61\x6c\x04\x0b\x64\x65\x62\x75\x67"
  "\x2f\x65\x76\x61\x6c\x05\x16\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f"
  "\x72\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\xb2\x01\x04\x0a"
  "\x03\x09\x03\x1a\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2d"
  "\x3e\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x05\x0f\x72"
  "\x65\x73\x74\x61\x72\x74\x2d\x74\x68\x72\x65\x61\x64\x04\x0c\x03"
  "\x23\x63\x6f\x6e\x74\x69\x6e\x75\x65\x2d\x66\x72\x6f\x6d\x2d\x64"
  "\x65\x72\x69\x76\x65\x64\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x72"
  "\x72\x6f\x72\x04\xab\x01\x10\x88\x05\x2c\x81\x83\x02\x87\x05\x2a"
  "\x81\x89\x02\x86\x05\x28\x81\x8b\x02\x85\x05\x26\x81\x83\x02\x84"
  "\x05\x24\x81\x8b\x02\x83\x05\x22\x81\x8b\x02\x82\x05\x20\x81\x89"
  "\x02\x81\x05\x1e\x81\x89\x02\x80\x05\x1c\x81\x89\x02\xff\x04\x1a"
  "\x81\x89\x02\xfe\x04\x18\x81\x89\x02\xfd\x04\x16\x81\x93\x02\xfc"
  "\x04\x14\x81\x83\x02\xfb\x04\x12\x81\x8d\x02\xfa\x04\x10\x81\x89"
  "\x02\xf9\x04\x0e\x81\x8b\x02\xf8\x04\x0c\x81\x89\x02\xf7\x04\x0a"
  "\x81\x89\x02\xf6\x04\x08\x81\x8b\x02\xf5\x04\x06\x81\x87\x02\xf4"
  "\x04\x04\x85\x08\x2b\x5a\xab\x01\x02\x48\x10\x0b\x03\x17\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x6f\x74\x68\x65\x72\x2d\x74\x68"
  "\x72\x65\x61\x64\x02\x8a\x05\x06\x81\x83\x02\x89\x05\x04\x83\x04"
  "\x05\x0d\xb3\x01\x02\x49\x8b\x05\x04\x82\x02\x03\xb4\x01\x02\x4a"
  "\x02\x08\x72\x75\x6e\x74\x69\x6d\x65\x09\x64\x65\x62\x75\x67\x67"
  "\x65\x72\x0d\x74\x68\x65\x20\x64\x65\x62\x75\x67\x67\x65\x72\x19"
  "\x74\x68\x65\x20\x64\x65\x62\x75\x67\x67\x65\x72\x20\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x58\x57\x03\x58\x57\x03\x05\x68"
  "\x03\x0e\x2d\x3e\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x05"
  "\xa5\x01\x04\x95\x05\x16\x81\x85\x02\x94\x05\x14\x81\x83\x02\x93"
  "\x05\x12\x81\x85\x02\x92\x05\x10\x81\x83\x02\x91\x05\x0e\x81\x83"
  "\x02\x90\x05\x0c\x81\x85\x02\x8f\x05\x0a\x81\x83\x02\x8e\x05\x08"
  "\x81\x83\x02\x8d\x05\x06\x82\x02\x8c\x05\x04\x84\x06\x15\x29\xa5"
  "\x01\x02\x4b\x10\x0e\x53\x74\x61\x63\x6b\x20\x66\x72\x61\x6d\x65"
  "\x3a\x20\x08\x58\x57\x03\x04\x04\x0a\x04\x0c\x03\x1c\x6e\x61\x6d"
  "\x65\x64\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2f\x64\x65\x73"
  "\x63\x72\x69\x70\x74\x69\x6f\x6e\x03\x0d\x04\x09\x66\x6f\x72\x2d"
  "\x65\x61\x63\x68\x05\x76\x08\xa0\x05\x18\x81\x85\x02\x9f\x05\x16"
  "\x81\x85\x02\x9e\x05\x14\x81\x85\x02\x9d\x05\x12\x81\x87\x02\x9c"
  "\x05\x10\x81\x83\x02\x9b\x05\x0e\x81\x87\x02\x9a\x05\x0c\x81\x83"
  "\x02\x99\x05\x0a\x81\x83\x02\x98\x05\x08\x81\x85\x02\x97\x05\x06"
  "\x81\x85\x02\x96\x05\x04\x84\x02\x17\x31\xb5\x01\x02\x4c\x10\x17"
  "\x53\x74\x61\x63\x6b\x20\x66\x72\x61\x6d\x65\x20\x65\x6c\x65\x6d"
  "\x65\x6e\x74\x73\x3a\x20\x08\x58\x57\x03\x04\x04\x0a\x03\x15\x73"
  "\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x65\x6c\x65\x6d\x65"
  "\x6e\x74\x73\x04\x18\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x02\x0d\x03\x0c"
  "\x07\xa9\x05\x14\x81\x83\x02\xa8\x05\x12\x83\x04\xa7\x05\x10\x81"
  "\x83\x02\xa6\x05\x0e\x81\x85\x02\xa5\x05\x0c\x81\x83\x02\xa4\x05"
  "\x0a\x81\x83\x02\xa3\x05\x08\x81\x85\x02\xa2\x05\x06\x81\x85\x02"
  "\xa1\x05\x04\x84\x02\x13\x2a\x0d\x02\x4d\x02\x32\x4e\x6f\x77\x20"
  "\x75\x73\x69\x6e\x67\x20\x69\x6e\x66\x6f\x72\x6d\x61\x74\x69\x6f"
  "\x6e\x20\x66\x72\x6f\x6d\x20\x74\x68\x65\x20\x65\x78\x65\x63\x75"
  "\x74\x69\x6f\x6e\x20\x68\x69\x73\x74\x6f\x72\x79\x2e\x16\x04\x6e"
  "\x6f\x77\x0c\x18\x10\x04\x02\xae\x05\x0c\x81\x85\x02\xad\x05\x0a"
  "\x81\x85\x02\xac\x05\x08\x81\x85\x02\xab\x05\x06\x81\x85\x02\xaa"
  "\x05\x04\x84\x06\x0b\x19\x0a\x02\x4e\x02\x35\x4e\x6f\x77\x20\x69"
  "\x67\x6e\x6f\x72\x69\x6e\x67\x20\x69\x6e\x66\x6f\x72\x6d\x61\x74"
  "\x69\x6f\x6e\x20\x66\x72\x6f\x6d\x20\x74\x68\x65\x20\x65\x78\x65"
  "\x63\x75\x74\x69\x6f\x6e\x20\x68\x69\x73\x74\x6f\x72\x79\x2e\x16"
  "\x18\x0c\x10\x04\x02\xb3\x05\x0c\x81\x85\x02\xb2\x05\x0a\x81\x85"
  "\x02\xb1\x05\x08\x81\x85\x02\xb0\x05\x06\x81\x85\x02\xaf\x05\x04"
  "\x84\x06\x0b\x19\x18\x02\x4f\x0c\x17\x10\xb6\x05\x08\x81\x83\x02"
  "\xb5\x05\x06\x81\x83\x02\xb4\x05\x04\x83\x04\x07\x0f\x17\x02\x50"
  "\x19\x10\xb8\x05\x06\x81\x83\x02\xb7\x05\x04\x83\x04\x05\x0c\x19"
  "\x02\x51\x02\x0a\x09\x08\x16\x03\x94\x01\x03\x3b\x03\x84\x01\x03"
  "\x15\x69\x6d\x70\x72\x6f\x70\x65\x72\x2d\x6c\x69\x73\x74\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x94\x01\x03\x26\x64\x65\x62\x75\x67\x67\x69"
  "\x6e\x67\x2d\x69\x6e\x66\x6f\x2f\x75\x6e\x64\x65\x66\x69\x6e\x65"
  "\x64\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3f\x06\xc5"
  "\x05\x1c\x81\x89\x02\xc4\x05\x1a\x81\x89\x02\xc3\x05\x18\x81\x89"
  "\x02\xc2\x05\x16\x81\x89\x02\xc1\x05\x14\x81\x87\x02\xc0\x05\x12"
  "\x81\x89\x02\xbf\x05\x10\x81\x87\x02\xbe\x05\x0e\x81\x87\x02\xbd"
  "\x05\x0c\x81\x87\x02\xbc\x05\x0a\x81\x87\x02\xbb\x05\x08\x81\x87"
  "\x02\xba\x05\x06\x81\x87\x02\xb9\x05\x04\x85\x08\x1b\x33\x84\x01"
  "\x02\x52\x16\x10\x03\x98\x01\x05\x99\x01\x04\x11\x03\x9b\x01\x05"
  "\xcb\x05\x0e\x81\x85\x02\xca\x05\x0c\x81\x85\x02\xc9\x05\x0a\x81"
  "\x85\x02\xc8\x05\x08\x81\x85\x02\xc7\x05\x06\x81\x85\x02\xc6\x05"
  "\x04\x84\x06\x0d\x1e\x3b\x02\x53\x0a\x59\x5b\x16\x03\x60\x04\x5d"
  "\x03\xd1\x05\x0e\x81\x87\x02\xd0\x05\x0c\x81\x87\x02\xcf\x05\x0a"
  "\x81\x87\x02\xce\x05\x08\x81\x87\x02\xcd\x05\x06\x81\x87\x02\xcc"
  "\x05\x04\x85\x08\x0d\x1b\x16\x02\x54\x10\x29\x73\x74\x61\x63\x6b"
  "\x2d\x66\x72\x61\x6d\x65\x2d\x74\x79\x70\x65\x2f\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x2d\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72"
  "\x65\x73\x73\x02\x03\x11\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d"
  "\x65\x2f\x74\x79\x70\x65\x02\xd5\x05\x0a\x81\x85\x02\xd4\x05\x08"
  "\x81\x87\x02\xd3\x05\x06\x81\x83\x02\xd2\x05\x04\x83\x04\x09\x14"
  "\x0c\x02\x55\x5b\xd9\x05\x0a\x81\x85\x02\xd8\x05\x08\x81\x85\x02"
  "\xd7\x05\x06\x81\x85\x02\xd6\x05\x04\x83\x04\x09\x0e\x02\x56\x59"
  "\x5b\xde\x05\x0c\x81\x85\x02\xdd\x05\x0a\x81\x85\x02\xdc\x05\x08"
  "\x81\x85\x02\xdb\x05\x06\x81\x85\x02\xda\x05\x04\x84\x06\x0b\x10"
  "\xb6\x01\x02\x57\x59\xdf\x05\x04\x83\x04\x03\xb7\x01\x02\x58\x59"
  "\x5b\xe1\x05\x06\x81\x83\x02\xe0\x05\x04\x83\x04\x05\x0a\xb8\x01"
  "\x02\x59\x5b\x0c\x77\x72\x61\x70\x2d\x61\x72\x6f\x75\x6e\x64\x03"
  "\x83\x01\x02\xe4\x05\x08\x81\x83\x02\xe3\x05\x06\x81\x83\x02\xe2"
  "\x05\x04\x83\x04\x07\x10\x83\x01\x02\x5a\x03\x66\x03\x65\x03\xe6"
  "\x05\x06\x81\x83\x02\xe5\x05\x04\x83\x04\x05\x0d\x66\x02\x5b\x57"
  "\x43\x61\x6e\x6e\x6f\x74\x20\x65\x76\x61\x6c\x75\x61\x74\x65\x20"
  "\x69\x6e\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x3b\x0a\x75\x73\x69\x6e\x67\x20\x74\x68"
  "\x65\x20\x72\x65\x61\x64\x2d\x65\x76\x61\x6c\x2d\x70\x72\x69\x6e"
  "\x74\x20\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x69\x6e"
  "\x73\x74\x65\x61\x64\x2e\x10\x0a\x59\x03\x88\x01\x04\x02\x19\x6e"
  "\x65\x61\x72\x65\x73\x74\x2d\x72\x65\x70\x6c\x2f\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x04\xeb\x05\x0c\x81\x87\x02\xea\x05"
  "\x0a\x81\x89\x02\xe9\x05\x08\x81\x85\x02\xe8\x05\x06\x84\x06\xe7"
  "\x05\x04\x81\x87\x02\x0b\x19\x88\x01\x02\x5c\x59\x10\x0a\x03\x9e"
  "\x01\x02\xee\x05\x08\x81\x89\x02\xed\x05\x06\x81\x87\x02\xec\x05"
  "\x04\x85\x08\x07\x10\x65\x02\x5d\x21\x54\x68\x65\x72\x65\x20\x69"
  "\x73\x20\x6e\x6f\x20\x63\x75\x72\x72\x65\x6e\x74\x20\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2e\x04\x63\x02\xef\x05\x04\x83"
  "\x04\x03\x0a\x5b\x02\x5e\x03\x3b\x20\x03\x12\x73\x74\x72\x69\x6e"
  "\x67\x2d\x63\x61\x70\x69\x74\x61\x6c\x69\x7a\x65\x05\xb1\x01\x03"
  "\xf1\x05\x06\x84\x06\xf0\x05\x04\x81\x85\x02\x05\x0e\x59\x02\x5f"
  "\x02\x1c\x2a\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6c\x69\x73\x74"
  "\x2d\x64\x65\x70\x74\x68\x2d\x6c\x69\x6d\x69\x74\x2a\x10\x1e\x2a"
  "\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6c\x69\x73\x74\x2d\x62\x72"
  "\x65\x61\x64\x74\x68\x2d\x6c\x69\x6d\x69\x74\x2a\x1f\x2a\x75\x6e"
  "\x70\x61\x72\x73\x65\x72\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x2d\x6c\x69\x6d\x69\x74\x2a\xb9\x01\x04\x1d\x64"
  "\x65\x62\x75\x67\x67\x65\x72\x3a\x73\x74\x72\x69\x6e\x67\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x2d\x6c\x69\x6d\x69\x74\xba\x01\x1c\x64\x65"
  "\x62\x75\x67\x67\x65\x72\x3a\x6c\x69\x73\x74\x2d\x62\x72\x65\x61"
  "\x64\x74\x68\x2d\x6c\x69\x6d\x69\x74\xbb\x01\x1a\x64\x65\x62\x75"
  "\x67\x67\x65\x72\x3a\x6c\x69\x73\x74\x2d\x64\x65\x70\x74\x68\x2d"
  "\x6c\x69\x6d\x69\x74\xbc\x01\x10\xb9\x01\x07\x05\x68\x06\x67\x03"
  "\x80\x06\x20\x81\x83\x02\xff\x05\x1e\x81\x85\x02\xfe\x05\x1c\x81"
  "\x83\x02\xfd\x05\x1a\x81\x83\x02\xfc\x05\x18\x81\x85\x02\xfb\x05"
  "\x16\x81\x83\x02\xfa\x05\x14\x81\x83\x02\xf9\x05\x12\x81\x85\x02"
  "\xf8\x05\x10\x81\x83\x02\xf7\x05\x0e\x81\x83\x02\xf6\x05\x0c\x81"
  "\x83\x02\xf5\x05\x0a\x81\x8b\x02\xf4\x05\x08\x81\x89\x02\xf3\x05"
  "\x06\x81\x87\x02\xf2\x05\x04\x85\x08\x1f\x34\xb9\x01\x02\x60\x06"
  "\xaa\x01\x02\x81\x06\x04\x85\x08\x03\x0a\x68\x02\x61\x03\x20\x28"
  "\x0b\x20\x28\x6d\x61\x78\x69\x6d\x75\x6d\x20\x0b\x20\x28\x6d\x69"
  "\x6e\x69\x6d\x75\x6d\x20\x0a\x20\x74\x68\x72\x6f\x75\x67\x68\x20"
  "\x0c\x20\x74\x6f\x6f\x20\x73\x6d\x61\x6c\x6c\x2e\x0c\x20\x74\x6f"
  "\x6f\x20\x6c\x61\x72\x67\x65\x2e\x18\x20\x6d\x75\x73\x74\x20\x62"
  "\x65\x20\x65\x78\x61\x63\x74\x20\x69\x6e\x74\x65\x67\x65\x72\x2e"
  "\x0f\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1b\x0c"
  "\x20\x69\x6e\x63\x6c\x75\x73\x69\x76\x65\x29\x02\x29\x01\x04\xb1"
  "\x01\x05\xb1\x01\x07\xb1\x01\x03\x87\x01\x05\x63\x04\xb2\x01\x07"
  "\x93\x06\x26\x81\x97\x02\x92\x06\x24\x81\x8b\x02\x91\x06\x22\x81"
  "\x8b\x02\x90\x06\x20\x81\x8b\x02\x8f\x06\x1e\x81\x93\x02\x8e\x06"
  "\x1c\x81\x93\x02\x8d\x06\x1a\x81\x93\x02\x8c\x06\x18\x81\x8d\x02"
  "\x8b\x06\x16\x81\x8b\x02\x8a\x06\x14\x81\x8b\x02\x89\x06\x12\x81"
  "\x83\x02\x88\x06\x10\x81\x89\x02\x87\x06\x0e\x81\x8b\x02\x86\x06"
  "\x0c\x81\x95\x02\x85\x06\x0a\x81\x95\x02\x84\x06\x08\x81\x89\x02"
  "\x83\x06\x06\x81\x8f\x02\x82\x06\x04\x86\x0a\x25\x44\xb2\x01\x61"
  "\xb1\x01\xb1\x01\xb2\x01\x04\xaa\x01\x93\x01\x68\x04\x73\x76\xb9"
  "\x01\x04\x8d\x01\x59\x06\x9e\x01\x5b\x04\x6b\x65\x04\xa4\x01\x88"
  "\x01\x06\x75\x66\x04\x1b\x77\x72\x61\x70\x2d\x61\x72\x6f\x75\x6e"
  "\x64\x2d\x69\x6e\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x73\x3f"
  "\x83\x01\x04\x16\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\xb8\x01\x04\x15\x72\x65\x64"
  "\x75\x63\x74\x69\x6f\x6e\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\xb7\x01\x04\x39\xb6\x01\x04\x94\x01\x04\x9b\x01\x0c\x04\x99"
  "\x01\x16\x04\x89\x01\x3b\x04\x1e\x84\x01\x04\x14\x64\x73\x74\x61"
  "\x74\x65\x2f\x61\x75\x74\x6f\x2d\x74\x6f\x67\x67\x6c\x65\x3f\x19"
  "\x04\x98\x01\x17\x04\x8a\x01\x18\x04\x97\x01\x0a\x04\x48\x0d\x04"
  "\x3f\xb5\x01\x04\x40\xa5\x01\x04\x57\x58\x55\xb4\x01\x04\x3d\x09"
  "\xb3\x01\x04\xad\x01\xab\x01\x04\x4b\xaf\x01\x04\x3e\xae\x01\x04"
  "\x4a\xac\x01\x04\x4c\xa9\x01\x04\x41\xa8\x01\x04\x42\xa7\x01\x04"
  "\x50\xa6\x01\x04\x9d\x01\xa3\x01\x04\x44\xa2\x01\x04\x46\xa1\x01"
  "\x04\x54\xa0\x01\x04\x52\x9f\x01\x04\x4f\x9c\x01\x04\x53\x9a\x01"
  "\x04\x91\x01\x95\x01\x04\x4e\x92\x01\x04\x12\x90\x01\x04\x51\x8f"
  "\x01\x04\x20\x13\x04\x8b\x01\x8e\x01\x04\x14\x8c\x01\x04\x85\x01"
  "\x69\x04\x4d\x86\x01\x08\x78\x82\x01\x04\x7d\x81\x01\x04\x7c\x80"
  "\x01\x04\x7b\x7f\x04\x61\x7e\x04\x70\x7a\x04\x6f\x79\x04\x74\x04"
  "\x23\x23\x23\x6e\x77\x04\x6d\x72\x04\x0e\x71\x04\x47\x6c\x04\x49"
  "\x6a\x04\x45\x64\x04\x5d\x62\x04\x11\x5f\x04\x1a\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74"
  "\x2d\x74\x79\x70\x65\x10\x0f\x64\x65\x66\x69\x6e\x65\x2d\x63\x6f"
  "\x6d\x6d\x61\x6e\x64\x43\x5e\x04\x5c\x04\x14\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x56\x04"
  "\x38\x3c\x04\x60\x3a\x04\x36\x08\x64\x73\x74\x61\x74\x65\x3f\x37"
  "\x04\x16\x73\x65\x74\x2d\x64\x73\x74\x61\x74\x65\x2f\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x21\x35\x04\x1d\x73\x65\x74\x2d\x64\x73"
  "\x74\x61\x74\x65\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x2d\x6c\x69\x73\x74\x21\x34\x04\x1a\x73\x65\x74\x2d\x64\x73\x74"
  "\x61\x74\x65\x2f\x73\x75\x62\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x21\x33\x04\x17\x73\x65\x74\x2d\x64\x73\x74\x61\x74\x65\x2f"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x21\x32\x04\x1a\x73\x65"
  "\x74\x2d\x64\x73\x74\x61\x74\x65\x2f\x68\x69\x73\x74\x6f\x72\x79"
  "\x2d\x73\x74\x61\x74\x65\x21\x31\x04\x1d\x73\x65\x74\x2d\x64\x73"
  "\x74\x61\x74\x65\x2f\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x2d\x6e"
  "\x75\x6d\x62\x65\x72\x21\x30\x04\x21\x73\x65\x74\x2d\x64\x73\x74"
  "\x61\x74\x65\x2f\x6e\x75\x6d\x62\x65\x72\x2d\x6f\x66\x2d\x72\x65"
  "\x64\x75\x63\x74\x69\x6f\x6e\x73\x21\x2f\x04\x1e\x73\x65\x74\x2d"
  "\x64\x73\x74\x61\x74\x65\x2f\x73\x75\x62\x70\x72\x6f\x62\x6c\x65"
  "\x6d\x2d\x6e\x75\x6d\x62\x65\x72\x21\x2e\x04\x21\x73\x65\x74\x2d"
  "\x64\x73\x74\x61\x74\x65\x2f\x70\x72\x65\x76\x69\x6f\x75\x73\x2d"
  "\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x73\x21\x2d\x04\x17\x73"
  "\x65\x74\x2d\x64\x73\x74\x61\x74\x65\x2f\x73\x75\x62\x70\x72\x6f"
  "\x62\x6c\x65\x6d\x21\x2c\x04\x11\x64\x73\x74\x61\x74\x65\x2f\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2b\x04\x18\x64\x73\x74\x61\x74"
  "\x65\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x6c\x69"
  "\x73\x74\x2a\x04\x15\x64\x73\x74\x61\x74\x65\x2f\x73\x75\x62\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x29\x04\x12\x64\x73\x74\x61"
  "\x74\x65\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x28\x04\x15"
  "\x64\x73\x74\x61\x74\x65\x2f\x68\x69\x73\x74\x6f\x72\x79\x2d\x73"
  "\x74\x61\x74\x65\x27\x04\x18\x64\x73\x74\x61\x74\x65\x2f\x72\x65"
  "\x64\x75\x63\x74\x69\x6f\x6e\x2d\x6e\x75\x6d\x62\x65\x72\x26\x04"
  "\x1c\x64\x73\x74\x61\x74\x65\x2f\x6e\x75\x6d\x62\x65\x72\x2d\x6f"
  "\x66\x2d\x72\x65\x64\x75\x63\x74\x69\x6f\x6e\x73\x25\x04\x19\x64"
  "\x73\x74\x61\x74\x65\x2f\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d"
  "\x2d\x6e\x75\x6d\x62\x65\x72\x24\x04\x1c\x64\x73\x74\x61\x74\x65"
  "\x2f\x70\x72\x65\x76\x69\x6f\x75\x73\x2d\x73\x75\x62\x70\x72\x6f"
  "\x62\x6c\x65\x6d\x73\x23\x04\x1d\x12\x64\x73\x74\x61\x74\x65\x2f"
  "\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x22\x04\x0b\x72\x74\x64"
  "\x3a\x64\x73\x74\x61\x74\x65\xb9\x01\x07\x64\x73\x74\x61\x74\x65"
  "\x0b\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x15\x70\x72\x65\x76"
  "\x69\x6f\x75\x73\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x73"
  "\x12\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2d\x6e\x75\x6d\x62"
  "\x65\x72\x15\x6e\x75\x6d\x62\x65\x72\x2d\x6f\x66\x2d\x72\x65\x64"
  "\x75\x63\x74\x69\x6f\x6e\x73\x11\x72\x65\x64\x75\x63\x74\x69\x6f"
  "\x6e\x2d\x6e\x75\x6d\x62\x65\x72\x0e\x68\x69\x73\x74\x6f\x72\x79"
  "\x2d\x73\x74\x61\x74\x65\x5a\x0e\x73\x75\x62\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x11\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x2d\x6c\x69\x73\x74\x0a\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x0a\x0b\x21\x04\x1f\x04\x0c\x73\x74\x61\x63\x6b\x2d\x74\x72\x61"
  "\x63\x65\x15\x04\x0f\x04\x1a\x04\xba\x01\x47\xbb\x01\xbc\x01\x1b"
  "\x33\x1c\xb0\x01\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x96\x01\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65"
  "\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72"
  "\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d"
  "\x74\x61\x67\x04\x1f\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72"
  "\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e"
  "\x64\x65\x72\x04\xb9\x01\x02\x7b\xf8\x01\x80\x80\x04\x7a\xf6\x01"
  "\x81\x81\x02\x79\xf4\x01\x81\x81\x02\x78\xf2\x01\x81\x83\x02\x77"
  "\xf0\x01\x81\x83\x02\x76\xee\x01\x81\x83\x02\x75\xec\x01\x81\x83"
  "\x02\x74\xea\x01\x81\x83\x02\x73\xe8\x01\x81\x83\x02\x72\xe6\x01"
  "\x81\x83\x02\x71\xe4\x01\x81\x83\x02\x70\xe2\x01\x81\x83\x02\x6f"
  "\xe0\x01\x81\x83\x02\x6e\xde\x01\x81\x83\x02\x6d\xdc\x01\x81\x83"
  "\x02\x6c\xda\x01\x81\x83\x02\x6b\xd8\x01\x81\x83\x02\x6a\xd6\x01"
  "\x81\x83\x02\x69\xd4\x01\x81\x83\x02\x68\xd2\x01\x81\x83\x02\x67"
  "\xd0\x01\x81\x83\x02\x66\xce\x01\x81\x83\x02\x65\xcc\x01\x81\x83"
  "\x02\x64\xca\x01\x81\x83\x02\x63\xc8\x01\x81\x83\x02\x62\xc6\x01"
  "\x81\x83\x02\x61\xc4\x01\x81\x83\x02\x60\xc2\x01\x81\x83\x02\x5f"
  "\xc0\x01\x81\x83\x02\x5e\xbe\x01\x81\x83\x02\x5d\xbc\x01\x81\x83"
  "\x02\x5c\xba\x01\x81\x83\x02\x5b\xb8\x01\x81\x83\x02\x5a\xb6\x01"
  "\x81\x83\x02\x59\xb4\x01\x81\x83\x02\x58\xb2\x01\x81\x83\x02\x57"
  "\xb0\x01\x81\x83\x02\x56\xae\x01\x81\x83\x02\x55\xac\x01\x81\x83"
  "\x02\x54\xaa\x01\x81\x83\x02\x53\xa8\x01\x81\x83\x02\x52\xa6\x01"
  "\x81\x83\x02\x51\xa4\x01\x81\x83\x02\x50\xa2\x01\x81\x83\x02\x4f"
  "\xa0\x01\x81\x83\x02\x4e\x9e\x01\x81\x83\x02\x4d\x9c\x01\x81\x83"
  "\x02\x4c\x9a\x01\x81\x83\x02\x4b\x98\x01\x81\x83\x02\x4a\x96\x01"
  "\x81\x83\x02\x49\x94\x01\x81\x83\x02\x48\x92\x01\x81\x83\x02\x47"
  "\x90\x01\x81\x83\x02\x46\x8e\x01\x81\x83\x02\x45\x8c\x01\x81\x83"
  "\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81\x83\x02\x42\x86\x01"
  "\x81\x83\x02\x41\x84\x01\x81\x83\x02\x40\x82\x01\x81\x83\x02\x3f"
  "\x80\x01\x81\x83\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81\x83\x02\x3c"
  "\x7a\x81\x83\x02\x3b\x78\x81\x83\x02\x3a\x76\x81\x83\x02\x39\x74"
  "\x81\x83\x02\x38\x72\x81\x83\x02\x37\x70\x81\x83\x02\x36\x6e\x81"
  "\x83\x02\x35\x6c\x81\x83\x02\x34\x6a\x81\x83\x02\x33\x68\x81\x83"
  "\x02\x32\x66\x81\x87\x02\x31\x64\x81\x85\x02\x30\x62\x81\x83\x02"
  "\x2f\x60\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x83\x02\x2c"
  "\x5a\x81\x83\x02\x2b\x58\x81\x83\x02\x2a\x56\x81\x85\x02\x29\x54"
  "\x81\x83\x02\x28\x52\x81\x87\x02\x27\x50\x81\x83\x02\x26\x4e\x81"
  "\x83\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x83"
  "\x02\x22\x46\x81\x83\x02\x21\x44\x81\x83\x02\x20\x42\x81\x83\x02"
  "\x1f\x40\x81\x83\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x83\x02\x1c"
  "\x3a\x81\x83\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x83\x02\x19\x34"
  "\x81\x83\x02\x18\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e\x81"
  "\x83\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x83"
  "\x02\x12\x26\x81\x85\x02\x11\x24\x81\x83\x02\x10\x22\x81\x85\x02"
  "\x0f\x20\x81\x87\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x83\x02\x0c"
  "\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x83\x02\x09\x14"
  "\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81\x83\x02\x06\x0e\x81"
  "\x83\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x83"
  "\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\xf7\x01\xe2\x03";

SCHEME_OBJECT *
debug_so_data_853565549e4f3910 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_debug_so_data_853565549e4f3910 [0]))), (sizeof (prog_debug_so_data_853565549e4f3910)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_130]));
}

DECLARE_COMPILED_DATA_NS ("debug.so", debug_so_data_853565549e4f3910)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("debug.so", "b3cd0adff518ceee")
