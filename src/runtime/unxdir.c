/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:59-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_7 7
#define ENVIRONMENT_LABEL_1_3 17
#define DEBUGGING_LABEL_1_2 16
#define OBJECT_1_0 15
#define EXECUTE_CACHE_1_8 9
#define EXECUTE_CACHE_1_5 11
#define FREE_REFERENCE_1_0 14
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxdir_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
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
      goto directory_read_2;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_read_6)
DEFLABEL (directory_read_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_1_0])))
    goto label_10;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_5]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (Rsp [0]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_8;
  Wrd7 = Wrd11;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd8.pObj));

DEFLABEL (label_4)
  (Wrd7.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_9;
  (Wrd13.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_8 5
#define LABEL_2_5 7
#define LABEL_2_6 9
#define LABEL_2_11 11
#define LABEL_2_18 13
#define LABEL_2_19 15
#define LABEL_2_14 17
#define LABEL_2_15 19
#define LABEL_2_16 21
#define LABEL_2_9 23
#define LABEL_2_24 25
#define TAG_2_25 11
#define LABEL_2_30 27
#define TAG_2_31 12
#define LABEL_2_36 29
#define LABEL_2_28 31
#define TAG_2_29 14
#define LABEL_2_37 33
#define LABEL_2_38 35
#define LABEL_2_39 37
#define LABEL_2_33 39
#define LABEL_2_21 41
#define TAG_2_22 19
#define LABEL_2_40 43
#define LABEL_2_42 45
#define LABEL_2_43 47
#define LABEL_2_44 49
#define LABEL_2_46 51
#define LABEL_2_47 53
#define LABEL_2_49 55
#define ENVIRONMENT_LABEL_2_3 97
#define DEBUGGING_LABEL_2_2 96
#define OBJECT_2_1 95
#define OBJECT_2_0 94
#define EXECUTE_CACHE_2_50 57
#define EXECUTE_CACHE_2_48 59
#define EXECUTE_CACHE_2_45 61
#define EXECUTE_CACHE_2_41 63
#define EXECUTE_CACHE_2_34 65
#define EXECUTE_CACHE_2_32 67
#define EXECUTE_CACHE_2_27 69
#define EXECUTE_CACHE_2_26 71
#define EXECUTE_CACHE_2_23 73
#define EXECUTE_CACHE_2_20 75
#define EXECUTE_CACHE_2_17 77
#define EXECUTE_CACHE_2_13 79
#define EXECUTE_CACHE_2_12 81
#define EXECUTE_CACHE_2_10 83
#define EXECUTE_CACHE_2_35 85
#define EXECUTE_CACHE_2_7 87
#define FREE_REFERENCE_2_1 90
#define FREE_REFERENCE_2_0 91
#define FREE_ASSIGNMENT_2_0 93
#define FREE_REFERENCES_LABEL_2_0 56
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxdir_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_2_4);
      goto directory_read_nosort_36;

    case 1:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_25;

    case 6:
      current_block = (Rpc - LABEL_2_19);
      goto continuation_23;

    case 7:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_22;

    case 8:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_2_24);
      goto lambda_45;

    case 12:
      current_block = (Rpc - LABEL_2_30);
      goto lambda_47;

    case 13:
      current_block = (Rpc - LABEL_2_36);
      goto label_38;

    case 14:
      current_block = (Rpc - LABEL_2_28);
      goto swapB_46;

    case 15:
      current_block = (Rpc - LABEL_2_37);
      goto label_39;

    case 16:
      current_block = (Rpc - LABEL_2_38);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_2_39);
      goto label_41;

    case 18:
      current_block = (Rpc - LABEL_2_33);
      goto continuation_4;

    case 19:
      current_block = (Rpc - LABEL_2_21);
      goto lambda_44;

    case 20:
      current_block = (Rpc - LABEL_2_40);
      goto continuation_3;

    case 21:
      current_block = (Rpc - LABEL_2_42);
      goto continuation_29;

    case 22:
      current_block = (Rpc - LABEL_2_43);
      goto continuation_28;

    case 23:
      current_block = (Rpc - LABEL_2_44);
      goto continuation_6;

    case 24:
      current_block = (Rpc - LABEL_2_46);
      goto continuation_31;

    case 25:
      current_block = (Rpc - LABEL_2_47);
      goto continuation_27;

    case 26:
      current_block = (Rpc - LABEL_2_49);
      goto continuation_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_read_nosort_43)
DEFLABEL (directory_read_nosort_36)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd12.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_34]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_33);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_41]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_45]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_44);
  (Rsp [5]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_48]));

DEFLABEL (label_48)
  (Wrd5.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_49)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_28])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  ((Wrd19.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_30])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = Rvl;
  (Rsp [2]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_32]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_2_19);
  if (Rvl == (current_block [OBJECT_2_0]))
    goto label_51;

DEFLABEL (label_50)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_21])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [4]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (label_51)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_2_18);
  if (! (Rvl == (current_block [OBJECT_2_0])))
    goto label_50;
  (Wrd5.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_52)
  (Rsp [1]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_24])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (Wrd5.Obj) = Rvl;
  goto label_52;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd5.Obj) = Rvl;
  goto label_49;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_2_24);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_35]));

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_2_30);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_54;
  Wrd5 = Wrd9;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_36])), (Wrd6.pObj));

DEFLABEL (label_38)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (swapB_46)
  CLOSURE_HEADER (LABEL_2_28);

DEFLABEL (swapB_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_63;

DEFLABEL (label_62)
  Wrd5 = Wrd9;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_58)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_57;

DEFLABEL (label_56)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_55)
  Rvl = (current_block [OBJECT_2_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_57)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_56;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_39])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_41)
  goto label_55;

DEFLABEL (label_60)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_38])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_40)
  goto label_58;

DEFLABEL (label_63)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_62;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_37])), (Wrd6.pObj));

DEFLABEL (label_39)
  (Wrd5.Obj) = Rvl;
  goto label_61;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_2_21);

DEFLABEL (lambda_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_43]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_2_43);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_2_47);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_50]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_2_42);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_64;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_46]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_2_46);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_49]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_2_49);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_50]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_9 9
#define LABEL_3_10 11
#define LABEL_3_12 13
#define ENVIRONMENT_LABEL_3_3 25
#define DEBUGGING_LABEL_3_2 24
#define OBJECT_3_0 23
#define EXECUTE_CACHE_3_13 15
#define EXECUTE_CACHE_3_11 17
#define EXECUTE_CACHE_3_8 19
#define EXECUTE_CACHE_3_7 21
#define FREE_REFERENCES_LABEL_3_0 14
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxdir_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd8;
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
      goto generate_directory_pathnames_10;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto loop_7;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_directory_pathnames_13)
DEFLABEL (generate_directory_pathnames_10)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_7;

DEFLABEL (loop_14)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_3_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_7;

DEFLABEL (label_15)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_12);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 10
#define DEBUGGING_LABEL_4_2 9
#define OBJECT_4_1 8
#define OBJECT_4_0 7
#define EXECUTE_CACHE_4_5 5
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxdir_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
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
      goto match_component_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (match_component_6)
DEFLABEL (match_component_3)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_4_0])))
    goto label_7;
  Rvl = (current_block [OBJECT_4_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  (Wrd15.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_8)
DEFLABEL (label_11)
  (Wrd10.Obj) = (Rsp [0]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_8 9
#define LABEL_5_9 11
#define LABEL_5_10 13
#define LABEL_5_11 15
#define LABEL_5_13 17
#define LABEL_5_15 19
#define ENVIRONMENT_LABEL_5_3 30
#define DEBUGGING_LABEL_5_2 29
#define EXECUTE_CACHE_5_16 21
#define EXECUTE_CACHE_5_14 23
#define EXECUTE_CACHE_5_12 25
#define EXECUTE_CACHE_5_7 27
#define FREE_REFERENCES_LABEL_5_0 20
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxdir_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_5_4);
      goto pathname_P_9;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_P_12)
DEFLABEL (pathname_P_9)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 9
#define DEBUGGING_LABEL_6_2 8
#define OBJECT_6_0 7
#define EXECUTE_CACHE_6_5 5
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
unxdir_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd26;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_6_4);
      goto component_P_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (component_P_9)
DEFLABEL (component_P_6)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  (Wrd26.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_11)
DEFLABEL (label_20)
  (Wrd10.Obj) = (Rsp [0]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (Wrd10.Obj);

DEFLABEL (label_13)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 30)
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_15)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 30)
    goto label_17;
  (Wrd20.Obj) = (current_block [OBJECT_6_0]);
  goto label_16;

DEFLABEL (label_17)
  (Wrd20.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_16)
DEFLABEL (label_19)
  (Rsp [0]) = (Wrd20.Obj);
  if (! ((Wrd20.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_18;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

DEFLABEL (label_18)
  Rvl = (Wrd20.Obj);
  goto label_13;

INVOKE_INTERFACE_TARGET_1
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
unxdir_so_1bc2b2fcbc55a7e5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	3,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 6)
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

static const struct liarc_code_S arr_decl_unxdir_so_1bc2b2fcbc55a7e5 [6] =
  {
    { "unxdir_so_code_1", 3, unxdir_so_code_1 },
    { "unxdir_so_code_2", 27, unxdir_so_code_2 },
    { "unxdir_so_code_3", 6, unxdir_so_code_3 },
    { "unxdir_so_code_4", 1, unxdir_so_code_4 },
    { "unxdir_so_code_5", 9, unxdir_so_code_5 },
    { "unxdir_so_code_6", 1, unxdir_so_code_6 }
  };

int
decl_unxdir_so_1bc2b2fcbc55a7e5 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_unxdir_so_1bc2b2fcbc55a7e5);
  return (0);
}

DECLARE_COMPILED_CODE ("unxdir.so", 3, decl_unxdir_so_1bc2b2fcbc55a7e5, unxdir_so_1bc2b2fcbc55a7e5)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_unxdir_so_data_1bc2b2fcbc55a7e5 [1184] =
  "\x66\x0e\x8f\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x0d\xb9\x24"
  "\x28\x0d\xba\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb"
  "\x1d\xb0\x82\x88\x1d\x0d\xbc\x0d\xbd\x25\x0d\xb5\x24\x28\x0d\xbe"
  "\x28\xb6\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xbe\x28\x0d\xbf\x28\x0d"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83"
  "\x88\x08\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x07"
  "\xb4\x28\x0d\xbc\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x28"
  "\x1b\x28\xb7\x28\x0d\x1c\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d"
  "\xb0\x86\x88\x07\x28\x0d\x23\x22\x29\x21\x17\x2b\xbc\x9d\xb8\x88"
  "\xb0\xb4\x2a\xb7\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb3\x2a\x07\x9e\x1b"
  "\xb1\x1b\xb6\xb2\x0d\xb5\x9e\x28\x0d\x26\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x75\x6e"
  "\x78\x64\x69\x72\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x08\x0b"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x3c\x3f\x02\x03\x16\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x2d\x72\x65\x61\x64\x2d\x6e\x6f\x73\x6f"
  "\x72\x74\x04\x05\x73\x6f\x72\x74\x03\x06\x08\x81\x85\x02\x05\x06"
  "\x81\x85\x02\x04\x04\x84\x04\x07\x12\x02\x02\x05\x77\x69\x6c\x64"
  "\x1d\x2a\x65\x78\x70\x61\x6e\x64\x2d\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x2d\x70\x72\x65\x66\x69\x78\x65\x73\x3f\x2a\x02\x0b\x2d"
  "\x3e\x70\x61\x74\x68\x6e\x61\x6d\x65\x03\x03\x10\x6d\x65\x72\x67"
  "\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x73\x04\x03\x13\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x03\x13\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x03\x14\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x3f\x03\x1d\x67\x65\x6e\x65\x72"
  "\x61\x74\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x73\x03\x0e\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x2d\x74\x79\x70\x65\x04\x18\x6c\x69\x73\x74\x2d\x74\x72\x61"
  "\x6e\x73\x66\x6f\x72\x6d\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x04"
  "\x04\x6d\x61\x70\x03\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e"
  "\x61\x6d\x65\x09\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c"
  "\x75\x69\x64\x2d\x62\x69\x6e\x64\x03\x10\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x2d\x64\x65\x76\x69\x63\x65\x03\x0e\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2d\x68\x6f\x73\x74\x03\x11\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x2d\x76\x65\x72\x73\x69\x6f\x6e\x08\x0e\x6d\x61\x6b\x65"
  "\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x04\x10\x6d\x61\x74\x63\x68"
  "\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x0a\x11\x21\x38\x81\x85"
  "\x02\x20\x36\x81\x89\x02\x1f\x34\x81\x85\x02\x1e\x32\x81\x8d\x02"
  "\x1d\x30\x81\x87\x02\x1c\x2e\x81\x85\x02\x1b\x2c\x81\x8b\x02\x1a"
  "\x2a\x81\x85\x02\x19\x28\x81\x89\x02\x18\x26\x81\x83\x02\x17\x24"
  "\x81\x85\x02\x16\x22\x81\x83\x02\x15\x20\x81\x83\x02\x14\x1e\x81"
  "\x83\x02\x13\x1c\x81\x83\x02\x12\x1a\x81\x85\x02\x11\x18\x81\x87"
  "\x02\x10\x16\x81\x89\x02\x0f\x14\x81\x87\x02\x0e\x12\x81\x85\x02"
  "\x0d\x10\x81\x83\x02\x0c\x0e\x81\x83\x02\x0b\x0c\x81\x83\x02\x0a"
  "\x0a\x81\x85\x02\x09\x08\x81\x83\x02\x08\x06\x81\x83\x02\x07\x04"
  "\x83\x04\x37\x62\x0b\x02\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73\x74"
  "\x72\x69\x6e\x67\x03\x17\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d"
  "\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x6f\x70\x65\x6e\x03\x17\x64\x69"
  "\x72\x65\x63\x74\x6f\x72\x79\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2d"
  "\x72\x65\x61\x64\x03\x18\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d"
  "\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x63\x6c\x6f\x73\x65\x05\x27\x0e"
  "\x81\x87\x02\x26\x0c\x81\x85\x02\x25\x0a\x81\x85\x02\x24\x08\x81"
  "\x85\x02\x23\x06\x81\x83\x02\x22\x04\x83\x04\x0d\x1a\x0c\x02\x04"
  "\x07\x65\x71\x75\x61\x6c\x3f\x02\x28\x04\x84\x06\x03\x0b\x0d\x02"
  "\x03\x09\x03\x04\x0c\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x3c\x3f"
  "\x09\x04\x05\x31\x14\x81\x87\x02\x30\x12\x81\x8b\x02\x2f\x10\x81"
  "\x87\x02\x2e\x0e\x81\x89\x02\x2d\x0c\x81\x89\x02\x2c\x0a\x81\x87"
  "\x02\x2b\x08\x81\x87\x02\x2a\x06\x81\x85\x02\x29\x04\x84\x06\x13"
  "\x1f\x02\x04\x09\x73\x74\x72\x69\x6e\x67\x3c\x3f\x02\x32\x04\x84"
  "\x06\x03\x0a\x04\x04\x0d\x04\x0c\x04\x0b\x04\x04\x09\x0a\x0f\x64"
  "\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x72\x65\x61\x64\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03"
  "\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
unxdir_so_data_1bc2b2fcbc55a7e5 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_unxdir_so_data_1bc2b2fcbc55a7e5 [0]))), (sizeof (prog_unxdir_so_data_1bc2b2fcbc55a7e5)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("unxdir.so", unxdir_so_data_1bc2b2fcbc55a7e5)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("unxdir.so", "65ec9e721f7fe3f3")
