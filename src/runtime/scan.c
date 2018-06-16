/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:52-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 13
#define DEBUGGING_LABEL_1_2 12
#define OBJECT_1_0 11
#define EXECUTE_CACHE_1_6 7
#define FREE_REFERENCE_1_0 10
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_1_4);
      goto cons_sequence_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cons_sequence_5)
DEFLABEL (cons_sequence_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (Wrd12.Obj) = (Rsp [1]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_6;
  (Wrd13.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (label_6)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define ENVIRONMENT_LABEL_2_3 15
#define DEBUGGING_LABEL_2_2 14
#define OBJECT_2_0 13
#define EXECUTE_CACHE_2_6 9
#define FREE_REFERENCE_2_0 12
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_2_4);
      goto scan_defines_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scan_defines_5)
DEFLABEL (scan_defines_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_7;
  Wrd7 = Wrd11;

DEFLABEL (label_6)
  (Rsp [3]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_7])), (Wrd8.pObj));

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_9 7
#define TAG_3_10 2
#define LABEL_3_11 9
#define LABEL_3_7 11
#define LABEL_3_13 13
#define LABEL_3_14 15
#define LABEL_3_19 17
#define LABEL_3_20 19
#define LABEL_3_17 21
#define LABEL_3_22 23
#define LABEL_3_23 25
#define LABEL_3_26 27
#define LABEL_3_30 29
#define TAG_3_31 13
#define LABEL_3_28 31
#define LABEL_3_33 33
#define TAG_3_34 15
#define LABEL_3_37 35
#define TAG_3_38 16
#define LABEL_3_35 37
#define TAG_3_36 17
#define LABEL_3_39 39
#define LABEL_3_40 41
#define LABEL_3_42 43
#define LABEL_3_43 45
#define LABEL_3_45 47
#define ENVIRONMENT_LABEL_3_3 80
#define DEBUGGING_LABEL_3_2 79
#define EXECUTE_CACHE_3_46 49
#define EXECUTE_CACHE_3_44 51
#define EXECUTE_CACHE_3_41 53
#define EXECUTE_CACHE_3_32 55
#define EXECUTE_CACHE_3_29 57
#define EXECUTE_CACHE_3_27 59
#define EXECUTE_CACHE_3_25 61
#define EXECUTE_CACHE_3_24 63
#define EXECUTE_CACHE_3_21 65
#define EXECUTE_CACHE_3_18 67
#define EXECUTE_CACHE_3_16 69
#define EXECUTE_CACHE_3_15 71
#define EXECUTE_CACHE_3_12 73
#define EXECUTE_CACHE_3_8 75
#define EXECUTE_CACHE_3_6 77
#define FREE_REFERENCES_LABEL_3_0 48
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_3_4);
      goto scan_loop_23;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_9);
      goto lambda_27;

    case 3:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_17;

    case 4:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_19;

    case 6:
      current_block = (Rpc - LABEL_3_14);
      goto continuation_18;

    case 7:
      current_block = (Rpc - LABEL_3_19);
      goto continuation_16;

    case 8:
      current_block = (Rpc - LABEL_3_20);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_3_17);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_3_22);
      goto continuation_21;

    case 11:
      current_block = (Rpc - LABEL_3_23);
      goto continuation_20;

    case 12:
      current_block = (Rpc - LABEL_3_26);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_3_30);
      goto lambda_28;

    case 14:
      current_block = (Rpc - LABEL_3_28);
      goto continuation_3;

    case 15:
      current_block = (Rpc - LABEL_3_33);
      goto lambda_29;

    case 16:
      current_block = (Rpc - LABEL_3_37);
      goto lambda_31;

    case 17:
      current_block = (Rpc - LABEL_3_35);
      goto lambda_30;

    case 18:
      current_block = (Rpc - LABEL_3_39);
      goto continuation_11;

    case 19:
      current_block = (Rpc - LABEL_3_40);
      goto continuation_10;

    case 20:
      current_block = (Rpc - LABEL_3_42);
      goto continuation_7;

    case 21:
      current_block = (Rpc - LABEL_3_43);
      goto continuation_6;

    case 22:
      current_block = (Rpc - LABEL_3_45);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scan_loop_26)
DEFLABEL (scan_loop_23)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_9])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (label_32)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_3_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_3_19);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_27]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_26);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (label_33)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_30])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_32]));

DEFLABEL (label_34)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_37])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  goto label_35;

DEFLABEL (label_36)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_35])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  Rvl = (Wrd15.Obj);

DEFLABEL (label_35)
DEFLABEL (label_37)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_3_9);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_3_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_25]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_3_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_25]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_3_22);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_3_30);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_33])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_3_33);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_39]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_40]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_41]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_40);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_46]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_39);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_3_37);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_43]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_44]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_43);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_25]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_42);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_3_35);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_46]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_45);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_8 5
#define LABEL_4_5 7
#define TAG_4_6 2
#define LABEL_4_7 9
#define LABEL_4_12 11
#define LABEL_4_9 13
#define LABEL_4_15 15
#define TAG_4_16 6
#define LABEL_4_13 17
#define LABEL_4_20 19
#define TAG_4_21 8
#define LABEL_4_23 21
#define LABEL_4_18 23
#define LABEL_4_26 25
#define TAG_4_27 11
#define LABEL_4_24 27
#define LABEL_4_32 29
#define LABEL_4_30 31
#define LABEL_4_28 33
#define TAG_4_29 15
#define LABEL_4_33 35
#define TAG_4_34 16
#define LABEL_4_35 37
#define LABEL_4_37 39
#define TAG_4_38 18
#define LABEL_4_39 41
#define LABEL_4_40 43
#define LABEL_4_43 45
#define LABEL_4_41 47
#define TAG_4_42 22
#define LABEL_4_44 49
#define TAG_4_45 23
#define ENVIRONMENT_LABEL_4_3 76
#define DEBUGGING_LABEL_4_2 75
#define OBJECT_4_5 74
#define OBJECT_4_4 73
#define OBJECT_4_3 72
#define OBJECT_4_2 71
#define OBJECT_4_1 70
#define OBJECT_4_0 69
#define EXECUTE_CACHE_4_36 51
#define EXECUTE_CACHE_4_31 53
#define EXECUTE_CACHE_4_25 55
#define EXECUTE_CACHE_4_22 57
#define EXECUTE_CACHE_4_19 59
#define EXECUTE_CACHE_4_17 61
#define EXECUTE_CACHE_4_14 63
#define EXECUTE_CACHE_4_11 65
#define EXECUTE_CACHE_4_10 67
#define FREE_REFERENCES_LABEL_4_0 50
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_4_4);
      goto unscan_defines_35;

    case 1:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_41;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_4_12);
      goto unscan_loop_34;

    case 5:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_4_15);
      goto lambda_43;

    case 7:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_4_20);
      goto lambda_44;

    case 9:
      current_block = (Rpc - LABEL_4_23);
      goto label_37;

    case 10:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_4_26);
      goto lambda_45;

    case 12:
      current_block = (Rpc - LABEL_4_24);
      goto continuation_28;

    case 13:
      current_block = (Rpc - LABEL_4_32);
      goto label_38;

    case 14:
      current_block = (Rpc - LABEL_4_30);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_4_28);
      goto lambda_46;

    case 16:
      current_block = (Rpc - LABEL_4_33);
      goto lambda_47;

    case 17:
      current_block = (Rpc - LABEL_4_35);
      goto continuation_11;

    case 18:
      current_block = (Rpc - LABEL_4_37);
      goto lambda_48;

    case 19:
      current_block = (Rpc - LABEL_4_39);
      goto continuation_21;

    case 20:
      current_block = (Rpc - LABEL_4_40);
      goto continuation_19;

    case 21:
      current_block = (Rpc - LABEL_4_43);
      goto continuation_15;

    case 22:
      current_block = (Rpc - LABEL_4_41);
      goto lambda_49;

    case 23:
      current_block = (Rpc - LABEL_4_44);
      goto lambda_50;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unscan_defines_40)
DEFLABEL (unscan_defines_35)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto unscan_loop_34;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_4_0]))
    goto label_52;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_8);

DEFLABEL (label_52)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  if (! ((Wrd15.Obj) == (current_block [OBJECT_4_0])))
    goto label_51;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_4_3]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (unscan_loop_42)
DEFLABEL (unscan_loop_34)
  INTERRUPT_CHECK (26, LABEL_4_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_53;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_15])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_20])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd13.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_22]));

DEFLABEL (label_54)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_55;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_28])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_31]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_36]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4_35);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_37])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  ((Wrd11.pObj) [4]) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_39]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto unscan_loop_34;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_4_39);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_4_15);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd9.Obj);
  goto pop_return;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_4_20);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_60;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_59)
  (Wrd20.Obj) = (Rsp [1]);
  if ((Wrd20.Obj) == (Wrd5.Obj))
    goto label_56;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [3]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Rsp [2]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_26])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd32 = Wrd29;
  (Wrd33.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  ((Wrd32.pObj) [3]) = (Wrd31.Obj);
  Rvl = (Wrd28.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_25]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_4_24);
  (Rsp [2]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_58;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd6.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_57)
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_33])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd26 = Wrd23;
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  Rvl = (Wrd22.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_32]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_5]), 1);

DEFLABEL (label_38)
  (Wrd6.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 1);

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_59;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_4_26);

DEFLABEL (lambda_25)
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

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_4_28);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto pop_return;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_4_33);

DEFLABEL (lambda_29)
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

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_4_37);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto unscan_loop_34;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_4_40);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_42);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_41])));
  Rhp += 4;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd19 = Wrd8;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  ((Wrd19.pObj) [2]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd21.pObj) [3]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd21.pObj) [4]);
  ((Wrd19.pObj) [4]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [5]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_4_41);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd13.Obj) = ((Wrd9.pObj) [5]);
  if ((Wrd10.Obj) == (Wrd13.Obj))
    goto label_63;

DEFLABEL (label_62)
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_43);
  (Wrd24.Obj) = Rvl;

DEFLABEL (label_61)
  (Rsp [2]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_45);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_44])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd32 = Wrd29;
  (Wrd33.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  ((Wrd32.pObj) [3]) = (Wrd31.Obj);
  Rvl = (Wrd28.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd21.Obj) = ((Wrd9.pObj) [3]);
  (Wrd22.Obj) = (Rsp [3]);
  if (! ((Wrd21.Obj) == (Wrd22.Obj)))
    goto label_62;
  (Wrd24.Obj) = ((Wrd9.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto label_61;

DEFLABEL (lambda_50)
  CLOSURE_HEADER (LABEL_4_44);

DEFLABEL (lambda_16)
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

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_8 9
#define ENVIRONMENT_LABEL_5_3 20
#define DEBUGGING_LABEL_5_2 19
#define OBJECT_5_1 18
#define OBJECT_5_0 17
#define EXECUTE_CACHE_5_10 11
#define EXECUTE_CACHE_5_9 13
#define EXECUTE_CACHE_5_6 15
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_5_4);
      goto make_open_block_5;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_open_block_8)
DEFLABEL (make_open_block_5)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_10;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_5_1]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (label_10)
  (Wrd12.Obj) = (Rsp [1]);
  if (! ((Wrd12.Obj) == (Wrd6.Obj)))
    goto label_9;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_8 9
#define LABEL_6_10 11
#define ENVIRONMENT_LABEL_6_3 22
#define DEBUGGING_LABEL_6_2 21
#define EXECUTE_CACHE_6_12 13
#define EXECUTE_CACHE_6_11 15
#define EXECUTE_CACHE_6_9 17
#define EXECUTE_CACHE_6_6 19
#define FREE_REFERENCES_LABEL_6_0 12
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_6_4);
      goto open_blockP_4;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_blockP_7)
DEFLABEL (open_blockP_4)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 13
#define DEBUGGING_LABEL_7_2 12
#define OBJECT_7_0 11
#define EXECUTE_CACHE_7_7 7
#define EXECUTE_CACHE_7_6 9
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto open_block_actions_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_block_actions_4)
DEFLABEL (open_block_actions_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 13
#define DEBUGGING_LABEL_8_2 12
#define OBJECT_8_0 11
#define EXECUTE_CACHE_8_7 7
#define EXECUTE_CACHE_8_6 9
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto open_block_declarations_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_block_declarations_4)
DEFLABEL (open_block_declarations_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 13
#define DEBUGGING_LABEL_9_2 12
#define OBJECT_9_0 11
#define EXECUTE_CACHE_9_7 7
#define EXECUTE_CACHE_9_6 9
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto open_block_definitions_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_block_definitions_4)
DEFLABEL (open_block_definitions_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 13
#define DEBUGGING_LABEL_10_2 12
#define OBJECT_10_0 11
#define EXECUTE_CACHE_10_7 7
#define EXECUTE_CACHE_10_6 9
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto open_block_names_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_block_names_4)
DEFLABEL (open_block_names_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_9 9
#define LABEL_11_11 11
#define LABEL_11_13 13
#define ENVIRONMENT_LABEL_11_3 27
#define DEBUGGING_LABEL_11_2 26
#define OBJECT_11_0 25
#define EXECUTE_CACHE_11_14 15
#define EXECUTE_CACHE_11_12 17
#define EXECUTE_CACHE_11_10 19
#define EXECUTE_CACHE_11_8 21
#define EXECUTE_CACHE_11_6 23
#define FREE_REFERENCES_LABEL_11_0 14
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_11_4);
      goto open_block_components_6;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_block_components_9)
DEFLABEL (open_block_components_6)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_13);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_9 9
#define ENVIRONMENT_LABEL_12_3 21
#define DEBUGGING_LABEL_12_2 20
#define OBJECT_12_0 19
#define EXECUTE_CACHE_12_11 11
#define EXECUTE_CACHE_12_10 13
#define EXECUTE_CACHE_12_8 15
#define EXECUTE_CACHE_12_7 17
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_12_4);
      goto make_open_block_definitions_5;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_open_block_definitions_8)
DEFLABEL (make_open_block_definitions_5)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [0]) = Rvl;
  (Wrd7.Obj) = (current_block [OBJECT_12_0]);
  if (Rvl == (Wrd7.Obj))
    goto label_10;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (label_10)
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_12_6);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 13
#define DEBUGGING_LABEL_13_2 12
#define OBJECT_13_0 11
#define EXECUTE_CACHE_13_7 7
#define EXECUTE_CACHE_13_6 9
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto guarantee_open_block_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_open_block_4)
DEFLABEL (guarantee_open_block_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_13_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 11
#define DEBUGGING_LABEL_14_2 10
#define OBJECT_14_2 9
#define OBJECT_14_1 8
#define OBJECT_14_0 7
#define EXECUTE_CACHE_14_5 5
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto error_not_open_block_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_open_block_5)
DEFLABEL (error_not_open_block_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_14_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_14_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 8
#define DEBUGGING_LABEL_15_2 7
#define EXECUTE_CACHE_15_5 5
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto Z__open_block_descriptor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__open_block_descriptor_3)
DEFLABEL (Z__open_block_descriptor_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 10
#define DEBUGGING_LABEL_16_2 9
#define EXECUTE_CACHE_16_6 7
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__open_block_actions_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__open_block_actions_4)
DEFLABEL (Z__open_block_actions_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 12
#define DEBUGGING_LABEL_17_2 11
#define EXECUTE_CACHE_17_7 7
#define EXECUTE_CACHE_17_6 9
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto Z__open_block_declarations_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__open_block_declarations_4)
DEFLABEL (Z__open_block_declarations_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 12
#define DEBUGGING_LABEL_18_2 11
#define EXECUTE_CACHE_18_7 7
#define EXECUTE_CACHE_18_6 9
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto Z__open_block_definitions_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__open_block_definitions_4)
DEFLABEL (Z__open_block_definitions_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 12
#define DEBUGGING_LABEL_19_2 11
#define EXECUTE_CACHE_19_7 7
#define EXECUTE_CACHE_19_6 9
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto Z__open_block_names_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__open_block_names_4)
DEFLABEL (Z__open_block_names_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 6
#define DEBUGGING_LABEL_20_2 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_20_4);
      goto make_open_block_descriptor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_open_block_descriptor_3)
DEFLABEL (make_open_block_descriptor_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (current_block [OBJECT_20_0]);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define ENVIRONMENT_LABEL_21_3 16
#define DEBUGGING_LABEL_21_2 15
#define OBJECT_21_4 14
#define OBJECT_21_3 13
#define OBJECT_21_2 12
#define OBJECT_21_1 11
#define OBJECT_21_0 10
#define FREE_REFERENCES_LABEL_21_0 10
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd46;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_21_4);
      goto open_block_descriptorP_4;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_block_descriptorP_10)
DEFLABEL (open_block_descriptorP_4)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_18)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_17;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd46.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_21_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_21_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_21_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 7
#define DEBUGGING_LABEL_22_2 6
#define OBJECT_22_1 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto Z__open_block_descriptor_names_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__open_block_descriptor_names_3)
DEFLABEL (Z__open_block_descriptor_names_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

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

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 7
#define DEBUGGING_LABEL_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
scan_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto Z__open_block_descriptor_declarations_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__open_block_descriptor_declarations_3)
DEFLABEL (Z__open_block_descriptor_declarations_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

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
scan_so_4845720a8a6921d4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1,
	1,
	1,
	1,
	1,
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
    if (counter > 23)
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

static const struct liarc_code_S arr_decl_scan_so_4845720a8a6921d4 [23] =
  {
    { "scan_so_code_1", 2, scan_so_code_1 },
    { "scan_so_code_2", 3, scan_so_code_2 },
    { "scan_so_code_3", 23, scan_so_code_3 },
    { "scan_so_code_4", 24, scan_so_code_4 },
    { "scan_so_code_5", 4, scan_so_code_5 },
    { "scan_so_code_6", 5, scan_so_code_6 },
    { "scan_so_code_7", 2, scan_so_code_7 },
    { "scan_so_code_8", 2, scan_so_code_8 },
    { "scan_so_code_9", 2, scan_so_code_9 },
    { "scan_so_code_10", 2, scan_so_code_10 },
    { "scan_so_code_11", 6, scan_so_code_11 },
    { "scan_so_code_12", 4, scan_so_code_12 },
    { "scan_so_code_13", 2, scan_so_code_13 },
    { "scan_so_code_14", 1, scan_so_code_14 },
    { "scan_so_code_15", 1, scan_so_code_15 },
    { "scan_so_code_16", 2, scan_so_code_16 },
    { "scan_so_code_17", 2, scan_so_code_17 },
    { "scan_so_code_18", 2, scan_so_code_18 },
    { "scan_so_code_19", 2, scan_so_code_19 },
    { "scan_so_code_20", 1, scan_so_code_20 },
    { "scan_so_code_21", 4, scan_so_code_21 },
    { "scan_so_code_22", 1, scan_so_code_22 },
    { "scan_so_code_23", 1, scan_so_code_23 }
  };

int
decl_scan_so_4845720a8a6921d4 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_scan_so_4845720a8a6921d4);
  return (0);
}

DECLARE_COMPILED_CODE ("scan.so", 3, decl_scan_so_4845720a8a6921d4, scan_so_4845720a8a6921d4)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_scan_so_data_4845720a8a6921d4 [2551] =
  "\x56\x30\xab\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x02\x0d\xb9\x24"
  "\x28\x0d\xba\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82\x88"
  "\x08\xb1\x24\x28\x0d\xbc\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbd\x1d\xb0\x83\x88\x28\x0d\xbe\x28\x0d\xbf\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\xb4\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x84\x88\xc1\xc1\x02\x0c\x0d\x1c\x08\x28\x0d\x28\x0d\x28\x0d\x28"
  "\xb2\x28\xb7\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x85\x88\x02\x08\x28\x0d\x1c\x28\x0d\x1c\x28\xb2\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x86\x88"
  "\x28\xb7\x28\x1b\x28\x1b\x28\x0d\xbf\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\xb6\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x0d\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\xc2\x1c\x80\xc1\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c"
  "\x17\xb8\x88\xb0\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb2\x2a\x1b\x2a\x1b\x2a\xb5\x2a"
  "\xb3\x2a\xb1\x08\x88\x02\x1b\x17\x1b\x1b\xb7\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb6\x0d\x1b\xb4\x0d\x1b\xb1"
  "\x0d\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x53"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73\x63\x61\x6e\x2e\x69"
  "\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x1a\x0e\x6e\x75\x6c\x6c\x2d\x73"
  "\x65\x71\x75\x65\x6e\x63\x65\x02\x05\x11\x26\x74\x79\x70\x65\x64"
  "\x2d\x70\x61\x69\x72\x2d\x63\x6f\x6e\x73\x02\x05\x06\x81\x85\x02"
  "\x04\x04\x84\x06\x05\x0e\x02\x02\x04\x0a\x73\x63\x61\x6e\x2d\x6c"
  "\x6f\x6f\x70\x02\x08\x08\x81\x89\x02\x07\x06\x81\x87\x02\x06\x04"
  "\x84\x06\x07\x10\x02\x03\x0c\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63"
  "\x6b\x3f\x03\x0a\x73\x65\x71\x75\x65\x6e\x63\x65\x3f\x03\x14\x25"
  "\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d\x61\x63\x74\x69\x6f"
  "\x6e\x73\x09\x03\x12\x25\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b"
  "\x2d\x6e\x61\x6d\x65\x73\x0a\x04\x03\x0c\x64\x65\x66\x69\x6e\x69"
  "\x74\x69\x6f\x6e\x3f\x03\x19\x73\x65\x71\x75\x65\x6e\x63\x65\x2d"
  "\x69\x6d\x6d\x65\x64\x69\x61\x74\x65\x2d\x66\x69\x72\x73\x74\x0b"
  "\x03\x19\x25\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d\x64\x65"
  "\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x0c\x04\x07\x61\x70\x70"
  "\x65\x6e\x64\x03\x1a\x73\x65\x71\x75\x65\x6e\x63\x65\x2d\x69\x6d"
  "\x6d\x65\x64\x69\x61\x74\x65\x2d\x73\x65\x63\x6f\x6e\x64\x0d\x03"
  "\x13\x62\x6c\x6f\x63\x6b\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69"
  "\x6f\x6e\x3f\x04\x16\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2d"
  "\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x04\x10\x6d\x61\x6b\x65"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x03\x17\x62\x6c\x6f"
  "\x63\x6b\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d\x74"
  "\x65\x78\x74\x04\x0e\x63\x6f\x6e\x73\x2d\x73\x65\x71\x75\x65\x6e"
  "\x63\x65\x0e\x10\x1f\x30\x81\x89\x02\x1e\x2e\x81\x8d\x02\x1d\x2c"
  "\x81\x89\x02\x1c\x2a\x81\x8d\x02\x1b\x28\x81\x89\x02\x1a\x26\x81"
  "\x89\x02\x19\x24\x81\x89\x02\x18\x22\x81\x89\x02\x17\x20\x81\x85"
  "\x02\x16\x1e\x81\x87\x02\x15\x1c\x81\x85\x02\x14\x1a\x81\x8d\x02"
  "\x13\x18\x81\x89\x02\x12\x16\x81\x85\x02\x11\x14\x81\x89\x02\x10"
  "\x12\x81\x85\x02\x0f\x10\x81\x8d\x02\x0e\x0e\x81\x89\x02\x0d\x0c"
  "\x81\x85\x02\x0c\x0a\x81\x85\x02\x0b\x08\x81\x89\x02\x0a\x06\x81"
  "\x85\x02\x09\x04\x84\x06\x2f\x51\x0f\x02\x04\x63\x64\x72\x04\x63"
  "\x61\x72\x1a\x27\x45\x78\x74\x72\x61\x6e\x65\x6f\x75\x73\x20\x61"
  "\x75\x78\x69\x6c\x69\x61\x72\x69\x65\x73\x20\x2d\x2d\x20\x67\x65"
  "\x74\x20\x61\x20\x77\x69\x7a\x61\x72\x64\x0f\x75\x6e\x73\x63\x61"
  "\x6e\x2d\x64\x65\x66\x69\x6e\x65\x73\x10\x03\x17\x6d\x61\x6b\x65"
  "\x2d\x62\x6c\x6f\x63\x6b\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69"
  "\x6f\x6e\x05\x06\x65\x72\x72\x6f\x72\x03\x0c\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x3f\x05\x03\x04\x16\x61\x73\x73\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x04"
  "\x10\x6d\x61\x6b\x65\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e"
  "\x11\x03\x0d\x03\x0b\x0a\x37\x32\x81\x85\x02\x36\x30\x81\x87\x02"
  "\x35\x2e\x81\x87\x02\x34\x2c\x81\x87\x02\x33\x2a\xfd\xff\x03\x32"
  "\x28\x81\x87\x02\x31\x26\x81\x87\x02\x30\x24\x81\x85\x02\x2f\x22"
  "\x81\x85\x02\x2e\x20\x81\x85\x02\x2d\x1e\x81\x87\x02\x2c\x1c\x81"
  "\x87\x02\x2b\x1a\x81\x85\x02\x2a\x18\x81\x85\x02\x29\x16\x81\x87"
  "\x02\x28\x14\x81\x87\x02\x27\x12\x81\x85\x02\x26\x10\x81\x85\x02"
  "\x25\x0e\x81\x87\x02\x24\x0c\x81\x85\x02\x23\x0a\x81\x89\x02\x22"
  "\x08\x81\x87\x02\x21\x06\x81\x87\x02\x20\x04\x85\x08\x31\x4d\x12"
  "\x02\x1a\x04\x1b\x6d\x61\x6b\x65\x2d\x6f\x70\x65\x6e\x2d\x62\x6c"
  "\x6f\x63\x6b\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x13\x03"
  "\x1c\x6d\x61\x6b\x65\x2d\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b"
  "\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x73\x14\x05\x04\x3b"
  "\x0a\x81\x8b\x02\x3a\x08\x81\x87\x02\x39\x06\x81\x87\x02\x38\x04"
  "\x85\x08\x09\x15\x02\x03\x03\x0b\x03\x0d\x03\x17\x6f\x70\x65\x6e"
  "\x2d\x62\x6c\x6f\x63\x6b\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f"
  "\x72\x3f\x05\x40\x0c\x81\x83\x02\x3f\x0a\x81\x85\x02\x3e\x08\x81"
  "\x83\x02\x3d\x06\x81\x83\x02\x3c\x04\x83\x04\x0b\x17\x15\x02\x08"
  "\x13\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d\x61\x63\x74\x69"
  "\x6f\x6e\x73\x16\x04\x15\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d"
  "\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x17\x03\x09\x03\x42\x06"
  "\x81\x83\x02\x41\x04\x83\x04\x05\x0e\x18\x02\x09\x18\x6f\x70\x65"
  "\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d\x64\x65\x63\x6c\x61\x72\x61\x74"
  "\x69\x6f\x6e\x73\x19\x04\x17\x03\x0c\x03\x44\x06\x81\x83\x02\x43"
  "\x04\x83\x04\x05\x0e\x1a\x02\x0a\x17\x6f\x70\x65\x6e\x2d\x62\x6c"
  "\x6f\x63\x6b\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x73\x1b"
  "\x04\x17\x03\x18\x25\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d"
  "\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x73\x1c\x03\x46\x06\x81"
  "\x83\x02\x45\x04\x83\x04\x05\x0e\x1d\x02\x0b\x11\x6f\x70\x65\x6e"
  "\x2d\x62\x6c\x6f\x63\x6b\x2d\x6e\x61\x6d\x65\x73\x1e\x04\x17\x03"
  "\x0a\x03\x48\x06\x81\x83\x02\x47\x04\x83\x04\x05\x0e\x1f\x02\x0c"
  "\x16\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d\x63\x6f\x6d\x70"
  "\x6f\x6e\x65\x6e\x74\x73\x20\x04\x17\x03\x0b\x03\x09\x03\x24\x25"
  "\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d\x64\x65\x73\x63\x72"
  "\x69\x70\x74\x6f\x72\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f"
  "\x6e\x73\x21\x03\x1d\x25\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b"
  "\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2d\x6e\x61\x6d\x65"
  "\x73\x22\x06\x4e\x0e\x81\x89\x02\x4d\x0c\x81\x89\x02\x4c\x0a\x81"
  "\x89\x02\x4b\x08\x81\x85\x02\x4a\x06\x81\x85\x02\x49\x04\x84\x06"
  "\x0d\x1c\x23\x02\x0d\x04\x04\x6d\x61\x70\x03\x0e\x6d\x61\x6b\x65"
  "\x2d\x73\x65\x71\x75\x65\x6e\x63\x65\x02\x1f\x6d\x61\x6b\x65\x2d"
  "\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x04\x11\x05\x52\x0a\x81\x85"
  "\x02\x51\x08\x83\x04\x50\x06\x81\x83\x02\x4f\x04\x83\x04\x09\x16"
  "\x11\x02\x0e\x02\x03\x04\x15\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74"
  "\x2d\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x24\x03\x54\x06\x81"
  "\x85\x02\x53\x04\x84\x04\x05\x0e\x25\x02\x0f\x08\x11\x53\x43\x6f"
  "\x64\x65\x20\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x05\x1a\x65"
  "\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d"
  "\x61\x72\x67\x75\x6d\x65\x6e\x74\x02\x55\x04\x84\x04\x03\x0c\x26"
  "\x02\x10\x03\x0b\x02\x56\x04\x83\x04\x03\x27\x02\x11\x03\x0d\x02"
  "\x58\x06\x81\x83\x02\x57\x04\x83\x04\x05\x0b\x28\x02\x12\x03\x17"
  "\x25\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d\x64\x65\x73\x63"
  "\x72\x69\x70\x74\x6f\x72\x29\x03\x21\x03\x5a\x06\x81\x83\x02\x59"
  "\x04\x83\x04\x05\x0d\x2a\x02\x13\x03\x0d\x03\x0b\x03\x5c\x06\x81"
  "\x83\x02\x5b\x04\x83\x04\x05\x0d\x0d\x02\x14\x03\x29\x03\x22\x03"
  "\x5e\x06\x81\x83\x02\x5d\x04\x83\x04\x05\x0d\x0b\x02\x15\x0e\x23"
  "\x5b\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x5d\x2b\x5f\x04\x84"
  "\x06\x03\x2c\x02\x16\x2b\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65"
  "\x66\x2d\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x63\x0a\x81\x83\x02\x62\x08\x81\x83\x02\x61\x06\x81\x83\x02\x60"
  "\x04\x83\x04\x09\x11\x2e\x02\x17\x2d\x64\x04\x83\x04\x03\x2f\x02"
  "\x18\x2d\x65\x04\x83\x04\x03\x2d\x18\x2d\x04\x2f\x04\x2e\x04\x2c"
  "\x04\x0b\x04\x0d\x04\x2a\x04\x28\x04\x27\x04\x26\x04\x25\x04\x11"
  "\x04\x23\x04\x1f\x04\x1d\x04\x1a\x04\x18\x04\x15\x04\x04\x12\x04"
  "\x0f\x04\x04\x04\x1a\x2b\x1b\x21\x22\x13\x0a\x1c\x0c\x09\x29\x24"
  "\x17\x14\x20\x1e\x1b\x19\x16\x10\x6d\x61\x6b\x65\x2d\x6f\x70\x65"
  "\x6e\x2d\x62\x6c\x6f\x63\x6b\x10\x0d\x73\x63\x61\x6e\x2d\x64\x65"
  "\x66\x69\x6e\x65\x73\x0e\x0e\x73\x65\x71\x75\x65\x6e\x63\x65\x2d"
  "\x74\x79\x70\x65\x0f\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d"
  "\x74\x61\x67\x1b\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02"
  "\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
scan_so_data_4845720a8a6921d4 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_scan_so_data_4845720a8a6921d4 [0]))), (sizeof (prog_scan_so_data_4845720a8a6921d4)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("scan.so", scan_so_data_4845720a8a6921d4)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("scan.so", "4caf86ec8bfabec8")
