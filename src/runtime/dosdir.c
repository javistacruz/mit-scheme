/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:30-07 by Liar version 4.118. */

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
dosdir_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
#define LABEL_2_9 5
#define LABEL_2_5 7
#define LABEL_2_6 9
#define LABEL_2_7 11
#define LABEL_2_12 13
#define LABEL_2_20 15
#define LABEL_2_21 17
#define LABEL_2_16 19
#define LABEL_2_17 21
#define LABEL_2_18 23
#define LABEL_2_10 25
#define LABEL_2_25 27
#define TAG_2_26 12
#define LABEL_2_31 29
#define TAG_2_32 13
#define LABEL_2_37 31
#define LABEL_2_29 33
#define TAG_2_30 15
#define LABEL_2_38 35
#define LABEL_2_39 37
#define LABEL_2_40 39
#define LABEL_2_34 41
#define LABEL_2_23 43
#define LABEL_2_24 45
#define LABEL_2_41 47
#define LABEL_2_43 49
#define LABEL_2_44 51
#define LABEL_2_46 53
#define LABEL_2_48 55
#define TAG_2_49 26
#define LABEL_2_52 57
#define LABEL_2_53 59
#define LABEL_2_54 61
#define ENVIRONMENT_LABEL_2_3 105
#define DEBUGGING_LABEL_2_2 104
#define OBJECT_2_1 103
#define OBJECT_2_0 102
#define EXECUTE_CACHE_2_51 63
#define EXECUTE_CACHE_2_50 65
#define EXECUTE_CACHE_2_47 67
#define EXECUTE_CACHE_2_45 69
#define EXECUTE_CACHE_2_42 71
#define EXECUTE_CACHE_2_35 73
#define EXECUTE_CACHE_2_33 75
#define EXECUTE_CACHE_2_28 77
#define EXECUTE_CACHE_2_27 79
#define EXECUTE_CACHE_2_22 81
#define EXECUTE_CACHE_2_19 83
#define EXECUTE_CACHE_2_15 85
#define EXECUTE_CACHE_2_14 87
#define EXECUTE_CACHE_2_13 89
#define EXECUTE_CACHE_2_11 91
#define EXECUTE_CACHE_2_36 93
#define EXECUTE_CACHE_2_8 95
#define FREE_REFERENCE_2_1 98
#define FREE_REFERENCE_2_0 99
#define FREE_ASSIGNMENT_2_0 101
#define FREE_REFERENCES_LABEL_2_0 62
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosdir_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_2_4);
      goto directory_read_nosort_41;

    case 1:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_2_20);
      goto continuation_26;

    case 7:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_24;

    case 8:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_23;

    case 9:
      current_block = (Rpc - LABEL_2_17);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_2_25);
      goto lambda_49;

    case 13:
      current_block = (Rpc - LABEL_2_31);
      goto lambda_51;

    case 14:
      current_block = (Rpc - LABEL_2_37);
      goto label_43;

    case 15:
      current_block = (Rpc - LABEL_2_29);
      goto swapB_50;

    case 16:
      current_block = (Rpc - LABEL_2_38);
      goto label_44;

    case 17:
      current_block = (Rpc - LABEL_2_39);
      goto label_45;

    case 18:
      current_block = (Rpc - LABEL_2_40);
      goto label_46;

    case 19:
      current_block = (Rpc - LABEL_2_34);
      goto continuation_5;

    case 20:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_31;

    case 21:
      current_block = (Rpc - LABEL_2_24);
      goto continuation_30;

    case 22:
      current_block = (Rpc - LABEL_2_41);
      goto continuation_4;

    case 23:
      current_block = (Rpc - LABEL_2_43);
      goto continuation_29;

    case 24:
      current_block = (Rpc - LABEL_2_44);
      goto continuation_28;

    case 25:
      current_block = (Rpc - LABEL_2_46);
      goto continuation_7;

    case 26:
      current_block = (Rpc - LABEL_2_48);
      goto lambda_52;

    case 27:
      current_block = (Rpc - LABEL_2_52);
      goto continuation_34;

    case 28:
      current_block = (Rpc - LABEL_2_53);
      goto continuation_33;

    case 29:
      current_block = (Rpc - LABEL_2_54);
      goto continuation_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_read_nosort_48)
DEFLABEL (directory_read_nosort_41)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd12.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_35]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_34);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_42]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_41);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_47]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_46);
  (Rsp [5]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_51]));

DEFLABEL (label_53)
  (Wrd5.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_54)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_29])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  ((Wrd19.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_31])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = Rvl;
  (Rsp [2]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_33]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_2_21);
  if (Rvl == (current_block [OBJECT_2_0]))
    goto label_56;

DEFLABEL (label_55)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_2_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_45]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_2_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_44]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_2_44);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_45]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_2_43);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_49);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_48])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_50]));

DEFLABEL (label_56)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_2_20);
  if (! (Rvl == (current_block [OBJECT_2_0])))
    goto label_55;
  (Wrd5.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_57)
  (Rsp [1]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_25])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_2_16);
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd5.Obj) = Rvl;
  goto label_54;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_2_25);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_36]));

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_2_31);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_59;
  Wrd5 = Wrd9;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_37])), (Wrd6.pObj));

DEFLABEL (label_43)
  (Wrd5.Obj) = Rvl;
  goto label_58;

DEFLABEL (swapB_50)
  CLOSURE_HEADER (LABEL_2_29);

DEFLABEL (swapB_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_68;

DEFLABEL (label_67)
  Wrd5 = Wrd9;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_63)
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
    goto label_62;

DEFLABEL (label_61)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_60)
  Rvl = (current_block [OBJECT_2_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_62)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_61;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_40])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_46)
  goto label_60;

DEFLABEL (label_65)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_64;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_39])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_45)
  goto label_63;

DEFLABEL (label_68)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_67;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_38])), (Wrd6.pObj));

DEFLABEL (label_44)
  (Wrd5.Obj) = Rvl;
  goto label_66;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_2_48);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_53]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_28]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_2_53);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_2_52);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_69;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_69)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_54]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_2_54);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_5 3
#define LABEL_3_6 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define LABEL_3_11 13
#define LABEL_3_4 15
#define LABEL_3_13 17
#define ENVIRONMENT_LABEL_3_3 34
#define DEBUGGING_LABEL_3_2 33
#define OBJECT_3_5 32
#define OBJECT_3_4 31
#define OBJECT_3_3 30
#define OBJECT_3_2 29
#define OBJECT_3_1 28
#define OBJECT_3_0 27
#define EXECUTE_CACHE_3_14 19
#define EXECUTE_CACHE_3_12 21
#define EXECUTE_CACHE_3_10 23
#define FREE_REFERENCE_3_0 26
#define FREE_REFERENCES_LABEL_3_0 18
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosdir_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd56;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd83;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_3_4);
      goto adjust_directory_pattern_10;

    case 7:
      current_block = (Rpc - LABEL_3_13);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (adjust_directory_pattern_18)
DEFLABEL (adjust_directory_pattern_10)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_35;
  Wrd5 = Wrd9;

DEFLABEL (label_34)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_20;

DEFLABEL (label_19)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd25.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd25.uLng) == 30)
    goto label_21;
  Rsp = (& (Rsp [1]));
  goto label_19;

DEFLABEL (label_21)
  if (! ((Wrd25.uLng) == 30))
    goto label_33;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (Wrd31.Obj) = (MAKE_OBJECT (26, (Wrd30.uLng)));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_32)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_31;
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if ((Wrd83.Lng) > 0)
    goto label_23;

DEFLABEL (label_22)
  Rsp = (& (Rsp [2]));
  goto label_19;

DEFLABEL (label_23)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_30;
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd53.Lng) = ((Wrd55.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd53.Lng)))
    goto label_30;
  (Wrd50.Obj) = (LONG_TO_FIXNUM (Wrd53.Lng));

DEFLABEL (label_29)
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 30))
    goto label_28;
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_28;
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [1]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) (Wrd64.Lng)) < ((unsigned long) (Wrd68.Lng))))
    goto label_28;
  (Wrd58.uLng) = (OBJECT_DATUM (Wrd50.Obj));
  (Wrd61.pChr) = (& ((Wrd66.pChr) [(Wrd58.Lng)]));
  (Wrd62.uLng) = ((unsigned long) (((unsigned char *) (Wrd61.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd56.Obj) = (MAKE_OBJECT (2, (Wrd62.uLng)));

DEFLABEL (label_27)
  if ((Wrd56.Obj) == (current_block [OBJECT_3_2]))
    goto label_25;
  (Wrd77.Obj) = (current_block [OBJECT_3_4]);
  goto label_24;

DEFLABEL (label_25)
  (Wrd77.Obj) = (current_block [OBJECT_3_3]);

DEFLABEL (label_24)
DEFLABEL (label_26)
  Rsp = (& (Rsp [2]));
  if ((Wrd77.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd80.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_3_5]);
  (Rsp [1]) = (Wrd81.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (label_28)
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_16)
  (Wrd56.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_15)
  (Wrd50.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_23;

DEFLABEL (label_33)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_13])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_9 9
#define LABEL_4_10 11
#define LABEL_4_12 13
#define ENVIRONMENT_LABEL_4_3 25
#define DEBUGGING_LABEL_4_2 24
#define OBJECT_4_0 23
#define EXECUTE_CACHE_4_13 15
#define EXECUTE_CACHE_4_11 17
#define EXECUTE_CACHE_4_8 19
#define EXECUTE_CACHE_4_7 21
#define FREE_REFERENCES_LABEL_4_0 14
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosdir_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto generate_directory_pathnames_10;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto loop_7;

    case 4:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_directory_pathnames_13)
DEFLABEL (generate_directory_pathnames_10)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_7;

DEFLABEL (loop_14)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_4_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_10);
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
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_12);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

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
dosdir_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
dosdir_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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

#define LABEL_7_5 3
#define LABEL_7_4 5
#define LABEL_7_10 7
#define LABEL_7_12 9
#define LABEL_7_11 11
#define LABEL_7_8 13
#define TAG_7_9 5
#define LABEL_7_6 15
#define LABEL_7_15 17
#define LABEL_7_19 19
#define LABEL_7_18 21
#define LABEL_7_20 23
#define LABEL_7_21 25
#define LABEL_7_22 27
#define LABEL_7_24 29
#define LABEL_7_27 31
#define LABEL_7_23 33
#define LABEL_7_25 35
#define LABEL_7_28 37
#define ENVIRONMENT_LABEL_7_3 64
#define DEBUGGING_LABEL_7_2 63
#define OBJECT_7_5 62
#define OBJECT_7_4 61
#define OBJECT_7_3 60
#define OBJECT_7_2 59
#define OBJECT_7_1 58
#define OBJECT_7_0 57
#define EXECUTE_CACHE_7_30 39
#define EXECUTE_CACHE_7_29 41
#define EXECUTE_CACHE_7_26 43
#define EXECUTE_CACHE_7_17 45
#define EXECUTE_CACHE_7_16 47
#define EXECUTE_CACHE_7_14 49
#define EXECUTE_CACHE_7_13 51
#define EXECUTE_CACHE_7_7 53
#define FREE_REFERENCE_7_0 56
#define FREE_REFERENCES_LABEL_7_0 38
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosdir_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd16;
  machine_word Wrd50;
  machine_word Wrd13;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_7_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_7_4);
      goto component_matcher_29;

    case 2:
      current_block = (Rpc - LABEL_7_10);
      goto label_31;

    case 3:
      current_block = (Rpc - LABEL_7_12);
      goto label_32;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_7_8);
      goto lambda_38;

    case 6:
      current_block = (Rpc - LABEL_7_6);
      goto lambda_28;

    case 7:
      current_block = (Rpc - LABEL_7_15);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_7_19);
      goto label_33;

    case 9:
      current_block = (Rpc - LABEL_7_18);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_7_20);
      goto loop_21;

    case 11:
      current_block = (Rpc - LABEL_7_21);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_7_22);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_7_24);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_7_27);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_7_23);
      goto continuation_17;

    case 16:
      current_block = (Rpc - LABEL_7_25);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_7_28);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (component_matcher_37)
DEFLABEL (component_matcher_29)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_7_0])))
    goto label_42;

DEFLABEL (label_41)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_42)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 30))
    goto label_52;
  (Wrd50.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_51)
  (Wrd16.Obj) = (Rsp [0]);
  if (! ((Wrd16.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_43;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd47.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_8])));
  Rhp += 1;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd47.pObj)));
  Wrd48 = Wrd47;
  (Wrd49.Obj) = (Rsp [1]);
  ((Wrd48.pObj) [2]) = (Wrd49.Obj);
  Rvl = (Wrd46.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 30))
    goto label_50;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Obj) = (MAKE_OBJECT (26, (Wrd21.uLng)));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_49)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_48;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = ((Wrd42.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd40.Lng)))
    goto label_48;
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_47)
  (Wrd44.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_44;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (label_44)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_46;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd18.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_46;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_45)
  (Wrd20.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_18);
  (Wrd9.Obj) = (current_block [OBJECT_7_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_21;

DEFLABEL (label_46)
  (Wrd10.Obj) = (Rsp [6]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd34.Obj) = (Rsp [4]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_51;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_7_8);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (lambda_39)
DEFLABEL (lambda_28)
  INTERRUPT_CHECK (26, LABEL_7_6);
  Rvl = (current_block [OBJECT_7_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_40)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_7_20);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_57;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd13.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_57;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_56)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_7_22);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_7_27);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_21;

DEFLABEL (label_53)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_23]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_55;
  Wrd16 = Wrd20;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_25]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_26]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_7_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_29]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_7_23);
  (Rsp [7]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_28]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_7_28);
  (Rsp [8]) = Rvl;
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [6]) = (Wrd6.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_30]));

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_24])), (Wrd17.pObj));

DEFLABEL (label_35)
  (Wrd16.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_56;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define LABEL_8_8 11
#define LABEL_8_9 13
#define LABEL_8_10 15
#define LABEL_8_11 17
#define LABEL_8_12 19
#define LABEL_8_13 21
#define TAG_8_14 9
#define LABEL_8_20 23
#define LABEL_8_21 25
#define LABEL_8_15 27
#define TAG_8_16 12
#define LABEL_8_24 29
#define LABEL_8_25 31
#define LABEL_8_17 33
#define TAG_8_18 15
#define LABEL_8_26 35
#define LABEL_8_27 37
#define LABEL_8_28 39
#define LABEL_8_19 41
#define LABEL_8_22 43
#define LABEL_8_29 45
#define ENVIRONMENT_LABEL_8_3 54
#define DEBUGGING_LABEL_8_2 53
#define OBJECT_8_3 52
#define OBJECT_8_2 51
#define OBJECT_8_1 50
#define OBJECT_8_0 49
#define EXECUTE_CACHE_8_23 47
#define FREE_REFERENCES_LABEL_8_0 46
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosdir_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd42;
  machine_word Wrd55;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd71;
  machine_word Wrd35;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd56;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd108;
  machine_word Wrd109;
  machine_word Wrd103;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd100;
  machine_word Wrd101;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd85;
  machine_word Wrd86;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd83;
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd117;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd122;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto simple_wildcard_matcher_31;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_33;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_34;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_35;

    case 4:
      current_block = (Rpc - LABEL_8_8);
      goto label_36;

    case 5:
      current_block = (Rpc - LABEL_8_9);
      goto label_37;

    case 6:
      current_block = (Rpc - LABEL_8_10);
      goto label_38;

    case 7:
      current_block = (Rpc - LABEL_8_11);
      goto label_39;

    case 8:
      current_block = (Rpc - LABEL_8_12);
      goto label_40;

    case 9:
      current_block = (Rpc - LABEL_8_13);
      goto lambda_51;

    case 10:
      current_block = (Rpc - LABEL_8_20);
      goto label_41;

    case 11:
      current_block = (Rpc - LABEL_8_21);
      goto label_42;

    case 12:
      current_block = (Rpc - LABEL_8_15);
      goto lambda_52;

    case 13:
      current_block = (Rpc - LABEL_8_24);
      goto label_43;

    case 14:
      current_block = (Rpc - LABEL_8_25);
      goto label_44;

    case 15:
      current_block = (Rpc - LABEL_8_17);
      goto lambda_53;

    case 16:
      current_block = (Rpc - LABEL_8_26);
      goto label_45;

    case 17:
      current_block = (Rpc - LABEL_8_27);
      goto label_46;

    case 18:
      current_block = (Rpc - LABEL_8_28);
      goto label_47;

    case 19:
      current_block = (Rpc - LABEL_8_19);
      goto lambda_28;

    case 20:
      current_block = (Rpc - LABEL_8_22);
      goto continuation_11;

    case 21:
      current_block = (Rpc - LABEL_8_29);
      goto label_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simple_wildcard_matcher_50)
DEFLABEL (simple_wildcard_matcher_31)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_74;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_73)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_72;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd24.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_72;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_71)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_70;
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if ((Wrd122.Lng) == 0)
    goto label_69;

DEFLABEL (label_68)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_67;
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if ((Wrd117.Lng) == 0)
    goto label_66;

DEFLABEL (label_65)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_64;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = ((Wrd49.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd47.Lng)))
    goto label_64;
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));

DEFLABEL (label_63)
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_62;
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_62;
  if ((Wrd50.Obj) == (Wrd44.Obj))
    goto label_60;

DEFLABEL (label_59)
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 26))
    goto label_58;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  (Wrd65.Lng) = ((Wrd67.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd65.Lng)))
    goto label_58;
  (Wrd68.Obj) = (LONG_TO_FIXNUM (Wrd65.Lng));
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_57)
  (Wrd74.Obj) = (Rsp [2]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 26))
    goto label_56;
  (Wrd76.Obj) = (Rsp [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 26))
    goto label_56;
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  (Wrd78.Lng) = ((Wrd80.Lng) - (Wrd82.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd78.Lng)))
    goto label_56;
  (Wrd83.Obj) = (LONG_TO_FIXNUM (Wrd78.Lng));
  (* (--Rsp)) = (Wrd83.Obj);

DEFLABEL (label_55)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd86.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_13])));
  Rhp += 6;
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd86.pObj)));
  Wrd97 = Wrd86;
  (Wrd98.Obj) = (Rsp [5]);
  ((Wrd97.pObj) [2]) = (Wrd98.Obj);
  (Wrd96.Obj) = (Rsp [4]);
  ((Wrd97.pObj) [3]) = (Wrd96.Obj);
  (Wrd94.Obj) = (Rsp [3]);
  ((Wrd97.pObj) [4]) = (Wrd94.Obj);
  (Wrd92.Obj) = (Rsp [2]);
  ((Wrd97.pObj) [5]) = (Wrd92.Obj);
  (Wrd90.Obj) = (Rsp [1]);
  ((Wrd97.pObj) [6]) = (Wrd90.Obj);
  (Wrd88.Obj) = (Rsp [0]);
  ((Wrd97.pObj) [7]) = (Wrd88.Obj);
  Rvl = (Wrd85.Obj);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd69.Obj) = (Rsp [2]);
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd101.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_15])));
  Rhp += 2;
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd101.pObj)));
  Wrd104 = Wrd101;
  (Wrd105.Obj) = (Rsp [2]);
  ((Wrd104.pObj) [2]) = (Wrd105.Obj);
  (Wrd103.Obj) = (Rsp [0]);
  ((Wrd104.pObj) [3]) = (Wrd103.Obj);
  Rvl = (Wrd100.Obj);

DEFLABEL (label_61)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_60;

DEFLABEL (label_64)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_37)
  (Wrd44.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd109.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_17])));
  Rhp += 3;
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd109.pObj)));
  Wrd114 = Wrd109;
  (Wrd115.Obj) = (Rsp [2]);
  ((Wrd114.pObj) [2]) = (Wrd115.Obj);
  (Wrd113.Obj) = (Rsp [1]);
  ((Wrd114.pObj) [3]) = (Wrd113.Obj);
  (Wrd111.Obj) = (Rsp [0]);
  ((Wrd114.pObj) [4]) = (Wrd111.Obj);
  Rvl = (Wrd108.Obj);
  goto label_61;

DEFLABEL (label_67)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  goto label_66;

DEFLABEL (label_69)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_19]))));
  goto label_61;

DEFLABEL (label_70)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_35)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_69;

DEFLABEL (label_72)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_8_13);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_75;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_75)
  if (! ((Wrd6.uLng) == 30))
    goto label_83;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (Wrd13.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_82)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_81;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [5]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_81;
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! ((Wrd52.Lng) < (Wrd56.Lng)))
    goto label_77;

DEFLABEL (label_76)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_77)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [2]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_8_1]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd48.Obj) = ((Wrd38.pObj) [3]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_23]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_8_22);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_78;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_78)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd8.pObj) [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_80;
  (Wrd28.Obj) = ((Wrd8.pObj) [7]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_80;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd32.Lng) - (Wrd36.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_80;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));

DEFLABEL (label_79)
  (Rsp [4]) = (Wrd23.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd38.Obj);
  (Rsp [5]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_23]));

DEFLABEL (label_80)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [7]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_29]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_48)
  (Wrd23.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_81)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [5]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_21]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  goto label_76;

DEFLABEL (label_83)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_8_15);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_84;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_84)
  if (! ((Wrd6.uLng) == 30))
    goto label_89;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (Wrd13.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_88)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_87;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_87;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if ((Wrd49.Lng) < (Wrd53.Lng))
    goto label_86;

DEFLABEL (label_85)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_8_1]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = ((Wrd35.pObj) [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd41.Obj);
  (Rsp [5]) = (Wrd36.Obj);
  (Rsp [4]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_23]));

DEFLABEL (label_86)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [3]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_25]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_44)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_85;
  goto label_86;

DEFLABEL (label_89)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_24]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_8_17);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_90;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_90)
  if (! ((Wrd6.uLng) == 30))
    goto label_97;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (Wrd13.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_96)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_95;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_95;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! ((Wrd67.Lng) < (Wrd71.Lng)))
    goto label_92;

DEFLABEL (label_91)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_92)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = ((Wrd35.pObj) [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 26))
    goto label_94;
  (Wrd53.Obj) = ((Wrd35.pObj) [4]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_94;
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd55.Lng) = ((Wrd57.Lng) - (Wrd61.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd55.Lng)))
    goto label_94;
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd55.Lng));

DEFLABEL (label_93)
  (Rsp [4]) = (Wrd48.Obj);
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd63.Obj);
  (Rsp [5]) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_23]));

DEFLABEL (label_94)
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd43.Obj) = (Rsp [4]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [4]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_28]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_47)
  (Wrd48.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_95)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [4]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_27]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_46)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  goto label_91;

DEFLABEL (label_97)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_26]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (lambda_54)
DEFLABEL (lambda_28)
  INTERRUPT_CHECK (26, LABEL_8_19);
  Rvl = (current_block [OBJECT_8_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_5 3
#define LABEL_9_6 5
#define LABEL_9_7 7
#define LABEL_9_10 9
#define LABEL_9_4 11
#define LABEL_9_14 13
#define LABEL_9_15 15
#define LABEL_9_16 17
#define LABEL_9_19 19
#define LABEL_9_17 21
#define LABEL_9_21 23
#define LABEL_9_22 25
#define LABEL_9_18 27
#define LABEL_9_24 29
#define LABEL_9_12 31
#define LABEL_9_26 33
#define LABEL_9_23 35
#define LABEL_9_29 37
#define LABEL_9_30 39
#define LABEL_9_31 41
#define LABEL_9_34 43
#define LABEL_9_28 45
#define LABEL_9_35 47
#define LABEL_9_32 49
#define TAG_9_33 23
#define LABEL_9_8 51
#define TAG_9_9 24
#define LABEL_9_41 53
#define LABEL_9_42 55
#define LABEL_9_37 57
#define LABEL_9_36 59
#define LABEL_9_38 61
#define TAG_9_39 29
#define LABEL_9_45 63
#define TAG_9_46 30
#define LABEL_9_53 65
#define LABEL_9_54 67
#define LABEL_9_43 69
#define TAG_9_44 33
#define LABEL_9_55 71
#define LABEL_9_56 73
#define LABEL_9_57 75
#define LABEL_9_49 77
#define TAG_9_50 37
#define LABEL_9_60 79
#define LABEL_9_61 81
#define LABEL_9_47 83
#define TAG_9_48 40
#define LABEL_9_63 85
#define LABEL_9_64 87
#define LABEL_9_65 89
#define LABEL_9_51 91
#define LABEL_9_68 93
#define LABEL_9_69 95
#define LABEL_9_58 97
#define LABEL_9_62 99
#define LABEL_9_66 101
#define LABEL_9_67 103
#define LABEL_9_71 105
#define LABEL_9_72 107
#define LABEL_9_73 109
#define LABEL_9_74 111
#define ENVIRONMENT_LABEL_9_3 141
#define DEBUGGING_LABEL_9_2 140
#define OBJECT_9_5 139
#define OBJECT_9_4 138
#define OBJECT_9_3 137
#define OBJECT_9_2 136
#define OBJECT_9_1 135
#define OBJECT_9_0 134
#define EXECUTE_CACHE_9_70 113
#define EXECUTE_CACHE_9_59 115
#define EXECUTE_CACHE_9_52 117
#define EXECUTE_CACHE_9_40 119
#define EXECUTE_CACHE_9_27 121
#define EXECUTE_CACHE_9_25 123
#define EXECUTE_CACHE_9_20 125
#define EXECUTE_CACHE_9_13 127
#define EXECUTE_CACHE_9_11 129
#define FREE_REFERENCE_9_1 132
#define FREE_REFERENCE_9_0 133
#define FREE_REFERENCES_LABEL_9_0 112
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
dosdir_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd69;
  machine_word Wrd77;
  machine_word Wrd48;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd57;
  machine_word Wrd37;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd5;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd91;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd73;
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
      current_block = (Rpc - LABEL_9_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_9_6);
      goto label_87;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto label_88;

    case 3:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_9_4);
      goto full_wildcard_matcher_74;

    case 5:
      current_block = (Rpc - LABEL_9_14);
      goto label_76;

    case 6:
      current_block = (Rpc - LABEL_9_15);
      goto label_77;

    case 7:
      current_block = (Rpc - LABEL_9_16);
      goto label_78;

    case 8:
      current_block = (Rpc - LABEL_9_19);
      goto label_79;

    case 9:
      current_block = (Rpc - LABEL_9_17);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_9_21);
      goto label_80;

    case 11:
      current_block = (Rpc - LABEL_9_22);
      goto label_81;

    case 12:
      current_block = (Rpc - LABEL_9_18);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_9_24);
      goto label_82;

    case 14:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_72;

    case 15:
      current_block = (Rpc - LABEL_9_26);
      goto label_83;

    case 16:
      current_block = (Rpc - LABEL_9_23);
      goto continuation_11;

    case 17:
      current_block = (Rpc - LABEL_9_29);
      goto segment_matcher_60;

    case 18:
      current_block = (Rpc - LABEL_9_30);
      goto label_84;

    case 19:
      current_block = (Rpc - LABEL_9_31);
      goto label_85;

    case 20:
      current_block = (Rpc - LABEL_9_34);
      goto label_86;

    case 21:
      current_block = (Rpc - LABEL_9_28);
      goto continuation_12;

    case 22:
      current_block = (Rpc - LABEL_9_35);
      goto continuation_49;

    case 23:
      current_block = (Rpc - LABEL_9_32);
      goto lambda_107;

    case 24:
      current_block = (Rpc - LABEL_9_8);
      goto lambda_104;

    case 25:
      current_block = (Rpc - LABEL_9_41);
      goto label_89;

    case 26:
      current_block = (Rpc - LABEL_9_42);
      goto label_90;

    case 27:
      current_block = (Rpc - LABEL_9_37);
      goto continuation_31;

    case 28:
      current_block = (Rpc - LABEL_9_36);
      goto continuation_13;

    case 29:
      current_block = (Rpc - LABEL_9_38);
      goto lambda_108;

    case 30:
      current_block = (Rpc - LABEL_9_45);
      goto lambda_110;

    case 31:
      current_block = (Rpc - LABEL_9_53);
      goto label_91;

    case 32:
      current_block = (Rpc - LABEL_9_54);
      goto label_92;

    case 33:
      current_block = (Rpc - LABEL_9_43);
      goto lambda_109;

    case 34:
      current_block = (Rpc - LABEL_9_55);
      goto label_93;

    case 35:
      current_block = (Rpc - LABEL_9_56);
      goto label_94;

    case 36:
      current_block = (Rpc - LABEL_9_57);
      goto label_95;

    case 37:
      current_block = (Rpc - LABEL_9_49);
      goto lambda_112;

    case 38:
      current_block = (Rpc - LABEL_9_60);
      goto label_96;

    case 39:
      current_block = (Rpc - LABEL_9_61);
      goto label_97;

    case 40:
      current_block = (Rpc - LABEL_9_47);
      goto lambda_111;

    case 41:
      current_block = (Rpc - LABEL_9_63);
      goto label_98;

    case 42:
      current_block = (Rpc - LABEL_9_64);
      goto label_99;

    case 43:
      current_block = (Rpc - LABEL_9_65);
      goto label_100;

    case 44:
      current_block = (Rpc - LABEL_9_51);
      goto continuation_51;

    case 45:
      current_block = (Rpc - LABEL_9_68);
      goto label_101;

    case 46:
      current_block = (Rpc - LABEL_9_69);
      goto label_102;

    case 47:
      current_block = (Rpc - LABEL_9_58);
      goto continuation_36;

    case 48:
      current_block = (Rpc - LABEL_9_62);
      goto continuation_27;

    case 49:
      current_block = (Rpc - LABEL_9_66);
      goto continuation_18;

    case 50:
      current_block = (Rpc - LABEL_9_67);
      goto continuation_54;

    case 51:
      current_block = (Rpc - LABEL_9_71);
      goto continuation_37;

    case 52:
      current_block = (Rpc - LABEL_9_72);
      goto continuation_28;

    case 53:
      current_block = (Rpc - LABEL_9_73);
      goto continuation_19;

    case 54:
      current_block = (Rpc - LABEL_9_74);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (full_wildcard_matcher_105)
DEFLABEL (full_wildcard_matcher_74)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_9_2])))
    goto label_115;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 30))
    goto label_114;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (Wrd6.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));

DEFLABEL (label_113)
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_27]));

DEFLABEL (label_114)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_26]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_83)
  (Wrd6.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_115)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_137;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_136)
  if (! ((Wrd7.Obj) == (current_block [OBJECT_9_2])))
    goto label_120;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_120;
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_120;
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_119;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd70.Obj) = ((Wrd72.pObj) [0]);

DEFLABEL (label_118)
  (Rsp [2]) = (Wrd70.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 30))
    goto label_117;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [1]);
  (Wrd83.Obj) = (MAKE_OBJECT (26, (Wrd82.uLng)));
  (* (--Rsp)) = (Wrd83.Obj);

DEFLABEL (label_116)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd92.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_8])));
  Rhp += 2;
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd92.pObj)));
  Wrd95 = Wrd92;
  (Wrd96.Obj) = (Rsp [1]);
  ((Wrd95.pObj) [2]) = (Wrd96.Obj);
  (Wrd94.Obj) = (Rsp [0]);
  ((Wrd95.pObj) [3]) = (Wrd94.Obj);
  Rvl = (Wrd91.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_117)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_87)
  (Wrd70.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_120)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 30))
    goto label_135;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (Wrd21.Obj) = (MAKE_OBJECT (26, (Wrd20.uLng)));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_134)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 30))
    goto label_133;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (Wrd32.Obj) = (MAKE_OBJECT (26, (Wrd31.uLng)));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_132)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_131;
  Wrd46 = Wrd50;

DEFLABEL (label_130)
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_129;
  Wrd6 = Wrd10;

DEFLABEL (label_128)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_25]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9_17);
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_127;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_127;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) + (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_127;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_126)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_125;
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_125;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd27.Lng) = ((Wrd29.Lng) + (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_125;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_124)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_23]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd35.Obj);
  goto segment_matcher_60;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_9_28);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_122;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_37]))));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_121;

DEFLABEL (label_122)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_36]))));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_121)
DEFLABEL (label_123)
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (label_125)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_22]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_81)
  (* (--Rsp)) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_80)
  (Wrd11.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_24])), (Wrd7.pObj));

DEFLABEL (label_82)
  (Wrd6.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_19])), (Wrd47.pObj));

DEFLABEL (label_79)
  (Wrd46.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 1);

DEFLABEL (label_76)
  (Wrd7.Obj) = Rvl;
  goto label_136;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_9_37);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_139;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_46);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_45])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  goto label_138;

DEFLABEL (label_139)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_44);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_43])));
  Rhp += 4;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd23 = Wrd16;
  (Wrd24.Obj) = (Rsp [6]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [4]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd23.pObj) [5]) = (Wrd18.Obj);
  Rvl = (Wrd15.Obj);

DEFLABEL (label_138)
DEFLABEL (label_140)
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_9_36);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_142;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_50);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_49])));
  Rhp += 4;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd16 = Wrd9;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  goto label_141;

DEFLABEL (label_142)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_48);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_47])));
  Rhp += 6;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd31 = Wrd20;
  (Wrd32.Obj) = (Rsp [6]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  ((Wrd31.pObj) [4]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  ((Wrd31.pObj) [5]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd31.pObj) [6]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd31.pObj) [7]) = (Wrd22.Obj);
  Rvl = (Wrd19.Obj);

DEFLABEL (label_141)
DEFLABEL (label_143)
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (segment_matcher_106)
DEFLABEL (segment_matcher_60)
  INTERRUPT_CHECK (26, LABEL_9_29);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_150;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_149)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_148;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_147)
  (Rsp [1]) = (Wrd14.Obj);
  if (! ((Wrd14.Obj) == (current_block [OBJECT_9_2])))
    goto label_144;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_32])));
  Rhp += 1;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  Wrd43 = Wrd42;
  (Wrd44.Obj) = (Rsp [0]);
  ((Wrd43.pObj) [2]) = (Wrd44.Obj);
  Rvl = (Wrd41.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_144)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 30))
    goto label_146;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (Wrd29.Obj) = (MAKE_OBJECT (26, (Wrd28.uLng)));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_145)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_35]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd39.Obj);
  goto segment_matcher_60;

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_9_35);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_39);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_38])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_146)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_34]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_31]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 1);

DEFLABEL (label_85)
  (Wrd14.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_30]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_149;

DEFLABEL (lambda_107)
  CLOSURE_HEADER (LABEL_9_32);

DEFLABEL (lambda_58)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_40]));

DEFLABEL (lambda_104)
  CLOSURE_HEADER (LABEL_9_8);

DEFLABEL (lambda_69)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_152;

DEFLABEL (label_151)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_152)
  if (! ((Wrd6.uLng) == 30))
    goto label_156;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_155)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_154;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_154;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if ((Wrd36.Lng) < (Wrd40.Lng))
    goto label_151;

DEFLABEL (label_153)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [2]);
  (Rsp [0]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_40]));

DEFLABEL (label_154)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [3]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_42]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_90)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_153;
  goto label_151;

DEFLABEL (label_156)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_41]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_89)
  (Wrd9.Obj) = Rvl;
  goto label_155;

DEFLABEL (lambda_108)
  CLOSURE_HEADER (LABEL_9_38);

DEFLABEL (lambda_56)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_52]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_9_51);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_157;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_157)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_67]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 30))
    goto label_161;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (Wrd14.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_160)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_159;
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [3]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_159;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd34.Lng) = ((Wrd36.Lng) + (Wrd40.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd34.Lng)))
    goto label_159;
  (Wrd41.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_158)
  (Wrd42.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_70]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_9_67);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_159)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [3]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_69]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_102)
  (* (--Rsp)) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_68]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_101)
  (* (--Rsp)) = Rvl;
  goto label_160;

DEFLABEL (lambda_110)
  CLOSURE_HEADER (LABEL_9_45);

DEFLABEL (lambda_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_163;

DEFLABEL (label_162)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_163)
  if (! ((Wrd6.uLng) == 30))
    goto label_167;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_166)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_165;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_165;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if ((Wrd36.Lng) < (Wrd40.Lng))
    goto label_162;

DEFLABEL (label_164)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [3]);
  (Rsp [0]) = (Wrd33.Obj);
  goto pop_return;

DEFLABEL (label_165)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_54]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_92)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_164;
  goto label_162;

DEFLABEL (label_167)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_53]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_91)
  (Wrd9.Obj) = Rvl;
  goto label_166;

DEFLABEL (lambda_109)
  CLOSURE_HEADER (LABEL_9_43);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_168;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_168)
  if (! ((Wrd6.uLng) == 30))
    goto label_176;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (Wrd13.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_175)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_174;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_174;
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! ((Wrd71.Lng) < (Wrd75.Lng)))
    goto label_170;

DEFLABEL (label_169)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_170)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_173;
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [3]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_173;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = ((Wrd49.Lng) - (Wrd53.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd47.Lng)))
    goto label_173;
  (Wrd54.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_172)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_58]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [6]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [3]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd64.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd67.Obj) = ((Wrd62.pObj) [2]);
  (* (--Rsp)) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_59]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_9_58);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_171;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_171)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_71]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_70]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_9_71);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [5]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_173)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [3]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_57]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_95)
  (* (--Rsp)) = Rvl;
  goto label_172;

DEFLABEL (label_174)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [4]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_56]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_94)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_170;
  goto label_169;

DEFLABEL (label_176)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_55]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_175;

DEFLABEL (lambda_112)
  CLOSURE_HEADER (LABEL_9_49);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_177;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_177)
  if (! ((Wrd6.uLng) == 30))
    goto label_183;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (Wrd13.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_182)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_181;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_181;
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! ((Wrd52.Lng) < (Wrd56.Lng)))
    goto label_179;

DEFLABEL (label_178)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_179)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_62]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [3]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd48.Obj) = ((Wrd38.pObj) [2]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_59]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_9_62);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_180;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_180)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_72]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_70]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_9_72);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [5]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_181)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [4]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_61]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_97)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_179;
  goto label_178;

DEFLABEL (label_183)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_60]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_96)
  (* (--Rsp)) = Rvl;
  goto label_182;

DEFLABEL (lambda_111)
  CLOSURE_HEADER (LABEL_9_47);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_184;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_184)
  if (! ((Wrd6.uLng) == 30))
    goto label_193;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (Wrd13.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_192)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_191;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [6]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_191;
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! ((Wrd73.Lng) < (Wrd77.Lng)))
    goto label_186;

DEFLABEL (label_185)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_186)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_190;
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [5]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_190;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = ((Wrd49.Lng) - (Wrd53.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd47.Lng)))
    goto label_190;
  (Wrd54.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_189)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_66]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [3]);
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [4]);
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd69.Obj) = ((Wrd59.pObj) [3]);
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_59]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_9_66);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_187;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_187)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_73]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_59]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_9_73);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_188;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_188)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_74]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_70]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_9_74);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [7]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_190)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [5]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_65]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_100)
  (* (--Rsp)) = Rvl;
  goto label_189;

DEFLABEL (label_191)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [6]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_64]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_99)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_186;
  goto label_185;

DEFLABEL (label_193)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_63]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 1);

DEFLABEL (label_98)
  (* (--Rsp)) = Rvl;
  goto label_192;

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
dosdir_so_88f6744441984f4c (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	1,
	2,
	1,
	1,
	1,
	2,
	3,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 9)
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

static const struct liarc_code_S arr_decl_dosdir_so_88f6744441984f4c [9] =
  {
    { "dosdir_so_code_1", 3, dosdir_so_code_1 },
    { "dosdir_so_code_2", 30, dosdir_so_code_2 },
    { "dosdir_so_code_3", 8, dosdir_so_code_3 },
    { "dosdir_so_code_4", 6, dosdir_so_code_4 },
    { "dosdir_so_code_5", 9, dosdir_so_code_5 },
    { "dosdir_so_code_6", 1, dosdir_so_code_6 },
    { "dosdir_so_code_7", 18, dosdir_so_code_7 },
    { "dosdir_so_code_8", 22, dosdir_so_code_8 },
    { "dosdir_so_code_9", 55, dosdir_so_code_9 }
  };

int
decl_dosdir_so_88f6744441984f4c (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_dosdir_so_88f6744441984f4c);
  return (0);
}

DECLARE_COMPILED_CODE ("dosdir.so", 3, decl_dosdir_so_88f6744441984f4c, dosdir_so_88f6744441984f4c)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_dosdir_so_data_88f6744441984f4c [2487] =
  "\x99\x01\x19\xd5\x04\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x0d\xb9"
  "\x24\x28\x0d\xba\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbb\x1d\xb0\x82\x88\x1d\x0d\xbc\x0d\xbd\x25\x0d\xb5\x24\x28\x0d"
  "\xbe\x28\xb6\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xbe\x28\x0d\xbf\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xb4\x06\x07\x0f"
  "\xc2\xc1\x1c\x0d\x1c\x24\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\x08\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x85\x88\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x07\x28\x0d\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x07\x80\x1b\x0f\xb4\x0d\xbc\x24\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x81\x80\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\xc1\x0c\x08\x1b"
  "\xc1\x0d\x0d\x24\x28\xb4\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb3\x2a\x07"
  "\x07\x17\x1b\x1b\x1b\x1b\xb1\xb7\xb6\xb2\x0d\xb5\x1b\x17\x28\x0d"
  "\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69"
  "\x6d\x65\x2f\x2e\x2f\x64\x6f\x73\x64\x69\x72\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x08\x0b\x70\x61\x74\x68\x6e\x61\x6d\x65\x3c"
  "\x3f\x02\x03\x16\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x72\x65"
  "\x61\x64\x2d\x6e\x6f\x73\x6f\x72\x74\x04\x05\x73\x6f\x72\x74\x03"
  "\x06\x08\x81\x85\x02\x05\x06\x81\x85\x02\x04\x04\x84\x04\x07\x12"
  "\x02\x02\x05\x77\x69\x6c\x64\x1d\x2a\x65\x78\x70\x61\x6e\x64\x2d"
  "\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x72\x65\x66\x69\x78"
  "\x65\x73\x3f\x2a\x02\x0b\x2d\x3e\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x03\x03\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x73\x04\x03\x13\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x69"
  "\x72\x65\x63\x74\x6f\x72\x79\x03\x13\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x03\x14\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x3f"
  "\x03\x19\x61\x64\x6a\x75\x73\x74\x2d\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x2d\x70\x61\x74\x74\x65\x72\x6e\x03\x1d\x67\x65\x6e\x65"
  "\x72\x61\x74\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x73\x03\x0e\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x2d\x74\x79\x70\x65\x09\x04\x04\x6d\x61\x70\x0a\x03\x0e"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x61\x6d\x65\x0b\x05\x13"
  "\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69"
  "\x6e\x64\x03\x10\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x76"
  "\x69\x63\x65\x03\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x68\x6f"
  "\x73\x74\x03\x12\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2d\x6d\x61"
  "\x74\x63\x68\x65\x72\x0c\x03\x11\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x76\x65\x72\x73\x69\x6f\x6e\x04\x18\x6c\x69\x73\x74\x2d\x74"
  "\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x70\x6f\x73\x69\x74\x69\x76"
  "\x65\x08\x0e\x6d\x61\x6b\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x12\x24\x3e\x81\x85\x02\x23\x3c\x81\x87\x02\x22\x3a\x81\x85\x02"
  "\x21\x38\x81\x85\x02\x20\x36\x81\x8d\x02\x1f\x34\x81\x89\x02\x1e"
  "\x32\x81\x87\x02\x1d\x30\x81\x8b\x02\x1c\x2e\x81\x87\x02\x1b\x2c"
  "\x81\x85\x02\x1a\x2a\x81\x89\x02\x19\x28\x81\x83\x02\x18\x26\x81"
  "\x85\x02\x17\x24\x81\x83\x02\x16\x22\x81\x83\x02\x15\x20\x81\x83"
  "\x02\x14\x1e\x81\x83\x02\x13\x1c\x81\x85\x02\x12\x1a\x81\x87\x02"
  "\x11\x18\x81\x89\x02\x10\x16\x81\x87\x02\x0f\x14\x81\x85\x02\x0e"
  "\x12\x81\x83\x02\x0d\x10\x81\x83\x02\x0c\x0e\x81\x83\x02\x0b\x0c"
  "\x81\x87\x02\x0a\x0a\x81\x85\x02\x09\x08\x81\x83\x02\x08\x06\x81"
  "\x83\x02\x07\x04\x83\x04\x3d\x6a\x0d\x02\x01\x2b\x0b\x73\x74\x72"
  "\x69\x6e\x67\x2d\x72\x65\x66\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x0e\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x2d\x72\x65\x61\x64\x2f\x61\x64\x6a\x75\x73\x74\x2d\x70\x61\x74"
  "\x74\x65\x72\x6e\x73\x3f\x0f\x02\x04\x12\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x2d\x6e\x65\x77\x2d\x74\x79\x70\x65\x03\x0b\x03\x09\x04"
  "\x2c\x12\x81\x83\x02\x2b\x10\x83\x04\x2a\x0e\x81\x83\x02\x29\x0c"
  "\x81\x87\x02\x28\x0a\x81\x87\x02\x27\x08\x81\x87\x02\x26\x06\x81"
  "\x85\x02\x25\x04\x81\x83\x02\x11\x23\x10\x02\x03\x0d\x2d\x3e\x6e"
  "\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x03\x17\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x6f\x70\x65"
  "\x6e\x03\x17\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x63\x68\x61"
  "\x6e\x6e\x65\x6c\x2d\x72\x65\x61\x64\x03\x18\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x63\x6c\x6f"
  "\x73\x65\x05\x32\x0e\x81\x87\x02\x31\x0c\x81\x85\x02\x30\x0a\x81"
  "\x85\x02\x2f\x08\x81\x85\x02\x2e\x06\x81\x83\x02\x2d\x04\x83\x04"
  "\x0d\x1a\x11\x02\x03\x0b\x03\x09\x04\x0c\x63\x6f\x6d\x70\x6f\x6e"
  "\x65\x6e\x74\x3c\x3f\x0b\x04\x07\x65\x71\x75\x61\x6c\x3f\x09\x05"
  "\x3b\x14\x81\x87\x02\x3a\x12\x81\x8b\x02\x39\x10\x81\x87\x02\x38"
  "\x0e\x81\x89\x02\x37\x0c\x81\x89\x02\x36\x0a\x81\x87\x02\x35\x08"
  "\x81\x87\x02\x34\x06\x81\x85\x02\x33\x04\x84\x06\x13\x1f\x12\x02"
  "\x04\x09\x73\x74\x72\x69\x6e\x67\x3c\x3f\x02\x3c\x04\x84\x06\x03"
  "\x0a\x13\x02\x08\x0e\x01\x2b\x0d\x73\x74\x72\x69\x6e\x67\x2d\x6e"
  "\x75\x6c\x6c\x3f\x02\x04\x16\x73\x74\x72\x69\x6e\x67\x2d\x66\x69"
  "\x6e\x64\x2d\x6e\x65\x78\x74\x2d\x63\x68\x61\x72\x06\x19\x73\x75"
  "\x62\x73\x74\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78"
  "\x74\x2d\x63\x68\x61\x72\x04\x18\x73\x69\x6d\x70\x6c\x65\x2d\x77"
  "\x69\x6c\x64\x63\x61\x72\x64\x2d\x6d\x61\x74\x63\x68\x65\x72\x14"
  "\x05\x0a\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x15\x04\x09\x03\x09"
  "\x72\x65\x76\x65\x72\x73\x65\x21\x04\x18\x6c\x69\x73\x74\x2d\x74"
  "\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x6e\x65\x67\x61\x74\x69\x76"
  "\x65\x05\x16\x66\x75\x6c\x6c\x2d\x77\x69\x6c\x64\x63\x61\x72\x64"
  "\x2d\x6d\x61\x74\x63\x68\x65\x72\x09\x09\x4e\x26\x81\x93\x02\x4d"
  "\x24\x81\x97\x02\x4c\x22\x81\x93\x02\x4b\x20\x81\x93\x02\x4a\x1e"
  "\x81\x95\x02\x49\x1c\x81\x91\x02\x48\x1a\x81\x8f\x02\x47\x18\x81"
  "\x8f\x02\x46\x16\x81\x8d\x02\x45\x14\x81\x91\x02\x44\x12\x81\x89"
  "\x02\x43\x10\x83\x04\x42\x0e\x81\x85\x02\x41\x0c\x81\x87\x02\x40"
  "\x0a\x81\x8d\x02\x3f\x08\x81\x85\x02\x3e\x06\x83\x04\x3d\x04\x81"
  "\x83\x02\x25\x41\x16\x02\x09\x0e\x08\x0c\x73\x75\x62\x73\x74\x72"
  "\x69\x6e\x67\x3d\x3f\x17\x02\x64\x2e\x81\x8d\x02\x63\x2c\x81\x87"
  "\x02\x62\x2a\x83\x04\x61\x28\x81\x8d\x02\x60\x26\x81\x87\x02\x5f"
  "\x24\x81\x85\x02\x5e\x22\x81\x85\x02\x5d\x20\x81\x87\x02\x5c\x1e"
  "\x81\x85\x02\x5b\x1c\x81\x85\x02\x5a\x1a\x81\x87\x02\x59\x18\x81"
  "\x85\x02\x58\x16\x81\x85\x02\x57\x14\x81\x8b\x02\x56\x12\x81\x89"
  "\x02\x55\x10\x81\x89\x02\x54\x0e\x81\x89\x02\x53\x0c\x81\x89\x02"
  "\x52\x0a\x81\x89\x02\x51\x08\x81\x87\x02\x50\x06\x81\x85\x02\x4f"
  "\x04\x84\x06\x2d\x37\x18\x02\x0a\x04\x63\x64\x72\x02\x2a\x0e\x04"
  "\x63\x61\x72\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74"
  "\x68\x02\x2b\x03\x03\x05\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70"
  "\x70\x65\x6e\x64\x04\x0a\x05\x07\x72\x65\x64\x75\x63\x65\x04\x14"
  "\x04\x0b\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x3f\x04\x16\x73\x74"
  "\x72\x69\x6e\x67\x2d\x73\x65\x61\x72\x63\x68\x2d\x66\x6f\x72\x77"
  "\x61\x72\x64\x08\x17\x05\x15\x0a\x9b\x01\x70\x81\x89\x02\x9a\x01"
  "\x6e\x81\x89\x02\x99\x01\x6c\x81\x87\x02\x98\x01\x6a\x81\x89\x02"
  "\x97\x01\x68\x81\x87\x02\x96\x01\x66\x81\x89\x02\x95\x01\x64\x81"
  "\x87\x02\x94\x01\x62\x81\x89\x02\x93\x01\x60\x81\x8b\x02\x92\x01"
  "\x5e\x81\x89\x02\x91\x01\x5c\x81\x85\x02\x90\x01\x5a\x81\x87\x02"
  "\x8f\x01\x58\x81\x87\x02\x8e\x01\x56\x81\x85\x02\x8d\x01\x54\x81"
  "\x85\x02\x8c\x01\x52\x81\x87\x02\x8b\x01\x50\x81\x85\x02\x8a\x01"
  "\x4e\x81\x85\x02\x89\x01\x4c\x81\x87\x02\x88\x01\x4a\x81\x87\x02"
  "\x87\x01\x48\x81\x85\x02\x86\x01\x46\x81\x85\x02\x85\x01\x44\x81"
  "\x85\x02\x84\x01\x42\x81\x85\x02\x83\x01\x40\x81\x85\x02\x82\x01"
  "\x3e\x81\x85\x02\x81\x01\x3c\x81\x8f\x02\x80\x01\x3a\x81\x8f\x02"
  "\x7f\x38\x81\x85\x02\x7e\x36\x81\x85\x02\x7d\x34\x81\x85\x02\x7c"
  "\x32\x81\x85\x02\x7b\x30\x81\x87\x02\x7a\x2e\x81\x8f\x02\x79\x2c"
  "\x81\x85\x02\x78\x2a\x81\x85\x02\x77\x28\x81\x83\x02\x76\x26\x81"
  "\x83\x02\x75\x24\x81\x8d\x02\x74\x22\x81\x87\x02\x73\x20\x81\x87"
  "\x02\x72\x1e\x81\x91\x02\x71\x1c\x81\x8d\x02\x70\x1a\x81\x8b\x02"
  "\x6f\x18\x81\x8b\x02\x6e\x16\x81\x8b\x02\x6d\x14\x81\x91\x02\x6c"
  "\x12\x81\x89\x02\x6b\x10\x81\x87\x02\x6a\x0e\x81\x87\x02\x69\x0c"
  "\x85\x08\x68\x0a\x81\x87\x02\x67\x08\x81\x83\x02\x66\x06\x81\x87"
  "\x02\x65\x04\x81\x87\x02\x6f\x8e\x01\x17\x0a\x15\x15\x17\x0c\x18"
  "\x04\x16\x06\x13\x04\x12\x04\x11\x04\x10\x10\x0d\x04\x04\x0c\x09"
  "\x14\x0c\x0b\x0f\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x72\x65"
  "\x61\x64\x0f\x0c\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02"
  "\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
dosdir_so_data_88f6744441984f4c (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_dosdir_so_data_88f6744441984f4c [0]))), (sizeof (prog_dosdir_so_data_88f6744441984f4c)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("dosdir.so", dosdir_so_data_88f6744441984f4c)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("dosdir.so", "9eb61c2bb103894b")
