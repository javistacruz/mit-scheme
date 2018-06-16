/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:52-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 8
#define DEBUGGING_LABEL_1_2 7
#define OBJECT_1_2 6
#define OBJECT_1_1 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd16;
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
      goto compiled_entryP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiled_entryP_3)
DEFLABEL (compiled_entryP_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 40L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_1_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_9 11
#define LABEL_2_14 13
#define LABEL_2_15 15
#define LABEL_2_11 17
#define LABEL_2_16 19
#define LABEL_2_23 21
#define LABEL_2_24 23
#define LABEL_2_19 25
#define LABEL_2_26 27
#define LABEL_2_27 29
#define LABEL_2_20 31
#define LABEL_2_21 33
#define ENVIRONMENT_LABEL_2_3 65
#define DEBUGGING_LABEL_2_2 64
#define OBJECT_2_3 63
#define OBJECT_2_2 62
#define OBJECT_2_1 61
#define OBJECT_2_0 60
#define EXECUTE_CACHE_2_29 35
#define EXECUTE_CACHE_2_28 37
#define EXECUTE_CACHE_2_25 39
#define EXECUTE_CACHE_2_22 41
#define EXECUTE_CACHE_2_18 43
#define EXECUTE_CACHE_2_17 45
#define EXECUTE_CACHE_2_13 47
#define EXECUTE_CACHE_2_12 49
#define EXECUTE_CACHE_2_10 51
#define EXECUTE_CACHE_2_6 53
#define FREE_REFERENCE_2_1 56
#define FREE_REFERENCE_2_0 57
#define FREE_ASSIGNMENT_2_0 59
#define FREE_REFERENCES_LABEL_2_0 34
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd9;
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
      goto initialize_packageB_22;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto lambda_11;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_2_14);
      goto do_loop_19;

    case 6:
      current_block = (Rpc - LABEL_2_15);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_2_11);
      goto lambda_10;

    case 8:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_17;

    case 9:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_2_24);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_2_19);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_2_26);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_2_27);
      goto label_26;

    case 14:
      current_block = (Rpc - LABEL_2_20);
      goto continuation_3;

    case 15:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_29)
DEFLABEL (initialize_packageB_22)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_7);
  goto do_loop_19;

DEFLABEL (lambda_30)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_2_8);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (do_loop_31)
DEFLABEL (do_loop_19)
  INTERRUPT_CHECK (26, LABEL_2_14);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_39;
  Wrd6 = Wrd10;

DEFLABEL (label_38)
  if ((Wrd6.Obj) == (current_block [OBJECT_2_0]))
    goto label_34;
  (Wrd13.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_33;

DEFLABEL (label_34)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_33)
DEFLABEL (label_37)
  (Wrd14.Obj) = (Rsp [0]);
  if (! ((Wrd14.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_35;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_16);
  Rsp = (& (Rsp [1]));
  goto do_loop_19;

DEFLABEL (label_35)
  Rsp = (& (Rsp [1]));
  (Wrd17.Obj) = (Rsp [0]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_15])), (Wrd7.pObj));

DEFLABEL (label_24)
  (Wrd6.Obj) = Rvl;
  goto label_38;

DEFLABEL (lambda_32)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_2_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_29]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_23);
  (* (--Rsp)) = Rvl;
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_49;
  Wrd33 = Wrd37;

DEFLABEL (label_48)
  (Wrd39.Obj) = (* (Rsp++));
  if (! ((Wrd33.Obj) == (Wrd39.Obj)))
    goto label_40;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (label_40)
  (Wrd5.Obj) = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_47)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  Wrd6 = Wrd10;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_41)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_43)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_27])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_26)
  goto label_41;

DEFLABEL (label_46)
  if ((Wrd10.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_26])), (Wrd7.pObj));

DEFLABEL (label_25)
  (Wrd6.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_24])), (Wrd34.pObj));

DEFLABEL (label_27)
  (Wrd33.Obj) = Rvl;
  goto label_48;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_19);
  (Wrd5.Obj) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_9 5
#define LABEL_3_10 7
#define TAG_3_11 2
#define LABEL_3_7 9
#define TAG_3_8 3
#define LABEL_3_5 11
#define TAG_3_6 4
#define LABEL_3_13 13
#define TAG_3_14 5
#define LABEL_3_15 15
#define TAG_3_16 6
#define LABEL_3_18 17
#define LABEL_3_19 19
#define TAG_3_20 8
#define LABEL_3_22 21
#define LABEL_3_25 23
#define TAG_3_26 10
#define LABEL_3_28 25
#define ENVIRONMENT_LABEL_3_3 46
#define DEBUGGING_LABEL_3_2 45
#define OBJECT_3_3 44
#define OBJECT_3_2 43
#define OBJECT_3_1 42
#define OBJECT_3_0 41
#define EXECUTE_CACHE_3_29 27
#define EXECUTE_CACHE_3_27 29
#define EXECUTE_CACHE_3_24 31
#define EXECUTE_CACHE_3_23 33
#define EXECUTE_CACHE_3_21 35
#define EXECUTE_CACHE_3_17 37
#define EXECUTE_CACHE_3_12 39
#define FREE_REFERENCES_LABEL_3_0 26
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd8;
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
      goto run_with_stack_sampling_17;

    case 1:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_3_10);
      goto lambda_23;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto register_event_22;

    case 4:
      current_block = (Rpc - LABEL_3_5);
      goto deregister_event_21;

    case 5:
      current_block = (Rpc - LABEL_3_13);
      goto lambda_24;

    case 6:
      current_block = (Rpc - LABEL_3_15);
      goto lambda_25;

    case 7:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_3_19);
      goto lambda_26;

    case 9:
      current_block = (Rpc - LABEL_3_22);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_3_25);
      goto lambda_27;

    case 11:
      current_block = (Rpc - LABEL_3_28);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (run_with_stack_sampling_20)
DEFLABEL (run_with_stack_sampling_17)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 3;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  Wrd29 = Wrd34;
  (Wrd30.Obj) = (Rsp [4]);
  ((Wrd29.pObj) [2]) = (Wrd30.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  ((Wrd29.pObj) [3]) = (Wrd27.Obj);
  ((Wrd29.pObj) [4]) = (Wrd7.Obj);
  ((Wrd36.pObj) [2]) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_10])));
  Rhp += 3;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd18 = Wrd13;
  (Wrd19.Obj) = (Rsp [6]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  ((Wrd18.pObj) [3]) = (Wrd37.Obj);
  ((Wrd18.pObj) [4]) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_13])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_3_10);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_15])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [2]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (register_event_22)
  CLOSURE_HEADER (LABEL_3_7);

DEFLABEL (register_event_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_28;
  Rvl = (current_block [OBJECT_3_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_19])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  (Wrd21.Obj) = ((Wrd6.pObj) [3]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  ((Wrd18.pObj) [3]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd24.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  ((Wrd8.pObj) [0]) = Rvl;
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (deregister_event_21)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (deregister_event_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_22);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  ((Wrd8.pObj) [0]) = ((SCHEME_OBJECT) 0);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_3_13);

DEFLABEL (lambda_3)
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

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_3_15);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_24]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_3_19);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_25])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = ((Wrd14.pObj) [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_27]));

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_3_25);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_28);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto register_event_11;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define LABEL_4_8 7
#define LABEL_4_12 9
#define LABEL_4_15 11
#define LABEL_4_10 13
#define TAG_4_11 5
#define LABEL_4_13 15
#define TAG_4_14 6
#define LABEL_4_18 17
#define LABEL_4_19 19
#define TAG_4_20 8
#define LABEL_4_23 21
#define ENVIRONMENT_LABEL_4_3 47
#define DEBUGGING_LABEL_4_2 46
#define OBJECT_4_3 45
#define OBJECT_4_2 44
#define OBJECT_4_1 43
#define OBJECT_4_0 42
#define EXECUTE_CACHE_4_25 23
#define EXECUTE_CACHE_4_24 25
#define EXECUTE_CACHE_4_22 27
#define EXECUTE_CACHE_4_21 29
#define EXECUTE_CACHE_4_17 31
#define EXECUTE_CACHE_4_16 33
#define EXECUTE_CACHE_4_9 35
#define EXECUTE_CACHE_4_7 37
#define FREE_REFERENCE_4_1 40
#define FREE_REFERENCE_4_0 41
#define FREE_REFERENCES_LABEL_4_0 22
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_4_4);
      goto carefully_record_sample_9;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_15;

    case 2:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_4_12);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_4_15);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_4_10);
      goto go_16;

    case 6:
      current_block = (Rpc - LABEL_4_13);
      goto lambda_17;

    case 7:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_4_19);
      goto lambda_18;

    case 9:
      current_block = (Rpc - LABEL_4_23);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (carefully_record_sample_14)
DEFLABEL (carefully_record_sample_9)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_4_1]);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_10])));
  Rhp += 2;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  Wrd38 = Wrd42;
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [2]);
  ((Wrd38.pObj) [2]) = (Wrd41.Obj);
  (Wrd36.Obj) = ((Wrd40.pObj) [3]);
  ((Wrd38.pObj) [3]) = (Wrd36.Obj);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_23;
  Wrd5 = Wrd9;

DEFLABEL (label_22)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto go_6;

DEFLABEL (label_19)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_13])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_21;
  Wrd21 = Wrd25;

DEFLABEL (label_20)
  (Wrd30.Obj) = (current_block [OBJECT_4_2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd31.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_15])), (Wrd22.pObj));

DEFLABEL (label_12)
  (Wrd21.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_12])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_22;

DEFLABEL (go_16)
  CLOSURE_HEADER (LABEL_4_10);

DEFLABEL (go_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_4_13);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_19])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_18);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_22]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_4_19);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_23);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_25]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_8 9
#define LABEL_5_10 11
#define LABEL_5_11 13
#define LABEL_5_13 15
#define ENVIRONMENT_LABEL_5_3 28
#define DEBUGGING_LABEL_5_2 27
#define OBJECT_5_0 26
#define EXECUTE_CACHE_5_12 17
#define EXECUTE_CACHE_5_9 19
#define EXECUTE_CACHE_5_7 21
#define FREE_REFERENCE_5_1 24
#define FREE_REFERENCE_5_0 25
#define FREE_REFERENCES_LABEL_5_0 16
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_5_4);
      goto stack_sampler_interrupt_stack_frameP_5;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_5_13);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_sampler_interrupt_stack_frameP_11)
DEFLABEL (stack_sampler_interrupt_stack_frameP_5)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_22;
  Wrd5 = Wrd9;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_20;
  Wrd6 = Wrd10;

DEFLABEL (label_19)
  (Wrd12.Obj) = (* (Rsp++));
  if ((Wrd6.Obj) == (Wrd12.Obj))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_18;
  Wrd6 = Wrd10;

DEFLABEL (label_17)
  (Wrd12.Obj) = (* (Rsp++));
  if ((Wrd6.Obj) == (Wrd12.Obj))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_5_0]);

DEFLABEL (label_14)
DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_13])), (Wrd7.pObj));

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_10])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_8 9
#define LABEL_6_10 11
#define LABEL_6_11 13
#define ENVIRONMENT_LABEL_6_3 26
#define DEBUGGING_LABEL_6_2 25
#define OBJECT_6_0 24
#define EXECUTE_CACHE_6_12 15
#define EXECUTE_CACHE_6_9 17
#define EXECUTE_CACHE_6_7 19
#define FREE_REFERENCE_6_1 22
#define FREE_REFERENCE_6_0 23
#define FREE_REFERENCES_LABEL_6_0 14
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_6_4);
      goto stack_sampling_stack_frameP_5;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_sampling_stack_frameP_10)
DEFLABEL (stack_sampling_stack_frameP_5)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_19;
  Wrd5 = Wrd9;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_17;
  Wrd6 = Wrd10;

DEFLABEL (label_16)
  (Wrd12.Obj) = (* (Rsp++));
  if ((Wrd6.Obj) == (Wrd12.Obj))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == Rvl)
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_6_0]);

DEFLABEL (label_13)
DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_10])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_5])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define TAG_7_7 2
#define LABEL_7_10 9
#define LABEL_7_12 11
#define LABEL_7_14 13
#define LABEL_7_15 15
#define LABEL_7_19 17
#define TAG_7_20 7
#define LABEL_7_17 19
#define TAG_7_18 8
#define LABEL_7_22 21
#define LABEL_7_23 23
#define LABEL_7_24 25
#define ENVIRONMENT_LABEL_7_3 46
#define DEBUGGING_LABEL_7_2 45
#define OBJECT_7_0 44
#define EXECUTE_CACHE_7_21 27
#define EXECUTE_CACHE_7_16 29
#define EXECUTE_CACHE_7_13 31
#define EXECUTE_CACHE_7_11 33
#define EXECUTE_CACHE_7_9 35
#define EXECUTE_CACHE_7_8 37
#define FREE_REFERENCE_7_1 40
#define FREE_REFERENCE_7_0 41
#define FREE_ASSIGNMENT_7_0 43
#define FREE_REFERENCES_LABEL_7_0 26
#define NUMBER_OF_LINKER_SECTIONS_7_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
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
      goto with_stack_sampling_continuation_16;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_15;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto lambda_24;

    case 3:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_7_14);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_7_15);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_7_19);
      goto lambda_26;

    case 8:
      current_block = (Rpc - LABEL_7_17);
      goto swapB_25;

    case 9:
      current_block = (Rpc - LABEL_7_22);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_7_23);
      goto label_20;

    case 11:
      current_block = (Rpc - LABEL_7_24);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_stack_sampling_continuation_23)
DEFLABEL (with_stack_sampling_continuation_16)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_7_6);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_29;
  Wrd6 = Wrd10;

DEFLABEL (label_28)
  (Wrd12.Obj) = (* (Rsp++));
  if ((Wrd6.Obj) == (Wrd12.Obj))
    goto label_27;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_27)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_15);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_17])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd20.pObj) = (& (Rhp [-1]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd20.pObj)));
  (Rsp [1]) = (Wrd21.Obj);
  ((Wrd23.pObj) [2]) = (Wrd21.Obj);
  (Rsp [3]) = (Wrd24.Obj);
  (Rsp [1]) = (Wrd24.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_19])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_21]));

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_14])), (Wrd7.pObj));

DEFLABEL (label_18)
  (Wrd6.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_7_19);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_25)
  CLOSURE_HEADER (LABEL_7_17);

DEFLABEL (swapB_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  Wrd5 = Wrd9;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_7_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_33)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_7_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_32;

DEFLABEL (label_31)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_30)
  Rvl = (current_block [OBJECT_7_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_31;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_7_24])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_21)
  goto label_30;

DEFLABEL (label_35)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_34;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_7_23])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_20)
  goto label_33;

DEFLABEL (label_38)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_7_22])), (Wrd6.pObj));

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 8
#define DEBUGGING_LABEL_8_2 7
#define EXECUTE_CACHE_8_5 5
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_5]));

INVOKE_INTERFACE_TARGET_1
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
stack_sample_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto profile_entries_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (profile_entries_3)
DEFLABEL (profile_entries_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define ENVIRONMENT_LABEL_10_3 17
#define DEBUGGING_LABEL_10_2 16
#define OBJECT_10_3 15
#define OBJECT_10_2 14
#define OBJECT_10_1 13
#define OBJECT_10_0 12
#define FREE_REFERENCE_10_0 11
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto profileP_4;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (profileP_10)
DEFLABEL (profileP_4)
  INTERRUPT_CHECK (26, LABEL_10_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
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
  Rvl = (current_block [OBJECT_10_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_10_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 6
#define DEBUGGING_LABEL_11_2 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  Rvl = (current_block [OBJECT_11_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 6
#define DEBUGGING_LABEL_12_2 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  Rvl = (current_block [OBJECT_12_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
stack_sample_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto entry_sampled_count_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (entry_sampled_count_3)
DEFLABEL (entry_sampled_count_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
stack_sample_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto entry_waiting_count_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (entry_waiting_count_3)
DEFLABEL (entry_waiting_count_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
stack_sample_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto entry_time_stamp_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (entry_time_stamp_3)
DEFLABEL (entry_time_stamp_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 7
#define DEBUGGING_LABEL_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto entry_return_address_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (entry_return_address_3)
DEFLABEL (entry_return_address_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

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

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 7
#define DEBUGGING_LABEL_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto entry_expression_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (entry_expression_3)
DEFLABEL (entry_expression_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

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

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 7
#define DEBUGGING_LABEL_18_2 6
#define OBJECT_18_1 5
#define OBJECT_18_0 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto entry_subexpression_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (entry_subexpression_3)
DEFLABEL (entry_subexpression_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

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

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 7
#define DEBUGGING_LABEL_19_2 6
#define OBJECT_19_1 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto entry_environment_names_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (entry_environment_names_3)
DEFLABEL (entry_environment_names_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

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
stack_sample_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_entry_sampled_countB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_entry_sampled_countB_3)
DEFLABEL (set_entry_sampled_countB_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
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
stack_sample_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_entry_waiting_countB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_entry_waiting_countB_3)
DEFLABEL (set_entry_waiting_countB_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
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
stack_sample_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_entry_time_stampB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_entry_time_stampB_3)
DEFLABEL (set_entry_time_stampB_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_22_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_7 9
#define ENVIRONMENT_LABEL_23_3 17
#define DEBUGGING_LABEL_23_2 16
#define OBJECT_23_3 15
#define OBJECT_23_2 14
#define OBJECT_23_1 13
#define OBJECT_23_0 12
#define FREE_REFERENCE_23_0 11
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto entryP_4;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_23_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (entryP_10)
DEFLABEL (entryP_4)
  INTERRUPT_CHECK (26, LABEL_23_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
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
  Rvl = (current_block [OBJECT_23_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_23_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_8 9
#define LABEL_24_11 11
#define LABEL_24_13 13
#define LABEL_24_16 15
#define LABEL_24_14 17
#define LABEL_24_17 19
#define ENVIRONMENT_LABEL_24_3 37
#define DEBUGGING_LABEL_24_2 36
#define OBJECT_24_0 35
#define EXECUTE_CACHE_24_19 21
#define EXECUTE_CACHE_24_18 23
#define EXECUTE_CACHE_24_15 25
#define EXECUTE_CACHE_24_12 27
#define EXECUTE_CACHE_24_10 29
#define EXECUTE_CACHE_24_9 31
#define EXECUTE_CACHE_24_7 33
#define FREE_REFERENCES_LABEL_24_0 20
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_24_4);
      goto record_sample_12;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_24_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_24_13);
      goto loop_9;

    case 6:
      current_block = (Rpc - LABEL_24_16);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_24_14);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_24_17);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_sample_15)
DEFLABEL (record_sample_12)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_17;
  Rvl = (current_block [OBJECT_24_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_11);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_9;

DEFLABEL (loop_16)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_24_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_24_14);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_24_0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_24_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_24_17);
  goto loop_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define LABEL_25_8 9
#define LABEL_25_11 11
#define LABEL_25_10 13
#define ENVIRONMENT_LABEL_25_3 26
#define DEBUGGING_LABEL_25_2 25
#define EXECUTE_CACHE_25_14 15
#define EXECUTE_CACHE_25_13 17
#define EXECUTE_CACHE_25_12 19
#define EXECUTE_CACHE_25_9 21
#define EXECUTE_CACHE_25_6 23
#define FREE_REFERENCES_LABEL_25_0 14
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_25_4);
      goto find_first_subproblem_9;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_25_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_25_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_first_subproblem_12)
DEFLABEL (find_first_subproblem_9)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (* (--Rsp)) = Rvl;
  goto loop_7;

DEFLABEL (loop_13)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_25_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_14;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_14)
DEFLABEL (label_16)
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_11);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_13]));

DEFLABEL (label_17)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_25_10);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto loop_7;

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_14]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define ENVIRONMENT_LABEL_26_3 16
#define DEBUGGING_LABEL_26_2 15
#define EXECUTE_CACHE_26_9 9
#define EXECUTE_CACHE_26_8 11
#define EXECUTE_CACHE_26_7 13
#define FREE_REFERENCES_LABEL_26_0 8
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_26_4);
      goto find_subproblem_2;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_subproblem_5)
DEFLABEL (find_subproblem_2)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define ENVIRONMENT_LABEL_27_3 12
#define DEBUGGING_LABEL_27_2 11
#define EXECUTE_CACHE_27_7 7
#define EXECUTE_CACHE_27_6 9
#define FREE_REFERENCES_LABEL_27_0 6
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto find_next_subproblem_2;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_next_subproblem_5)
DEFLABEL (find_next_subproblem_2)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define LABEL_28_8 9
#define ENVIRONMENT_LABEL_28_3 18
#define DEBUGGING_LABEL_28_2 17
#define OBJECT_28_3 16
#define OBJECT_28_2 15
#define OBJECT_28_1 14
#define OBJECT_28_0 13
#define EXECUTE_CACHE_28_6 11
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_28_4);
      goto record_sampled_4;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_28_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_sampled_9)
DEFLABEL (record_sampled_4)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = (current_block [OBJECT_28_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd8.Obj) = (current_block [OBJECT_28_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_16;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_16;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_15)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_14;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd32.Lng) = ((Wrd33.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_14;
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));

DEFLABEL (label_13)
  (Rsp [2]) = (Wrd30.Obj);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 62)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 3);

DEFLABEL (label_12)
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd44.Lng))))
    goto label_11;
  ((Wrd42.pObj) [2]) = (Wrd30.Obj);
  Rvl = (current_block [OBJECT_28_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_7)
  (Wrd30.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_28_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 2);

DEFLABEL (label_6)
  (Wrd10.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_7 5
#define LABEL_29_8 7
#define LABEL_29_9 9
#define LABEL_29_10 11
#define LABEL_29_5 13
#define LABEL_29_11 15
#define ENVIRONMENT_LABEL_29_3 27
#define DEBUGGING_LABEL_29_2 26
#define OBJECT_29_4 25
#define OBJECT_29_3 24
#define OBJECT_29_2 23
#define OBJECT_29_1 22
#define OBJECT_29_0 21
#define EXECUTE_CACHE_29_12 17
#define EXECUTE_CACHE_29_6 19
#define FREE_REFERENCES_LABEL_29_0 16
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd60;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd86;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_29_4);
      goto record_waiting_7;

    case 1:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_29_8);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_29_10);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_29_11);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (record_waiting_14)
DEFLABEL (record_waiting_7)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_29_4]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 62))
    goto label_26;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_26;
  (Wrd12.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_25)
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 62))
    goto label_24;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd39.Lng))))
    goto label_24;
  (Wrd31.Obj) = ((Wrd37.pObj) [3]);

DEFLABEL (label_23)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_22;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd53.Lng) = ((Wrd54.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd53.Lng)))
    goto label_22;
  (Wrd51.Obj) = (LONG_TO_FIXNUM (Wrd53.Lng));

DEFLABEL (label_21)
  (Wrd79.Obj) = (Rsp [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 62))
    goto label_20;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [0]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd78.Lng))))
    goto label_20;
  ((Wrd76.pObj) [3]) = (Wrd51.Obj);

DEFLABEL (label_19)
  (Wrd55.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd55.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_29_3]);
  (Rsp [2]) = (Wrd56.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if ((Wrd69.uLng) == 62)
    goto label_18;

DEFLABEL (label_17)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 3);

DEFLABEL (label_18)
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd67.Lng))))
    goto label_17;
  (Wrd60.Obj) = (Rsp [2]);
  ((Wrd65.pObj) [4]) = (Wrd60.Obj);
  Rvl = (current_block [OBJECT_29_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.Obj) = (current_block [OBJECT_29_0]);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 3);

DEFLABEL (label_12)
  goto label_19;

DEFLABEL (label_22)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_11)
  (Wrd51.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (current_block [OBJECT_29_0]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_10)
  (Wrd31.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_29_3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_7 7
#define LABEL_30_10 9
#define LABEL_30_9 11
#define LABEL_30_15 13
#define LABEL_30_13 15
#define TAG_30_14 6
#define LABEL_30_17 17
#define LABEL_30_19 19
#define TAG_30_20 8
#define LABEL_30_21 21
#define ENVIRONMENT_LABEL_30_3 42
#define DEBUGGING_LABEL_30_2 41
#define OBJECT_30_1 40
#define OBJECT_30_0 39
#define EXECUTE_CACHE_30_23 23
#define EXECUTE_CACHE_30_22 25
#define EXECUTE_CACHE_30_18 27
#define EXECUTE_CACHE_30_16 29
#define EXECUTE_CACHE_30_12 31
#define EXECUTE_CACHE_30_11 33
#define EXECUTE_CACHE_30_8 35
#define EXECUTE_CACHE_30_6 37
#define FREE_REFERENCES_LABEL_30_0 22
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd33;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_30_4);
      goto intern_entry_11;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_30_10);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_30_15);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_30_13);
      goto lambda_16;

    case 7:
      current_block = (Rpc - LABEL_30_17);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_30_19);
      goto lambda_17;

    case 9:
      current_block = (Rpc - LABEL_30_21);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (intern_entry_15)
DEFLABEL (intern_entry_11)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_9);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_13])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_20;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd22.Lng))))
    goto label_20;
  (Wrd14.Obj) = ((Wrd20.pObj) [2]);

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd30.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (label_20)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_30_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_13)
  (Wrd14.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd5.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  goto label_21;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_30_13);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_30_17);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_19])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_30_19);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_21);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_23]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define TAG_31_7 2
#define LABEL_31_8 9
#define LABEL_31_10 11
#define LABEL_31_11 13
#define LABEL_31_14 15
#define LABEL_31_15 17
#define TAG_31_16 7
#define ENVIRONMENT_LABEL_31_3 33
#define DEBUGGING_LABEL_31_2 32
#define OBJECT_31_0 31
#define EXECUTE_CACHE_31_19 19
#define EXECUTE_CACHE_31_18 21
#define EXECUTE_CACHE_31_17 23
#define EXECUTE_CACHE_31_13 25
#define EXECUTE_CACHE_31_12 27
#define EXECUTE_CACHE_31_9 29
#define FREE_REFERENCES_LABEL_31_0 18
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_31_4);
      goto with_stack_sampling_7;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto lambda_11;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto lambda_3;

    case 4:
      current_block = (Rpc - LABEL_31_10);
      goto lambda_2;

    case 5:
      current_block = (Rpc - LABEL_31_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_31_14);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_31_15);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_stack_sampling_10)
DEFLABEL (with_stack_sampling_7)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_6])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_31_6);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_31_11);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_18]));

DEFLABEL (lambda_12)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_31_8);
  (Wrd5.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_13]));

DEFLABEL (lambda_13)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_31_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_15])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_14);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_31_15);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_19]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_6 5
#define LABEL_32_5 7
#define LABEL_32_9 9
#define LABEL_32_8 11
#define LABEL_32_11 13
#define LABEL_32_12 15
#define LABEL_32_10 17
#define LABEL_32_21 19
#define LABEL_32_13 21
#define TAG_32_14 9
#define LABEL_32_15 23
#define LABEL_32_16 25
#define TAG_32_17 11
#define LABEL_32_19 27
#define LABEL_32_28 29
#define LABEL_32_20 31
#define LABEL_32_29 33
#define LABEL_32_23 35
#define LABEL_32_25 37
#define LABEL_32_26 39
#define LABEL_32_27 41
#define LABEL_32_34 43
#define LABEL_32_31 45
#define LABEL_32_32 47
#define LABEL_32_35 49
#define LABEL_32_37 51
#define LABEL_32_40 53
#define LABEL_32_39 55
#define LABEL_32_41 57
#define LABEL_32_42 59
#define ENVIRONMENT_LABEL_32_3 91
#define DEBUGGING_LABEL_32_2 90
#define OBJECT_32_6 89
#define OBJECT_32_5 88
#define OBJECT_32_4 87
#define OBJECT_32_3 86
#define OBJECT_32_2 85
#define OBJECT_32_1 84
#define OBJECT_32_0 83
#define EXECUTE_CACHE_32_43 61
#define EXECUTE_CACHE_32_38 63
#define EXECUTE_CACHE_32_36 65
#define EXECUTE_CACHE_32_33 67
#define EXECUTE_CACHE_32_30 69
#define EXECUTE_CACHE_32_24 71
#define EXECUTE_CACHE_32_22 73
#define EXECUTE_CACHE_32_18 75
#define EXECUTE_CACHE_32_7 77
#define FREE_REFERENCE_32_2 80
#define FREE_REFERENCE_32_1 81
#define FREE_REFERENCE_32_0 82
#define FREE_REFERENCES_LABEL_32_0 60
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_32_4);
      goto display_profile_23;

    case 1:
      current_block = (Rpc - LABEL_32_6);
      goto label_25;

    case 2:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_32_9);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_32_11);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_32_12);
      goto sortem_21;

    case 7:
      current_block = (Rpc - LABEL_32_10);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_32_21);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_32_13);
      goto lambda_37;

    case 10:
      current_block = (Rpc - LABEL_32_15);
      goto continuation_17;

    case 11:
      current_block = (Rpc - LABEL_32_16);
      goto lambda_38;

    case 12:
      current_block = (Rpc - LABEL_32_19);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_32_28);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_32_20);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_32_29);
      goto label_30;

    case 16:
      current_block = (Rpc - LABEL_32_23);
      goto continuation_18;

    case 17:
      current_block = (Rpc - LABEL_32_25);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_32_26);
      goto continuation_5;

    case 19:
      current_block = (Rpc - LABEL_32_27);
      goto continuation_4;

    case 20:
      current_block = (Rpc - LABEL_32_34);
      goto label_31;

    case 21:
      current_block = (Rpc - LABEL_32_31);
      goto continuation_19;

    case 22:
      current_block = (Rpc - LABEL_32_32);
      goto continuation_8;

    case 23:
      current_block = (Rpc - LABEL_32_35);
      goto continuation_9;

    case 24:
      current_block = (Rpc - LABEL_32_37);
      goto continuation_10;

    case 25:
      current_block = (Rpc - LABEL_32_40);
      goto label_32;

    case 26:
      current_block = (Rpc - LABEL_32_39);
      goto continuation_11;

    case 27:
      current_block = (Rpc - LABEL_32_41);
      goto label_33;

    case 28:
      current_block = (Rpc - LABEL_32_42);
      goto d_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (display_profile_35)
DEFLABEL (display_profile_23)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_57;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_57;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_56)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_55;
  Wrd11 = Wrd15;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd11.Obj);
  goto sortem_21;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_53;
  Wrd11 = Wrd15;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd11.Obj);
  goto sortem_21;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_10);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_51;
  Wrd13 = Wrd17;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_32_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_49;
  Wrd6 = Wrd10;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_32_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_47;
  Wrd12 = Wrd16;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_22]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_45;
  Wrd6 = Wrd10;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_30]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_32_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_33]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_32_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_36]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_32_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_38]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_32_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [5]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_43;
  Wrd11 = Wrd15;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_32_5]);
  (* (--Rsp)) = (Wrd19.Obj);
  Rdl = (& (Rsp [5]));
  goto d_12;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_32_39);
  (Wrd5.Obj) = (current_block [OBJECT_32_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd8.pObj) = (& (Rsp [5]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_41;
  Wrd13 = Wrd17;

DEFLABEL (label_40)
  (Rsp [3]) = (Wrd13.Obj);
  Rdl = (& (Rsp [7]));
  goto d_12;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_41])), (Wrd14.pObj));

DEFLABEL (label_33)
  (Wrd13.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_40])), (Wrd12.pObj));

DEFLABEL (label_32)
  (Wrd11.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_34])), (Wrd7.pObj));

DEFLABEL (label_31)
  (Wrd6.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_28])), (Wrd13.pObj));

DEFLABEL (label_29)
  (Wrd12.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_29])), (Wrd7.pObj));

DEFLABEL (label_30)
  (Wrd6.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_21])), (Wrd14.pObj));

DEFLABEL (label_28)
  (Wrd13.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_11])), (Wrd12.pObj));

DEFLABEL (label_27)
  (Wrd11.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_9])), (Wrd12.pObj));

DEFLABEL (label_26)
  (Wrd11.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_32_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (sortem_36)
DEFLABEL (sortem_21)
  INTERRUPT_CHECK (26, LABEL_32_12);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_13])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_16])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_18]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_32_15);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_24]));

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_32_13);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_32_23);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_31]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_32_31);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_59;

DEFLABEL (label_58)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_59)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_58;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd12.Lng) < (Wrd14.Lng))
    goto label_61;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_60;

DEFLABEL (label_61)
  Rvl = (current_block [OBJECT_32_3]);

DEFLABEL (label_60)
DEFLABEL (label_62)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_32_16);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_32_25);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_63;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_63)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd10.Lng) == 0)
    goto label_65;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_64;

DEFLABEL (label_65)
  Rvl = (current_block [OBJECT_32_3]);

DEFLABEL (label_64)
DEFLABEL (label_66)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (d_39)
DEFLABEL (d_12)
  DLINK_INTERRUPT_CHECK (25, LABEL_32_42);
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [5]));
    SCHEME_OBJECT * MFUp2 = Rdl;
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_43]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define LABEL_33_9 9
#define LABEL_33_10 11
#define LABEL_33_11 13
#define LABEL_33_12 15
#define TAG_33_13 6
#define LABEL_33_14 17
#define LABEL_33_16 19
#define LABEL_33_19 21
#define LABEL_33_21 23
#define LABEL_33_20 25
#define LABEL_33_22 27
#define LABEL_33_24 29
#define LABEL_33_26 31
#define LABEL_33_28 33
#define LABEL_33_30 35
#define LABEL_33_25 37
#define LABEL_33_31 39
#define LABEL_33_32 41
#define LABEL_33_33 43
#define LABEL_33_34 45
#define LABEL_33_35 47
#define ENVIRONMENT_LABEL_33_3 81
#define DEBUGGING_LABEL_33_2 80
#define OBJECT_33_10 79
#define OBJECT_33_9 78
#define OBJECT_33_8 77
#define OBJECT_33_7 76
#define OBJECT_33_6 75
#define OBJECT_33_5 74
#define OBJECT_33_4 73
#define OBJECT_33_3 72
#define OBJECT_33_2 71
#define OBJECT_33_1 70
#define OBJECT_33_0 69
#define EXECUTE_CACHE_33_36 49
#define EXECUTE_CACHE_33_29 51
#define EXECUTE_CACHE_33_27 53
#define EXECUTE_CACHE_33_23 55
#define EXECUTE_CACHE_33_18 57
#define EXECUTE_CACHE_33_17 59
#define EXECUTE_CACHE_33_15 61
#define EXECUTE_CACHE_33_8 63
#define EXECUTE_CACHE_33_6 65
#define FREE_REFERENCE_33_0 68
#define FREE_REFERENCES_LABEL_33_0 48
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_33_4);
      goto display_profile_entries_23;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_33_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_33_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_33_12);
      goto lambda_33;

    case 7:
      current_block = (Rpc - LABEL_33_14);
      goto continuation_22;

    case 8:
      current_block = (Rpc - LABEL_33_16);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_33_19);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_33_21);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_33_20);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_33_22);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_33_24);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_33_26);
      goto label_26;

    case 15:
      current_block = (Rpc - LABEL_33_28);
      goto label_27;

    case 16:
      current_block = (Rpc - LABEL_33_30);
      goto continuation_20;

    case 17:
      current_block = (Rpc - LABEL_33_25);
      goto continuation_12;

    case 18:
      current_block = (Rpc - LABEL_33_31);
      goto label_28;

    case 19:
      current_block = (Rpc - LABEL_33_32);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_33_33);
      goto continuation_17;

    case 21:
      current_block = (Rpc - LABEL_33_34);
      goto label_29;

    case 22:
      current_block = (Rpc - LABEL_33_35);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (display_profile_entries_32)
DEFLABEL (display_profile_entries_23)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_11);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_12])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_15]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_33_14);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_18]));

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_33_12);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_33_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_33_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_33_20);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_41;
  if (Rvl == (current_block [OBJECT_33_2]))
    goto label_39;

DEFLABEL (label_40)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_21]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_33_3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_33_21);

DEFLABEL (label_39)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_24]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_33_4]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_33_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_38;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_38;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_37)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_34;
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [2]);
  (Rsp [1]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_27]));

DEFLABEL (label_34)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_36;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd34.Lng))))
    goto label_36;
  (Wrd28.Obj) = ((Wrd32.pObj) [5]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_35)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [2]);
  (Rsp [1]) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_29]));

DEFLABEL (label_36)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (current_block [OBJECT_33_7]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_28]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_6]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_33_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_26]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_6]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_41)
  (Wrd7.Obj) = (current_block [OBJECT_33_2]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_39;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_33_25);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_49;
  Wrd5 = Wrd9;

DEFLABEL (label_48)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_43;

DEFLABEL (label_42)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [2]);
  (Rsp [2]) = (Wrd19.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (label_43)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_32]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_33_8]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_23]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_33_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_33_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_47;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd19.Lng))))
    goto label_47;
  (Wrd13.Obj) = ((Wrd17.pObj) [7]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_46)
  (Wrd36.Obj) = (Rsp [5]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_45;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd35.Lng))))
    goto label_45;
  (Wrd29.Obj) = ((Wrd33.pObj) [6]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_36]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_33_30);
  goto label_42;

DEFLABEL (label_45)
  (Wrd38.Obj) = (Rsp [5]);
  (Wrd39.Obj) = (current_block [OBJECT_33_10]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_35]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_6]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (current_block [OBJECT_33_9]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_34]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_6]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_31])), (Wrd6.pObj));

DEFLABEL (label_28)
  (Wrd5.Obj) = Rvl;
  goto label_48;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_11 7
#define LABEL_34_6 9
#define TAG_34_7 3
#define LABEL_34_9 11
#define LABEL_34_10 13
#define LABEL_34_15 15
#define LABEL_34_12 17
#define LABEL_34_13 19
#define TAG_34_14 8
#define ENVIRONMENT_LABEL_34_3 35
#define DEBUGGING_LABEL_34_2 34
#define OBJECT_34_1 33
#define OBJECT_34_0 32
#define EXECUTE_CACHE_34_18 21
#define EXECUTE_CACHE_34_17 23
#define EXECUTE_CACHE_34_16 25
#define EXECUTE_CACHE_34_8 27
#define FREE_REFERENCE_34_1 30
#define FREE_REFERENCE_34_0 31
#define FREE_REFERENCES_LABEL_34_0 20
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_34_4);
      goto entry_count_strings_9;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_34_11);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_34_6);
      goto lambda_15;

    case 4:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_34_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_34_15);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_34_12);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_34_13);
      goto lambda_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (entry_count_strings_14)
DEFLABEL (entry_count_strings_9)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_6])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_20;
  Wrd13 = Wrd17;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_34_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_18;
  Wrd6 = Wrd10;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_15])), (Wrd7.pObj));

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_11])), (Wrd14.pObj));

DEFLABEL (label_11)
  (Wrd13.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_34_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_12);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_17]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_34_13);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34_1]);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define LABEL_35_8 9
#define LABEL_35_13 11
#define LABEL_35_11 13
#define LABEL_35_10 15
#define LABEL_35_17 17
#define LABEL_35_15 19
#define LABEL_35_21 21
#define LABEL_35_19 23
#define ENVIRONMENT_LABEL_35_3 43
#define DEBUGGING_LABEL_35_2 42
#define OBJECT_35_0 41
#define EXECUTE_CACHE_35_22 25
#define EXECUTE_CACHE_35_20 27
#define EXECUTE_CACHE_35_18 29
#define EXECUTE_CACHE_35_16 31
#define EXECUTE_CACHE_35_14 33
#define EXECUTE_CACHE_35_12 35
#define EXECUTE_CACHE_35_9 37
#define EXECUTE_CACHE_35_7 39
#define FREE_REFERENCES_LABEL_35_0 24
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_35_4);
      goto environment_ancestry_names_17;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto recur_15;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_35_13);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_35_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_35_10);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_35_17);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_35_15);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_35_21);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_35_19);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_ancestry_names_20)
DEFLABEL (environment_ancestry_names_17)
  INTERRUPT_CHECK (26, LABEL_35_4);
  goto recur_15;

DEFLABEL (recur_21)
DEFLABEL (recur_15)
  INTERRUPT_CHECK (26, LABEL_35_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  Rvl = (current_block [OBJECT_35_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_35_8);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [2]));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_35_13);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_35_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_23)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_35_11);
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_15]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_35_15);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  goto recur_15;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_35_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_27)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_35_17);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd7.Obj) = (Rsp [0]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_24;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_35_19);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_35_21);
  (Wrd22.Obj) = (current_block [OBJECT_35_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));

DEFLABEL (label_25)
  Rsp = (& (Rsp [1]));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd12.Obj) = (Rsp [1]);
  goto label_25;

DEFLABEL (label_28)
  (Wrd26.Obj) = (current_block [OBJECT_35_0]);
  Rsp = (& (Rsp [1]));
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (* (--Rsp)) = (Wrd26.Obj);
  goto label_27;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_7 9
#define LABEL_36_11 11
#define ENVIRONMENT_LABEL_36_3 27
#define DEBUGGING_LABEL_36_2 26
#define OBJECT_36_2 25
#define OBJECT_36_1 24
#define OBJECT_36_0 23
#define EXECUTE_CACHE_36_12 13
#define EXECUTE_CACHE_36_10 15
#define EXECUTE_CACHE_36_9 17
#define EXECUTE_CACHE_36_8 19
#define FREE_REFERENCE_36_0 22
#define FREE_REFERENCES_LABEL_36_0 12
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_36_4);
      goto show_environment_names_4;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_36_11);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_environment_names_8)
DEFLABEL (show_environment_names_4)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_9;
  Rvl = (current_block [OBJECT_36_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_7);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_36_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_36_2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_36_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_11])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define LABEL_37_11 9
#define LABEL_37_13 11
#define LABEL_37_9 13
#define LABEL_37_16 15
#define LABEL_37_14 17
#define LABEL_37_18 19
#define LABEL_37_19 21
#define LABEL_37_20 23
#define LABEL_37_21 25
#define ENVIRONMENT_LABEL_37_3 46
#define DEBUGGING_LABEL_37_2 45
#define OBJECT_37_3 44
#define OBJECT_37_2 43
#define OBJECT_37_1 42
#define OBJECT_37_0 41
#define EXECUTE_CACHE_37_22 27
#define EXECUTE_CACHE_37_17 29
#define EXECUTE_CACHE_37_15 31
#define EXECUTE_CACHE_37_12 33
#define EXECUTE_CACHE_37_10 35
#define EXECUTE_CACHE_37_8 37
#define EXECUTE_CACHE_37_6 39
#define FREE_REFERENCES_LABEL_37_0 26
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto show_expression_15;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_37_11);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_37_13);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_37_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_37_16);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_37_14);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_37_18);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_37_19);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_37_20);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_37_21);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_expression_18)
DEFLABEL (show_expression_15)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_37_11);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_12]));

DEFLABEL (label_19)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_37_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_22)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_20;

DEFLABEL (label_21)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_14]))));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_20)
DEFLABEL (label_23)
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_37_16);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_37_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_37_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_37_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_37_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (current_block [OBJECT_37_2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_37_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_37_21);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_17]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_7 7
#define ENVIRONMENT_LABEL_38_3 16
#define DEBUGGING_LABEL_38_2 15
#define OBJECT_38_1 14
#define OBJECT_38_0 13
#define EXECUTE_CACHE_38_8 9
#define EXECUTE_CACHE_38_6 11
#define FREE_REFERENCES_LABEL_38_0 8
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_38_4);
      goto invalid_expression_description_2;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invalid_expression_description_5)
DEFLABEL (invalid_expression_description_2)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (current_block [OBJECT_38_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (current_block [OBJECT_38_1]);
  goto label_7;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_7 5
#define TAG_39_8 1
#define LABEL_39_5 7
#define TAG_39_6 2
#define LABEL_39_11 9
#define LABEL_39_12 11
#define LABEL_39_13 13
#define LABEL_39_14 15
#define LABEL_39_15 17
#define LABEL_39_16 19
#define LABEL_39_17 21
#define LABEL_39_18 23
#define LABEL_39_19 25
#define LABEL_39_20 27
#define LABEL_39_21 29
#define LABEL_39_22 31
#define LABEL_39_23 33
#define LABEL_39_24 35
#define LABEL_39_25 37
#define LABEL_39_26 39
#define LABEL_39_27 41
#define LABEL_39_28 43
#define ENVIRONMENT_LABEL_39_3 69
#define DEBUGGING_LABEL_39_2 68
#define OBJECT_39_4 67
#define OBJECT_39_3 66
#define OBJECT_39_2 65
#define OBJECT_39_1 64
#define OBJECT_39_0 63
#define EXECUTE_CACHE_39_10 45
#define EXECUTE_CACHE_39_9 47
#define FREE_REFERENCE_39_5 50
#define FREE_REFERENCE_39_4 51
#define FREE_REFERENCE_39_3 52
#define FREE_REFERENCE_39_2 53
#define FREE_REFERENCE_39_1 54
#define FREE_REFERENCE_39_0 55
#define FREE_ASSIGNMENT_39_5 57
#define FREE_ASSIGNMENT_39_4 58
#define FREE_ASSIGNMENT_39_3 59
#define FREE_ASSIGNMENT_39_2 60
#define FREE_ASSIGNMENT_39_1 61
#define FREE_ASSIGNMENT_39_0 62
#define FREE_REFERENCES_LABEL_39_0 44
#define NUMBER_OF_LINKER_SECTIONS_39_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stack_sample_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd314;
  machine_word Wrd313;
  machine_word Wrd305;
  machine_word Wrd297;
  machine_word Wrd296;
  machine_word Wrd295;
  machine_word Wrd294;
  machine_word Wrd293;
  machine_word Wrd292;
  machine_word Wrd288;
  machine_word Wrd287;
  machine_word Wrd278;
  machine_word Wrd277;
  machine_word Wrd265;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd266;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd253;
  machine_word Wrd245;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd213;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd214;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd201;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd161;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
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
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd55;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd8;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_39_4);
      goto profile_pp_39;

    case 1:
      current_block = (Rpc - LABEL_39_7);
      goto lambda_62;

    case 2:
      current_block = (Rpc - LABEL_39_5);
      goto swapB_61;

    case 3:
      current_block = (Rpc - LABEL_39_11);
      goto label_41;

    case 4:
      current_block = (Rpc - LABEL_39_12);
      goto label_42;

    case 5:
      current_block = (Rpc - LABEL_39_13);
      goto label_43;

    case 6:
      current_block = (Rpc - LABEL_39_14);
      goto label_44;

    case 7:
      current_block = (Rpc - LABEL_39_15);
      goto label_45;

    case 8:
      current_block = (Rpc - LABEL_39_16);
      goto label_46;

    case 9:
      current_block = (Rpc - LABEL_39_17);
      goto label_47;

    case 10:
      current_block = (Rpc - LABEL_39_18);
      goto label_48;

    case 11:
      current_block = (Rpc - LABEL_39_19);
      goto label_49;

    case 12:
      current_block = (Rpc - LABEL_39_20);
      goto label_50;

    case 13:
      current_block = (Rpc - LABEL_39_21);
      goto label_51;

    case 14:
      current_block = (Rpc - LABEL_39_22);
      goto label_52;

    case 15:
      current_block = (Rpc - LABEL_39_23);
      goto label_53;

    case 16:
      current_block = (Rpc - LABEL_39_24);
      goto label_54;

    case 17:
      current_block = (Rpc - LABEL_39_25);
      goto label_55;

    case 18:
      current_block = (Rpc - LABEL_39_26);
      goto label_56;

    case 19:
      current_block = (Rpc - LABEL_39_27);
      goto label_57;

    case 20:
      current_block = (Rpc - LABEL_39_28);
      goto label_58;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (profile_pp_60)
DEFLABEL (profile_pp_39)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd8.Obj) = (current_block [OBJECT_39_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_39_1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_39_2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-1]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_39_3]);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd26.pObj) = (& (Rhp [-1]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd57.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_5])));
  Rhp += 6;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd57.pObj)));
  (* (--Rsp)) = (Wrd58.Obj);
  Wrd55 = Wrd57;
  ((Wrd55.pObj) [2]) = (Wrd7.Obj);
  ((Wrd55.pObj) [3]) = (Wrd11.Obj);
  ((Wrd55.pObj) [4]) = (Wrd15.Obj);
  ((Wrd55.pObj) [5]) = (Wrd19.Obj);
  ((Wrd55.pObj) [6]) = (Wrd23.Obj);
  ((Wrd55.pObj) [7]) = (Wrd27.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_7])));
  Rhp += 2;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd34 = Wrd31;
  (Wrd35.Obj) = (Rsp [8]);
  ((Wrd34.pObj) [2]) = (Wrd35.Obj);
  (Wrd33.Obj) = (Rsp [7]);
  ((Wrd34.pObj) [3]) = (Wrd33.Obj);
  (Rsp [7]) = (Wrd30.Obj);
  (Rsp [8]) = (Wrd58.Obj);
  (Rsp [6]) = (Wrd58.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_39_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_10]));

DEFLABEL (swapB_61)
  CLOSURE_HEADER (LABEL_39_5);

DEFLABEL (swapB_37)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_116;

DEFLABEL (label_115)
  Wrd5 = Wrd9;

DEFLABEL (label_114)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_113;

DEFLABEL (label_112)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_111)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [7]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_110;

DEFLABEL (label_109)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_108)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_107;

DEFLABEL (label_106)
  Wrd57 = Wrd61;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_104;

DEFLABEL (label_103)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_102)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [6]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_101;

DEFLABEL (label_100)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_99)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_98;

DEFLABEL (label_97)
  Wrd109 = Wrd113;

DEFLABEL (label_96)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_95;

DEFLABEL (label_94)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_93)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [5]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_92;

DEFLABEL (label_91)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_90)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_3]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_89;

DEFLABEL (label_88)
  Wrd161 = Wrd165;

DEFLABEL (label_87)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_86;

DEFLABEL (label_85)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_84)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [4]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_83;

DEFLABEL (label_82)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_81)
  (Wrd214.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_4]));
  (Wrd217.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if ((Wrd218.uLng) == 50)
    goto label_80;

DEFLABEL (label_79)
  Wrd213 = Wrd217;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd225.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_4]));
  (Wrd226.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd235.Obj) = ((Wrd225.pObj) [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if ((Wrd236.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  ((Wrd225.pObj) [0]) = (Wrd226.Obj);

DEFLABEL (label_75)
  (Wrd240.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd243.Obj) = ((Wrd242.pObj) [3]);
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (* (--Rsp)) = (Wrd245.Obj);
  ((Wrd244.pObj) [0]) = (Wrd240.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd253.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_4]));
  (Wrd261.Obj) = ((Wrd253.pObj) [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd262.uLng) == 50)
    goto label_74;

DEFLABEL (label_73)
  ((Wrd253.pObj) [0]) = (Wrd245.Obj);

DEFLABEL (label_72)
  (Wrd266.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_5]));
  (Wrd269.Obj) = ((Wrd266.pObj) [0]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if ((Wrd270.uLng) == 50)
    goto label_71;

DEFLABEL (label_70)
  Wrd265 = Wrd269;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd265.Obj);
  (Wrd277.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_5]));
  (Wrd278.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd287.Obj) = ((Wrd277.pObj) [0]);
  (Wrd288.uLng) = (OBJECT_TYPE (Wrd287.Obj));
  if ((Wrd288.uLng) == 50)
    goto label_68;

DEFLABEL (label_67)
  ((Wrd277.pObj) [0]) = (Wrd278.Obj);

DEFLABEL (label_66)
  (Wrd292.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd292.Obj);
  (Wrd293.Obj) = (Rsp [1]);
  (Wrd294.pObj) = (OBJECT_ADDRESS (Wrd293.Obj));
  (Wrd295.Obj) = ((Wrd294.pObj) [2]);
  (Wrd296.pObj) = (OBJECT_ADDRESS (Wrd295.Obj));
  (Wrd297.Obj) = ((Wrd296.pObj) [0]);
  (* (--Rsp)) = (Wrd297.Obj);
  ((Wrd296.pObj) [0]) = (Wrd292.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd305.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_39_5]));
  (Wrd313.Obj) = ((Wrd305.pObj) [0]);
  (Wrd314.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if ((Wrd314.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  ((Wrd305.pObj) [0]) = (Wrd297.Obj);

DEFLABEL (label_63)
  Rvl = (current_block [OBJECT_39_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_65)
  if ((Wrd313.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_64;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_28])), (Wrd305.pObj), (Wrd297.Obj));

DEFLABEL (label_58)
  goto label_63;

DEFLABEL (label_68)
  if ((Wrd287.Obj) == (Wrd278.Obj))
    goto label_67;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_27])), (Wrd277.pObj), (Wrd278.Obj));

DEFLABEL (label_57)
  goto label_66;

DEFLABEL (label_71)
  if ((Wrd269.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_70;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_39_26])), (Wrd266.pObj));

DEFLABEL (label_56)
  (Wrd265.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_74)
  if ((Wrd261.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_73;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_25])), (Wrd253.pObj), (Wrd245.Obj));

DEFLABEL (label_55)
  goto label_72;

DEFLABEL (label_77)
  if ((Wrd235.Obj) == (Wrd226.Obj))
    goto label_76;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_24])), (Wrd225.pObj), (Wrd226.Obj));

DEFLABEL (label_54)
  goto label_75;

DEFLABEL (label_80)
  if ((Wrd217.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_79;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_39_23])), (Wrd214.pObj));

DEFLABEL (label_53)
  (Wrd213.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_83)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_82;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_22])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_52)
  goto label_81;

DEFLABEL (label_86)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_85;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_21])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_51)
  goto label_84;

DEFLABEL (label_89)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_88;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_39_20])), (Wrd162.pObj));

DEFLABEL (label_50)
  (Wrd161.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_92)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_91;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_19])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_49)
  goto label_90;

DEFLABEL (label_95)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_94;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_18])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_48)
  goto label_93;

DEFLABEL (label_98)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_97;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_39_17])), (Wrd110.pObj));

DEFLABEL (label_47)
  (Wrd109.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_101)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_100;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_16])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_46)
  goto label_99;

DEFLABEL (label_104)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_103;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_15])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_45)
  goto label_102;

DEFLABEL (label_107)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_106;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_39_14])), (Wrd58.pObj));

DEFLABEL (label_44)
  (Wrd57.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_110)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_109;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_13])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_43)
  goto label_108;

DEFLABEL (label_113)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_112;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_39_12])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_42)
  goto label_111;

DEFLABEL (label_116)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_115;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_39_11])), (Wrd6.pObj));

DEFLABEL (label_41)
  (Wrd5.Obj) = Rvl;
  goto label_114;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_13 15
#define LABEL_18 17
#define LABEL_14 19
#define TAG_15 8
#define LABEL_20 21
#define LABEL_16 23
#define LABEL_17 25
#define LABEL_19 27
#define LABEL_22 29
#define LABEL_26 31
#define LABEL_23 33
#define LABEL_24 35
#define LABEL_25 37
#define LABEL_27 39
#define LABEL_32 41
#define LABEL_28 43
#define TAG_29 20
#define LABEL_30 45
#define LABEL_31 47
#define LABEL_33 49
#define LABEL_34 51
#define LABEL_35 53
#define ENVIRONMENT_LABEL_3 95
#define DEBUGGING_LABEL_2 94
#define PURIFICATION_ROOT 93
#define OBJECT_26 92
#define OBJECT_25 91
#define OBJECT_24 90
#define OBJECT_23 89
#define OBJECT_22 88
#define OBJECT_21 87
#define OBJECT_20 86
#define OBJECT_19 85
#define OBJECT_18 84
#define OBJECT_17 83
#define OBJECT_16 82
#define OBJECT_15 81
#define OBJECT_14 80
#define OBJECT_13 79
#define OBJECT_12 78
#define OBJECT_11 77
#define OBJECT_10 76
#define OBJECT_9 75
#define OBJECT_8 74
#define OBJECT_7 73
#define OBJECT_6 72
#define OBJECT_5 71
#define OBJECT_4 70
#define OBJECT_3 69
#define OBJECT_2 68
#define OBJECT_1 67
#define OBJECT_0 66
#define FREE_REFERENCE_1 55
#define FREE_REFERENCE_0 56
#define GLOBAL_EXECUTE_CACHE_21 58
#define GLOBAL_EXECUTE_CACHE_12 60
#define GLOBAL_EXECUTE_CACHE_8 62
#define GLOBAL_EXECUTE_CACHE_5 64
#define FREE_REFERENCES_LABEL_0 54
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
stack_sample_so_184f1d4173a89438 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_33;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_34;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto make_profile_39;

    case 9:
      current_block = (Rpc - LABEL_20);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto continuation_22;

    case 14:
      current_block = (Rpc - LABEL_26);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto continuation_20;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_27;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_23;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto continuation_28;

    case 19:
      current_block = (Rpc - LABEL_32);
      goto label_37;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto make_entry_40;

    case 21:
      current_block = (Rpc - LABEL_30);
      goto continuation_30;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto continuation_29;

    case 23:
      current_block = (Rpc - LABEL_33);
      goto label_42;

    case 24:
      current_block = (Rpc - LABEL_34);
      goto label_43;

    case 25:
      current_block = (Rpc - LABEL_35);
      goto expression_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_32)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_34])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_43)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_42)
  {
    static const short sections [] =
      {
	0,
	3,
	1,
	1,
	2,
	1,
	2,
	2,
	2,
	1,
	1,
	1,
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
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	0,
	1,
	3,
	2,
	2,
	2,
	1,
	3,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 39)
      goto label_41;
    blocks = (current_block [OBJECT_26]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_33])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_41)
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
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_2]);
  (Wrd16.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_51;
  Wrd11 = Wrd15;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_49;
  Wrd11 = Wrd15;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_3]);
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
  (Wrd36.Obj) = (current_block [OBJECT_12]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (current_block [OBJECT_17]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_47;
  Wrd11 = Wrd15;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_45;
  Wrd11 = Wrd15;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_24]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32])), (Wrd12.pObj));

DEFLABEL (label_37)
  (Wrd11.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd12.pObj));

DEFLABEL (label_36)
  (Wrd11.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_34)
  (Wrd11.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_33)
  (Wrd11.Obj) = Rvl;
  goto label_50;

DEFLABEL (make_profile_39)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (make_profile_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_53;
  Wrd9 = Wrd13;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd10.pObj));

DEFLABEL (label_35)
  (Wrd9.Obj) = Rvl;
  goto label_52;

DEFLABEL (make_entry_40)
  CLOSURE_HEADER (LABEL_28);

DEFLABEL (make_entry_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd16.Obj) = (MAKE_OBJECT (0, 8));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (Wrd20.Obj) = (current_block [OBJECT_22]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (Rsp [3]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-9]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_stack_sample_so_184f1d4173a89438 [39] =
  {
    { "stack_sample_so_code_1", 1, stack_sample_so_code_1 },
    { "stack_sample_so_code_2", 16, stack_sample_so_code_2 },
    { "stack_sample_so_code_3", 12, stack_sample_so_code_3 },
    { "stack_sample_so_code_4", 10, stack_sample_so_code_4 },
    { "stack_sample_so_code_5", 7, stack_sample_so_code_5 },
    { "stack_sample_so_code_6", 6, stack_sample_so_code_6 },
    { "stack_sample_so_code_7", 12, stack_sample_so_code_7 },
    { "stack_sample_so_code_8", 1, stack_sample_so_code_8 },
    { "stack_sample_so_code_9", 1, stack_sample_so_code_9 },
    { "stack_sample_so_code_10", 4, stack_sample_so_code_10 },
    { "stack_sample_so_code_11", 1, stack_sample_so_code_11 },
    { "stack_sample_so_code_12", 1, stack_sample_so_code_12 },
    { "stack_sample_so_code_13", 1, stack_sample_so_code_13 },
    { "stack_sample_so_code_14", 1, stack_sample_so_code_14 },
    { "stack_sample_so_code_15", 1, stack_sample_so_code_15 },
    { "stack_sample_so_code_16", 1, stack_sample_so_code_16 },
    { "stack_sample_so_code_17", 1, stack_sample_so_code_17 },
    { "stack_sample_so_code_18", 1, stack_sample_so_code_18 },
    { "stack_sample_so_code_19", 1, stack_sample_so_code_19 },
    { "stack_sample_so_code_20", 1, stack_sample_so_code_20 },
    { "stack_sample_so_code_21", 1, stack_sample_so_code_21 },
    { "stack_sample_so_code_22", 1, stack_sample_so_code_22 },
    { "stack_sample_so_code_23", 4, stack_sample_so_code_23 },
    { "stack_sample_so_code_24", 9, stack_sample_so_code_24 },
    { "stack_sample_so_code_25", 6, stack_sample_so_code_25 },
    { "stack_sample_so_code_26", 3, stack_sample_so_code_26 },
    { "stack_sample_so_code_27", 2, stack_sample_so_code_27 },
    { "stack_sample_so_code_28", 4, stack_sample_so_code_28 },
    { "stack_sample_so_code_29", 7, stack_sample_so_code_29 },
    { "stack_sample_so_code_30", 10, stack_sample_so_code_30 },
    { "stack_sample_so_code_31", 8, stack_sample_so_code_31 },
    { "stack_sample_so_code_32", 29, stack_sample_so_code_32 },
    { "stack_sample_so_code_33", 23, stack_sample_so_code_33 },
    { "stack_sample_so_code_34", 9, stack_sample_so_code_34 },
    { "stack_sample_so_code_35", 11, stack_sample_so_code_35 },
    { "stack_sample_so_code_36", 5, stack_sample_so_code_36 },
    { "stack_sample_so_code_37", 12, stack_sample_so_code_37 },
    { "stack_sample_so_code_38", 3, stack_sample_so_code_38 },
    { "stack_sample_so_code_39", 21, stack_sample_so_code_39 }
  };

int
decl_stack_sample_so_184f1d4173a89438 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_stack_sample_so_184f1d4173a89438);
  return (0);
}

DECLARE_COMPILED_CODE ("stack-sample.so", 26, decl_stack_sample_so_184f1d4173a89438, stack_sample_so_184f1d4173a89438)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_stack_sample_so_data_184f1d4173a89438 [6481] =
  "\x7e\x4e\xde\x0b\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\x07\x02\x22"
  "\x29\x21\x9f\x2b\xb9\x1d\xb0\x82\x88\x06\x1d\x07\x0d\xba\x0d\xbb"
  "\x25\xb3\x0d\xbc\x24\x28\x0d\x28\x0d\x28\x0d\xbd\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\xbe\x28\x0d\xbf\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x83\x88\x1d\x0d\x0c\x07\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x1c\x28\xb5\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0c\x08\x0c"
  "\x0d\x0d\x1c\x0d\x24\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x85\x88\x07\xb3\xb4\x24\x28\x0d\x1c\x28\x1b\x28\xb7"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x86\x88\x07\x0d\x1c\xb4\x24\x28\x1b\x28\x1b"
  "\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x25\xb4\x1b\x24\x28\xb5\x28"
  "\x0d\x28\xb6\x28\x1b\x28\xb7\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x02\x88\x28\x0d\x23\x22\x29"
  "\x21\x9f\x2b\xbd\x1d\xb0\x02\x88\xc2\xbc\x81\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\xb4\x80\xc1\x1c\x0e\x1c\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x80\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\xb4\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4"
  "\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x83\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x84\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb4\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4"
  "\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb4\x02\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x81\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\xb4\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\xb7\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb4\x81"
  "\x1d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x83\x1b\xb4\x82\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb4\x81\x28\xb7\x28\x1b\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\xbf\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0c\x0c\x07\x80\xb4\x81\x0d\x1c\x0d\x1c\x0d\x24\x28\x0d\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x85\x86\x0f\x84\xb4\x02\x0c\x0f\x81"
  "\x0c\x0c\x0d\xbc\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0f\x80\x0d\x0d\x24\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x1d\x0d\x24\x28\x0d"
  "\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x0c\x0c\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0c\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x85\x83\x02\x07\x0d\xb8\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x25\xb0\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x17\x1c\x88\x1b\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b\xb7\x1b\x1b\x1b"
  "\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x17\x80\x1b\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x1b\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x1c\x0d\x99"
  "\x1b\x2a\x1b\x0c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x8e\x1b\x2a\x1b"
  "\x2a\x81\x1b\x0d\x1b\x2a\xc3\x0d\x1c\x0c\x0d\x08\x88\x08\xb5\x2a"
  "\x1b\x1b\x1b\x1b\x1b\x1b\xb4\x1b\x0d\xb3\x1b\x17\xb6\x2a\x1b\x2a"
  "\x06\x1b\x2a\x1b\x2a\x1b\x2a\x07\x06\x1b\x2a\xb2\xb1\x2a\x17\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x24\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x5b\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73\x74\x61"
  "\x63\x6b\x2d\x73\x61\x6d\x70\x6c\x65\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f"
  "\x29\x1b\x04\x83\x04\x03\x02\x02\x0e\x75\x6e\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x64\x15\x65\x76\x65\x6e\x74\x2d\x72\x65\x74"
  "\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x02\x29\x73\x74\x61"
  "\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2d\x74\x79\x70\x65\x2f\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65\x74\x75\x72\x6e\x2d\x61\x64"
  "\x64\x72\x65\x73\x73\x03\x02\x14\x62\x6c\x6f\x63\x6b\x2d\x74\x68"
  "\x72\x65\x61\x64\x2d\x65\x76\x65\x6e\x74\x73\x02\x0f\x63\x75\x72"
  "\x72\x65\x6e\x74\x2d\x74\x68\x72\x65\x61\x64\x03\x1f\x63\x61\x6c"
  "\x6c\x2d\x77\x69\x74\x68\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x04\x14\x73\x69\x67"
  "\x6e\x61\x6c\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x76\x65\x6e\x74"
  "\x02\x17\x73\x75\x73\x70\x65\x6e\x64\x2d\x63\x75\x72\x72\x65\x6e"
  "\x74\x2d\x74\x68\x72\x65\x61\x64\x02\x16\x75\x6e\x62\x6c\x6f\x63"
  "\x6b\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x76\x65\x6e\x74\x73\x03"
  "\x1e\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2f\x66\x69"
  "\x72\x73\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x03\x1b"
  "\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x72\x65\x74\x75"
  "\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x03\x11\x73\x74\x61\x63"
  "\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x74\x79\x70\x65\x09\x03\x1c\x73"
  "\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x6e\x65\x78\x74\x2d"
  "\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x0a\x0b\x2b\x22\x81\x87"
  "\x02\x2a\x20\x81\x85\x02\x29\x1e\x81\x85\x02\x28\x1c\x81\x83\x02"
  "\x27\x1a\x81\x83\x02\x26\x18\x81\x85\x02\x25\x16\x81\x83\x02\x24"
  "\x14\x81\x85\x02\x23\x12\x83\x04\x22\x10\x81\x83\x02\x21\x0e\x81"
  "\x83\x02\x20\x0c\x81\x87\x02\x1f\x0a\x82\x02\x1e\x08\x81\x83\x02"
  "\x1d\x06\x81\x81\x02\x1c\x04\x82\x02\x21\x42\x0b\x02\x02\x06\x61"
  "\x62\x6f\x72\x74\x16\x41\x62\x6f\x72\x74\x20\x73\x74\x61\x63\x6b"
  "\x20\x73\x61\x6d\x70\x6c\x69\x6e\x67\x2e\x05\x14\x77\x69\x74\x68"
  "\x2d\x73\x69\x6d\x70\x6c\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x0c"
  "\x05\x0d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x77\x69\x6e\x64\x04\x15"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x74\x69\x6d\x65\x72\x2d\x65"
  "\x76\x65\x6e\x74\x03\x17\x64\x65\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x2d\x74\x69\x6d\x65\x72\x2d\x65\x76\x65\x6e\x74\x03\x21\x77\x69"
  "\x74\x68\x2d\x73\x74\x61\x63\x6b\x2d\x73\x61\x6d\x70\x6c\x69\x6e"
  "\x67\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x0d\x03"
  "\x04\x18\x63\x61\x72\x65\x66\x75\x6c\x6c\x79\x2d\x72\x65\x63\x6f"
  "\x72\x64\x2d\x73\x61\x6d\x70\x6c\x65\x0e\x08\x37\x1a\x81\x85\x02"
  "\x36\x18\x81\x85\x02\x35\x16\x81\x83\x02\x34\x14\x81\x83\x02\x33"
  "\x12\x81\x83\x02\x32\x10\x81\x83\x02\x31\x0e\x81\x85\x02\x30\x0c"
  "\x81\x83\x02\x2f\x0a\x81\x83\x02\x2e\x08\x81\x83\x02\x2d\x06\x81"
  "\x8d\x02\x2c\x04\x85\x08\x19\x2f\x0f\x02\x19\x45\x72\x72\x6f\x72"
  "\x20\x69\x6e\x20\x73\x74\x61\x63\x6b\x20\x73\x61\x6d\x70\x6c\x65"
  "\x72\x3a\x20\x13\x49\x67\x6e\x6f\x72\x65\x20\x74\x68\x65\x20\x73"
  "\x61\x6d\x70\x6c\x65\x2e\x09\x63\x6f\x6e\x74\x69\x6e\x75\x65\x25"
  "\x73\x74\x61\x63\x6b\x2d\x73\x61\x6d\x70\x6c\x65\x72\x3a\x64\x65"
  "\x62\x75\x67\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x65\x72\x72"
  "\x6f\x72\x73\x3f\x10\x15\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x3a\x65\x72\x72\x6f\x72\x03\x05\x0c\x02\x14\x66"
  "\x69\x72\x73\x74\x2d\x62\x6f\x75\x6e\x64\x2d\x72\x65\x73\x74\x61"
  "\x72\x74\x05\x17\x62\x69\x6e\x64\x2d\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72\x04\x0e\x72\x65\x63\x6f"
  "\x72\x64\x2d\x73\x61\x6d\x70\x6c\x65\x0c\x03\x18\x77\x72\x69\x74"
  "\x65\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x6c"
  "\x69\x6e\x65\x11\x03\x0f\x69\x6e\x76\x6f\x6b\x65\x2d\x72\x65\x73"
  "\x74\x61\x72\x74\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\x12\x04\x17\x77\x72\x69\x74\x65\x2d\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x2d\x72\x65\x70\x6f\x72\x74\x09\x41\x16\x81\x85"
  "\x02\x40\x14\x81\x85\x02\x3f\x12\x81\x85\x02\x3e\x10\x81\x85\x02"
  "\x3d\x0e\x81\x83\x02\x3c\x0c\x81\x89\x02\x3b\x0a\x81\x87\x02\x3a"
  "\x08\x81\x83\x02\x39\x06\x81\x83\x02\x38\x04\x84\x06\x15\x30\x13"
  "\x02\x03\x03\x19\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65\x74"
  "\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x3f\x14\x03\x09\x03"
  "\x04\x48\x10\x81\x87\x02\x47\x0e\x81\x85\x02\x46\x0c\x81\x87\x02"
  "\x45\x0a\x81\x85\x02\x44\x08\x81\x85\x02\x43\x06\x81\x83\x02\x42"
  "\x04\x83\x04\x0f\x1d\x15\x02\x1e\x73\x74\x61\x63\x6b\x2d\x73\x61"
  "\x6d\x70\x6c\x69\x6e\x67\x2d\x72\x65\x74\x75\x72\x6e\x2d\x61\x64"
  "\x64\x72\x65\x73\x73\x16\x03\x03\x14\x03\x09\x03\x04\x4e\x0e\x81"
  "\x85\x02\x4d\x0c\x81\x87\x02\x4c\x0a\x81\x85\x02\x4b\x08\x81\x85"
  "\x02\x4a\x06\x81\x83\x02\x49\x04\x83\x04\x0d\x1b\x14\x02\x08\x02"
  "\x16\x02\x16\x03\x03\x03\x13\x69\x64\x65\x6e\x74\x69\x74\x79\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x03\x03\x09\x03\x05\x13\x73"
  "\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e"
  "\x64\x09\x07\x5a\x1a\x81\x83\x02\x59\x18\x81\x85\x02\x58\x16\x81"
  "\x83\x02\x57\x14\x81\x83\x02\x56\x12\x81\x83\x02\x55\x10\x81\x87"
  "\x02\x54\x0e\x81\x89\x02\x53\x0c\x81\x87\x02\x52\x0a\x81\x85\x02"
  "\x51\x08\x81\x85\x02\x50\x06\x81\x83\x02\x4f\x04\x83\x04\x19\x2f"
  "\x02\x09\x02\x1a\x6d\x61\x6b\x65\x2d\x73\x74\x72\x6f\x6e\x67\x2d"
  "\x65\x71\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x02\x5b\x04"
  "\x82\x02\x03\x02\x0a\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65"
  "\x66\x5c\x04\x83\x04\x03\x17\x02\x0b\x0f\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x6c\x65\x6e\x67\x74\x68\x18\x07\x2e\x74\x61\x67\x2e\x31"
  "\x19\x02\x60\x0a\x81\x85\x02\x5f\x08\x81\x83\x02\x5e\x06\x81\x83"
  "\x02\x5d\x04\x83\x04\x09\x12\x1a\x02\x0c\x61\x04\x82\x02\x03\x1b"
  "\x02\x0d\x62\x04\x82\x02\x03\x1c\x02\x0e\x63\x04\x83\x04\x03\x1d"
  "\x02\x0f\x64\x04\x83\x04\x03\x1e\x02\x10\x65\x04\x83\x04\x03\x1f"
  "\x02\x11\x66\x04\x83\x04\x03\x20\x02\x12\x67\x04\x83\x04\x03\x21"
  "\x02\x13\x68\x04\x83\x04\x03\x22\x02\x14\x08\x69\x04\x83\x04\x03"
  "\x23\x02\x15\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21"
  "\x24\x02\x6a\x04\x84\x06\x03\x25\x02\x16\x24\x02\x6b\x04\x84\x06"
  "\x03\x26\x02\x17\x24\x02\x6c\x04\x84\x06\x03\x27\x02\x18\x18\x07"
  "\x2e\x74\x61\x67\x2e\x32\x18\x02\x70\x0a\x81\x85\x02\x6f\x08\x81"
  "\x83\x02\x6e\x06\x81\x83\x02\x6d\x04\x83\x04\x09\x12\x28\x02\x19"
  "\x02\x03\x1a\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d"
  "\x3e\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x02\x10\x72\x65"
  "\x61\x6c\x2d\x74\x69\x6d\x65\x2d\x63\x6c\x6f\x63\x6b\x03\x16\x66"
  "\x69\x6e\x64\x2d\x66\x69\x72\x73\x74\x2d\x73\x75\x62\x70\x72\x6f"
  "\x62\x6c\x65\x6d\x29\x05\x0f\x72\x65\x63\x6f\x72\x64\x2d\x73\x61"
  "\x6d\x70\x6c\x65\x64\x2a\x03\x15\x66\x69\x6e\x64\x2d\x6e\x65\x78"
  "\x74\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2b\x05\x0f\x72"
  "\x65\x63\x6f\x72\x64\x2d\x77\x61\x69\x74\x69\x6e\x67\x2c\x03\x1c"
  "\x73\x74\x61\x63\x6b\x2d\x73\x61\x6d\x70\x6c\x69\x6e\x67\x2d\x73"
  "\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x3f\x2d\x08\x79\x14\x81"
  "\x8b\x02\x78\x12\x81\x8b\x02\x77\x10\x81\x8b\x02\x76\x0e\x81\x8b"
  "\x02\x75\x0c\x81\x89\x02\x74\x0a\x81\x87\x02\x73\x08\x81\x87\x02"
  "\x72\x06\x81\x85\x02\x71\x04\x84\x06\x13\x26\x2e\x02\x1a\x03\x21"
  "\x73\x74\x61\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x73\x6b\x69\x70"
  "\x2d\x6e\x6f\x6e\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x73"
  "\x03\x25\x73\x74\x61\x63\x6b\x2d\x73\x61\x6d\x70\x6c\x65\x72\x2d"
  "\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x73\x74\x61\x63\x6b\x2d"
  "\x66\x72\x61\x6d\x65\x3f\x2f\x03\x0a\x03\x2b\x03\x10\x66\x69\x6e"
  "\x64\x2d\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x30\x06\x7f\x0e"
  "\x81\x85\x02\x7e\x0c\x81\x85\x02\x7d\x0a\x81\x85\x02\x7c\x08\x81"
  "\x85\x02\x7b\x06\x81\x83\x02\x7a\x04\x83\x04\x0d\x1b\x31\x02\x1b"
  "\x03\x03\x2b\x03\x10\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e"
  "\x74\x72\x79\x3f\x32\x04\x82\x01\x08\x81\x85\x02\x81\x01\x06\x81"
  "\x83\x02\x80\x01\x04\x83\x04\x07\x11\x33\x02\x1c\x03\x0a\x03\x30"
  "\x03\x84\x01\x06\x81\x83\x02\x83\x01\x04\x83\x04\x05\x0d\x0a\x02"
  "\x1d\x24\x02\x04\x0d\x69\x6e\x74\x65\x72\x6e\x2d\x65\x6e\x74\x72"
  "\x79\x34\x02\x88\x01\x0a\x81\x87\x02\x87\x01\x08\x81\x87\x02\x86"
  "\x01\x06\x81\x87\x02\x85\x01\x04\x85\x08\x09\x13\x35\x02\x1e\x02"
  "\x24\x04\x34\x04\x05\x65\x71\x76\x3f\x03\x8f\x01\x10\x81\x8b\x02"
  "\x8e\x01\x0e\x81\x87\x02\x8d\x01\x0c\x81\x89\x02\x8c\x01\x0a\x81"
  "\x89\x02\x8b\x01\x08\x81\x89\x02\x8a\x01\x06\x81\x89\x02\x89\x01"
  "\x04\x85\x08\x0f\x1c\x24\x02\x1f\x03\x03\x32\x03\x12\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65\x3f\x03\x18"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65"
  "\x2d\x3e\x65\x6e\x74\x72\x79\x05\x13\x68\x61\x73\x68\x2d\x74\x61"
  "\x62\x6c\x65\x2f\x69\x6e\x74\x65\x72\x6e\x21\x03\x1b\x73\x74\x61"
  "\x63\x6b\x2d\x66\x72\x61\x6d\x65\x2f\x64\x65\x62\x75\x67\x67\x69"
  "\x6e\x67\x2d\x69\x6e\x66\x6f\x03\x1b\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x2d\x61\x6e\x63\x65\x73\x74\x72\x79\x2d\x6e\x61"
  "\x6d\x65\x73\x06\x0b\x6d\x61\x6b\x65\x2d\x65\x6e\x74\x72\x79\x36"
  "\x09\x99\x01\x16\x81\x89\x02\x98\x01\x14\x81\x89\x02\x97\x01\x12"
  "\x81\x83\x02\x96\x01\x10\x81\x83\x02\x95\x01\x0e\x81\x89\x02\x94"
  "\x01\x0c\x81\x87\x02\x93\x01\x0a\x81\x89\x02\x92\x01\x08\x81\x87"
  "\x02\x91\x01\x06\x81\x85\x02\x90\x01\x04\x84\x06\x15\x2b\x37\x02"
  "\x20\x0f\x53\x74\x61\x63\x6b\x2d\x73\x61\x6d\x70\x6c\x69\x6e\x67"
  "\x04\x12\x77\x69\x74\x68\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x02\x0d\x6d\x61\x6b\x65\x2d\x70\x72\x6f\x66\x69\x6c"
  "\x65\x38\x04\x12\x03\x11\x05\x18\x72\x75\x6e\x2d\x77\x69\x74\x68"
  "\x2d\x73\x74\x61\x63\x6b\x2d\x73\x61\x6d\x70\x6c\x69\x6e\x67\x11"
  "\x04\x10\x64\x69\x73\x70\x6c\x61\x79\x2d\x70\x72\x6f\x66\x69\x6c"
  "\x65\x39\x07\xa1\x01\x12\x81\x85\x02\xa0\x01\x10\x81\x85\x02\x9f"
  "\x01\x0e\x81\x85\x02\x9e\x01\x0c\x84\x06\x9d\x01\x0a\x83\x04\x9c"
  "\x01\x08\x81\x83\x02\x9b\x01\x06\x81\x85\x02\x9a\x01\x04\x84\x06"
  "\x11\x22\x3a\x02\x21\x08\x53\x61\x6d\x70\x6c\x65\x64\x08\x57\x61"
  "\x69\x74\x69\x6e\x67\x09\x20\x73\x61\x6d\x70\x6c\x65\x73\x14\x65"
  "\x6e\x74\x72\x79\x2e\x73\x61\x6d\x70\x6c\x65\x64\x2d\x63\x6f\x75"
  "\x6e\x74\x3b\x14\x65\x6e\x74\x72\x79\x2e\x77\x61\x69\x74\x69\x6e"
  "\x67\x2d\x63\x6f\x75\x6e\x74\x3c\x02\x2b\x04\x03\x16\x68\x61\x73"
  "\x68\x2d\x74\x61\x62\x6c\x65\x2f\x64\x61\x74\x75\x6d\x2d\x6c\x69"
  "\x73\x74\x04\x16\x64\x65\x6c\x65\x74\x65\x2d\x6d\x61\x74\x63\x68"
  "\x69\x6e\x67\x2d\x69\x74\x65\x6d\x73\x04\x04\x6d\x61\x70\x3d\x04"
  "\x05\x73\x6f\x72\x74\x05\x07\x72\x65\x64\x75\x63\x65\x3e\x04\x06"
  "\x77\x72\x69\x74\x65\x3f\x04\x08\x64\x69\x73\x70\x6c\x61\x79\x40"
  "\x03\x08\x6e\x65\x77\x6c\x69\x6e\x65\x41\x07\x18\x64\x69\x73\x70"
  "\x6c\x61\x79\x2d\x70\x72\x6f\x66\x69\x6c\x65\x2d\x65\x6e\x74\x72"
  "\x69\x65\x73\x42\x0a\xbe\x01\x3c\xff\xff\x03\xbd\x01\x3a\x81\x8f"
  "\x02\xbc\x01\x38\x81\x8d\x02\xbb\x01\x36\x81\x91\x02\xba\x01\x34"
  "\x81\x8d\x02\xb9\x01\x32\x81\x8d\x02\xb8\x01\x30\x81\x8d\x02\xb7"
  "\x01\x2e\x81\x87\x02\xb6\x01\x2c\x81\x91\x02\xb5\x01\x2a\x81\x8d"
  "\x02\xb4\x01\x28\x81\x8b\x02\xb3\x01\x26\x81\x85\x02\xb2\x01\x24"
  "\x81\x87\x02\xb1\x01\x22\x81\x8f\x02\xb0\x01\x20\x81\x8b\x02\xaf"
  "\x01\x1e\x81\x91\x02\xae\x01\x1c\x81\x89\x02\xad\x01\x1a\x81\x85"
  "\x02\xac\x01\x18\x81\x87\x02\xab\x01\x16\x81\x87\x02\xaa\x01\x14"
  "\x81\x8f\x02\xa9\x01\x12\x81\x89\x02\xa8\x01\x10\x81\x85\x02\xa7"
  "\x01\x0e\x81\x8d\x02\xa6\x01\x0c\x81\x87\x02\xa5\x01\x0a\x81\x8b"
  "\x02\xa4\x01\x08\x81\x85\x02\xa3\x01\x06\x81\x87\x02\xa2\x01\x04"
  "\x84\x06\x3b\x5c\x43\x02\x22\x01\x3b\x08\x05\x20\x69\x6e\x20\x01"
  "\x74\x08\x20\x73\x61\x6d\x70\x6c\x65\x05\x2a\x2a\x2a\x20\x20\x73"
  "\x74\x61\x63\x6b\x2d\x73\x61\x6d\x70\x6c\x65\x72\x3a\x73\x68\x6f"
  "\x77\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x73\x3f\x02\x03"
  "\x41\x04\x40\x04\x14\x65\x6e\x74\x72\x79\x2d\x63\x6f\x75\x6e\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\x73\x40\x04\x12\x05\x09\x66\x6f\x72"
  "\x2d\x65\x61\x63\x68\x04\x0b\x77\x72\x69\x74\x65\x2d\x63\x68\x61"
  "\x72\x04\x17\x73\x68\x6f\x77\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x2d\x6e\x61\x6d\x65\x73\x44\x04\x3f\x05\x10\x73\x68"
  "\x6f\x77\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x0a\xd5"
  "\x01\x30\x81\x8d\x02\xd4\x01\x2e\x81\x8b\x02\xd3\x01\x2c\x81\x87"
  "\x02\xd2\x01\x2a\x81\x87\x02\xd1\x01\x28\x81\x87\x02\xd0\x01\x26"
  "\x81\x87\x02\xcf\x01\x24\x81\x87\x02\xce\x01\x22\x81\x83\x02\xcd"
  "\x01\x20\x81\x89\x02\xcc\x01\x1e\x81\x87\x02\xcb\x01\x1c\x81\x87"
  "\x02\xca\x01\x1a\x81\x87\x02\xc9\x01\x18\x81\x87\x02\xc8\x01\x16"
  "\x81\x87\x02\xc7\x01\x14\x81\x87\x02\xc6\x01\x12\x81\x8b\x02\xc5"
  "\x01\x10\x81\x87\x02\xc4\x01\x0e\x81\x8b\x02\xc3\x01\x0c\x81\x8b"
  "\x02\xc2\x01\x0a\x81\x8b\x02\xc1\x01\x08\x81\x8b\x02\xc0\x01\x06"
  "\x81\x8b\x02\xbf\x01\x04\x87\x0c\x2f\x52\x45\x02\x23\x01\x21\x0e"
  "\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x04\x6d\x61"
  "\x78\x03\x04\x3d\x05\x3e\x03\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e"
  "\x73\x74\x72\x69\x6e\x67\x05\x10\x73\x74\x72\x69\x6e\x67\x2d\x70"
  "\x61\x64\x2d\x6c\x65\x66\x74\x05\xde\x01\x14\x81\x85\x02\xdd\x01"
  "\x12\x81\x85\x02\xdc\x01\x10\x81\x89\x02\xdb\x01\x0e\x81\x85\x02"
  "\xda\x01\x0c\x81\x83\x02\xd9\x01\x0a\x81\x85\x02\xd8\x01\x08\x81"
  "\x89\x02\xd7\x01\x06\x81\x85\x02\xd6\x01\x04\x84\x06\x13\x24\x3e"
  "\x02\x24\x03\x0d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3f"
  "\x03\x15\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x3e\x70"
  "\x61\x63\x6b\x61\x67\x65\x03\x18\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x2d\x68\x61\x73\x2d\x70\x61\x72\x65\x6e\x74\x3f\x03"
  "\x0d\x70\x61\x63\x6b\x61\x67\x65\x2f\x6e\x61\x6d\x65\x03\x13\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x70\x61\x72\x65\x6e"
  "\x74\x03\x1b\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d\x65\x03\x1d\x73"
  "\x70\x65\x63\x69\x61\x6c\x2d\x66\x6f\x72\x6d\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d\x65\x3f\x03\x07\x69\x6e\x74"
  "\x65\x72\x6e\x09\xe9\x01\x18\x81\x85\x02\xe8\x01\x16\x81\x87\x02"
  "\xe7\x01\x14\xfd\xff\x03\xe6\x01\x12\xfd\xff\x03\xe5\x01\x10\xfd"
  "\xff\x03\xe4\x01\x0e\xfd\xff\x03\xe3\x01\x0c\xfd\xff\x03\xe2\x01"
  "\x0a\x81\x83\x02\xe1\x01\x08\x81\x83\x02\xe0\x01\x06\x81\x83\x02"
  "\xdf\x01\x04\x83\x04\x17\x2c\x46\x02\x25\x03\x2c\x20\x01\x02\x10"
  "\x77\x72\x69\x74\x65\x2d\x74\x6f\x2d\x73\x74\x72\x69\x6e\x67\x02"
  "\x03\x08\x72\x65\x76\x65\x72\x73\x65\x04\x12\x06\x18\x64\x65\x63"
  "\x6f\x72\x61\x74\x65\x64\x2d\x73\x74\x72\x69\x6e\x67\x2d\x61\x70"
  "\x70\x65\x6e\x64\x04\x3d\x05\xee\x01\x0c\x81\x8b\x02\xed\x01\x0a"
  "\x81\x89\x02\xec\x01\x08\x81\x87\x02\xeb\x01\x06\x81\x85\x02\xea"
  "\x01\x04\x84\x06\x0b\x1c\x3d\x02\x26\x04\x23\x23\x23\x0c\x20\x66"
  "\x6f\x72\x20\x23\x23\x23\x20\x69\x6e\x0c\x20\x65\x76\x61\x6c\x75"
  "\x61\x74\x69\x6e\x67\x04\x12\x03\x1f\x69\x6e\x76\x61\x6c\x69\x64"
  "\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x64\x65\x73\x63"
  "\x72\x69\x70\x74\x69\x6f\x6e\x12\x03\x25\x64\x65\x62\x75\x67\x67"
  "\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2f\x75\x6e\x64\x65\x66\x69\x6e"
  "\x65\x64\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x47\x03"
  "\x41\x03\x23\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66"
  "\x6f\x2f\x75\x6e\x6b\x6e\x6f\x77\x6e\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x3f\x04\x0b\x70\x72\x6f\x66\x69\x6c\x65\x2d\x70"
  "\x70\x41\x04\x1c\x75\x6e\x73\x79\x6e\x74\x61\x78\x2d\x77\x69\x74"
  "\x68\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x69\x6f\x6e\x73\x08"
  "\xfa\x01\x1a\x81\x89\x02\xf9\x01\x18\x81\x89\x02\xf8\x01\x16\x81"
  "\x89\x02\xf7\x01\x14\x81\x89\x02\xf6\x01\x12\x81\x89\x02\xf5\x01"
  "\x10\x81\x89\x02\xf4\x01\x0e\x81\x89\x02\xf3\x01\x0c\x81\x89\x02"
  "\xf2\x01\x0a\x81\x89\x02\xf1\x01\x08\x81\x87\x02\xf0\x01\x06\x81"
  "\x87\x02\xef\x01\x04\x85\x08\x19\x2f\x48\x02\x27\x16\x20\x75\x6e"
  "\x64\x65\x66\x69\x6e\x65\x64\x20\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x0f\x20\x63\x6f\x6d\x70\x69\x6c\x65\x64\x20\x63\x6f\x64"
  "\x65\x03\x1e\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66"
  "\x6f\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x3f"
  "\x03\x47\x03\xfd\x01\x08\x81\x83\x02\xfc\x01\x06\x81\x83\x02\xfb"
  "\x01\x04\x83\x04\x07\x11\x47\x02\x28\x02\x29\x1e\x2a\x75\x6e\x70"
  "\x61\x72\x73\x65\x72\x2d\x6c\x69\x73\x74\x2d\x62\x72\x65\x61\x64"
  "\x74\x68\x2d\x6c\x69\x6d\x69\x74\x2a\x1c\x2a\x75\x6e\x70\x61\x72"
  "\x73\x65\x72\x2d\x6c\x69\x73\x74\x2d\x64\x65\x70\x74\x68\x2d\x6c"
  "\x69\x6d\x69\x74\x2a\x49\x1f\x2a\x75\x6e\x70\x61\x72\x73\x65\x72"
  "\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x2d\x6c"
  "\x69\x6d\x69\x74\x2a\x4a\x1e\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x73\x2d\x62\x79\x2d\x6e\x61"
  "\x6d\x65\x3f\x2a\x4b\x1a\x2a\x70\x70\x2d\x73\x61\x76\x65\x2d\x76"
  "\x65\x72\x74\x69\x63\x61\x6c\x2d\x73\x70\x61\x63\x65\x3f\x2a\x4c"
  "\x16\x2a\x70\x70\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x61\x73\x2d"
  "\x63\x6f\x64\x65\x3f\x2a\x4d\x07\x49\x4a\x4b\x4c\x4d\x07\x05\x09"
  "\x04\x03\x70\x70\x03\x92\x02\x2c\x81\x83\x02\x91\x02\x2a\x81\x85"
  "\x02\x90\x02\x28\x81\x83\x02\x8f\x02\x26\x81\x83\x02\x8e\x02\x24"
  "\x81\x85\x02\x8d\x02\x22\x81\x83\x02\x8c\x02\x20\x81\x83\x02\x8b"
  "\x02\x1e\x81\x85\x02\x8a\x02\x1c\x81\x83\x02\x89\x02\x1a\x81\x83"
  "\x02\x88\x02\x18\x81\x85\x02\x87\x02\x16\x81\x83\x02\x86\x02\x14"
  "\x81\x83\x02\x85\x02\x12\x81\x85\x02\x84\x02\x10\x81\x83\x02\x83"
  "\x02\x0e\x81\x83\x02\x82\x02\x0c\x81\x85\x02\x81\x02\x0a\x81\x83"
  "\x02\x80\x02\x08\x81\x83\x02\xff\x01\x06\x81\x83\x02\xfe\x01\x04"
  "\x84\x06\x2b\x46\x4d\x28\x4c\x4c\x18\x4d\x04\x47\x04\x48\x04\x3d"
  "\x04\x46\x04\x3e\x04\x45\x04\x43\x04\x3a\x04\x37\x04\x24\x04\x35"
  "\x04\x0a\x04\x33\x04\x31\x04\x2e\x04\x28\x04\x12\x41\x12\x3f\x44"
  "\x40\x42\x39\x14\x77\x69\x74\x68\x2d\x73\x74\x61\x63\x6b\x2d\x73"
  "\x61\x6d\x70\x6c\x69\x6e\x67\x34\x2c\x2a\x2b\x30\x29\x0c\x07\x65"
  "\x6e\x74\x72\x79\x3f\x12\x36\x16\x73\x65\x74\x2d\x65\x6e\x74\x72"
  "\x79\x2e\x74\x69\x6d\x65\x2d\x73\x74\x61\x6d\x70\x21\x19\x73\x65"
  "\x74\x2d\x65\x6e\x74\x72\x79\x2e\x77\x61\x69\x74\x69\x6e\x67\x2d"
  "\x63\x6f\x75\x6e\x74\x21\x19\x73\x65\x74\x2d\x65\x6e\x74\x72\x79"
  "\x2e\x73\x61\x6d\x70\x6c\x65\x64\x2d\x63\x6f\x75\x6e\x74\x21\x18"
  "\x65\x6e\x74\x72\x79\x2e\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x2d\x6e\x61\x6d\x65\x73\x14\x65\x6e\x74\x72\x79\x2e\x73\x75"
  "\x62\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x11\x65\x6e\x74\x72"
  "\x79\x2e\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x15\x65\x6e\x74"
  "\x72\x79\x2e\x72\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73"
  "\x73\x11\x65\x6e\x74\x72\x79\x2e\x74\x69\x6d\x65\x2d\x73\x74\x61"
  "\x6d\x70\x3c\x3b\x0b\x27\x04\x26\x04\x25\x04\x23\x04\x22\x04\x21"
  "\x04\x20\x04\x1f\x04\x1e\x04\x1d\x04\x0b\x0a\x72\x74\x64\x3a\x65"
  "\x6e\x74\x72\x79\x4d\x09\x70\x72\x6f\x66\x69\x6c\x65\x3f\x1a\x04"
  "\x19\x06\x65\x6e\x74\x72\x79\x0e\x73\x61\x6d\x70\x6c\x65\x64\x2d"
  "\x63\x6f\x75\x6e\x74\x0e\x77\x61\x69\x74\x69\x6e\x67\x2d\x63\x6f"
  "\x75\x6e\x74\x0b\x74\x69\x6d\x65\x2d\x73\x74\x61\x6d\x70\x0f\x72"
  "\x65\x74\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x0b\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x0e\x73\x75\x62\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x12\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x2d\x6e\x61\x6d\x65\x73\x1b\x04\x1c\x04\x38\x10\x70\x72"
  "\x6f\x66\x69\x6c\x65\x2e\x65\x6e\x74\x72\x69\x65\x73\x17\x04\x11"
  "\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x0c\x72\x74\x64\x3a\x70\x72\x6f\x66\x69\x6c\x65\x4c\x08\x70\x72"
  "\x6f\x66\x69\x6c\x65\x08\x65\x6e\x74\x72\x69\x65\x73\x04\x0d\x2d"
  "\x16\x2f\x0e\x11\x10\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65"
  "\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x32\x0c\x04\x14\x04\x15\x04"
  "\x13\x04\x0f\x04\x0b\x04\x04\x0c\x05\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x06\x11\x6d\x61\x6b\x65\x2d"
  "\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63"
  "\x68\x2d\x74\x61\x67\x04\x23\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65"
  "\x2d\x62\x79\x2d\x69\x6e\x64\x65\x78\x05\x4c\x4d\x03\x1a\x36\x80"
  "\x80\x04\x19\x34\x81\x81\x02\x18\x32\x81\x81\x02\x17\x30\x81\x85"
  "\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x8b\x02\x14\x2a\x81\x87\x02"
  "\x13\x28\x81\x83\x02\x12\x26\x81\x85\x02\x11\x24\x81\x83\x02\x10"
  "\x22\x81\x85\x02\x0f\x20\x81\x87\x02\x0e\x1e\x81\x83\x02\x0d\x1c"
  "\x81\x83\x02\x0c\x1a\x81\x85\x02\x0b\x18\x81\x83\x02\x0a\x16\x81"
  "\x87\x02\x09\x14\x81\x83\x02\x08\x12\x81\x87\x02\x07\x10\x81\x83"
  "\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x85\x02"
  "\x03\x08\x81\x87\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x35"
  "\x60";

SCHEME_OBJECT *
stack_sample_so_data_184f1d4173a89438 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_stack_sample_so_data_184f1d4173a89438 [0]))), (sizeof (prog_stack_sample_so_data_184f1d4173a89438)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_35]));
}

DECLARE_COMPILED_DATA_NS ("stack-sample.so", stack_sample_so_data_184f1d4173a89438)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("stack-sample.so", "20577846331e86a8")
