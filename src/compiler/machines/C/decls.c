/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:18-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_7 7
#define LABEL_1_5 9
#define ENVIRONMENT_LABEL_1_3 19
#define DEBUGGING_LABEL_1_2 18
#define EXECUTE_CACHE_1_9 11
#define EXECUTE_CACHE_1_8 13
#define FREE_REFERENCE_1_1 16
#define FREE_REFERENCE_1_0 17
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_1;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_6)
DEFLABEL (initialize_packageB_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_8;
  Wrd14 = Wrd18;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd15.pObj));

DEFLABEL (label_4)
  (Wrd14.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_8 11
#define ENVIRONMENT_LABEL_2_3 20
#define DEBUGGING_LABEL_2_2 19
#define OBJECT_2_1 18
#define OBJECT_2_0 17
#define FREE_ASSIGNMENT_2_3 13
#define FREE_ASSIGNMENT_2_2 14
#define FREE_ASSIGNMENT_2_1 15
#define FREE_ASSIGNMENT_2_0 16
#define FREE_REFERENCES_LABEL_2_0 12
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_2_4);
      goto reset_source_nodesB_0;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_source_nodesB_7)
DEFLABEL (reset_source_nodesB_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_19;

DEFLABEL (label_18)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_17)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_16;

DEFLABEL (label_15)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_14)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_2]));
  (Wrd32.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd41.Obj) = ((Wrd31.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd31.pObj) [0]) = (Wrd32.Obj);

DEFLABEL (label_11)
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_3]));
  (Wrd46.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd55.Obj) = ((Wrd45.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd45.pObj) [0]) = (Wrd46.Obj);

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_2_1]);
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd55.Obj) == (Wrd46.Obj))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_8])), (Wrd45.pObj), (Wrd46.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd41.Obj) == (Wrd32.Obj))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_7])), (Wrd31.pObj), (Wrd32.Obj));

DEFLABEL (label_4)
  goto label_11;

DEFLABEL (label_16)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_15;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_3)
  goto label_14;

DEFLABEL (label_19)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_18;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_17;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 14
#define DEBUGGING_LABEL_3_2 13
#define OBJECT_3_1 12
#define OBJECT_3_0 11
#define EXECUTE_CACHE_3_6 7
#define FREE_REFERENCE_3_0 10
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_3_4);
      goto maybe_setup_source_nodesB_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_setup_source_nodesB_5)
DEFLABEL (maybe_setup_source_nodesB_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  if ((Wrd6.Obj) == (current_block [OBJECT_3_0]))
    goto label_6;
  Rvl = (current_block [OBJECT_3_1]);
  goto pop_return;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_8 5
#define LABEL_4_5 7
#define LABEL_4_10 9
#define LABEL_4_6 11
#define LABEL_4_17 13
#define LABEL_4_11 15
#define LABEL_4_19 17
#define LABEL_4_21 19
#define LABEL_4_13 21
#define TAG_4_14 9
#define LABEL_4_15 23
#define LABEL_4_16 25
#define LABEL_4_20 27
#define LABEL_4_27 29
#define LABEL_4_22 31
#define LABEL_4_24 33
#define LABEL_4_28 35
#define LABEL_4_30 37
#define LABEL_4_35 39
#define LABEL_4_32 41
#define LABEL_4_34 43
#define ENVIRONMENT_LABEL_4_3 82
#define DEBUGGING_LABEL_4_2 81
#define OBJECT_4_3 80
#define OBJECT_4_2 79
#define OBJECT_4_1 78
#define OBJECT_4_0 77
#define EXECUTE_CACHE_4_37 45
#define EXECUTE_CACHE_4_36 47
#define EXECUTE_CACHE_4_33 49
#define EXECUTE_CACHE_4_31 51
#define EXECUTE_CACHE_4_29 53
#define EXECUTE_CACHE_4_26 55
#define EXECUTE_CACHE_4_25 57
#define EXECUTE_CACHE_4_23 59
#define EXECUTE_CACHE_4_18 61
#define EXECUTE_CACHE_4_12 63
#define EXECUTE_CACHE_4_9 65
#define EXECUTE_CACHE_4_7 67
#define FREE_REFERENCE_4_2 70
#define FREE_REFERENCE_4_1 71
#define FREE_REFERENCE_4_0 72
#define FREE_ASSIGNMENT_4_2 74
#define FREE_ASSIGNMENT_4_1 75
#define FREE_ASSIGNMENT_4_0 76
#define FREE_REFERENCES_LABEL_4_0 44
#define NUMBER_OF_LINKER_SECTIONS_4_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_4_4);
      goto setup_source_nodesB_18;

    case 1:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_4_10);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_4_6);
      goto lambda_4;

    case 5:
      current_block = (Rpc - LABEL_4_17);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_4_19);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_4_21);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_4_13);
      goto lambda_29;

    case 10:
      current_block = (Rpc - LABEL_4_15);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_4_16);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_4_27);
      goto label_24;

    case 14:
      current_block = (Rpc - LABEL_4_22);
      goto lambda_14;

    case 15:
      current_block = (Rpc - LABEL_4_24);
      goto continuation_0;

    case 16:
      current_block = (Rpc - LABEL_4_28);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_4_30);
      goto continuation_11;

    case 18:
      current_block = (Rpc - LABEL_4_35);
      goto label_25;

    case 19:
      current_block = (Rpc - LABEL_4_32);
      goto continuation_17;

    case 20:
      current_block = (Rpc - LABEL_4_34);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_source_nodesB_27)
DEFLABEL (setup_source_nodesB_18)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_4_1])))
    goto label_42;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_8);

DEFLABEL (label_42)
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_0]));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd15.Obj) = ((Wrd7.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd7.pObj) [0]) = (Wrd8.Obj);

DEFLABEL (label_39)
  Rsp = (& (Rsp [1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_36)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_35;
  Wrd21 = Wrd25;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_31)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_28]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_29]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_4_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_33]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_4_32);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_37]));

DEFLABEL (label_33)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_27])), (Wrd6.pObj), Rvl);

DEFLABEL (label_24)
  goto label_31;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_21])), (Wrd22.pObj));

DEFLABEL (label_23)
  (Wrd21.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_19])), (Wrd6.pObj), Rvl);

DEFLABEL (label_22)
  goto label_36;

DEFLABEL (label_41)
  if ((Wrd15.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_10])), (Wrd7.pObj), (Wrd8.Obj));

DEFLABEL (label_20)
  goto label_39;

DEFLABEL (lambda_28)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_4_6);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_13])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_44;
  Wrd15 = Wrd19;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_26]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_15);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_17])), (Wrd16.pObj));

DEFLABEL (label_21)
  (Wrd15.Obj) = Rvl;
  goto label_43;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_4_13);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_25]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_24);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_4_3]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (lambda_30)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_4_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_31]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_2]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_46;
  Wrd10 = Wrd14;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_36]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_34);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_35])), (Wrd11.pObj));

DEFLABEL (label_25)
  (Wrd10.Obj) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define ENVIRONMENT_LABEL_5_3 13
#define DEBUGGING_LABEL_5_2 12
#define OBJECT_5_0 11
#define EXECUTE_CACHE_5_8 7
#define EXECUTE_CACHE_5_7 9
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto filename_append_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (filename_append_4)
DEFLABEL (filename_append_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

INVOKE_INTERFACE_TARGET_0
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
decls_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  Rvl = (current_block [OBJECT_6_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 6
#define DEBUGGING_LABEL_7_2 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  Rvl = (current_block [OBJECT_7_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 6
#define DEBUGGING_LABEL_8_2 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  Rvl = (current_block [OBJECT_8_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 6
#define DEBUGGING_LABEL_9_2 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  Rvl = (current_block [OBJECT_9_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 6
#define DEBUGGING_LABEL_10_2 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  Rvl = (current_block [OBJECT_10_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
decls_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
decls_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
decls_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto source_node_filename_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_filename_3)
DEFLABEL (source_node_filename_0)
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
decls_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto source_node_pathname_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_pathname_3)
DEFLABEL (source_node_pathname_0)
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
decls_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto source_node_forward_links_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_forward_links_3)
DEFLABEL (source_node_forward_links_0)
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
decls_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto source_node_backward_links_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_backward_links_3)
DEFLABEL (source_node_backward_links_0)
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
decls_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto source_node_forward_closure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_forward_closure_3)
DEFLABEL (source_node_forward_closure_0)
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
decls_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto source_node_backward_closure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_backward_closure_3)
DEFLABEL (source_node_backward_closure_0)
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
decls_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto source_node_dependencies_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_dependencies_3)
DEFLABEL (source_node_dependencies_0)
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
#define ENVIRONMENT_LABEL_20_3 7
#define DEBUGGING_LABEL_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto source_node_dependents_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_dependents_3)
DEFLABEL (source_node_dependents_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

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

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 7
#define DEBUGGING_LABEL_21_2 6
#define OBJECT_21_1 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto source_node_rank_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_rank_3)
DEFLABEL (source_node_rank_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

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

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 7
#define DEBUGGING_LABEL_22_2 6
#define OBJECT_22_1 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto source_node_syntax_table_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_syntax_table_3)
DEFLABEL (source_node_syntax_table_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

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

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 7
#define DEBUGGING_LABEL_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto source_node_declarations_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_declarations_3)
DEFLABEL (source_node_declarations_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [12]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 7
#define DEBUGGING_LABEL_24_2 6
#define OBJECT_24_1 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto source_node_modification_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_modification_time_3)
DEFLABEL (source_node_modification_time_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [13]);
  Rsp = (& (Rsp [2]));
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
decls_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_source_node_forward_linksB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_source_node_forward_linksB_3)
DEFLABEL (set_source_node_forward_linksB_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_25_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 8
#define DEBUGGING_LABEL_26_2 7
#define OBJECT_26_2 6
#define OBJECT_26_1 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto set_source_node_backward_linksB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_source_node_backward_linksB_3)
DEFLABEL (set_source_node_backward_linksB_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_26_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 8
#define DEBUGGING_LABEL_27_2 7
#define OBJECT_27_2 6
#define OBJECT_27_1 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto set_source_node_forward_closureB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_source_node_forward_closureB_3)
DEFLABEL (set_source_node_forward_closureB_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_27_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 8
#define DEBUGGING_LABEL_28_2 7
#define OBJECT_28_2 6
#define OBJECT_28_1 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto set_source_node_backward_closureB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_source_node_backward_closureB_3)
DEFLABEL (set_source_node_backward_closureB_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 8
#define DEBUGGING_LABEL_29_2 7
#define OBJECT_29_2 6
#define OBJECT_29_1 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto set_source_node_dependenciesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_source_node_dependenciesB_3)
DEFLABEL (set_source_node_dependenciesB_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_29_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 8
#define DEBUGGING_LABEL_30_2 7
#define OBJECT_30_2 6
#define OBJECT_30_1 5
#define OBJECT_30_0 4
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto set_source_node_dependentsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_source_node_dependentsB_3)
DEFLABEL (set_source_node_dependentsB_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_30_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [9]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_30_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 8
#define DEBUGGING_LABEL_31_2 7
#define OBJECT_31_2 6
#define OBJECT_31_1 5
#define OBJECT_31_0 4
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto set_source_node_rankB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_source_node_rankB_3)
DEFLABEL (set_source_node_rankB_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_31_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [10]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_31_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 8
#define DEBUGGING_LABEL_32_2 7
#define OBJECT_32_2 6
#define OBJECT_32_1 5
#define OBJECT_32_0 4
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto set_source_node_syntax_tableB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_source_node_syntax_tableB_3)
DEFLABEL (set_source_node_syntax_tableB_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_32_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [11]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_32_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 8
#define DEBUGGING_LABEL_33_2 7
#define OBJECT_33_2 6
#define OBJECT_33_1 5
#define OBJECT_33_0 4
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto set_source_node_declarationsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_source_node_declarationsB_3)
DEFLABEL (set_source_node_declarationsB_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_33_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [12]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_33_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 8
#define DEBUGGING_LABEL_34_2 7
#define OBJECT_34_2 6
#define OBJECT_34_1 5
#define OBJECT_34_0 4
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto set_source_node_modification_timeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_source_node_modification_timeB_3)
DEFLABEL (set_source_node_modification_timeB_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_34_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [13]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_34_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define LABEL_35_7 9
#define ENVIRONMENT_LABEL_35_3 17
#define DEBUGGING_LABEL_35_2 16
#define OBJECT_35_3 15
#define OBJECT_35_2 14
#define OBJECT_35_1 13
#define OBJECT_35_0 12
#define FREE_REFERENCE_35_0 11
#define FREE_REFERENCES_LABEL_35_0 10
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto source_nodeP_4;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_35_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_nodeP_10)
DEFLABEL (source_nodeP_4)
  INTERRUPT_CHECK (26, LABEL_35_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
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
  Rvl = (current_block [OBJECT_35_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_35_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define ENVIRONMENT_LABEL_36_3 12
#define DEBUGGING_LABEL_36_2 11
#define EXECUTE_CACHE_36_7 7
#define EXECUTE_CACHE_36_6 9
#define FREE_REFERENCES_LABEL_36_0 6
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_36_4);
      goto make_source_node_1;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_source_node_4)
DEFLABEL (make_source_node_1)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_6 5
#define LABEL_37_8 7
#define LABEL_37_5 9
#define ENVIRONMENT_LABEL_37_3 19
#define DEBUGGING_LABEL_37_2 18
#define OBJECT_37_0 17
#define EXECUTE_CACHE_37_9 11
#define EXECUTE_CACHE_37_7 13
#define FREE_REFERENCE_37_0 16
#define FREE_REFERENCES_LABEL_37_0 10
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_37_4);
      goto filename__source_node_3;

    case 1:
      current_block = (Rpc - LABEL_37_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (filename__source_node_7)
DEFLABEL (filename__source_node_3)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_11;
  Wrd10 = Wrd14;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_8);
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_6])), (Wrd11.pObj));

DEFLABEL (label_5)
  (Wrd10.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define ENVIRONMENT_LABEL_38_3 12
#define DEBUGGING_LABEL_38_2 11
#define OBJECT_38_1 10
#define OBJECT_38_0 9
#define EXECUTE_CACHE_38_6 7
#define FREE_REFERENCES_LABEL_38_0 6
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_38_4);
      goto source_node_circularP_1;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_circularP_5)
DEFLABEL (source_node_circularP_1)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_7;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd14.Lng))))
    goto label_7;
  (Wrd6.Obj) = ((Wrd12.pObj) [7]);

DEFLABEL (label_6)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (label_7)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_38_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_6 5
#define LABEL_39_5 7
#define LABEL_39_8 9
#define LABEL_39_9 11
#define LABEL_39_10 13
#define LABEL_39_11 15
#define ENVIRONMENT_LABEL_39_3 27
#define DEBUGGING_LABEL_39_2 26
#define OBJECT_39_4 25
#define OBJECT_39_3 24
#define OBJECT_39_2 23
#define OBJECT_39_1 22
#define OBJECT_39_0 21
#define EXECUTE_CACHE_39_12 17
#define EXECUTE_CACHE_39_7 19
#define FREE_REFERENCES_LABEL_39_0 16
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_39_4);
      goto source_node_linkB_8;

    case 1:
      current_block = (Rpc - LABEL_39_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_39_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_39_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_39_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_39_11);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_linkB_16)
DEFLABEL (source_node_linkB_8)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_27;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_27;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_26)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = (current_block [OBJECT_39_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_25;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_25;
  (Wrd9.Obj) = ((Wrd15.pObj) [5]);

DEFLABEL (label_24)
  (Wrd28.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 62))
    goto label_23;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd72.Lng))))
    goto label_23;
  ((Wrd70.pObj) [5]) = (Wrd25.Obj);

DEFLABEL (label_22)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_21;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd37.Lng))))
    goto label_21;
  (Wrd29.Obj) = ((Wrd35.pObj) [4]);

DEFLABEL (label_20)
  (Wrd48.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_19;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd56.Lng))))
    goto label_19;
  ((Wrd54.pObj) [4]) = (Wrd45.Obj);

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (label_19)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.Obj) = (current_block [OBJECT_39_3]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 3);

DEFLABEL (label_13)
  goto label_18;

DEFLABEL (label_21)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_39_3]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_12)
  (Wrd29.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.Obj) = (current_block [OBJECT_39_0]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 3);

DEFLABEL (label_14)
  goto label_22;

DEFLABEL (label_25)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_39_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_39_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_6 5
#define LABEL_40_5 7
#define LABEL_40_8 9
#define LABEL_40_9 11
#define LABEL_40_10 13
#define LABEL_40_11 15
#define LABEL_40_13 17
#define LABEL_40_12 19
#define LABEL_40_17 21
#define LABEL_40_14 23
#define TAG_40_15 10
#define LABEL_40_18 25
#define TAG_40_19 11
#define ENVIRONMENT_LABEL_40_3 39
#define DEBUGGING_LABEL_40_2 38
#define OBJECT_40_4 37
#define OBJECT_40_3 36
#define OBJECT_40_2 35
#define OBJECT_40_1 34
#define OBJECT_40_0 33
#define EXECUTE_CACHE_40_20 27
#define EXECUTE_CACHE_40_16 29
#define EXECUTE_CACHE_40_7 31
#define FREE_REFERENCES_LABEL_40_0 26
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd54;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd51;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_40_4);
      goto source_node_closeB_13;

    case 1:
      current_block = (Rpc - LABEL_40_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_40_8);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_40_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_40_10);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_40_11);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_40_13);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_40_12);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_40_17);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_40_14);
      goto lambda_24;

    case 11:
      current_block = (Rpc - LABEL_40_18);
      goto lambda_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_closeB_23)
DEFLABEL (source_node_closeB_13)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_40;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_40;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_39)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  Rvl = (current_block [OBJECT_40_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_38;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_38;
  (Wrd9.Obj) = ((Wrd15.pObj) [7]);

DEFLABEL (label_37)
  (Wrd28.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd96.Obj) = (Rsp [0]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 62))
    goto label_36;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd94.Obj) = ((Wrd93.pObj) [0]);
  (Wrd95.Lng) = (FIXNUM_TO_LONG (Wrd94.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd95.Lng))))
    goto label_36;
  ((Wrd93.pObj) [7]) = (Wrd25.Obj);

DEFLABEL (label_35)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_34;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd37.Lng))))
    goto label_34;
  (Wrd29.Obj) = ((Wrd35.pObj) [6]);

DEFLABEL (label_33)
  (Wrd48.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 62))
    goto label_32;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd79.Lng))))
    goto label_32;
  ((Wrd77.pObj) [6]) = (Wrd45.Obj);

DEFLABEL (label_31)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 62))
    goto label_30;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd60.Lng))))
    goto label_30;
  (Wrd54.Obj) = ((Wrd58.pObj) [7]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_29)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd69.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_14])));
  Rhp += 1;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd69.pObj)));
  Wrd70 = Wrd69;
  (Wrd71.Obj) = (Rsp [2]);
  ((Wrd70.pObj) [2]) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_40_12);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_27)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_18])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Rsp [0]) = (Wrd22.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_16]));

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_40_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd63.Obj) = (Rsp [2]);
  (Wrd64.Obj) = (current_block [OBJECT_40_0]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_13]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd82.Obj) = (Rsp [1]);
  (Wrd83.Obj) = (current_block [OBJECT_40_3]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 3);

DEFLABEL (label_19)
  goto label_31;

DEFLABEL (label_34)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_40_3]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_17)
  (Wrd29.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd98.Obj) = (Rsp [0]);
  (Wrd99.Obj) = (current_block [OBJECT_40_0]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 3);

DEFLABEL (label_20)
  goto label_35;

DEFLABEL (label_38)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_40_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_40_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_40_14);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_20]));

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_40_18);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_20]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_6 5
#define LABEL_41_5 7
#define LABEL_41_9 9
#define LABEL_41_8 11
#define LABEL_41_12 13
#define LABEL_41_11 15
#define LABEL_41_14 17
#define ENVIRONMENT_LABEL_41_3 31
#define DEBUGGING_LABEL_41_2 30
#define OBJECT_41_0 29
#define EXECUTE_CACHE_41_13 19
#define EXECUTE_CACHE_41_10 21
#define EXECUTE_CACHE_41_7 23
#define FREE_REFERENCE_41_0 26
#define FREE_ASSIGNMENT_41_0 28
#define FREE_REFERENCES_LABEL_41_0 18
#define NUMBER_OF_LINKER_SECTIONS_41_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_41_4);
      goto source_nodes_rankB_3;

    case 1:
      current_block = (Rpc - LABEL_41_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_41_9);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_41_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_41_12);
      goto label_7;

    case 6:
      current_block = (Rpc - LABEL_41_11);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_41_14);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_nodes_rankB_10)
DEFLABEL (source_nodes_rankB_3)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_17;
  Wrd8 = Wrd12;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_15;
  Wrd8 = Wrd12;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_11);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_41_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_41_0]);
  goto pop_return;

DEFLABEL (label_13)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_41_14])), (Wrd6.pObj), Rvl);

DEFLABEL (label_8)
  goto label_11;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_12])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_9])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_10 7
#define LABEL_42_7 9
#define LABEL_42_12 11
#define LABEL_42_16 13
#define LABEL_42_8 15
#define TAG_42_9 6
#define LABEL_42_17 17
#define LABEL_42_13 19
#define LABEL_42_14 21
#define TAG_42_15 9
#define LABEL_42_19 23
#define ENVIRONMENT_LABEL_42_3 39
#define DEBUGGING_LABEL_42_2 38
#define OBJECT_42_6 37
#define OBJECT_42_5 36
#define OBJECT_42_4 35
#define OBJECT_42_3 34
#define OBJECT_42_2 33
#define OBJECT_42_1 32
#define OBJECT_42_0 31
#define EXECUTE_CACHE_42_18 25
#define EXECUTE_CACHE_42_11 27
#define EXECUTE_CACHE_42_6 29
#define FREE_REFERENCES_LABEL_42_0 24
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_42_4);
      goto compute_dependenciesB_10;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_42_10);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_42_12);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_42_16);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_42_8);
      goto lambda_20;

    case 7:
      current_block = (Rpc - LABEL_42_17);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_42_13);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_42_14);
      goto lambda_21;

    case 10:
      current_block = (Rpc - LABEL_42_19);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_dependenciesB_18)
DEFLABEL (compute_dependenciesB_10)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (lambda_19)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_42_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_8])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_29;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd20.Lng))))
    goto label_29;
  (Wrd14.Obj) = ((Wrd18.pObj) [7]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_42_7);
  (Wrd5.Obj) = Rvl;
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_27;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd38.Lng))))
    goto label_27;
  ((Wrd36.pObj) [8]) = Rvl;

DEFLABEL (label_26)
  (Wrd6.Obj) = (current_block [OBJECT_42_4]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_14])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_25;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng))))
    goto label_25;
  (Wrd17.Obj) = ((Wrd21.pObj) [6]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_42_13);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_23;

DEFLABEL (label_22)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 3);

DEFLABEL (label_23)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_22;
  ((Wrd14.pObj) [9]) = Rvl;
  Rvl = (current_block [OBJECT_42_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.Obj) = (current_block [OBJECT_42_5]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_16]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_42_2]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_12]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 3);

DEFLABEL (label_14)
  goto label_26;

DEFLABEL (label_29)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_42_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_42_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_31;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_31;
  (Wrd8.Obj) = ((Wrd14.pObj) [7]);

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_18]));

DEFLABEL (label_31)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_42_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_15)
  (Wrd8.Obj) = Rvl;
  goto label_30;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_42_14);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_33;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_33;
  (Wrd8.Obj) = ((Wrd14.pObj) [6]);

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_18]));

DEFLABEL (label_33)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_42_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_19]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_6 7
#define LABEL_43_7 9
#define LABEL_43_9 11
#define LABEL_43_10 13
#define ENVIRONMENT_LABEL_43_3 24
#define DEBUGGING_LABEL_43_2 23
#define OBJECT_43_5 22
#define OBJECT_43_4 21
#define OBJECT_43_3 20
#define OBJECT_43_2 19
#define OBJECT_43_1 18
#define OBJECT_43_0 17
#define EXECUTE_CACHE_43_8 15
#define FREE_REFERENCES_LABEL_43_0 14
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_43_4);
      goto compute_ranksB_12;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto loop_10;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_43_9);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_43_10);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_ranksB_18)
DEFLABEL (compute_ranksB_12)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_43_0]);
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_10;

DEFLABEL (loop_19)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_43_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_43_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_28;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_27;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_26)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_43_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_24;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd26.Lng))))
    goto label_24;
  ((Wrd24.pObj) [10]) = Rvl;

DEFLABEL (label_23)
  (Wrd8.Obj) = (Rsp [3]);

DEFLABEL (label_22)
  Rsp = (& (Rsp [2]));
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_10;

DEFLABEL (label_21)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_5]), 1);

DEFLABEL (label_15)
  (Wrd9.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_24)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (current_block [OBJECT_43_3]);
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_4]), 3);

DEFLABEL (label_16)
  goto label_23;

DEFLABEL (label_25)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  goto label_22;

DEFLABEL (label_27)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd20.Obj) = (Rsp [1]);
  if ((Wrd20.Obj) == (Wrd6.Obj))
    goto label_29;
  (Rsp [0]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_10;

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_43_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_6 7
#define LABEL_44_7 9
#define LABEL_44_8 11
#define LABEL_44_9 13
#define LABEL_44_10 15
#define ENVIRONMENT_LABEL_44_3 27
#define DEBUGGING_LABEL_44_2 26
#define OBJECT_44_6 25
#define OBJECT_44_5 24
#define OBJECT_44_4 23
#define OBJECT_44_3 22
#define OBJECT_44_2 21
#define OBJECT_44_1 20
#define OBJECT_44_0 19
#define EXECUTE_CACHE_44_11 17
#define FREE_REFERENCES_LABEL_44_0 16
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_44_4);
      goto source_node_rank__10;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_44_6);
      goto loop_8;

    case 3:
      current_block = (Rpc - LABEL_44_7);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_44_8);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_44_9);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_44_10);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_rank__17)
DEFLABEL (source_node_rank__10)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_19)
  (Wrd21.Obj) = (current_block [OBJECT_44_2]);
  (Rsp [1]) = (Wrd21.Obj);
  goto loop_8;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_44_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (loop_18)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_44_6);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_44_3]))
    goto label_28;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_27;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_26)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_25;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd22.Lng))))
    goto label_25;
  (Wrd17.Obj) = ((Wrd20.pObj) [10]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_24)
  (Wrd29.Obj) = (Rsp [0]);
  if (! ((Wrd29.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_23;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [1]);

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd31.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_44_10);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_8;

DEFLABEL (label_23)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_6]), 1);

DEFLABEL (label_15)
  (Wrd31.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd25.Obj) = (current_block [OBJECT_44_5]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_4]), 1);

DEFLABEL (label_13)
  (Wrd7.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 26)
    goto label_30;

DEFLABEL (label_29)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_30)
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd50.Lng) = ((Wrd52.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd50.Lng)))
    goto label_29;
  Rvl = (LONG_TO_FIXNUM (Wrd50.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_7 7
#define LABEL_45_8 9
#define ENVIRONMENT_LABEL_45_3 17
#define DEBUGGING_LABEL_45_2 16
#define OBJECT_45_2 15
#define OBJECT_45_1 14
#define OBJECT_45_0 13
#define EXECUTE_CACHE_45_6 11
#define FREE_REFERENCES_LABEL_45_0 10
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd38;
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
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_45_4);
      goto source_nodes_sort_by_rank_3;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto lambda_2;

    case 2:
      current_block = (Rpc - LABEL_45_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_45_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_nodes_sort_by_rank_8)
DEFLABEL (source_nodes_sort_by_rank_3)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (lambda_9)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_45_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_18;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_18;
  (Wrd5.Obj) = ((Wrd11.pObj) [10]);

DEFLABEL (label_17)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_16;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd29.Lng))))
    goto label_16;
  (Wrd21.Obj) = ((Wrd27.pObj) [10]);

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 26)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_11)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_10;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if ((Wrd43.Lng) < (Wrd45.Lng))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_45_2]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_45_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_6)
  (Wrd21.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_45_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_8 7
#define LABEL_46_11 9
#define LABEL_46_7 11
#define LABEL_46_12 13
#define LABEL_46_14 15
#define LABEL_46_17 17
#define LABEL_46_9 19
#define LABEL_46_16 21
#define LABEL_46_21 23
#define LABEL_46_23 25
#define LABEL_46_18 27
#define LABEL_46_24 29
#define LABEL_46_27 31
#define LABEL_46_13 33
#define LABEL_46_15 35
#define LABEL_46_32 37
#define LABEL_46_34 39
#define LABEL_46_19 41
#define LABEL_46_22 43
#define LABEL_46_37 45
#define LABEL_46_40 47
#define LABEL_46_41 49
#define LABEL_46_42 51
#define LABEL_46_25 53
#define TAG_46_26 25
#define LABEL_46_43 55
#define LABEL_46_29 57
#define LABEL_46_47 59
#define LABEL_46_30 61
#define LABEL_46_33 63
#define LABEL_46_51 65
#define LABEL_46_36 67
#define LABEL_46_52 69
#define LABEL_46_54 71
#define LABEL_46_55 73
#define LABEL_46_58 75
#define LABEL_46_38 77
#define TAG_46_39 37
#define LABEL_46_59 79
#define LABEL_46_44 81
#define TAG_46_45 39
#define LABEL_46_46 83
#define LABEL_46_65 85
#define LABEL_46_48 87
#define LABEL_46_66 89
#define LABEL_46_56 91
#define TAG_46_57 44
#define LABEL_46_60 93
#define TAG_46_61 45
#define LABEL_46_62 95
#define LABEL_46_71 97
#define LABEL_46_63 99
#define LABEL_46_64 101
#define LABEL_46_75 103
#define LABEL_46_68 105
#define LABEL_46_77 107
#define LABEL_46_69 109
#define LABEL_46_79 111
#define LABEL_46_70 113
#define LABEL_46_73 115
#define LABEL_46_81 117
#define LABEL_46_74 119
#define LABEL_46_78 121
#define LABEL_46_80 123
#define LABEL_46_84 125
#define LABEL_46_82 127
#define LABEL_46_85 129
#define LABEL_46_83 131
#define LABEL_46_87 133
#define LABEL_46_86 135
#define ENVIRONMENT_LABEL_46_3 187
#define DEBUGGING_LABEL_46_2 186
#define OBJECT_46_18 185
#define OBJECT_46_17 184
#define OBJECT_46_16 183
#define OBJECT_46_15 182
#define OBJECT_46_14 181
#define OBJECT_46_13 180
#define OBJECT_46_12 179
#define OBJECT_46_11 178
#define OBJECT_46_10 177
#define OBJECT_46_9 176
#define OBJECT_46_8 175
#define OBJECT_46_7 174
#define OBJECT_46_6 173
#define OBJECT_46_5 172
#define OBJECT_46_4 171
#define OBJECT_46_3 170
#define OBJECT_46_2 169
#define OBJECT_46_1 168
#define OBJECT_46_0 167
#define EXECUTE_CACHE_46_88 137
#define EXECUTE_CACHE_46_76 139
#define EXECUTE_CACHE_46_72 141
#define EXECUTE_CACHE_46_67 143
#define EXECUTE_CACHE_46_53 145
#define EXECUTE_CACHE_46_50 147
#define EXECUTE_CACHE_46_49 149
#define EXECUTE_CACHE_46_35 151
#define EXECUTE_CACHE_46_31 153
#define EXECUTE_CACHE_46_28 155
#define EXECUTE_CACHE_46_20 157
#define EXECUTE_CACHE_46_10 159
#define EXECUTE_CACHE_46_6 161
#define FREE_REFERENCE_46_2 164
#define FREE_REFERENCE_46_1 165
#define FREE_REFERENCE_46_0 166
#define FREE_REFERENCES_LABEL_46_0 136
#define NUMBER_OF_LINKER_SECTIONS_46_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd45;
  machine_word Wrd29;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd56;
  machine_word Wrd41;
  machine_word Wrd51;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd60;
  machine_word Wrd18;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd33;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_46_4);
      goto syntax_filesB_66;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_46_8);
      goto label_68;

    case 3:
      current_block = (Rpc - LABEL_46_11);
      goto continuation_47;

    case 4:
      current_block = (Rpc - LABEL_46_7);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_46_12);
      goto label_69;

    case 6:
      current_block = (Rpc - LABEL_46_14);
      goto label_71;

    case 7:
      current_block = (Rpc - LABEL_46_17);
      goto label_70;

    case 8:
      current_block = (Rpc - LABEL_46_9);
      goto lambda_13;

    case 9:
      current_block = (Rpc - LABEL_46_16);
      goto continuation_34;

    case 10:
      current_block = (Rpc - LABEL_46_21);
      goto label_72;

    case 11:
      current_block = (Rpc - LABEL_46_23);
      goto continuation_31;

    case 12:
      current_block = (Rpc - LABEL_46_18);
      goto lambda_33;

    case 13:
      current_block = (Rpc - LABEL_46_24);
      goto label_73;

    case 14:
      current_block = (Rpc - LABEL_46_27);
      goto label_74;

    case 15:
      current_block = (Rpc - LABEL_46_13);
      goto continuation_52;

    case 16:
      current_block = (Rpc - LABEL_46_15);
      goto lambda_51;

    case 17:
      current_block = (Rpc - LABEL_46_32);
      goto label_76;

    case 18:
      current_block = (Rpc - LABEL_46_34);
      goto label_75;

    case 19:
      current_block = (Rpc - LABEL_46_19);
      goto continuation_2;

    case 20:
      current_block = (Rpc - LABEL_46_22);
      goto lambda_46;

    case 21:
      current_block = (Rpc - LABEL_46_37);
      goto label_78;

    case 22:
      current_block = (Rpc - LABEL_46_40);
      goto label_77;

    case 23:
      current_block = (Rpc - LABEL_46_41);
      goto continuation_28;

    case 24:
      current_block = (Rpc - LABEL_46_42);
      goto continuation_18;

    case 25:
      current_block = (Rpc - LABEL_46_25);
      goto lambda_99;

    case 26:
      current_block = (Rpc - LABEL_46_43);
      goto label_79;

    case 27:
      current_block = (Rpc - LABEL_46_29);
      goto continuation_54;

    case 28:
      current_block = (Rpc - LABEL_46_47);
      goto label_80;

    case 29:
      current_block = (Rpc - LABEL_46_30);
      goto lambda_53;

    case 30:
      current_block = (Rpc - LABEL_46_33);
      goto continuation_50;

    case 31:
      current_block = (Rpc - LABEL_46_51);
      goto continuation_5;

    case 32:
      current_block = (Rpc - LABEL_46_36);
      goto continuation_1;

    case 33:
      current_block = (Rpc - LABEL_46_52);
      goto label_83;

    case 34:
      current_block = (Rpc - LABEL_46_54);
      goto label_81;

    case 35:
      current_block = (Rpc - LABEL_46_55);
      goto label_82;

    case 36:
      current_block = (Rpc - LABEL_46_58);
      goto continuation_43;

    case 37:
      current_block = (Rpc - LABEL_46_38);
      goto lambda_102;

    case 38:
      current_block = (Rpc - LABEL_46_59);
      goto label_84;

    case 39:
      current_block = (Rpc - LABEL_46_44);
      goto lambda_103;

    case 40:
      current_block = (Rpc - LABEL_46_46);
      goto continuation_57;

    case 41:
      current_block = (Rpc - LABEL_46_65);
      goto label_85;

    case 42:
      current_block = (Rpc - LABEL_46_48);
      goto lambda_56;

    case 43:
      current_block = (Rpc - LABEL_46_66);
      goto label_86;

    case 44:
      current_block = (Rpc - LABEL_46_56);
      goto lambda_105;

    case 45:
      current_block = (Rpc - LABEL_46_60);
      goto lambda_106;

    case 46:
      current_block = (Rpc - LABEL_46_62);
      goto continuation_22;

    case 47:
      current_block = (Rpc - LABEL_46_71);
      goto label_87;

    case 48:
      current_block = (Rpc - LABEL_46_63);
      goto continuation_60;

    case 49:
      current_block = (Rpc - LABEL_46_64);
      goto lambda_59;

    case 50:
      current_block = (Rpc - LABEL_46_75);
      goto label_88;

    case 51:
      current_block = (Rpc - LABEL_46_68);
      goto continuation_9;

    case 52:
      current_block = (Rpc - LABEL_46_77);
      goto label_89;

    case 53:
      current_block = (Rpc - LABEL_46_69);
      goto continuation_37;

    case 54:
      current_block = (Rpc - LABEL_46_79);
      goto label_90;

    case 55:
      current_block = (Rpc - LABEL_46_70);
      goto continuation_24;

    case 56:
      current_block = (Rpc - LABEL_46_73);
      goto continuation_62;

    case 57:
      current_block = (Rpc - LABEL_46_81);
      goto label_91;

    case 58:
      current_block = (Rpc - LABEL_46_74);
      goto lambda_61;

    case 59:
      current_block = (Rpc - LABEL_46_78);
      goto continuation_39;

    case 60:
      current_block = (Rpc - LABEL_46_80);
      goto continuation_25;

    case 61:
      current_block = (Rpc - LABEL_46_84);
      goto label_92;

    case 62:
      current_block = (Rpc - LABEL_46_82);
      goto lambda_65;

    case 63:
      current_block = (Rpc - LABEL_46_85);
      goto label_93;

    case 64:
      current_block = (Rpc - LABEL_46_83);
      goto continuation_40;

    case 65:
      current_block = (Rpc - LABEL_46_87);
      goto label_94;

    case 66:
      current_block = (Rpc - LABEL_46_86);
      goto continuation_64;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntax_filesB_96)
DEFLABEL (syntax_filesB_66)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_128;
  Wrd8 = Wrd12;

DEFLABEL (label_127)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_46_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_126;
  Wrd5 = Wrd9;

DEFLABEL (label_125)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_120;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_124;
  Wrd15 = Wrd19;

DEFLABEL (label_123)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_46_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_122;
  Wrd8 = Wrd12;

DEFLABEL (label_121)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_22]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_46_11);

DEFLABEL (label_120)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_2]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_119;
  Wrd26 = Wrd30;

DEFLABEL (label_118)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_46_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_31]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_46_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_117;
  Wrd8 = Wrd12;

DEFLABEL (label_116)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_48]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_46_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_64]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_2]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_115;
  Wrd10 = Wrd14;

DEFLABEL (label_114)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_28]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_46_63);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_111;
  Rvl = (current_block [OBJECT_46_2]);
  goto pop_return;

DEFLABEL (label_111)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_73]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_74]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_31]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_46_73);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_113;
  Wrd5 = Wrd9;

DEFLABEL (label_112)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_82]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_81])), (Wrd6.pObj));

DEFLABEL (label_91)
  (Wrd5.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_65])), (Wrd11.pObj));

DEFLABEL (label_85)
  (Wrd10.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_47])), (Wrd9.pObj));

DEFLABEL (label_80)
  (Wrd8.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_14])), (Wrd27.pObj));

DEFLABEL (label_71)
  (Wrd26.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_21])), (Wrd9.pObj));

DEFLABEL (label_72)
  (Wrd8.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_17])), (Wrd16.pObj));

DEFLABEL (label_70)
  (Wrd15.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_12])), (Wrd6.pObj));

DEFLABEL (label_69)
  (Wrd5.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_8])), (Wrd9.pObj));

DEFLABEL (label_68)
  (Wrd8.Obj) = Rvl;
  goto label_127;

DEFLABEL (lambda_97)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_46_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_46_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_20]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_36);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_138;

DEFLABEL (label_137)
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_131;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_136;
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_136;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd51.Lng) < (Wrd53.Lng))
    goto label_130;

DEFLABEL (label_131)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_129;

DEFLABEL (label_130)
  (Wrd49.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_129)
DEFLABEL (label_135)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 62))
    goto label_134;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd39.Lng))))
    goto label_134;
  (Wrd33.Obj) = (Rsp [0]);
  ((Wrd37.pObj) [13]) = (Wrd33.Obj);

DEFLABEL (label_133)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_132;
  Rvl = (current_block [OBJECT_46_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_132)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_57);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_56])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd28 = Wrd27;
  (Wrd29.Obj) = (Rsp [1]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Rsp [1]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_31]));

DEFLABEL (label_134)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (current_block [OBJECT_46_1]);
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_55]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 3);

DEFLABEL (label_82)
  goto label_133;

DEFLABEL (label_136)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_54]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_81)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_131;
  goto label_130;

DEFLABEL (label_138)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_51]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 62))
    goto label_140;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd65.Lng))))
    goto label_140;
  (Wrd59.Obj) = ((Wrd63.pObj) [2]);
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_139)
  (Wrd73.Obj) = (current_block [OBJECT_46_13]);
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_53]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_46_51);
  goto label_137;

DEFLABEL (label_140)
  (Wrd68.Obj) = (Rsp [3]);
  (Wrd69.Obj) = (current_block [OBJECT_46_12]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_52]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_83)
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (lambda_98)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_46_18);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_148;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd13.Lng))))
    goto label_148;
  (Wrd7.Obj) = ((Wrd11.pObj) [13]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_147)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_142;

DEFLABEL (label_141)
  Rvl = (current_block [OBJECT_46_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_142)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_23]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_25])));
  Rhp += 2;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd30 = Wrd27;
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  ((Wrd30.pObj) [3]) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_146;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd40.Lng))))
    goto label_146;
  (Wrd34.Obj) = ((Wrd38.pObj) [8]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_145)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_28]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_46_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_141;
  (Wrd52.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (current_block [OBJECT_46_1]);
  (Rsp [1]) = (Wrd53.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd67.uLng) == 62)
    goto label_144;

DEFLABEL (label_143)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 3);

DEFLABEL (label_144)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd65.Lng))))
    goto label_143;
  ((Wrd63.pObj) [13]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_46_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_146)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.Obj) = (current_block [OBJECT_46_5]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_27]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_74)
  (* (--Rsp)) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_46_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_147;

DEFLABEL (lambda_100)
DEFLABEL (lambda_51)
  INTERRUPT_CHECK (26, LABEL_46_15);
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_153;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd36.Lng))))
    goto label_153;
  (Wrd7.Obj) = ((Wrd34.pObj) [13]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_150;

DEFLABEL (label_149)
  Rvl = (current_block [OBJECT_46_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_150)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_33]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_46_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_152;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_152;
  (Wrd15.Obj) = ((Wrd19.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_151)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_35]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_46_33);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_50]));

DEFLABEL (label_152)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_46_7]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_34]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_151;

DEFLABEL (label_153)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_46_1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_32]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_76)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_150;
  goto label_149;

DEFLABEL (lambda_101)
DEFLABEL (lambda_46)
  INTERRUPT_CHECK (26, LABEL_46_22);
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_158;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd36.Lng))))
    goto label_158;
  (Wrd7.Obj) = ((Wrd34.pObj) [13]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_155;

DEFLABEL (label_154)
  Rvl = (current_block [OBJECT_46_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_155)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_39);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_38])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_157;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd21.Lng))))
    goto label_157;
  (Wrd13.Obj) = ((Wrd19.pObj) [6]);

DEFLABEL (label_156)
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (label_157)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_46_9]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_40]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_77)
  (Wrd13.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_158)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_46_1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_37]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_78)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_155;
  goto label_154;

DEFLABEL (lambda_99)
  CLOSURE_HEADER (LABEL_46_25);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_172;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd16.Lng))))
    goto label_172;
  (Wrd10.Obj) = ((Wrd14.pObj) [13]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_171)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_160;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_159;

DEFLABEL (label_160)
  (Wrd60.Obj) = (current_block [OBJECT_46_10]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_159)
DEFLABEL (label_170)
  (Wrd27.Obj) = (Rsp [0]);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_164;
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_163)
  (Wrd31.Obj) = (Rsp [0]);
  if (! ((Wrd31.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_162;

DEFLABEL (label_161)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_162)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_41]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_45);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_44])));
  Rhp += 2;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  Wrd40 = Wrd37;
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [2]);
  ((Wrd40.pObj) [2]) = (Wrd43.Obj);
  (Wrd39.Obj) = (Rsp [3]);
  ((Wrd40.pObj) [3]) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_31]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_46_41);
  goto label_161;

DEFLABEL (label_164)
  (Wrd46.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd46.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [3]);
  (Rsp [1]) = (Wrd47.Obj);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd53.uLng) == 26)
    goto label_166;

DEFLABEL (label_165)
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_166)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_165;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if ((Wrd57.Lng) > (Wrd59.Lng))
    goto label_168;
  (Wrd51.Obj) = ((SCHEME_OBJECT) 0);
  goto label_167;

DEFLABEL (label_168)
  (Wrd51.Obj) = (current_block [OBJECT_46_10]);

DEFLABEL (label_167)
DEFLABEL (label_169)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd51.Obj);
  goto label_163;

DEFLABEL (label_172)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_46_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_43]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_171;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_46_42);
  (* (--Rsp)) = Rvl;
  goto label_163;

DEFLABEL (lambda_104)
DEFLABEL (lambda_53)
  INTERRUPT_CHECK (26, LABEL_46_30);
  (Wrd5.Obj) = (current_block [OBJECT_46_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_49]));

DEFLABEL (lambda_102)
  CLOSURE_HEADER (LABEL_46_38);

DEFLABEL (lambda_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 62))
    goto label_177;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd41.Lng))))
    goto label_177;
  (Wrd7.Obj) = ((Wrd39.pObj) [13]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_175;

DEFLABEL (label_176)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_58]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_61);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_60])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd32 = Wrd29;
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  ((Wrd32.pObj) [2]) = (Wrd35.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd32.pObj) [3]) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_31]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_46_58);

DEFLABEL (label_175)
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_46_1]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd24.uLng) == 62)
    goto label_174;

DEFLABEL (label_173)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 3);

DEFLABEL (label_174)
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd22.Lng))))
    goto label_173;
  ((Wrd20.pObj) [13]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_46_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_177)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (current_block [OBJECT_46_1]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_59]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_84)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_175;
  goto label_176;

DEFLABEL (lambda_103)
  CLOSURE_HEADER (LABEL_46_44);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_49]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_46_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_181;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_181;
  (Wrd13.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_180)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_72]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_46_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_49]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_46_80);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_179;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_179;
  (Wrd5.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_178)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_72]));

DEFLABEL (label_179)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Wrd25.Obj) = (current_block [OBJECT_46_12]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_84]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_92)
  (Wrd5.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_181)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd29.Obj) = (current_block [OBJECT_46_12]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_71]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_87)
  (* (--Rsp)) = Rvl;
  goto label_180;

DEFLABEL (lambda_107)
DEFLABEL (lambda_56)
  INTERRUPT_CHECK (26, LABEL_46_48);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_184;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd16.Lng))))
    goto label_184;
  (Wrd7.Obj) = ((Wrd14.pObj) [13]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_183;

DEFLABEL (label_182)
  Rvl = (current_block [OBJECT_46_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_183)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_67]));

DEFLABEL (label_184)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_46_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_66]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_86)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_183;
  goto label_182;

DEFLABEL (lambda_105)
  CLOSURE_HEADER (LABEL_46_56);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_49]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_46_68);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_186;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_186;
  (Wrd5.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_185)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_72]));

DEFLABEL (label_186)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_46_12]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_77]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_89)
  (Wrd5.Obj) = Rvl;
  goto label_185;

DEFLABEL (lambda_106)
  CLOSURE_HEADER (LABEL_46_60);

DEFLABEL (lambda_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_49]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_46_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_190;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_190;
  (Wrd13.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_189)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_72]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_46_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_49]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_46_83);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_188;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_188;
  (Wrd5.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_187)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_72]));

DEFLABEL (label_188)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_46_12]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_87]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_94)
  (Wrd5.Obj) = Rvl;
  goto label_187;

DEFLABEL (label_190)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [3]);
  (Wrd29.Obj) = (current_block [OBJECT_46_12]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_79]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_189;

DEFLABEL (lambda_108)
DEFLABEL (lambda_59)
  INTERRUPT_CHECK (26, LABEL_46_64);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_193;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd16.Lng))))
    goto label_193;
  (Wrd7.Obj) = ((Wrd14.pObj) [13]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_192;

DEFLABEL (label_191)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_192)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_76]));

DEFLABEL (label_193)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_46_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_75]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_88)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_192;
  goto label_191;

DEFLABEL (lambda_109)
DEFLABEL (lambda_61)
  INTERRUPT_CHECK (26, LABEL_46_74);
  (Wrd5.Obj) = (current_block [OBJECT_46_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_49]));

DEFLABEL (lambda_110)
DEFLABEL (lambda_65)
  INTERRUPT_CHECK (26, LABEL_46_82);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_197;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd20.Lng))))
    goto label_197;
  (Wrd7.Obj) = ((Wrd18.pObj) [13]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_195;

DEFLABEL (label_194)
  Rvl = (current_block [OBJECT_46_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_195)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_86]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_76]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_46_86);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_196;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_67]));

DEFLABEL (label_196)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_88]));

DEFLABEL (label_197)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_46_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_85]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_4]), 2);

DEFLABEL (label_93)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_195;
  goto label_194;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_6 5
#define LABEL_47_5 7
#define LABEL_47_8 9
#define LABEL_47_9 11
#define LABEL_47_11 13
#define LABEL_47_12 15
#define ENVIRONMENT_LABEL_47_3 29
#define DEBUGGING_LABEL_47_2 28
#define OBJECT_47_4 27
#define OBJECT_47_3 26
#define OBJECT_47_2 25
#define OBJECT_47_1 24
#define OBJECT_47_0 23
#define EXECUTE_CACHE_47_13 17
#define EXECUTE_CACHE_47_10 19
#define EXECUTE_CACHE_47_7 21
#define FREE_REFERENCES_LABEL_47_0 16
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_47_4);
      goto source_node_touchB_6;

    case 1:
      current_block = (Rpc - LABEL_47_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_47_8);
      goto lambda_3;

    case 4:
      current_block = (Rpc - LABEL_47_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_47_11);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_47_12);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_touchB_10)
DEFLABEL (source_node_touchB_6)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_13;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_13;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_12)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_8]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_13)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_47_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (lambda_11)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_47_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_47_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_11);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_47_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define LABEL_48_8 9
#define TAG_48_9 3
#define LABEL_48_12 11
#define LABEL_48_14 13
#define ENVIRONMENT_LABEL_48_3 30
#define DEBUGGING_LABEL_48_2 29
#define OBJECT_48_1 28
#define OBJECT_48_0 27
#define EXECUTE_CACHE_48_16 15
#define EXECUTE_CACHE_48_15 17
#define EXECUTE_CACHE_48_13 19
#define EXECUTE_CACHE_48_11 21
#define EXECUTE_CACHE_48_10 23
#define EXECUTE_CACHE_48_6 25
#define FREE_REFERENCES_LABEL_48_0 14
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_48_4);
      goto pathname_touchB_5;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto lambda_9;

    case 4:
      current_block = (Rpc - LABEL_48_12);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_48_14);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_touchB_8)
DEFLABEL (pathname_touchB_5)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = (current_block [OBJECT_48_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_8])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_48_7);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_11]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_48_8);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_14);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_16]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_7 7
#define LABEL_49_8 9
#define TAG_49_9 3
#define LABEL_49_12 11
#define LABEL_49_14 13
#define ENVIRONMENT_LABEL_49_3 30
#define DEBUGGING_LABEL_49_2 29
#define OBJECT_49_1 28
#define OBJECT_49_0 27
#define EXECUTE_CACHE_49_16 15
#define EXECUTE_CACHE_49_15 17
#define EXECUTE_CACHE_49_13 19
#define EXECUTE_CACHE_49_11 21
#define EXECUTE_CACHE_49_10 23
#define EXECUTE_CACHE_49_6 25
#define FREE_REFERENCES_LABEL_49_0 14
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_49_4);
      goto pathname_deleteB_5;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_49_8);
      goto lambda_9;

    case 4:
      current_block = (Rpc - LABEL_49_12);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_49_14);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_deleteB_8)
DEFLABEL (pathname_deleteB_5)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = (current_block [OBJECT_49_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_8])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_49_7);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_11]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_49_8);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_49_14);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_16]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_7 7
#define ENVIRONMENT_LABEL_50_3 16
#define DEBUGGING_LABEL_50_2 15
#define EXECUTE_CACHE_50_9 9
#define EXECUTE_CACHE_50_8 11
#define EXECUTE_CACHE_50_6 13
#define FREE_REFERENCES_LABEL_50_0 8
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_50_4);
      goto sc_2;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (sc_5)
DEFLABEL (sc_2)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_6 5
#define LABEL_51_5 7
#define LABEL_51_8 9
#define TAG_51_9 3
#define LABEL_51_10 11
#define LABEL_51_12 13
#define LABEL_51_13 15
#define LABEL_51_15 17
#define LABEL_51_11 19
#define LABEL_51_14 21
#define LABEL_51_17 23
#define ENVIRONMENT_LABEL_51_3 41
#define DEBUGGING_LABEL_51_2 40
#define OBJECT_51_4 39
#define OBJECT_51_3 38
#define OBJECT_51_2 37
#define OBJECT_51_1 36
#define OBJECT_51_0 35
#define EXECUTE_CACHE_51_18 25
#define EXECUTE_CACHE_51_16 27
#define EXECUTE_CACHE_51_7 29
#define FREE_REFERENCE_51_2 32
#define FREE_REFERENCE_51_1 33
#define FREE_REFERENCE_51_0 34
#define FREE_REFERENCES_LABEL_51_0 24
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd66;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd73;
  machine_word Wrd59;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_51_4);
      goto source_node_syntaxB_8;

    case 1:
      current_block = (Rpc - LABEL_51_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_51_8);
      goto lambda_18;

    case 4:
      current_block = (Rpc - LABEL_51_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_51_12);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_51_13);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_51_15);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_51_11);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_51_14);
      goto lambda_4;

    case 10:
      current_block = (Rpc - LABEL_51_17);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (source_node_syntaxB_17)
DEFLABEL (source_node_syntaxB_8)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_21;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_21;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_8])));
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

DEFLABEL (label_21)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_51_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_51_8);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_31;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd20.Lng))))
    goto label_31;
  (Wrd8.Obj) = ((Wrd18.pObj) [11]);

DEFLABEL (label_30)
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_11]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_29;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd47.Lng))))
    goto label_29;
  (Wrd39.Obj) = ((Wrd45.pObj) [12]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_28)
  (Wrd60.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd63.Obj) = ((Wrd60.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 50)
    goto label_27;
  Wrd59 = Wrd63;

DEFLABEL (label_26)
  if ((Wrd59.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_1]));
  (Wrd70.Obj) = ((Wrd67.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_24;
  Wrd66 = Wrd70;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd66.Obj);

DEFLABEL (label_22)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_51_11);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_16]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_15])), (Wrd67.pObj));

DEFLABEL (label_14)
  (Wrd66.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_14]))));
  (* (--Rsp)) = (Wrd73.Obj);
  goto label_22;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_13])), (Wrd60.pObj));

DEFLABEL (label_13)
  (Wrd59.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd54.pObj) [2]);
  (Wrd55.Obj) = (current_block [OBJECT_51_4]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_12]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_51_3]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_10]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_30;

DEFLABEL (lambda_19)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_51_14);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_33;
  Wrd7 = Wrd11;

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_18]));

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_17])), (Wrd8.pObj));

DEFLABEL (label_15)
  (Wrd7.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_6 5
#define LABEL_52_5 7
#define ENVIRONMENT_LABEL_52_3 16
#define DEBUGGING_LABEL_52_2 15
#define OBJECT_52_1 14
#define OBJECT_52_0 13
#define EXECUTE_CACHE_52_8 9
#define EXECUTE_CACHE_52_7 11
#define FREE_REFERENCES_LABEL_52_0 8
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_52_4);
      goto modification_time_2;

    case 1:
      current_block = (Rpc - LABEL_52_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (modification_time_6)
DEFLABEL (modification_time_2)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_8;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_8;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_8]));

DEFLABEL (label_8)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_52_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define LABEL_53_6 7
#define LABEL_53_8 9
#define LABEL_53_9 11
#define LABEL_53_10 13
#define LABEL_53_12 15
#define LABEL_53_16 17
#define LABEL_53_14 19
#define LABEL_53_17 21
#define TAG_53_18 9
#define LABEL_53_20 23
#define LABEL_53_21 25
#define LABEL_53_23 27
#define LABEL_53_25 29
#define LABEL_53_27 31
#define LABEL_53_29 33
#define LABEL_53_31 35
#define ENVIRONMENT_LABEL_53_3 173
#define DEBUGGING_LABEL_53_2 172
#define OBJECT_53_110 171
#define OBJECT_53_109 170
#define OBJECT_53_108 169
#define OBJECT_53_107 168
#define OBJECT_53_106 167
#define OBJECT_53_105 166
#define OBJECT_53_104 165
#define OBJECT_53_103 164
#define OBJECT_53_102 163
#define OBJECT_53_101 162
#define OBJECT_53_100 161
#define OBJECT_53_99 160
#define OBJECT_53_98 159
#define OBJECT_53_97 158
#define OBJECT_53_96 157
#define OBJECT_53_95 156
#define OBJECT_53_94 155
#define OBJECT_53_93 154
#define OBJECT_53_92 153
#define OBJECT_53_91 152
#define OBJECT_53_90 151
#define OBJECT_53_89 150
#define OBJECT_53_88 149
#define OBJECT_53_87 148
#define OBJECT_53_86 147
#define OBJECT_53_85 146
#define OBJECT_53_84 145
#define OBJECT_53_83 144
#define OBJECT_53_82 143
#define OBJECT_53_81 142
#define OBJECT_53_80 141
#define OBJECT_53_79 140
#define OBJECT_53_78 139
#define OBJECT_53_77 138
#define OBJECT_53_76 137
#define OBJECT_53_75 136
#define OBJECT_53_74 135
#define OBJECT_53_73 134
#define OBJECT_53_72 133
#define OBJECT_53_71 132
#define OBJECT_53_70 131
#define OBJECT_53_69 130
#define OBJECT_53_68 129
#define OBJECT_53_67 128
#define OBJECT_53_66 127
#define OBJECT_53_65 126
#define OBJECT_53_64 125
#define OBJECT_53_63 124
#define OBJECT_53_62 123
#define OBJECT_53_61 122
#define OBJECT_53_60 121
#define OBJECT_53_59 120
#define OBJECT_53_58 119
#define OBJECT_53_57 118
#define OBJECT_53_56 117
#define OBJECT_53_55 116
#define OBJECT_53_54 115
#define OBJECT_53_53 114
#define OBJECT_53_52 113
#define OBJECT_53_51 112
#define OBJECT_53_50 111
#define OBJECT_53_49 110
#define OBJECT_53_48 109
#define OBJECT_53_47 108
#define OBJECT_53_46 107
#define OBJECT_53_45 106
#define OBJECT_53_44 105
#define OBJECT_53_43 104
#define OBJECT_53_42 103
#define OBJECT_53_41 102
#define OBJECT_53_40 101
#define OBJECT_53_39 100
#define OBJECT_53_38 99
#define OBJECT_53_37 98
#define OBJECT_53_36 97
#define OBJECT_53_35 96
#define OBJECT_53_34 95
#define OBJECT_53_33 94
#define OBJECT_53_32 93
#define OBJECT_53_31 92
#define OBJECT_53_30 91
#define OBJECT_53_29 90
#define OBJECT_53_28 89
#define OBJECT_53_27 88
#define OBJECT_53_26 87
#define OBJECT_53_25 86
#define OBJECT_53_24 85
#define OBJECT_53_23 84
#define OBJECT_53_22 83
#define OBJECT_53_21 82
#define OBJECT_53_20 81
#define OBJECT_53_19 80
#define OBJECT_53_18 79
#define OBJECT_53_17 78
#define OBJECT_53_16 77
#define OBJECT_53_15 76
#define OBJECT_53_14 75
#define OBJECT_53_13 74
#define OBJECT_53_12 73
#define OBJECT_53_11 72
#define OBJECT_53_10 71
#define OBJECT_53_9 70
#define OBJECT_53_8 69
#define OBJECT_53_7 68
#define OBJECT_53_6 67
#define OBJECT_53_5 66
#define OBJECT_53_4 65
#define OBJECT_53_3 64
#define OBJECT_53_2 63
#define OBJECT_53_1 62
#define OBJECT_53_0 61
#define EXECUTE_CACHE_53_33 37
#define EXECUTE_CACHE_53_22 39
#define EXECUTE_CACHE_53_19 41
#define EXECUTE_CACHE_53_32 43
#define EXECUTE_CACHE_53_30 45
#define EXECUTE_CACHE_53_28 47
#define EXECUTE_CACHE_53_26 49
#define EXECUTE_CACHE_53_24 51
#define EXECUTE_CACHE_53_15 53
#define EXECUTE_CACHE_53_13 55
#define EXECUTE_CACHE_53_11 57
#define EXECUTE_CACHE_53_7 59
#define FREE_REFERENCES_LABEL_53_0 36
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd6;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_53_4);
      goto initialize_syntax_dependenciesB_17;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_13;

    case 2:
      current_block = (Rpc - LABEL_53_6);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_53_8);
      goto continuation_15;

    case 4:
      current_block = (Rpc - LABEL_53_9);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_53_10);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_53_12);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_53_16);
      goto lambda_2;

    case 8:
      current_block = (Rpc - LABEL_53_14);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_53_17);
      goto lambda_22;

    case 10:
      current_block = (Rpc - LABEL_53_20);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_53_21);
      goto continuation_0;

    case 12:
      current_block = (Rpc - LABEL_53_23);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_53_25);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_53_27);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_53_29);
      goto continuation_4;

    case 16:
      current_block = (Rpc - LABEL_53_31);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_syntax_dependenciesB_20)
DEFLABEL (initialize_syntax_dependenciesB_17)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_53_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_53_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_53_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_53_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_53_6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_53_7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_53_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_53_9]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_53_10]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_53_11]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_53_12]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_53_13]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_53_14]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_53_15]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_53_16]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_53_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_53_31]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53_32]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_53_33]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_53_34]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_53_35]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_53_36]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_53_37]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_53_29]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_53_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53_39]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_53_40]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53_41]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_53_42]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_53_43]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_53_44]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_53_45]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_53_46]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_53_47]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_53_48]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_53_49]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_53_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53_51]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_53_52]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53_53]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_53_54]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_53_55]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_53_56]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_53_57]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_53_58]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_53_59]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_53_60]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_53_61]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_53_62]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_53_63]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_53_64]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_53_65]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_53_66]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_53_67]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_53_68]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_53_69]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_53_70]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_53_71]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_24]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_53_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53_76]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_53_77]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53_76]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_26]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_53_25);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_78]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53_79]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_53_80]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53_17]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_53_18]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_53_19]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_53_81]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_53_20]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_53_28]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_28]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_53_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_82]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53_83]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_53_84]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53_85]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_53_86]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_53_87]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_30]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_53_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_88]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53_89]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_53_90]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53_91]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_53_92]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_53_93]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_53_94]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_53_95]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_53_96]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_53_97]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_53_98]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_53_99]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_53_100]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_53_101]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_53_102]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_53_103]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_53_104]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_53_105]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_53_106]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_53_107]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_53_108]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_53_109]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_53_110]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_32]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_53_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_33]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_53_9);
  (* (--Rsp)) = Rvl;
  goto lambda_2;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_53_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_53_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_53_19]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53_20]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_53_21]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_53_22]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_53_23]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_53_24]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_53_25]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_53_26]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_53_27]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_53_28]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_13]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_53_12);
  (* (--Rsp)) = Rvl;
  goto lambda_2;

DEFLABEL (lambda_21)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_53_16);
  (Wrd5.Obj) = (Rsp [0]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_17])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_19]));

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_53_17);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_22]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_21);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53_72]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd21.uLng) == 62)
    goto label_24;

DEFLABEL (label_23)
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_74]), 3);

DEFLABEL (label_24)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd19.Lng))))
    goto label_23;
  ((Wrd17.pObj) [11]) = (Wrd5.Obj);
  Rvl = (current_block [OBJECT_53_73]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_8 7
#define LABEL_54_6 9
#define LABEL_54_9 11
#define LABEL_54_13 13
#define LABEL_54_14 15
#define LABEL_54_17 17
#define LABEL_54_11 19
#define LABEL_54_15 21
#define LABEL_54_16 23
#define LABEL_54_21 25
#define LABEL_54_19 27
#define LABEL_54_23 29
#define LABEL_54_25 31
#define LABEL_54_26 33
#define LABEL_54_28 35
#define LABEL_54_30 37
#define LABEL_54_31 39
#define LABEL_54_32 41
#define LABEL_54_33 43
#define LABEL_54_35 45
#define LABEL_54_36 47
#define LABEL_54_37 49
#define LABEL_54_41 51
#define LABEL_54_38 53
#define LABEL_54_39 55
#define LABEL_54_40 57
#define LABEL_54_42 59
#define LABEL_54_43 61
#define LABEL_54_45 63
#define LABEL_54_47 65
#define LABEL_54_46 67
#define LABEL_54_48 69
#define LABEL_54_50 71
#define LABEL_54_51 73
#define TAG_54_52 35
#define LABEL_54_53 75
#define LABEL_54_54 77
#define LABEL_54_55 79
#define LABEL_54_57 81
#define LABEL_54_58 83
#define LABEL_54_59 85
#define LABEL_54_60 87
#define LABEL_54_61 89
#define LABEL_54_62 91
#define LABEL_54_63 93
#define LABEL_54_64 95
#define LABEL_54_65 97
#define LABEL_54_66 99
#define LABEL_54_67 101
#define LABEL_54_68 103
#define LABEL_54_69 105
#define LABEL_54_71 107
#define LABEL_54_70 109
#define LABEL_54_72 111
#define TAG_54_73 54
#define LABEL_54_74 113
#define LABEL_54_75 115
#define LABEL_54_76 117
#define LABEL_54_77 119
#define LABEL_54_78 121
#define LABEL_54_79 123
#define LABEL_54_80 125
#define LABEL_54_81 127
#define LABEL_54_82 129
#define LABEL_54_83 131
#define LABEL_54_84 133
#define LABEL_54_85 135
#define LABEL_54_87 137
#define LABEL_54_88 139
#define LABEL_54_90 141
#define LABEL_54_91 143
#define LABEL_54_92 145
#define LABEL_54_93 147
#define LABEL_54_95 149
#define LABEL_54_96 151
#define LABEL_54_97 153
#define LABEL_54_98 155
#define LABEL_54_99 157
#define LABEL_54_100 159
#define LABEL_54_101 161
#define LABEL_54_103 163
#define LABEL_54_104 165
#define LABEL_54_105 167
#define LABEL_54_106 169
#define LABEL_54_107 171
#define LABEL_54_108 173
#define LABEL_54_109 175
#define LABEL_54_110 177
#define LABEL_54_111 179
#define LABEL_54_112 181
#define LABEL_54_114 183
#define LABEL_54_115 185
#define LABEL_54_116 187
#define LABEL_54_117 189
#define LABEL_54_118 191
#define LABEL_54_119 193
#define ENVIRONMENT_LABEL_54_3 340
#define DEBUGGING_LABEL_54_2 339
#define OBJECT_54_103 338
#define OBJECT_54_102 337
#define OBJECT_54_101 336
#define OBJECT_54_100 335
#define OBJECT_54_99 334
#define OBJECT_54_98 333
#define OBJECT_54_97 332
#define OBJECT_54_96 331
#define OBJECT_54_95 330
#define OBJECT_54_94 329
#define OBJECT_54_93 328
#define OBJECT_54_92 327
#define OBJECT_54_91 326
#define OBJECT_54_90 325
#define OBJECT_54_89 324
#define OBJECT_54_88 323
#define OBJECT_54_87 322
#define OBJECT_54_86 321
#define OBJECT_54_85 320
#define OBJECT_54_84 319
#define OBJECT_54_83 318
#define OBJECT_54_82 317
#define OBJECT_54_81 316
#define OBJECT_54_80 315
#define OBJECT_54_79 314
#define OBJECT_54_78 313
#define OBJECT_54_77 312
#define OBJECT_54_76 311
#define OBJECT_54_75 310
#define OBJECT_54_74 309
#define OBJECT_54_73 308
#define OBJECT_54_72 307
#define OBJECT_54_71 306
#define OBJECT_54_70 305
#define OBJECT_54_69 304
#define OBJECT_54_68 303
#define OBJECT_54_67 302
#define OBJECT_54_66 301
#define OBJECT_54_65 300
#define OBJECT_54_64 299
#define OBJECT_54_63 298
#define OBJECT_54_62 297
#define OBJECT_54_61 296
#define OBJECT_54_60 295
#define OBJECT_54_59 294
#define OBJECT_54_58 293
#define OBJECT_54_57 292
#define OBJECT_54_56 291
#define OBJECT_54_55 290
#define OBJECT_54_54 289
#define OBJECT_54_53 288
#define OBJECT_54_52 287
#define OBJECT_54_51 286
#define OBJECT_54_50 285
#define OBJECT_54_49 284
#define OBJECT_54_48 283
#define OBJECT_54_47 282
#define OBJECT_54_46 281
#define OBJECT_54_45 280
#define OBJECT_54_44 279
#define OBJECT_54_43 278
#define OBJECT_54_42 277
#define OBJECT_54_41 276
#define OBJECT_54_40 275
#define OBJECT_54_39 274
#define OBJECT_54_38 273
#define OBJECT_54_37 272
#define OBJECT_54_36 271
#define OBJECT_54_35 270
#define OBJECT_54_34 269
#define OBJECT_54_33 268
#define OBJECT_54_32 267
#define OBJECT_54_31 266
#define OBJECT_54_30 265
#define OBJECT_54_29 264
#define OBJECT_54_28 263
#define OBJECT_54_27 262
#define OBJECT_54_26 261
#define OBJECT_54_25 260
#define OBJECT_54_24 259
#define OBJECT_54_23 258
#define OBJECT_54_22 257
#define OBJECT_54_21 256
#define OBJECT_54_20 255
#define OBJECT_54_19 254
#define OBJECT_54_18 253
#define OBJECT_54_17 252
#define OBJECT_54_16 251
#define OBJECT_54_15 250
#define OBJECT_54_14 249
#define OBJECT_54_13 248
#define OBJECT_54_12 247
#define OBJECT_54_11 246
#define OBJECT_54_10 245
#define OBJECT_54_9 244
#define OBJECT_54_8 243
#define OBJECT_54_7 242
#define OBJECT_54_6 241
#define OBJECT_54_5 240
#define OBJECT_54_4 239
#define OBJECT_54_3 238
#define OBJECT_54_2 237
#define OBJECT_54_1 236
#define OBJECT_54_0 235
#define EXECUTE_CACHE_54_56 195
#define EXECUTE_CACHE_54_49 197
#define EXECUTE_CACHE_54_44 199
#define EXECUTE_CACHE_54_113 201
#define EXECUTE_CACHE_54_89 203
#define EXECUTE_CACHE_54_29 205
#define EXECUTE_CACHE_54_22 207
#define EXECUTE_CACHE_54_18 209
#define EXECUTE_CACHE_54_10 211
#define EXECUTE_CACHE_54_102 213
#define EXECUTE_CACHE_54_94 215
#define EXECUTE_CACHE_54_86 217
#define EXECUTE_CACHE_54_34 219
#define EXECUTE_CACHE_54_27 221
#define EXECUTE_CACHE_54_24 223
#define EXECUTE_CACHE_54_20 225
#define EXECUTE_CACHE_54_12 227
#define EXECUTE_CACHE_54_7 229
#define FREE_REFERENCE_54_2 232
#define FREE_REFERENCE_54_1 233
#define FREE_REFERENCE_54_0 234
#define FREE_REFERENCES_LABEL_54_0 194
#define NUMBER_OF_LINKER_SECTIONS_54_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_54_4);
      goto initialize_integration_dependenciesB_108;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_54_8);
      goto label_110;

    case 3:
      current_block = (Rpc - LABEL_54_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_54_9);
      goto lambda_107;

    case 5:
      current_block = (Rpc - LABEL_54_13);
      goto label_111;

    case 6:
      current_block = (Rpc - LABEL_54_14);
      goto label_112;

    case 7:
      current_block = (Rpc - LABEL_54_17);
      goto label_113;

    case 8:
      current_block = (Rpc - LABEL_54_11);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_54_15);
      goto continuation_103;

    case 10:
      current_block = (Rpc - LABEL_54_16);
      goto continuation_102;

    case 11:
      current_block = (Rpc - LABEL_54_21);
      goto label_114;

    case 12:
      current_block = (Rpc - LABEL_54_19);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_54_23);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_54_25);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_54_26);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_54_28);
      goto continuation_7;

    case 17:
      current_block = (Rpc - LABEL_54_30);
      goto continuation_10;

    case 18:
      current_block = (Rpc - LABEL_54_31);
      goto continuation_9;

    case 19:
      current_block = (Rpc - LABEL_54_32);
      goto continuation_13;

    case 20:
      current_block = (Rpc - LABEL_54_33);
      goto continuation_12;

    case 21:
      current_block = (Rpc - LABEL_54_35);
      goto continuation_8;

    case 22:
      current_block = (Rpc - LABEL_54_36);
      goto continuation_14;

    case 23:
      current_block = (Rpc - LABEL_54_37);
      goto define_integration_dependencies_90;

    case 24:
      current_block = (Rpc - LABEL_54_41);
      goto label_115;

    case 25:
      current_block = (Rpc - LABEL_54_38);
      goto continuation_11;

    case 26:
      current_block = (Rpc - LABEL_54_39);
      goto continuation_15;

    case 27:
      current_block = (Rpc - LABEL_54_40);
      goto continuation_89;

    case 28:
      current_block = (Rpc - LABEL_54_42);
      goto continuation_16;

    case 29:
      current_block = (Rpc - LABEL_54_43);
      goto continuation_87;

    case 30:
      current_block = (Rpc - LABEL_54_45);
      goto continuation_17;

    case 31:
      current_block = (Rpc - LABEL_54_47);
      goto file_dependency_integration_make_86;

    case 32:
      current_block = (Rpc - LABEL_54_46);
      goto continuation_18;

    case 33:
      current_block = (Rpc - LABEL_54_48);
      goto continuation_80;

    case 34:
      current_block = (Rpc - LABEL_54_50);
      goto continuation_19;

    case 35:
      current_block = (Rpc - LABEL_54_51);
      goto lambda_121;

    case 36:
      current_block = (Rpc - LABEL_54_53);
      goto continuation_20;

    case 37:
      current_block = (Rpc - LABEL_54_54);
      goto continuation_81;

    case 38:
      current_block = (Rpc - LABEL_54_55);
      goto continuation_21;

    case 39:
      current_block = (Rpc - LABEL_54_57);
      goto continuation_22;

    case 40:
      current_block = (Rpc - LABEL_54_58);
      goto continuation_23;

    case 41:
      current_block = (Rpc - LABEL_54_59);
      goto continuation_24;

    case 42:
      current_block = (Rpc - LABEL_54_60);
      goto continuation_25;

    case 43:
      current_block = (Rpc - LABEL_54_61);
      goto continuation_26;

    case 44:
      current_block = (Rpc - LABEL_54_62);
      goto continuation_27;

    case 45:
      current_block = (Rpc - LABEL_54_63);
      goto continuation_28;

    case 46:
      current_block = (Rpc - LABEL_54_64);
      goto continuation_29;

    case 47:
      current_block = (Rpc - LABEL_54_65);
      goto continuation_30;

    case 48:
      current_block = (Rpc - LABEL_54_66);
      goto continuation_31;

    case 49:
      current_block = (Rpc - LABEL_54_67);
      goto continuation_33;

    case 50:
      current_block = (Rpc - LABEL_54_68);
      goto continuation_32;

    case 51:
      current_block = (Rpc - LABEL_54_69);
      goto continuation_34;

    case 52:
      current_block = (Rpc - LABEL_54_71);
      goto file_dependency_integration_join_79;

    case 53:
      current_block = (Rpc - LABEL_54_70);
      goto continuation_35;

    case 54:
      current_block = (Rpc - LABEL_54_72);
      goto lambda_123;

    case 55:
      current_block = (Rpc - LABEL_54_74);
      goto continuation_36;

    case 56:
      current_block = (Rpc - LABEL_54_75);
      goto continuation_37;

    case 57:
      current_block = (Rpc - LABEL_54_76);
      goto continuation_38;

    case 58:
      current_block = (Rpc - LABEL_54_77);
      goto continuation_39;

    case 59:
      current_block = (Rpc - LABEL_54_78);
      goto continuation_40;

    case 60:
      current_block = (Rpc - LABEL_54_79);
      goto continuation_41;

    case 61:
      current_block = (Rpc - LABEL_54_80);
      goto continuation_42;

    case 62:
      current_block = (Rpc - LABEL_54_81);
      goto continuation_48;

    case 63:
      current_block = (Rpc - LABEL_54_82);
      goto continuation_47;

    case 64:
      current_block = (Rpc - LABEL_54_83);
      goto continuation_49;

    case 65:
      current_block = (Rpc - LABEL_54_84);
      goto continuation_46;

    case 66:
      current_block = (Rpc - LABEL_54_85);
      goto continuation_45;

    case 67:
      current_block = (Rpc - LABEL_54_87);
      goto continuation_52;

    case 68:
      current_block = (Rpc - LABEL_54_88);
      goto continuation_51;

    case 69:
      current_block = (Rpc - LABEL_54_90);
      goto continuation_44;

    case 70:
      current_block = (Rpc - LABEL_54_91);
      goto continuation_57;

    case 71:
      current_block = (Rpc - LABEL_54_92);
      goto continuation_56;

    case 72:
      current_block = (Rpc - LABEL_54_93);
      goto continuation_50;

    case 73:
      current_block = (Rpc - LABEL_54_95);
      goto continuation_43;

    case 74:
      current_block = (Rpc - LABEL_54_96);
      goto continuation_58;

    case 75:
      current_block = (Rpc - LABEL_54_97);
      goto continuation_55;

    case 76:
      current_block = (Rpc - LABEL_54_98);
      goto continuation_54;

    case 77:
      current_block = (Rpc - LABEL_54_99);
      goto continuation_61;

    case 78:
      current_block = (Rpc - LABEL_54_100);
      goto continuation_60;

    case 79:
      current_block = (Rpc - LABEL_54_101);
      goto continuation_53;

    case 80:
      current_block = (Rpc - LABEL_54_103);
      goto continuation_64;

    case 81:
      current_block = (Rpc - LABEL_54_104);
      goto continuation_63;

    case 82:
      current_block = (Rpc - LABEL_54_105);
      goto continuation_59;

    case 83:
      current_block = (Rpc - LABEL_54_106);
      goto continuation_65;

    case 84:
      current_block = (Rpc - LABEL_54_107);
      goto continuation_62;

    case 85:
      current_block = (Rpc - LABEL_54_108);
      goto continuation_68;

    case 86:
      current_block = (Rpc - LABEL_54_109);
      goto continuation_67;

    case 87:
      current_block = (Rpc - LABEL_54_110);
      goto continuation_66;

    case 88:
      current_block = (Rpc - LABEL_54_111);
      goto continuation_71;

    case 89:
      current_block = (Rpc - LABEL_54_112);
      goto continuation_70;

    case 90:
      current_block = (Rpc - LABEL_54_114);
      goto continuation_72;

    case 91:
      current_block = (Rpc - LABEL_54_115);
      goto continuation_73;

    case 92:
      current_block = (Rpc - LABEL_54_116);
      goto continuation_74;

    case 93:
      current_block = (Rpc - LABEL_54_117);
      goto continuation_75;

    case 94:
      current_block = (Rpc - LABEL_54_118);
      goto continuation_76;

    case 95:
      current_block = (Rpc - LABEL_54_119);
      goto continuation_77;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_integration_dependenciesB_117)
DEFLABEL (initialize_integration_dependenciesB_108)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_54_4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_54_5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_54_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_54_7]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_54_8]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_54_9]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_54_10]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_54_11]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_54_12]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_54_13]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_54_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_24]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_26]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_27]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_54_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_33]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_34]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_35]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_24]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_54_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_26]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_36]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_37]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_35]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_27]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_54_26);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_29]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_54_25);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_54_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_38]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_16]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_54_31);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_49]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_50]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_51]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_27]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_54_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_29]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_54_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_39]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_40]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_41]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_42]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_54_43]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_54_44]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_54_45]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_54_46]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_54_47]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_54_48]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_54_16]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_34]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_54_33);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_52]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_53]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_51]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_27]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_54_38);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_29]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_54_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_54_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_54_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_12]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_54_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_12]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_11]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_54_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_54_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_10]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_11]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_12]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_54_13]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_54_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 12);
  }

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_54_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_10]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_11]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_12]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_54_13]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 12);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_54_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_13]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 9);
  }

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_54_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_13]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 9);
  }

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_54_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_9]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_10]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_54_11]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_54_12]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_54_13]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_54_4]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 14);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_54_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_13]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_9]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_54_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_10]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 9);
  }

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_54_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_24]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_15]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_16]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_54_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_27]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_54_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_27]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_54_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_12]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_26]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_54_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_56]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_54_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_56]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_54_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_68]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_56]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_12]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_54_68);
  (* (--Rsp)) = Rvl;
  goto file_dependency_integration_join_79;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_54_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_57]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_54_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_58]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_54_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_58]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_54_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_12]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_25]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_54_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_24]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_54_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_24]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_54_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_23]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_54_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_22]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_54_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_22]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_54_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_82]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_29]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_54_82);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_85]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_62]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_63]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_64]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_65]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_54_66]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_54_67]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_54_61]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_54_68]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_54_69]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_54_70]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_54_71]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_54_72]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_54_73]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_54_74]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_54_75]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_54_76]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_54_77]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_54_78]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_54_79]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_54_80]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_54_60]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_86]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_54_85);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_81]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_82]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_81]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_27]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_54_90);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_92]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_12]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_54_95);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_89]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_54_84);
  (* (--Rsp)) = Rvl;
  goto file_dependency_integration_join_79;

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_54_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_61]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_60]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_54_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_88]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_89]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_54_88);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_83]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_84]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_85]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_86]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_87]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_88]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_89]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_54_90]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_54_91]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_54_83]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_94]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_54_93);
  (* (--Rsp)) = Rvl;
  goto file_dependency_integration_join_79;

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_54_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_92]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_29]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_54_92);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_98]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_93]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_16]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_12]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_54_98);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_95]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_96]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_97]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_98]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_99]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_100]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_101]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_54_102]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_54_35]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_102]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_54_101);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_89]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_54_97);
  (* (--Rsp)) = Rvl;
  goto file_dependency_integration_join_79;

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_54_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto file_dependency_integration_join_79;

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_54_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_100]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_94]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_12]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_54_100);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_96]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_100]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_101]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_102]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_35]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_24]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_54_105);
  (* (--Rsp)) = Rvl;
  goto file_dependency_integration_join_79;

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_54_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_104]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_12]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_54_104);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_35]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_27]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_54_107);
  (* (--Rsp)) = Rvl;
  goto file_dependency_integration_join_79;

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_54_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_96]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_35]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_54_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_109]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_110]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_54_50]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_54_51]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_12]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_54_110);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_113]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_54_109);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd6.Obj);
  goto file_dependency_integration_join_79;

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_54_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_112]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_29]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_54_112);
  (* (--Rsp)) = Rvl;
  goto file_dependency_integration_join_79;

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_54_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_12]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_53]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54_51]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_54_114);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_53]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_51]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_54_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_52]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_51]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_54_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_14]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_50]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54_51]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_54_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_50]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_51]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_54_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_119]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_49]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_51]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_103]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_51]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_54_119);
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_54_51]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54_49]);
  (Rsp [5]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54_14]);
  (Rsp [6]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [7]) = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_125;
  Wrd5 = Wrd9;

DEFLABEL (label_124)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_10]));

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_8])), (Wrd6.pObj));

DEFLABEL (label_110)
  (Wrd5.Obj) = Rvl;
  goto label_124;

DEFLABEL (lambda_118)
DEFLABEL (lambda_107)
  INTERRUPT_CHECK (26, LABEL_54_9);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_136;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_136;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_135)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == (current_block [OBJECT_54_19])))
    goto label_126;
  Rvl = (current_block [OBJECT_54_20]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_126)
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_134;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd32.Lng))))
    goto label_134;
  (Wrd26.Obj) = ((Wrd30.pObj) [12]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_133)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_15]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_16]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_1]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_132;
  Wrd47 = Wrd51;

DEFLABEL (label_131)
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_18]));

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_54_16);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_130;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_130;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_129)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_22]));

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_54_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_21]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 62)
    goto label_128;

DEFLABEL (label_127)
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_29]), 3);

DEFLABEL (label_128)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd21.Lng))))
    goto label_127;
  ((Wrd19.pObj) [12]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_54_20]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_130)
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.Obj) = (current_block [OBJECT_54_30]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_18]), 2);

DEFLABEL (label_114)
  (* (--Rsp)) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_17])), (Wrd48.pObj));

DEFLABEL (label_113)
  (Wrd47.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_54_21]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_14]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_18]), 2);

DEFLABEL (label_112)
  (* (--Rsp)) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_54_17]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_18]), 2);

DEFLABEL (label_111)
  (* (--Rsp)) = Rvl;
  goto label_135;

DEFLABEL (define_integration_dependencies_119)
DEFLABEL (define_integration_dependencies_90)
  INTERRUPT_CHECK (26, LABEL_54_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_2]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_138;
  Wrd13 = Wrd17;

DEFLABEL (label_137)
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_54]), 2);

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_54_40);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_43]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_54_55]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_44]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_54_43);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto file_dependency_integration_make_86;

DEFLABEL (label_138)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_41])), (Wrd14.pObj));

DEFLABEL (label_115)
  (Wrd13.Obj) = Rvl;
  goto label_137;

DEFLABEL (file_dependency_integration_make_120)
DEFLABEL (file_dependency_integration_make_86)
  INTERRUPT_CHECK (26, LABEL_54_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_49]));

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_54_48);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_52);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_51])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_10]));

DEFLABEL (lambda_121)
  CLOSURE_HEADER (LABEL_54_51);

DEFLABEL (lambda_84)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_49]));

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_54_54);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if ((Wrd7.Obj) == Rvl)
    goto label_139;
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_56]));

DEFLABEL (label_139)
  Rvl = (current_block [OBJECT_54_20]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (file_dependency_integration_join_122)
DEFLABEL (file_dependency_integration_join_79)
  INTERRUPT_CHECK (26, LABEL_54_71);
  (Wrd5.Obj) = (Rsp [0]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_73);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_72])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_10]));

DEFLABEL (lambda_123)
  CLOSURE_HEADER (LABEL_54_72);

DEFLABEL (lambda_78)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  goto file_dependency_integration_make_86;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_6 7
#define LABEL_55_7 9
#define LABEL_55_8 11
#define LABEL_55_9 13
#define LABEL_55_16 15
#define LABEL_55_11 17
#define TAG_55_12 7
#define ENVIRONMENT_LABEL_55_3 36
#define DEBUGGING_LABEL_55_2 35
#define OBJECT_55_3 34
#define OBJECT_55_2 33
#define OBJECT_55_1 32
#define OBJECT_55_0 31
#define EXECUTE_CACHE_55_18 19
#define EXECUTE_CACHE_55_17 21
#define EXECUTE_CACHE_55_15 23
#define EXECUTE_CACHE_55_14 25
#define EXECUTE_CACHE_55_13 27
#define EXECUTE_CACHE_55_10 29
#define FREE_REFERENCES_LABEL_55_0 18
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_55_4);
      goto make_integration_declaration_10;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_55_6);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_55_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_55_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_55_9);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_55_16);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_55_11);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_integration_declaration_14)
DEFLABEL (make_integration_declaration_10)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_9);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_17;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_55_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_55_7);
  (Wrd9.Obj) = (current_block [OBJECT_55_2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_55_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_55_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55_11])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (Wrd10.Obj) = (current_block [OBJECT_55_1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_3]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_55_11);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_18]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define ENVIRONMENT_LABEL_56_3 10
#define DEBUGGING_LABEL_56_2 9
#define OBJECT_56_2 8
#define OBJECT_56_1 7
#define OBJECT_56_0 6
#define FREE_REFERENCES_LABEL_56_0 6
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
decls_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_56_4);
      goto integration_declarationP_1;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (integration_declarationP_5)
DEFLABEL (integration_declarationP_1)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_9)
  if ((Wrd5.Obj) == (current_block [OBJECT_56_1]))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_56_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
#define LABEL_23 29
#define LABEL_22 31
#define LABEL_25 33
#define LABEL_24 35
#define LABEL_27 37
#define LABEL_26 39
#define LABEL_29 41
#define LABEL_28 43
#define LABEL_31 45
#define LABEL_30 47
#define LABEL_33 49
#define LABEL_32 51
#define LABEL_34 53
#define LABEL_35 55
#define LABEL_36 57
#define ENVIRONMENT_LABEL_3 99
#define DEBUGGING_LABEL_2 98
#define PURIFICATION_ROOT 97
#define OBJECT_27 96
#define OBJECT_26 95
#define OBJECT_25 94
#define OBJECT_24 93
#define OBJECT_23 92
#define OBJECT_22 91
#define OBJECT_21 90
#define OBJECT_20 89
#define OBJECT_19 88
#define OBJECT_18 87
#define OBJECT_17 86
#define OBJECT_16 85
#define OBJECT_15 84
#define OBJECT_14 83
#define OBJECT_13 82
#define OBJECT_12 81
#define OBJECT_11 80
#define OBJECT_10 79
#define OBJECT_9 78
#define OBJECT_8 77
#define OBJECT_7 76
#define OBJECT_6 75
#define OBJECT_5 74
#define OBJECT_4 73
#define OBJECT_3 72
#define OBJECT_2 71
#define OBJECT_1 70
#define OBJECT_0 69
#define FREE_REFERENCE_0 59
#define GLOBAL_EXECUTE_CACHE_21 61
#define GLOBAL_EXECUTE_CACHE_12 63
#define GLOBAL_EXECUTE_CACHE_8 65
#define GLOBAL_EXECUTE_CACHE_5 67
#define FREE_REFERENCES_LABEL_0 58
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
decls_so_df12ecdd1357ada1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
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
      goto continuation_14;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_32;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_13;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_26;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_15;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_27;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto Z__make_source_node_42;

    case 9:
      current_block = (Rpc - LABEL_20);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_29;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_28;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_18;

    case 13:
      current_block = (Rpc - LABEL_23);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto continuation_19;

    case 15:
      current_block = (Rpc - LABEL_25);
      goto label_36;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_20;

    case 17:
      current_block = (Rpc - LABEL_27);
      goto label_37;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_29);
      goto label_38;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_22;

    case 21:
      current_block = (Rpc - LABEL_31);
      goto label_39;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto continuation_23;

    case 23:
      current_block = (Rpc - LABEL_33);
      goto label_40;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_17;

    case 25:
      current_block = (Rpc - LABEL_34);
      goto label_44;

    case 26:
      current_block = (Rpc - LABEL_35);
      goto label_45;

    case 27:
      current_block = (Rpc - LABEL_36);
      goto expression_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_31)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_35])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_45)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_44)
  {
    static const short sections [] =
      {
	0,
	0,
	1,
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
	1,
	1,
	3,
	1,
	1,
	1,
	2,
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
	3,
	2,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 56)
      goto label_43;
    blocks = (current_block [OBJECT_27]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_34])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_43)
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
  (Wrd16.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd20.Obj);
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
  (Wrd32.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_6]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd48.Obj) = (current_block [OBJECT_8]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd52.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd61.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
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

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_47;
  Wrd11 = Wrd15;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_19]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_33)
  (Wrd11.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_32)
  (Wrd11.Obj) = Rvl;
  goto label_48;

DEFLABEL (Z__make_source_node_42)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (Z__make_source_node_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_63;
  Wrd9 = Wrd13;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_21]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_61;
  Wrd9 = Wrd13;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_21]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_59;
  Wrd9 = Wrd13;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_21]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_57;
  Wrd9 = Wrd13;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_21]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_55;
  Wrd9 = Wrd13;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_21]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
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

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_51;
  Wrd9 = Wrd13;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_21]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd6.Obj) = (* (Rsp++));
  (Wrd7.Obj) = (* (Rsp++));
  (Wrd8.Obj) = (* (Rsp++));
  (Wrd9.Obj) = (* (Rsp++));
  (Wrd10.Obj) = (* (Rsp++));
  (Wrd21.Obj) = (MAKE_OBJECT (0, 13));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd14.pObj) = (& (Rhp [-14]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd14.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33])), (Wrd10.pObj));

DEFLABEL (label_40)
  (Wrd9.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd10.pObj));

DEFLABEL (label_39)
  (Wrd9.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd10.pObj));

DEFLABEL (label_38)
  (Wrd9.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd10.pObj));

DEFLABEL (label_37)
  (Wrd9.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd10.pObj));

DEFLABEL (label_36)
  (Wrd9.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd10.pObj));

DEFLABEL (label_35)
  (Wrd9.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd10.pObj));

DEFLABEL (label_34)
  (Wrd9.Obj) = Rvl;
  goto label_62;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_decls_so_df12ecdd1357ada1 [56] =
  {
    { "decls_so_code_1", 4, decls_so_code_1 },
    { "decls_so_code_2", 5, decls_so_code_2 },
    { "decls_so_code_3", 2, decls_so_code_3 },
    { "decls_so_code_4", 21, decls_so_code_4 },
    { "decls_so_code_5", 2, decls_so_code_5 },
    { "decls_so_code_6", 1, decls_so_code_6 },
    { "decls_so_code_7", 1, decls_so_code_7 },
    { "decls_so_code_8", 1, decls_so_code_8 },
    { "decls_so_code_9", 1, decls_so_code_9 },
    { "decls_so_code_10", 1, decls_so_code_10 },
    { "decls_so_code_11", 1, decls_so_code_11 },
    { "decls_so_code_12", 1, decls_so_code_12 },
    { "decls_so_code_13", 1, decls_so_code_13 },
    { "decls_so_code_14", 1, decls_so_code_14 },
    { "decls_so_code_15", 1, decls_so_code_15 },
    { "decls_so_code_16", 1, decls_so_code_16 },
    { "decls_so_code_17", 1, decls_so_code_17 },
    { "decls_so_code_18", 1, decls_so_code_18 },
    { "decls_so_code_19", 1, decls_so_code_19 },
    { "decls_so_code_20", 1, decls_so_code_20 },
    { "decls_so_code_21", 1, decls_so_code_21 },
    { "decls_so_code_22", 1, decls_so_code_22 },
    { "decls_so_code_23", 1, decls_so_code_23 },
    { "decls_so_code_24", 1, decls_so_code_24 },
    { "decls_so_code_25", 1, decls_so_code_25 },
    { "decls_so_code_26", 1, decls_so_code_26 },
    { "decls_so_code_27", 1, decls_so_code_27 },
    { "decls_so_code_28", 1, decls_so_code_28 },
    { "decls_so_code_29", 1, decls_so_code_29 },
    { "decls_so_code_30", 1, decls_so_code_30 },
    { "decls_so_code_31", 1, decls_so_code_31 },
    { "decls_so_code_32", 1, decls_so_code_32 },
    { "decls_so_code_33", 1, decls_so_code_33 },
    { "decls_so_code_34", 1, decls_so_code_34 },
    { "decls_so_code_35", 4, decls_so_code_35 },
    { "decls_so_code_36", 2, decls_so_code_36 },
    { "decls_so_code_37", 4, decls_so_code_37 },
    { "decls_so_code_38", 2, decls_so_code_38 },
    { "decls_so_code_39", 7, decls_so_code_39 },
    { "decls_so_code_40", 12, decls_so_code_40 },
    { "decls_so_code_41", 8, decls_so_code_41 },
    { "decls_so_code_42", 11, decls_so_code_42 },
    { "decls_so_code_43", 6, decls_so_code_43 },
    { "decls_so_code_44", 7, decls_so_code_44 },
    { "decls_so_code_45", 4, decls_so_code_45 },
    { "decls_so_code_46", 67, decls_so_code_46 },
    { "decls_so_code_47", 7, decls_so_code_47 },
    { "decls_so_code_48", 6, decls_so_code_48 },
    { "decls_so_code_49", 6, decls_so_code_49 },
    { "decls_so_code_50", 3, decls_so_code_50 },
    { "decls_so_code_51", 11, decls_so_code_51 },
    { "decls_so_code_52", 3, decls_so_code_52 },
    { "decls_so_code_53", 17, decls_so_code_53 },
    { "decls_so_code_54", 96, decls_so_code_54 },
    { "decls_so_code_55", 8, decls_so_code_55 },
    { "decls_so_code_56", 2, decls_so_code_56 }
  };

int
decl_decls_so_df12ecdd1357ada1 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_decls_so_df12ecdd1357ada1);
  return (0);
}

DECLARE_COMPILED_CODE ("decls.so", 28, decl_decls_so_df12ecdd1357ada1, decls_so_df12ecdd1357ada1)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_decls_so_data_df12ecdd1357ada1 [9031] =
  "\x8d\x03\x5b\xeb\x10\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x0d"
  "\x24\x28\x0d\x28\xb1\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xba\x1d\xb0\x82\x88\x1d\x08\x0d\xbb\x0d\xbc\x0d\xbd\x0d\xbe"
  "\x25\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d"
  "\xb0\x83\x88\x1d\x08\xb3\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x84\x88\x0c\x0c\x08\x0c\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x08\x8f\xb3\xb4\xb5\x25\x0d\x1c\xb3\xb4\x24\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0c"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86"
  "\x88\x08\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x08\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\x08\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x08\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x08\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c"
  "\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x86\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3"
  "\x1c\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x86\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x1b\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xb4\x24\x28\x0d"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x86\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x83\x1b\x1b\x84\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x85\x1b\x1b\x86\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\xb6\x25\xb5\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x85\x02\x1b\x02\x1b"
  "\x86\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x1b\x02\xc1\x1c\x1d\x08\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x1b\x08\x87\x1b\x02\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x02\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x81\x0c\x07\x85\x0c\x82\x0c\x02\x1b\x1b\x1d\x02\x0c"
  "\xb5\x0d\x1c\xb6\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x1b\x82\x0c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x1d\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x02\x1b\x82\x0c\x1b"
  "\x0d\x0d\x1c\x24\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x1b\x1d\x02\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0d\x1c\x0d\x08\x89"
  "\x1b\x08\x88\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\xc2\x0c\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x82\x1b\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x02\x1d\x08\x1b\x84\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c"
  "\xb5\x0d\x1c\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
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
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0d\x0d\x1c\x0d\x28\x0d\x28\x1b\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b"
  "\x1b\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x83\x02\x02"
  "\x02\x86\x85\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x17\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x17\x84\x1b\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d"
  "\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\xc3\x0d"
  "\x1c\x0c\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x08\x14"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x08\x1b"
  "\xb6\xb5\xb4\xb3\x1b\x1b\x1b\xb1\x0d\x17\x1b\x2a\x1e\x1e\x1e\x1e"
  "\x0c\x1b\x2a\x1b\x2a\xb7\x2a\xb2\x2a\x17\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x26\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x5e\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x6d\x61\x63\x68\x69\x6e"
  "\x65\x73\x2f\x43\x2f\x64\x65\x63\x6c\x73\x2e\x69\x6e\x66\x15\x23"
  "\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f"
  "\x6f\x74\x5d\x02\x14\x72\x65\x73\x65\x74\x2d\x73\x6f\x75\x72\x63"
  "\x65\x2d\x6e\x6f\x64\x65\x73\x21\x14\x65\x76\x65\x6e\x74\x3a\x61"
  "\x66\x74\x65\x72\x2d\x72\x65\x73\x74\x6f\x72\x65\x03\x04\x14\x61"
  "\x64\x64\x2d\x65\x76\x65\x6e\x74\x2d\x72\x65\x63\x65\x69\x76\x65"
  "\x72\x21\x02\x03\x20\x0a\x81\x81\x02\x1f\x08\x81\x85\x02\x1e\x06"
  "\x81\x83\x02\x1d\x04\x82\x02\x09\x14\x02\x02\x11\x73\x6f\x75\x72"
  "\x63\x65\x2d\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x0c\x73\x6f\x75"
  "\x72\x63\x65\x2d\x68\x61\x73\x68\x0d\x73\x6f\x75\x72\x63\x65\x2d"
  "\x6e\x6f\x64\x65\x73\x15\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64"
  "\x65\x73\x2f\x62\x79\x2d\x72\x61\x6e\x6b\x05\x25\x0c\x81\x81\x02"
  "\x24\x0a\x81\x81\x02\x23\x08\x81\x81\x02\x22\x06\x81\x81\x02\x21"
  "\x04\x82\x02\x0b\x15\x02\x02\x02\x02\x14\x73\x65\x74\x75\x70\x2d"
  "\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65\x73\x21\x09\x02\x27"
  "\x06\x81\x81\x02\x26\x04\x82\x02\x05\x0f\x0a\x02\x02\x2f\x24\x43"
  "\x61\x6e\x27\x74\x20\x66\x69\x6e\x64\x20\x73\x6f\x75\x72\x63\x65"
  "\x20\x66\x69\x6c\x65\x73\x20\x6f\x66\x20\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x05\x62\x61\x63\x6b\x05\x62\x61\x73\x65\x06\x66\x67\x67"
  "\x65\x6e\x06\x66\x67\x6f\x70\x74\x08\x72\x74\x6c\x62\x61\x73\x65"
  "\x07\x72\x74\x6c\x67\x65\x6e\x07\x72\x74\x6c\x6f\x70\x74\x0b\x6d"
  "\x61\x63\x68\x69\x6e\x65\x73\x2f\x43\x04\x17\x73\x6f\x75\x72\x63"
  "\x65\x2d\x66\x69\x6c\x65\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x0b\x04\x04\x0c\x61\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70\x21"
  "\x03\x06\x65\x72\x72\x6f\x72\x0c\x02\x17\x6d\x61\x6b\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x05\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x0d"
  "\x04\x04\x6d\x61\x70\x0e\x03\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x6e\x61\x6d\x65\x03\x0f\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x2d\x72\x65\x61\x64\x02\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a"
  "\x65\x2f\x73\x79\x6e\x74\x61\x78\x2d\x64\x65\x70\x65\x6e\x64\x65"
  "\x6e\x63\x69\x65\x73\x21\x0f\x03\x11\x6d\x61\x6b\x65\x2f\x73\x6f"
  "\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65\x10\x02\x25\x69\x6e\x69\x74"
  "\x69\x61\x6c\x69\x7a\x65\x2f\x69\x6e\x74\x65\x67\x72\x61\x74\x69"
  "\x6f\x6e\x2d\x64\x65\x70\x65\x6e\x64\x65\x6e\x63\x69\x65\x73\x21"
  "\x11\x05\x10\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x70\x75"
  "\x74\x21\x02\x13\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65\x73"
  "\x2f\x72\x61\x6e\x6b\x21\x12\x0d\x3c\x2c\x81\x85\x02\x3b\x2a\x81"
  "\x81\x02\x3a\x28\x81\x8b\x02\x39\x26\x81\x83\x02\x38\x24\x81\x81"
  "\x02\x37\x22\x81\x87\x02\x36\x20\x83\x04\x35\x1e\x81\x81\x02\x34"
  "\x1c\x81\x81\x02\x33\x1a\x81\x87\x02\x32\x18\x81\x85\x02\x31\x16"
  "\x81\x85\x02\x30\x14\x81\x83\x02\x2f\x12\x81\x81\x02\x2e\x10\x81"
  "\x81\x02\x2d\x0e\x81\x89\x02\x2c\x0c\x83\x04\x2b\x0a\x81\x83\x02"
  "\x2a\x08\x81\x81\x02\x29\x06\x81\x83\x02\x28\x04\x82\x02\x2b\x53"
  "\x13\x02\x02\x2f\x04\x0e\x05\x0d\x03\x3e\x06\x81\x85\x02\x3d\x04"
  "\xfe\x05\x05\x0e\x14\x02\x3f\x04\x82\x02\x03\x15\x02\x08\x40\x04"
  "\x82\x02\x03\x16\x02\x09\x41\x04\x82\x02\x03\x17\x02\x0a\x42\x04"
  "\x82\x02\x03\x18\x02\x0b\x43\x04\x82\x02\x03\x19\x02\x0c\x44\x04"
  "\x82\x02\x03\x1a\x02\x0d\x45\x04\x82\x02\x03\x1b\x02\x0e\x0c\x25"
  "\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x1c\x46\x04\x83\x04\x03"
  "\x1d\x02\x0f\x1c\x47\x04\x83\x04\x03\x1e\x02\x10\x1c\x48\x04\x83"
  "\x04\x03\x1f\x02\x11\x1c\x49\x04\x83\x04\x03\x20\x02\x12\x1c\x4a"
  "\x04\x83\x04\x03\x21\x02\x13\x1c\x4b\x04\x83\x04\x03\x22\x02\x14"
  "\x1c\x08\x4c\x04\x83\x04\x03\x23\x02\x15\x1c\x09\x4d\x04\x83\x04"
  "\x03\x24\x02\x16\x1c\x0a\x4e\x04\x83\x04\x03\x25\x02\x17\x1c\x0b"
  "\x4f\x04\x83\x04\x03\x26\x02\x18\x1c\x0c\x50\x04\x83\x04\x03\x27"
  "\x02\x19\x1c\x0d\x51\x04\x83\x04\x03\x28\x02\x1a\x0d\x25\x72\x65"
  "\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x29\x02\x52\x04\x84\x06\x03"
  "\x2a\x02\x1b\x29\x02\x53\x04\x84\x06\x03\x2b\x02\x1c\x29\x02\x54"
  "\x04\x84\x06\x03\x2c\x02\x1d\x29\x02\x55\x04\x84\x06\x03\x2d\x02"
  "\x1e\x29\x02\x08\x56\x04\x84\x06\x03\x2e\x02\x1f\x29\x02\x09\x57"
  "\x04\x84\x06\x03\x2f\x02\x20\x29\x02\x0a\x58\x04\x84\x06\x03\x30"
  "\x02\x21\x29\x02\x0b\x59\x04\x84\x06\x03\x31\x02\x22\x29\x02\x0c"
  "\x5a\x04\x84\x06\x03\x32\x02\x23\x29\x02\x0d\x5b\x04\x84\x06\x03"
  "\x33\x02\x24\x1c\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x34\x02\x5f\x0a\x81\x85"
  "\x02\x5e\x08\x81\x83\x02\x5d\x06\x81\x83\x02\x5c\x04\x83\x04\x09"
  "\x12\x35\x02\x25\x03\x0b\x2d\x3e\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x04\x12\x25\x6d\x61\x6b\x65\x2f\x73\x6f\x75\x72\x63\x65\x2d\x6e"
  "\x6f\x64\x65\x36\x03\x61\x06\x81\x85\x02\x60\x04\x83\x04\x05\x0d"
  "\x37\x02\x26\x15\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x73\x6f\x75\x72"
  "\x63\x65\x20\x66\x69\x6c\x65\x3a\x02\x05\x0f\x68\x61\x73\x68\x2d"
  "\x74\x61\x62\x6c\x65\x2f\x67\x65\x74\x04\x0c\x03\x65\x0a\x81\x83"
  "\x02\x64\x08\x81\x85\x02\x63\x06\x81\x89\x02\x62\x04\x83\x04\x09"
  "\x14\x38\x02\x27\x1c\x04\x05\x6d\x65\x6d\x71\x39\x02\x67\x06\x81"
  "\x85\x02\x66\x04\x83\x04\x05\x0d\x3a\x02\x28\x02\x29\x1c\x04\x39"
  "\x04\x13\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65\x2f\x63\x6c"
  "\x6f\x73\x65\x21\x3b\x03\x6e\x10\x81\x85\x02\x6d\x0e\x81\x85\x02"
  "\x6c\x0c\x81\x85\x02\x6b\x0a\x81\x85\x02\x6a\x08\x81\x85\x02\x69"
  "\x06\x81\x87\x02\x68\x04\x84\x06\x0f\x1c\x3c\x02\x29\x02\x29\x1c"
  "\x04\x39\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x3d\x04\x3b\x04"
  "\x7a\x1a\x81\x85\x02\x79\x18\x81\x85\x02\x78\x16\x81\x85\x02\x77"
  "\x14\x81\x85\x02\x76\x12\x81\x87\x02\x75\x10\x81\x85\x02\x74\x0e"
  "\x81\x85\x02\x73\x0c\x81\x85\x02\x72\x0a\x81\x85\x02\x71\x08\x81"
  "\x85\x02\x70\x06\x81\x87\x02\x6f\x04\x84\x06\x19\x28\x3e\x02\x2a"
  "\x02\x02\x02\x03\x16\x63\x6f\x6d\x70\x75\x74\x65\x2d\x64\x65\x70"
  "\x65\x6e\x64\x65\x6e\x63\x69\x65\x73\x21\x3f\x03\x0f\x63\x6f\x6d"
  "\x70\x75\x74\x65\x2d\x72\x61\x6e\x6b\x73\x21\x40\x03\x1a\x73\x6f"
  "\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65\x73\x2f\x73\x6f\x72\x74\x2d"
  "\x62\x79\x2d\x72\x61\x6e\x6b\x41\x04\x82\x01\x12\x81\x81\x02\x81"
  "\x01\x10\x81\x81\x02\x80\x01\x0e\x81\x83\x02\x7f\x0c\x81\x81\x02"
  "\x7e\x0a\x81\x83\x02\x7d\x08\x81\x81\x02\x7c\x06\x81\x83\x02\x7b"
  "\x04\x82\x02\x11\x20\x42\x02\x2b\x02\x09\x29\x08\x1c\x04\x3d\x04"
  "\x18\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d"
  "\x6e\x65\x67\x61\x74\x69\x76\x65\x43\x04\x39\x04\x8d\x01\x18\x81"
  "\x85\x02\x8c\x01\x16\x81\x85\x02\x8b\x01\x14\x81\x87\x02\x8a\x01"
  "\x12\x81\x85\x02\x89\x01\x10\x81\x85\x02\x88\x01\x0e\x81\x8b\x02"
  "\x87\x01\x0c\x81\x83\x02\x86\x01\x0a\x81\x83\x02\x85\x01\x08\x81"
  "\x87\x02\x84\x01\x06\x83\x04\x83\x01\x04\x83\x04\x17\x28\x39\x02"
  "\x2c\x04\x63\x64\x72\x44\x29\x0a\x04\x63\x61\x72\x45\x02\x03\x12"
  "\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65\x2f\x72\x61\x6e\x6b"
  "\x2a\x46\x02\x93\x01\x0e\x81\x85\x02\x92\x01\x0c\x81\x89\x02\x91"
  "\x01\x0a\x81\x87\x02\x90\x01\x08\x81\x85\x02\x8f\x01\x06\x81\x85"
  "\x02\x8e\x01\x04\x83\x04\x0d\x19\x47\x02\x2d\x44\x0a\x45\x1c\x08"
  "\x04\x04\x6d\x61\x78\x02\x9a\x01\x10\x81\x87\x02\x99\x01\x0e\x81"
  "\x87\x02\x98\x01\x0c\x81\x85\x02\x97\x01\x0a\x81\x85\x02\x96\x01"
  "\x08\x81\x85\x02\x95\x01\x06\x81\x83\x02\x94\x01\x04\x83\x04\x0f"
  "\x1c\x48\x02\x2e\x1c\x0a\x04\x05\x73\x6f\x72\x74\x02\x9e\x01\x0a"
  "\x81\x85\x02\x9d\x01\x08\x81\x85\x02\x9c\x01\x06\x84\x06\x9b\x01"
  "\x04\x83\x04\x09\x12\x49\x02\x2f\x0d\x20\x64\x65\x70\x65\x6e\x64"
  "\x73\x20\x6f\x6e\x20\x0e\x42\x65\x67\x69\x6e\x20\x70\x61\x73\x73"
  "\x20\x32\x3a\x18\x20\x6e\x65\x77\x65\x72\x20\x74\x68\x61\x6e\x20"
  "\x64\x65\x70\x65\x6e\x64\x65\x6e\x63\x79\x20\x20\x53\x6f\x75\x72"
  "\x63\x65\x20\x66\x69\x6c\x65\x20\x6e\x65\x77\x65\x72\x20\x74\x68"
  "\x61\x6e\x20\x62\x69\x6e\x61\x72\x79\x3a\x20\x0d\x42\x69\x6e\x61"
  "\x72\x79\x20\x66\x69\x6c\x65\x20\x14\x4d\x69\x73\x73\x69\x6e\x67"
  "\x20\x73\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x0e\x42\x65\x67"
  "\x69\x6e\x20\x70\x61\x73\x73\x20\x31\x3a\x04\x73\x63\x6d\x04\x65"
  "\x78\x74\x08\x1c\x29\x02\x0d\x04\x62\x69\x6e\x2a\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x3a\x65\x6e\x61\x62\x6c\x65\x2d\x69\x6e\x74\x65"
  "\x67\x72\x61\x74\x69\x6f\x6e\x2d\x64\x65\x63\x6c\x61\x72\x61\x74"
  "\x69\x6f\x6e\x73\x3f\x4a\x04\x02\x1a\x6d\x61\x79\x62\x65\x2d\x73"
  "\x65\x74\x75\x70\x2d\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65"
  "\x73\x21\x4b\x04\x3d\x04\x12\x6d\x6f\x64\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x74\x69\x6d\x65\x4c\x04\x0e\x74\x68\x65\x72\x65"
  "\x2d\x65\x78\x69\x73\x74\x73\x3f\x03\x18\x77\x72\x69\x74\x65\x2d"
  "\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x6c\x69\x6e"
  "\x65\x4d\x04\x12\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77"
  "\x2d\x74\x79\x70\x65\x4e\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74"
  "\x72\x69\x6e\x67\x4f\x03\x11\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d"
  "\x64\x65\x6c\x65\x74\x65\x21\x50\x04\x0c\x03\x14\x73\x6f\x75\x72"
  "\x63\x65\x2d\x6e\x6f\x64\x65\x2f\x73\x79\x6e\x74\x61\x78\x21\x0c"
  "\x04\x06\x77\x72\x69\x74\x65\x51\x03\x16\x73\x6f\x75\x72\x63\x65"
  "\x2d\x6e\x6f\x64\x65\x2f\x63\x69\x72\x63\x75\x6c\x61\x72\x3f\x52"
  "\x03\x13\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65\x2f\x74\x6f"
  "\x75\x63\x68\x21\x53\x0e\xe1\x01\x88\x01\x81\x83\x02\xe0\x01\x86"
  "\x01\x81\x85\x02\xdf\x01\x84\x01\x81\x85\x02\xde\x01\x82\x01\x81"
  "\x83\x02\xdd\x01\x80\x01\x83\x04\xdc\x01\x7e\x81\x85\x02\xdb\x01"
  "\x7c\x81\x85\x02\xda\x01\x7a\x81\x85\x02\xd9\x01\x78\x83\x04\xd8"
  "\x01\x76\x81\x81\x02\xd7\x01\x74\x81\x81\x02\xd6\x01\x72\x81\x85"
  "\x02\xd5\x01\x70\x81\x89\x02\xd4\x01\x6e\x81\x85\x02\xd3\x01\x6c"
  "\x81\x85\x02\xd2\x01\x6a\x81\x85\x02\xd1\x01\x68\x81\x83\x02\xd0"
  "\x01\x66\x83\x04\xcf\x01\x64\x81\x81\x02\xce\x01\x62\x81\x89\x02"
  "\xcd\x01\x60\x81\x85\x02\xcc\x01\x5e\x81\x85\x02\xcb\x01\x5c\x81"
  "\x85\x02\xca\x01\x5a\x81\x83\x02\xc9\x01\x58\x83\x04\xc8\x01\x56"
  "\x81\x85\x02\xc7\x01\x54\x81\x81\x02\xc6\x01\x52\x81\x85\x02\xc5"
  "\x01\x50\x81\x85\x02\xc4\x01\x4e\x81\x85\x02\xc3\x01\x4c\x81\x85"
  "\x02\xc2\x01\x4a\x81\x85\x02\xc1\x01\x48\x81\x87\x02\xc0\x01\x46"
  "\x81\x89\x02\xbf\x01\x44\x81\x85\x02\xbe\x01\x42\x81\x87\x02\xbd"
  "\x01\x40\x81\x83\x02\xbc\x01\x3e\x83\x04\xbb\x01\x3c\x81\x83\x02"
  "\xba\x01\x3a\x81\x81\x02\xb9\x01\x38\x81\x87\x02\xb8\x01\x36\x81"
  "\x85\x02\xb7\x01\x34\x81\x85\x02\xb6\x01\x32\x81\x87\x02\xb5\x01"
  "\x30\x81\x85\x02\xb4\x01\x2e\x81\x83\x02\xb3\x01\x2c\x83\x04\xb2"
  "\x01\x2a\x81\x83\x02\xb1\x01\x28\x81\x87\x02\xb0\x01\x26\x81\x83"
  "\x02\xaf\x01\x24\x83\x04\xae\x01\x22\x81\x81\x02\xad\x01\x20\x81"
  "\x89\x02\xac\x01\x1e\x81\x83\x02\xab\x01\x1c\x83\x04\xaa\x01\x1a"
  "\x81\x85\x02\xa9\x01\x18\x81\x83\x02\xa8\x01\x16\x81\x81\x02\xa7"
  "\x01\x14\x83\x04\xa6\x01\x12\x81\x83\x02\xa5\x01\x10\x81\x83\x02"
  "\xa4\x01\x0e\x81\x81\x02\xa3\x01\x0c\x81\x81\x02\xa2\x01\x0a\x81"
  "\x81\x02\xa1\x01\x08\x81\x83\x02\xa0\x01\x06\x81\x81\x02\x9f\x01"
  "\x04\x82\x02\x87\x01\xbc\x01\x54\x02\x30\x02\x04\x65\x78\x74\x1c"
  "\x01\x05\x17\x73\x66\x2f\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64"
  "\x65\x66\x61\x75\x6c\x74\x69\x6e\x67\x55\x03\x10\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x2d\x74\x6f\x75\x63\x68\x21\x56\x04\x4e\x04\xe8"
  "\x01\x10\x81\x89\x02\xe7\x01\x0e\x81\x87\x02\xe6\x01\x0c\x81\x87"
  "\x02\xe5\x01\x0a\x85\x08\xe4\x01\x08\x81\x83\x02\xe3\x01\x06\x81"
  "\x89\x02\xe2\x01\x04\x83\x04\x0f\x1e\x57\x02\x31\x0d\x54\x6f\x75"
  "\x63\x68\x20\x66\x69\x6c\x65\x3a\x20\x02\x03\x0d\x66\x69\x6c\x65"
  "\x2d\x65\x78\x69\x73\x74\x73\x3f\x58\x03\x4d\x03\x0b\x66\x69\x6c"
  "\x65\x2d\x74\x6f\x75\x63\x68\x04\x4f\x03\x12\x65\x6e\x6f\x75\x67"
  "\x68\x2d\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x59\x04\x51\x07"
  "\xee\x01\x0e\x81\x85\x02\xed\x01\x0c\x81\x85\x02\xec\x01\x0a\x81"
  "\x85\x02\xeb\x01\x08\x81\x83\x02\xea\x01\x06\x81\x83\x02\xe9\x01"
  "\x04\x83\x04\x0d\x1f\x5a\x02\x32\x0e\x44\x65\x6c\x65\x74\x65\x20"
  "\x66\x69\x6c\x65\x3a\x20\x02\x03\x58\x03\x4d\x03\x0c\x64\x65\x6c"
  "\x65\x74\x65\x2d\x66\x69\x6c\x65\x04\x4f\x03\x59\x04\x51\x07\xf4"
  "\x01\x0e\x81\x85\x02\xf3\x01\x0c\x81\x85\x02\xf2\x01\x0a\x81\x85"
  "\x02\xf1\x01\x08\x81\x83\x02\xf0\x01\x06\x81\x83\x02\xef\x01\x04"
  "\x83\x04\x0d\x1f\x59\x02\x33\x02\x4b\x03\x16\x66\x69\x6c\x65\x6e"
  "\x61\x6d\x65\x2d\x3e\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65"
  "\x58\x03\x0c\x04\xf7\x01\x08\x81\x83\x02\xf6\x01\x06\x81\x83\x02"
  "\xf5\x01\x04\x83\x04\x07\x11\x51\x02\x34\x0c\x0b\x1c\x01\x4a\x13"
  "\x69\x64\x65\x6e\x74\x69\x74\x79\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x19\x69\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x2d\x64"
  "\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x3f\x4f\x04\x05\x55\x07"
  "\x0c\x73\x66\x2f\x69\x6e\x74\x65\x72\x6e\x61\x6c\x04\x43\x04\x82"
  "\x02\x18\x81\x85\x02\x81\x02\x16\x83\x04\x80\x02\x14\x81\x8d\x02"
  "\xff\x01\x12\x81\x91\x02\xfe\x01\x10\x81\x91\x02\xfd\x01\x0e\x81"
  "\x8f\x02\xfc\x01\x0c\x81\x8d\x02\xfb\x01\x0a\x81\x89\x02\xfa\x01"
  "\x08\x81\x83\x02\xf9\x01\x06\x81\x89\x02\xf8\x01\x04\x83\x04\x17"
  "\x2a\x55\x02\x35\x1c\x04\x4e\x03\x17\x66\x69\x6c\x65\x2d\x6d\x6f"
  "\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x69\x6d\x65\x03"
  "\x85\x02\x08\x81\x85\x02\x84\x02\x06\x81\x89\x02\x83\x02\x04\x84"
  "\x06\x07\x11\x4e\x02\x36\x05\x62\x61\x73\x65\x07\x74\x6f\x70\x6c"
  "\x65\x76\x07\x62\x6c\x6f\x63\x6b\x73\x05\x63\x66\x67\x31\x05\x63"
  "\x66\x67\x32\x05\x63\x66\x67\x33\x07\x63\x6f\x6e\x73\x74\x72\x07"
  "\x63\x6f\x6e\x74\x69\x6e\x07\x63\x74\x79\x70\x65\x73\x06\x64\x65"
  "\x62\x75\x67\x07\x65\x6e\x75\x6d\x65\x72\x07\x69\x6e\x66\x6e\x65"
  "\x77\x07\x6c\x76\x61\x6c\x75\x65\x07\x6f\x62\x6a\x65\x63\x74\x07"
  "\x70\x6d\x65\x72\x6c\x79\x07\x70\x72\x6f\x63\x65\x64\x07\x72\x65"
  "\x66\x63\x74\x78\x07\x72\x76\x61\x6c\x75\x65\x06\x73\x63\x6f\x64"
  "\x65\x05\x73\x65\x74\x73\x07\x73\x75\x62\x70\x72\x62\x07\x73\x77"
  "\x69\x74\x63\x68\x06\x75\x74\x69\x6c\x73\x05\x62\x61\x63\x6b\x07"
  "\x69\x6e\x73\x73\x65\x71\x07\x6c\x61\x70\x67\x6e\x31\x07\x6c\x61"
  "\x70\x67\x6e\x32\x07\x6c\x69\x6e\x65\x61\x72\x07\x72\x65\x67\x6d"
  "\x61\x70\x05\x63\x74\x6f\x70\x07\x6d\x61\x63\x68\x69\x6e\x07\x72"
  "\x75\x6c\x72\x65\x77\x07\x72\x67\x73\x70\x63\x6d\x07\x64\x65\x63"
  "\x6c\x61\x72\x06\x66\x67\x67\x65\x6e\x06\x63\x61\x6e\x6f\x6e\x29"
  "\x02\x0b\x06\x66\x67\x6f\x70\x74\x07\x62\x6c\x6b\x74\x79\x70\x07"
  "\x63\x6c\x6f\x73\x61\x6e\x07\x63\x6f\x6e\x65\x63\x74\x07\x63\x6f"
  "\x6e\x74\x61\x6e\x07\x64\x65\x6c\x69\x6e\x74\x07\x64\x65\x73\x65"
  "\x6e\x76\x07\x65\x6e\x76\x6f\x70\x74\x07\x66\x6f\x6c\x63\x6f\x6e"
  "\x07\x6f\x66\x66\x73\x65\x74\x07\x6f\x70\x65\x72\x61\x6e\x06\x6f"
  "\x72\x64\x65\x72\x06\x6f\x75\x74\x65\x72\x06\x70\x61\x72\x61\x6d"
  "\x06\x72\x65\x6f\x72\x64\x07\x72\x65\x74\x65\x71\x76\x06\x72\x65"
  "\x75\x73\x65\x07\x73\x69\x64\x65\x66\x66\x07\x73\x69\x6d\x61\x70"
  "\x70\x07\x73\x69\x6d\x70\x6c\x65\x07\x73\x75\x62\x66\x72\x65\x07"
  "\x76\x61\x72\x69\x6e\x64\x08\x72\x74\x6c\x62\x61\x73\x65\x07\x72"
  "\x65\x67\x73\x65\x74\x07\x72\x67\x72\x61\x70\x68\x07\x72\x74\x6c"
  "\x63\x66\x67\x07\x72\x74\x6c\x63\x6f\x6e\x07\x72\x74\x6c\x65\x78"
  "\x70\x07\x72\x74\x6c\x69\x6e\x65\x07\x72\x74\x6c\x6f\x62\x6a\x07"
  "\x72\x74\x6c\x72\x65\x67\x07\x72\x74\x6c\x74\x79\x31\x07\x72\x74"
  "\x6c\x74\x79\x32\x09\x76\x61\x6c\x63\x6c\x61\x73\x73\x07\x66\x6e"
  "\x64\x62\x6c\x6b\x07\x66\x6e\x64\x76\x61\x72\x07\x6f\x70\x6e\x63"
  "\x6f\x64\x07\x72\x67\x63\x6f\x6d\x62\x07\x72\x67\x70\x72\x6f\x63"
  "\x07\x72\x67\x72\x65\x74\x6e\x07\x72\x67\x72\x76\x61\x6c\x07\x72"
  "\x67\x73\x74\x6d\x74\x07\x72\x74\x6c\x67\x65\x6e\x0b\x6d\x61\x63"
  "\x68\x69\x6e\x65\x73\x2f\x43\x07\x6c\x61\x70\x67\x65\x6e\x07\x72"
  "\x75\x6c\x65\x73\x31\x07\x72\x75\x6c\x65\x73\x32\x07\x72\x75\x6c"
  "\x65\x73\x33\x07\x72\x75\x6c\x65\x73\x34\x07\x72\x75\x6c\x66\x69"
  "\x78\x07\x72\x75\x6c\x66\x6c\x6f\x05\x63\x6f\x75\x74\x0c\x74\x72"
  "\x61\x64\x69\x74\x69\x6f\x6e\x61\x6c\x09\x73\x74\x61\x63\x6b\x69"
  "\x66\x79\x09\x73\x74\x61\x63\x6b\x6f\x70\x73\x07\x72\x74\x6c\x6f"
  "\x70\x74\x07\x72\x61\x6c\x6c\x6f\x63\x07\x72\x63\x6f\x6d\x70\x72"
  "\x06\x72\x63\x73\x65\x31\x06\x72\x63\x73\x65\x32\x07\x72\x63\x73"
  "\x65\x65\x70\x07\x72\x63\x73\x65\x68\x74\x07\x72\x63\x73\x65\x72"
  "\x71\x07\x72\x63\x73\x65\x73\x72\x07\x72\x64\x65\x62\x75\x67\x07"
  "\x72\x64\x66\x6c\x6f\x77\x07\x72\x65\x72\x69\x74\x65\x07\x72\x69"
  "\x6e\x76\x65\x78\x06\x72\x6c\x69\x66\x65\x07\x72\x74\x6c\x63\x73"
  "\x6d\x09\x63\x6f\x6d\x70\x69\x6c\x65\x72\x4d\x0d\x6c\x61\x70\x2d"
  "\x73\x79\x6e\x74\x61\x78\x65\x72\x4d\x03\x0e\x2d\x3e\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x11\x10\x66\x69\x6c\x65\x6e\x61"
  "\x6d\x65\x2f\x61\x70\x70\x65\x6e\x64\x4d\x0e\x4d\x0c\x4d\x18\x4d"
  "\x06\x4d\x0b\x4d\x08\x4d\x19\x4d\x04\x3d\x03\x58\x0a\x07\x61\x70"
  "\x70\x65\x6e\x64\x4a\x0d\x96\x02\x24\x81\x95\x02\x95\x02\x22\x81"
  "\x93\x02\x94\x02\x20\x81\x91\x02\x93\x02\x1e\x81\x8f\x02\x92\x02"
  "\x1c\x81\x8d\x02\x91\x02\x1a\x81\x85\x02\x90\x02\x18\x81\x8b\x02"
  "\x8f\x02\x16\x81\x85\x02\x8e\x02\x14\x81\x89\x02\x8d\x02\x12\x81"
  "\x85\x02\x8c\x02\x10\x81\x83\x02\x8b\x02\x0e\x81\x87\x02\x8a\x02"
  "\x0c\x81\x85\x02\x89\x02\x0a\x81\x81\x02\x88\x02\x08\x81\x83\x02"
  "\x87\x02\x06\x81\x81\x02\x86\x02\x04\x82\x02\x23\xae\x01\x43\x02"
  "\x37\x07\x6d\x65\x72\x6d\x61\x70\x07\x72\x61\x6c\x6c\x6f\x63\x07"
  "\x72\x63\x6f\x6d\x70\x72\x07\x72\x64\x65\x62\x75\x67\x07\x72\x64"
  "\x66\x6c\x6f\x77\x07\x72\x65\x72\x69\x74\x65\x07\x72\x69\x6e\x76"
  "\x65\x78\x06\x72\x6c\x69\x66\x65\x07\x72\x74\x6c\x63\x73\x6d\x07"
  "\x72\x65\x67\x73\x65\x74\x07\x72\x75\x6c\x72\x65\x77\x07\x72\x65"
  "\x66\x63\x74\x78\x07\x66\x6e\x64\x62\x6c\x6b\x07\x66\x6e\x64\x76"
  "\x61\x72\x07\x6f\x70\x6e\x63\x6f\x64\x07\x72\x67\x63\x6f\x6d\x62"
  "\x07\x72\x67\x70\x72\x6f\x63\x07\x72\x67\x72\x65\x74\x6e\x07\x72"
  "\x67\x72\x76\x61\x6c\x07\x72\x67\x73\x74\x6d\x74\x07\x72\x74\x6c"
  "\x67\x65\x6e\x07\x64\x65\x63\x6c\x61\x72\x06\x66\x67\x67\x65\x6e"
  "\x07\x62\x6c\x6b\x74\x79\x70\x07\x63\x6c\x6f\x73\x61\x6e\x07\x63"
  "\x6f\x6e\x65\x63\x74\x07\x63\x6f\x6e\x74\x61\x6e\x07\x64\x65\x6c"
  "\x69\x6e\x74\x07\x64\x65\x73\x65\x6e\x76\x07\x65\x6e\x76\x6f\x70"
  "\x74\x07\x66\x6f\x6c\x63\x6f\x6e\x07\x6f\x66\x66\x73\x65\x74\x07"
  "\x6f\x70\x65\x72\x61\x6e\x06\x6f\x72\x64\x65\x72\x06\x70\x61\x72"
  "\x61\x6d\x06\x6f\x75\x74\x65\x72\x07\x72\x65\x74\x65\x71\x76\x07"
  "\x73\x69\x64\x65\x66\x66\x07\x73\x69\x6d\x61\x70\x70\x07\x73\x69"
  "\x6d\x70\x6c\x65\x07\x73\x75\x62\x66\x72\x65\x07\x76\x61\x72\x69"
  "\x6e\x64\x06\x72\x65\x75\x73\x65\x06\x66\x67\x6f\x70\x74\x06\x72"
  "\x65\x6f\x72\x64\x07\x72\x74\x6c\x69\x6e\x65\x07\x72\x74\x6c\x65"
  "\x78\x70\x07\x72\x74\x6c\x63\x6f\x6e\x02\x2f\x06\x61\x70\x70\x6c"
  "\x79\x07\x6c\x61\x70\x67\x6e\x31\x07\x6c\x61\x70\x67\x6e\x32\x05"
  "\x62\x61\x63\x6b\x07\x6c\x69\x6e\x65\x61\x72\x07\x72\x65\x67\x6d"
  "\x61\x70\x07\x72\x75\x6c\x65\x73\x31\x07\x72\x75\x6c\x65\x73\x32"
  "\x07\x72\x75\x6c\x65\x73\x33\x07\x72\x75\x6c\x65\x73\x34\x07\x72"
  "\x75\x6c\x66\x69\x78\x07\x72\x75\x6c\x66\x6c\x6f\x05\x63\x6f\x75"
  "\x74\x0c\x74\x72\x61\x64\x69\x74\x69\x6f\x6e\x61\x6c\x09\x73\x74"
  "\x61\x63\x6b\x69\x66\x79\x09\x73\x74\x61\x63\x6b\x6f\x70\x73\x07"
  "\x6c\x61\x70\x67\x65\x6e\x06\x72\x63\x73\x65\x32\x07\x72\x63\x73"
  "\x65\x65\x70\x07\x72\x74\x6c\x6f\x70\x74\x06\x72\x63\x73\x65\x31"
  "\x07\x72\x63\x73\x65\x68\x74\x07\x72\x63\x73\x65\x72\x71\x07\x72"
  "\x63\x73\x65\x73\x72\x29\x08\x72\x74\x6c\x62\x61\x73\x65\x07\x72"
  "\x67\x72\x61\x70\x68\x07\x72\x74\x6c\x63\x66\x67\x07\x72\x74\x6c"
  "\x6f\x62\x6a\x07\x72\x74\x6c\x72\x65\x67\x07\x72\x74\x6c\x74\x79"
  "\x31\x07\x72\x74\x6c\x74\x79\x32\x0c\x02\x1c\x0b\x6d\x61\x63\x68"
  "\x69\x6e\x65\x73\x2f\x43\x07\x6d\x61\x63\x68\x69\x6e\x05\x62\x61"
  "\x73\x65\x07\x62\x6c\x6f\x63\x6b\x73\x05\x63\x66\x67\x31\x05\x63"
  "\x66\x67\x32\x05\x63\x66\x67\x33\x07\x63\x6f\x6e\x74\x69\x6e\x07"
  "\x63\x74\x79\x70\x65\x73\x07\x65\x6e\x75\x6d\x65\x72\x07\x6c\x76"
  "\x61\x6c\x75\x65\x07\x6f\x62\x6a\x65\x63\x74\x07\x70\x72\x6f\x63"
  "\x65\x64\x07\x72\x76\x61\x6c\x75\x65\x06\x73\x63\x6f\x64\x65\x07"
  "\x73\x75\x62\x70\x72\x62\x06\x75\x74\x69\x6c\x73\x15\x73\x6f\x75"
  "\x72\x63\x65\x2d\x6e\x6f\x64\x65\x2f\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x29\x4d\x04\x11\x4d\x04\x4d\x09\x4d\x07\x4d\x05\x4d\x0d\x4d"
  "\x17\x4d\x0c\x4d\x0b\x4d\x04\x3d\x04\x0e\x04\x1d\x6d\x61\x6b\x65"
  "\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x2d\x64\x65\x63"
  "\x6c\x61\x72\x61\x74\x69\x6f\x6e\x3d\x04\x4a\x05\x4a\x06\x4a\x05"
  "\x0d\x03\x58\x04\x12\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65"
  "\x2f\x6c\x69\x6e\x6b\x21\x4a\x13\xf6\x02\xc2\x01\x81\x91\x02\xf5"
  "\x02\xc0\x01\x81\x91\x02\xf4\x02\xbe\x01\x81\x91\x02\xf3\x02\xbc"
  "\x01\x81\x91\x02\xf2\x02\xba\x01\x81\x91\x02\xf1\x02\xb8\x01\x81"
  "\x91\x02\xf0\x02\xb6\x01\x81\x95\x02\xef\x02\xb4\x01\x81\x91\x02"
  "\xee\x02\xb2\x01\x81\x95\x02\xed\x02\xb0\x01\x81\x93\x02\xec\x02"
  "\xae\x01\x81\x91\x02\xeb\x02\xac\x01\x81\x95\x02\xea\x02\xaa\x01"
  "\x81\x91\x02\xe9\x02\xa8\x01\x81\x95\x02\xe8\x02\xa6\x01\x81\x93"
  "\x02\xe7\x02\xa4\x01\x81\x91\x02\xe6\x02\xa2\x01\x81\x99\x02\xe5"
  "\x02\xa0\x01\x81\x93\x02\xe4\x02\x9e\x01\x81\x91\x02\xe3\x02\x9c"
  "\x01\x81\x97\x02\xe2\x02\x9a\x01\x81\x95\x02\xe1\x02\x98\x01\x81"
  "\x91\x02\xe0\x02\x96\x01\x81\x9b\x02\xdf\x02\x94\x01\x81\x95\x02"
  "\xde\x02\x92\x01\x81\x93\x02\xdd\x02\x90\x01\x81\x91\x02\xdc\x02"
  "\x8e\x01\x81\x99\x02\xdb\x02\x8c\x01\x81\x93\x02\xda\x02\x8a\x01"
  "\x81\x91\x02\xd9\x02\x88\x01\x81\x97\x02\xd8\x02\x86\x01\x81\x95"
  "\x02\xd7\x02\x84\x01\x81\x91\x02\xd6\x02\x82\x01\x81\x93\x02\xd5"
  "\x02\x80\x01\x81\x91\x02\xd4\x02\x7e\x81\x91\x02\xd3\x02\x7c\x81"
  "\x91\x02\xd2\x02\x7a\x81\x91\x02\xd1\x02\x78\x81\x91\x02\xd0\x02"
  "\x76\x81\x91\x02\xcf\x02\x74\x81\x91\x02\xce\x02\x72\x81\x91\x02"
  "\xcd\x02\x70\x81\x85\x02\xcc\x02\x6e\x81\x91\x02\xcb\x02\x6c\x81"
  "\x85\x02\xca\x02\x6a\x81\x91\x02\xc9\x02\x68\x81\x95\x02\xc8\x02"
  "\x66\x81\x91\x02\xc7\x02\x64\x81\x91\x02\xc6\x02\x62\x81\x91\x02"
  "\xc5\x02\x60\x81\x91\x02\xc4\x02\x5e\x81\x91\x02\xc3\x02\x5c\x81"
  "\x91\x02\xc2\x02\x5a\x81\x91\x02\xc1\x02\x58\x81\x91\x02\xc0\x02"
  "\x56\x81\x91\x02\xbf\x02\x54\x81\x91\x02\xbe\x02\x52\x81\x91\x02"
  "\xbd\x02\x50\x81\x91\x02\xbc\x02\x4e\x81\x85\x02\xbb\x02\x4c\x81"
  "\x91\x02\xba\x02\x4a\x81\x85\x02\xb9\x02\x48\x81\x91\x02\xb8\x02"
  "\x46\x81\x85\x02\xb7\x02\x44\x81\x91\x02\xb6\x02\x42\x81\x85\x02"
  "\xb5\x02\x40\x81\x91\x02\xb4\x02\x3e\x81\x89\x02\xb3\x02\x3c\x81"
  "\x91\x02\xb2\x02\x3a\x81\x89\x02\xb1\x02\x38\x81\x91\x02\xb0\x02"
  "\x36\x81\x93\x02\xaf\x02\x34\x81\x8d\x02\xae\x02\x32\xfc\x09\xad"
  "\x02\x30\x81\x91\x02\xac\x02\x2e\x81\x91\x02\xab\x02\x2c\x81\x91"
  "\x02\xaa\x02\x2a\x81\x8f\x02\xa9\x02\x28\x81\x8f\x02\xa8\x02\x26"
  "\x81\x8d\x02\xa7\x02\x24\x81\x8b\x02\xa6\x02\x22\x81\x8d\x02\xa5"
  "\x02\x20\x81\x89\x02\xa4\x02\x1e\x81\x87\x02\xa3\x02\x1c\x81\x85"
  "\x02\xa2\x02\x1a\x81\x8d\x02\xa1\x02\x18\x81\x8b\x02\xa0\x02\x16"
  "\x81\x89\x02\x9f\x02\x14\x81\x83\x02\x9e\x02\x12\x81\x8f\x02\x9d"
  "\x02\x10\x81\x87\x02\x9c\x02\x0e\x81\x83\x02\x9b\x02\x0c\x83\x04"
  "\x9a\x02\x0a\x81\x83\x02\x99\x02\x08\x81\x81\x02\x98\x02\x06\x81"
  "\x81\x02\x97\x02\x04\x82\x02\xc1\x01\xd5\x02\x1c\x02\x38\x44\x09"
  "\x72\x65\x6c\x61\x74\x69\x76\x65\x13\x69\x6e\x74\x65\x67\x72\x61"
  "\x74\x65\x2d\x65\x78\x74\x65\x72\x6e\x61\x6c\x44\x03\x75\x70\x03"
  "\x13\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x04\x0e\x08\x0e\x6d\x61\x6b\x65\x2d\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x04\x0a\x6d\x61\x6b\x65\x2d\x6c\x69\x73\x74\x03"
  "\x07\x6c\x65\x6e\x67\x74\x68\x04\x10\x6d\x65\x72\x67\x65\x2d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x73\x07\xfe\x02\x12\x81\x85\x02\xfd"
  "\x02\x10\x81\x97\x02\xfc\x02\x0e\x81\x97\x02\xfb\x02\x0c\x81\x95"
  "\x02\xfa\x02\x0a\x81\x91\x02\xf9\x02\x08\x81\x89\x02\xf8\x02\x06"
  "\x81\x85\x02\xf7\x02\x04\x84\x06\x11\x25\x0e\x02\x39\x44\x45\x80"
  "\x03\x06\x81\x83\x02\xff\x02\x04\x83\x04\x05\x0b\x45\x39\x44\x44"
  "\x0c\x09\x08\x34\x45\x04\x0e\x04\x1c\x04\x43\x04\x4e\x04\x55\x04"
  "\x51\x04\x59\x04\x5a\x04\x57\x04\x54\x04\x49\x04\x48\x04\x47\x04"
  "\x39\x04\x42\x04\x3e\x04\x3c\x04\x3a\x04\x38\x04\x37\x04\x35\x04"
  "\x17\x4f\x3d\x11\x0f\x4c\x0c\x03\x73\x63\x50\x56\x53\x0e\x73\x79"
  "\x6e\x74\x61\x78\x2d\x66\x69\x6c\x65\x73\x21\x41\x46\x40\x3f\x12"
  "\x3b\x4a\x52\x58\x10\x0d\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64"
  "\x65\x3f\x17\x36\x23\x73\x65\x74\x2d\x73\x6f\x75\x72\x63\x65\x2d"
  "\x6e\x6f\x64\x65\x2f\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x74\x69\x6d\x65\x21\x1e\x73\x65\x74\x2d\x73\x6f\x75\x72"
  "\x63\x65\x2d\x6e\x6f\x64\x65\x2f\x64\x65\x63\x6c\x61\x72\x61\x74"
  "\x69\x6f\x6e\x73\x21\x1e\x73\x65\x74\x2d\x73\x6f\x75\x72\x63\x65"
  "\x2d\x6e\x6f\x64\x65\x2f\x73\x79\x6e\x74\x61\x78\x2d\x74\x61\x62"
  "\x6c\x65\x21\x16\x73\x65\x74\x2d\x73\x6f\x75\x72\x63\x65\x2d\x6e"
  "\x6f\x64\x65\x2f\x72\x61\x6e\x6b\x21\x1c\x73\x65\x74\x2d\x73\x6f"
  "\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65\x2f\x64\x65\x70\x65\x6e\x64"
  "\x65\x6e\x74\x73\x21\x1e\x73\x65\x74\x2d\x73\x6f\x75\x72\x63\x65"
  "\x2d\x6e\x6f\x64\x65\x2f\x64\x65\x70\x65\x6e\x64\x65\x6e\x63\x69"
  "\x65\x73\x21\x22\x73\x65\x74\x2d\x73\x6f\x75\x72\x63\x65\x2d\x6e"
  "\x6f\x64\x65\x2f\x62\x61\x63\x6b\x77\x61\x72\x64\x2d\x63\x6c\x6f"
  "\x73\x75\x72\x65\x21\x21\x73\x65\x74\x2d\x73\x6f\x75\x72\x63\x65"
  "\x2d\x6e\x6f\x64\x65\x2f\x66\x6f\x72\x77\x61\x72\x64\x2d\x63\x6c"
  "\x6f\x73\x75\x72\x65\x21\x20\x73\x65\x74\x2d\x73\x6f\x75\x72\x63"
  "\x65\x2d\x6e\x6f\x64\x65\x2f\x62\x61\x63\x6b\x77\x61\x72\x64\x2d"
  "\x6c\x69\x6e\x6b\x73\x21\x1f\x73\x65\x74\x2d\x73\x6f\x75\x72\x63"
  "\x65\x2d\x6e\x6f\x64\x65\x2f\x66\x6f\x72\x77\x61\x72\x64\x2d\x6c"
  "\x69\x6e\x6b\x73\x21\x1e\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64"
  "\x65\x2f\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74"
  "\x69\x6d\x65\x19\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65\x2f"
  "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x19\x73\x6f\x75"
  "\x72\x63\x65\x2d\x6e\x6f\x64\x65\x2f\x73\x79\x6e\x74\x61\x78\x2d"
  "\x74\x61\x62\x6c\x65\x11\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64"
  "\x65\x2f\x72\x61\x6e\x6b\x17\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f"
  "\x64\x65\x2f\x64\x65\x70\x65\x6e\x64\x65\x6e\x74\x73\x19\x73\x6f"
  "\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65\x2f\x64\x65\x70\x65\x6e\x64"
  "\x65\x6e\x63\x69\x65\x73\x1d\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f"
  "\x64\x65\x2f\x62\x61\x63\x6b\x77\x61\x72\x64\x2d\x63\x6c\x6f\x73"
  "\x75\x72\x65\x1c\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65\x2f"
  "\x66\x6f\x72\x77\x61\x72\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65\x1b"
  "\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65\x2f\x62\x61\x63\x6b"
  "\x77\x61\x72\x64\x2d\x6c\x69\x6e\x6b\x73\x1a\x73\x6f\x75\x72\x63"
  "\x65\x2d\x6e\x6f\x64\x65\x2f\x66\x6f\x72\x77\x61\x72\x64\x2d\x6c"
  "\x69\x6e\x6b\x73\x29\x15\x73\x6f\x75\x72\x63\x65\x2d\x6e\x6f\x64"
  "\x65\x2f\x66\x69\x6c\x65\x6e\x61\x6d\x65\x17\x33\x04\x32\x04\x31"
  "\x04\x30\x04\x2f\x04\x2e\x04\x2d\x04\x2c\x04\x2b\x04\x2a\x04\x28"
  "\x04\x27\x04\x26\x04\x25\x04\x24\x04\x23\x04\x22\x04\x21\x04\x20"
  "\x04\x1f\x04\x1e\x04\x1d\x04\x17\x11\x6c\x6f\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x10\x72\x74\x64\x3a\x73\x6f"
  "\x75\x72\x63\x65\x2d\x6e\x6f\x64\x65\x5a\x0c\x73\x6f\x75\x72\x63"
  "\x65\x2d\x6e\x6f\x64\x65\x09\x66\x69\x6c\x65\x6e\x61\x6d\x65\x09"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x0e\x66\x6f\x72\x77\x61\x72\x64"
  "\x2d\x6c\x69\x6e\x6b\x73\x0f\x62\x61\x63\x6b\x77\x61\x72\x64\x2d"
  "\x6c\x69\x6e\x6b\x73\x10\x66\x6f\x72\x77\x61\x72\x64\x2d\x63\x6c"
  "\x6f\x73\x75\x72\x65\x11\x62\x61\x63\x6b\x77\x61\x72\x64\x2d\x63"
  "\x6c\x6f\x73\x75\x72\x65\x0d\x64\x65\x70\x65\x6e\x64\x65\x6e\x63"
  "\x69\x65\x73\x0b\x64\x65\x70\x65\x6e\x64\x65\x6e\x74\x73\x05\x72"
  "\x61\x6e\x6b\x0d\x73\x79\x6e\x74\x61\x78\x2d\x74\x61\x62\x6c\x65"
  "\x0d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x4c\x0c\x15"
  "\x04\x16\x04\x17\x04\x18\x04\x19\x04\x1a\x04\x1b\x04\x4d\x0b\x09"
  "\x4b\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63"
  "\x6b\x61\x67\x65\x21\x0b\x14\x04\x06\x2a\x2e\x73\x63\x6d\x13\x04"
  "\x0a\x04\x04\x04\x0b\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x65\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64"
  "\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74"
  "\x61\x67\x04\x23\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d"
  "\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65\x2d\x62\x79"
  "\x2d\x69\x6e\x64\x65\x78\x05\x5a\x02\x1c\x3a\x80\x80\x04\x1b\x38"
  "\x81\x81\x02\x1a\x36\x81\x81\x02\x19\x34\x81\x93\x02\x18\x32\x81"
  "\x97\x02\x17\x30\x81\x91\x02\x16\x2e\x81\x95\x02\x15\x2c\x81\x8f"
  "\x02\x14\x2a\x81\x93\x02\x13\x28\x81\x8d\x02\x12\x26\x81\x91\x02"
  "\x11\x24\x81\x8b\x02\x10\x22\x81\x8f\x02\x0f\x20\x81\x89\x02\x0e"
  "\x1e\x81\x8d\x02\x0d\x1c\x81\x87\x02\x0c\x1a\x81\x85\x02\x0b\x18"
  "\x81\x83\x02\x0a\x16\x81\x8b\x02\x09\x14\x81\x87\x02\x08\x12\x81"
  "\x87\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83"
  "\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81\x83\x02"
  "\x01\x04\x81\x83\x02\x39\x64";

SCHEME_OBJECT *
decls_so_data_df12ecdd1357ada1 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_decls_so_data_df12ecdd1357ada1 [0]))), (sizeof (prog_decls_so_data_df12ecdd1357ada1)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_36]));
}

DECLARE_COMPILED_DATA_NS ("decls.so", decls_so_data_df12ecdd1357ada1)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("decls.so", "17c4512a1f5483da")
