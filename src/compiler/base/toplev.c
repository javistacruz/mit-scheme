/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:13-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_8 7
#define TAG_1_9 2
#define LABEL_1_10 9
#define LABEL_1_12 11
#define ENVIRONMENT_LABEL_1_3 25
#define DEBUGGING_LABEL_1_2 24
#define OBJECT_1_0 23
#define EXECUTE_CACHE_1_15 13
#define EXECUTE_CACHE_1_14 15
#define EXECUTE_CACHE_1_13 17
#define EXECUTE_CACHE_1_11 19
#define EXECUTE_CACHE_1_7 21
#define FREE_REFERENCES_LABEL_1_0 12
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_1_4);
      goto cf_7;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cf_10)
DEFLABEL (cf_7)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 1)
    goto label_13;
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_4;

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_8])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_1_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_1_0]))
    goto label_14;
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (label_14)
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 10
#define DEBUGGING_LABEL_2_2 9
#define OBJECT_2_0 8
#define FREE_REFERENCE_2_0 7
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      goto cbf_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cbf_5)
DEFLABEL (cbf_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_7;
  Wrd11 = Wrd15;

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 2);

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define LABEL_3_9 11
#define LABEL_3_12 13
#define LABEL_3_15 15
#define TAG_3_16 6
#define LABEL_3_13 17
#define TAG_3_14 7
#define LABEL_3_20 19
#define LABEL_3_21 21
#define LABEL_3_22 23
#define LABEL_3_23 25
#define LABEL_3_24 27
#define LABEL_3_25 29
#define LABEL_3_18 31
#define LABEL_3_26 33
#define LABEL_3_28 35
#define LABEL_3_30 37
#define LABEL_3_31 39
#define TAG_3_32 18
#define LABEL_3_35 41
#define LABEL_3_33 43
#define LABEL_3_36 45
#define TAG_3_37 21
#define LABEL_3_38 47
#define LABEL_3_40 49
#define LABEL_3_44 51
#define TAG_3_45 24
#define LABEL_3_42 53
#define TAG_3_43 25
#define LABEL_3_49 55
#define LABEL_3_50 57
#define LABEL_3_51 59
#define LABEL_3_46 61
#define TAG_3_47 29
#define LABEL_3_52 63
#define LABEL_3_53 65
#define ENVIRONMENT_LABEL_3_3 112
#define DEBUGGING_LABEL_3_2 111
#define OBJECT_3_6 110
#define OBJECT_3_5 109
#define OBJECT_3_4 108
#define OBJECT_3_3 107
#define OBJECT_3_2 106
#define OBJECT_3_1 105
#define OBJECT_3_0 104
#define EXECUTE_CACHE_3_55 67
#define EXECUTE_CACHE_3_54 69
#define EXECUTE_CACHE_3_48 71
#define EXECUTE_CACHE_3_41 73
#define EXECUTE_CACHE_3_39 75
#define EXECUTE_CACHE_3_34 77
#define EXECUTE_CACHE_3_29 79
#define EXECUTE_CACHE_3_27 81
#define EXECUTE_CACHE_3_19 83
#define EXECUTE_CACHE_3_17 85
#define EXECUTE_CACHE_3_11 87
#define EXECUTE_CACHE_3_10 89
#define EXECUTE_CACHE_3_8 91
#define FREE_REFERENCE_3_5 94
#define FREE_REFERENCE_3_4 95
#define FREE_REFERENCE_3_3 96
#define FREE_REFERENCE_3_2 97
#define FREE_REFERENCE_3_1 98
#define FREE_REFERENCE_3_0 99
#define FREE_ASSIGNMENT_3_2 101
#define FREE_ASSIGNMENT_3_1 102
#define FREE_ASSIGNMENT_3_0 103
#define FREE_REFERENCES_LABEL_3_0 66
#define NUMBER_OF_LINKER_SECTIONS_3_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
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
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_3_4);
      goto compile_bin_file_42;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_41;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto lambda_40;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_3_15);
      goto lambda_60;

    case 7:
      current_block = (Rpc - LABEL_3_13);
      goto swapB_59;

    case 8:
      current_block = (Rpc - LABEL_3_20);
      goto label_44;

    case 9:
      current_block = (Rpc - LABEL_3_21);
      goto label_45;

    case 10:
      current_block = (Rpc - LABEL_3_22);
      goto label_46;

    case 11:
      current_block = (Rpc - LABEL_3_23);
      goto label_47;

    case 12:
      current_block = (Rpc - LABEL_3_24);
      goto label_48;

    case 13:
      current_block = (Rpc - LABEL_3_25);
      goto label_49;

    case 14:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_5;

    case 15:
      current_block = (Rpc - LABEL_3_26);
      goto continuation_6;

    case 16:
      current_block = (Rpc - LABEL_3_28);
      goto label_50;

    case 17:
      current_block = (Rpc - LABEL_3_30);
      goto label_51;

    case 18:
      current_block = (Rpc - LABEL_3_31);
      goto lambda_61;

    case 19:
      current_block = (Rpc - LABEL_3_35);
      goto label_52;

    case 20:
      current_block = (Rpc - LABEL_3_33);
      goto continuation_7;

    case 21:
      current_block = (Rpc - LABEL_3_36);
      goto lambda_62;

    case 22:
      current_block = (Rpc - LABEL_3_38);
      goto continuation_8;

    case 23:
      current_block = (Rpc - LABEL_3_40);
      goto continuation_9;

    case 24:
      current_block = (Rpc - LABEL_3_44);
      goto lambda_64;

    case 25:
      current_block = (Rpc - LABEL_3_42);
      goto swapB_63;

    case 26:
      current_block = (Rpc - LABEL_3_49);
      goto label_53;

    case 27:
      current_block = (Rpc - LABEL_3_50);
      goto label_54;

    case 28:
      current_block = (Rpc - LABEL_3_51);
      goto label_55;

    case 29:
      current_block = (Rpc - LABEL_3_46);
      goto lambda_65;

    case 30:
      current_block = (Rpc - LABEL_3_52);
      goto continuation_11;

    case 31:
      current_block = (Rpc - LABEL_3_53);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_bin_file_57)
DEFLABEL (compile_bin_file_42)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == (current_block [OBJECT_3_3]))
    goto label_67;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_66;

DEFLABEL (label_67)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_66)
DEFLABEL (label_68)
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_3_5);
  Rvl = (current_block [OBJECT_3_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_58)
DEFLABEL (lambda_40)
  INTERRUPT_CHECK (26, LABEL_3_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_13])));
  Rhp += 2;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd22.pObj) = (& (Rhp [-1]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd22.pObj)));
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd26.pObj) = (& (Rhp [-1]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd26.pObj)));
  (Rsp [2]) = (Wrd27.Obj);
  Wrd19 = Wrd29;
  ((Wrd19.pObj) [2]) = (Wrd27.Obj);
  ((Wrd19.pObj) [3]) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_15])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Rsp [4]) = (Wrd30.Obj);
  (Rsp [2]) = (Wrd30.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_3_15);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_27]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_73;
  Wrd7 = Wrd11;

DEFLABEL (label_72)
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_69;
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [2]);
  (Rsp [1]) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (label_69)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_3]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_71;
  Wrd14 = Wrd18;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_31])));
  Rhp += 3;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd28 = Wrd21;
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  ((Wrd28.pObj) [2]) = (Wrd31.Obj);
  (Wrd27.Obj) = ((Wrd30.pObj) [3]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  ((Wrd28.pObj) [4]) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_34]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_33);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_39]));

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_30])), (Wrd15.pObj));

DEFLABEL (label_51)
  (Wrd14.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_28])), (Wrd8.pObj));

DEFLABEL (label_50)
  (Wrd7.Obj) = Rvl;
  goto label_72;

DEFLABEL (swapB_59)
  CLOSURE_HEADER (LABEL_3_13);

DEFLABEL (swapB_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_91;

DEFLABEL (label_90)
  Wrd5 = Wrd9;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_88;

DEFLABEL (label_87)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_86)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_85;

DEFLABEL (label_84)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_83)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  Wrd57 = Wrd61;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_77)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_76;

DEFLABEL (label_75)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_74)
  Rvl = (current_block [OBJECT_3_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_76)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_75;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_25])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_49)
  goto label_74;

DEFLABEL (label_79)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_78;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_24])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_48)
  goto label_77;

DEFLABEL (label_82)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_81;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_3_23])), (Wrd58.pObj));

DEFLABEL (label_47)
  (Wrd57.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_85)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_84;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_22])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_46)
  goto label_83;

DEFLABEL (label_88)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_87;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_21])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_45)
  goto label_86;

DEFLABEL (label_91)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_90;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_3_20])), (Wrd6.pObj));

DEFLABEL (label_44)
  (Wrd5.Obj) = Rvl;
  goto label_89;

DEFLABEL (lambda_61)
  CLOSURE_HEADER (LABEL_3_31);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_4]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_93;
  Wrd5 = Wrd9;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_36])));
  Rhp += 4;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd24 = Wrd13;
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd26.pObj) [3]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd26.pObj) [4]);
  ((Wrd24.pObj) [4]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd24.pObj) [5]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_38]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_34]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_38);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_39]));

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_35])), (Wrd6.pObj));

DEFLABEL (label_52)
  (Wrd5.Obj) = Rvl;
  goto label_92;

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_3_36);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_41]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_40);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_43);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_42])));
  Rhp += 1;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd33.pObj) = (& (Rhp [-1]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd33.pObj)));
  (Rsp [1]) = (Wrd34.Obj);
  ((Wrd36.pObj) [2]) = (Wrd34.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_45);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_44])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd22 = Wrd7;
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd24.pObj) [3]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd24.pObj) [4]);
  ((Wrd22.pObj) [4]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd24.pObj) [5]);
  ((Wrd22.pObj) [5]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [6]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd37.Obj);
  (Rsp [1]) = (Wrd37.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_3_44);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_47);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_46])));
  Rhp += 4;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd26 = Wrd13;
  ((Wrd26.pObj) [2]) = (Wrd7.Obj);
  (Wrd25.Obj) = ((Wrd6.pObj) [4]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd6.pObj) [5]);
  ((Wrd26.pObj) [4]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [6]);
  ((Wrd26.pObj) [5]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_48]));

DEFLABEL (swapB_63)
  CLOSURE_HEADER (LABEL_3_42);

DEFLABEL (swapB_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_5]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_102;

DEFLABEL (label_101)
  Wrd5 = Wrd9;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_2]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_99;

DEFLABEL (label_98)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_97)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_2]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_96;

DEFLABEL (label_95)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_94)
  Rvl = (current_block [OBJECT_3_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_96)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_95;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_51])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_55)
  goto label_94;

DEFLABEL (label_99)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_98;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_50])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_54)
  goto label_97;

DEFLABEL (label_102)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_101;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_3_49])), (Wrd6.pObj));

DEFLABEL (label_53)
  (Wrd5.Obj) = Rvl;
  goto label_100;

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_3_46);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_52]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_53]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_54]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_53);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_34]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [5]);
  (Rsp [3]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_55]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 8
#define DEBUGGING_LABEL_4_2 7
#define EXECUTE_CACHE_4_5 5
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto maybe_open_file_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_open_file_3)
DEFLABEL (maybe_open_file_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_4;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_5]));

DEFLABEL (label_4)
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 11
#define DEBUGGING_LABEL_5_2 10
#define OBJECT_5_1 9
#define OBJECT_5_0 8
#define FREE_REFERENCE_5_0 7
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto compiler_compiled_inf_pathname_type_0;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_compiled_inf_pathname_type_4)
DEFLABEL (compiler_compiled_inf_pathname_type_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_5_1]);
  goto pop_return;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_5_0]);
  goto pop_return;

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_5 3
#define LABEL_6_4 5
#define LABEL_6_8 7
#define LABEL_6_6 9
#define TAG_6_7 3
#define LABEL_6_11 11
#define LABEL_6_14 13
#define LABEL_6_13 15
#define LABEL_6_19 17
#define LABEL_6_15 19
#define LABEL_6_17 21
#define TAG_6_18 9
#define LABEL_6_20 23
#define TAG_6_21 10
#define LABEL_6_24 25
#define LABEL_6_25 27
#define LABEL_6_28 29
#define LABEL_6_29 31
#define LABEL_6_31 33
#define LABEL_6_33 35
#define ENVIRONMENT_LABEL_6_3 63
#define DEBUGGING_LABEL_6_2 62
#define OBJECT_6_1 61
#define OBJECT_6_0 60
#define EXECUTE_CACHE_6_32 37
#define EXECUTE_CACHE_6_30 39
#define EXECUTE_CACHE_6_27 41
#define EXECUTE_CACHE_6_26 43
#define EXECUTE_CACHE_6_23 45
#define EXECUTE_CACHE_6_22 47
#define EXECUTE_CACHE_6_16 49
#define EXECUTE_CACHE_6_12 51
#define EXECUTE_CACHE_6_10 53
#define EXECUTE_CACHE_6_9 55
#define FREE_REFERENCE_6_1 58
#define FREE_REFERENCE_6_0 59
#define FREE_REFERENCES_LABEL_6_0 36
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd25;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_17;

    case 1:
      current_block = (Rpc - LABEL_6_4);
      goto compiler_pathnames_21;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_6_6);
      goto lambda_27;

    case 4:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_6_19);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_6_15);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_6_17);
      goto lambda_28;

    case 10:
      current_block = (Rpc - LABEL_6_20);
      goto lambda_29;

    case 11:
      current_block = (Rpc - LABEL_6_24);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_6_25);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_6_28);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_6_29);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_6_31);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_6_33);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_pathnames_26)
DEFLABEL (compiler_pathnames_21)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_6])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_34;
  Wrd16 = Wrd20;

DEFLABEL (label_33)
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Wrd25.Obj) = Rvl;

DEFLABEL (label_31)
  (Rsp [0]) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_30;
  (Rsp [3]) = (Wrd25.Obj);
  (Rsp [4]) = (Wrd26.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_30)
  (Rsp [3]) = (Wrd25.Obj);
  (Rsp [4]) = (Wrd26.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (label_32)
  (Wrd25.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_8])), (Wrd17.pObj));

DEFLABEL (label_23)
  (Wrd16.Obj) = Rvl;
  goto label_33;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_6_6);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_23]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_14);
  (* (--Rsp)) = Rvl;
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [4]);
  if ((Wrd35.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_12]));

DEFLABEL (label_35)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_17])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_38;
  Wrd15 = Wrd19;

DEFLABEL (label_37)
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd22.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_20])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd28 = Wrd25;
  (Wrd29.Obj) = (Rsp [2]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Rsp [3]) = (Wrd24.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_22]));

DEFLABEL (label_36)
  (Wrd31.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd31.Obj);
  Rsp = (& (Rsp [4]));
  goto lambda_6;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_19])), (Wrd16.pObj));

DEFLABEL (label_24)
  (Wrd15.Obj) = Rvl;
  goto label_37;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_13);
  goto label_39;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_6_17);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_24);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_27]));

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_6_20);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_26]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_29]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_30]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_32]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_6_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_26]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_6_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_30]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_6_33);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_32]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_8 5
#define LABEL_7_5 7
#define LABEL_7_6 9
#define LABEL_7_10 11
#define LABEL_7_13 13
#define LABEL_7_15 15
#define LABEL_7_17 17
#define TAG_7_18 7
#define LABEL_7_20 19
#define TAG_7_21 8
#define LABEL_7_22 21
#define ENVIRONMENT_LABEL_7_3 46
#define DEBUGGING_LABEL_7_2 45
#define OBJECT_7_1 44
#define OBJECT_7_0 43
#define EXECUTE_CACHE_7_24 23
#define EXECUTE_CACHE_7_23 25
#define EXECUTE_CACHE_7_19 27
#define EXECUTE_CACHE_7_16 29
#define EXECUTE_CACHE_7_14 31
#define EXECUTE_CACHE_7_12 33
#define EXECUTE_CACHE_7_11 35
#define EXECUTE_CACHE_7_9 37
#define EXECUTE_CACHE_7_7 39
#define FREE_REFERENCE_7_0 42
#define FREE_REFERENCES_LABEL_7_0 22
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_7_4);
      goto compiler_fasload_11;

    case 1:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_7_15);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_7_17);
      goto lambda_16;

    case 8:
      current_block = (Rpc - LABEL_7_20);
      goto lambda_17;

    case 9:
      current_block = (Rpc - LABEL_7_22);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_fasload_15)
DEFLABEL (compiler_fasload_11)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (label_18)
  (Wrd5.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_17])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (label_20)
  (Wrd13.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_22;
  Wrd15 = Wrd19;

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_15])), (Wrd16.pObj));

DEFLABEL (label_13)
  (Wrd15.Obj) = Rvl;
  goto label_21;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd5.Obj) = Rvl;
  goto label_23;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_7_17);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_7_1]))
    goto label_24;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd9.pObj) [2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_24)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_20])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd16.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_7_20);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_22);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_24]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 14
#define DEBUGGING_LABEL_8_2 13
#define OBJECT_8_1 12
#define OBJECT_8_0 11
#define EXECUTE_CACHE_8_7 7
#define EXECUTE_CACHE_8_6 9
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto compile_scode_3;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_scode_6)
DEFLABEL (compile_scode_3)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_8_0]))
    goto label_9;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;

DEFLABEL (label_9)
  (Wrd12.Obj) = (current_block [OBJECT_8_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_7;

DEFLABEL (label_8)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
DEFLABEL (label_10)
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define ENVIRONMENT_LABEL_9_3 22
#define DEBUGGING_LABEL_9_2 21
#define OBJECT_9_1 20
#define OBJECT_9_0 19
#define EXECUTE_CACHE_9_11 11
#define EXECUTE_CACHE_9_10 13
#define EXECUTE_CACHE_9_9 15
#define EXECUTE_CACHE_9_6 17
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      goto compile_procedure_5;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_procedure_8)
DEFLABEL (compile_procedure_5)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == (current_block [OBJECT_9_0]))
    goto label_11;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_11)
  (Wrd12.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_9;

DEFLABEL (label_10)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
DEFLABEL (label_12)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_7 5
#define TAG_10_8 1
#define LABEL_10_5 7
#define TAG_10_6 2
#define LABEL_10_13 9
#define LABEL_10_14 11
#define LABEL_10_15 13
#define LABEL_10_16 15
#define LABEL_10_17 17
#define LABEL_10_18 19
#define LABEL_10_10 21
#define TAG_10_11 9
#define ENVIRONMENT_LABEL_10_3 37
#define DEBUGGING_LABEL_10_2 36
#define OBJECT_10_0 35
#define EXECUTE_CACHE_10_19 23
#define EXECUTE_CACHE_10_12 25
#define EXECUTE_CACHE_10_9 27
#define FREE_REFERENCE_10_1 30
#define FREE_REFERENCE_10_0 31
#define FREE_ASSIGNMENT_10_1 33
#define FREE_ASSIGNMENT_10_0 34
#define FREE_REFERENCES_LABEL_10_0 22
#define NUMBER_OF_LINKER_SECTIONS_10_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_10_4);
      goto compile_scode_no_file_16;

    case 1:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_27;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto swapB_26;

    case 3:
      current_block = (Rpc - LABEL_10_13);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_10_14);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_10_15);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_10_16);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_10_17);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_10_18);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_10_10);
      goto lambda_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_scode_no_file_25)
DEFLABEL (compile_scode_no_file_16)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd8.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 2;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  Wrd27 = Wrd29;
  ((Wrd27.pObj) [2]) = (Wrd7.Obj);
  ((Wrd27.pObj) [3]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_7])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  ((Wrd18.pObj) [2]) = (Wrd8.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Rsp [3]) = (Wrd14.Obj);
  (Rsp [4]) = (Wrd30.Obj);
  (Rsp [2]) = (Wrd30.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_10_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_10])));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

DEFLABEL (swapB_26)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (swapB_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  Wrd5 = Wrd9;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_41)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_38)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  Wrd57 = Wrd61;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_32)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_10_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_18])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_23)
  goto label_29;

DEFLABEL (label_34)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_17])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_22)
  goto label_32;

DEFLABEL (label_37)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_36;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_10_16])), (Wrd58.pObj));

DEFLABEL (label_21)
  (Wrd57.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_40)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_39;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_15])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_20)
  goto label_38;

DEFLABEL (label_43)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_14])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_19)
  goto label_41;

DEFLABEL (label_46)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_10_13])), (Wrd6.pObj));

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_44;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_10_10);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_19]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_7 5
#define TAG_11_8 1
#define LABEL_11_10 7
#define LABEL_11_11 9
#define LABEL_11_5 11
#define TAG_11_6 4
#define LABEL_11_15 13
#define LABEL_11_16 15
#define LABEL_11_17 17
#define LABEL_11_12 19
#define TAG_11_13 8
#define ENVIRONMENT_LABEL_11_3 40
#define DEBUGGING_LABEL_11_2 39
#define OBJECT_11_3 38
#define OBJECT_11_2 37
#define OBJECT_11_1 36
#define OBJECT_11_0 35
#define EXECUTE_CACHE_11_19 21
#define EXECUTE_CACHE_11_18 23
#define EXECUTE_CACHE_11_14 25
#define EXECUTE_CACHE_11_9 27
#define FREE_REFERENCE_11_2 30
#define FREE_REFERENCE_11_1 31
#define FREE_REFERENCE_11_0 32
#define FREE_ASSIGNMENT_11_0 34
#define FREE_REFERENCES_LABEL_11_0 20
#define NUMBER_OF_LINKER_SECTIONS_11_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_11_4);
      goto compiler_batch_compile_12;

    case 1:
      current_block = (Rpc - LABEL_11_7);
      goto lambda_22;

    case 2:
      current_block = (Rpc - LABEL_11_10);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_11_11);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_11_5);
      goto swapB_21;

    case 5:
      current_block = (Rpc - LABEL_11_15);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_11_16);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_11_17);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_11_12);
      goto lambda_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_batch_compile_20)
DEFLABEL (compiler_batch_compile_12)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_7])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_11_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_27;
  Wrd5 = Wrd9;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_25;
  Wrd12 = Wrd16;

DEFLABEL (label_24)
  (Wrd21.Obj) = (current_block [OBJECT_11_1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_12])));
  Rhp += 2;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd29 = Wrd24;
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  ((Wrd29.pObj) [2]) = (Wrd32.Obj);
  (Wrd28.Obj) = ((Wrd31.pObj) [3]);
  ((Wrd29.pObj) [3]) = (Wrd28.Obj);
  (Rsp [2]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_11])), (Wrd13.pObj));

DEFLABEL (label_15)
  (Wrd12.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_10])), (Wrd6.pObj));

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_26;

DEFLABEL (swapB_21)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (swapB_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  Wrd5 = Wrd9;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_31)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_11_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_17])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_18)
  goto label_28;

DEFLABEL (label_33)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_16])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_17)
  goto label_31;

DEFLABEL (label_36)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_15])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_34;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_11_12);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_11_3]))
    goto label_37;
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_19]));

DEFLABEL (label_37)
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [0]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_9 9
#define LABEL_12_11 11
#define ENVIRONMENT_LABEL_12_3 24
#define DEBUGGING_LABEL_12_2 23
#define EXECUTE_CACHE_12_13 13
#define EXECUTE_CACHE_12_12 15
#define EXECUTE_CACHE_12_10 17
#define EXECUTE_CACHE_12_8 19
#define EXECUTE_CACHE_12_7 21
#define FREE_REFERENCES_LABEL_12_0 12
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_12_4);
      goto compiler_batch_error_handler_5;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_batch_error_handler_8)
DEFLABEL (compiler_batch_error_handler_5)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_11);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [0]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_5 3
#define LABEL_13_4 5
#define LABEL_13_6 7
#define LABEL_13_8 9
#define LABEL_13_10 11
#define LABEL_13_12 13
#define ENVIRONMENT_LABEL_13_3 30
#define DEBUGGING_LABEL_13_2 29
#define OBJECT_13_1 28
#define OBJECT_13_0 27
#define EXECUTE_CACHE_13_14 15
#define EXECUTE_CACHE_13_13 17
#define EXECUTE_CACHE_13_11 19
#define EXECUTE_CACHE_13_9 21
#define EXECUTE_CACHE_13_7 23
#define FREE_REFERENCE_13_0 26
#define FREE_REFERENCES_LABEL_13_0 14
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_13_4);
      goto compiler_abort_4;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_13_12);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_abort_8)
DEFLABEL (compiler_abort_4)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_9)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_12);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (label_10)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_6])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define TAG_14_6 1
#define LABEL_14_7 7
#define TAG_14_8 2
#define LABEL_14_12 9
#define TAG_14_13 3
#define LABEL_14_10 11
#define TAG_14_11 4
#define LABEL_14_15 13
#define LABEL_14_16 15
#define LABEL_14_17 17
#define LABEL_14_18 19
#define LABEL_14_19 21
#define LABEL_14_20 23
#define ENVIRONMENT_LABEL_14_3 38
#define DEBUGGING_LABEL_14_2 37
#define OBJECT_14_1 36
#define OBJECT_14_0 35
#define EXECUTE_CACHE_14_14 25
#define EXECUTE_CACHE_14_9 27
#define FREE_REFERENCE_14_1 30
#define FREE_REFERENCE_14_0 31
#define FREE_ASSIGNMENT_14_1 33
#define FREE_ASSIGNMENT_14_0 34
#define FREE_REFERENCES_LABEL_14_0 24
#define NUMBER_OF_LINKER_SECTIONS_14_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_14_4);
      goto batch_kernel_17;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto lambda_27;

    case 2:
      current_block = (Rpc - LABEL_14_7);
      goto lambda_28;

    case 3:
      current_block = (Rpc - LABEL_14_12);
      goto lambda_30;

    case 4:
      current_block = (Rpc - LABEL_14_10);
      goto swapB_29;

    case 5:
      current_block = (Rpc - LABEL_14_15);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_14_16);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_14_17);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_14_18);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_14_19);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_14_20);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (batch_kernel_26)
DEFLABEL (batch_kernel_17)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_14_5);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_14_7);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (current_block [OBJECT_14_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_10])));
  Rhp += 2;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  Wrd31 = Wrd33;
  ((Wrd31.pObj) [2]) = (Wrd7.Obj);
  ((Wrd31.pObj) [3]) = (Wrd11.Obj);
  (Rsp [4]) = (Wrd34.Obj);
  (Rsp [2]) = (Wrd34.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_12])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd22 = Wrd17;
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd24.pObj) [3]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Rsp [3]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_14_12);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (swapB_29)
  CLOSURE_HEADER (LABEL_14_10);

DEFLABEL (swapB_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_48;

DEFLABEL (label_47)
  Wrd5 = Wrd9;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_45;

DEFLABEL (label_44)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_43)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_42;

DEFLABEL (label_41)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_40)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_39;

DEFLABEL (label_38)
  Wrd57 = Wrd61;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_34)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_31)
  Rvl = (current_block [OBJECT_14_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_20])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_24)
  goto label_31;

DEFLABEL (label_36)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_35;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_19])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_23)
  goto label_34;

DEFLABEL (label_39)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_38;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_14_18])), (Wrd58.pObj));

DEFLABEL (label_22)
  (Wrd57.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_42)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_41;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_17])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_21)
  goto label_40;

DEFLABEL (label_45)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_44;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_16])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_20)
  goto label_43;

DEFLABEL (label_48)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_47;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_14_15])), (Wrd6.pObj));

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define LABEL_15_10 11
#define LABEL_15_11 13
#define LABEL_15_8 15
#define TAG_15_9 6
#define LABEL_15_12 17
#define TAG_15_13 7
#define LABEL_15_16 19
#define ENVIRONMENT_LABEL_15_3 37
#define DEBUGGING_LABEL_15_2 36
#define OBJECT_15_0 35
#define EXECUTE_CACHE_15_18 21
#define EXECUTE_CACHE_15_17 23
#define EXECUTE_CACHE_15_15 25
#define EXECUTE_CACHE_15_14 27
#define FREE_REFERENCE_15_2 30
#define FREE_REFERENCE_15_1 31
#define FREE_REFERENCE_15_0 32
#define FREE_ASSIGNMENT_15_0 34
#define FREE_REFERENCES_LABEL_15_0 20
#define NUMBER_OF_LINKER_SECTIONS_15_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd57;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_15_4);
      goto compile_recursively_6;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_15_11);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_15_8);
      goto lambda_15;

    case 7:
      current_block = (Rpc - LABEL_15_12);
      goto lambda_16;

    case 8:
      current_block = (Rpc - LABEL_15_16);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_recursively_14)
DEFLABEL (compile_recursively_6)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_29;
  Wrd5 = Wrd9;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_27;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_27;
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));

DEFLABEL (label_26)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_0]));
  (Wrd29.Obj) = ((Wrd21.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd21.pObj) [0]) = (Wrd15.Obj);

DEFLABEL (label_23)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_8])));
  Rhp += 4;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  Wrd41 = Wrd34;
  (Wrd42.Obj) = (Rsp [3]);
  ((Wrd41.pObj) [2]) = (Wrd42.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  ((Wrd41.pObj) [3]) = (Wrd40.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  ((Wrd41.pObj) [4]) = (Wrd38.Obj);
  (Wrd36.Obj) = (Rsp [0]);
  ((Wrd41.pObj) [5]) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_1]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_22;
  Wrd43 = Wrd47;

DEFLABEL (label_21)
  if (! ((Wrd43.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_18;

DEFLABEL (label_17)
  (Wrd57.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd57.Obj);
  Rsp = (& (Rsp [4]));
  goto lambda_1;

DEFLABEL (label_18)
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_2]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_20;
  Wrd50 = Wrd54;

DEFLABEL (label_19)
  if (! ((Wrd50.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_17;
  (Wrd59.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd59.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd62.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_12])));
  Rhp += 1;
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd62.pObj)));
  Wrd63 = Wrd62;
  (Wrd64.Obj) = (Rsp [1]);
  ((Wrd63.pObj) [2]) = (Wrd64.Obj);
  (Rsp [3]) = (Wrd61.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_14]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_11])), (Wrd51.pObj));

DEFLABEL (label_12)
  (Wrd50.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_10])), (Wrd44.pObj));

DEFLABEL (label_11)
  (Wrd43.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  if ((Wrd29.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_7])), (Wrd21.pObj), (Wrd15.Obj));

DEFLABEL (label_10)
  goto label_23;

DEFLABEL (label_27)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_9)
  (Wrd15.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_15_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [5]);
  (Rsp [3]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_15_12);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_16);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_18]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_14 5
#define LABEL_16_5 7
#define TAG_16_6 2
#define LABEL_16_12 9
#define TAG_16_13 3
#define LABEL_16_15 11
#define LABEL_16_16 13
#define TAG_16_17 5
#define LABEL_16_9 15
#define TAG_16_10 6
#define LABEL_16_7 17
#define TAG_16_8 7
#define LABEL_16_27 19
#define LABEL_16_28 21
#define LABEL_16_29 23
#define LABEL_16_21 25
#define TAG_16_22 11
#define LABEL_16_19 27
#define TAG_16_20 12
#define LABEL_16_33 29
#define LABEL_16_34 31
#define LABEL_16_35 33
#define LABEL_16_36 35
#define LABEL_16_37 37
#define LABEL_16_38 39
#define LABEL_16_39 41
#define LABEL_16_40 43
#define LABEL_16_41 45
#define LABEL_16_23 47
#define LABEL_16_42 49
#define LABEL_16_43 51
#define LABEL_16_44 53
#define LABEL_16_25 55
#define LABEL_16_30 57
#define TAG_16_31 27
#define LABEL_16_46 59
#define LABEL_16_47 61
#define LABEL_16_48 63
#define LABEL_16_49 65
#define LABEL_16_50 67
#define ENVIRONMENT_LABEL_16_3 107
#define DEBUGGING_LABEL_16_2 106
#define OBJECT_16_7 105
#define OBJECT_16_6 104
#define OBJECT_16_5 103
#define OBJECT_16_4 102
#define OBJECT_16_3 101
#define OBJECT_16_2 100
#define OBJECT_16_1 99
#define OBJECT_16_0 98
#define EXECUTE_CACHE_16_51 69
#define EXECUTE_CACHE_16_45 71
#define EXECUTE_CACHE_16_32 73
#define EXECUTE_CACHE_16_26 75
#define EXECUTE_CACHE_16_24 77
#define EXECUTE_CACHE_16_18 79
#define EXECUTE_CACHE_16_11 81
#define FREE_REFERENCE_16_8 84
#define FREE_REFERENCE_16_7 85
#define FREE_REFERENCE_16_6 86
#define FREE_REFERENCE_16_5 87
#define FREE_REFERENCE_16_4 88
#define FREE_REFERENCE_16_3 89
#define FREE_REFERENCE_16_2 90
#define FREE_REFERENCE_16_1 91
#define FREE_REFERENCE_16_0 92
#define FREE_ASSIGNMENT_16_3 94
#define FREE_ASSIGNMENT_16_2 95
#define FREE_ASSIGNMENT_16_1 96
#define FREE_ASSIGNMENT_16_0 97
#define FREE_REFERENCES_LABEL_16_0 68
#define NUMBER_OF_LINKER_SECTIONS_16_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd15;
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
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd26;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_16_4);
      goto compile_recursively_1_44;

    case 1:
      current_block = (Rpc - LABEL_16_14);
      goto label_46;

    case 2:
      current_block = (Rpc - LABEL_16_5);
      goto lambda_24;

    case 3:
      current_block = (Rpc - LABEL_16_12);
      goto lambda_72;

    case 4:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_41;

    case 5:
      current_block = (Rpc - LABEL_16_16);
      goto lambda_73;

    case 6:
      current_block = (Rpc - LABEL_16_9);
      goto lambda_71;

    case 7:
      current_block = (Rpc - LABEL_16_7);
      goto swapB_70;

    case 8:
      current_block = (Rpc - LABEL_16_27);
      goto label_47;

    case 9:
      current_block = (Rpc - LABEL_16_28);
      goto label_48;

    case 10:
      current_block = (Rpc - LABEL_16_29);
      goto label_49;

    case 11:
      current_block = (Rpc - LABEL_16_21);
      goto lambda_75;

    case 12:
      current_block = (Rpc - LABEL_16_19);
      goto swapB_74;

    case 13:
      current_block = (Rpc - LABEL_16_33);
      goto label_50;

    case 14:
      current_block = (Rpc - LABEL_16_34);
      goto label_51;

    case 15:
      current_block = (Rpc - LABEL_16_35);
      goto label_52;

    case 16:
      current_block = (Rpc - LABEL_16_36);
      goto label_53;

    case 17:
      current_block = (Rpc - LABEL_16_37);
      goto label_54;

    case 18:
      current_block = (Rpc - LABEL_16_38);
      goto label_55;

    case 19:
      current_block = (Rpc - LABEL_16_39);
      goto label_56;

    case 20:
      current_block = (Rpc - LABEL_16_40);
      goto label_57;

    case 21:
      current_block = (Rpc - LABEL_16_41);
      goto label_58;

    case 22:
      current_block = (Rpc - LABEL_16_23);
      goto continuation_34;

    case 23:
      current_block = (Rpc - LABEL_16_42);
      goto label_59;

    case 24:
      current_block = (Rpc - LABEL_16_43);
      goto label_60;

    case 25:
      current_block = (Rpc - LABEL_16_44);
      goto label_61;

    case 26:
      current_block = (Rpc - LABEL_16_25);
      goto continuation_39;

    case 27:
      current_block = (Rpc - LABEL_16_30);
      goto lambda_76;

    case 28:
      current_block = (Rpc - LABEL_16_46);
      goto label_62;

    case 29:
      current_block = (Rpc - LABEL_16_47);
      goto label_63;

    case 30:
      current_block = (Rpc - LABEL_16_48);
      goto label_64;

    case 31:
      current_block = (Rpc - LABEL_16_49);
      goto label_65;

    case 32:
      current_block = (Rpc - LABEL_16_50);
      goto label_66;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_recursively_1_68)
DEFLABEL (compile_recursively_1_44)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_5])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  if (! ((Wrd10.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_77;
  (Wrd39.Obj) = (current_block [OBJECT_16_0]);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd37.pObj) = (& (Rhp [-1]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd51.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_7])));
  Rhp += 1;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd51.pObj)));
  (* (--Rsp)) = (Wrd52.Obj);
  ((Wrd51.pObj) [2]) = (Wrd38.Obj);
  (Rsp [4]) = (Wrd52.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd43.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_9])));
  Rhp += 1;
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd43.pObj)));
  ((Wrd43.pObj) [2]) = (Wrd5.Obj);
  (Rsp [5]) = (Wrd42.Obj);
  (Rsp [6]) = (Wrd52.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (label_77)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_12])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  ((Wrd17.pObj) [2]) = (Wrd5.Obj);
  (Rsp [0]) = (Wrd16.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_80;
  Wrd20 = Wrd24;

DEFLABEL (label_79)
  if (! ((Wrd20.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_78;
  (Wrd34.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd34.Obj);
  Rsp = (& (Rsp [4]));
  goto lambda_38;

DEFLABEL (label_78)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_16])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd32 = Wrd31;
  (Wrd33.Obj) = (Rsp [4]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_24]));

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_14])), (Wrd21.pObj));

DEFLABEL (label_46)
  (Wrd20.Obj) = Rvl;
  goto label_79;

DEFLABEL (lambda_69)
DEFLABEL (lambda_24)
  INTERRUPT_CHECK (26, LABEL_16_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd20.Obj) = ((Wrd9.pObj) [2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd40.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_19])));
  Rhp += 3;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd41.Obj);
  Wrd38 = Wrd40;
  ((Wrd38.pObj) [2]) = (Wrd7.Obj);
  ((Wrd38.pObj) [3]) = (Wrd13.Obj);
  ((Wrd38.pObj) [4]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd41.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_21])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd29.Obj) = ((Wrd9.pObj) [4]);
  ((Wrd26.pObj) [2]) = (Wrd29.Obj);
  (Rsp [3]) = (Wrd24.Obj);
  (Rsp [4]) = (Wrd41.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (lambda_72)
  CLOSURE_HEADER (LABEL_16_12);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto lambda_24;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_16_23);
  (Rsp [0]) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_88;
  Wrd6 = Wrd10;

DEFLABEL (label_87)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_86;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_85)
  (Wrd21.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_16_0]));
  (Wrd33.Obj) = ((Wrd25.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_84;

DEFLABEL (label_83)
  ((Wrd25.pObj) [0]) = (Wrd22.Obj);

DEFLABEL (label_82)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_81;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  Rvl = ((Wrd39.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_81)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 1);

DEFLABEL (label_84)
  if ((Wrd33.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_83;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_16_44])), (Wrd25.pObj), (Wrd22.Obj));

DEFLABEL (label_61)
  goto label_82;

DEFLABEL (label_86)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_43]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_60)
  (Wrd12.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_42])), (Wrd7.pObj));

DEFLABEL (label_59)
  (Wrd6.Obj) = Rvl;
  goto label_87;

DEFLABEL (lambda_73)
  CLOSURE_HEADER (LABEL_16_16);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_26]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_16_25);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_45]));

DEFLABEL (lambda_71)
  CLOSURE_HEADER (LABEL_16_9);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  goto lambda_24;

DEFLABEL (swapB_70)
  CLOSURE_HEADER (LABEL_16_7);

DEFLABEL (swapB_32)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_97;

DEFLABEL (label_96)
  Wrd5 = Wrd9;

DEFLABEL (label_95)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_16_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_94;

DEFLABEL (label_93)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_92)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_16_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_91;

DEFLABEL (label_90)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_89)
  Rvl = (current_block [OBJECT_16_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_91)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_90;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_16_29])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_49)
  goto label_89;

DEFLABEL (label_94)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_93;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_16_28])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_48)
  goto label_92;

DEFLABEL (label_97)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_96;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_16_27])), (Wrd6.pObj));

DEFLABEL (label_47)
  (Wrd5.Obj) = Rvl;
  goto label_95;

DEFLABEL (lambda_75)
  CLOSURE_HEADER (LABEL_16_21);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_30])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_32]));

DEFLABEL (swapB_74)
  CLOSURE_HEADER (LABEL_16_19);

DEFLABEL (swapB_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_124;

DEFLABEL (label_123)
  Wrd5 = Wrd9;

DEFLABEL (label_122)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_16_1]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_121;

DEFLABEL (label_120)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_119)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_16_1]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_118;

DEFLABEL (label_117)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_116)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_3]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_115;

DEFLABEL (label_114)
  Wrd57 = Wrd61;

DEFLABEL (label_113)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_16_2]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_112;

DEFLABEL (label_111)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_110)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_16_2]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_109;

DEFLABEL (label_108)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_107)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_4]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_106;

DEFLABEL (label_105)
  Wrd109 = Wrd113;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_16_3]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_103;

DEFLABEL (label_102)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_101)
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
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_16_3]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_100;

DEFLABEL (label_99)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_98)
  Rvl = (current_block [OBJECT_16_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_100)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_99;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_16_41])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_58)
  goto label_98;

DEFLABEL (label_103)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_102;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_16_40])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_57)
  goto label_101;

DEFLABEL (label_106)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_105;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_16_39])), (Wrd110.pObj));

DEFLABEL (label_56)
  (Wrd109.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_109)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_108;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_16_38])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_55)
  goto label_107;

DEFLABEL (label_112)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_111;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_16_37])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_54)
  goto label_110;

DEFLABEL (label_115)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_114;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_16_36])), (Wrd58.pObj));

DEFLABEL (label_53)
  (Wrd57.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_118)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_117;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_16_35])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_52)
  goto label_116;

DEFLABEL (label_121)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_120;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_16_34])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_51)
  goto label_119;

DEFLABEL (label_124)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_123;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_16_33])), (Wrd6.pObj));

DEFLABEL (label_50)
  (Wrd5.Obj) = Rvl;
  goto label_122;

DEFLABEL (lambda_76)
  CLOSURE_HEADER (LABEL_16_30);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_5]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_138;
  Wrd5 = Wrd9;

DEFLABEL (label_137)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_136;
  Wrd11 = Wrd15;

DEFLABEL (label_135)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_7]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_134;
  Wrd17 = Wrd21;

DEFLABEL (label_133)
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_132;
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_7]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_131;
  Wrd25 = Wrd29;

DEFLABEL (label_130)
  (Wrd31.Obj) = (current_block [OBJECT_16_6]);
  if ((Wrd25.Obj) == (Wrd31.Obj))
    goto label_126;
  (Wrd32.Obj) = (current_block [OBJECT_16_7]);
  (* (--Rsp)) = (Wrd32.Obj);
  goto label_125;

DEFLABEL (label_126)
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_125)
DEFLABEL (label_129)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_8]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_128;
  Wrd37 = Wrd41;

DEFLABEL (label_127)
  (Rsp [4]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_51]));

DEFLABEL (label_128)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_50])), (Wrd38.pObj));

DEFLABEL (label_66)
  (Wrd37.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_131)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_49])), (Wrd26.pObj));

DEFLABEL (label_65)
  (Wrd25.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_132)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_129;

DEFLABEL (label_134)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_48])), (Wrd18.pObj));

DEFLABEL (label_64)
  (Wrd17.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_47])), (Wrd12.pObj));

DEFLABEL (label_63)
  (Wrd11.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_46])), (Wrd6.pObj));

DEFLABEL (label_62)
  (Wrd5.Obj) = Rvl;
  goto label_137;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_7 5
#define LABEL_17_5 7
#define TAG_17_6 2
#define LABEL_17_13 9
#define LABEL_17_10 11
#define TAG_17_11 4
#define LABEL_17_8 13
#define TAG_17_9 5
#define LABEL_17_20 15
#define LABEL_17_21 17
#define LABEL_17_22 19
#define LABEL_17_23 21
#define LABEL_17_24 23
#define LABEL_17_25 25
#define LABEL_17_26 27
#define LABEL_17_27 29
#define LABEL_17_28 31
#define LABEL_17_29 33
#define LABEL_17_30 35
#define LABEL_17_31 37
#define LABEL_17_32 39
#define LABEL_17_33 41
#define LABEL_17_34 43
#define LABEL_17_35 45
#define LABEL_17_36 47
#define LABEL_17_37 49
#define LABEL_17_38 51
#define LABEL_17_39 53
#define LABEL_17_40 55
#define LABEL_17_15 57
#define LABEL_17_41 59
#define LABEL_17_42 61
#define LABEL_17_43 63
#define LABEL_17_16 65
#define LABEL_17_17 67
#define TAG_17_18 32
#define LABEL_17_45 69
#define LABEL_17_48 71
#define LABEL_17_52 73
#define LABEL_17_53 75
#define LABEL_17_54 77
#define LABEL_17_55 79
#define LABEL_17_63 81
#define LABEL_17_64 83
#define LABEL_17_65 85
#define LABEL_17_56 87
#define LABEL_17_50 89
#define LABEL_17_58 91
#define LABEL_17_59 93
#define LABEL_17_60 95
#define LABEL_17_69 97
#define LABEL_17_70 99
#define LABEL_17_71 101
#define LABEL_17_61 103
#define LABEL_17_66 105
#define LABEL_17_67 107
#define LABEL_17_68 109
#define LABEL_17_72 111
#define LABEL_17_73 113
#define ENVIRONMENT_LABEL_17_3 172
#define DEBUGGING_LABEL_17_2 171
#define OBJECT_17_12 170
#define OBJECT_17_11 169
#define OBJECT_17_10 168
#define OBJECT_17_9 167
#define OBJECT_17_8 166
#define OBJECT_17_7 165
#define OBJECT_17_6 164
#define OBJECT_17_5 163
#define OBJECT_17_4 162
#define OBJECT_17_3 161
#define OBJECT_17_2 160
#define OBJECT_17_1 159
#define OBJECT_17_0 158
#define EXECUTE_CACHE_17_74 115
#define EXECUTE_CACHE_17_62 117
#define EXECUTE_CACHE_17_57 119
#define EXECUTE_CACHE_17_51 121
#define EXECUTE_CACHE_17_49 123
#define EXECUTE_CACHE_17_47 125
#define EXECUTE_CACHE_17_46 127
#define EXECUTE_CACHE_17_44 129
#define EXECUTE_CACHE_17_19 131
#define EXECUTE_CACHE_17_14 133
#define EXECUTE_CACHE_17_12 135
#define FREE_REFERENCE_17_12 138
#define FREE_REFERENCE_17_11 139
#define FREE_REFERENCE_17_10 140
#define FREE_REFERENCE_17_9 141
#define FREE_REFERENCE_17_8 142
#define FREE_REFERENCE_17_7 143
#define FREE_REFERENCE_17_6 144
#define FREE_REFERENCE_17_5 145
#define FREE_REFERENCE_17_4 146
#define FREE_REFERENCE_17_3 147
#define FREE_REFERENCE_17_2 148
#define FREE_REFERENCE_17_1 149
#define FREE_REFERENCE_17_0 150
#define FREE_ASSIGNMENT_17_5 152
#define FREE_ASSIGNMENT_17_4 153
#define FREE_ASSIGNMENT_17_3 154
#define FREE_ASSIGNMENT_17_2 155
#define FREE_ASSIGNMENT_17_1 156
#define FREE_ASSIGNMENT_17_0 157
#define FREE_REFERENCES_LABEL_17_0 114
#define NUMBER_OF_LINKER_SECTIONS_17_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd44;
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
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd68;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_17_4);
      goto in_compiler_71;

    case 1:
      current_block = (Rpc - LABEL_17_7);
      goto label_73;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_105;

    case 3:
      current_block = (Rpc - LABEL_17_13);
      goto continuation_69;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto lambda_107;

    case 5:
      current_block = (Rpc - LABEL_17_8);
      goto swapB_106;

    case 6:
      current_block = (Rpc - LABEL_17_20);
      goto label_74;

    case 7:
      current_block = (Rpc - LABEL_17_21);
      goto label_75;

    case 8:
      current_block = (Rpc - LABEL_17_22);
      goto label_76;

    case 9:
      current_block = (Rpc - LABEL_17_23);
      goto label_77;

    case 10:
      current_block = (Rpc - LABEL_17_24);
      goto label_78;

    case 11:
      current_block = (Rpc - LABEL_17_25);
      goto label_79;

    case 12:
      current_block = (Rpc - LABEL_17_26);
      goto label_80;

    case 13:
      current_block = (Rpc - LABEL_17_27);
      goto label_81;

    case 14:
      current_block = (Rpc - LABEL_17_28);
      goto label_82;

    case 15:
      current_block = (Rpc - LABEL_17_29);
      goto label_83;

    case 16:
      current_block = (Rpc - LABEL_17_30);
      goto label_84;

    case 17:
      current_block = (Rpc - LABEL_17_31);
      goto label_85;

    case 18:
      current_block = (Rpc - LABEL_17_32);
      goto label_86;

    case 19:
      current_block = (Rpc - LABEL_17_33);
      goto label_87;

    case 20:
      current_block = (Rpc - LABEL_17_34);
      goto label_88;

    case 21:
      current_block = (Rpc - LABEL_17_35);
      goto label_89;

    case 22:
      current_block = (Rpc - LABEL_17_36);
      goto label_90;

    case 23:
      current_block = (Rpc - LABEL_17_37);
      goto label_91;

    case 24:
      current_block = (Rpc - LABEL_17_38);
      goto continuation_5;

    case 25:
      current_block = (Rpc - LABEL_17_39);
      goto label_98;

    case 26:
      current_block = (Rpc - LABEL_17_40);
      goto continuation_26;

    case 27:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_1;

    case 28:
      current_block = (Rpc - LABEL_17_41);
      goto label_92;

    case 29:
      current_block = (Rpc - LABEL_17_42);
      goto label_93;

    case 30:
      current_block = (Rpc - LABEL_17_43);
      goto label_94;

    case 31:
      current_block = (Rpc - LABEL_17_16);
      goto continuation_0;

    case 32:
      current_block = (Rpc - LABEL_17_17);
      goto lambda_108;

    case 33:
      current_block = (Rpc - LABEL_17_45);
      goto continuation_2;

    case 34:
      current_block = (Rpc - LABEL_17_48);
      goto continuation_3;

    case 35:
      current_block = (Rpc - LABEL_17_52);
      goto continuation_23;

    case 36:
      current_block = (Rpc - LABEL_17_53);
      goto continuation_22;

    case 37:
      current_block = (Rpc - LABEL_17_54);
      goto continuation_21;

    case 38:
      current_block = (Rpc - LABEL_17_55);
      goto continuation_18;

    case 39:
      current_block = (Rpc - LABEL_17_63);
      goto label_95;

    case 40:
      current_block = (Rpc - LABEL_17_64);
      goto label_96;

    case 41:
      current_block = (Rpc - LABEL_17_65);
      goto label_97;

    case 42:
      current_block = (Rpc - LABEL_17_56);
      goto lambda_17;

    case 43:
      current_block = (Rpc - LABEL_17_50);
      goto lambda_4;

    case 44:
      current_block = (Rpc - LABEL_17_58);
      goto continuation_16;

    case 45:
      current_block = (Rpc - LABEL_17_59);
      goto continuation_15;

    case 46:
      current_block = (Rpc - LABEL_17_60);
      goto continuation_12;

    case 47:
      current_block = (Rpc - LABEL_17_69);
      goto label_99;

    case 48:
      current_block = (Rpc - LABEL_17_70);
      goto label_100;

    case 49:
      current_block = (Rpc - LABEL_17_71);
      goto label_101;

    case 50:
      current_block = (Rpc - LABEL_17_61);
      goto lambda_11;

    case 51:
      current_block = (Rpc - LABEL_17_66);
      goto continuation_10;

    case 52:
      current_block = (Rpc - LABEL_17_67);
      goto continuation_9;

    case 53:
      current_block = (Rpc - LABEL_17_68);
      goto lambda_8;

    case 54:
      current_block = (Rpc - LABEL_17_72);
      goto continuation_7;

    case 55:
      current_block = (Rpc - LABEL_17_73);
      goto label_102;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (in_compiler_104)
DEFLABEL (in_compiler_71)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_115;
  Wrd10 = Wrd14;

DEFLABEL (label_114)
  if (! ((Wrd10.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_113;
  (Wrd23.Obj) = (current_block [OBJECT_17_0]);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd21.pObj) = (& (Rhp [-1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd25.pObj) = (& (Rhp [-1]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_17_1]);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-1]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd33.pObj) = (& (Rhp [-1]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_17_2]);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd37.pObj) = (& (Rhp [-1]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd41.pObj) = (& (Rhp [-1]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd70.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_8])));
  Rhp += 6;
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd70.pObj)));
  (* (--Rsp)) = (Wrd71.Obj);
  Wrd68 = Wrd70;
  ((Wrd68.pObj) [2]) = (Wrd22.Obj);
  ((Wrd68.pObj) [3]) = (Wrd26.Obj);
  ((Wrd68.pObj) [4]) = (Wrd30.Obj);
  ((Wrd68.pObj) [5]) = (Wrd34.Obj);
  ((Wrd68.pObj) [6]) = (Wrd38.Obj);
  ((Wrd68.pObj) [7]) = (Wrd42.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd47.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_10])));
  Rhp += 1;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd47.pObj)));
  Wrd48 = Wrd47;
  (Wrd49.Obj) = (Rsp [7]);
  ((Wrd48.pObj) [2]) = (Wrd49.Obj);
  (Rsp [7]) = (Wrd71.Obj);
  (Rsp [6]) = (Wrd46.Obj);
  (Rsp [5]) = (Wrd71.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (label_113)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_14]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_17_13);
  goto lambda_28;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_7])), (Wrd11.pObj));

DEFLABEL (label_73)
  (Wrd10.Obj) = Rvl;
  goto label_114;

DEFLABEL (lambda_105)
  CLOSURE_HEADER (LABEL_17_5);

DEFLABEL (lambda_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_46]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_45);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_49]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_48);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_133;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_52]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_53]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_54]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_55]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_56]))));
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_51]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_17_55);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_9]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_132;
  Wrd6 = Wrd10;

DEFLABEL (label_131)
  (Wrd12.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_10]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_130;
  Wrd17 = Wrd21;

DEFLABEL (label_129)
  (Wrd23.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_11]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_128;
  Wrd27 = Wrd31;

DEFLABEL (label_127)
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_5]), 2);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_17_54);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_62]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_17_53);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_59]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_60]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_61]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_51]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17_60);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_12]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_126;
  Wrd6 = Wrd10;

DEFLABEL (label_125)
  (Wrd12.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_10]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_124;
  Wrd17 = Wrd21;

DEFLABEL (label_123)
  (Wrd23.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_11]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_122;
  Wrd27 = Wrd31;

DEFLABEL (label_121)
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_5]), 2);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_17_59);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_62]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_17_58);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_67]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_68]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_51]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_17_67);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_62]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17_66);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_10]), 1);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_17_72);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_7]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_120;
  Wrd5 = Wrd9;

DEFLABEL (label_119)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_117;
  (Wrd12.Obj) = (current_block [OBJECT_17_12]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_116;

DEFLABEL (label_117)
  (Wrd13.Obj) = (current_block [OBJECT_17_11]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_116)
DEFLABEL (label_118)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_74]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_17_52);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_57]));

DEFLABEL (label_120)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_73])), (Wrd6.pObj));

DEFLABEL (label_102)
  (Wrd5.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_71])), (Wrd28.pObj));

DEFLABEL (label_101)
  (Wrd27.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_70])), (Wrd18.pObj));

DEFLABEL (label_100)
  (Wrd17.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_69])), (Wrd7.pObj));

DEFLABEL (label_99)
  (Wrd6.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_65])), (Wrd28.pObj));

DEFLABEL (label_97)
  (Wrd27.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_64])), (Wrd18.pObj));

DEFLABEL (label_96)
  (Wrd17.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_63])), (Wrd7.pObj));

DEFLABEL (label_95)
  (Wrd6.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_133)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_38]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_50]))));
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_51]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_38);
  (* (--Rsp)) = Rvl;
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_7]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_144;
  Wrd32 = Wrd36;

DEFLABEL (label_143)
  (Wrd38.Obj) = (* (Rsp++));
  (Wrd44.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd45.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd41.pObj) = (& (Rhp [-4]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd41.pObj)));
  Rsp = (& (Rsp [3]));

DEFLABEL (label_142)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_8]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_141;
  Wrd6 = Wrd10;

DEFLABEL (label_140)
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_135;

DEFLABEL (label_134)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_135)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_40]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_6]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_139;
  Wrd16 = Wrd20;

DEFLABEL (label_138)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_5]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_137;
  Wrd22 = Wrd26;

DEFLABEL (label_136)
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_17_4]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_44]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_17_40);
  goto label_134;

DEFLABEL (label_137)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_43])), (Wrd23.pObj));

DEFLABEL (label_94)
  (Wrd22.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_42])), (Wrd17.pObj));

DEFLABEL (label_93)
  (Wrd16.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_41])), (Wrd7.pObj));

DEFLABEL (label_92)
  (Wrd6.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_144)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_39])), (Wrd33.pObj));

DEFLABEL (label_98)
  (Wrd32.Obj) = Rvl;
  goto label_143;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_15);
  (Wrd5.Obj) = Rvl;
  goto label_142;

DEFLABEL (lambda_107)
  CLOSURE_HEADER (LABEL_17_10);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_17])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_19]));

DEFLABEL (swapB_106)
  CLOSURE_HEADER (LABEL_17_8);

DEFLABEL (swapB_67)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_198;

DEFLABEL (label_197)
  Wrd5 = Wrd9;

DEFLABEL (label_196)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_195;

DEFLABEL (label_194)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_193)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_192;

DEFLABEL (label_191)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_190)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_2]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_189;

DEFLABEL (label_188)
  Wrd57 = Wrd61;

DEFLABEL (label_187)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_186;

DEFLABEL (label_185)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_184)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_183;

DEFLABEL (label_182)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_181)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_3]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_180;

DEFLABEL (label_179)
  Wrd109 = Wrd113;

DEFLABEL (label_178)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_177;

DEFLABEL (label_176)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_175)
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
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_174;

DEFLABEL (label_173)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_172)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_4]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_171;

DEFLABEL (label_170)
  Wrd161 = Wrd165;

DEFLABEL (label_169)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_168;

DEFLABEL (label_167)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_166)
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
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_165;

DEFLABEL (label_164)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_163)
  (Wrd214.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_5]));
  (Wrd217.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if ((Wrd218.uLng) == 50)
    goto label_162;

DEFLABEL (label_161)
  Wrd213 = Wrd217;

DEFLABEL (label_160)
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd225.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_4]));
  (Wrd226.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd235.Obj) = ((Wrd225.pObj) [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if ((Wrd236.uLng) == 50)
    goto label_159;

DEFLABEL (label_158)
  ((Wrd225.pObj) [0]) = (Wrd226.Obj);

DEFLABEL (label_157)
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
  (Wrd253.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_4]));
  (Wrd261.Obj) = ((Wrd253.pObj) [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd262.uLng) == 50)
    goto label_156;

DEFLABEL (label_155)
  ((Wrd253.pObj) [0]) = (Wrd245.Obj);

DEFLABEL (label_154)
  (Wrd266.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_6]));
  (Wrd269.Obj) = ((Wrd266.pObj) [0]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if ((Wrd270.uLng) == 50)
    goto label_153;

DEFLABEL (label_152)
  Wrd265 = Wrd269;

DEFLABEL (label_151)
  (* (--Rsp)) = (Wrd265.Obj);
  (Wrd277.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_5]));
  (Wrd278.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd287.Obj) = ((Wrd277.pObj) [0]);
  (Wrd288.uLng) = (OBJECT_TYPE (Wrd287.Obj));
  if ((Wrd288.uLng) == 50)
    goto label_150;

DEFLABEL (label_149)
  ((Wrd277.pObj) [0]) = (Wrd278.Obj);

DEFLABEL (label_148)
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
  (Wrd305.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_5]));
  (Wrd313.Obj) = ((Wrd305.pObj) [0]);
  (Wrd314.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if ((Wrd314.uLng) == 50)
    goto label_147;

DEFLABEL (label_146)
  ((Wrd305.pObj) [0]) = (Wrd297.Obj);

DEFLABEL (label_145)
  Rvl = (current_block [OBJECT_17_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_147)
  if ((Wrd313.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_146;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_37])), (Wrd305.pObj), (Wrd297.Obj));

DEFLABEL (label_91)
  goto label_145;

DEFLABEL (label_150)
  if ((Wrd287.Obj) == (Wrd278.Obj))
    goto label_149;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_36])), (Wrd277.pObj), (Wrd278.Obj));

DEFLABEL (label_90)
  goto label_148;

DEFLABEL (label_153)
  if ((Wrd269.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_152;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_17_35])), (Wrd266.pObj));

DEFLABEL (label_89)
  (Wrd265.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_156)
  if ((Wrd261.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_155;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_34])), (Wrd253.pObj), (Wrd245.Obj));

DEFLABEL (label_88)
  goto label_154;

DEFLABEL (label_159)
  if ((Wrd235.Obj) == (Wrd226.Obj))
    goto label_158;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_33])), (Wrd225.pObj), (Wrd226.Obj));

DEFLABEL (label_87)
  goto label_157;

DEFLABEL (label_162)
  if ((Wrd217.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_161;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_17_32])), (Wrd214.pObj));

DEFLABEL (label_86)
  (Wrd213.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_165)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_164;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_31])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_85)
  goto label_163;

DEFLABEL (label_168)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_167;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_30])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_84)
  goto label_166;

DEFLABEL (label_171)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_170;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_17_29])), (Wrd162.pObj));

DEFLABEL (label_83)
  (Wrd161.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_174)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_173;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_28])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_82)
  goto label_172;

DEFLABEL (label_177)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_176;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_27])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_81)
  goto label_175;

DEFLABEL (label_180)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_179;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_17_26])), (Wrd110.pObj));

DEFLABEL (label_80)
  (Wrd109.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_183)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_182;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_25])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_79)
  goto label_181;

DEFLABEL (label_186)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_185;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_24])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_78)
  goto label_184;

DEFLABEL (label_189)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_188;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_17_23])), (Wrd58.pObj));

DEFLABEL (label_77)
  (Wrd57.Obj) = Rvl;
  goto label_187;

DEFLABEL (label_192)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_191;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_22])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_76)
  goto label_190;

DEFLABEL (label_195)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_194;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_21])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_75)
  goto label_193;

DEFLABEL (label_198)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_197;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_17_20])), (Wrd6.pObj));

DEFLABEL (label_74)
  (Wrd5.Obj) = Rvl;
  goto label_196;

DEFLABEL (lambda_108)
  CLOSURE_HEADER (LABEL_17_17);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_47]));

DEFLABEL (lambda_109)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_17_56);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_6]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_200;

DEFLABEL (label_199)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_7]), 2);

DEFLABEL (label_200)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_199;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_110)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_17_50);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_8]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_202;

DEFLABEL (label_201)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_7]), 2);

DEFLABEL (label_202)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_201;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_111)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_17_61);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_9]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_204;

DEFLABEL (label_203)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_7]), 2);

DEFLABEL (label_204)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_203;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_112)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_17_68);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_8]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_206;

DEFLABEL (label_205)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_7]), 2);

DEFLABEL (label_206)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_205;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_7 5
#define TAG_18_8 1
#define LABEL_18_5 7
#define TAG_18_6 2
#define LABEL_18_14 9
#define LABEL_18_15 11
#define LABEL_18_16 13
#define LABEL_18_17 15
#define LABEL_18_18 17
#define LABEL_18_19 19
#define LABEL_18_20 21
#define LABEL_18_21 23
#define LABEL_18_22 25
#define LABEL_18_23 27
#define LABEL_18_24 29
#define LABEL_18_25 31
#define LABEL_18_26 33
#define LABEL_18_27 35
#define LABEL_18_28 37
#define LABEL_18_29 39
#define LABEL_18_30 41
#define LABEL_18_31 43
#define LABEL_18_32 45
#define LABEL_18_33 47
#define LABEL_18_34 49
#define LABEL_18_35 51
#define LABEL_18_36 53
#define LABEL_18_37 55
#define LABEL_18_38 57
#define LABEL_18_39 59
#define LABEL_18_40 61
#define LABEL_18_41 63
#define LABEL_18_42 65
#define LABEL_18_43 67
#define LABEL_18_44 69
#define LABEL_18_45 71
#define LABEL_18_46 73
#define LABEL_18_12 75
#define TAG_18_13 36
#define LABEL_18_10 77
#define TAG_18_11 37
#define LABEL_18_48 79
#define LABEL_18_49 81
#define LABEL_18_50 83
#define LABEL_18_51 85
#define LABEL_18_52 87
#define LABEL_18_53 89
#define LABEL_18_54 91
#define LABEL_18_55 93
#define LABEL_18_56 95
#define LABEL_18_57 97
#define LABEL_18_58 99
#define LABEL_18_59 101
#define LABEL_18_60 103
#define LABEL_18_61 105
#define LABEL_18_62 107
#define LABEL_18_63 109
#define LABEL_18_64 111
#define LABEL_18_65 113
#define LABEL_18_66 115
#define LABEL_18_67 117
#define LABEL_18_68 119
#define LABEL_18_69 121
#define LABEL_18_70 123
#define LABEL_18_71 125
#define LABEL_18_72 127
#define LABEL_18_73 129
#define LABEL_18_74 131
#define LABEL_18_75 133
#define LABEL_18_76 135
#define LABEL_18_77 137
#define LABEL_18_78 139
#define LABEL_18_79 141
#define LABEL_18_80 143
#define LABEL_18_81 145
#define LABEL_18_82 147
#define LABEL_18_83 149
#define LABEL_18_84 151
#define LABEL_18_85 153
#define LABEL_18_86 155
#define LABEL_18_87 157
#define LABEL_18_88 159
#define LABEL_18_89 161
#define LABEL_18_90 163
#define LABEL_18_91 165
#define LABEL_18_92 167
#define LABEL_18_93 169
#define LABEL_18_94 171
#define LABEL_18_95 173
#define LABEL_18_96 175
#define LABEL_18_97 177
#define LABEL_18_98 179
#define LABEL_18_99 181
#define LABEL_18_100 183
#define LABEL_18_101 185
#define ENVIRONMENT_LABEL_18_3 253
#define DEBUGGING_LABEL_18_2 252
#define OBJECT_18_0 251
#define EXECUTE_CACHE_18_47 187
#define EXECUTE_CACHE_18_9 189
#define FREE_REFERENCE_18_28 192
#define FREE_REFERENCE_18_27 193
#define FREE_REFERENCE_18_26 194
#define FREE_REFERENCE_18_25 195
#define FREE_REFERENCE_18_24 196
#define FREE_REFERENCE_18_23 197
#define FREE_REFERENCE_18_22 198
#define FREE_REFERENCE_18_21 199
#define FREE_REFERENCE_18_20 200
#define FREE_REFERENCE_18_19 201
#define FREE_REFERENCE_18_18 202
#define FREE_REFERENCE_18_17 203
#define FREE_REFERENCE_18_16 204
#define FREE_REFERENCE_18_15 205
#define FREE_REFERENCE_18_14 206
#define FREE_REFERENCE_18_13 207
#define FREE_REFERENCE_18_12 208
#define FREE_REFERENCE_18_11 209
#define FREE_REFERENCE_18_10 210
#define FREE_REFERENCE_18_9 211
#define FREE_REFERENCE_18_8 212
#define FREE_REFERENCE_18_7 213
#define FREE_REFERENCE_18_6 214
#define FREE_REFERENCE_18_5 215
#define FREE_REFERENCE_18_4 216
#define FREE_REFERENCE_18_3 217
#define FREE_REFERENCE_18_2 218
#define FREE_REFERENCE_18_1 219
#define FREE_REFERENCE_18_0 220
#define FREE_ASSIGNMENT_18_28 222
#define FREE_ASSIGNMENT_18_27 223
#define FREE_ASSIGNMENT_18_26 224
#define FREE_ASSIGNMENT_18_25 225
#define FREE_ASSIGNMENT_18_24 226
#define FREE_ASSIGNMENT_18_23 227
#define FREE_ASSIGNMENT_18_22 228
#define FREE_ASSIGNMENT_18_21 229
#define FREE_ASSIGNMENT_18_20 230
#define FREE_ASSIGNMENT_18_19 231
#define FREE_ASSIGNMENT_18_18 232
#define FREE_ASSIGNMENT_18_17 233
#define FREE_ASSIGNMENT_18_16 234
#define FREE_ASSIGNMENT_18_15 235
#define FREE_ASSIGNMENT_18_14 236
#define FREE_ASSIGNMENT_18_13 237
#define FREE_ASSIGNMENT_18_12 238
#define FREE_ASSIGNMENT_18_11 239
#define FREE_ASSIGNMENT_18_10 240
#define FREE_ASSIGNMENT_18_9 241
#define FREE_ASSIGNMENT_18_8 242
#define FREE_ASSIGNMENT_18_7 243
#define FREE_ASSIGNMENT_18_6 244
#define FREE_ASSIGNMENT_18_5 245
#define FREE_ASSIGNMENT_18_4 246
#define FREE_ASSIGNMENT_18_3 247
#define FREE_ASSIGNMENT_18_2 248
#define FREE_ASSIGNMENT_18_1 249
#define FREE_ASSIGNMENT_18_0 250
#define FREE_REFERENCES_LABEL_18_0 186
#define NUMBER_OF_LINKER_SECTIONS_18_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd938;
  machine_word Wrd937;
  machine_word Wrd929;
  machine_word Wrd921;
  machine_word Wrd920;
  machine_word Wrd919;
  machine_word Wrd918;
  machine_word Wrd917;
  machine_word Wrd916;
  machine_word Wrd912;
  machine_word Wrd911;
  machine_word Wrd902;
  machine_word Wrd901;
  machine_word Wrd889;
  machine_word Wrd894;
  machine_word Wrd893;
  machine_word Wrd890;
  machine_word Wrd886;
  machine_word Wrd885;
  machine_word Wrd877;
  machine_word Wrd869;
  machine_word Wrd868;
  machine_word Wrd867;
  machine_word Wrd866;
  machine_word Wrd865;
  machine_word Wrd864;
  machine_word Wrd860;
  machine_word Wrd859;
  machine_word Wrd850;
  machine_word Wrd849;
  machine_word Wrd837;
  machine_word Wrd842;
  machine_word Wrd841;
  machine_word Wrd838;
  machine_word Wrd834;
  machine_word Wrd833;
  machine_word Wrd825;
  machine_word Wrd817;
  machine_word Wrd816;
  machine_word Wrd815;
  machine_word Wrd814;
  machine_word Wrd813;
  machine_word Wrd812;
  machine_word Wrd808;
  machine_word Wrd807;
  machine_word Wrd798;
  machine_word Wrd797;
  machine_word Wrd785;
  machine_word Wrd790;
  machine_word Wrd789;
  machine_word Wrd786;
  machine_word Wrd782;
  machine_word Wrd781;
  machine_word Wrd773;
  machine_word Wrd765;
  machine_word Wrd764;
  machine_word Wrd763;
  machine_word Wrd762;
  machine_word Wrd761;
  machine_word Wrd760;
  machine_word Wrd756;
  machine_word Wrd755;
  machine_word Wrd746;
  machine_word Wrd745;
  machine_word Wrd733;
  machine_word Wrd738;
  machine_word Wrd737;
  machine_word Wrd734;
  machine_word Wrd730;
  machine_word Wrd729;
  machine_word Wrd721;
  machine_word Wrd713;
  machine_word Wrd712;
  machine_word Wrd711;
  machine_word Wrd710;
  machine_word Wrd709;
  machine_word Wrd708;
  machine_word Wrd704;
  machine_word Wrd703;
  machine_word Wrd694;
  machine_word Wrd693;
  machine_word Wrd681;
  machine_word Wrd686;
  machine_word Wrd685;
  machine_word Wrd682;
  machine_word Wrd678;
  machine_word Wrd677;
  machine_word Wrd669;
  machine_word Wrd661;
  machine_word Wrd660;
  machine_word Wrd659;
  machine_word Wrd658;
  machine_word Wrd657;
  machine_word Wrd656;
  machine_word Wrd652;
  machine_word Wrd651;
  machine_word Wrd642;
  machine_word Wrd641;
  machine_word Wrd629;
  machine_word Wrd634;
  machine_word Wrd633;
  machine_word Wrd630;
  machine_word Wrd626;
  machine_word Wrd625;
  machine_word Wrd617;
  machine_word Wrd609;
  machine_word Wrd608;
  machine_word Wrd607;
  machine_word Wrd606;
  machine_word Wrd605;
  machine_word Wrd604;
  machine_word Wrd600;
  machine_word Wrd599;
  machine_word Wrd590;
  machine_word Wrd589;
  machine_word Wrd577;
  machine_word Wrd582;
  machine_word Wrd581;
  machine_word Wrd578;
  machine_word Wrd574;
  machine_word Wrd573;
  machine_word Wrd565;
  machine_word Wrd557;
  machine_word Wrd556;
  machine_word Wrd555;
  machine_word Wrd554;
  machine_word Wrd553;
  machine_word Wrd552;
  machine_word Wrd548;
  machine_word Wrd547;
  machine_word Wrd538;
  machine_word Wrd537;
  machine_word Wrd525;
  machine_word Wrd530;
  machine_word Wrd529;
  machine_word Wrd526;
  machine_word Wrd522;
  machine_word Wrd521;
  machine_word Wrd513;
  machine_word Wrd505;
  machine_word Wrd504;
  machine_word Wrd503;
  machine_word Wrd502;
  machine_word Wrd501;
  machine_word Wrd500;
  machine_word Wrd496;
  machine_word Wrd495;
  machine_word Wrd486;
  machine_word Wrd485;
  machine_word Wrd473;
  machine_word Wrd478;
  machine_word Wrd477;
  machine_word Wrd474;
  machine_word Wrd470;
  machine_word Wrd469;
  machine_word Wrd461;
  machine_word Wrd453;
  machine_word Wrd452;
  machine_word Wrd451;
  machine_word Wrd450;
  machine_word Wrd449;
  machine_word Wrd448;
  machine_word Wrd444;
  machine_word Wrd443;
  machine_word Wrd434;
  machine_word Wrd433;
  machine_word Wrd421;
  machine_word Wrd426;
  machine_word Wrd425;
  machine_word Wrd422;
  machine_word Wrd418;
  machine_word Wrd417;
  machine_word Wrd409;
  machine_word Wrd401;
  machine_word Wrd400;
  machine_word Wrd399;
  machine_word Wrd398;
  machine_word Wrd397;
  machine_word Wrd396;
  machine_word Wrd392;
  machine_word Wrd391;
  machine_word Wrd382;
  machine_word Wrd381;
  machine_word Wrd369;
  machine_word Wrd374;
  machine_word Wrd373;
  machine_word Wrd370;
  machine_word Wrd366;
  machine_word Wrd365;
  machine_word Wrd357;
  machine_word Wrd349;
  machine_word Wrd348;
  machine_word Wrd347;
  machine_word Wrd346;
  machine_word Wrd345;
  machine_word Wrd344;
  machine_word Wrd340;
  machine_word Wrd339;
  machine_word Wrd330;
  machine_word Wrd329;
  machine_word Wrd317;
  machine_word Wrd322;
  machine_word Wrd321;
  machine_word Wrd318;
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
  machine_word Wrd114;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd80;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd116;
  machine_word Wrd117;
  machine_word Wrd175;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd110;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd10;
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
      goto bind_compiler_variables_180;

    case 1:
      current_block = (Rpc - LABEL_18_7);
      goto lambda_272;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto swapB_271;

    case 3:
      current_block = (Rpc - LABEL_18_14);
      goto label_182;

    case 4:
      current_block = (Rpc - LABEL_18_15);
      goto label_183;

    case 5:
      current_block = (Rpc - LABEL_18_16);
      goto label_184;

    case 6:
      current_block = (Rpc - LABEL_18_17);
      goto label_185;

    case 7:
      current_block = (Rpc - LABEL_18_18);
      goto label_186;

    case 8:
      current_block = (Rpc - LABEL_18_19);
      goto label_187;

    case 9:
      current_block = (Rpc - LABEL_18_20);
      goto label_188;

    case 10:
      current_block = (Rpc - LABEL_18_21);
      goto label_189;

    case 11:
      current_block = (Rpc - LABEL_18_22);
      goto label_190;

    case 12:
      current_block = (Rpc - LABEL_18_23);
      goto label_191;

    case 13:
      current_block = (Rpc - LABEL_18_24);
      goto label_192;

    case 14:
      current_block = (Rpc - LABEL_18_25);
      goto label_193;

    case 15:
      current_block = (Rpc - LABEL_18_26);
      goto label_194;

    case 16:
      current_block = (Rpc - LABEL_18_27);
      goto label_195;

    case 17:
      current_block = (Rpc - LABEL_18_28);
      goto label_196;

    case 18:
      current_block = (Rpc - LABEL_18_29);
      goto label_197;

    case 19:
      current_block = (Rpc - LABEL_18_30);
      goto label_198;

    case 20:
      current_block = (Rpc - LABEL_18_31);
      goto label_199;

    case 21:
      current_block = (Rpc - LABEL_18_32);
      goto label_200;

    case 22:
      current_block = (Rpc - LABEL_18_33);
      goto label_201;

    case 23:
      current_block = (Rpc - LABEL_18_34);
      goto label_202;

    case 24:
      current_block = (Rpc - LABEL_18_35);
      goto label_203;

    case 25:
      current_block = (Rpc - LABEL_18_36);
      goto label_204;

    case 26:
      current_block = (Rpc - LABEL_18_37);
      goto label_205;

    case 27:
      current_block = (Rpc - LABEL_18_38);
      goto label_206;

    case 28:
      current_block = (Rpc - LABEL_18_39);
      goto label_207;

    case 29:
      current_block = (Rpc - LABEL_18_40);
      goto label_208;

    case 30:
      current_block = (Rpc - LABEL_18_41);
      goto label_209;

    case 31:
      current_block = (Rpc - LABEL_18_42);
      goto label_210;

    case 32:
      current_block = (Rpc - LABEL_18_43);
      goto label_211;

    case 33:
      current_block = (Rpc - LABEL_18_44);
      goto label_212;

    case 34:
      current_block = (Rpc - LABEL_18_45);
      goto label_213;

    case 35:
      current_block = (Rpc - LABEL_18_46);
      goto label_214;

    case 36:
      current_block = (Rpc - LABEL_18_12);
      goto lambda_274;

    case 37:
      current_block = (Rpc - LABEL_18_10);
      goto swapB_273;

    case 38:
      current_block = (Rpc - LABEL_18_48);
      goto label_215;

    case 39:
      current_block = (Rpc - LABEL_18_49);
      goto label_216;

    case 40:
      current_block = (Rpc - LABEL_18_50);
      goto label_217;

    case 41:
      current_block = (Rpc - LABEL_18_51);
      goto label_218;

    case 42:
      current_block = (Rpc - LABEL_18_52);
      goto label_219;

    case 43:
      current_block = (Rpc - LABEL_18_53);
      goto label_220;

    case 44:
      current_block = (Rpc - LABEL_18_54);
      goto label_221;

    case 45:
      current_block = (Rpc - LABEL_18_55);
      goto label_222;

    case 46:
      current_block = (Rpc - LABEL_18_56);
      goto label_223;

    case 47:
      current_block = (Rpc - LABEL_18_57);
      goto label_224;

    case 48:
      current_block = (Rpc - LABEL_18_58);
      goto label_225;

    case 49:
      current_block = (Rpc - LABEL_18_59);
      goto label_226;

    case 50:
      current_block = (Rpc - LABEL_18_60);
      goto label_227;

    case 51:
      current_block = (Rpc - LABEL_18_61);
      goto label_228;

    case 52:
      current_block = (Rpc - LABEL_18_62);
      goto label_229;

    case 53:
      current_block = (Rpc - LABEL_18_63);
      goto label_230;

    case 54:
      current_block = (Rpc - LABEL_18_64);
      goto label_231;

    case 55:
      current_block = (Rpc - LABEL_18_65);
      goto label_232;

    case 56:
      current_block = (Rpc - LABEL_18_66);
      goto label_233;

    case 57:
      current_block = (Rpc - LABEL_18_67);
      goto label_234;

    case 58:
      current_block = (Rpc - LABEL_18_68);
      goto label_235;

    case 59:
      current_block = (Rpc - LABEL_18_69);
      goto label_236;

    case 60:
      current_block = (Rpc - LABEL_18_70);
      goto label_237;

    case 61:
      current_block = (Rpc - LABEL_18_71);
      goto label_238;

    case 62:
      current_block = (Rpc - LABEL_18_72);
      goto label_239;

    case 63:
      current_block = (Rpc - LABEL_18_73);
      goto label_240;

    case 64:
      current_block = (Rpc - LABEL_18_74);
      goto label_241;

    case 65:
      current_block = (Rpc - LABEL_18_75);
      goto label_242;

    case 66:
      current_block = (Rpc - LABEL_18_76);
      goto label_243;

    case 67:
      current_block = (Rpc - LABEL_18_77);
      goto label_244;

    case 68:
      current_block = (Rpc - LABEL_18_78);
      goto label_245;

    case 69:
      current_block = (Rpc - LABEL_18_79);
      goto label_246;

    case 70:
      current_block = (Rpc - LABEL_18_80);
      goto label_247;

    case 71:
      current_block = (Rpc - LABEL_18_81);
      goto label_248;

    case 72:
      current_block = (Rpc - LABEL_18_82);
      goto label_249;

    case 73:
      current_block = (Rpc - LABEL_18_83);
      goto label_250;

    case 74:
      current_block = (Rpc - LABEL_18_84);
      goto label_251;

    case 75:
      current_block = (Rpc - LABEL_18_85);
      goto label_252;

    case 76:
      current_block = (Rpc - LABEL_18_86);
      goto label_253;

    case 77:
      current_block = (Rpc - LABEL_18_87);
      goto label_254;

    case 78:
      current_block = (Rpc - LABEL_18_88);
      goto label_255;

    case 79:
      current_block = (Rpc - LABEL_18_89);
      goto label_256;

    case 80:
      current_block = (Rpc - LABEL_18_90);
      goto label_257;

    case 81:
      current_block = (Rpc - LABEL_18_91);
      goto label_258;

    case 82:
      current_block = (Rpc - LABEL_18_92);
      goto label_259;

    case 83:
      current_block = (Rpc - LABEL_18_93);
      goto label_260;

    case 84:
      current_block = (Rpc - LABEL_18_94);
      goto label_261;

    case 85:
      current_block = (Rpc - LABEL_18_95);
      goto label_262;

    case 86:
      current_block = (Rpc - LABEL_18_96);
      goto label_263;

    case 87:
      current_block = (Rpc - LABEL_18_97);
      goto label_264;

    case 88:
      current_block = (Rpc - LABEL_18_98);
      goto label_265;

    case 89:
      current_block = (Rpc - LABEL_18_99);
      goto label_266;

    case 90:
      current_block = (Rpc - LABEL_18_100);
      goto label_267;

    case 91:
      current_block = (Rpc - LABEL_18_101);
      goto label_268;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bind_compiler_variables_270)
DEFLABEL (bind_compiler_variables_180)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd24.pObj) = (& (Rhp [-1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd30.pObj) = (& (Rhp [-1]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd36.pObj) = (& (Rhp [-1]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd42.pObj) = (& (Rhp [-1]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd48.pObj) = (& (Rhp [-1]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd54.pObj) = (& (Rhp [-1]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd54.pObj)));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd60.pObj) = (& (Rhp [-1]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd60.pObj)));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd66.pObj) = (& (Rhp [-1]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd66.pObj)));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 14));
  (Wrd112.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 11;
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd112.pObj)));
  (* (--Rsp)) = (Wrd113.Obj);
  Wrd110 = Wrd112;
  ((Wrd110.pObj) [2]) = (Wrd7.Obj);
  ((Wrd110.pObj) [3]) = (Wrd13.Obj);
  ((Wrd110.pObj) [4]) = (Wrd19.Obj);
  ((Wrd110.pObj) [5]) = (Wrd25.Obj);
  ((Wrd110.pObj) [6]) = (Wrd31.Obj);
  ((Wrd110.pObj) [7]) = (Wrd37.Obj);
  ((Wrd110.pObj) [8]) = (Wrd43.Obj);
  ((Wrd110.pObj) [9]) = (Wrd49.Obj);
  ((Wrd110.pObj) [10]) = (Wrd55.Obj);
  ((Wrd110.pObj) [11]) = (Wrd61.Obj);
  ((Wrd110.pObj) [12]) = (Wrd67.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd74.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_7])));
  Rhp += 1;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd74.pObj)));
  Wrd75 = Wrd74;
  (Wrd76.Obj) = (Rsp [12]);
  ((Wrd75.pObj) [2]) = (Wrd76.Obj);
  (Rsp [12]) = (Wrd113.Obj);
  (Rsp [11]) = (Wrd73.Obj);
  (Rsp [10]) = (Wrd113.Obj);
  Rsp = (& (Rsp [10]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (lambda_272)
  CLOSURE_HEADER (LABEL_18_7);

DEFLABEL (lambda_111)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd24.pObj) = (& (Rhp [-1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd30.pObj) = (& (Rhp [-1]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd36.pObj) = (& (Rhp [-1]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd42.pObj) = (& (Rhp [-1]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd48.pObj) = (& (Rhp [-1]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd54.pObj) = (& (Rhp [-1]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd54.pObj)));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd60.pObj) = (& (Rhp [-1]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd60.pObj)));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd66.pObj) = (& (Rhp [-1]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd66.pObj)));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd72.pObj) = (& (Rhp [-1]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd72.pObj)));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd78.pObj) = (& (Rhp [-1]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd78.pObj)));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd84.pObj) = (& (Rhp [-1]));
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd84.pObj)));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd90.pObj) = (& (Rhp [-1]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd90.pObj)));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd96.pObj) = (& (Rhp [-1]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd96.pObj)));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd102.pObj) = (& (Rhp [-1]));
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd102.pObj)));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd108.pObj) = (& (Rhp [-1]));
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd108.pObj)));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 21));
  (Wrd177.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_10])));
  Rhp += 18;
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd177.pObj)));
  (* (--Rsp)) = (Wrd178.Obj);
  Wrd175 = Wrd177;
  ((Wrd175.pObj) [2]) = (Wrd7.Obj);
  ((Wrd175.pObj) [3]) = (Wrd13.Obj);
  ((Wrd175.pObj) [4]) = (Wrd19.Obj);
  ((Wrd175.pObj) [5]) = (Wrd25.Obj);
  ((Wrd175.pObj) [6]) = (Wrd31.Obj);
  ((Wrd175.pObj) [7]) = (Wrd37.Obj);
  ((Wrd175.pObj) [8]) = (Wrd43.Obj);
  ((Wrd175.pObj) [9]) = (Wrd49.Obj);
  ((Wrd175.pObj) [10]) = (Wrd55.Obj);
  ((Wrd175.pObj) [11]) = (Wrd61.Obj);
  ((Wrd175.pObj) [12]) = (Wrd67.Obj);
  ((Wrd175.pObj) [13]) = (Wrd73.Obj);
  ((Wrd175.pObj) [14]) = (Wrd79.Obj);
  ((Wrd175.pObj) [15]) = (Wrd85.Obj);
  ((Wrd175.pObj) [16]) = (Wrd91.Obj);
  ((Wrd175.pObj) [17]) = (Wrd97.Obj);
  ((Wrd175.pObj) [18]) = (Wrd103.Obj);
  ((Wrd175.pObj) [19]) = (Wrd109.Obj);
  (Rsp [17]) = (Wrd178.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd117.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_12])));
  Rhp += 1;
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd117.pObj)));
  Wrd118 = Wrd117;
  (Wrd119.Obj) = (Rsp [19]);
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd119.Obj));
  (Wrd121.Obj) = ((Wrd120.pObj) [2]);
  ((Wrd118.pObj) [2]) = (Wrd121.Obj);
  (Rsp [18]) = (Wrd116.Obj);
  (Rsp [19]) = (Wrd178.Obj);
  Rsp = (& (Rsp [17]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (swapB_271)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (swapB_178)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_373;

DEFLABEL (label_372)
  Wrd5 = Wrd9;

DEFLABEL (label_371)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_370;

DEFLABEL (label_369)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_368)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [12]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_367;

DEFLABEL (label_366)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_365)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_364;

DEFLABEL (label_363)
  Wrd57 = Wrd61;

DEFLABEL (label_362)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_361;

DEFLABEL (label_360)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_359)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [11]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_358;

DEFLABEL (label_357)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_356)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_355;

DEFLABEL (label_354)
  Wrd109 = Wrd113;

DEFLABEL (label_353)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_352;

DEFLABEL (label_351)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_350)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [10]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_349;

DEFLABEL (label_348)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_347)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_3]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_346;

DEFLABEL (label_345)
  Wrd161 = Wrd165;

DEFLABEL (label_344)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_343;

DEFLABEL (label_342)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_341)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [9]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_340;

DEFLABEL (label_339)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_338)
  (Wrd214.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_4]));
  (Wrd217.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if ((Wrd218.uLng) == 50)
    goto label_337;

DEFLABEL (label_336)
  Wrd213 = Wrd217;

DEFLABEL (label_335)
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd225.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_4]));
  (Wrd226.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd235.Obj) = ((Wrd225.pObj) [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if ((Wrd236.uLng) == 50)
    goto label_334;

DEFLABEL (label_333)
  ((Wrd225.pObj) [0]) = (Wrd226.Obj);

DEFLABEL (label_332)
  (Wrd240.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd243.Obj) = ((Wrd242.pObj) [8]);
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (* (--Rsp)) = (Wrd245.Obj);
  ((Wrd244.pObj) [0]) = (Wrd240.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd253.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_4]));
  (Wrd261.Obj) = ((Wrd253.pObj) [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd262.uLng) == 50)
    goto label_331;

DEFLABEL (label_330)
  ((Wrd253.pObj) [0]) = (Wrd245.Obj);

DEFLABEL (label_329)
  (Wrd266.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_5]));
  (Wrd269.Obj) = ((Wrd266.pObj) [0]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if ((Wrd270.uLng) == 50)
    goto label_328;

DEFLABEL (label_327)
  Wrd265 = Wrd269;

DEFLABEL (label_326)
  (* (--Rsp)) = (Wrd265.Obj);
  (Wrd277.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_5]));
  (Wrd278.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd287.Obj) = ((Wrd277.pObj) [0]);
  (Wrd288.uLng) = (OBJECT_TYPE (Wrd287.Obj));
  if ((Wrd288.uLng) == 50)
    goto label_325;

DEFLABEL (label_324)
  ((Wrd277.pObj) [0]) = (Wrd278.Obj);

DEFLABEL (label_323)
  (Wrd292.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd292.Obj);
  (Wrd293.Obj) = (Rsp [1]);
  (Wrd294.pObj) = (OBJECT_ADDRESS (Wrd293.Obj));
  (Wrd295.Obj) = ((Wrd294.pObj) [7]);
  (Wrd296.pObj) = (OBJECT_ADDRESS (Wrd295.Obj));
  (Wrd297.Obj) = ((Wrd296.pObj) [0]);
  (* (--Rsp)) = (Wrd297.Obj);
  ((Wrd296.pObj) [0]) = (Wrd292.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd305.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_5]));
  (Wrd313.Obj) = ((Wrd305.pObj) [0]);
  (Wrd314.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if ((Wrd314.uLng) == 50)
    goto label_322;

DEFLABEL (label_321)
  ((Wrd305.pObj) [0]) = (Wrd297.Obj);

DEFLABEL (label_320)
  (Wrd318.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_6]));
  (Wrd321.Obj) = ((Wrd318.pObj) [0]);
  (Wrd322.uLng) = (OBJECT_TYPE (Wrd321.Obj));
  if ((Wrd322.uLng) == 50)
    goto label_319;

DEFLABEL (label_318)
  Wrd317 = Wrd321;

DEFLABEL (label_317)
  (* (--Rsp)) = (Wrd317.Obj);
  (Wrd329.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_6]));
  (Wrd330.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd339.Obj) = ((Wrd329.pObj) [0]);
  (Wrd340.uLng) = (OBJECT_TYPE (Wrd339.Obj));
  if ((Wrd340.uLng) == 50)
    goto label_316;

DEFLABEL (label_315)
  ((Wrd329.pObj) [0]) = (Wrd330.Obj);

DEFLABEL (label_314)
  (Wrd344.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd344.Obj);
  (Wrd345.Obj) = (Rsp [1]);
  (Wrd346.pObj) = (OBJECT_ADDRESS (Wrd345.Obj));
  (Wrd347.Obj) = ((Wrd346.pObj) [6]);
  (Wrd348.pObj) = (OBJECT_ADDRESS (Wrd347.Obj));
  (Wrd349.Obj) = ((Wrd348.pObj) [0]);
  (* (--Rsp)) = (Wrd349.Obj);
  ((Wrd348.pObj) [0]) = (Wrd344.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd357.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_6]));
  (Wrd365.Obj) = ((Wrd357.pObj) [0]);
  (Wrd366.uLng) = (OBJECT_TYPE (Wrd365.Obj));
  if ((Wrd366.uLng) == 50)
    goto label_313;

DEFLABEL (label_312)
  ((Wrd357.pObj) [0]) = (Wrd349.Obj);

DEFLABEL (label_311)
  (Wrd370.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_7]));
  (Wrd373.Obj) = ((Wrd370.pObj) [0]);
  (Wrd374.uLng) = (OBJECT_TYPE (Wrd373.Obj));
  if ((Wrd374.uLng) == 50)
    goto label_310;

DEFLABEL (label_309)
  Wrd369 = Wrd373;

DEFLABEL (label_308)
  (* (--Rsp)) = (Wrd369.Obj);
  (Wrd381.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_7]));
  (Wrd382.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd391.Obj) = ((Wrd381.pObj) [0]);
  (Wrd392.uLng) = (OBJECT_TYPE (Wrd391.Obj));
  if ((Wrd392.uLng) == 50)
    goto label_307;

DEFLABEL (label_306)
  ((Wrd381.pObj) [0]) = (Wrd382.Obj);

DEFLABEL (label_305)
  (Wrd396.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd396.Obj);
  (Wrd397.Obj) = (Rsp [1]);
  (Wrd398.pObj) = (OBJECT_ADDRESS (Wrd397.Obj));
  (Wrd399.Obj) = ((Wrd398.pObj) [5]);
  (Wrd400.pObj) = (OBJECT_ADDRESS (Wrd399.Obj));
  (Wrd401.Obj) = ((Wrd400.pObj) [0]);
  (* (--Rsp)) = (Wrd401.Obj);
  ((Wrd400.pObj) [0]) = (Wrd396.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd409.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_7]));
  (Wrd417.Obj) = ((Wrd409.pObj) [0]);
  (Wrd418.uLng) = (OBJECT_TYPE (Wrd417.Obj));
  if ((Wrd418.uLng) == 50)
    goto label_304;

DEFLABEL (label_303)
  ((Wrd409.pObj) [0]) = (Wrd401.Obj);

DEFLABEL (label_302)
  (Wrd422.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_8]));
  (Wrd425.Obj) = ((Wrd422.pObj) [0]);
  (Wrd426.uLng) = (OBJECT_TYPE (Wrd425.Obj));
  if ((Wrd426.uLng) == 50)
    goto label_301;

DEFLABEL (label_300)
  Wrd421 = Wrd425;

DEFLABEL (label_299)
  (* (--Rsp)) = (Wrd421.Obj);
  (Wrd433.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_8]));
  (Wrd434.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd443.Obj) = ((Wrd433.pObj) [0]);
  (Wrd444.uLng) = (OBJECT_TYPE (Wrd443.Obj));
  if ((Wrd444.uLng) == 50)
    goto label_298;

DEFLABEL (label_297)
  ((Wrd433.pObj) [0]) = (Wrd434.Obj);

DEFLABEL (label_296)
  (Wrd448.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd448.Obj);
  (Wrd449.Obj) = (Rsp [1]);
  (Wrd450.pObj) = (OBJECT_ADDRESS (Wrd449.Obj));
  (Wrd451.Obj) = ((Wrd450.pObj) [4]);
  (Wrd452.pObj) = (OBJECT_ADDRESS (Wrd451.Obj));
  (Wrd453.Obj) = ((Wrd452.pObj) [0]);
  (* (--Rsp)) = (Wrd453.Obj);
  ((Wrd452.pObj) [0]) = (Wrd448.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd461.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_8]));
  (Wrd469.Obj) = ((Wrd461.pObj) [0]);
  (Wrd470.uLng) = (OBJECT_TYPE (Wrd469.Obj));
  if ((Wrd470.uLng) == 50)
    goto label_295;

DEFLABEL (label_294)
  ((Wrd461.pObj) [0]) = (Wrd453.Obj);

DEFLABEL (label_293)
  (Wrd474.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_9]));
  (Wrd477.Obj) = ((Wrd474.pObj) [0]);
  (Wrd478.uLng) = (OBJECT_TYPE (Wrd477.Obj));
  if ((Wrd478.uLng) == 50)
    goto label_292;

DEFLABEL (label_291)
  Wrd473 = Wrd477;

DEFLABEL (label_290)
  (* (--Rsp)) = (Wrd473.Obj);
  (Wrd485.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_9]));
  (Wrd486.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd495.Obj) = ((Wrd485.pObj) [0]);
  (Wrd496.uLng) = (OBJECT_TYPE (Wrd495.Obj));
  if ((Wrd496.uLng) == 50)
    goto label_289;

DEFLABEL (label_288)
  ((Wrd485.pObj) [0]) = (Wrd486.Obj);

DEFLABEL (label_287)
  (Wrd500.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd500.Obj);
  (Wrd501.Obj) = (Rsp [1]);
  (Wrd502.pObj) = (OBJECT_ADDRESS (Wrd501.Obj));
  (Wrd503.Obj) = ((Wrd502.pObj) [3]);
  (Wrd504.pObj) = (OBJECT_ADDRESS (Wrd503.Obj));
  (Wrd505.Obj) = ((Wrd504.pObj) [0]);
  (* (--Rsp)) = (Wrd505.Obj);
  ((Wrd504.pObj) [0]) = (Wrd500.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd513.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_9]));
  (Wrd521.Obj) = ((Wrd513.pObj) [0]);
  (Wrd522.uLng) = (OBJECT_TYPE (Wrd521.Obj));
  if ((Wrd522.uLng) == 50)
    goto label_286;

DEFLABEL (label_285)
  ((Wrd513.pObj) [0]) = (Wrd505.Obj);

DEFLABEL (label_284)
  (Wrd526.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_10]));
  (Wrd529.Obj) = ((Wrd526.pObj) [0]);
  (Wrd530.uLng) = (OBJECT_TYPE (Wrd529.Obj));
  if ((Wrd530.uLng) == 50)
    goto label_283;

DEFLABEL (label_282)
  Wrd525 = Wrd529;

DEFLABEL (label_281)
  (* (--Rsp)) = (Wrd525.Obj);
  (Wrd537.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_10]));
  (Wrd538.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd547.Obj) = ((Wrd537.pObj) [0]);
  (Wrd548.uLng) = (OBJECT_TYPE (Wrd547.Obj));
  if ((Wrd548.uLng) == 50)
    goto label_280;

DEFLABEL (label_279)
  ((Wrd537.pObj) [0]) = (Wrd538.Obj);

DEFLABEL (label_278)
  (Wrd552.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd552.Obj);
  (Wrd553.Obj) = (Rsp [1]);
  (Wrd554.pObj) = (OBJECT_ADDRESS (Wrd553.Obj));
  (Wrd555.Obj) = ((Wrd554.pObj) [2]);
  (Wrd556.pObj) = (OBJECT_ADDRESS (Wrd555.Obj));
  (Wrd557.Obj) = ((Wrd556.pObj) [0]);
  (* (--Rsp)) = (Wrd557.Obj);
  ((Wrd556.pObj) [0]) = (Wrd552.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd565.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_10]));
  (Wrd573.Obj) = ((Wrd565.pObj) [0]);
  (Wrd574.uLng) = (OBJECT_TYPE (Wrd573.Obj));
  if ((Wrd574.uLng) == 50)
    goto label_277;

DEFLABEL (label_276)
  ((Wrd565.pObj) [0]) = (Wrd557.Obj);

DEFLABEL (label_275)
  Rvl = (current_block [OBJECT_18_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_277)
  if ((Wrd573.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_276;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_46])), (Wrd565.pObj), (Wrd557.Obj));

DEFLABEL (label_214)
  goto label_275;

DEFLABEL (label_280)
  if ((Wrd547.Obj) == (Wrd538.Obj))
    goto label_279;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_45])), (Wrd537.pObj), (Wrd538.Obj));

DEFLABEL (label_213)
  goto label_278;

DEFLABEL (label_283)
  if ((Wrd529.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_282;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_44])), (Wrd526.pObj));

DEFLABEL (label_212)
  (Wrd525.Obj) = Rvl;
  goto label_281;

DEFLABEL (label_286)
  if ((Wrd521.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_285;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_43])), (Wrd513.pObj), (Wrd505.Obj));

DEFLABEL (label_211)
  goto label_284;

DEFLABEL (label_289)
  if ((Wrd495.Obj) == (Wrd486.Obj))
    goto label_288;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_42])), (Wrd485.pObj), (Wrd486.Obj));

DEFLABEL (label_210)
  goto label_287;

DEFLABEL (label_292)
  if ((Wrd477.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_291;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_41])), (Wrd474.pObj));

DEFLABEL (label_209)
  (Wrd473.Obj) = Rvl;
  goto label_290;

DEFLABEL (label_295)
  if ((Wrd469.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_294;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_40])), (Wrd461.pObj), (Wrd453.Obj));

DEFLABEL (label_208)
  goto label_293;

DEFLABEL (label_298)
  if ((Wrd443.Obj) == (Wrd434.Obj))
    goto label_297;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_39])), (Wrd433.pObj), (Wrd434.Obj));

DEFLABEL (label_207)
  goto label_296;

DEFLABEL (label_301)
  if ((Wrd425.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_300;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_38])), (Wrd422.pObj));

DEFLABEL (label_206)
  (Wrd421.Obj) = Rvl;
  goto label_299;

DEFLABEL (label_304)
  if ((Wrd417.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_303;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_37])), (Wrd409.pObj), (Wrd401.Obj));

DEFLABEL (label_205)
  goto label_302;

DEFLABEL (label_307)
  if ((Wrd391.Obj) == (Wrd382.Obj))
    goto label_306;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_36])), (Wrd381.pObj), (Wrd382.Obj));

DEFLABEL (label_204)
  goto label_305;

DEFLABEL (label_310)
  if ((Wrd373.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_309;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_35])), (Wrd370.pObj));

DEFLABEL (label_203)
  (Wrd369.Obj) = Rvl;
  goto label_308;

DEFLABEL (label_313)
  if ((Wrd365.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_312;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_34])), (Wrd357.pObj), (Wrd349.Obj));

DEFLABEL (label_202)
  goto label_311;

DEFLABEL (label_316)
  if ((Wrd339.Obj) == (Wrd330.Obj))
    goto label_315;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_33])), (Wrd329.pObj), (Wrd330.Obj));

DEFLABEL (label_201)
  goto label_314;

DEFLABEL (label_319)
  if ((Wrd321.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_318;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_32])), (Wrd318.pObj));

DEFLABEL (label_200)
  (Wrd317.Obj) = Rvl;
  goto label_317;

DEFLABEL (label_322)
  if ((Wrd313.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_321;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_31])), (Wrd305.pObj), (Wrd297.Obj));

DEFLABEL (label_199)
  goto label_320;

DEFLABEL (label_325)
  if ((Wrd287.Obj) == (Wrd278.Obj))
    goto label_324;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_30])), (Wrd277.pObj), (Wrd278.Obj));

DEFLABEL (label_198)
  goto label_323;

DEFLABEL (label_328)
  if ((Wrd269.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_327;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_29])), (Wrd266.pObj));

DEFLABEL (label_197)
  (Wrd265.Obj) = Rvl;
  goto label_326;

DEFLABEL (label_331)
  if ((Wrd261.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_330;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_28])), (Wrd253.pObj), (Wrd245.Obj));

DEFLABEL (label_196)
  goto label_329;

DEFLABEL (label_334)
  if ((Wrd235.Obj) == (Wrd226.Obj))
    goto label_333;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_27])), (Wrd225.pObj), (Wrd226.Obj));

DEFLABEL (label_195)
  goto label_332;

DEFLABEL (label_337)
  if ((Wrd217.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_336;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_26])), (Wrd214.pObj));

DEFLABEL (label_194)
  (Wrd213.Obj) = Rvl;
  goto label_335;

DEFLABEL (label_340)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_339;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_25])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_193)
  goto label_338;

DEFLABEL (label_343)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_342;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_24])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_192)
  goto label_341;

DEFLABEL (label_346)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_345;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_23])), (Wrd162.pObj));

DEFLABEL (label_191)
  (Wrd161.Obj) = Rvl;
  goto label_344;

DEFLABEL (label_349)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_348;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_22])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_190)
  goto label_347;

DEFLABEL (label_352)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_351;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_21])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_189)
  goto label_350;

DEFLABEL (label_355)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_354;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_20])), (Wrd110.pObj));

DEFLABEL (label_188)
  (Wrd109.Obj) = Rvl;
  goto label_353;

DEFLABEL (label_358)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_357;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_19])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_187)
  goto label_356;

DEFLABEL (label_361)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_360;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_18])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_186)
  goto label_359;

DEFLABEL (label_364)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_363;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_17])), (Wrd58.pObj));

DEFLABEL (label_185)
  (Wrd57.Obj) = Rvl;
  goto label_362;

DEFLABEL (label_367)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_366;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_184)
  goto label_365;

DEFLABEL (label_370)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_369;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_183)
  goto label_368;

DEFLABEL (label_373)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_372;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_14])), (Wrd6.pObj));

DEFLABEL (label_182)
  (Wrd5.Obj) = Rvl;
  goto label_371;

DEFLABEL (lambda_274)
  CLOSURE_HEADER (LABEL_18_12);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_47]));

DEFLABEL (swapB_273)
  CLOSURE_HEADER (LABEL_18_10);

DEFLABEL (swapB_109)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_11]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_535;

DEFLABEL (label_534)
  Wrd5 = Wrd9;

DEFLABEL (label_533)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_11]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_532;

DEFLABEL (label_531)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_530)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [19]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_11]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_529;

DEFLABEL (label_528)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_527)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_12]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_526;

DEFLABEL (label_525)
  Wrd57 = Wrd61;

DEFLABEL (label_524)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_12]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_523;

DEFLABEL (label_522)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_521)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [18]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_12]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_520;

DEFLABEL (label_519)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_518)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_13]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_517;

DEFLABEL (label_516)
  Wrd109 = Wrd113;

DEFLABEL (label_515)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_13]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_514;

DEFLABEL (label_513)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_512)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [17]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_13]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_511;

DEFLABEL (label_510)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_509)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_14]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_508;

DEFLABEL (label_507)
  Wrd161 = Wrd165;

DEFLABEL (label_506)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_14]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_505;

DEFLABEL (label_504)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_503)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [16]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_14]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_502;

DEFLABEL (label_501)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_500)
  (Wrd214.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_15]));
  (Wrd217.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if ((Wrd218.uLng) == 50)
    goto label_499;

DEFLABEL (label_498)
  Wrd213 = Wrd217;

DEFLABEL (label_497)
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd225.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_15]));
  (Wrd226.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd235.Obj) = ((Wrd225.pObj) [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if ((Wrd236.uLng) == 50)
    goto label_496;

DEFLABEL (label_495)
  ((Wrd225.pObj) [0]) = (Wrd226.Obj);

DEFLABEL (label_494)
  (Wrd240.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd243.Obj) = ((Wrd242.pObj) [15]);
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (* (--Rsp)) = (Wrd245.Obj);
  ((Wrd244.pObj) [0]) = (Wrd240.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd253.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_15]));
  (Wrd261.Obj) = ((Wrd253.pObj) [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd262.uLng) == 50)
    goto label_493;

DEFLABEL (label_492)
  ((Wrd253.pObj) [0]) = (Wrd245.Obj);

DEFLABEL (label_491)
  (Wrd266.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_16]));
  (Wrd269.Obj) = ((Wrd266.pObj) [0]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if ((Wrd270.uLng) == 50)
    goto label_490;

DEFLABEL (label_489)
  Wrd265 = Wrd269;

DEFLABEL (label_488)
  (* (--Rsp)) = (Wrd265.Obj);
  (Wrd277.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_16]));
  (Wrd278.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd287.Obj) = ((Wrd277.pObj) [0]);
  (Wrd288.uLng) = (OBJECT_TYPE (Wrd287.Obj));
  if ((Wrd288.uLng) == 50)
    goto label_487;

DEFLABEL (label_486)
  ((Wrd277.pObj) [0]) = (Wrd278.Obj);

DEFLABEL (label_485)
  (Wrd292.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd292.Obj);
  (Wrd293.Obj) = (Rsp [1]);
  (Wrd294.pObj) = (OBJECT_ADDRESS (Wrd293.Obj));
  (Wrd295.Obj) = ((Wrd294.pObj) [14]);
  (Wrd296.pObj) = (OBJECT_ADDRESS (Wrd295.Obj));
  (Wrd297.Obj) = ((Wrd296.pObj) [0]);
  (* (--Rsp)) = (Wrd297.Obj);
  ((Wrd296.pObj) [0]) = (Wrd292.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd305.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_16]));
  (Wrd313.Obj) = ((Wrd305.pObj) [0]);
  (Wrd314.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if ((Wrd314.uLng) == 50)
    goto label_484;

DEFLABEL (label_483)
  ((Wrd305.pObj) [0]) = (Wrd297.Obj);

DEFLABEL (label_482)
  (Wrd318.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_17]));
  (Wrd321.Obj) = ((Wrd318.pObj) [0]);
  (Wrd322.uLng) = (OBJECT_TYPE (Wrd321.Obj));
  if ((Wrd322.uLng) == 50)
    goto label_481;

DEFLABEL (label_480)
  Wrd317 = Wrd321;

DEFLABEL (label_479)
  (* (--Rsp)) = (Wrd317.Obj);
  (Wrd329.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_17]));
  (Wrd330.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd339.Obj) = ((Wrd329.pObj) [0]);
  (Wrd340.uLng) = (OBJECT_TYPE (Wrd339.Obj));
  if ((Wrd340.uLng) == 50)
    goto label_478;

DEFLABEL (label_477)
  ((Wrd329.pObj) [0]) = (Wrd330.Obj);

DEFLABEL (label_476)
  (Wrd344.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd344.Obj);
  (Wrd345.Obj) = (Rsp [1]);
  (Wrd346.pObj) = (OBJECT_ADDRESS (Wrd345.Obj));
  (Wrd347.Obj) = ((Wrd346.pObj) [13]);
  (Wrd348.pObj) = (OBJECT_ADDRESS (Wrd347.Obj));
  (Wrd349.Obj) = ((Wrd348.pObj) [0]);
  (* (--Rsp)) = (Wrd349.Obj);
  ((Wrd348.pObj) [0]) = (Wrd344.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd357.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_17]));
  (Wrd365.Obj) = ((Wrd357.pObj) [0]);
  (Wrd366.uLng) = (OBJECT_TYPE (Wrd365.Obj));
  if ((Wrd366.uLng) == 50)
    goto label_475;

DEFLABEL (label_474)
  ((Wrd357.pObj) [0]) = (Wrd349.Obj);

DEFLABEL (label_473)
  (Wrd370.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_18]));
  (Wrd373.Obj) = ((Wrd370.pObj) [0]);
  (Wrd374.uLng) = (OBJECT_TYPE (Wrd373.Obj));
  if ((Wrd374.uLng) == 50)
    goto label_472;

DEFLABEL (label_471)
  Wrd369 = Wrd373;

DEFLABEL (label_470)
  (* (--Rsp)) = (Wrd369.Obj);
  (Wrd381.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_18]));
  (Wrd382.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd391.Obj) = ((Wrd381.pObj) [0]);
  (Wrd392.uLng) = (OBJECT_TYPE (Wrd391.Obj));
  if ((Wrd392.uLng) == 50)
    goto label_469;

DEFLABEL (label_468)
  ((Wrd381.pObj) [0]) = (Wrd382.Obj);

DEFLABEL (label_467)
  (Wrd396.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd396.Obj);
  (Wrd397.Obj) = (Rsp [1]);
  (Wrd398.pObj) = (OBJECT_ADDRESS (Wrd397.Obj));
  (Wrd399.Obj) = ((Wrd398.pObj) [12]);
  (Wrd400.pObj) = (OBJECT_ADDRESS (Wrd399.Obj));
  (Wrd401.Obj) = ((Wrd400.pObj) [0]);
  (* (--Rsp)) = (Wrd401.Obj);
  ((Wrd400.pObj) [0]) = (Wrd396.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd409.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_18]));
  (Wrd417.Obj) = ((Wrd409.pObj) [0]);
  (Wrd418.uLng) = (OBJECT_TYPE (Wrd417.Obj));
  if ((Wrd418.uLng) == 50)
    goto label_466;

DEFLABEL (label_465)
  ((Wrd409.pObj) [0]) = (Wrd401.Obj);

DEFLABEL (label_464)
  (Wrd422.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_19]));
  (Wrd425.Obj) = ((Wrd422.pObj) [0]);
  (Wrd426.uLng) = (OBJECT_TYPE (Wrd425.Obj));
  if ((Wrd426.uLng) == 50)
    goto label_463;

DEFLABEL (label_462)
  Wrd421 = Wrd425;

DEFLABEL (label_461)
  (* (--Rsp)) = (Wrd421.Obj);
  (Wrd433.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_19]));
  (Wrd434.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd443.Obj) = ((Wrd433.pObj) [0]);
  (Wrd444.uLng) = (OBJECT_TYPE (Wrd443.Obj));
  if ((Wrd444.uLng) == 50)
    goto label_460;

DEFLABEL (label_459)
  ((Wrd433.pObj) [0]) = (Wrd434.Obj);

DEFLABEL (label_458)
  (Wrd448.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd448.Obj);
  (Wrd449.Obj) = (Rsp [1]);
  (Wrd450.pObj) = (OBJECT_ADDRESS (Wrd449.Obj));
  (Wrd451.Obj) = ((Wrd450.pObj) [11]);
  (Wrd452.pObj) = (OBJECT_ADDRESS (Wrd451.Obj));
  (Wrd453.Obj) = ((Wrd452.pObj) [0]);
  (* (--Rsp)) = (Wrd453.Obj);
  ((Wrd452.pObj) [0]) = (Wrd448.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd461.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_19]));
  (Wrd469.Obj) = ((Wrd461.pObj) [0]);
  (Wrd470.uLng) = (OBJECT_TYPE (Wrd469.Obj));
  if ((Wrd470.uLng) == 50)
    goto label_457;

DEFLABEL (label_456)
  ((Wrd461.pObj) [0]) = (Wrd453.Obj);

DEFLABEL (label_455)
  (Wrd474.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_20]));
  (Wrd477.Obj) = ((Wrd474.pObj) [0]);
  (Wrd478.uLng) = (OBJECT_TYPE (Wrd477.Obj));
  if ((Wrd478.uLng) == 50)
    goto label_454;

DEFLABEL (label_453)
  Wrd473 = Wrd477;

DEFLABEL (label_452)
  (* (--Rsp)) = (Wrd473.Obj);
  (Wrd485.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_20]));
  (Wrd486.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd495.Obj) = ((Wrd485.pObj) [0]);
  (Wrd496.uLng) = (OBJECT_TYPE (Wrd495.Obj));
  if ((Wrd496.uLng) == 50)
    goto label_451;

DEFLABEL (label_450)
  ((Wrd485.pObj) [0]) = (Wrd486.Obj);

DEFLABEL (label_449)
  (Wrd500.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd500.Obj);
  (Wrd501.Obj) = (Rsp [1]);
  (Wrd502.pObj) = (OBJECT_ADDRESS (Wrd501.Obj));
  (Wrd503.Obj) = ((Wrd502.pObj) [10]);
  (Wrd504.pObj) = (OBJECT_ADDRESS (Wrd503.Obj));
  (Wrd505.Obj) = ((Wrd504.pObj) [0]);
  (* (--Rsp)) = (Wrd505.Obj);
  ((Wrd504.pObj) [0]) = (Wrd500.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd513.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_20]));
  (Wrd521.Obj) = ((Wrd513.pObj) [0]);
  (Wrd522.uLng) = (OBJECT_TYPE (Wrd521.Obj));
  if ((Wrd522.uLng) == 50)
    goto label_448;

DEFLABEL (label_447)
  ((Wrd513.pObj) [0]) = (Wrd505.Obj);

DEFLABEL (label_446)
  (Wrd526.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_21]));
  (Wrd529.Obj) = ((Wrd526.pObj) [0]);
  (Wrd530.uLng) = (OBJECT_TYPE (Wrd529.Obj));
  if ((Wrd530.uLng) == 50)
    goto label_445;

DEFLABEL (label_444)
  Wrd525 = Wrd529;

DEFLABEL (label_443)
  (* (--Rsp)) = (Wrd525.Obj);
  (Wrd537.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_21]));
  (Wrd538.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd547.Obj) = ((Wrd537.pObj) [0]);
  (Wrd548.uLng) = (OBJECT_TYPE (Wrd547.Obj));
  if ((Wrd548.uLng) == 50)
    goto label_442;

DEFLABEL (label_441)
  ((Wrd537.pObj) [0]) = (Wrd538.Obj);

DEFLABEL (label_440)
  (Wrd552.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd552.Obj);
  (Wrd553.Obj) = (Rsp [1]);
  (Wrd554.pObj) = (OBJECT_ADDRESS (Wrd553.Obj));
  (Wrd555.Obj) = ((Wrd554.pObj) [9]);
  (Wrd556.pObj) = (OBJECT_ADDRESS (Wrd555.Obj));
  (Wrd557.Obj) = ((Wrd556.pObj) [0]);
  (* (--Rsp)) = (Wrd557.Obj);
  ((Wrd556.pObj) [0]) = (Wrd552.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd565.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_21]));
  (Wrd573.Obj) = ((Wrd565.pObj) [0]);
  (Wrd574.uLng) = (OBJECT_TYPE (Wrd573.Obj));
  if ((Wrd574.uLng) == 50)
    goto label_439;

DEFLABEL (label_438)
  ((Wrd565.pObj) [0]) = (Wrd557.Obj);

DEFLABEL (label_437)
  (Wrd578.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_22]));
  (Wrd581.Obj) = ((Wrd578.pObj) [0]);
  (Wrd582.uLng) = (OBJECT_TYPE (Wrd581.Obj));
  if ((Wrd582.uLng) == 50)
    goto label_436;

DEFLABEL (label_435)
  Wrd577 = Wrd581;

DEFLABEL (label_434)
  (* (--Rsp)) = (Wrd577.Obj);
  (Wrd589.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_22]));
  (Wrd590.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd599.Obj) = ((Wrd589.pObj) [0]);
  (Wrd600.uLng) = (OBJECT_TYPE (Wrd599.Obj));
  if ((Wrd600.uLng) == 50)
    goto label_433;

DEFLABEL (label_432)
  ((Wrd589.pObj) [0]) = (Wrd590.Obj);

DEFLABEL (label_431)
  (Wrd604.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd604.Obj);
  (Wrd605.Obj) = (Rsp [1]);
  (Wrd606.pObj) = (OBJECT_ADDRESS (Wrd605.Obj));
  (Wrd607.Obj) = ((Wrd606.pObj) [8]);
  (Wrd608.pObj) = (OBJECT_ADDRESS (Wrd607.Obj));
  (Wrd609.Obj) = ((Wrd608.pObj) [0]);
  (* (--Rsp)) = (Wrd609.Obj);
  ((Wrd608.pObj) [0]) = (Wrd604.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd617.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_22]));
  (Wrd625.Obj) = ((Wrd617.pObj) [0]);
  (Wrd626.uLng) = (OBJECT_TYPE (Wrd625.Obj));
  if ((Wrd626.uLng) == 50)
    goto label_430;

DEFLABEL (label_429)
  ((Wrd617.pObj) [0]) = (Wrd609.Obj);

DEFLABEL (label_428)
  (Wrd630.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_23]));
  (Wrd633.Obj) = ((Wrd630.pObj) [0]);
  (Wrd634.uLng) = (OBJECT_TYPE (Wrd633.Obj));
  if ((Wrd634.uLng) == 50)
    goto label_427;

DEFLABEL (label_426)
  Wrd629 = Wrd633;

DEFLABEL (label_425)
  (* (--Rsp)) = (Wrd629.Obj);
  (Wrd641.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_23]));
  (Wrd642.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd651.Obj) = ((Wrd641.pObj) [0]);
  (Wrd652.uLng) = (OBJECT_TYPE (Wrd651.Obj));
  if ((Wrd652.uLng) == 50)
    goto label_424;

DEFLABEL (label_423)
  ((Wrd641.pObj) [0]) = (Wrd642.Obj);

DEFLABEL (label_422)
  (Wrd656.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd656.Obj);
  (Wrd657.Obj) = (Rsp [1]);
  (Wrd658.pObj) = (OBJECT_ADDRESS (Wrd657.Obj));
  (Wrd659.Obj) = ((Wrd658.pObj) [7]);
  (Wrd660.pObj) = (OBJECT_ADDRESS (Wrd659.Obj));
  (Wrd661.Obj) = ((Wrd660.pObj) [0]);
  (* (--Rsp)) = (Wrd661.Obj);
  ((Wrd660.pObj) [0]) = (Wrd656.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd669.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_23]));
  (Wrd677.Obj) = ((Wrd669.pObj) [0]);
  (Wrd678.uLng) = (OBJECT_TYPE (Wrd677.Obj));
  if ((Wrd678.uLng) == 50)
    goto label_421;

DEFLABEL (label_420)
  ((Wrd669.pObj) [0]) = (Wrd661.Obj);

DEFLABEL (label_419)
  (Wrd682.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_24]));
  (Wrd685.Obj) = ((Wrd682.pObj) [0]);
  (Wrd686.uLng) = (OBJECT_TYPE (Wrd685.Obj));
  if ((Wrd686.uLng) == 50)
    goto label_418;

DEFLABEL (label_417)
  Wrd681 = Wrd685;

DEFLABEL (label_416)
  (* (--Rsp)) = (Wrd681.Obj);
  (Wrd693.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_24]));
  (Wrd694.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd703.Obj) = ((Wrd693.pObj) [0]);
  (Wrd704.uLng) = (OBJECT_TYPE (Wrd703.Obj));
  if ((Wrd704.uLng) == 50)
    goto label_415;

DEFLABEL (label_414)
  ((Wrd693.pObj) [0]) = (Wrd694.Obj);

DEFLABEL (label_413)
  (Wrd708.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd708.Obj);
  (Wrd709.Obj) = (Rsp [1]);
  (Wrd710.pObj) = (OBJECT_ADDRESS (Wrd709.Obj));
  (Wrd711.Obj) = ((Wrd710.pObj) [6]);
  (Wrd712.pObj) = (OBJECT_ADDRESS (Wrd711.Obj));
  (Wrd713.Obj) = ((Wrd712.pObj) [0]);
  (* (--Rsp)) = (Wrd713.Obj);
  ((Wrd712.pObj) [0]) = (Wrd708.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd721.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_24]));
  (Wrd729.Obj) = ((Wrd721.pObj) [0]);
  (Wrd730.uLng) = (OBJECT_TYPE (Wrd729.Obj));
  if ((Wrd730.uLng) == 50)
    goto label_412;

DEFLABEL (label_411)
  ((Wrd721.pObj) [0]) = (Wrd713.Obj);

DEFLABEL (label_410)
  (Wrd734.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_25]));
  (Wrd737.Obj) = ((Wrd734.pObj) [0]);
  (Wrd738.uLng) = (OBJECT_TYPE (Wrd737.Obj));
  if ((Wrd738.uLng) == 50)
    goto label_409;

DEFLABEL (label_408)
  Wrd733 = Wrd737;

DEFLABEL (label_407)
  (* (--Rsp)) = (Wrd733.Obj);
  (Wrd745.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_25]));
  (Wrd746.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd755.Obj) = ((Wrd745.pObj) [0]);
  (Wrd756.uLng) = (OBJECT_TYPE (Wrd755.Obj));
  if ((Wrd756.uLng) == 50)
    goto label_406;

DEFLABEL (label_405)
  ((Wrd745.pObj) [0]) = (Wrd746.Obj);

DEFLABEL (label_404)
  (Wrd760.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd760.Obj);
  (Wrd761.Obj) = (Rsp [1]);
  (Wrd762.pObj) = (OBJECT_ADDRESS (Wrd761.Obj));
  (Wrd763.Obj) = ((Wrd762.pObj) [5]);
  (Wrd764.pObj) = (OBJECT_ADDRESS (Wrd763.Obj));
  (Wrd765.Obj) = ((Wrd764.pObj) [0]);
  (* (--Rsp)) = (Wrd765.Obj);
  ((Wrd764.pObj) [0]) = (Wrd760.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd773.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_25]));
  (Wrd781.Obj) = ((Wrd773.pObj) [0]);
  (Wrd782.uLng) = (OBJECT_TYPE (Wrd781.Obj));
  if ((Wrd782.uLng) == 50)
    goto label_403;

DEFLABEL (label_402)
  ((Wrd773.pObj) [0]) = (Wrd765.Obj);

DEFLABEL (label_401)
  (Wrd786.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_26]));
  (Wrd789.Obj) = ((Wrd786.pObj) [0]);
  (Wrd790.uLng) = (OBJECT_TYPE (Wrd789.Obj));
  if ((Wrd790.uLng) == 50)
    goto label_400;

DEFLABEL (label_399)
  Wrd785 = Wrd789;

DEFLABEL (label_398)
  (* (--Rsp)) = (Wrd785.Obj);
  (Wrd797.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_26]));
  (Wrd798.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd807.Obj) = ((Wrd797.pObj) [0]);
  (Wrd808.uLng) = (OBJECT_TYPE (Wrd807.Obj));
  if ((Wrd808.uLng) == 50)
    goto label_397;

DEFLABEL (label_396)
  ((Wrd797.pObj) [0]) = (Wrd798.Obj);

DEFLABEL (label_395)
  (Wrd812.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd812.Obj);
  (Wrd813.Obj) = (Rsp [1]);
  (Wrd814.pObj) = (OBJECT_ADDRESS (Wrd813.Obj));
  (Wrd815.Obj) = ((Wrd814.pObj) [4]);
  (Wrd816.pObj) = (OBJECT_ADDRESS (Wrd815.Obj));
  (Wrd817.Obj) = ((Wrd816.pObj) [0]);
  (* (--Rsp)) = (Wrd817.Obj);
  ((Wrd816.pObj) [0]) = (Wrd812.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd825.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_26]));
  (Wrd833.Obj) = ((Wrd825.pObj) [0]);
  (Wrd834.uLng) = (OBJECT_TYPE (Wrd833.Obj));
  if ((Wrd834.uLng) == 50)
    goto label_394;

DEFLABEL (label_393)
  ((Wrd825.pObj) [0]) = (Wrd817.Obj);

DEFLABEL (label_392)
  (Wrd838.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_27]));
  (Wrd841.Obj) = ((Wrd838.pObj) [0]);
  (Wrd842.uLng) = (OBJECT_TYPE (Wrd841.Obj));
  if ((Wrd842.uLng) == 50)
    goto label_391;

DEFLABEL (label_390)
  Wrd837 = Wrd841;

DEFLABEL (label_389)
  (* (--Rsp)) = (Wrd837.Obj);
  (Wrd849.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_27]));
  (Wrd850.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd859.Obj) = ((Wrd849.pObj) [0]);
  (Wrd860.uLng) = (OBJECT_TYPE (Wrd859.Obj));
  if ((Wrd860.uLng) == 50)
    goto label_388;

DEFLABEL (label_387)
  ((Wrd849.pObj) [0]) = (Wrd850.Obj);

DEFLABEL (label_386)
  (Wrd864.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd864.Obj);
  (Wrd865.Obj) = (Rsp [1]);
  (Wrd866.pObj) = (OBJECT_ADDRESS (Wrd865.Obj));
  (Wrd867.Obj) = ((Wrd866.pObj) [3]);
  (Wrd868.pObj) = (OBJECT_ADDRESS (Wrd867.Obj));
  (Wrd869.Obj) = ((Wrd868.pObj) [0]);
  (* (--Rsp)) = (Wrd869.Obj);
  ((Wrd868.pObj) [0]) = (Wrd864.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd877.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_27]));
  (Wrd885.Obj) = ((Wrd877.pObj) [0]);
  (Wrd886.uLng) = (OBJECT_TYPE (Wrd885.Obj));
  if ((Wrd886.uLng) == 50)
    goto label_385;

DEFLABEL (label_384)
  ((Wrd877.pObj) [0]) = (Wrd869.Obj);

DEFLABEL (label_383)
  (Wrd890.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_28]));
  (Wrd893.Obj) = ((Wrd890.pObj) [0]);
  (Wrd894.uLng) = (OBJECT_TYPE (Wrd893.Obj));
  if ((Wrd894.uLng) == 50)
    goto label_382;

DEFLABEL (label_381)
  Wrd889 = Wrd893;

DEFLABEL (label_380)
  (* (--Rsp)) = (Wrd889.Obj);
  (Wrd901.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_28]));
  (Wrd902.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd911.Obj) = ((Wrd901.pObj) [0]);
  (Wrd912.uLng) = (OBJECT_TYPE (Wrd911.Obj));
  if ((Wrd912.uLng) == 50)
    goto label_379;

DEFLABEL (label_378)
  ((Wrd901.pObj) [0]) = (Wrd902.Obj);

DEFLABEL (label_377)
  (Wrd916.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd916.Obj);
  (Wrd917.Obj) = (Rsp [1]);
  (Wrd918.pObj) = (OBJECT_ADDRESS (Wrd917.Obj));
  (Wrd919.Obj) = ((Wrd918.pObj) [2]);
  (Wrd920.pObj) = (OBJECT_ADDRESS (Wrd919.Obj));
  (Wrd921.Obj) = ((Wrd920.pObj) [0]);
  (* (--Rsp)) = (Wrd921.Obj);
  ((Wrd920.pObj) [0]) = (Wrd916.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd929.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_18_28]));
  (Wrd937.Obj) = ((Wrd929.pObj) [0]);
  (Wrd938.uLng) = (OBJECT_TYPE (Wrd937.Obj));
  if ((Wrd938.uLng) == 50)
    goto label_376;

DEFLABEL (label_375)
  ((Wrd929.pObj) [0]) = (Wrd921.Obj);

DEFLABEL (label_374)
  Rvl = (current_block [OBJECT_18_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_376)
  if ((Wrd937.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_375;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_101])), (Wrd929.pObj), (Wrd921.Obj));

DEFLABEL (label_268)
  goto label_374;

DEFLABEL (label_379)
  if ((Wrd911.Obj) == (Wrd902.Obj))
    goto label_378;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_100])), (Wrd901.pObj), (Wrd902.Obj));

DEFLABEL (label_267)
  goto label_377;

DEFLABEL (label_382)
  if ((Wrd893.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_381;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_99])), (Wrd890.pObj));

DEFLABEL (label_266)
  (Wrd889.Obj) = Rvl;
  goto label_380;

DEFLABEL (label_385)
  if ((Wrd885.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_384;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_98])), (Wrd877.pObj), (Wrd869.Obj));

DEFLABEL (label_265)
  goto label_383;

DEFLABEL (label_388)
  if ((Wrd859.Obj) == (Wrd850.Obj))
    goto label_387;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_97])), (Wrd849.pObj), (Wrd850.Obj));

DEFLABEL (label_264)
  goto label_386;

DEFLABEL (label_391)
  if ((Wrd841.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_390;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_96])), (Wrd838.pObj));

DEFLABEL (label_263)
  (Wrd837.Obj) = Rvl;
  goto label_389;

DEFLABEL (label_394)
  if ((Wrd833.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_393;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_95])), (Wrd825.pObj), (Wrd817.Obj));

DEFLABEL (label_262)
  goto label_392;

DEFLABEL (label_397)
  if ((Wrd807.Obj) == (Wrd798.Obj))
    goto label_396;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_94])), (Wrd797.pObj), (Wrd798.Obj));

DEFLABEL (label_261)
  goto label_395;

DEFLABEL (label_400)
  if ((Wrd789.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_399;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_93])), (Wrd786.pObj));

DEFLABEL (label_260)
  (Wrd785.Obj) = Rvl;
  goto label_398;

DEFLABEL (label_403)
  if ((Wrd781.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_402;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_92])), (Wrd773.pObj), (Wrd765.Obj));

DEFLABEL (label_259)
  goto label_401;

DEFLABEL (label_406)
  if ((Wrd755.Obj) == (Wrd746.Obj))
    goto label_405;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_91])), (Wrd745.pObj), (Wrd746.Obj));

DEFLABEL (label_258)
  goto label_404;

DEFLABEL (label_409)
  if ((Wrd737.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_408;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_90])), (Wrd734.pObj));

DEFLABEL (label_257)
  (Wrd733.Obj) = Rvl;
  goto label_407;

DEFLABEL (label_412)
  if ((Wrd729.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_411;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_89])), (Wrd721.pObj), (Wrd713.Obj));

DEFLABEL (label_256)
  goto label_410;

DEFLABEL (label_415)
  if ((Wrd703.Obj) == (Wrd694.Obj))
    goto label_414;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_88])), (Wrd693.pObj), (Wrd694.Obj));

DEFLABEL (label_255)
  goto label_413;

DEFLABEL (label_418)
  if ((Wrd685.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_417;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_87])), (Wrd682.pObj));

DEFLABEL (label_254)
  (Wrd681.Obj) = Rvl;
  goto label_416;

DEFLABEL (label_421)
  if ((Wrd677.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_420;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_86])), (Wrd669.pObj), (Wrd661.Obj));

DEFLABEL (label_253)
  goto label_419;

DEFLABEL (label_424)
  if ((Wrd651.Obj) == (Wrd642.Obj))
    goto label_423;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_85])), (Wrd641.pObj), (Wrd642.Obj));

DEFLABEL (label_252)
  goto label_422;

DEFLABEL (label_427)
  if ((Wrd633.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_426;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_84])), (Wrd630.pObj));

DEFLABEL (label_251)
  (Wrd629.Obj) = Rvl;
  goto label_425;

DEFLABEL (label_430)
  if ((Wrd625.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_429;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_83])), (Wrd617.pObj), (Wrd609.Obj));

DEFLABEL (label_250)
  goto label_428;

DEFLABEL (label_433)
  if ((Wrd599.Obj) == (Wrd590.Obj))
    goto label_432;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_82])), (Wrd589.pObj), (Wrd590.Obj));

DEFLABEL (label_249)
  goto label_431;

DEFLABEL (label_436)
  if ((Wrd581.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_435;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_81])), (Wrd578.pObj));

DEFLABEL (label_248)
  (Wrd577.Obj) = Rvl;
  goto label_434;

DEFLABEL (label_439)
  if ((Wrd573.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_438;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_80])), (Wrd565.pObj), (Wrd557.Obj));

DEFLABEL (label_247)
  goto label_437;

DEFLABEL (label_442)
  if ((Wrd547.Obj) == (Wrd538.Obj))
    goto label_441;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_79])), (Wrd537.pObj), (Wrd538.Obj));

DEFLABEL (label_246)
  goto label_440;

DEFLABEL (label_445)
  if ((Wrd529.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_444;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_78])), (Wrd526.pObj));

DEFLABEL (label_245)
  (Wrd525.Obj) = Rvl;
  goto label_443;

DEFLABEL (label_448)
  if ((Wrd521.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_447;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_77])), (Wrd513.pObj), (Wrd505.Obj));

DEFLABEL (label_244)
  goto label_446;

DEFLABEL (label_451)
  if ((Wrd495.Obj) == (Wrd486.Obj))
    goto label_450;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_76])), (Wrd485.pObj), (Wrd486.Obj));

DEFLABEL (label_243)
  goto label_449;

DEFLABEL (label_454)
  if ((Wrd477.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_453;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_75])), (Wrd474.pObj));

DEFLABEL (label_242)
  (Wrd473.Obj) = Rvl;
  goto label_452;

DEFLABEL (label_457)
  if ((Wrd469.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_456;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_74])), (Wrd461.pObj), (Wrd453.Obj));

DEFLABEL (label_241)
  goto label_455;

DEFLABEL (label_460)
  if ((Wrd443.Obj) == (Wrd434.Obj))
    goto label_459;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_73])), (Wrd433.pObj), (Wrd434.Obj));

DEFLABEL (label_240)
  goto label_458;

DEFLABEL (label_463)
  if ((Wrd425.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_462;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_72])), (Wrd422.pObj));

DEFLABEL (label_239)
  (Wrd421.Obj) = Rvl;
  goto label_461;

DEFLABEL (label_466)
  if ((Wrd417.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_465;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_71])), (Wrd409.pObj), (Wrd401.Obj));

DEFLABEL (label_238)
  goto label_464;

DEFLABEL (label_469)
  if ((Wrd391.Obj) == (Wrd382.Obj))
    goto label_468;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_70])), (Wrd381.pObj), (Wrd382.Obj));

DEFLABEL (label_237)
  goto label_467;

DEFLABEL (label_472)
  if ((Wrd373.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_471;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_69])), (Wrd370.pObj));

DEFLABEL (label_236)
  (Wrd369.Obj) = Rvl;
  goto label_470;

DEFLABEL (label_475)
  if ((Wrd365.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_474;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_68])), (Wrd357.pObj), (Wrd349.Obj));

DEFLABEL (label_235)
  goto label_473;

DEFLABEL (label_478)
  if ((Wrd339.Obj) == (Wrd330.Obj))
    goto label_477;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_67])), (Wrd329.pObj), (Wrd330.Obj));

DEFLABEL (label_234)
  goto label_476;

DEFLABEL (label_481)
  if ((Wrd321.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_480;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_66])), (Wrd318.pObj));

DEFLABEL (label_233)
  (Wrd317.Obj) = Rvl;
  goto label_479;

DEFLABEL (label_484)
  if ((Wrd313.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_483;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_65])), (Wrd305.pObj), (Wrd297.Obj));

DEFLABEL (label_232)
  goto label_482;

DEFLABEL (label_487)
  if ((Wrd287.Obj) == (Wrd278.Obj))
    goto label_486;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_64])), (Wrd277.pObj), (Wrd278.Obj));

DEFLABEL (label_231)
  goto label_485;

DEFLABEL (label_490)
  if ((Wrd269.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_489;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_63])), (Wrd266.pObj));

DEFLABEL (label_230)
  (Wrd265.Obj) = Rvl;
  goto label_488;

DEFLABEL (label_493)
  if ((Wrd261.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_492;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_62])), (Wrd253.pObj), (Wrd245.Obj));

DEFLABEL (label_229)
  goto label_491;

DEFLABEL (label_496)
  if ((Wrd235.Obj) == (Wrd226.Obj))
    goto label_495;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_61])), (Wrd225.pObj), (Wrd226.Obj));

DEFLABEL (label_228)
  goto label_494;

DEFLABEL (label_499)
  if ((Wrd217.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_498;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_60])), (Wrd214.pObj));

DEFLABEL (label_227)
  (Wrd213.Obj) = Rvl;
  goto label_497;

DEFLABEL (label_502)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_501;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_59])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_226)
  goto label_500;

DEFLABEL (label_505)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_504;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_58])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_225)
  goto label_503;

DEFLABEL (label_508)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_507;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_57])), (Wrd162.pObj));

DEFLABEL (label_224)
  (Wrd161.Obj) = Rvl;
  goto label_506;

DEFLABEL (label_511)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_510;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_56])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_223)
  goto label_509;

DEFLABEL (label_514)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_513;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_55])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_222)
  goto label_512;

DEFLABEL (label_517)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_516;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_54])), (Wrd110.pObj));

DEFLABEL (label_221)
  (Wrd109.Obj) = Rvl;
  goto label_515;

DEFLABEL (label_520)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_519;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_53])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_220)
  goto label_518;

DEFLABEL (label_523)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_522;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_52])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_219)
  goto label_521;

DEFLABEL (label_526)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_525;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_51])), (Wrd58.pObj));

DEFLABEL (label_218)
  (Wrd57.Obj) = Rvl;
  goto label_524;

DEFLABEL (label_529)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_528;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_50])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_217)
  goto label_527;

DEFLABEL (label_532)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_531;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_18_49])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_216)
  goto label_530;

DEFLABEL (label_535)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_534;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_18_48])), (Wrd6.pObj));

DEFLABEL (label_215)
  (Wrd5.Obj) = Rvl;
  goto label_533;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_7 9
#define LABEL_19_8 11
#define LABEL_19_9 13
#define LABEL_19_10 15
#define LABEL_19_11 17
#define LABEL_19_12 19
#define LABEL_19_13 21
#define LABEL_19_14 23
#define LABEL_19_15 25
#define LABEL_19_16 27
#define LABEL_19_17 29
#define LABEL_19_18 31
#define LABEL_19_19 33
#define LABEL_19_20 35
#define LABEL_19_21 37
#define LABEL_19_22 39
#define LABEL_19_23 41
#define LABEL_19_24 43
#define LABEL_19_25 45
#define LABEL_19_26 47
#define LABEL_19_27 49
#define LABEL_19_28 51
#define LABEL_19_29 53
#define LABEL_19_30 55
#define LABEL_19_31 57
#define LABEL_19_32 59
#define LABEL_19_33 61
#define LABEL_19_34 63
#define LABEL_19_35 65
#define LABEL_19_36 67
#define LABEL_19_37 69
#define LABEL_19_38 71
#define LABEL_19_39 73
#define ENVIRONMENT_LABEL_19_3 118
#define DEBUGGING_LABEL_19_2 117
#define OBJECT_19_3 116
#define OBJECT_19_2 115
#define OBJECT_19_1 114
#define OBJECT_19_0 113
#define EXECUTE_CACHE_19_40 75
#define FREE_ASSIGNMENT_19_34 78
#define FREE_ASSIGNMENT_19_33 79
#define FREE_ASSIGNMENT_19_32 80
#define FREE_ASSIGNMENT_19_31 81
#define FREE_ASSIGNMENT_19_30 82
#define FREE_ASSIGNMENT_19_29 83
#define FREE_ASSIGNMENT_19_28 84
#define FREE_ASSIGNMENT_19_27 85
#define FREE_ASSIGNMENT_19_26 86
#define FREE_ASSIGNMENT_19_25 87
#define FREE_ASSIGNMENT_19_24 88
#define FREE_ASSIGNMENT_19_23 89
#define FREE_ASSIGNMENT_19_22 90
#define FREE_ASSIGNMENT_19_21 91
#define FREE_ASSIGNMENT_19_20 92
#define FREE_ASSIGNMENT_19_19 93
#define FREE_ASSIGNMENT_19_18 94
#define FREE_ASSIGNMENT_19_17 95
#define FREE_ASSIGNMENT_19_16 96
#define FREE_ASSIGNMENT_19_15 97
#define FREE_ASSIGNMENT_19_14 98
#define FREE_ASSIGNMENT_19_13 99
#define FREE_ASSIGNMENT_19_12 100
#define FREE_ASSIGNMENT_19_11 101
#define FREE_ASSIGNMENT_19_10 102
#define FREE_ASSIGNMENT_19_9 103
#define FREE_ASSIGNMENT_19_8 104
#define FREE_ASSIGNMENT_19_7 105
#define FREE_ASSIGNMENT_19_6 106
#define FREE_ASSIGNMENT_19_5 107
#define FREE_ASSIGNMENT_19_4 108
#define FREE_ASSIGNMENT_19_3 109
#define FREE_ASSIGNMENT_19_2 110
#define FREE_ASSIGNMENT_19_1 111
#define FREE_ASSIGNMENT_19_0 112
#define FREE_REFERENCES_LABEL_19_0 74
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd480;
  machine_word Wrd479;
  machine_word Wrd470;
  machine_word Wrd469;
  machine_word Wrd466;
  machine_word Wrd465;
  machine_word Wrd456;
  machine_word Wrd455;
  machine_word Wrd452;
  machine_word Wrd451;
  machine_word Wrd442;
  machine_word Wrd441;
  machine_word Wrd438;
  machine_word Wrd437;
  machine_word Wrd428;
  machine_word Wrd427;
  machine_word Wrd424;
  machine_word Wrd423;
  machine_word Wrd414;
  machine_word Wrd413;
  machine_word Wrd410;
  machine_word Wrd409;
  machine_word Wrd400;
  machine_word Wrd399;
  machine_word Wrd396;
  machine_word Wrd395;
  machine_word Wrd386;
  machine_word Wrd385;
  machine_word Wrd382;
  machine_word Wrd381;
  machine_word Wrd372;
  machine_word Wrd371;
  machine_word Wrd368;
  machine_word Wrd367;
  machine_word Wrd358;
  machine_word Wrd357;
  machine_word Wrd354;
  machine_word Wrd353;
  machine_word Wrd344;
  machine_word Wrd343;
  machine_word Wrd340;
  machine_word Wrd339;
  machine_word Wrd330;
  machine_word Wrd329;
  machine_word Wrd326;
  machine_word Wrd325;
  machine_word Wrd316;
  machine_word Wrd315;
  machine_word Wrd312;
  machine_word Wrd311;
  machine_word Wrd302;
  machine_word Wrd301;
  machine_word Wrd298;
  machine_word Wrd297;
  machine_word Wrd288;
  machine_word Wrd287;
  machine_word Wrd284;
  machine_word Wrd283;
  machine_word Wrd274;
  machine_word Wrd273;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd260;
  machine_word Wrd259;
  machine_word Wrd256;
  machine_word Wrd255;
  machine_word Wrd246;
  machine_word Wrd245;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_19_4);
      goto compiler_resetB_0;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_19_8);
      goto label_5;

    case 5:
      current_block = (Rpc - LABEL_19_9);
      goto label_6;

    case 6:
      current_block = (Rpc - LABEL_19_10);
      goto label_7;

    case 7:
      current_block = (Rpc - LABEL_19_11);
      goto label_8;

    case 8:
      current_block = (Rpc - LABEL_19_12);
      goto label_9;

    case 9:
      current_block = (Rpc - LABEL_19_13);
      goto label_10;

    case 10:
      current_block = (Rpc - LABEL_19_14);
      goto label_11;

    case 11:
      current_block = (Rpc - LABEL_19_15);
      goto label_12;

    case 12:
      current_block = (Rpc - LABEL_19_16);
      goto label_13;

    case 13:
      current_block = (Rpc - LABEL_19_17);
      goto label_14;

    case 14:
      current_block = (Rpc - LABEL_19_18);
      goto label_15;

    case 15:
      current_block = (Rpc - LABEL_19_19);
      goto label_16;

    case 16:
      current_block = (Rpc - LABEL_19_20);
      goto label_17;

    case 17:
      current_block = (Rpc - LABEL_19_21);
      goto label_18;

    case 18:
      current_block = (Rpc - LABEL_19_22);
      goto label_19;

    case 19:
      current_block = (Rpc - LABEL_19_23);
      goto label_20;

    case 20:
      current_block = (Rpc - LABEL_19_24);
      goto label_21;

    case 21:
      current_block = (Rpc - LABEL_19_25);
      goto label_22;

    case 22:
      current_block = (Rpc - LABEL_19_26);
      goto label_23;

    case 23:
      current_block = (Rpc - LABEL_19_27);
      goto label_24;

    case 24:
      current_block = (Rpc - LABEL_19_28);
      goto label_25;

    case 25:
      current_block = (Rpc - LABEL_19_29);
      goto label_26;

    case 26:
      current_block = (Rpc - LABEL_19_30);
      goto label_27;

    case 27:
      current_block = (Rpc - LABEL_19_31);
      goto label_28;

    case 28:
      current_block = (Rpc - LABEL_19_32);
      goto label_29;

    case 29:
      current_block = (Rpc - LABEL_19_33);
      goto label_30;

    case 30:
      current_block = (Rpc - LABEL_19_34);
      goto label_31;

    case 31:
      current_block = (Rpc - LABEL_19_35);
      goto label_32;

    case 32:
      current_block = (Rpc - LABEL_19_36);
      goto label_33;

    case 33:
      current_block = (Rpc - LABEL_19_37);
      goto label_34;

    case 34:
      current_block = (Rpc - LABEL_19_38);
      goto label_35;

    case 35:
      current_block = (Rpc - LABEL_19_39);
      goto label_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_resetB_38)
DEFLABEL (compiler_resetB_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_0]));
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_143;

DEFLABEL (label_142)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_141)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_1]));
  (Wrd18.Obj) = (current_block [OBJECT_19_1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_140;

DEFLABEL (label_139)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_138)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_2]));
  (Wrd30.Obj) = (current_block [OBJECT_19_2]);
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_137;

DEFLABEL (label_136)
  ((Wrd29.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_135)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_3]));
  (Wrd42.Obj) = (current_block [OBJECT_19_3]);
  (Wrd49.Obj) = ((Wrd41.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_134;

DEFLABEL (label_133)
  ((Wrd41.pObj) [0]) = (Wrd42.Obj);

DEFLABEL (label_132)
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_4]));
  (Wrd54.Obj) = (current_block [OBJECT_19_0]);
  (Wrd61.Obj) = ((Wrd53.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_131;

DEFLABEL (label_130)
  ((Wrd53.pObj) [0]) = (Wrd54.Obj);

DEFLABEL (label_129)
  (Wrd65.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_5]));
  (Wrd66.Obj) = (current_block [OBJECT_19_0]);
  (Wrd73.Obj) = ((Wrd65.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 50)
    goto label_128;

DEFLABEL (label_127)
  ((Wrd65.pObj) [0]) = (Wrd66.Obj);

DEFLABEL (label_126)
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_6]));
  (Wrd78.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd87.Obj) = ((Wrd77.pObj) [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd88.uLng) == 50)
    goto label_125;

DEFLABEL (label_124)
  ((Wrd77.pObj) [0]) = (Wrd78.Obj);

DEFLABEL (label_123)
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_7]));
  (Wrd92.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd101.Obj) = ((Wrd91.pObj) [0]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if ((Wrd102.uLng) == 50)
    goto label_122;

DEFLABEL (label_121)
  ((Wrd91.pObj) [0]) = (Wrd92.Obj);

DEFLABEL (label_120)
  (Wrd105.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_8]));
  (Wrd106.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd115.Obj) = ((Wrd105.pObj) [0]);
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if ((Wrd116.uLng) == 50)
    goto label_119;

DEFLABEL (label_118)
  ((Wrd105.pObj) [0]) = (Wrd106.Obj);

DEFLABEL (label_117)
  (Wrd119.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_9]));
  (Wrd120.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd129.Obj) = ((Wrd119.pObj) [0]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if ((Wrd130.uLng) == 50)
    goto label_116;

DEFLABEL (label_115)
  ((Wrd119.pObj) [0]) = (Wrd120.Obj);

DEFLABEL (label_114)
  (Wrd133.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_10]));
  (Wrd134.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd143.Obj) = ((Wrd133.pObj) [0]);
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if ((Wrd144.uLng) == 50)
    goto label_113;

DEFLABEL (label_112)
  ((Wrd133.pObj) [0]) = (Wrd134.Obj);

DEFLABEL (label_111)
  (Wrd147.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_11]));
  (Wrd148.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd157.Obj) = ((Wrd147.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_110;

DEFLABEL (label_109)
  ((Wrd147.pObj) [0]) = (Wrd148.Obj);

DEFLABEL (label_108)
  (Wrd161.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_12]));
  (Wrd162.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd171.Obj) = ((Wrd161.pObj) [0]);
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd171.Obj));
  if ((Wrd172.uLng) == 50)
    goto label_107;

DEFLABEL (label_106)
  ((Wrd161.pObj) [0]) = (Wrd162.Obj);

DEFLABEL (label_105)
  (Wrd175.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_13]));
  (Wrd176.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd185.Obj) = ((Wrd175.pObj) [0]);
  (Wrd186.uLng) = (OBJECT_TYPE (Wrd185.Obj));
  if ((Wrd186.uLng) == 50)
    goto label_104;

DEFLABEL (label_103)
  ((Wrd175.pObj) [0]) = (Wrd176.Obj);

DEFLABEL (label_102)
  (Wrd189.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_14]));
  (Wrd190.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd199.Obj) = ((Wrd189.pObj) [0]);
  (Wrd200.uLng) = (OBJECT_TYPE (Wrd199.Obj));
  if ((Wrd200.uLng) == 50)
    goto label_101;

DEFLABEL (label_100)
  ((Wrd189.pObj) [0]) = (Wrd190.Obj);

DEFLABEL (label_99)
  (Wrd203.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_15]));
  (Wrd204.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd213.Obj) = ((Wrd203.pObj) [0]);
  (Wrd214.uLng) = (OBJECT_TYPE (Wrd213.Obj));
  if ((Wrd214.uLng) == 50)
    goto label_98;

DEFLABEL (label_97)
  ((Wrd203.pObj) [0]) = (Wrd204.Obj);

DEFLABEL (label_96)
  (Wrd217.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_16]));
  (Wrd218.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd227.Obj) = ((Wrd217.pObj) [0]);
  (Wrd228.uLng) = (OBJECT_TYPE (Wrd227.Obj));
  if ((Wrd228.uLng) == 50)
    goto label_95;

DEFLABEL (label_94)
  ((Wrd217.pObj) [0]) = (Wrd218.Obj);

DEFLABEL (label_93)
  (Wrd231.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_17]));
  (Wrd232.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd241.Obj) = ((Wrd231.pObj) [0]);
  (Wrd242.uLng) = (OBJECT_TYPE (Wrd241.Obj));
  if ((Wrd242.uLng) == 50)
    goto label_92;

DEFLABEL (label_91)
  ((Wrd231.pObj) [0]) = (Wrd232.Obj);

DEFLABEL (label_90)
  (Wrd245.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_18]));
  (Wrd246.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd255.Obj) = ((Wrd245.pObj) [0]);
  (Wrd256.uLng) = (OBJECT_TYPE (Wrd255.Obj));
  if ((Wrd256.uLng) == 50)
    goto label_89;

DEFLABEL (label_88)
  ((Wrd245.pObj) [0]) = (Wrd246.Obj);

DEFLABEL (label_87)
  (Wrd259.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_19]));
  (Wrd260.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd269.Obj) = ((Wrd259.pObj) [0]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if ((Wrd270.uLng) == 50)
    goto label_86;

DEFLABEL (label_85)
  ((Wrd259.pObj) [0]) = (Wrd260.Obj);

DEFLABEL (label_84)
  (Wrd273.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_20]));
  (Wrd274.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd283.Obj) = ((Wrd273.pObj) [0]);
  (Wrd284.uLng) = (OBJECT_TYPE (Wrd283.Obj));
  if ((Wrd284.uLng) == 50)
    goto label_83;

DEFLABEL (label_82)
  ((Wrd273.pObj) [0]) = (Wrd274.Obj);

DEFLABEL (label_81)
  (Wrd287.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_21]));
  (Wrd288.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd297.Obj) = ((Wrd287.pObj) [0]);
  (Wrd298.uLng) = (OBJECT_TYPE (Wrd297.Obj));
  if ((Wrd298.uLng) == 50)
    goto label_80;

DEFLABEL (label_79)
  ((Wrd287.pObj) [0]) = (Wrd288.Obj);

DEFLABEL (label_78)
  (Wrd301.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_22]));
  (Wrd302.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd311.Obj) = ((Wrd301.pObj) [0]);
  (Wrd312.uLng) = (OBJECT_TYPE (Wrd311.Obj));
  if ((Wrd312.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  ((Wrd301.pObj) [0]) = (Wrd302.Obj);

DEFLABEL (label_75)
  (Wrd315.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_23]));
  (Wrd316.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd325.Obj) = ((Wrd315.pObj) [0]);
  (Wrd326.uLng) = (OBJECT_TYPE (Wrd325.Obj));
  if ((Wrd326.uLng) == 50)
    goto label_74;

DEFLABEL (label_73)
  ((Wrd315.pObj) [0]) = (Wrd316.Obj);

DEFLABEL (label_72)
  (Wrd329.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_24]));
  (Wrd330.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd339.Obj) = ((Wrd329.pObj) [0]);
  (Wrd340.uLng) = (OBJECT_TYPE (Wrd339.Obj));
  if ((Wrd340.uLng) == 50)
    goto label_71;

DEFLABEL (label_70)
  ((Wrd329.pObj) [0]) = (Wrd330.Obj);

DEFLABEL (label_69)
  (Wrd343.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_25]));
  (Wrd344.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd353.Obj) = ((Wrd343.pObj) [0]);
  (Wrd354.uLng) = (OBJECT_TYPE (Wrd353.Obj));
  if ((Wrd354.uLng) == 50)
    goto label_68;

DEFLABEL (label_67)
  ((Wrd343.pObj) [0]) = (Wrd344.Obj);

DEFLABEL (label_66)
  (Wrd357.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_26]));
  (Wrd358.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd367.Obj) = ((Wrd357.pObj) [0]);
  (Wrd368.uLng) = (OBJECT_TYPE (Wrd367.Obj));
  if ((Wrd368.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  ((Wrd357.pObj) [0]) = (Wrd358.Obj);

DEFLABEL (label_63)
  (Wrd371.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_27]));
  (Wrd372.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd381.Obj) = ((Wrd371.pObj) [0]);
  (Wrd382.uLng) = (OBJECT_TYPE (Wrd381.Obj));
  if ((Wrd382.uLng) == 50)
    goto label_62;

DEFLABEL (label_61)
  ((Wrd371.pObj) [0]) = (Wrd372.Obj);

DEFLABEL (label_60)
  (Wrd385.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_28]));
  (Wrd386.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd395.Obj) = ((Wrd385.pObj) [0]);
  (Wrd396.uLng) = (OBJECT_TYPE (Wrd395.Obj));
  if ((Wrd396.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  ((Wrd385.pObj) [0]) = (Wrd386.Obj);

DEFLABEL (label_57)
  (Wrd399.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_29]));
  (Wrd400.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd409.Obj) = ((Wrd399.pObj) [0]);
  (Wrd410.uLng) = (OBJECT_TYPE (Wrd409.Obj));
  if ((Wrd410.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  ((Wrd399.pObj) [0]) = (Wrd400.Obj);

DEFLABEL (label_54)
  (Wrd413.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_30]));
  (Wrd414.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd423.Obj) = ((Wrd413.pObj) [0]);
  (Wrd424.uLng) = (OBJECT_TYPE (Wrd423.Obj));
  if ((Wrd424.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  ((Wrd413.pObj) [0]) = (Wrd414.Obj);

DEFLABEL (label_51)
  (Wrd427.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_31]));
  (Wrd428.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd437.Obj) = ((Wrd427.pObj) [0]);
  (Wrd438.uLng) = (OBJECT_TYPE (Wrd437.Obj));
  if ((Wrd438.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  ((Wrd427.pObj) [0]) = (Wrd428.Obj);

DEFLABEL (label_48)
  (Wrd441.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_32]));
  (Wrd442.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd451.Obj) = ((Wrd441.pObj) [0]);
  (Wrd452.uLng) = (OBJECT_TYPE (Wrd451.Obj));
  if ((Wrd452.uLng) == 50)
    goto label_47;

DEFLABEL (label_46)
  ((Wrd441.pObj) [0]) = (Wrd442.Obj);

DEFLABEL (label_45)
  (Wrd455.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_33]));
  (Wrd456.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd465.Obj) = ((Wrd455.pObj) [0]);
  (Wrd466.uLng) = (OBJECT_TYPE (Wrd465.Obj));
  if ((Wrd466.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  ((Wrd455.pObj) [0]) = (Wrd456.Obj);

DEFLABEL (label_42)
  (Wrd469.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_34]));
  (Wrd470.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd479.Obj) = ((Wrd469.pObj) [0]);
  (Wrd480.uLng) = (OBJECT_TYPE (Wrd479.Obj));
  if ((Wrd480.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd469.pObj) [0]) = (Wrd470.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_40]));

DEFLABEL (label_41)
  if ((Wrd479.Obj) == (Wrd470.Obj))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_39])), (Wrd469.pObj), (Wrd470.Obj));

DEFLABEL (label_36)
  goto label_39;

DEFLABEL (label_44)
  if ((Wrd465.Obj) == (Wrd456.Obj))
    goto label_43;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_38])), (Wrd455.pObj), (Wrd456.Obj));

DEFLABEL (label_35)
  goto label_42;

DEFLABEL (label_47)
  if ((Wrd451.Obj) == (Wrd442.Obj))
    goto label_46;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_37])), (Wrd441.pObj), (Wrd442.Obj));

DEFLABEL (label_34)
  goto label_45;

DEFLABEL (label_50)
  if ((Wrd437.Obj) == (Wrd428.Obj))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_36])), (Wrd427.pObj), (Wrd428.Obj));

DEFLABEL (label_33)
  goto label_48;

DEFLABEL (label_53)
  if ((Wrd423.Obj) == (Wrd414.Obj))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_35])), (Wrd413.pObj), (Wrd414.Obj));

DEFLABEL (label_32)
  goto label_51;

DEFLABEL (label_56)
  if ((Wrd409.Obj) == (Wrd400.Obj))
    goto label_55;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_34])), (Wrd399.pObj), (Wrd400.Obj));

DEFLABEL (label_31)
  goto label_54;

DEFLABEL (label_59)
  if ((Wrd395.Obj) == (Wrd386.Obj))
    goto label_58;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_33])), (Wrd385.pObj), (Wrd386.Obj));

DEFLABEL (label_30)
  goto label_57;

DEFLABEL (label_62)
  if ((Wrd381.Obj) == (Wrd372.Obj))
    goto label_61;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_32])), (Wrd371.pObj), (Wrd372.Obj));

DEFLABEL (label_29)
  goto label_60;

DEFLABEL (label_65)
  if ((Wrd367.Obj) == (Wrd358.Obj))
    goto label_64;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_31])), (Wrd357.pObj), (Wrd358.Obj));

DEFLABEL (label_28)
  goto label_63;

DEFLABEL (label_68)
  if ((Wrd353.Obj) == (Wrd344.Obj))
    goto label_67;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_30])), (Wrd343.pObj), (Wrd344.Obj));

DEFLABEL (label_27)
  goto label_66;

DEFLABEL (label_71)
  if ((Wrd339.Obj) == (Wrd330.Obj))
    goto label_70;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_29])), (Wrd329.pObj), (Wrd330.Obj));

DEFLABEL (label_26)
  goto label_69;

DEFLABEL (label_74)
  if ((Wrd325.Obj) == (Wrd316.Obj))
    goto label_73;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_28])), (Wrd315.pObj), (Wrd316.Obj));

DEFLABEL (label_25)
  goto label_72;

DEFLABEL (label_77)
  if ((Wrd311.Obj) == (Wrd302.Obj))
    goto label_76;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_27])), (Wrd301.pObj), (Wrd302.Obj));

DEFLABEL (label_24)
  goto label_75;

DEFLABEL (label_80)
  if ((Wrd297.Obj) == (Wrd288.Obj))
    goto label_79;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_26])), (Wrd287.pObj), (Wrd288.Obj));

DEFLABEL (label_23)
  goto label_78;

DEFLABEL (label_83)
  if ((Wrd283.Obj) == (Wrd274.Obj))
    goto label_82;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_25])), (Wrd273.pObj), (Wrd274.Obj));

DEFLABEL (label_22)
  goto label_81;

DEFLABEL (label_86)
  if ((Wrd269.Obj) == (Wrd260.Obj))
    goto label_85;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_24])), (Wrd259.pObj), (Wrd260.Obj));

DEFLABEL (label_21)
  goto label_84;

DEFLABEL (label_89)
  if ((Wrd255.Obj) == (Wrd246.Obj))
    goto label_88;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_23])), (Wrd245.pObj), (Wrd246.Obj));

DEFLABEL (label_20)
  goto label_87;

DEFLABEL (label_92)
  if ((Wrd241.Obj) == (Wrd232.Obj))
    goto label_91;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_22])), (Wrd231.pObj), (Wrd232.Obj));

DEFLABEL (label_19)
  goto label_90;

DEFLABEL (label_95)
  if ((Wrd227.Obj) == (Wrd218.Obj))
    goto label_94;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_21])), (Wrd217.pObj), (Wrd218.Obj));

DEFLABEL (label_18)
  goto label_93;

DEFLABEL (label_98)
  if ((Wrd213.Obj) == (Wrd204.Obj))
    goto label_97;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_20])), (Wrd203.pObj), (Wrd204.Obj));

DEFLABEL (label_17)
  goto label_96;

DEFLABEL (label_101)
  if ((Wrd199.Obj) == (Wrd190.Obj))
    goto label_100;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_19])), (Wrd189.pObj), (Wrd190.Obj));

DEFLABEL (label_16)
  goto label_99;

DEFLABEL (label_104)
  if ((Wrd185.Obj) == (Wrd176.Obj))
    goto label_103;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_18])), (Wrd175.pObj), (Wrd176.Obj));

DEFLABEL (label_15)
  goto label_102;

DEFLABEL (label_107)
  if ((Wrd171.Obj) == (Wrd162.Obj))
    goto label_106;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_17])), (Wrd161.pObj), (Wrd162.Obj));

DEFLABEL (label_14)
  goto label_105;

DEFLABEL (label_110)
  if ((Wrd157.Obj) == (Wrd148.Obj))
    goto label_109;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_16])), (Wrd147.pObj), (Wrd148.Obj));

DEFLABEL (label_13)
  goto label_108;

DEFLABEL (label_113)
  if ((Wrd143.Obj) == (Wrd134.Obj))
    goto label_112;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_15])), (Wrd133.pObj), (Wrd134.Obj));

DEFLABEL (label_12)
  goto label_111;

DEFLABEL (label_116)
  if ((Wrd129.Obj) == (Wrd120.Obj))
    goto label_115;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_14])), (Wrd119.pObj), (Wrd120.Obj));

DEFLABEL (label_11)
  goto label_114;

DEFLABEL (label_119)
  if ((Wrd115.Obj) == (Wrd106.Obj))
    goto label_118;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_13])), (Wrd105.pObj), (Wrd106.Obj));

DEFLABEL (label_10)
  goto label_117;

DEFLABEL (label_122)
  if ((Wrd101.Obj) == (Wrd92.Obj))
    goto label_121;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_12])), (Wrd91.pObj), (Wrd92.Obj));

DEFLABEL (label_9)
  goto label_120;

DEFLABEL (label_125)
  if ((Wrd87.Obj) == (Wrd78.Obj))
    goto label_124;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_11])), (Wrd77.pObj), (Wrd78.Obj));

DEFLABEL (label_8)
  goto label_123;

DEFLABEL (label_128)
  if ((Wrd73.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_127;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_10])), (Wrd65.pObj), (Wrd66.Obj));

DEFLABEL (label_7)
  goto label_126;

DEFLABEL (label_131)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_130;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_9])), (Wrd53.pObj), (Wrd54.Obj));

DEFLABEL (label_6)
  goto label_129;

DEFLABEL (label_134)
  if ((Wrd49.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_133;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_8])), (Wrd41.pObj), (Wrd42.Obj));

DEFLABEL (label_5)
  goto label_132;

DEFLABEL (label_137)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_136;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_7])), (Wrd29.pObj), (Wrd30.Obj));

DEFLABEL (label_4)
  goto label_135;

DEFLABEL (label_140)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_139;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_3)
  goto label_138;

DEFLABEL (label_143)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_142;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_141;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_7 9
#define LABEL_20_8 11
#define LABEL_20_9 13
#define LABEL_20_10 15
#define LABEL_20_11 17
#define LABEL_20_12 19
#define LABEL_20_13 21
#define LABEL_20_14 23
#define LABEL_20_15 25
#define LABEL_20_16 27
#define LABEL_20_18 29
#define LABEL_20_21 31
#define TAG_20_22 14
#define LABEL_20_19 33
#define TAG_20_20 15
#define LABEL_20_26 35
#define LABEL_20_27 37
#define LABEL_20_28 39
#define LABEL_20_29 41
#define LABEL_20_30 43
#define LABEL_20_31 45
#define LABEL_20_32 47
#define LABEL_20_33 49
#define LABEL_20_34 51
#define LABEL_20_35 53
#define LABEL_20_36 55
#define LABEL_20_37 57
#define LABEL_20_38 59
#define LABEL_20_39 61
#define LABEL_20_40 63
#define LABEL_20_41 65
#define LABEL_20_42 67
#define LABEL_20_43 69
#define LABEL_20_44 71
#define LABEL_20_45 73
#define LABEL_20_46 75
#define LABEL_20_24 77
#define TAG_20_25 37
#define LABEL_20_47 79
#define LABEL_20_48 81
#define LABEL_20_50 83
#define LABEL_20_52 85
#define LABEL_20_56 87
#define LABEL_20_54 89
#define LABEL_20_57 91
#define LABEL_20_62 93
#define LABEL_20_60 95
#define LABEL_20_63 97
#define ENVIRONMENT_LABEL_20_3 147
#define DEBUGGING_LABEL_20_2 146
#define OBJECT_20_1 145
#define OBJECT_20_0 144
#define EXECUTE_CACHE_20_66 99
#define EXECUTE_CACHE_20_65 101
#define EXECUTE_CACHE_20_64 103
#define EXECUTE_CACHE_20_61 105
#define EXECUTE_CACHE_20_59 107
#define EXECUTE_CACHE_20_58 109
#define EXECUTE_CACHE_20_55 111
#define EXECUTE_CACHE_20_53 113
#define EXECUTE_CACHE_20_51 115
#define EXECUTE_CACHE_20_49 117
#define EXECUTE_CACHE_20_23 119
#define EXECUTE_CACHE_20_17 121
#define FREE_REFERENCE_20_10 124
#define FREE_REFERENCE_20_9 125
#define FREE_REFERENCE_20_8 126
#define FREE_REFERENCE_20_7 127
#define FREE_REFERENCE_20_6 128
#define FREE_REFERENCE_20_5 129
#define FREE_REFERENCE_20_4 130
#define FREE_REFERENCE_20_3 131
#define FREE_REFERENCE_20_2 132
#define FREE_REFERENCE_20_1 133
#define FREE_REFERENCE_20_0 134
#define FREE_ASSIGNMENT_20_7 136
#define FREE_ASSIGNMENT_20_6 137
#define FREE_ASSIGNMENT_20_5 138
#define FREE_ASSIGNMENT_20_4 139
#define FREE_ASSIGNMENT_20_3 140
#define FREE_ASSIGNMENT_20_2 141
#define FREE_ASSIGNMENT_20_1 142
#define FREE_ASSIGNMENT_20_0 143
#define FREE_REFERENCES_LABEL_20_0 98
#define NUMBER_OF_LINKER_SECTIONS_20_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd366;
  machine_word Wrd365;
  machine_word Wrd357;
  machine_word Wrd349;
  machine_word Wrd348;
  machine_word Wrd347;
  machine_word Wrd346;
  machine_word Wrd345;
  machine_word Wrd344;
  machine_word Wrd340;
  machine_word Wrd339;
  machine_word Wrd330;
  machine_word Wrd329;
  machine_word Wrd317;
  machine_word Wrd322;
  machine_word Wrd321;
  machine_word Wrd318;
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
  machine_word Wrd97;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd69;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd32;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd7;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd63;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd95;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd101;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd88;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
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
      current_block = (Rpc - LABEL_20_4);
      goto compile_scode_internal_69;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_79;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto label_81;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto label_80;

    case 4:
      current_block = (Rpc - LABEL_20_8);
      goto label_71;

    case 5:
      current_block = (Rpc - LABEL_20_9);
      goto label_72;

    case 6:
      current_block = (Rpc - LABEL_20_10);
      goto label_73;

    case 7:
      current_block = (Rpc - LABEL_20_11);
      goto label_74;

    case 8:
      current_block = (Rpc - LABEL_20_12);
      goto label_75;

    case 9:
      current_block = (Rpc - LABEL_20_13);
      goto label_76;

    case 10:
      current_block = (Rpc - LABEL_20_14);
      goto label_77;

    case 11:
      current_block = (Rpc - LABEL_20_15);
      goto label_78;

    case 12:
      current_block = (Rpc - LABEL_20_16);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_20_18);
      goto label_82;

    case 14:
      current_block = (Rpc - LABEL_20_21);
      goto lambda_109;

    case 15:
      current_block = (Rpc - LABEL_20_19);
      goto swapB_108;

    case 16:
      current_block = (Rpc - LABEL_20_26);
      goto label_83;

    case 17:
      current_block = (Rpc - LABEL_20_27);
      goto label_84;

    case 18:
      current_block = (Rpc - LABEL_20_28);
      goto label_85;

    case 19:
      current_block = (Rpc - LABEL_20_29);
      goto label_86;

    case 20:
      current_block = (Rpc - LABEL_20_30);
      goto label_87;

    case 21:
      current_block = (Rpc - LABEL_20_31);
      goto label_88;

    case 22:
      current_block = (Rpc - LABEL_20_32);
      goto label_89;

    case 23:
      current_block = (Rpc - LABEL_20_33);
      goto label_90;

    case 24:
      current_block = (Rpc - LABEL_20_34);
      goto label_91;

    case 25:
      current_block = (Rpc - LABEL_20_35);
      goto label_92;

    case 26:
      current_block = (Rpc - LABEL_20_36);
      goto label_93;

    case 27:
      current_block = (Rpc - LABEL_20_37);
      goto label_94;

    case 28:
      current_block = (Rpc - LABEL_20_38);
      goto label_95;

    case 29:
      current_block = (Rpc - LABEL_20_39);
      goto label_96;

    case 30:
      current_block = (Rpc - LABEL_20_40);
      goto label_97;

    case 31:
      current_block = (Rpc - LABEL_20_41);
      goto label_98;

    case 32:
      current_block = (Rpc - LABEL_20_42);
      goto label_99;

    case 33:
      current_block = (Rpc - LABEL_20_43);
      goto label_100;

    case 34:
      current_block = (Rpc - LABEL_20_44);
      goto label_101;

    case 35:
      current_block = (Rpc - LABEL_20_45);
      goto label_102;

    case 36:
      current_block = (Rpc - LABEL_20_46);
      goto label_103;

    case 37:
      current_block = (Rpc - LABEL_20_24);
      goto lambda_110;

    case 38:
      current_block = (Rpc - LABEL_20_47);
      goto label_104;

    case 39:
      current_block = (Rpc - LABEL_20_48);
      goto continuation_14;

    case 40:
      current_block = (Rpc - LABEL_20_50);
      goto continuation_15;

    case 41:
      current_block = (Rpc - LABEL_20_52);
      goto continuation_16;

    case 42:
      current_block = (Rpc - LABEL_20_56);
      goto continuation_18;

    case 43:
      current_block = (Rpc - LABEL_20_54);
      goto continuation_17;

    case 44:
      current_block = (Rpc - LABEL_20_57);
      goto continuation_19;

    case 45:
      current_block = (Rpc - LABEL_20_62);
      goto continuation_21;

    case 46:
      current_block = (Rpc - LABEL_20_60);
      goto continuation_20;

    case 47:
      current_block = (Rpc - LABEL_20_63);
      goto label_105;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_scode_internal_107)
DEFLABEL (compile_scode_internal_69)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == (current_block [OBJECT_20_0]))
    goto label_149;
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_148)
  (Wrd8.Obj) = (Rsp [4]);
  if ((Wrd8.Obj) == (current_block [OBJECT_20_0]))
    goto label_112;
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_111;

DEFLABEL (label_112)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_111)
DEFLABEL (label_147)
  (Wrd11.Obj) = (Rsp [4]);
  if ((Wrd11.Obj) == (current_block [OBJECT_20_0]))
    goto label_114;
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_113;

DEFLABEL (label_114)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_113)
DEFLABEL (label_146)
  (Wrd14.Obj) = (Rsp [4]);
  if ((Wrd14.Obj) == (current_block [OBJECT_20_0]))
    goto label_116;
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_115;

DEFLABEL (label_116)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_115)
DEFLABEL (label_145)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_3]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_144;
  Wrd17 = Wrd21;

DEFLABEL (label_143)
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_142;
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_4]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_141;
  Wrd24 = Wrd28;

DEFLABEL (label_140)
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_139)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_3]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_138;
  Wrd30 = Wrd34;

DEFLABEL (label_137)
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_136;
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_5]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_135;
  Wrd37 = Wrd41;

DEFLABEL (label_134)
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_133)
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_3]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_132;
  Wrd43 = Wrd47;

DEFLABEL (label_131)
  if ((Wrd43.Obj) == ((SCHEME_OBJECT) 0))
    goto label_130;
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_6]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_129;
  Wrd50 = Wrd54;

DEFLABEL (label_128)
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_127)
  (Wrd57.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_3]));
  (Wrd60.Obj) = ((Wrd57.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_126;
  Wrd56 = Wrd60;

DEFLABEL (label_125)
  if ((Wrd56.Obj) == ((SCHEME_OBJECT) 0))
    goto label_124;
  (Wrd64.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_7]));
  (Wrd67.Obj) = ((Wrd64.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 50)
    goto label_123;
  Wrd63 = Wrd67;

DEFLABEL (label_122)
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_121)
  (Wrd72.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd70.pObj) = (& (Rhp [-1]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd70.pObj)));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd76.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd76.Obj);
  (Wrd74.pObj) = (& (Rhp [-1]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd74.pObj)));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd80.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_118;
  (Wrd7.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_117)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 10));
  (Wrd65.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_19])));
  Rhp += 7;
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd65.pObj)));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd48.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd46.pObj) = (& (Rhp [-1]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd46.pObj)));
  (Rsp [1]) = (Wrd47.Obj);
  (Wrd52.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd50.pObj) = (& (Rhp [-1]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd50.pObj)));
  (Rsp [4]) = (Wrd51.Obj);
  (Wrd56.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd54.pObj) = (& (Rhp [-1]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd54.pObj)));
  (Rsp [5]) = (Wrd55.Obj);
  (Wrd60.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd58.pObj) = (& (Rhp [-1]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd58.pObj)));
  (Rsp [6]) = (Wrd59.Obj);
  (Wrd64.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd62.pObj) = (& (Rhp [-1]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd62.pObj)));
  (Rsp [7]) = (Wrd63.Obj);
  Wrd43 = Wrd65;
  ((Wrd43.pObj) [2]) = (Wrd63.Obj);
  ((Wrd43.pObj) [3]) = (Wrd59.Obj);
  ((Wrd43.pObj) [4]) = (Wrd55.Obj);
  ((Wrd43.pObj) [5]) = (Wrd51.Obj);
  (Wrd32.Obj) = (Rsp [3]);
  ((Wrd43.pObj) [6]) = (Wrd32.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  ((Wrd43.pObj) [7]) = (Wrd29.Obj);
  ((Wrd43.pObj) [8]) = (Wrd47.Obj);
  (Rsp [14]) = (Wrd66.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_21])));
  Rhp += 5;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd20 = Wrd11;
  (Wrd21.Obj) = (Rsp [12]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [11]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [10]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [9]);
  ((Wrd20.pObj) [5]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [8]);
  ((Wrd20.pObj) [6]) = (Wrd13.Obj);
  (Rsp [15]) = (Wrd10.Obj);
  (Rsp [16]) = (Wrd66.Obj);
  Rsp = (& (Rsp [14]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_23]));

DEFLABEL (label_118)
  (Wrd68.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_8]));
  (Wrd71.Obj) = ((Wrd68.pObj) [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd72.uLng) == 50)
    goto label_120;
  Wrd67 = Wrd71;

DEFLABEL (label_119)
  (* (--Rsp)) = (Wrd67.Obj);
  goto label_117;

DEFLABEL (label_120)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_18])), (Wrd68.pObj));

DEFLABEL (label_82)
  (Wrd67.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_15])), (Wrd64.pObj));

DEFLABEL (label_78)
  (Wrd63.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_124)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_121;

DEFLABEL (label_126)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_14])), (Wrd57.pObj));

DEFLABEL (label_77)
  (Wrd56.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_129)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_13])), (Wrd51.pObj));

DEFLABEL (label_76)
  (Wrd50.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_130)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_127;

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_12])), (Wrd44.pObj));

DEFLABEL (label_75)
  (Wrd43.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_135)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_11])), (Wrd38.pObj));

DEFLABEL (label_74)
  (Wrd37.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_136)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_133;

DEFLABEL (label_138)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_10])), (Wrd31.pObj));

DEFLABEL (label_73)
  (Wrd30.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_141)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_9])), (Wrd25.pObj));

DEFLABEL (label_72)
  (Wrd24.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_142)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_139;

DEFLABEL (label_144)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_8])), (Wrd18.pObj));

DEFLABEL (label_71)
  (Wrd17.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_149)
  (Wrd89.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd92.Obj) = ((Wrd89.pObj) [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if ((Wrd93.uLng) == 50)
    goto label_156;
  Wrd88 = Wrd92;

DEFLABEL (label_155)
  if ((Wrd88.Obj) == ((SCHEME_OBJECT) 0))
    goto label_152;
  (Wrd96.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_2]));
  (Wrd99.Obj) = ((Wrd96.pObj) [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd100.uLng) == 50)
    goto label_151;
  Wrd95 = Wrd99;

DEFLABEL (label_150)
  (* (--Rsp)) = (Wrd95.Obj);
  goto label_148;

DEFLABEL (label_151)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_7])), (Wrd96.pObj));

DEFLABEL (label_80)
  (Wrd95.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_152)
  (Wrd102.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_1]));
  (Wrd105.Obj) = ((Wrd102.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_154;
  Wrd101 = Wrd105;

DEFLABEL (label_153)
  (* (--Rsp)) = (Wrd101.Obj);
  goto label_148;

DEFLABEL (label_154)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_6])), (Wrd102.pObj));

DEFLABEL (label_81)
  (Wrd101.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_5])), (Wrd89.pObj));

DEFLABEL (label_79)
  (Wrd88.Obj) = Rvl;
  goto label_155;

DEFLABEL (lambda_109)
  CLOSURE_HEADER (LABEL_20_21);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_24])));
  Rhp += 4;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd23 = Wrd10;
  (Wrd26.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd23.pObj) [2]) = (Wrd26.Obj);
  (Wrd22.Obj) = ((Wrd6.pObj) [4]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [5]);
  ((Wrd23.pObj) [4]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [6]);
  ((Wrd23.pObj) [5]) = (Wrd14.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (swapB_108)
  CLOSURE_HEADER (LABEL_20_19);

DEFLABEL (swapB_66)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_8]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_219;

DEFLABEL (label_218)
  Wrd5 = Wrd9;

DEFLABEL (label_217)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_216;

DEFLABEL (label_215)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_214)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [8]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_213;

DEFLABEL (label_212)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_211)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_9]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_210;

DEFLABEL (label_209)
  Wrd57 = Wrd61;

DEFLABEL (label_208)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_207;

DEFLABEL (label_206)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_205)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [7]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_204;

DEFLABEL (label_203)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_202)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_10]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_201;

DEFLABEL (label_200)
  Wrd109 = Wrd113;

DEFLABEL (label_199)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_198;

DEFLABEL (label_197)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_196)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [6]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_195;

DEFLABEL (label_194)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_193)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_7]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_192;

DEFLABEL (label_191)
  Wrd161 = Wrd165;

DEFLABEL (label_190)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_189;

DEFLABEL (label_188)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_187)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [5]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_186;

DEFLABEL (label_185)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_184)
  (Wrd214.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_6]));
  (Wrd217.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if ((Wrd218.uLng) == 50)
    goto label_183;

DEFLABEL (label_182)
  Wrd213 = Wrd217;

DEFLABEL (label_181)
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd225.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_4]));
  (Wrd226.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd235.Obj) = ((Wrd225.pObj) [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if ((Wrd236.uLng) == 50)
    goto label_180;

DEFLABEL (label_179)
  ((Wrd225.pObj) [0]) = (Wrd226.Obj);

DEFLABEL (label_178)
  (Wrd240.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd243.Obj) = ((Wrd242.pObj) [4]);
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (* (--Rsp)) = (Wrd245.Obj);
  ((Wrd244.pObj) [0]) = (Wrd240.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd253.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_4]));
  (Wrd261.Obj) = ((Wrd253.pObj) [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd262.uLng) == 50)
    goto label_177;

DEFLABEL (label_176)
  ((Wrd253.pObj) [0]) = (Wrd245.Obj);

DEFLABEL (label_175)
  (Wrd266.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_5]));
  (Wrd269.Obj) = ((Wrd266.pObj) [0]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if ((Wrd270.uLng) == 50)
    goto label_174;

DEFLABEL (label_173)
  Wrd265 = Wrd269;

DEFLABEL (label_172)
  (* (--Rsp)) = (Wrd265.Obj);
  (Wrd277.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_5]));
  (Wrd278.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd287.Obj) = ((Wrd277.pObj) [0]);
  (Wrd288.uLng) = (OBJECT_TYPE (Wrd287.Obj));
  if ((Wrd288.uLng) == 50)
    goto label_171;

DEFLABEL (label_170)
  ((Wrd277.pObj) [0]) = (Wrd278.Obj);

DEFLABEL (label_169)
  (Wrd292.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd292.Obj);
  (Wrd293.Obj) = (Rsp [1]);
  (Wrd294.pObj) = (OBJECT_ADDRESS (Wrd293.Obj));
  (Wrd295.Obj) = ((Wrd294.pObj) [3]);
  (Wrd296.pObj) = (OBJECT_ADDRESS (Wrd295.Obj));
  (Wrd297.Obj) = ((Wrd296.pObj) [0]);
  (* (--Rsp)) = (Wrd297.Obj);
  ((Wrd296.pObj) [0]) = (Wrd292.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd305.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_5]));
  (Wrd313.Obj) = ((Wrd305.pObj) [0]);
  (Wrd314.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if ((Wrd314.uLng) == 50)
    goto label_168;

DEFLABEL (label_167)
  ((Wrd305.pObj) [0]) = (Wrd297.Obj);

DEFLABEL (label_166)
  (Wrd318.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_4]));
  (Wrd321.Obj) = ((Wrd318.pObj) [0]);
  (Wrd322.uLng) = (OBJECT_TYPE (Wrd321.Obj));
  if ((Wrd322.uLng) == 50)
    goto label_165;

DEFLABEL (label_164)
  Wrd317 = Wrd321;

DEFLABEL (label_163)
  (* (--Rsp)) = (Wrd317.Obj);
  (Wrd329.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_6]));
  (Wrd330.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd339.Obj) = ((Wrd329.pObj) [0]);
  (Wrd340.uLng) = (OBJECT_TYPE (Wrd339.Obj));
  if ((Wrd340.uLng) == 50)
    goto label_162;

DEFLABEL (label_161)
  ((Wrd329.pObj) [0]) = (Wrd330.Obj);

DEFLABEL (label_160)
  (Wrd344.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd344.Obj);
  (Wrd345.Obj) = (Rsp [1]);
  (Wrd346.pObj) = (OBJECT_ADDRESS (Wrd345.Obj));
  (Wrd347.Obj) = ((Wrd346.pObj) [2]);
  (Wrd348.pObj) = (OBJECT_ADDRESS (Wrd347.Obj));
  (Wrd349.Obj) = ((Wrd348.pObj) [0]);
  (* (--Rsp)) = (Wrd349.Obj);
  ((Wrd348.pObj) [0]) = (Wrd344.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd357.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_6]));
  (Wrd365.Obj) = ((Wrd357.pObj) [0]);
  (Wrd366.uLng) = (OBJECT_TYPE (Wrd365.Obj));
  if ((Wrd366.uLng) == 50)
    goto label_159;

DEFLABEL (label_158)
  ((Wrd357.pObj) [0]) = (Wrd349.Obj);

DEFLABEL (label_157)
  Rvl = (current_block [OBJECT_20_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_159)
  if ((Wrd365.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_158;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_46])), (Wrd357.pObj), (Wrd349.Obj));

DEFLABEL (label_103)
  goto label_157;

DEFLABEL (label_162)
  if ((Wrd339.Obj) == (Wrd330.Obj))
    goto label_161;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_45])), (Wrd329.pObj), (Wrd330.Obj));

DEFLABEL (label_102)
  goto label_160;

DEFLABEL (label_165)
  if ((Wrd321.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_164;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_20_44])), (Wrd318.pObj));

DEFLABEL (label_101)
  (Wrd317.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_168)
  if ((Wrd313.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_167;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_43])), (Wrd305.pObj), (Wrd297.Obj));

DEFLABEL (label_100)
  goto label_166;

DEFLABEL (label_171)
  if ((Wrd287.Obj) == (Wrd278.Obj))
    goto label_170;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_42])), (Wrd277.pObj), (Wrd278.Obj));

DEFLABEL (label_99)
  goto label_169;

DEFLABEL (label_174)
  if ((Wrd269.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_173;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_20_41])), (Wrd266.pObj));

DEFLABEL (label_98)
  (Wrd265.Obj) = Rvl;
  goto label_172;

DEFLABEL (label_177)
  if ((Wrd261.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_176;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_40])), (Wrd253.pObj), (Wrd245.Obj));

DEFLABEL (label_97)
  goto label_175;

DEFLABEL (label_180)
  if ((Wrd235.Obj) == (Wrd226.Obj))
    goto label_179;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_39])), (Wrd225.pObj), (Wrd226.Obj));

DEFLABEL (label_96)
  goto label_178;

DEFLABEL (label_183)
  if ((Wrd217.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_182;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_20_38])), (Wrd214.pObj));

DEFLABEL (label_95)
  (Wrd213.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_186)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_185;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_37])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_94)
  goto label_184;

DEFLABEL (label_189)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_188;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_36])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_93)
  goto label_187;

DEFLABEL (label_192)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_191;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_20_35])), (Wrd162.pObj));

DEFLABEL (label_92)
  (Wrd161.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_195)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_194;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_34])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_91)
  goto label_193;

DEFLABEL (label_198)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_197;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_33])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_90)
  goto label_196;

DEFLABEL (label_201)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_200;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_20_32])), (Wrd110.pObj));

DEFLABEL (label_89)
  (Wrd109.Obj) = Rvl;
  goto label_199;

DEFLABEL (label_204)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_203;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_31])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_88)
  goto label_202;

DEFLABEL (label_207)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_206;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_30])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_87)
  goto label_205;

DEFLABEL (label_210)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_209;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_20_29])), (Wrd58.pObj));

DEFLABEL (label_86)
  (Wrd57.Obj) = Rvl;
  goto label_208;

DEFLABEL (label_213)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_212;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_28])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_85)
  goto label_211;

DEFLABEL (label_216)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_215;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_27])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_84)
  goto label_214;

DEFLABEL (label_219)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_218;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_20_26])), (Wrd6.pObj));

DEFLABEL (label_83)
  (Wrd5.Obj) = Rvl;
  goto label_217;

DEFLABEL (lambda_110)
  CLOSURE_HEADER (LABEL_20_24);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_20_7]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Wrd15.Obj) = ((Wrd5.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_227;

DEFLABEL (label_226)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_225)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_48]))));
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_49]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_20_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_51]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_20_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_53]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_55]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_20_54);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_224;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_56]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_59]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_20_56);

DEFLABEL (label_224)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_57]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_58]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_20_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_61]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_20_60);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_223;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_62]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_66]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_20_62);

DEFLABEL (label_223)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_222;
  Wrd18 = Wrd22;

DEFLABEL (label_221)
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_220;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [5]);
  (Rsp [0]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_65]));

DEFLABEL (label_220)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [5]);
  (Rsp [0]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_64]));

DEFLABEL (label_222)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_63])), (Wrd19.pObj));

DEFLABEL (label_105)
  (Wrd18.Obj) = Rvl;
  goto label_221;

DEFLABEL (label_227)
  if ((Wrd15.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_226;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_20_47])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_104)
  goto label_225;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define TAG_21_8 2
#define ENVIRONMENT_LABEL_21_3 16
#define DEBUGGING_LABEL_21_2 15
#define EXECUTE_CACHE_21_9 9
#define EXECUTE_CACHE_21_6 11
#define FREE_REFERENCE_21_0 14
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_21_4);
      goto compiler_phase_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_phase_5)
DEFLABEL (compiler_phase_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_21_7])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd15 = Wrd14;
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_8;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_21_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define EXECUTE_CACHE_22_6 7
#define FREE_REFERENCE_22_0 10
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_22_4);
      goto compiler_superphase_0;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_superphase_4)
DEFLABEL (compiler_superphase_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 14
#define DEBUGGING_LABEL_23_2 13
#define EXECUTE_CACHE_23_7 7
#define EXECUTE_CACHE_23_6 9
#define FREE_REFERENCE_23_0 12
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_23_4);
      goto compiler_subphase_0;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_subphase_4)
DEFLABEL (compiler_subphase_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (label_5)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_7 9
#define LABEL_24_8 11
#define LABEL_24_10 13
#define LABEL_24_11 15
#define LABEL_24_12 17
#define LABEL_24_13 19
#define LABEL_24_15 21
#define LABEL_24_9 23
#define LABEL_24_16 25
#define TAG_24_17 11
#define ENVIRONMENT_LABEL_24_3 39
#define DEBUGGING_LABEL_24_2 38
#define OBJECT_24_0 37
#define EXECUTE_CACHE_24_19 27
#define EXECUTE_CACHE_24_18 29
#define EXECUTE_CACHE_24_14 31
#define FREE_REFERENCE_24_2 34
#define FREE_REFERENCE_24_1 35
#define FREE_REFERENCE_24_0 36
#define FREE_REFERENCES_LABEL_24_0 26
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd32;
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
      current_block = (Rpc - LABEL_24_4);
      goto compiler_phase_visible_9;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_24_10);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_24_11);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_24_12);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_24_13);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_24_15);
      goto lambda_1;

    case 10:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_24_16);
      goto lambda_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_phase_visible_19)
DEFLABEL (compiler_phase_visible_9)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_36;
  Wrd5 = Wrd9;

DEFLABEL (label_35)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd32.Obj);
  Rdl = (& (Rsp [3]));
  goto lambda_1;

DEFLABEL (label_22)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_34;
  Wrd12 = Wrd16;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_2]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_32;
  Wrd18 = Wrd22;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.pObj) = (& (Rsp [3]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  Rdl = (& (Rsp [1]));
  goto lambda_1;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_30;
  Wrd9 = Wrd13;

DEFLABEL (label_29)
  Wrd8 = Wrd9;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_28;
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_28;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = ((Wrd24.Lng) - (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd23.Lng)))
    goto label_28;
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_27)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_2]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_26;
  Wrd29 = Wrd33;

DEFLABEL (label_25)
  Wrd28 = Wrd29;
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_24;
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_24;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd44.Lng) - (Wrd46.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd43.Lng)))
    goto label_24;
  (Wrd47.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_23)
  (Wrd48.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_24_9);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_12])), (Wrd30.pObj));

DEFLABEL (label_16)
  (Wrd29.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_10])), (Wrd10.pObj));

DEFLABEL (label_14)
  (Wrd9.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_7])), (Wrd19.pObj));

DEFLABEL (label_13)
  (Wrd18.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_6])), (Wrd13.pObj));

DEFLABEL (label_12)
  (Wrd12.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_5])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_35;

DEFLABEL (lambda_20)
DEFLABEL (lambda_1)
  DLINK_INTERRUPT_CHECK (25, LABEL_24_15);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_16])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd13.Obj) = ((Wrd6.pObj) [0]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_18]));

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_24_16);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_19]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_9 9
#define TAG_25_10 3
#define LABEL_25_12 11
#define LABEL_25_15 13
#define LABEL_25_16 15
#define LABEL_25_7 17
#define TAG_25_8 7
#define LABEL_25_19 19
#define LABEL_25_20 21
#define LABEL_25_21 23
#define LABEL_25_13 25
#define TAG_25_14 11
#define LABEL_25_17 27
#define LABEL_25_23 29
#define LABEL_25_25 31
#define LABEL_25_26 33
#define LABEL_25_27 35
#define LABEL_25_28 37
#define LABEL_25_29 39
#define LABEL_25_30 41
#define LABEL_25_31 43
#define LABEL_25_32 45
#define LABEL_25_33 47
#define LABEL_25_34 49
#define LABEL_25_35 51
#define ENVIRONMENT_LABEL_25_3 73
#define DEBUGGING_LABEL_25_2 72
#define OBJECT_25_1 71
#define OBJECT_25_0 70
#define EXECUTE_CACHE_25_24 53
#define EXECUTE_CACHE_25_22 55
#define EXECUTE_CACHE_25_18 57
#define EXECUTE_CACHE_25_11 59
#define FREE_REFERENCE_25_3 62
#define FREE_REFERENCE_25_2 63
#define FREE_REFERENCE_25_1 64
#define FREE_REFERENCE_25_0 65
#define FREE_ASSIGNMENT_25_2 67
#define FREE_ASSIGNMENT_25_1 68
#define FREE_ASSIGNMENT_25_0 69
#define FREE_REFERENCES_LABEL_25_0 52
#define NUMBER_OF_LINKER_SECTIONS_25_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd8;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_25_4);
      goto compiler_phase_invisible_27;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_29;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_30;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto lambda_48;

    case 4:
      current_block = (Rpc - LABEL_25_12);
      goto label_31;

    case 5:
      current_block = (Rpc - LABEL_25_15);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_25_16);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_25_7);
      goto swapB_47;

    case 8:
      current_block = (Rpc - LABEL_25_19);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_25_20);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_25_21);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_25_13);
      goto lambda_49;

    case 12:
      current_block = (Rpc - LABEL_25_17);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_25_23);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_25_25);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_25_26);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_25_27);
      goto label_37;

    case 17:
      current_block = (Rpc - LABEL_25_28);
      goto continuation_7;

    case 18:
      current_block = (Rpc - LABEL_25_29);
      goto label_38;

    case 19:
      current_block = (Rpc - LABEL_25_30);
      goto label_39;

    case 20:
      current_block = (Rpc - LABEL_25_31);
      goto label_40;

    case 21:
      current_block = (Rpc - LABEL_25_32);
      goto label_41;

    case 22:
      current_block = (Rpc - LABEL_25_33);
      goto label_42;

    case 23:
      current_block = (Rpc - LABEL_25_34);
      goto label_43;

    case 24:
      current_block = (Rpc - LABEL_25_35);
      goto label_44;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_phase_invisible_46)
DEFLABEL (compiler_phase_invisible_27)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_53;
  Wrd6 = Wrd10;

DEFLABEL (label_52)
  Wrd5 = Wrd6;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_51;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd17.Lng) = ((Wrd18.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_51;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_50)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_7])));
  Rhp += 1;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-1]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd31.pObj)));
  (Rsp [1]) = (Wrd32.Obj);
  ((Wrd34.pObj) [2]) = (Wrd32.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_9])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [2]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Rsp [2]) = (Wrd35.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  (Rsp [0]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_11]));

DEFLABEL (label_51)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_5])), (Wrd7.pObj));

DEFLABEL (label_29)
  (Wrd6.Obj) = Rvl;
  goto label_52;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_25_9);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_81;
  Wrd5 = Wrd9;

DEFLABEL (label_80)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_55;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_13])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  Wrd18 = Wrd12;
  goto label_54;

DEFLABEL (label_55)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd18.Obj) = ((Wrd38.pObj) [2]);

DEFLABEL (label_54)
DEFLABEL (label_79)
  (Rsp [0]) = (Wrd18.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_78;
  Wrd20 = Wrd24;

DEFLABEL (label_77)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_76;
  if ((Wrd20.Obj) == (current_block [OBJECT_25_0]))
    goto label_57;

DEFLABEL (label_56)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_57)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_17]))));
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_24]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_25_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_25_25);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_25_26);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_75;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_75;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_75;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_74)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_28]))));
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_24]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_25_28);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_73;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_73;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_73;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_72)
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_2]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_71;
  Wrd20 = Wrd24;

DEFLABEL (label_70)
  Wrd19 = Wrd20;
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_69;
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_69;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd35.Lng) = ((Wrd37.Lng) + (Wrd38.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd35.Lng)))
    goto label_69;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd35.Lng));

DEFLABEL (label_68)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_1]));
  (Wrd47.Obj) = ((Wrd39.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd39.pObj) [0]) = (Wrd31.Obj);

DEFLABEL (label_65)
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_3]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_64;
  Wrd52 = Wrd56;

DEFLABEL (label_63)
  Wrd51 = Wrd52;
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 26))
    goto label_62;
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd66.uLng) == 26))
    goto label_62;
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  (Wrd67.Lng) = ((Wrd69.Lng) + (Wrd70.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd67.Lng)))
    goto label_62;
  (Wrd63.Obj) = (LONG_TO_FIXNUM (Wrd67.Lng));

DEFLABEL (label_61)
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_2]));
  (Wrd79.Obj) = ((Wrd71.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd71.pObj) [0]) = (Wrd63.Obj);

DEFLABEL (label_58)
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_60)
  if ((Wrd79.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_35])), (Wrd71.pObj), (Wrd63.Obj));

DEFLABEL (label_44)
  goto label_58;

DEFLABEL (label_62)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_34]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_43)
  (Wrd63.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_33])), (Wrd53.pObj));

DEFLABEL (label_42)
  (Wrd52.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_67)
  if ((Wrd47.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_32])), (Wrd39.pObj), (Wrd31.Obj));

DEFLABEL (label_41)
  goto label_65;

DEFLABEL (label_69)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_31]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_40)
  (Wrd31.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_30])), (Wrd21.pObj));

DEFLABEL (label_39)
  (Wrd20.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_76)
  (Wrd27.Obj) = (current_block [OBJECT_25_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_16]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_57;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_15])), (Wrd21.pObj));

DEFLABEL (label_32)
  (Wrd20.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_12])), (Wrd6.pObj));

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_80;

DEFLABEL (swapB_47)
  CLOSURE_HEADER (LABEL_25_7);

DEFLABEL (swapB_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_90;

DEFLABEL (label_89)
  Wrd5 = Wrd9;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_87;

DEFLABEL (label_86)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_85)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_84;

DEFLABEL (label_83)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_82)
  Rvl = (current_block [OBJECT_25_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_84)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_83;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_21])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_36)
  goto label_82;

DEFLABEL (label_87)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_86;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_20])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_35)
  goto label_85;

DEFLABEL (label_90)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_89;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_25_19])), (Wrd6.pObj));

DEFLABEL (label_34)
  (Wrd5.Obj) = Rvl;
  goto label_88;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_25_13);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_22]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define TAG_26_6 1
#define LABEL_26_8 7
#define LABEL_26_10 9
#define LABEL_26_11 11
#define LABEL_26_12 13
#define LABEL_26_13 15
#define LABEL_26_15 17
#define LABEL_26_17 19
#define LABEL_26_18 21
#define LABEL_26_19 23
#define ENVIRONMENT_LABEL_26_3 38
#define DEBUGGING_LABEL_26_2 37
#define OBJECT_26_3 36
#define OBJECT_26_2 35
#define OBJECT_26_1 34
#define OBJECT_26_0 33
#define EXECUTE_CACHE_26_16 25
#define EXECUTE_CACHE_26_14 27
#define EXECUTE_CACHE_26_9 29
#define EXECUTE_CACHE_26_7 31
#define FREE_REFERENCES_LABEL_26_0 24
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_26_4);
      goto compiler_time_report_10;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_26_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_26_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_26_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_26_13);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_26_15);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_26_17);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_26_18);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_26_19);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_time_report_13)
DEFLABEL (compiler_time_report_10)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_26_5);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_13);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_3)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_26_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_19]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_26_19);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_7)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_26_17);
  (Wrd5.Obj) = (current_block [OBJECT_26_3]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define ENVIRONMENT_LABEL_27_3 17
#define DEBUGGING_LABEL_27_2 16
#define OBJECT_27_0 15
#define EXECUTE_CACHE_27_9 9
#define EXECUTE_CACHE_27_8 11
#define EXECUTE_CACHE_27_6 13
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_27_4);
      goto phase_fg_generation_2;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_fg_generation_5)
DEFLABEL (phase_fg_generation_2)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_27_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_7);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_9 7
#define LABEL_28_10 9
#define LABEL_28_11 11
#define LABEL_28_12 13
#define LABEL_28_7 15
#define LABEL_28_14 17
#define LABEL_28_15 19
#define LABEL_28_8 21
#define ENVIRONMENT_LABEL_28_3 37
#define DEBUGGING_LABEL_28_2 36
#define OBJECT_28_1 35
#define OBJECT_28_0 34
#define EXECUTE_CACHE_28_13 23
#define EXECUTE_CACHE_28_6 25
#define FREE_REFERENCE_28_1 28
#define FREE_REFERENCE_28_0 29
#define FREE_ASSIGNMENT_28_2 31
#define FREE_ASSIGNMENT_28_1 32
#define FREE_ASSIGNMENT_28_0 33
#define FREE_REFERENCES_LABEL_28_0 22
#define NUMBER_OF_LINKER_SECTIONS_28_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_28_4);
      goto phase_canonicalize_scode_5;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto lambda_4;

    case 2:
      current_block = (Rpc - LABEL_28_9);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_28_10);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_28_11);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_28_12);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_28_7);
      goto lambda_0;

    case 7:
      current_block = (Rpc - LABEL_28_14);
      goto label_11;

    case 8:
      current_block = (Rpc - LABEL_28_15);
      goto label_12;

    case 9:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_canonicalize_scode_14)
DEFLABEL (phase_canonicalize_scode_5)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (lambda_15)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_28_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_27;
  Wrd10 = Wrd14;

DEFLABEL (label_26)
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_19;
  Wrd17 = Wrd21;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_8);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_12])), (Wrd18.pObj));

DEFLABEL (label_8)
  (Wrd17.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_1]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_25;
  Wrd23 = Wrd27;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_0]));
  (Wrd30.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd39.Obj) = ((Wrd29.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd29.pObj) [0]) = (Wrd30.Obj);

DEFLABEL (label_21)
  (Wrd44.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd44.Obj);
  goto label_17;

DEFLABEL (label_23)
  if ((Wrd39.Obj) == (Wrd30.Obj))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_11])), (Wrd29.pObj), (Wrd30.Obj));

DEFLABEL (label_10)
  goto label_21;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_10])), (Wrd24.pObj));

DEFLABEL (label_9)
  (Wrd23.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_9])), (Wrd11.pObj));

DEFLABEL (label_7)
  (Wrd10.Obj) = Rvl;
  goto label_26;

DEFLABEL (lambda_16)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_28_7);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_1]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_31)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_28_2]));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_28_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_12)
  goto label_28;

DEFLABEL (label_33)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_28_14])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_11)
  goto label_31;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define LABEL_29_8 9
#define LABEL_29_9 11
#define LABEL_29_10 13
#define LABEL_29_11 15
#define LABEL_29_12 17
#define LABEL_29_13 19
#define LABEL_29_14 21
#define LABEL_29_16 23
#define LABEL_29_17 25
#define LABEL_29_18 27
#define LABEL_29_19 29
#define LABEL_29_21 31
#define LABEL_29_22 33
#define LABEL_29_24 35
#define LABEL_29_15 37
#define LABEL_29_25 39
#define LABEL_29_26 41
#define LABEL_29_28 43
#define LABEL_29_31 45
#define LABEL_29_30 47
#define LABEL_29_35 49
#define LABEL_29_36 51
#define LABEL_29_27 53
#define LABEL_29_37 55
#define LABEL_29_38 57
#define LABEL_29_40 59
#define LABEL_29_44 61
#define LABEL_29_46 63
#define LABEL_29_47 65
#define LABEL_29_33 67
#define LABEL_29_51 69
#define LABEL_29_42 71
#define LABEL_29_52 73
#define LABEL_29_53 75
#define LABEL_29_54 77
#define LABEL_29_55 79
#define LABEL_29_56 81
#define LABEL_29_43 83
#define LABEL_29_58 85
#define LABEL_29_39 87
#define LABEL_29_60 89
#define LABEL_29_48 91
#define ENVIRONMENT_LABEL_29_3 152
#define DEBUGGING_LABEL_29_2 151
#define OBJECT_29_7 150
#define OBJECT_29_6 149
#define OBJECT_29_5 148
#define OBJECT_29_4 147
#define OBJECT_29_3 146
#define OBJECT_29_2 145
#define OBJECT_29_1 144
#define OBJECT_29_0 143
#define EXECUTE_CACHE_29_61 93
#define EXECUTE_CACHE_29_59 95
#define EXECUTE_CACHE_29_50 97
#define EXECUTE_CACHE_29_49 99
#define EXECUTE_CACHE_29_45 101
#define EXECUTE_CACHE_29_41 103
#define EXECUTE_CACHE_29_34 105
#define EXECUTE_CACHE_29_32 107
#define EXECUTE_CACHE_29_29 109
#define EXECUTE_CACHE_29_57 111
#define EXECUTE_CACHE_29_23 113
#define EXECUTE_CACHE_29_20 115
#define EXECUTE_CACHE_29_6 117
#define FREE_REFERENCE_29_7 120
#define FREE_REFERENCE_29_6 121
#define FREE_REFERENCE_29_5 122
#define FREE_REFERENCE_29_4 123
#define FREE_REFERENCE_29_3 124
#define FREE_REFERENCE_29_2 125
#define FREE_REFERENCE_29_1 126
#define FREE_REFERENCE_29_0 127
#define FREE_ASSIGNMENT_29_13 129
#define FREE_ASSIGNMENT_29_12 130
#define FREE_ASSIGNMENT_29_11 131
#define FREE_ASSIGNMENT_29_10 132
#define FREE_ASSIGNMENT_29_9 133
#define FREE_ASSIGNMENT_29_8 134
#define FREE_ASSIGNMENT_29_7 135
#define FREE_ASSIGNMENT_29_6 136
#define FREE_ASSIGNMENT_29_5 137
#define FREE_ASSIGNMENT_29_4 138
#define FREE_ASSIGNMENT_29_3 139
#define FREE_ASSIGNMENT_29_2 140
#define FREE_ASSIGNMENT_29_1 141
#define FREE_ASSIGNMENT_29_0 142
#define FREE_REFERENCES_LABEL_29_0 92
#define NUMBER_OF_LINKER_SECTIONS_29_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd36;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd60;
  machine_word Wrd111;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd138;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd117;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd104;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd103;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_29_4);
      goto phase_translate_scode_23;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto lambda_22;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_29_8);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_29_9);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_29_10);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_29_11);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_29_12);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_29_13);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_29_14);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_29_16);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_29_17);
      goto label_35;

    case 12:
      current_block = (Rpc - LABEL_29_18);
      goto label_36;

    case 13:
      current_block = (Rpc - LABEL_29_19);
      goto label_34;

    case 14:
      current_block = (Rpc - LABEL_29_21);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_29_22);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_29_24);
      goto label_53;

    case 17:
      current_block = (Rpc - LABEL_29_15);
      goto continuation_2;

    case 18:
      current_block = (Rpc - LABEL_29_25);
      goto label_37;

    case 19:
      current_block = (Rpc - LABEL_29_26);
      goto label_38;

    case 20:
      current_block = (Rpc - LABEL_29_28);
      goto label_40;

    case 21:
      current_block = (Rpc - LABEL_29_31);
      goto label_39;

    case 22:
      current_block = (Rpc - LABEL_29_30);
      goto continuation_3;

    case 23:
      current_block = (Rpc - LABEL_29_35);
      goto continuation_15;

    case 24:
      current_block = (Rpc - LABEL_29_36);
      goto label_51;

    case 25:
      current_block = (Rpc - LABEL_29_27);
      goto continuation_13;

    case 26:
      current_block = (Rpc - LABEL_29_37);
      goto label_41;

    case 27:
      current_block = (Rpc - LABEL_29_38);
      goto label_42;

    case 28:
      current_block = (Rpc - LABEL_29_40);
      goto label_44;

    case 29:
      current_block = (Rpc - LABEL_29_44);
      goto label_43;

    case 30:
      current_block = (Rpc - LABEL_29_46);
      goto continuation_7;

    case 31:
      current_block = (Rpc - LABEL_29_47);
      goto continuation_6;

    case 32:
      current_block = (Rpc - LABEL_29_33);
      goto continuation_5;

    case 33:
      current_block = (Rpc - LABEL_29_51);
      goto continuation_21;

    case 34:
      current_block = (Rpc - LABEL_29_42);
      goto continuation_17;

    case 35:
      current_block = (Rpc - LABEL_29_52);
      goto label_45;

    case 36:
      current_block = (Rpc - LABEL_29_53);
      goto label_46;

    case 37:
      current_block = (Rpc - LABEL_29_54);
      goto label_47;

    case 38:
      current_block = (Rpc - LABEL_29_55);
      goto label_48;

    case 39:
      current_block = (Rpc - LABEL_29_56);
      goto label_49;

    case 40:
      current_block = (Rpc - LABEL_29_43);
      goto continuation_16;

    case 41:
      current_block = (Rpc - LABEL_29_58);
      goto label_50;

    case 42:
      current_block = (Rpc - LABEL_29_39);
      goto continuation_14;

    case 43:
      current_block = (Rpc - LABEL_29_60);
      goto label_52;

    case 44:
      current_block = (Rpc - LABEL_29_48);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_translate_scode_55)
DEFLABEL (phase_translate_scode_23)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (lambda_56)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_29_5);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_0]));
  (Wrd6.Obj) = (current_block [OBJECT_29_1]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_139;

DEFLABEL (label_138)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_137)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_1]));
  (Wrd18.Obj) = (current_block [OBJECT_29_2]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_136;

DEFLABEL (label_135)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_134)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_2]));
  (Wrd30.Obj) = (current_block [OBJECT_29_2]);
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_133;

DEFLABEL (label_132)
  ((Wrd29.pObj) [0]) = (Wrd30.Obj);

DEFLABEL (label_131)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_3]));
  (Wrd42.Obj) = (current_block [OBJECT_29_2]);
  (Wrd49.Obj) = ((Wrd41.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_130;

DEFLABEL (label_129)
  ((Wrd41.pObj) [0]) = (Wrd42.Obj);

DEFLABEL (label_128)
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_4]));
  (Wrd54.Obj) = (current_block [OBJECT_29_2]);
  (Wrd61.Obj) = ((Wrd53.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_127;

DEFLABEL (label_126)
  ((Wrd53.pObj) [0]) = (Wrd54.Obj);

DEFLABEL (label_125)
  (Wrd65.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_5]));
  (Wrd66.Obj) = (current_block [OBJECT_29_2]);
  (Wrd73.Obj) = ((Wrd65.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 50)
    goto label_124;

DEFLABEL (label_123)
  ((Wrd65.pObj) [0]) = (Wrd66.Obj);

DEFLABEL (label_122)
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_6]));
  (Wrd78.Obj) = (current_block [OBJECT_29_2]);
  (Wrd85.Obj) = ((Wrd77.pObj) [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd86.uLng) == 50)
    goto label_121;

DEFLABEL (label_120)
  ((Wrd77.pObj) [0]) = (Wrd78.Obj);

DEFLABEL (label_119)
  (Wrd89.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_7]));
  (Wrd90.Obj) = (current_block [OBJECT_29_2]);
  (Wrd97.Obj) = ((Wrd89.pObj) [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if ((Wrd98.uLng) == 50)
    goto label_118;

DEFLABEL (label_117)
  ((Wrd89.pObj) [0]) = (Wrd90.Obj);

DEFLABEL (label_116)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_15]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd105.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd108.Obj) = ((Wrd105.pObj) [0]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if ((Wrd109.uLng) == 50)
    goto label_115;
  Wrd104 = Wrd108;

DEFLABEL (label_114)
  if ((Wrd104.Obj) == ((SCHEME_OBJECT) 0))
    goto label_108;
  (Wrd112.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_1]));
  (Wrd115.Obj) = ((Wrd112.pObj) [0]);
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if ((Wrd116.uLng) == 50)
    goto label_107;
  Wrd111 = Wrd115;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd111.Obj);

DEFLABEL (label_105)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_10]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_104;

DEFLABEL (label_103)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_102)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_2]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_101;
  Wrd18 = Wrd22;

DEFLABEL (label_100)
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_91;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_30]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_3]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_99;
  Wrd28 = Wrd32;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_32]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_34]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_29_33);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_97;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_47]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_50]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_29_47);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_97;

DEFLABEL (label_96)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_48]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_49]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_29_48);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_61]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_29_22);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_95;
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_21]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd61.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (current_block [OBJECT_29_3]);
  (* (--Rsp)) = (Wrd62.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_29_21);

DEFLABEL (label_95)
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_9]));
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_94;

DEFLABEL (label_93)
  ((Wrd45.pObj) [0]) = (Wrd46.Obj);

DEFLABEL (label_92)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_91)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_27]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_3]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_90;
  Wrd37 = Wrd41;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_29]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_29_27);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_12]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_88;

DEFLABEL (label_87)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_86)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_4]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_85;
  Wrd18 = Wrd22;

DEFLABEL (label_84)
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_77;

DEFLABEL (label_76)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_42]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_43]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_5]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_75;
  Wrd31 = Wrd35;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_45]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_29_43);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_7]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_73;
  Wrd5 = Wrd9;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_59]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_29_42);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_13]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_71;

DEFLABEL (label_70)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_69)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_6]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_68;
  Wrd19 = Wrd23;

DEFLABEL (label_67)
  if (! ((Wrd19.Obj) == (current_block [OBJECT_29_2])))
    goto label_62;

DEFLABEL (label_61)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_51]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_29_7]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_57]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_29_51);

DEFLABEL (label_60)
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_3]));
  (Wrd46.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd55.Obj) = ((Wrd45.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  ((Wrd45.pObj) [0]) = (Wrd46.Obj);

DEFLABEL (label_57)
  Rvl = (current_block [OBJECT_29_6]);
  goto pop_return;

DEFLABEL (label_59)
  if ((Wrd55.Obj) == (Wrd46.Obj))
    goto label_58;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_56])), (Wrd45.pObj), (Wrd46.Obj));

DEFLABEL (label_49)
  goto label_57;

DEFLABEL (label_62)
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_6]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_66;
  Wrd27 = Wrd31;

DEFLABEL (label_65)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_64;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd33.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_63)
  if ((Wrd33.Obj) == (current_block [OBJECT_29_2]))
    goto label_60;
  goto label_61;

DEFLABEL (label_64)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_55]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_5]), 1);

DEFLABEL (label_48)
  (Wrd33.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_54])), (Wrd28.pObj));

DEFLABEL (label_47)
  (Wrd27.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_53])), (Wrd20.pObj));

DEFLABEL (label_46)
  (Wrd19.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_71)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_70;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_52])), (Wrd6.pObj), Rvl);

DEFLABEL (label_45)
  goto label_69;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_58])), (Wrd6.pObj));

DEFLABEL (label_50)
  (Wrd5.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_44])), (Wrd32.pObj));

DEFLABEL (label_43)
  (Wrd31.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_35]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_39]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_5]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_83;
  Wrd43 = Wrd47;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_41]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_29_39);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_7]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_81;
  Wrd5 = Wrd9;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_59]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_29_35);
  (Wrd50.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_11]));
  (Wrd58.Obj) = ((Wrd50.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_79;

DEFLABEL (label_78)
  ((Wrd50.pObj) [0]) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  if ((Wrd58.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_78;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_36])), (Wrd50.pObj), Rvl);

DEFLABEL (label_51)
  goto label_76;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_60])), (Wrd6.pObj));

DEFLABEL (label_52)
  (Wrd5.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_40])), (Wrd44.pObj));

DEFLABEL (label_44)
  (Wrd43.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_38])), (Wrd19.pObj));

DEFLABEL (label_42)
  (Wrd18.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_88)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_87;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_37])), (Wrd6.pObj), Rvl);

DEFLABEL (label_41)
  goto label_86;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_28])), (Wrd38.pObj));

DEFLABEL (label_40)
  (Wrd37.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_94)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_93;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_24])), (Wrd45.pObj), (Wrd46.Obj));

DEFLABEL (label_53)
  goto label_92;

DEFLABEL (label_97)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_46]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_29_4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_29_46);
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_31])), (Wrd29.pObj));

DEFLABEL (label_39)
  (Wrd28.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_26])), (Wrd19.pObj));

DEFLABEL (label_38)
  (Wrd18.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_104)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_103;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_25])), (Wrd6.pObj), Rvl);

DEFLABEL (label_37)
  goto label_102;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_19])), (Wrd112.pObj));

DEFLABEL (label_34)
  (Wrd111.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_108)
  (Wrd118.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_1]));
  (Wrd121.Obj) = ((Wrd118.pObj) [0]);
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if ((Wrd122.uLng) == 50)
    goto label_113;
  Wrd117 = Wrd121;

DEFLABEL (label_112)
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd123.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_29_8]));
  (Wrd124.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd133.Obj) = ((Wrd123.pObj) [0]);
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd133.Obj));
  if ((Wrd134.uLng) == 50)
    goto label_111;

DEFLABEL (label_110)
  ((Wrd123.pObj) [0]) = (Wrd124.Obj);

DEFLABEL (label_109)
  (Wrd138.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd138.Obj);
  goto label_105;

DEFLABEL (label_111)
  if ((Wrd133.Obj) == (Wrd124.Obj))
    goto label_110;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_18])), (Wrd123.pObj), (Wrd124.Obj));

DEFLABEL (label_36)
  goto label_109;

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_17])), (Wrd118.pObj));

DEFLABEL (label_35)
  (Wrd117.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_16])), (Wrd105.pObj));

DEFLABEL (label_33)
  (Wrd104.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_118)
  if ((Wrd97.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_117;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_14])), (Wrd89.pObj), (Wrd90.Obj));

DEFLABEL (label_32)
  goto label_116;

DEFLABEL (label_121)
  if ((Wrd85.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_120;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_13])), (Wrd77.pObj), (Wrd78.Obj));

DEFLABEL (label_31)
  goto label_119;

DEFLABEL (label_124)
  if ((Wrd73.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_123;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_12])), (Wrd65.pObj), (Wrd66.Obj));

DEFLABEL (label_30)
  goto label_122;

DEFLABEL (label_127)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_126;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_11])), (Wrd53.pObj), (Wrd54.Obj));

DEFLABEL (label_29)
  goto label_125;

DEFLABEL (label_130)
  if ((Wrd49.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_129;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_10])), (Wrd41.pObj), (Wrd42.Obj));

DEFLABEL (label_28)
  goto label_128;

DEFLABEL (label_133)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_132;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_9])), (Wrd29.pObj), (Wrd30.Obj));

DEFLABEL (label_27)
  goto label_131;

DEFLABEL (label_136)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_135;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_8])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_26)
  goto label_134;

DEFLABEL (label_139)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_138;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_29_7])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_25)
  goto label_137;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_7 7
#define LABEL_30_9 9
#define LABEL_30_11 11
#define LABEL_30_13 13
#define LABEL_30_15 15
#define LABEL_30_17 17
#define LABEL_30_19 19
#define LABEL_30_21 21
#define LABEL_30_23 23
#define LABEL_30_25 25
#define LABEL_30_27 27
#define LABEL_30_29 29
#define LABEL_30_31 31
#define LABEL_30_33 33
#define LABEL_30_35 35
#define LABEL_30_37 37
#define LABEL_30_38 39
#define LABEL_30_40 41
#define LABEL_30_42 43
#define LABEL_30_44 45
#define LABEL_30_46 47
#define ENVIRONMENT_LABEL_30_3 95
#define DEBUGGING_LABEL_30_2 94
#define OBJECT_30_0 93
#define EXECUTE_CACHE_30_48 49
#define EXECUTE_CACHE_30_47 51
#define EXECUTE_CACHE_30_45 53
#define EXECUTE_CACHE_30_43 55
#define EXECUTE_CACHE_30_41 57
#define EXECUTE_CACHE_30_39 59
#define EXECUTE_CACHE_30_36 61
#define EXECUTE_CACHE_30_34 63
#define EXECUTE_CACHE_30_32 65
#define EXECUTE_CACHE_30_30 67
#define EXECUTE_CACHE_30_28 69
#define EXECUTE_CACHE_30_26 71
#define EXECUTE_CACHE_30_24 73
#define EXECUTE_CACHE_30_22 75
#define EXECUTE_CACHE_30_20 77
#define EXECUTE_CACHE_30_18 79
#define EXECUTE_CACHE_30_16 81
#define EXECUTE_CACHE_30_14 83
#define EXECUTE_CACHE_30_12 85
#define EXECUTE_CACHE_30_10 87
#define EXECUTE_CACHE_30_8 89
#define EXECUTE_CACHE_30_6 91
#define FREE_REFERENCES_LABEL_30_0 48
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_30_4);
      goto phase_fg_optimization_22;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto lambda_21;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_30_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_30_13);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_30_15);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_30_17);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_30_19);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_30_21);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_30_23);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_30_25);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_30_27);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_30_29);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_30_31);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_30_33);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_30_35);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_30_37);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_30_38);
      goto continuation_16;

    case 19:
      current_block = (Rpc - LABEL_30_40);
      goto continuation_17;

    case 20:
      current_block = (Rpc - LABEL_30_42);
      goto continuation_18;

    case 21:
      current_block = (Rpc - LABEL_30_44);
      goto continuation_19;

    case 22:
      current_block = (Rpc - LABEL_30_46);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_fg_optimization_25)
DEFLABEL (phase_fg_optimization_22)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (lambda_26)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_30_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_30_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_30_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_26]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_30_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_28]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_30_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_30]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_30_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_32]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_30_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_34]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_30_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_36]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_30_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_34]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_30_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_39]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_30_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_41]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_30_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_43]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_30_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_45]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_30_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_47]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_30_46);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_48]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_7 7
#define LABEL_31_8 9
#define ENVIRONMENT_LABEL_31_3 20
#define DEBUGGING_LABEL_31_2 19
#define OBJECT_31_0 18
#define EXECUTE_CACHE_31_9 11
#define EXECUTE_CACHE_31_6 13
#define FREE_REFERENCE_31_1 16
#define FREE_REFERENCE_31_0 17
#define FREE_REFERENCES_LABEL_31_0 10
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_31_4);
      goto phase_simulate_application_1;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_simulate_application_6)
DEFLABEL (phase_simulate_application_1)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_31_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_9;
  Wrd11 = Wrd15;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_8])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define LABEL_32_8 9
#define LABEL_32_9 11
#define ENVIRONMENT_LABEL_32_3 23
#define DEBUGGING_LABEL_32_2 22
#define OBJECT_32_0 21
#define EXECUTE_CACHE_32_10 13
#define EXECUTE_CACHE_32_6 15
#define FREE_REFERENCE_32_2 18
#define FREE_REFERENCE_32_1 19
#define FREE_REFERENCE_32_0 20
#define FREE_REFERENCES_LABEL_32_0 12
#define NUMBER_OF_LINKER_SECTIONS_32_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_32_4);
      goto phase_outer_analysis_1;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_outer_analysis_7)
DEFLABEL (phase_outer_analysis_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_32_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_12;
  Wrd11 = Wrd15;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_10;
  Wrd17 = Wrd21;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_9])), (Wrd18.pObj));

DEFLABEL (label_5)
  (Wrd17.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_8])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_32_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define LABEL_33_8 9
#define ENVIRONMENT_LABEL_33_3 20
#define DEBUGGING_LABEL_33_2 19
#define OBJECT_33_0 18
#define EXECUTE_CACHE_33_9 11
#define EXECUTE_CACHE_33_6 13
#define FREE_REFERENCE_33_1 16
#define FREE_REFERENCE_33_0 17
#define FREE_REFERENCES_LABEL_33_0 10
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_33_4);
      goto phase_fold_constants_1;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_33_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_fold_constants_6)
DEFLABEL (phase_fold_constants_1)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_33_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_9;
  Wrd11 = Wrd15;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_8])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_7 7
#define ENVIRONMENT_LABEL_34_3 17
#define DEBUGGING_LABEL_34_2 16
#define OBJECT_34_0 15
#define EXECUTE_CACHE_34_8 9
#define EXECUTE_CACHE_34_6 11
#define FREE_REFERENCE_34_0 14
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_34_4);
      goto phase_open_coding_analysis_1;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_open_coding_analysis_5)
DEFLABEL (phase_open_coding_analysis_1)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_34_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define LABEL_35_8 9
#define ENVIRONMENT_LABEL_35_3 20
#define DEBUGGING_LABEL_35_2 19
#define OBJECT_35_0 18
#define EXECUTE_CACHE_35_9 11
#define EXECUTE_CACHE_35_6 13
#define FREE_REFERENCE_35_1 16
#define FREE_REFERENCE_35_0 17
#define FREE_REFERENCES_LABEL_35_0 10
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_35_4);
      goto phase_operator_analysis_1;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_operator_analysis_6)
DEFLABEL (phase_operator_analysis_1)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_35_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_9;
  Wrd11 = Wrd15;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_8])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define ENVIRONMENT_LABEL_36_3 17
#define DEBUGGING_LABEL_36_2 16
#define OBJECT_36_0 15
#define EXECUTE_CACHE_36_8 9
#define EXECUTE_CACHE_36_6 11
#define FREE_REFERENCE_36_0 14
#define FREE_REFERENCES_LABEL_36_0 8
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_36_4);
      goto phase_variable_indirection_1;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_variable_indirection_5)
DEFLABEL (phase_variable_indirection_1)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_36_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define ENVIRONMENT_LABEL_37_3 17
#define DEBUGGING_LABEL_37_2 16
#define OBJECT_37_0 15
#define EXECUTE_CACHE_37_8 9
#define EXECUTE_CACHE_37_6 11
#define FREE_REFERENCE_37_0 14
#define FREE_REFERENCES_LABEL_37_0 8
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_37_4);
      goto phase_environment_optimization_1;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_environment_optimization_5)
DEFLABEL (phase_environment_optimization_1)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_37_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_8 7
#define LABEL_38_9 9
#define LABEL_38_10 11
#define LABEL_38_7 13
#define LABEL_38_12 15
#define LABEL_38_13 17
#define LABEL_38_14 19
#define LABEL_38_16 21
#define LABEL_38_18 23
#define ENVIRONMENT_LABEL_38_3 46
#define DEBUGGING_LABEL_38_2 45
#define OBJECT_38_2 44
#define OBJECT_38_1 43
#define OBJECT_38_0 42
#define EXECUTE_CACHE_38_20 25
#define EXECUTE_CACHE_38_19 27
#define EXECUTE_CACHE_38_17 29
#define EXECUTE_CACHE_38_15 31
#define EXECUTE_CACHE_38_11 33
#define EXECUTE_CACHE_38_6 35
#define FREE_REFERENCE_38_3 38
#define FREE_REFERENCE_38_2 39
#define FREE_REFERENCE_38_1 40
#define FREE_REFERENCE_38_0 41
#define FREE_REFERENCES_LABEL_38_0 24
#define NUMBER_OF_LINKER_SECTIONS_38_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_38_4);
      goto phase_identify_closure_limits_5;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto lambda_4;

    case 2:
      current_block = (Rpc - LABEL_38_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_38_9);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_38_10);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_38_12);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_38_13);
      goto label_11;

    case 8:
      current_block = (Rpc - LABEL_38_14);
      goto lambda_3;

    case 9:
      current_block = (Rpc - LABEL_38_16);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_38_18);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_identify_closure_limits_13)
DEFLABEL (phase_identify_closure_limits_5)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (lambda_14)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_38_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_26;
  Wrd8 = Wrd12;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_24;
  Wrd14 = Wrd18;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_2]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_22;
  Wrd20 = Wrd24;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_20;
  Wrd5 = Wrd9;

DEFLABEL (label_19)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = (current_block [OBJECT_38_1]);
  goto pop_return;

DEFLABEL (label_16)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38_2]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_18;
  Wrd13 = Wrd17;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_15]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_13])), (Wrd14.pObj));

DEFLABEL (label_11)
  (Wrd13.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_12])), (Wrd6.pObj));

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_10])), (Wrd21.pObj));

DEFLABEL (label_9)
  (Wrd20.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_9])), (Wrd15.pObj));

DEFLABEL (label_8)
  (Wrd14.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38_8])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_15)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_38_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  Rvl = (current_block [OBJECT_38_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_38_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_18);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_38_2]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_20]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_8 7
#define LABEL_39_10 9
#define LABEL_39_7 11
#define LABEL_39_11 13
#define LABEL_39_12 15
#define LABEL_39_15 17
#define LABEL_39_16 19
#define LABEL_39_13 21
#define LABEL_39_18 23
#define ENVIRONMENT_LABEL_39_3 46
#define DEBUGGING_LABEL_39_2 45
#define OBJECT_39_2 44
#define OBJECT_39_1 43
#define OBJECT_39_0 42
#define EXECUTE_CACHE_39_20 25
#define EXECUTE_CACHE_39_19 27
#define EXECUTE_CACHE_39_17 29
#define EXECUTE_CACHE_39_14 31
#define EXECUTE_CACHE_39_9 33
#define EXECUTE_CACHE_39_6 35
#define FREE_REFERENCE_39_3 38
#define FREE_REFERENCE_39_2 39
#define FREE_REFERENCE_39_1 40
#define FREE_REFERENCE_39_0 41
#define FREE_REFERENCES_LABEL_39_0 24
#define NUMBER_OF_LINKER_SECTIONS_39_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_39_4);
      goto phase_setup_block_types_5;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto lambda_4;

    case 2:
      current_block = (Rpc - LABEL_39_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_39_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_39_11);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_39_12);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_39_15);
      goto label_9;

    case 8:
      current_block = (Rpc - LABEL_39_16);
      goto label_10;

    case 9:
      current_block = (Rpc - LABEL_39_13);
      goto lambda_2;

    case 10:
      current_block = (Rpc - LABEL_39_18);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_setup_block_types_13)
DEFLABEL (phase_setup_block_types_5)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (lambda_14)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_39_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_27;
  Wrd8 = Wrd12;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_25;
  Wrd5 = Wrd9;

DEFLABEL (label_24)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_19;
  Wrd12 = Wrd16;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_3]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_17;
  Wrd18 = Wrd22;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_17]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_16])), (Wrd19.pObj));

DEFLABEL (label_10)
  (Wrd18.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_15])), (Wrd13.pObj));

DEFLABEL (label_9)
  (Wrd12.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_2]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_23;
  Wrd27 = Wrd31;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_10);
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_12])), (Wrd28.pObj));

DEFLABEL (label_11)
  (Wrd27.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_11])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_8])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_26;

DEFLABEL (lambda_15)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_39_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_19]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  Rvl = (current_block [OBJECT_39_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_39_1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_20]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define ENVIRONMENT_LABEL_40_3 17
#define DEBUGGING_LABEL_40_2 16
#define OBJECT_40_0 15
#define EXECUTE_CACHE_40_8 9
#define EXECUTE_CACHE_40_6 11
#define FREE_REFERENCE_40_0 14
#define FREE_REFERENCES_LABEL_40_0 8
#define NUMBER_OF_LINKER_SECTIONS_40_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_40_4);
      goto phase_compute_call_graph_1;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_compute_call_graph_5)
DEFLABEL (phase_compute_call_graph_1)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_40_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_7 7
#define LABEL_41_8 9
#define ENVIRONMENT_LABEL_41_3 20
#define DEBUGGING_LABEL_41_2 19
#define OBJECT_41_0 18
#define EXECUTE_CACHE_41_9 11
#define EXECUTE_CACHE_41_6 13
#define FREE_REFERENCE_41_1 16
#define FREE_REFERENCE_41_0 17
#define FREE_REFERENCES_LABEL_41_0 10
#define NUMBER_OF_LINKER_SECTIONS_41_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_41_4);
      goto phase_side_effect_analysis_1;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_41_7);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_41_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_side_effect_analysis_6)
DEFLABEL (phase_side_effect_analysis_1)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_41_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_9;
  Wrd11 = Wrd15;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_8])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_8 7
#define LABEL_42_7 9
#define LABEL_42_11 11
#define LABEL_42_10 13
#define LABEL_42_13 15
#define ENVIRONMENT_LABEL_42_3 30
#define DEBUGGING_LABEL_42_2 29
#define OBJECT_42_0 28
#define EXECUTE_CACHE_42_14 17
#define EXECUTE_CACHE_42_12 19
#define EXECUTE_CACHE_42_9 21
#define EXECUTE_CACHE_42_6 23
#define FREE_REFERENCE_42_1 26
#define FREE_REFERENCE_42_0 27
#define FREE_REFERENCES_LABEL_42_0 16
#define NUMBER_OF_LINKER_SECTIONS_42_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_42_4);
      goto phase_continuation_analysis_3;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto lambda_2;

    case 2:
      current_block = (Rpc - LABEL_42_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_42_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_42_11);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_42_10);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_42_13);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_continuation_analysis_9)
DEFLABEL (phase_continuation_analysis_3)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_42_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (lambda_10)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_42_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_14;
  Wrd8 = Wrd12;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_14]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_13])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_11])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_8])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_8 7
#define LABEL_43_7 9
#define LABEL_43_10 11
#define ENVIRONMENT_LABEL_43_3 23
#define DEBUGGING_LABEL_43_2 22
#define OBJECT_43_0 21
#define EXECUTE_CACHE_43_11 13
#define EXECUTE_CACHE_43_9 15
#define EXECUTE_CACHE_43_6 17
#define FREE_REFERENCE_43_0 20
#define FREE_REFERENCES_LABEL_43_0 12
#define NUMBER_OF_LINKER_SECTIONS_43_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_43_4);
      goto phase_subproblem_analysis_2;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_43_8);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_43_10);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_subproblem_analysis_7)
DEFLABEL (phase_subproblem_analysis_2)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_43_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_12;
  Wrd8 = Wrd12;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_11]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_10])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_8])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_7 7
#define ENVIRONMENT_LABEL_44_3 17
#define DEBUGGING_LABEL_44_2 16
#define OBJECT_44_0 15
#define EXECUTE_CACHE_44_8 9
#define EXECUTE_CACHE_44_6 11
#define FREE_REFERENCE_44_0 14
#define FREE_REFERENCES_LABEL_44_0 8
#define NUMBER_OF_LINKER_SECTIONS_44_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_44_4);
      goto phase_delete_integrated_parameters_1;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_delete_integrated_parameters_5)
DEFLABEL (phase_delete_integrated_parameters_1)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_44_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_7 7
#define ENVIRONMENT_LABEL_45_3 17
#define DEBUGGING_LABEL_45_2 16
#define OBJECT_45_0 15
#define EXECUTE_CACHE_45_8 9
#define EXECUTE_CACHE_45_6 11
#define FREE_REFERENCE_45_0 14
#define FREE_REFERENCES_LABEL_45_0 8
#define NUMBER_OF_LINKER_SECTIONS_45_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_45_4);
      goto phase_subproblem_ordering_1;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_45_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_subproblem_ordering_5)
DEFLABEL (phase_subproblem_ordering_1)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_45_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_7 7
#define LABEL_46_8 9
#define ENVIRONMENT_LABEL_46_3 20
#define DEBUGGING_LABEL_46_2 19
#define OBJECT_46_0 18
#define EXECUTE_CACHE_46_9 11
#define EXECUTE_CACHE_46_6 13
#define FREE_REFERENCE_46_1 16
#define FREE_REFERENCE_46_0 17
#define FREE_REFERENCES_LABEL_46_0 10
#define NUMBER_OF_LINKER_SECTIONS_46_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_46_4);
      goto phase_connectivity_analysis_1;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_46_7);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_46_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_connectivity_analysis_6)
DEFLABEL (phase_connectivity_analysis_1)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_46_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_9;
  Wrd11 = Wrd15;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_8])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_7 7
#define ENVIRONMENT_LABEL_47_3 17
#define DEBUGGING_LABEL_47_2 16
#define OBJECT_47_0 15
#define EXECUTE_CACHE_47_8 9
#define EXECUTE_CACHE_47_6 11
#define FREE_REFERENCE_47_0 14
#define FREE_REFERENCES_LABEL_47_0 8
#define NUMBER_OF_LINKER_SECTIONS_47_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_47_4);
      goto phase_design_environment_frames_1;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_design_environment_frames_5)
DEFLABEL (phase_design_environment_frames_1)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_47_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define ENVIRONMENT_LABEL_48_3 17
#define DEBUGGING_LABEL_48_2 16
#define OBJECT_48_0 15
#define EXECUTE_CACHE_48_8 9
#define EXECUTE_CACHE_48_6 11
#define FREE_REFERENCE_48_0 14
#define FREE_REFERENCES_LABEL_48_0 8
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_48_4);
      goto phase_compute_node_offsets_1;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_compute_node_offsets_5)
DEFLABEL (phase_compute_node_offsets_1)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_48_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_7 7
#define LABEL_49_8 9
#define ENVIRONMENT_LABEL_49_3 20
#define DEBUGGING_LABEL_49_2 19
#define OBJECT_49_0 18
#define EXECUTE_CACHE_49_9 11
#define EXECUTE_CACHE_49_6 13
#define FREE_REFERENCE_49_1 16
#define FREE_REFERENCE_49_0 17
#define FREE_REFERENCES_LABEL_49_0 10
#define NUMBER_OF_LINKER_SECTIONS_49_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_49_4);
      goto phase_return_equivalencing_1;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_49_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_return_equivalencing_6)
DEFLABEL (phase_return_equivalencing_1)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_49_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_9;
  Wrd11 = Wrd15;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_9]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_8])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_7 7
#define LABEL_50_8 9
#define ENVIRONMENT_LABEL_50_3 20
#define DEBUGGING_LABEL_50_2 19
#define OBJECT_50_0 18
#define EXECUTE_CACHE_50_9 11
#define EXECUTE_CACHE_50_6 13
#define FREE_REFERENCE_50_1 16
#define FREE_REFERENCE_50_0 17
#define FREE_REFERENCES_LABEL_50_0 10
#define NUMBER_OF_LINKER_SECTIONS_50_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_50_4);
      goto phase_info_generation_1_1;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_50_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_info_generation_1_6)
DEFLABEL (phase_info_generation_1_1)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_50_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_9;
  Wrd11 = Wrd15;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_9]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_8])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_7 7
#define LABEL_51_9 9
#define LABEL_51_8 11
#define LABEL_51_11 13
#define LABEL_51_12 15
#define LABEL_51_13 17
#define LABEL_51_14 19
#define LABEL_51_15 21
#define LABEL_51_16 23
#define LABEL_51_17 25
#define ENVIRONMENT_LABEL_51_3 45
#define DEBUGGING_LABEL_51_2 44
#define OBJECT_51_1 43
#define OBJECT_51_0 42
#define EXECUTE_CACHE_51_10 27
#define EXECUTE_CACHE_51_6 29
#define FREE_REFERENCE_51_1 32
#define FREE_REFERENCE_51_0 33
#define FREE_ASSIGNMENT_51_6 35
#define FREE_ASSIGNMENT_51_5 36
#define FREE_ASSIGNMENT_51_4 37
#define FREE_ASSIGNMENT_51_3 38
#define FREE_ASSIGNMENT_51_2 39
#define FREE_ASSIGNMENT_51_1 40
#define FREE_ASSIGNMENT_51_0 41
#define FREE_REFERENCES_LABEL_51_0 26
#define NUMBER_OF_LINKER_SECTIONS_51_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_51_4);
      goto phase_fg_optimization_cleanup_2;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_51_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_51_9);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_51_8);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_51_11);
      goto label_6;

    case 6:
      current_block = (Rpc - LABEL_51_12);
      goto label_7;

    case 7:
      current_block = (Rpc - LABEL_51_13);
      goto label_8;

    case 8:
      current_block = (Rpc - LABEL_51_14);
      goto label_9;

    case 9:
      current_block = (Rpc - LABEL_51_15);
      goto label_10;

    case 10:
      current_block = (Rpc - LABEL_51_16);
      goto label_11;

    case 11:
      current_block = (Rpc - LABEL_51_17);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_fg_optimization_cleanup_14)
DEFLABEL (phase_fg_optimization_cleanup_2)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (lambda_15)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_51_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_41;
  Wrd5 = Wrd9;

DEFLABEL (label_40)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = (current_block [OBJECT_51_1]);
  goto pop_return;

DEFLABEL (label_16)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_39;
  Wrd16 = Wrd20;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_8);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_0]));
  (Wrd6.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd15.Obj) = ((Wrd5.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_35)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_1]));
  (Wrd20.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd29.Obj) = ((Wrd19.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd19.pObj) [0]) = (Wrd20.Obj);

DEFLABEL (label_32)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_2]));
  (Wrd34.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd43.Obj) = ((Wrd33.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd33.pObj) [0]) = (Wrd34.Obj);

DEFLABEL (label_29)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_3]));
  (Wrd48.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd57.Obj) = ((Wrd47.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd47.pObj) [0]) = (Wrd48.Obj);

DEFLABEL (label_26)
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_4]));
  (Wrd62.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd71.Obj) = ((Wrd61.pObj) [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd72.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd61.pObj) [0]) = (Wrd62.Obj);

DEFLABEL (label_23)
  (Wrd75.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_5]));
  (Wrd76.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd85.Obj) = ((Wrd75.pObj) [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd86.uLng) == 50)
    goto label_22;

DEFLABEL (label_21)
  ((Wrd75.pObj) [0]) = (Wrd76.Obj);

DEFLABEL (label_20)
  (Wrd89.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_51_6]));
  (Wrd90.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd99.Obj) = ((Wrd89.pObj) [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd100.uLng) == 50)
    goto label_19;

DEFLABEL (label_18)
  ((Wrd89.pObj) [0]) = (Wrd90.Obj);

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_51_1]);
  goto pop_return;

DEFLABEL (label_19)
  if ((Wrd99.Obj) == (Wrd90.Obj))
    goto label_18;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_17])), (Wrd89.pObj), (Wrd90.Obj));

DEFLABEL (label_12)
  goto label_17;

DEFLABEL (label_22)
  if ((Wrd85.Obj) == (Wrd76.Obj))
    goto label_21;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_16])), (Wrd75.pObj), (Wrd76.Obj));

DEFLABEL (label_11)
  goto label_20;

DEFLABEL (label_25)
  if ((Wrd71.Obj) == (Wrd62.Obj))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_15])), (Wrd61.pObj), (Wrd62.Obj));

DEFLABEL (label_10)
  goto label_23;

DEFLABEL (label_28)
  if ((Wrd57.Obj) == (Wrd48.Obj))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_14])), (Wrd47.pObj), (Wrd48.Obj));

DEFLABEL (label_9)
  goto label_26;

DEFLABEL (label_31)
  if ((Wrd43.Obj) == (Wrd34.Obj))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_13])), (Wrd33.pObj), (Wrd34.Obj));

DEFLABEL (label_8)
  goto label_29;

DEFLABEL (label_34)
  if ((Wrd29.Obj) == (Wrd20.Obj))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_12])), (Wrd19.pObj), (Wrd20.Obj));

DEFLABEL (label_7)
  goto label_32;

DEFLABEL (label_37)
  if ((Wrd15.Obj) == (Wrd6.Obj))
    goto label_36;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_51_11])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_6)
  goto label_35;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_9])), (Wrd17.pObj));

DEFLABEL (label_5)
  (Wrd16.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_7])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_7 7
#define LABEL_52_8 9
#define LABEL_52_13 11
#define LABEL_52_14 13
#define LABEL_52_15 15
#define LABEL_52_16 17
#define LABEL_52_10 19
#define LABEL_52_18 21
#define LABEL_52_19 23
#define LABEL_52_21 25
#define LABEL_52_22 27
#define LABEL_52_23 29
#define LABEL_52_11 31
#define LABEL_52_25 33
#define LABEL_52_26 35
#define LABEL_52_27 37
#define LABEL_52_28 39
#define LABEL_52_12 41
#define LABEL_52_29 43
#define LABEL_52_20 45
#define LABEL_52_30 47
#define LABEL_52_31 49
#define LABEL_52_32 51
#define LABEL_52_33 53
#define LABEL_52_35 55
#define LABEL_52_39 57
#define LABEL_52_40 59
#define LABEL_52_41 61
#define LABEL_52_42 63
#define LABEL_52_38 65
#define LABEL_52_34 67
#define LABEL_52_45 69
#define LABEL_52_47 71
#define LABEL_52_36 73
#define LABEL_52_52 75
#define LABEL_52_46 77
#define LABEL_52_48 79
#define LABEL_52_50 81
#define LABEL_52_51 83
#define LABEL_52_53 85
#define TAG_52_54 41
#define LABEL_52_56 87
#define LABEL_52_61 89
#define LABEL_52_59 91
#define LABEL_52_64 93
#define LABEL_52_62 95
#define LABEL_52_63 97
#define LABEL_52_65 99
#define LABEL_52_69 101
#define LABEL_52_67 103
#define LABEL_52_68 105
#define LABEL_52_70 107
#define LABEL_52_71 109
#define LABEL_52_72 111
#define LABEL_52_73 113
#define LABEL_52_74 115
#define LABEL_52_78 117
#define LABEL_52_77 119
#define ENVIRONMENT_LABEL_52_3 188
#define DEBUGGING_LABEL_52_2 187
#define OBJECT_52_10 186
#define OBJECT_52_9 185
#define OBJECT_52_8 184
#define OBJECT_52_7 183
#define OBJECT_52_6 182
#define OBJECT_52_5 181
#define OBJECT_52_4 180
#define OBJECT_52_3 179
#define OBJECT_52_2 178
#define OBJECT_52_1 177
#define OBJECT_52_0 176
#define EXECUTE_CACHE_52_76 121
#define EXECUTE_CACHE_52_75 123
#define EXECUTE_CACHE_52_66 125
#define EXECUTE_CACHE_52_60 127
#define EXECUTE_CACHE_52_58 129
#define EXECUTE_CACHE_52_57 131
#define EXECUTE_CACHE_52_55 133
#define EXECUTE_CACHE_52_49 135
#define EXECUTE_CACHE_52_44 137
#define EXECUTE_CACHE_52_43 139
#define EXECUTE_CACHE_52_37 141
#define EXECUTE_CACHE_52_24 143
#define EXECUTE_CACHE_52_17 145
#define EXECUTE_CACHE_52_9 147
#define EXECUTE_CACHE_52_6 149
#define FREE_REFERENCE_52_13 152
#define FREE_REFERENCE_52_12 153
#define FREE_REFERENCE_52_11 154
#define FREE_REFERENCE_52_10 155
#define FREE_REFERENCE_52_9 156
#define FREE_REFERENCE_52_8 157
#define FREE_REFERENCE_52_7 158
#define FREE_REFERENCE_52_6 159
#define FREE_REFERENCE_52_5 160
#define FREE_REFERENCE_52_4 161
#define FREE_REFERENCE_52_3 162
#define FREE_REFERENCE_52_2 163
#define FREE_REFERENCE_52_1 164
#define FREE_REFERENCE_52_0 165
#define FREE_ASSIGNMENT_52_8 167
#define FREE_ASSIGNMENT_52_7 168
#define FREE_ASSIGNMENT_52_6 169
#define FREE_ASSIGNMENT_52_5 170
#define FREE_ASSIGNMENT_52_4 171
#define FREE_ASSIGNMENT_52_3 172
#define FREE_ASSIGNMENT_52_2 173
#define FREE_ASSIGNMENT_52_1 174
#define FREE_ASSIGNMENT_52_0 175
#define FREE_REFERENCES_LABEL_52_0 120
#define NUMBER_OF_LINKER_SECTIONS_52_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd96;
  machine_word Wrd89;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd88;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd74;
  machine_word Wrd67;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd73;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd29;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_52_4);
      goto phase_rtl_generation_34;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto lambda_33;

    case 2:
      current_block = (Rpc - LABEL_52_7);
      goto label_36;

    case 3:
      current_block = (Rpc - LABEL_52_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_52_13);
      goto label_37;

    case 5:
      current_block = (Rpc - LABEL_52_14);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_52_15);
      goto label_40;

    case 7:
      current_block = (Rpc - LABEL_52_16);
      goto label_38;

    case 8:
      current_block = (Rpc - LABEL_52_10);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_52_18);
      goto label_41;

    case 10:
      current_block = (Rpc - LABEL_52_19);
      goto label_42;

    case 11:
      current_block = (Rpc - LABEL_52_21);
      goto label_43;

    case 12:
      current_block = (Rpc - LABEL_52_22);
      goto label_44;

    case 13:
      current_block = (Rpc - LABEL_52_23);
      goto label_45;

    case 14:
      current_block = (Rpc - LABEL_52_11);
      goto lambda_1;

    case 15:
      current_block = (Rpc - LABEL_52_25);
      goto label_46;

    case 16:
      current_block = (Rpc - LABEL_52_26);
      goto label_47;

    case 17:
      current_block = (Rpc - LABEL_52_27);
      goto label_48;

    case 18:
      current_block = (Rpc - LABEL_52_28);
      goto label_49;

    case 19:
      current_block = (Rpc - LABEL_52_12);
      goto continuation_5;

    case 20:
      current_block = (Rpc - LABEL_52_29);
      goto continuation_7;

    case 21:
      current_block = (Rpc - LABEL_52_20);
      goto continuation_6;

    case 22:
      current_block = (Rpc - LABEL_52_30);
      goto label_50;

    case 23:
      current_block = (Rpc - LABEL_52_31);
      goto label_51;

    case 24:
      current_block = (Rpc - LABEL_52_32);
      goto label_56;

    case 25:
      current_block = (Rpc - LABEL_52_33);
      goto label_57;

    case 26:
      current_block = (Rpc - LABEL_52_35);
      goto label_58;

    case 27:
      current_block = (Rpc - LABEL_52_39);
      goto label_52;

    case 28:
      current_block = (Rpc - LABEL_52_40);
      goto label_54;

    case 29:
      current_block = (Rpc - LABEL_52_41);
      goto label_55;

    case 30:
      current_block = (Rpc - LABEL_52_42);
      goto label_53;

    case 31:
      current_block = (Rpc - LABEL_52_38);
      goto continuation_10;

    case 32:
      current_block = (Rpc - LABEL_52_34);
      goto continuation_15;

    case 33:
      current_block = (Rpc - LABEL_52_45);
      goto label_59;

    case 34:
      current_block = (Rpc - LABEL_52_47);
      goto label_60;

    case 35:
      current_block = (Rpc - LABEL_52_36);
      goto lambda_14;

    case 36:
      current_block = (Rpc - LABEL_52_52);
      goto label_61;

    case 37:
      current_block = (Rpc - LABEL_52_46);
      goto continuation_18;

    case 38:
      current_block = (Rpc - LABEL_52_48);
      goto lambda_17;

    case 39:
      current_block = (Rpc - LABEL_52_50);
      goto continuation_13;

    case 40:
      current_block = (Rpc - LABEL_52_51);
      goto continuation_12;

    case 41:
      current_block = (Rpc - LABEL_52_53);
      goto lambda_71;

    case 42:
      current_block = (Rpc - LABEL_52_56);
      goto continuation_16;

    case 43:
      current_block = (Rpc - LABEL_52_61);
      goto label_62;

    case 44:
      current_block = (Rpc - LABEL_52_59);
      goto continuation_19;

    case 45:
      current_block = (Rpc - LABEL_52_64);
      goto label_63;

    case 46:
      current_block = (Rpc - LABEL_52_62);
      goto continuation_21;

    case 47:
      current_block = (Rpc - LABEL_52_63);
      goto continuation_20;

    case 48:
      current_block = (Rpc - LABEL_52_65);
      goto continuation_22;

    case 49:
      current_block = (Rpc - LABEL_52_69);
      goto label_64;

    case 50:
      current_block = (Rpc - LABEL_52_67);
      goto continuation_24;

    case 51:
      current_block = (Rpc - LABEL_52_68);
      goto continuation_23;

    case 52:
      current_block = (Rpc - LABEL_52_70);
      goto continuation_25;

    case 53:
      current_block = (Rpc - LABEL_52_71);
      goto continuation_30;

    case 54:
      current_block = (Rpc - LABEL_52_72);
      goto continuation_29;

    case 55:
      current_block = (Rpc - LABEL_52_73);
      goto continuation_28;

    case 56:
      current_block = (Rpc - LABEL_52_74);
      goto continuation_27;

    case 57:
      current_block = (Rpc - LABEL_52_78);
      goto label_65;

    case 58:
      current_block = (Rpc - LABEL_52_77);
      goto continuation_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_rtl_generation_67)
DEFLABEL (phase_rtl_generation_34)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_52_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_6]));

DEFLABEL (lambda_68)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_52_5);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_52_0]));
  (Wrd6.Obj) = (current_block [OBJECT_52_1]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_127;

DEFLABEL (label_126)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_125)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_124;
  Wrd13 = Wrd17;

DEFLABEL (label_123)
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_117;
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_116;
  Wrd20 = Wrd24;

DEFLABEL (label_115)
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_114)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_52_12);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_113;
  Wrd5 = Wrd9;

DEFLABEL (label_112)
  (Wrd11.Obj) = (current_block [OBJECT_52_2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_109;
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_52_2]));
  (Wrd20.Obj) = ((Wrd12.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_111;

DEFLABEL (label_110)
  ((Wrd12.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_109)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_20]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_3]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_108;
  Wrd27 = Wrd31;

DEFLABEL (label_107)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_4]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_106;
  Wrd33 = Wrd37;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_5]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_104;
  Wrd39 = Wrd43;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_24]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_52_20);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_52_6]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_102;

DEFLABEL (label_101)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_100)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_2]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_99;
  Wrd21 = Wrd25;

DEFLABEL (label_98)
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_95;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_38]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_94;
  Wrd31 = Wrd35;

DEFLABEL (label_93)
  if ((Wrd31.Obj) == ((SCHEME_OBJECT) 0))
    goto label_87;
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_7]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_86;
  Wrd38 = Wrd42;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_84)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_43]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_52_38);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_44]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_52_29);
  (Wrd73.Obj) = Rvl;

DEFLABEL (label_83)
  (Wrd74.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_52_7]));
  (Wrd82.Obj) = ((Wrd74.pObj) [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if ((Wrd83.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  ((Wrd74.pObj) [0]) = (Wrd73.Obj);

DEFLABEL (label_80)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_34]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd90.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_6]));
  (Wrd93.Obj) = ((Wrd90.pObj) [0]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if ((Wrd94.uLng) == 50)
    goto label_79;
  Wrd89 = Wrd93;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_36]))));
  (* (--Rsp)) = (Wrd96.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_37]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_52_34);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_8]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_77;
  Wrd5 = Wrd9;

DEFLABEL (label_76)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_73;
  Rvl = (current_block [OBJECT_52_3]);
  goto pop_return;

DEFLABEL (label_73)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_46]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_9]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_75;
  Wrd15 = Wrd19;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_48]))));
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_49]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_52_46);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_52_54);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_52_53])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_55]));

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_47])), (Wrd16.pObj));

DEFLABEL (label_60)
  (Wrd15.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_45])), (Wrd6.pObj));

DEFLABEL (label_59)
  (Wrd5.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_35])), (Wrd90.pObj));

DEFLABEL (label_58)
  (Wrd89.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_82)
  if ((Wrd82.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_81;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_52_33])), (Wrd74.pObj), (Wrd73.Obj));

DEFLABEL (label_57)
  goto label_80;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_42])), (Wrd39.pObj));

DEFLABEL (label_53)
  (Wrd38.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_87)
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_7]));
  (Wrd48.Obj) = ((Wrd45.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_92;
  Wrd44 = Wrd48;

DEFLABEL (label_91)
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd50.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_52_8]));
  (Wrd51.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd60.Obj) = ((Wrd50.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_90;

DEFLABEL (label_89)
  ((Wrd50.pObj) [0]) = (Wrd51.Obj);

DEFLABEL (label_88)
  (Wrd65.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd65.Obj);
  goto label_84;

DEFLABEL (label_90)
  if ((Wrd60.Obj) == (Wrd51.Obj))
    goto label_89;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_52_41])), (Wrd50.pObj), (Wrd51.Obj));

DEFLABEL (label_55)
  goto label_88;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_40])), (Wrd45.pObj));

DEFLABEL (label_54)
  (Wrd44.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_39])), (Wrd32.pObj));

DEFLABEL (label_52)
  (Wrd31.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_95)
  (Wrd68.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_5]));
  (Wrd71.Obj) = ((Wrd68.pObj) [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd72.uLng) == 50)
    goto label_97;
  Wrd67 = Wrd71;

DEFLABEL (label_96)
  Wrd73 = Wrd67;
  Rsp = (& (Rsp [1]));
  goto label_83;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_32])), (Wrd68.pObj));

DEFLABEL (label_56)
  (Wrd67.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_31])), (Wrd22.pObj));

DEFLABEL (label_51)
  (Wrd21.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_102)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_101;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_52_30])), (Wrd6.pObj), Rvl);

DEFLABEL (label_50)
  goto label_100;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_23])), (Wrd40.pObj));

DEFLABEL (label_45)
  (Wrd39.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_22])), (Wrd34.pObj));

DEFLABEL (label_44)
  (Wrd33.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_21])), (Wrd28.pObj));

DEFLABEL (label_43)
  (Wrd27.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_111)
  if ((Wrd20.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_110;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_52_19])), (Wrd12.pObj), (Wrd11.Obj));

DEFLABEL (label_42)
  goto label_109;

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_18])), (Wrd6.pObj));

DEFLABEL (label_41)
  (Wrd5.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_116)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_16])), (Wrd21.pObj));

DEFLABEL (label_38)
  (Wrd20.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_117)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_1]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_122;
  Wrd26 = Wrd30;

DEFLABEL (label_121)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_52_1]));
  (Wrd33.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd42.Obj) = ((Wrd32.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_120;

DEFLABEL (label_119)
  ((Wrd32.pObj) [0]) = (Wrd33.Obj);

DEFLABEL (label_118)
  (Wrd47.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd47.Obj);
  goto label_114;

DEFLABEL (label_120)
  if ((Wrd42.Obj) == (Wrd33.Obj))
    goto label_119;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_52_15])), (Wrd32.pObj), (Wrd33.Obj));

DEFLABEL (label_40)
  goto label_118;

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_14])), (Wrd27.pObj));

DEFLABEL (label_39)
  (Wrd26.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_13])), (Wrd14.pObj));

DEFLABEL (label_37)
  (Wrd13.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_127)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_126;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_52_7])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_36)
  goto label_125;

DEFLABEL (lambda_69)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_52_11);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_52_2]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_139;

DEFLABEL (label_138)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_137)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_52_3]));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_136;

DEFLABEL (label_135)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_134)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_52_4]));
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_133;

DEFLABEL (label_132)
  ((Wrd29.pObj) [0]) = (Wrd30.Obj);

DEFLABEL (label_131)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_52_5]));
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd49.Obj) = ((Wrd41.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_130;

DEFLABEL (label_129)
  ((Wrd41.pObj) [0]) = (Wrd42.Obj);

DEFLABEL (label_128)
  Rvl = (current_block [OBJECT_52_3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_130)
  if ((Wrd49.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_129;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_52_28])), (Wrd41.pObj), (Wrd42.Obj));

DEFLABEL (label_49)
  goto label_128;

DEFLABEL (label_133)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_132;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_52_27])), (Wrd29.pObj), (Wrd30.Obj));

DEFLABEL (label_48)
  goto label_131;

DEFLABEL (label_136)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_135;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_52_26])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_47)
  goto label_134;

DEFLABEL (label_139)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_138;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_52_25])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_46)
  goto label_137;

DEFLABEL (lambda_70)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_52_36);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_50]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_51]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_142;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_141)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_44]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_52_51);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_58]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_52_50);
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_140;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  ((Wrd8.pObj) [1]) = Rvl;
  Rvl = (current_block [OBJECT_52_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_140)
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_5]), 2);

DEFLABEL (label_142)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_52]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_4]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (lambda_72)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_52_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_57]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_52_56);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_10]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_146;
  Wrd6 = Wrd10;

DEFLABEL (label_145)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 26)
    goto label_144;

DEFLABEL (label_143)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_144)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_143;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd17.Lng) = ((Wrd19.Lng) - (Wrd21.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_143;
  Rvl = (LONG_TO_FIXNUM (Wrd17.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_146)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_61])), (Wrd7.pObj));

DEFLABEL (label_62)
  (Wrd6.Obj) = Rvl;
  goto label_145;

DEFLABEL (lambda_71)
  CLOSURE_HEADER (LABEL_52_53);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_60]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_52_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_63]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_11]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_152;
  Wrd15 = Wrd19;

DEFLABEL (label_151)
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_7]), 2);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_52_63);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_66]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_52_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_60]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_52_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_68]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_12]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_150;
  Wrd15 = Wrd19;

DEFLABEL (label_149)
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_7]), 2);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_52_68);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_66]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_52_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_60]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_52_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_72]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_73]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_74]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_75]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_52_74);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_13]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_148;
  Wrd11 = Wrd15;

DEFLABEL (label_147)
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_7]), 2);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_52_77);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_28)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_76]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_52_72);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_66]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_52_71);
  (Wrd5.Obj) = (current_block [OBJECT_52_10]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_60]));

DEFLABEL (label_148)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_78])), (Wrd12.pObj));

DEFLABEL (label_65)
  (Wrd11.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_69])), (Wrd16.pObj));

DEFLABEL (label_64)
  (Wrd15.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_64])), (Wrd16.pObj));

DEFLABEL (label_63)
  (Wrd15.Obj) = Rvl;
  goto label_151;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define LABEL_53_7 7
#define LABEL_53_10 9
#define LABEL_53_12 11
#define LABEL_53_9 13
#define LABEL_53_13 15
#define LABEL_53_14 17
#define LABEL_53_18 19
#define LABEL_53_17 21
#define LABEL_53_19 23
#define LABEL_53_23 25
#define LABEL_53_21 27
#define LABEL_53_24 29
#define LABEL_53_25 31
#define LABEL_53_28 33
#define ENVIRONMENT_LABEL_53_3 64
#define DEBUGGING_LABEL_53_2 63
#define OBJECT_53_0 62
#define EXECUTE_CACHE_53_30 35
#define EXECUTE_CACHE_53_29 37
#define EXECUTE_CACHE_53_27 39
#define EXECUTE_CACHE_53_26 41
#define EXECUTE_CACHE_53_22 43
#define EXECUTE_CACHE_53_20 45
#define EXECUTE_CACHE_53_16 47
#define EXECUTE_CACHE_53_15 49
#define EXECUTE_CACHE_53_11 51
#define EXECUTE_CACHE_53_8 53
#define EXECUTE_CACHE_53_6 55
#define FREE_REFERENCE_53_3 58
#define FREE_REFERENCE_53_2 59
#define FREE_REFERENCE_53_1 60
#define FREE_REFERENCE_53_0 61
#define FREE_REFERENCES_LABEL_53_0 34
#define NUMBER_OF_LINKER_SECTIONS_53_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_53_4);
      goto phase_rtl_optimization_11;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_53_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_53_10);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_53_12);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_53_9);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_53_13);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_53_14);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_53_18);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_53_17);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_53_19);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_53_23);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_53_21);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_53_24);
      goto label_16;

    case 14:
      current_block = (Rpc - LABEL_53_25);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_53_28);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_rtl_optimization_18)
DEFLABEL (phase_rtl_optimization_11)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (lambda_19)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_53_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_29;
  Wrd8 = Wrd12;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_53_9);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_27;
  Wrd5 = Wrd9;

DEFLABEL (label_26)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_53_12);

DEFLABEL (label_25)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_53_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_24;
  Wrd8 = Wrd12;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_53_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_53_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_22]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_53_21);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_22;
  Wrd5 = Wrd9;

DEFLABEL (label_21)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_23]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_27]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_53_23);

DEFLABEL (label_20)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_25]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_26]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_53_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_29]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_53_28);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_30]));

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_24])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_18])), (Wrd9.pObj));

DEFLABEL (label_15)
  (Wrd8.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_13])), (Wrd6.pObj));

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_10])), (Wrd9.pObj));

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_7 7
#define ENVIRONMENT_LABEL_54_3 17
#define DEBUGGING_LABEL_54_2 16
#define OBJECT_54_0 15
#define EXECUTE_CACHE_54_8 9
#define EXECUTE_CACHE_54_6 11
#define FREE_REFERENCE_54_0 14
#define FREE_REFERENCES_LABEL_54_0 8
#define NUMBER_OF_LINKER_SECTIONS_54_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_54_4);
      goto phase_rtl_dataflow_analysis_1;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_54_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_rtl_dataflow_analysis_5)
DEFLABEL (phase_rtl_dataflow_analysis_1)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_54_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define TAG_55_6 1
#define LABEL_55_8 7
#define ENVIRONMENT_LABEL_55_3 15
#define DEBUGGING_LABEL_55_2 14
#define OBJECT_55_0 13
#define EXECUTE_CACHE_55_7 9
#define FREE_REFERENCE_55_0 12
#define FREE_REFERENCES_LABEL_55_0 8
#define NUMBER_OF_LINKER_SECTIONS_55_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_55_4);
      goto phase_rtl_rewriting_1;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_55_8);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_rtl_rewriting_5)
DEFLABEL (phase_rtl_rewriting_1)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd5.Obj) = (current_block [OBJECT_55_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_55_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_55_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_8;
  Wrd9 = Wrd13;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_8])), (Wrd10.pObj));

DEFLABEL (label_3)
  (Wrd9.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define LABEL_56_7 7
#define ENVIRONMENT_LABEL_56_3 17
#define DEBUGGING_LABEL_56_2 16
#define OBJECT_56_0 15
#define EXECUTE_CACHE_56_8 9
#define EXECUTE_CACHE_56_6 11
#define FREE_REFERENCE_56_0 14
#define FREE_REFERENCES_LABEL_56_0 8
#define NUMBER_OF_LINKER_SECTIONS_56_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_56_4);
      goto phase_common_subexpression_elimination_1;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_56_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_common_subexpression_elimination_5)
DEFLABEL (phase_common_subexpression_elimination_1)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_56_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_56_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_7 7
#define ENVIRONMENT_LABEL_57_3 17
#define DEBUGGING_LABEL_57_2 16
#define OBJECT_57_0 15
#define EXECUTE_CACHE_57_8 9
#define EXECUTE_CACHE_57_6 11
#define FREE_REFERENCE_57_0 14
#define FREE_REFERENCES_LABEL_57_0 8
#define NUMBER_OF_LINKER_SECTIONS_57_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_57_4);
      goto phase_invertible_expression_elimination_1;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_57_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_invertible_expression_elimination_5)
DEFLABEL (phase_invertible_expression_elimination_1)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_57_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_57_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_7 7
#define ENVIRONMENT_LABEL_58_3 17
#define DEBUGGING_LABEL_58_2 16
#define OBJECT_58_0 15
#define EXECUTE_CACHE_58_8 9
#define EXECUTE_CACHE_58_6 11
#define FREE_REFERENCE_58_0 14
#define FREE_REFERENCES_LABEL_58_0 8
#define NUMBER_OF_LINKER_SECTIONS_58_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_58_4);
      goto phase_common_suffix_merging_1;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_58_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_common_suffix_merging_5)
DEFLABEL (phase_common_suffix_merging_1)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_58_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_58_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_7 7
#define ENVIRONMENT_LABEL_59_3 17
#define DEBUGGING_LABEL_59_2 16
#define OBJECT_59_0 15
#define EXECUTE_CACHE_59_8 9
#define EXECUTE_CACHE_59_6 11
#define FREE_REFERENCE_59_0 14
#define FREE_REFERENCES_LABEL_59_0 8
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_59_4);
      goto phase_lifetime_analysis_1;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_59_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_lifetime_analysis_5)
DEFLABEL (phase_lifetime_analysis_1)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_59_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_59_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define LABEL_60_7 7
#define ENVIRONMENT_LABEL_60_3 17
#define DEBUGGING_LABEL_60_2 16
#define OBJECT_60_0 15
#define EXECUTE_CACHE_60_8 9
#define EXECUTE_CACHE_60_6 11
#define FREE_REFERENCE_60_0 14
#define FREE_REFERENCES_LABEL_60_0 8
#define NUMBER_OF_LINKER_SECTIONS_60_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_60_4);
      goto phase_code_compression_1;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_60_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_code_compression_5)
DEFLABEL (phase_code_compression_1)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_60_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_60_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_7 7
#define ENVIRONMENT_LABEL_61_3 17
#define DEBUGGING_LABEL_61_2 16
#define OBJECT_61_0 15
#define EXECUTE_CACHE_61_8 9
#define EXECUTE_CACHE_61_6 11
#define FREE_REFERENCE_61_0 14
#define FREE_REFERENCES_LABEL_61_0 8
#define NUMBER_OF_LINKER_SECTIONS_61_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_61_4);
      goto phase_linearization_analysis_1;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_61_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_linearization_analysis_5)
DEFLABEL (phase_linearization_analysis_1)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_61_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_61_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_7 7
#define ENVIRONMENT_LABEL_62_3 17
#define DEBUGGING_LABEL_62_2 16
#define OBJECT_62_0 15
#define EXECUTE_CACHE_62_8 9
#define EXECUTE_CACHE_62_6 11
#define FREE_REFERENCE_62_0 14
#define FREE_REFERENCES_LABEL_62_0 8
#define NUMBER_OF_LINKER_SECTIONS_62_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_62_4);
      goto phase_register_allocation_1;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_62_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_register_allocation_5)
DEFLABEL (phase_register_allocation_1)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_62_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_62_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_8]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_6 7
#define LABEL_63_7 9
#define LABEL_63_9 11
#define LABEL_63_11 13
#define LABEL_63_13 15
#define LABEL_63_15 17
#define LABEL_63_17 19
#define ENVIRONMENT_LABEL_63_3 40
#define DEBUGGING_LABEL_63_2 39
#define OBJECT_63_0 38
#define EXECUTE_CACHE_63_19 21
#define EXECUTE_CACHE_63_18 23
#define EXECUTE_CACHE_63_16 25
#define EXECUTE_CACHE_63_14 27
#define EXECUTE_CACHE_63_12 29
#define EXECUTE_CACHE_63_10 31
#define EXECUTE_CACHE_63_8 33
#define FREE_REFERENCE_63_1 36
#define FREE_REFERENCE_63_0 37
#define FREE_REFERENCES_LABEL_63_0 20
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_63_4);
      goto phase_rtl_optimization_cleanup_6;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_63_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_63_7);
      goto lambda_5;

    case 4:
      current_block = (Rpc - LABEL_63_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_63_11);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_63_13);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_63_15);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_63_17);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_rtl_optimization_cleanup_11)
DEFLABEL (phase_rtl_optimization_cleanup_6)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_17;
  Wrd5 = Wrd9;

DEFLABEL (label_16)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = (current_block [OBJECT_63_0]);
  goto pop_return;

DEFLABEL (label_13)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_15;
  Wrd13 = Wrd17;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_8]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_6])), (Wrd14.pObj));

DEFLABEL (label_9)
  (Wrd13.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_5])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_12)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_63_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_63_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_63_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_63_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_63_17);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_19]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define TAG_64_6 1
#define LABEL_64_8 7
#define LABEL_64_11 9
#define LABEL_64_10 11
#define LABEL_64_13 13
#define LABEL_64_15 15
#define LABEL_64_17 17
#define LABEL_64_18 19
#define LABEL_64_21 21
#define LABEL_64_22 23
#define LABEL_64_23 25
#define LABEL_64_25 27
#define LABEL_64_19 29
#define LABEL_64_26 31
#define LABEL_64_27 33
#define LABEL_64_20 35
#define LABEL_64_28 37
#define ENVIRONMENT_LABEL_64_3 68
#define DEBUGGING_LABEL_64_2 67
#define OBJECT_64_4 66
#define OBJECT_64_3 65
#define OBJECT_64_2 64
#define OBJECT_64_1 63
#define OBJECT_64_0 62
#define EXECUTE_CACHE_64_31 39
#define EXECUTE_CACHE_64_30 41
#define EXECUTE_CACHE_64_29 43
#define EXECUTE_CACHE_64_24 45
#define EXECUTE_CACHE_64_16 47
#define EXECUTE_CACHE_64_14 49
#define EXECUTE_CACHE_64_12 51
#define EXECUTE_CACHE_64_9 53
#define EXECUTE_CACHE_64_7 55
#define FREE_REFERENCE_64_3 58
#define FREE_REFERENCE_64_2 59
#define FREE_REFERENCE_64_1 60
#define FREE_REFERENCE_64_0 61
#define FREE_REFERENCES_LABEL_64_0 38
#define NUMBER_OF_LINKER_SECTIONS_64_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_64_4);
      goto phase_rtl_file_output_12;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto lambda_22;

    case 2:
      current_block = (Rpc - LABEL_64_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_64_11);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_64_10);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_64_13);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_64_15);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_64_17);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_64_18);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_64_21);
      goto label_15;

    case 10:
      current_block = (Rpc - LABEL_64_22);
      goto label_16;

    case 11:
      current_block = (Rpc - LABEL_64_23);
      goto label_17;

    case 12:
      current_block = (Rpc - LABEL_64_25);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_64_19);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_64_26);
      goto label_18;

    case 15:
      current_block = (Rpc - LABEL_64_27);
      goto label_19;

    case 16:
      current_block = (Rpc - LABEL_64_20);
      goto continuation_6;

    case 17:
      current_block = (Rpc - LABEL_64_28);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_rtl_file_output_21)
DEFLABEL (phase_rtl_file_output_12)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_64_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_64_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_64_0]);
  (Rsp [0]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_7]));

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_64_5);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_64_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_35;
  Wrd11 = Wrd15;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_64_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_64_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_64_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_64_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_64_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_64_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_33;
  Wrd14 = Wrd18;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_2]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_31;
  Wrd20 = Wrd24;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_3]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_29;
  Wrd26 = Wrd30;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_24]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_64_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_31]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_64_19);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_27;
  Wrd6 = Wrd10;

DEFLABEL (label_26)
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_25;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if (! ((Wrd28.Lng) == 0))
    goto label_24;

DEFLABEL (label_23)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Rsp [0]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_30]));

DEFLABEL (label_24)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_28]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_64_4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_29]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_64_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_64_25);
  goto label_23;

DEFLABEL (label_25)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_27]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_23;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_26])), (Wrd7.pObj));

DEFLABEL (label_18)
  (Wrd6.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_23])), (Wrd27.pObj));

DEFLABEL (label_17)
  (Wrd26.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_22])), (Wrd21.pObj));

DEFLABEL (label_16)
  (Wrd20.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_21])), (Wrd15.pObj));

DEFLABEL (label_15)
  (Wrd14.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_11])), (Wrd12.pObj));

DEFLABEL (label_14)
  (Wrd11.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_7 7
#define LABEL_65_9 9
#define LABEL_65_12 11
#define LABEL_65_13 13
#define LABEL_65_16 15
#define LABEL_65_15 17
#define LABEL_65_10 19
#define LABEL_65_21 21
#define LABEL_65_11 23
#define LABEL_65_24 25
#define LABEL_65_17 27
#define LABEL_65_27 29
#define LABEL_65_18 31
#define LABEL_65_30 33
#define LABEL_65_20 35
#define LABEL_65_32 37
#define LABEL_65_23 39
#define LABEL_65_26 41
#define LABEL_65_34 43
#define LABEL_65_35 45
#define LABEL_65_29 47
#define LABEL_65_33 49
#define ENVIRONMENT_LABEL_65_3 81
#define DEBUGGING_LABEL_65_2 80
#define OBJECT_65_2 79
#define OBJECT_65_1 78
#define OBJECT_65_0 77
#define EXECUTE_CACHE_65_36 51
#define EXECUTE_CACHE_65_31 53
#define EXECUTE_CACHE_65_28 55
#define EXECUTE_CACHE_65_25 57
#define EXECUTE_CACHE_65_22 59
#define EXECUTE_CACHE_65_19 61
#define EXECUTE_CACHE_65_14 63
#define EXECUTE_CACHE_65_8 65
#define EXECUTE_CACHE_65_6 67
#define FREE_REFERENCE_65_3 70
#define FREE_REFERENCE_65_2 71
#define FREE_REFERENCE_65_1 72
#define FREE_REFERENCE_65_0 73
#define FREE_ASSIGNMENT_65_1 75
#define FREE_ASSIGNMENT_65_0 76
#define FREE_REFERENCES_LABEL_65_0 50
#define NUMBER_OF_LINKER_SECTIONS_65_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_65_4);
      goto phase_lap_generation_14;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto lambda_13;

    case 2:
      current_block = (Rpc - LABEL_65_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_65_9);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_65_12);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_65_13);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_65_16);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_65_15);
      goto lambda_12;

    case 8:
      current_block = (Rpc - LABEL_65_10);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_65_21);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_65_11);
      goto continuation_1;

    case 11:
      current_block = (Rpc - LABEL_65_24);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_65_17);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_65_27);
      goto label_22;

    case 14:
      current_block = (Rpc - LABEL_65_18);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_65_30);
      goto label_23;

    case 16:
      current_block = (Rpc - LABEL_65_20);
      goto continuation_6;

    case 17:
      current_block = (Rpc - LABEL_65_32);
      goto label_24;

    case 18:
      current_block = (Rpc - LABEL_65_23);
      goto continuation_3;

    case 19:
      current_block = (Rpc - LABEL_65_26);
      goto continuation_10;

    case 20:
      current_block = (Rpc - LABEL_65_34);
      goto label_25;

    case 21:
      current_block = (Rpc - LABEL_65_35);
      goto label_26;

    case 22:
      current_block = (Rpc - LABEL_65_29);
      goto continuation_7;

    case 23:
      current_block = (Rpc - LABEL_65_33);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_lap_generation_28)
DEFLABEL (phase_lap_generation_14)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_65_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (lambda_29)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_65_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_41;
  Wrd5 = Wrd9;

DEFLABEL (label_40)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_65_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_2]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_32;
  Wrd15 = Wrd19;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_14]));

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_16])), (Wrd16.pObj));

DEFLABEL (label_17)
  (Wrd15.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_39;
  Wrd28 = Wrd32;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_2]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_37;
  Wrd34 = Wrd38;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_65_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_35;
  Wrd8 = Wrd12;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_25]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_65_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_65_33);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_36]));

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_24])), (Wrd9.pObj));

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_13])), (Wrd35.pObj));

DEFLABEL (label_19)
  (Wrd34.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_12])), (Wrd29.pObj));

DEFLABEL (label_18)
  (Wrd28.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_9])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_40;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_65_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_46;
  Wrd8 = Wrd12;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_22]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_65_20);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_65_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_42)
  Rvl = (current_block [OBJECT_65_2]);
  goto pop_return;

DEFLABEL (label_44)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_65_32])), (Wrd6.pObj), Rvl);

DEFLABEL (label_24)
  goto label_42;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_21])), (Wrd9.pObj));

DEFLABEL (label_20)
  (Wrd8.Obj) = Rvl;
  goto label_45;

DEFLABEL (lambda_30)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_65_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_19]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_65_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_56;
  Wrd8 = Wrd12;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_31]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_65_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_36]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_65_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_54;
  Wrd8 = Wrd12;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_28]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_65_26);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_65_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_50)
  (Wrd21.Obj) = ((SCHEME_OBJECT) 0);
  (Wrd23.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd20.pObj) = (& (Rhp [-4]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd20.pObj)));
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_65_1]));
  (Wrd35.Obj) = ((Wrd27.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_49;

DEFLABEL (label_48)
  ((Wrd27.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_47)
  Rvl = (current_block [OBJECT_65_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd33.Obj) = (MAKE_OBJECT (50, (Wrd21.uLng)));
  if ((Wrd35.Obj) == (Wrd33.Obj))
    goto label_48;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_65_35])), (Wrd27.pObj), (Wrd18.Obj));

DEFLABEL (label_26)
  goto label_47;

DEFLABEL (label_52)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_51;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_65_34])), (Wrd6.pObj), Rvl);

DEFLABEL (label_25)
  goto label_50;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_27])), (Wrd9.pObj));

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_30])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_55;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_10 7
#define LABEL_66_11 9
#define LABEL_66_12 11
#define LABEL_66_7 13
#define LABEL_66_14 15
#define LABEL_66_18 17
#define LABEL_66_19 19
#define LABEL_66_20 21
#define LABEL_66_8 23
#define LABEL_66_9 25
#define LABEL_66_23 27
#define LABEL_66_15 29
#define LABEL_66_25 31
#define LABEL_66_26 33
#define LABEL_66_27 35
#define LABEL_66_28 37
#define LABEL_66_29 39
#define LABEL_66_30 41
#define LABEL_66_31 43
#define LABEL_66_16 45
#define LABEL_66_32 47
#define LABEL_66_33 49
#define LABEL_66_34 51
#define LABEL_66_17 53
#define ENVIRONMENT_LABEL_66_3 86
#define DEBUGGING_LABEL_66_2 85
#define OBJECT_66_1 84
#define OBJECT_66_0 83
#define EXECUTE_CACHE_66_24 55
#define EXECUTE_CACHE_66_22 57
#define EXECUTE_CACHE_66_21 59
#define EXECUTE_CACHE_66_13 61
#define EXECUTE_CACHE_66_6 63
#define FREE_REFERENCE_66_5 66
#define FREE_REFERENCE_66_4 67
#define FREE_REFERENCE_66_3 68
#define FREE_REFERENCE_66_2 69
#define FREE_REFERENCE_66_1 70
#define FREE_REFERENCE_66_0 71
#define FREE_ASSIGNMENT_66_9 73
#define FREE_ASSIGNMENT_66_8 74
#define FREE_ASSIGNMENT_66_7 75
#define FREE_ASSIGNMENT_66_6 76
#define FREE_ASSIGNMENT_66_5 77
#define FREE_ASSIGNMENT_66_4 78
#define FREE_ASSIGNMENT_66_3 79
#define FREE_ASSIGNMENT_66_2 80
#define FREE_ASSIGNMENT_66_1 81
#define FREE_ASSIGNMENT_66_0 82
#define FREE_REFERENCES_LABEL_66_0 54
#define NUMBER_OF_LINKER_SECTIONS_66_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_66_4);
      goto phase_lap_linearization_7;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_66_10);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_66_11);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_66_12);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_66_7);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_66_14);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_66_18);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_66_19);
      goto label_14;

    case 9:
      current_block = (Rpc - LABEL_66_20);
      goto label_15;

    case 10:
      current_block = (Rpc - LABEL_66_8);
      goto continuation_1;

    case 11:
      current_block = (Rpc - LABEL_66_9);
      goto continuation_0;

    case 12:
      current_block = (Rpc - LABEL_66_23);
      goto label_16;

    case 13:
      current_block = (Rpc - LABEL_66_15);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_66_25);
      goto label_17;

    case 15:
      current_block = (Rpc - LABEL_66_26);
      goto label_18;

    case 16:
      current_block = (Rpc - LABEL_66_27);
      goto label_19;

    case 17:
      current_block = (Rpc - LABEL_66_28);
      goto label_20;

    case 18:
      current_block = (Rpc - LABEL_66_29);
      goto label_21;

    case 19:
      current_block = (Rpc - LABEL_66_30);
      goto label_22;

    case 20:
      current_block = (Rpc - LABEL_66_31);
      goto label_23;

    case 21:
      current_block = (Rpc - LABEL_66_16);
      goto lambda_3;

    case 22:
      current_block = (Rpc - LABEL_66_32);
      goto label_24;

    case 23:
      current_block = (Rpc - LABEL_66_33);
      goto label_25;

    case 24:
      current_block = (Rpc - LABEL_66_34);
      goto label_26;

    case 25:
      current_block = (Rpc - LABEL_66_17);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_lap_linearization_28)
DEFLABEL (phase_lap_linearization_7)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_66_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (lambda_29)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_66_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_68;
  Wrd14 = Wrd18;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_66;
  Wrd20 = Wrd24;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_2]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_64;
  Wrd26 = Wrd30;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_4]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_62;
  Wrd5 = Wrd9;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_24]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_66_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_22]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_66_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_66_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_58)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_57;
  Wrd26 = Wrd30;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_55;
  Wrd32 = Wrd36;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_3]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_53;
  Wrd38 = Wrd42;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_66_17);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_66_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_5]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_51;
  Wrd5 = Wrd9;

DEFLABEL (label_50)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;

DEFLABEL (label_31)
  Rvl = (current_block [OBJECT_66_1]);
  goto pop_return;

DEFLABEL (label_32)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_66_1]));
  (Wrd14.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd23.Obj) = ((Wrd13.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_49;

DEFLABEL (label_48)
  ((Wrd13.pObj) [0]) = (Wrd14.Obj);

DEFLABEL (label_47)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_66_2]));
  (Wrd28.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd37.Obj) = ((Wrd27.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd27.pObj) [0]) = (Wrd28.Obj);

DEFLABEL (label_44)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_66_3]));
  (Wrd42.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd51.Obj) = ((Wrd41.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd41.pObj) [0]) = (Wrd42.Obj);

DEFLABEL (label_41)
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_66_4]));
  (Wrd56.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd65.Obj) = ((Wrd55.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  ((Wrd55.pObj) [0]) = (Wrd56.Obj);

DEFLABEL (label_38)
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_66_5]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_35)
  (Wrd83.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_66_6]));
  (Wrd84.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd93.Obj) = ((Wrd83.pObj) [0]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if ((Wrd94.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd83.pObj) [0]) = (Wrd84.Obj);
  goto label_31;

DEFLABEL (label_34)
  if ((Wrd93.Obj) == (Wrd84.Obj))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_66_31])), (Wrd83.pObj), (Wrd84.Obj));

DEFLABEL (label_23)
  goto label_31;

DEFLABEL (label_37)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_36;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_66_30])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_22)
  goto label_35;

DEFLABEL (label_40)
  if ((Wrd65.Obj) == (Wrd56.Obj))
    goto label_39;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_66_29])), (Wrd55.pObj), (Wrd56.Obj));

DEFLABEL (label_21)
  goto label_38;

DEFLABEL (label_43)
  if ((Wrd51.Obj) == (Wrd42.Obj))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_66_28])), (Wrd41.pObj), (Wrd42.Obj));

DEFLABEL (label_20)
  goto label_41;

DEFLABEL (label_46)
  if ((Wrd37.Obj) == (Wrd28.Obj))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_66_27])), (Wrd27.pObj), (Wrd28.Obj));

DEFLABEL (label_19)
  goto label_44;

DEFLABEL (label_49)
  if ((Wrd23.Obj) == (Wrd14.Obj))
    goto label_48;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_66_26])), (Wrd13.pObj), (Wrd14.Obj));

DEFLABEL (label_18)
  goto label_47;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_25])), (Wrd6.pObj));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_20])), (Wrd39.pObj));

DEFLABEL (label_15)
  (Wrd38.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_19])), (Wrd33.pObj));

DEFLABEL (label_14)
  (Wrd32.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_18])), (Wrd27.pObj));

DEFLABEL (label_13)
  (Wrd26.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_60)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_66_14])), (Wrd6.pObj), Rvl);

DEFLABEL (label_12)
  goto label_58;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_23])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_12])), (Wrd27.pObj));

DEFLABEL (label_11)
  (Wrd26.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_11])), (Wrd21.pObj));

DEFLABEL (label_10)
  (Wrd20.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_10])), (Wrd15.pObj));

DEFLABEL (label_9)
  (Wrd14.Obj) = Rvl;
  goto label_67;

DEFLABEL (lambda_30)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_66_16);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_66_7]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_75)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_66_8]));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_74;

DEFLABEL (label_73)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_72)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_66_9]));
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_71;

DEFLABEL (label_70)
  ((Wrd29.pObj) [0]) = (Wrd30.Obj);

DEFLABEL (label_69)
  Rvl = (current_block [OBJECT_66_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_71)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_70;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_66_34])), (Wrd29.pObj), (Wrd30.Obj));

DEFLABEL (label_26)
  goto label_69;

DEFLABEL (label_74)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_73;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_66_33])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_25)
  goto label_72;

DEFLABEL (label_77)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_76;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_66_32])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_24)
  goto label_75;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define TAG_67_6 1
#define LABEL_67_10 7
#define TAG_67_11 2
#define LABEL_67_8 9
#define TAG_67_9 3
#define LABEL_67_16 11
#define LABEL_67_17 13
#define LABEL_67_18 15
#define LABEL_67_19 17
#define LABEL_67_20 19
#define LABEL_67_21 21
#define LABEL_67_13 23
#define TAG_67_14 10
#define LABEL_67_22 25
#define LABEL_67_25 27
#define LABEL_67_24 29
#define LABEL_67_27 31
#define LABEL_67_29 33
#define LABEL_67_30 35
#define LABEL_67_32 37
#define LABEL_67_34 39
#define LABEL_67_35 41
#define LABEL_67_37 43
#define LABEL_67_40 45
#define LABEL_67_36 47
#define LABEL_67_41 49
#define LABEL_67_42 51
#define LABEL_67_38 53
#define LABEL_67_46 55
#define LABEL_67_48 57
#define LABEL_67_49 59
#define LABEL_67_50 61
#define LABEL_67_43 63
#define LABEL_67_52 65
#define LABEL_67_51 67
#define LABEL_67_47 69
#define LABEL_67_53 71
#define LABEL_67_54 73
#define LABEL_67_55 75
#define LABEL_67_56 77
#define LABEL_67_58 79
#define LABEL_67_57 81
#define LABEL_67_59 83
#define LABEL_67_60 85
#define LABEL_67_61 87
#define ENVIRONMENT_LABEL_67_3 136
#define DEBUGGING_LABEL_67_2 135
#define OBJECT_67_15 134
#define OBJECT_67_14 133
#define OBJECT_67_13 132
#define OBJECT_67_12 131
#define OBJECT_67_11 130
#define OBJECT_67_10 129
#define OBJECT_67_9 128
#define OBJECT_67_8 127
#define OBJECT_67_7 126
#define OBJECT_67_6 125
#define OBJECT_67_5 124
#define OBJECT_67_4 123
#define OBJECT_67_3 122
#define OBJECT_67_2 121
#define OBJECT_67_1 120
#define OBJECT_67_0 119
#define EXECUTE_CACHE_67_45 89
#define EXECUTE_CACHE_67_44 91
#define EXECUTE_CACHE_67_39 93
#define EXECUTE_CACHE_67_33 95
#define EXECUTE_CACHE_67_31 97
#define EXECUTE_CACHE_67_28 99
#define EXECUTE_CACHE_67_26 101
#define EXECUTE_CACHE_67_23 103
#define EXECUTE_CACHE_67_15 105
#define EXECUTE_CACHE_67_12 107
#define EXECUTE_CACHE_67_7 109
#define FREE_REFERENCE_67_3 112
#define FREE_REFERENCE_67_2 113
#define FREE_REFERENCE_67_1 114
#define FREE_REFERENCE_67_0 115
#define FREE_ASSIGNMENT_67_1 117
#define FREE_ASSIGNMENT_67_0 118
#define FREE_REFERENCES_LABEL_67_0 88
#define NUMBER_OF_LINKER_SECTIONS_67_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
toplev_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd13;
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
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_67_4);
      goto phase_lap_file_output_51;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto lambda_73;

    case 2:
      current_block = (Rpc - LABEL_67_10);
      goto lambda_75;

    case 3:
      current_block = (Rpc - LABEL_67_8);
      goto swapB_74;

    case 4:
      current_block = (Rpc - LABEL_67_16);
      goto label_53;

    case 5:
      current_block = (Rpc - LABEL_67_17);
      goto label_54;

    case 6:
      current_block = (Rpc - LABEL_67_18);
      goto label_55;

    case 7:
      current_block = (Rpc - LABEL_67_19);
      goto label_56;

    case 8:
      current_block = (Rpc - LABEL_67_20);
      goto label_57;

    case 9:
      current_block = (Rpc - LABEL_67_21);
      goto label_58;

    case 10:
      current_block = (Rpc - LABEL_67_13);
      goto lambda_76;

    case 11:
      current_block = (Rpc - LABEL_67_22);
      goto continuation_0;

    case 12:
      current_block = (Rpc - LABEL_67_25);
      goto label_59;

    case 13:
      current_block = (Rpc - LABEL_67_24);
      goto continuation_1;

    case 14:
      current_block = (Rpc - LABEL_67_27);
      goto continuation_2;

    case 15:
      current_block = (Rpc - LABEL_67_29);
      goto continuation_4;

    case 16:
      current_block = (Rpc - LABEL_67_30);
      goto continuation_3;

    case 17:
      current_block = (Rpc - LABEL_67_32);
      goto continuation_5;

    case 18:
      current_block = (Rpc - LABEL_67_34);
      goto continuation_6;

    case 19:
      current_block = (Rpc - LABEL_67_35);
      goto continuation_7;

    case 20:
      current_block = (Rpc - LABEL_67_37);
      goto label_60;

    case 21:
      current_block = (Rpc - LABEL_67_40);
      goto continuation_33;

    case 22:
      current_block = (Rpc - LABEL_67_36);
      goto continuation_30;

    case 23:
      current_block = (Rpc - LABEL_67_41);
      goto label_61;

    case 24:
      current_block = (Rpc - LABEL_67_42);
      goto label_62;

    case 25:
      current_block = (Rpc - LABEL_67_38);
      goto lambda_29;

    case 26:
      current_block = (Rpc - LABEL_67_46);
      goto label_64;

    case 27:
      current_block = (Rpc - LABEL_67_48);
      goto label_65;

    case 28:
      current_block = (Rpc - LABEL_67_49);
      goto label_66;

    case 29:
      current_block = (Rpc - LABEL_67_50);
      goto label_63;

    case 30:
      current_block = (Rpc - LABEL_67_43);
      goto continuation_32;

    case 31:
      current_block = (Rpc - LABEL_67_52);
      goto continuation_14;

    case 32:
      current_block = (Rpc - LABEL_67_51);
      goto continuation_16;

    case 33:
      current_block = (Rpc - LABEL_67_47);
      goto continuation_28;

    case 34:
      current_block = (Rpc - LABEL_67_53);
      goto continuation_15;

    case 35:
      current_block = (Rpc - LABEL_67_54);
      goto continuation_17;

    case 36:
      current_block = (Rpc - LABEL_67_55);
      goto label_67;

    case 37:
      current_block = (Rpc - LABEL_67_56);
      goto lambda_24;

    case 38:
      current_block = (Rpc - LABEL_67_58);
      goto continuation_22;

    case 39:
      current_block = (Rpc - LABEL_67_57);
      goto continuation_18;

    case 40:
      current_block = (Rpc - LABEL_67_59);
      goto label_68;

    case 41:
      current_block = (Rpc - LABEL_67_60);
      goto label_69;

    case 42:
      current_block = (Rpc - LABEL_67_61);
      goto label_70;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_lap_file_output_72)
DEFLABEL (phase_lap_file_output_51)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_67_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_67_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_67_0]);
  (Rsp [0]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_7]));

DEFLABEL (lambda_73)
  CLOSURE_HEADER (LABEL_67_5);

DEFLABEL (lambda_50)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (current_block [OBJECT_67_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_67_2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_67_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_67_8])));
  Rhp += 2;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  Wrd31 = Wrd33;
  ((Wrd31.pObj) [2]) = (Wrd7.Obj);
  ((Wrd31.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd34.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_67_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_67_10])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd22 = Wrd17;
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd24.pObj) [3]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Rsp [2]) = (Wrd16.Obj);
  (Rsp [3]) = (Wrd34.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_12]));

DEFLABEL (lambda_75)
  CLOSURE_HEADER (LABEL_67_10);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_67_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_67_13])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd15 = Wrd10;
  ((Wrd15.pObj) [2]) = (Wrd7.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_15]));

DEFLABEL (swapB_74)
  CLOSURE_HEADER (LABEL_67_8);

DEFLABEL (swapB_48)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_96;

DEFLABEL (label_95)
  Wrd5 = Wrd9;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_67_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_93;

DEFLABEL (label_92)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_91)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_67_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_90;

DEFLABEL (label_89)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_88)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_87;

DEFLABEL (label_86)
  Wrd57 = Wrd61;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_67_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_84;

DEFLABEL (label_83)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_82)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_67_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_81;

DEFLABEL (label_80)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_79)
  Rvl = (current_block [OBJECT_67_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_81)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_80;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_67_21])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_58)
  goto label_79;

DEFLABEL (label_84)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_83;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_67_20])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_57)
  goto label_82;

DEFLABEL (label_87)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_86;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_67_19])), (Wrd58.pObj));

DEFLABEL (label_56)
  (Wrd57.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_90)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_89;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_67_18])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_55)
  goto label_88;

DEFLABEL (label_93)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_92;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_67_17])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_54)
  goto label_91;

DEFLABEL (label_96)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_95;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_67_16])), (Wrd6.pObj));

DEFLABEL (label_53)
  (Wrd5.Obj) = Rvl;
  goto label_94;

DEFLABEL (lambda_76)
  CLOSURE_HEADER (LABEL_67_13);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_23]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_105;
  Wrd8 = Wrd12;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_26]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_67_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_28]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_67_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_30]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_31]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_67_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_33]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_67_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_28]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_67_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_28]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_67_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_28]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_67_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_103;
  Wrd8 = Wrd12;

DEFLABEL (label_102)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_38]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_39]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_67_36);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_101;
  Wrd6 = Wrd10;

DEFLABEL (label_100)
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_99;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if (! ((Wrd25.Lng) == 0))
    goto label_98;

DEFLABEL (label_97)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Rsp [0]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_45]));

DEFLABEL (label_98)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_43]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_67_6]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_44]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_67_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_28]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_67_40);
  goto label_97;

DEFLABEL (label_99)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_42]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_62)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;
  goto label_97;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_41])), (Wrd7.pObj));

DEFLABEL (label_61)
  (Wrd6.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_37])), (Wrd9.pObj));

DEFLABEL (label_60)
  (Wrd8.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_25])), (Wrd9.pObj));

DEFLABEL (label_59)
  (Wrd8.Obj) = Rvl;
  goto label_104;

DEFLABEL (lambda_77)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_67_38);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_112;

DEFLABEL (label_111)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_108;

DEFLABEL (label_107)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_52]))));
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_106)
  (Wrd26.Obj) = (current_block [OBJECT_67_11]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_44]));

DEFLABEL (label_108)
  if (! ((Wrd8.uLng) == 1))
    goto label_110;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_109)
  if (! ((Wrd13.Obj) == (current_block [OBJECT_67_10])))
    goto label_107;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_51]))));
  (* (--Rsp)) = (Wrd25.Obj);
  goto label_106;

DEFLABEL (label_110)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_50]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_7]), 1);

DEFLABEL (label_63)
  (Wrd13.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  if (! ((Wrd6.uLng) == 1))
    goto label_118;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_117)
  if (! ((Wrd27.Obj) == (current_block [OBJECT_67_8])))
    goto label_111;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_47]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_116;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_115)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_114;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_113)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_26]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_67_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_44]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_67_53);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_28]));

DEFLABEL (label_114)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_49]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_7]), 1);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_48]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_9]), 1);

DEFLABEL (label_65)
  (Wrd40.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_46]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_7]), 1);

DEFLABEL (label_64)
  (Wrd27.Obj) = Rvl;
  goto label_117;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_67_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_26]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_67_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_23]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_67_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_120;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_119)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_56]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_39]));

DEFLABEL (label_120)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_55]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_9]), 1);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_119;

DEFLABEL (lambda_78)
DEFLABEL (lambda_24)
  INTERRUPT_CHECK (26, LABEL_67_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_67_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd9.uLng) == 1)
    goto label_124;

DEFLABEL (label_123)
  (Wrd11.Obj) = (Rsp [1]);

DEFLABEL (label_122)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_121)
  (Rsp [0]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_26]));

DEFLABEL (label_124)
  if (! ((Wrd9.uLng) == 1))
    goto label_129;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_128)
  if (! ((Wrd12.Obj) == (current_block [OBJECT_67_15])))
    goto label_123;
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_127;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_126)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_125;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd11.Obj) = ((Wrd32.pObj) [0]);
  goto label_122;

DEFLABEL (label_125)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_61]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_7]), 1);

DEFLABEL (label_70)
  (Wrd11.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_127)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_60]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_9]), 1);

DEFLABEL (label_69)
  (Wrd22.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_59]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_7]), 1);

DEFLABEL (label_68)
  (Wrd12.Obj) = Rvl;
  goto label_128;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_67_58);
  (Wrd11.Obj) = Rvl;
  goto label_121;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_8 9
#define LABEL_14 11
#define LABEL_9 13
#define TAG_10 5
#define LABEL_11 15
#define LABEL_12 17
#define LABEL_15 19
#define LABEL_24 21
#define LABEL_26 23
#define LABEL_27 25
#define LABEL_16 27
#define LABEL_29 29
#define LABEL_17 31
#define LABEL_19 33
#define LABEL_21 35
#define LABEL_22 37
#define LABEL_32 39
#define TAG_33 18
#define LABEL_30 41
#define TAG_31 19
#define LABEL_41 43
#define LABEL_42 45
#define LABEL_43 47
#define LABEL_44 49
#define LABEL_45 51
#define LABEL_46 53
#define LABEL_36 55
#define LABEL_38 57
#define LABEL_39 59
#define LABEL_52 61
#define LABEL_53 63
#define LABEL_50 65
#define TAG_51 31
#define LABEL_48 67
#define TAG_49 32
#define LABEL_58 69
#define LABEL_59 71
#define LABEL_60 73
#define LABEL_61 75
#define LABEL_55 77
#define LABEL_54 79
#define LABEL_65 81
#define LABEL_66 83
#define TAG_67 40
#define LABEL_62 85
#define TAG_63 41
#define LABEL_69 87
#define LABEL_71 89
#define LABEL_72 91
#define LABEL_73 93
#define LABEL_75 95
#define LABEL_76 97
#define LABEL_77 99
#define LABEL_80 101
#define TAG_81 49
#define LABEL_83 103
#define LABEL_85 105
#define LABEL_86 107
#define LABEL_87 109
#define LABEL_88 111
#define ENVIRONMENT_LABEL_3 192
#define DEBUGGING_LABEL_2 191
#define PURIFICATION_ROOT 190
#define OBJECT_20 189
#define OBJECT_19 188
#define OBJECT_18 187
#define OBJECT_17 186
#define OBJECT_16 185
#define OBJECT_15 184
#define OBJECT_14 183
#define OBJECT_13 182
#define OBJECT_12 181
#define OBJECT_11 180
#define OBJECT_10 179
#define OBJECT_9 178
#define OBJECT_8 177
#define OBJECT_7 176
#define OBJECT_6 175
#define OBJECT_5 174
#define OBJECT_4 173
#define OBJECT_3 172
#define OBJECT_2 171
#define OBJECT_1 170
#define OBJECT_0 169
#define EXECUTE_CACHE_84 113
#define EXECUTE_CACHE_82 115
#define EXECUTE_CACHE_79 117
#define EXECUTE_CACHE_78 119
#define EXECUTE_CACHE_74 121
#define EXECUTE_CACHE_70 123
#define EXECUTE_CACHE_68 125
#define EXECUTE_CACHE_64 127
#define EXECUTE_CACHE_57 129
#define EXECUTE_CACHE_56 131
#define EXECUTE_CACHE_47 133
#define EXECUTE_CACHE_40 135
#define EXECUTE_CACHE_37 137
#define EXECUTE_CACHE_35 139
#define EXECUTE_CACHE_34 141
#define EXECUTE_CACHE_28 143
#define EXECUTE_CACHE_25 145
#define EXECUTE_CACHE_23 147
#define EXECUTE_CACHE_20 149
#define EXECUTE_CACHE_18 151
#define EXECUTE_CACHE_13 153
#define FREE_REFERENCE_5 156
#define FREE_REFERENCE_4 157
#define FREE_REFERENCE_3 158
#define FREE_REFERENCE_2 159
#define FREE_REFERENCE_1 160
#define FREE_REFERENCE_0 161
#define FREE_ASSIGNMENT_2 163
#define FREE_ASSIGNMENT_1 164
#define FREE_ASSIGNMENT_0 165
#define GLOBAL_EXECUTE_CACHE_5 167
#define FREE_REFERENCES_LABEL_0 112
#define NUMBER_OF_LINKER_SECTIONS_1 4

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
toplev_so_d412f70010003197 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd57;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto compile_file_54;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_41;

    case 4:
      current_block = (Rpc - LABEL_14);
      goto label_81;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto lambda_95;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto lambda_3;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_42;

    case 9:
      current_block = (Rpc - LABEL_24);
      goto lambda_2;

    case 10:
      current_block = (Rpc - LABEL_26);
      goto continuation_17;

    case 11:
      current_block = (Rpc - LABEL_27);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_16);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_29);
      goto label_82;

    case 14:
      current_block = (Rpc - LABEL_17);
      goto lambda_5;

    case 15:
      current_block = (Rpc - LABEL_19);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_43;

    case 17:
      current_block = (Rpc - LABEL_22);
      goto continuation_6;

    case 18:
      current_block = (Rpc - LABEL_32);
      goto lambda_99;

    case 19:
      current_block = (Rpc - LABEL_30);
      goto swapB_98;

    case 20:
      current_block = (Rpc - LABEL_41);
      goto label_83;

    case 21:
      current_block = (Rpc - LABEL_42);
      goto label_84;

    case 22:
      current_block = (Rpc - LABEL_43);
      goto label_85;

    case 23:
      current_block = (Rpc - LABEL_44);
      goto label_86;

    case 24:
      current_block = (Rpc - LABEL_45);
      goto label_87;

    case 25:
      current_block = (Rpc - LABEL_46);
      goto label_88;

    case 26:
      current_block = (Rpc - LABEL_36);
      goto continuation_4;

    case 27:
      current_block = (Rpc - LABEL_38);
      goto continuation_9;

    case 28:
      current_block = (Rpc - LABEL_39);
      goto lambda_53;

    case 29:
      current_block = (Rpc - LABEL_52);
      goto process_file_77;

    case 30:
      current_block = (Rpc - LABEL_53);
      goto label_89;

    case 31:
      current_block = (Rpc - LABEL_50);
      goto lambda_103;

    case 32:
      current_block = (Rpc - LABEL_48);
      goto swapB_102;

    case 33:
      current_block = (Rpc - LABEL_58);
      goto label_90;

    case 34:
      current_block = (Rpc - LABEL_59);
      goto label_91;

    case 35:
      current_block = (Rpc - LABEL_60);
      goto label_92;

    case 36:
      current_block = (Rpc - LABEL_61);
      goto lambda_55;

    case 37:
      current_block = (Rpc - LABEL_55);
      goto continuation_56;

    case 38:
      current_block = (Rpc - LABEL_54);
      goto continuation_57;

    case 39:
      current_block = (Rpc - LABEL_65);
      goto continuation_74;

    case 40:
      current_block = (Rpc - LABEL_66);
      goto lambda_107;

    case 41:
      current_block = (Rpc - LABEL_62);
      goto lambda_106;

    case 42:
      current_block = (Rpc - LABEL_69);
      goto continuation_66;

    case 43:
      current_block = (Rpc - LABEL_71);
      goto continuation_59;

    case 44:
      current_block = (Rpc - LABEL_72);
      goto continuation_68;

    case 45:
      current_block = (Rpc - LABEL_73);
      goto continuation_67;

    case 46:
      current_block = (Rpc - LABEL_75);
      goto continuation_61;

    case 47:
      current_block = (Rpc - LABEL_76);
      goto continuation_60;

    case 48:
      current_block = (Rpc - LABEL_77);
      goto continuation_69;

    case 49:
      current_block = (Rpc - LABEL_80);
      goto lambda_108;

    case 50:
      current_block = (Rpc - LABEL_83);
      goto continuation_70;

    case 51:
      current_block = (Rpc - LABEL_85);
      goto continuation_71;

    case 52:
      current_block = (Rpc - LABEL_86);
      goto label_110;

    case 53:
      current_block = (Rpc - LABEL_87);
      goto label_111;

    case 54:
      current_block = (Rpc - LABEL_88);
      goto expression_80;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_80)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_87])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_111)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_110)
  {
    static const short sections [] =
      {
	0,
	3,
	3,
	3,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	3,
	3,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
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
	3,
	1,
	1,
	3,
	2,
	2,
	2,
	2,
	3,
	2,
	3,
	3,
	3,
	3,
	3,
	2,
	1,
	3,
	3,
	1,
	1,
	2,
	2,
	1,
	1,
	3,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 67)
      goto label_109;
    blocks = (current_block [OBJECT_20]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_86])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_109)
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
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_5]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (compile_file_94)
DEFLABEL (compile_file_54)
  INTERRUPT_CHECK (26, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  if ((Wrd15.Obj) == (current_block [OBJECT_6]))
    goto label_113;
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_112;

DEFLABEL (label_113)
  (Wrd20.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_112)
DEFLABEL (label_114)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_2;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_38);
  (* (--Rsp)) = Rvl;
  goto process_file_77;

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_117;
  Wrd5 = Wrd9;

DEFLABEL (label_116)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_115;
  Rvl = (current_block [OBJECT_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_115)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto lambda_2;

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (label_117)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd6.pObj));

DEFLABEL (label_81)
  (Wrd5.Obj) = Rvl;
  goto label_116;

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_21);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_7]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (Rsp [3]) = (Wrd7.Obj);
  goto process_file_77;

DEFLABEL (lambda_95)
  CLOSURE_HEADER (LABEL_9);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_7]);
  if (Rvl == (Wrd6.Obj))
    goto label_119;
  (Wrd10.Obj) = (current_block [OBJECT_12]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_118;

DEFLABEL (label_119)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd6.Obj);

DEFLABEL (label_118)
DEFLABEL (label_125)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_124;
  Wrd18 = Wrd22;

DEFLABEL (label_123)
  (Wrd27.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd28.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  if ((Wrd34.Obj) == (current_block [OBJECT_6]))
    goto label_122;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_27);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_121;
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd81.Obj) = (Rsp [4]);
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [2]);
  (* (--Rsp)) = (Wrd83.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_26);

DEFLABEL (label_121)
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [2]);
  (* (--Rsp)) = (Wrd75.Obj);

DEFLABEL (label_120)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd67.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30])));
  Rhp += 2;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd67.pObj)));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd62.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd60.pObj) = (& (Rhp [-1]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd60.pObj)));
  (Rsp [1]) = (Wrd61.Obj);
  (Wrd66.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd64.pObj) = (& (Rhp [-1]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd64.pObj)));
  (Rsp [2]) = (Wrd65.Obj);
  Wrd57 = Wrd67;
  ((Wrd57.pObj) [2]) = (Wrd65.Obj);
  ((Wrd57.pObj) [3]) = (Wrd61.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd45.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32])));
  Rhp += 2;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd45.pObj)));
  Wrd48 = Wrd45;
  (Wrd49.Obj) = (Rsp [5]);
  ((Wrd48.pObj) [2]) = (Wrd49.Obj);
  (Wrd47.Obj) = (Rsp [4]);
  ((Wrd48.pObj) [3]) = (Wrd47.Obj);
  (Rsp [5]) = (Wrd44.Obj);
  (Rsp [6]) = (Wrd68.Obj);
  (Rsp [4]) = (Wrd68.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (label_122)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_120;

DEFLABEL (label_124)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd19.pObj));

DEFLABEL (label_82)
  (Wrd18.Obj) = Rvl;
  goto label_123;

DEFLABEL (lambda_96)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_12);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (lambda_97)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_24);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25]));

DEFLABEL (lambda_100)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (lambda_99)
  CLOSURE_HEADER (LABEL_32);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (swapB_98)
  CLOSURE_HEADER (LABEL_30);

DEFLABEL (swapB_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_143;

DEFLABEL (label_142)
  Wrd5 = Wrd9;

DEFLABEL (label_141)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_140;

DEFLABEL (label_139)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_138)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_137;

DEFLABEL (label_136)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_135)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_134;

DEFLABEL (label_133)
  Wrd57 = Wrd61;

DEFLABEL (label_132)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_131;

DEFLABEL (label_130)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_129)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_128;

DEFLABEL (label_127)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_126)
  Rvl = (current_block [OBJECT_8]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_128)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_127;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_88)
  goto label_126;

DEFLABEL (label_131)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_130;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_45])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_87)
  goto label_129;

DEFLABEL (label_134)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_133;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_44])), (Wrd58.pObj));

DEFLABEL (label_86)
  (Wrd57.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_137)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_136;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_43])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_85)
  goto label_135;

DEFLABEL (label_140)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_139;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_42])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_84)
  goto label_138;

DEFLABEL (label_143)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_142;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_41])), (Wrd6.pObj));

DEFLABEL (label_83)
  (Wrd5.Obj) = Rvl;
  goto label_141;

DEFLABEL (lambda_101)
DEFLABEL (lambda_53)
  INTERRUPT_CHECK (26, LABEL_39);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  ((Wrd22.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd23.Obj);
  (Rsp [2]) = (Wrd23.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (process_file_104)
DEFLABEL (process_file_77)
  INTERRUPT_CHECK (26, LABEL_52);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_149;
  Wrd5 = Wrd9;

DEFLABEL (label_148)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_144;
  goto lambda_55;

DEFLABEL (label_144)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_55);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_145;
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_63);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  ((Wrd27.pObj) [2]) = Rvl;
  (Rsp [1]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64]));

DEFLABEL (label_145)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_147)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_146;
  Rvl = (current_block [OBJECT_8]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_146)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_67);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_66])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  ((Wrd16.pObj) [3]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_65);
  Rsp = (& (Rsp [1]));
  goto lambda_55;

DEFLABEL (label_149)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53])), (Wrd6.pObj));

DEFLABEL (label_89)
  (Wrd5.Obj) = Rvl;
  goto label_148;

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_54);
  (* (--Rsp)) = Rvl;
  goto label_147;

DEFLABEL (lambda_103)
  CLOSURE_HEADER (LABEL_50);

DEFLABEL (lambda_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57]));

DEFLABEL (swapB_102)
  CLOSURE_HEADER (LABEL_48);

DEFLABEL (swapB_51)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_158;

DEFLABEL (label_157)
  Wrd5 = Wrd9;

DEFLABEL (label_156)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_155;

DEFLABEL (label_154)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_153)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_152;

DEFLABEL (label_151)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_150)
  Rvl = (current_block [OBJECT_8]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_152)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_151;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_92)
  goto label_150;

DEFLABEL (label_155)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_154;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_59])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_91)
  goto label_153;

DEFLABEL (label_158)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_157;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_58])), (Wrd6.pObj));

DEFLABEL (label_90)
  (Wrd5.Obj) = Rvl;
  goto label_156;

DEFLABEL (lambda_105)
DEFLABEL (lambda_55)
  INTERRUPT_CHECK (26, LABEL_61);
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (lambda_107)
  CLOSURE_HEADER (LABEL_66);

DEFLABEL (lambda_73)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_73);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_81);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_80])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82]));

DEFLABEL (lambda_106)
  CLOSURE_HEADER (LABEL_62);

DEFLABEL (lambda_63)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_71);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_159;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_76);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_75);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_159)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 26)
    goto label_161;

DEFLABEL (label_160)
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_161)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_160;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if ((Wrd17.Lng) > (Wrd19.Lng))
    goto label_163;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_162;

DEFLABEL (label_163)
  Rvl = (current_block [OBJECT_16]);

DEFLABEL (label_162)
DEFLABEL (label_164)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_108)
  CLOSURE_HEADER (LABEL_80);

DEFLABEL (lambda_72)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_85);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_toplev_so_d412f70010003197 [67] =
  {
    { "toplev_so_code_1", 5, toplev_so_code_1 },
    { "toplev_so_code_2", 2, toplev_so_code_2 },
    { "toplev_so_code_3", 32, toplev_so_code_3 },
    { "toplev_so_code_4", 1, toplev_so_code_4 },
    { "toplev_so_code_5", 2, toplev_so_code_5 },
    { "toplev_so_code_6", 17, toplev_so_code_6 },
    { "toplev_so_code_7", 10, toplev_so_code_7 },
    { "toplev_so_code_8", 2, toplev_so_code_8 },
    { "toplev_so_code_9", 4, toplev_so_code_9 },
    { "toplev_so_code_10", 10, toplev_so_code_10 },
    { "toplev_so_code_11", 9, toplev_so_code_11 },
    { "toplev_so_code_12", 5, toplev_so_code_12 },
    { "toplev_so_code_13", 6, toplev_so_code_13 },
    { "toplev_so_code_14", 11, toplev_so_code_14 },
    { "toplev_so_code_15", 9, toplev_so_code_15 },
    { "toplev_so_code_16", 33, toplev_so_code_16 },
    { "toplev_so_code_17", 56, toplev_so_code_17 },
    { "toplev_so_code_18", 92, toplev_so_code_18 },
    { "toplev_so_code_19", 36, toplev_so_code_19 },
    { "toplev_so_code_20", 48, toplev_so_code_20 },
    { "toplev_so_code_21", 3, toplev_so_code_21 },
    { "toplev_so_code_22", 2, toplev_so_code_22 },
    { "toplev_so_code_23", 2, toplev_so_code_23 },
    { "toplev_so_code_24", 12, toplev_so_code_24 },
    { "toplev_so_code_25", 25, toplev_so_code_25 },
    { "toplev_so_code_26", 11, toplev_so_code_26 },
    { "toplev_so_code_27", 3, toplev_so_code_27 },
    { "toplev_so_code_28", 10, toplev_so_code_28 },
    { "toplev_so_code_29", 45, toplev_so_code_29 },
    { "toplev_so_code_30", 23, toplev_so_code_30 },
    { "toplev_so_code_31", 4, toplev_so_code_31 },
    { "toplev_so_code_32", 5, toplev_so_code_32 },
    { "toplev_so_code_33", 4, toplev_so_code_33 },
    { "toplev_so_code_34", 3, toplev_so_code_34 },
    { "toplev_so_code_35", 4, toplev_so_code_35 },
    { "toplev_so_code_36", 3, toplev_so_code_36 },
    { "toplev_so_code_37", 3, toplev_so_code_37 },
    { "toplev_so_code_38", 11, toplev_so_code_38 },
    { "toplev_so_code_39", 11, toplev_so_code_39 },
    { "toplev_so_code_40", 3, toplev_so_code_40 },
    { "toplev_so_code_41", 4, toplev_so_code_41 },
    { "toplev_so_code_42", 7, toplev_so_code_42 },
    { "toplev_so_code_43", 5, toplev_so_code_43 },
    { "toplev_so_code_44", 3, toplev_so_code_44 },
    { "toplev_so_code_45", 3, toplev_so_code_45 },
    { "toplev_so_code_46", 4, toplev_so_code_46 },
    { "toplev_so_code_47", 3, toplev_so_code_47 },
    { "toplev_so_code_48", 3, toplev_so_code_48 },
    { "toplev_so_code_49", 4, toplev_so_code_49 },
    { "toplev_so_code_50", 4, toplev_so_code_50 },
    { "toplev_so_code_51", 12, toplev_so_code_51 },
    { "toplev_so_code_52", 59, toplev_so_code_52 },
    { "toplev_so_code_53", 16, toplev_so_code_53 },
    { "toplev_so_code_54", 3, toplev_so_code_54 },
    { "toplev_so_code_55", 3, toplev_so_code_55 },
    { "toplev_so_code_56", 3, toplev_so_code_56 },
    { "toplev_so_code_57", 3, toplev_so_code_57 },
    { "toplev_so_code_58", 3, toplev_so_code_58 },
    { "toplev_so_code_59", 3, toplev_so_code_59 },
    { "toplev_so_code_60", 3, toplev_so_code_60 },
    { "toplev_so_code_61", 3, toplev_so_code_61 },
    { "toplev_so_code_62", 3, toplev_so_code_62 },
    { "toplev_so_code_63", 9, toplev_so_code_63 },
    { "toplev_so_code_64", 18, toplev_so_code_64 },
    { "toplev_so_code_65", 24, toplev_so_code_65 },
    { "toplev_so_code_66", 26, toplev_so_code_66 },
    { "toplev_so_code_67", 43, toplev_so_code_67 }
  };

int
decl_toplev_so_d412f70010003197 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_toplev_so_d412f70010003197);
  return (0);
}

DECLARE_COMPILED_CODE ("toplev.so", 55, decl_toplev_so_d412f70010003197, toplev_so_d412f70010003197)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_toplev_so_data_d412f70010003197 [18762] =
  "\x92\x02\xb6\x01\xee\x1f\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x28"
  "\x0d\xb9\x28\x0d\x28\x0d\xba\x28\x0d\xbb\x28\xb3\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x82\x88\xc2"
  "\xbd\xb3\x24\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x83\x88\x02"
  "\x0c\x0c\x1d\x1d\x0c\x0d\x0d\xbf\x0d\x1c\x0d\x1c\x25\xb7\x1b\x0d"
  "\x1c\x0d\x0d\x1b\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84"
  "\x88\x28\x0d\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x85\x88\x0c\x0c"
  "\x0d\x1c\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x0c"
  "\x0c\x0d\x1c\x0d\x1c\x24\x28\xb1\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x07\x0d\x1c\x24\x28"
  "\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x1d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b"
  "\x0d\x1c\x25\x1b\x1b\x24\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1d\x08\x07\x1b\x25\x0d"
  "\x1c\x0d\x1b\x24\x28\x1b\x28\x0d\x28\xb3\x28\xb3\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0d\x1c\x24\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x07\x1b"
  "\x1b\x25\x1b\x1b\x24\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x1c\x25\x1b\x0d\x1c\x0d"
  "\x1c\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1b\xc1\x1c\xc1\x1c\x1d\x0c\x0d\x08"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x25\x1b\x1b\x1b\x1b\x1b\x0d\x1c"
  "\x0d\x1c\x1b\x0d\x1c\x24\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x0d\xc1\x83\x82\xc2\x84\xb5\x0c\x1d\x81\x08\x80\x1b\x1b\x1b"
  "\x1b\x0d\x1c\x0d\x1c\x25\x0d\x1c\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x1b\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x25\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
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
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x06\x81\x80\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x25"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x1d\x1b\x1b\x1b\x1b\x0d\x1c\x1b\x1b\x1b\x25\x1b"
  "\x0d\x1c\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x0d\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x81\x0d\x1c"
  "\x1b\x1b\x25\x1b\x0d\x1c\x1b\x1b\x24\x28\x1b\x28\x0d\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x02\x0c"
  "\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x0c\x1b\x1b\x1b\x25\x1b\x1b\x24\x28\x0d\x1c\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d\x1b"
  "\x0c\x0c\x08\x80\x0c\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x25\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x24\x28\x1b\x28"
  "\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x1b\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x1b\x1b"
  "\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x1b\x24\x28\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x1b\x24\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1d\x0c\x1b"
  "\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x28\xb1\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x08\x0c\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x28\xb1\x28\x0d"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x1b\x24\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x1b\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x24\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x1b"
  "\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x24\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x1b\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x1b\x24\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x0c\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x25\x1b\x1b"
  "\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\xb5\x0c\xc2\x1b\x1d\x06\x08"
  "\x0c\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x25\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x24\x28\x1b\x28\x0d\x28\x0d"
  "\x28\x0d\x28\xb1\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x0d\x0d\x0d\x24\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\xbd\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x24\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x24\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x24"
  "\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x24\x28\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x1b\x24\x28\x1b\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x24\x28"
  "\xb1\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x07\x84\x0c\x0c\x1b\x1b\x1b"
  "\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x08\x0c\x1b\x1b\x25\x1b\x1b\x1b\x1b\x24\x28"
  "\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x25\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x0c\x0f\x0c\x0f\x0d\x1b\x0d\x1b\x0f\x84"
  "\x0c\x1d\x02\x07\x0c\x0d\x1c\x0d\x1c\x25\x1b\x1b\x1b\x1b\x24\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28"
  "\xb1\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x17\x1c\x88\x1b\x0f\x0c\x0c\x07\x0c\x0c\x0d\x0d\x0c\x0c\x0c\x1d"
  "\x08\x1d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x80\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1e\x1e\x1e\x1e\x1e"
  "\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x06\x06\x06"
  "\x1e\x1e\x1e\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1e\x06\x06\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1e\x1e\x1e\x1b\x2a\xb6\x2a\xb4\x2a\x17\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\xb5\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x1b\xb7"
  "\x1b\xb3\x0d\x0d\x17\xc3\x0d\x1c\x1b\x1b\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x9c\x1e\x07\x06\x06\x08\x9c\x28\x0d\x26\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x25\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\xb2\x28\x1b\x28\x0d"
  "\x28\xb3\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\xb1"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61"
  "\x73\x65\x2f\x74\x6f\x70\x6c\x65\x76\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x08\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x05\x17"
  "\x73\x66\x2f\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x66\x61"
  "\x75\x6c\x74\x69\x6e\x67\x05\x03\x73\x66\x03\x11\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x2d\x62\x69\x6e\x2d\x66\x69\x6c\x65\x04\x06\x3c\x0c"
  "\x81\x89\x02\x3b\x0a\x81\x87\x02\x3a\x08\x81\x89\x02\x39\x06\x81"
  "\x85\x02\x38\x04\x84\x04\x0b\x1a\x02\x06\x61\x70\x70\x6c\x79\x02"
  "\x3e\x06\x81\x85\x02\x3d\x04\xfe\x05\x05\x0b\x02\x21\x04\x6c\x61"
  "\x70\x04\x72\x74\x6c\x08\x02\x04\x62\x69\x6e\x07\x6e\x65\x77\x65"
  "\x73\x74\x1a\x2a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69\x6e\x70"
  "\x75\x74\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2a\x1b\x2a\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2a\x09\x10\x2a\x64\x65\x62\x75\x67\x67"
  "\x69\x6e\x67\x2d\x6b\x65\x79\x2a\x0a\x04\x09\x2c\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x64\x61\x74"
  "\x61\x2d\x66\x69\x6c\x65\x73\x2d\x61\x73\x2d\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x73\x3f\x0b\x1d\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x3a\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x72\x74\x6c\x2d\x66"
  "\x69\x6c\x65\x73\x3f\x1d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2d\x6c\x61\x70\x2d\x66\x69\x6c\x65"
  "\x73\x3f\x0a\x07\x08\x0e\x6d\x61\x6b\x65\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x03\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x73\x0c\x06\x13\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x73\x0d\x05\x13\x73\x68\x61\x6c"
  "\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x0e\x03"
  "\x11\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x66\x61\x73\x6c\x6f\x61"
  "\x64\x0f\x03\x10\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x3f\x10\x04\x17\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x64\x61"
  "\x74\x61\x2d\x66\x72\x6f\x6d\x2d\x66\x69\x6c\x65\x04\x12\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x74\x79\x70\x65\x11"
  "\x05\x10\x6d\x61\x79\x62\x65\x2d\x6f\x70\x65\x6e\x2d\x66\x69\x6c"
  "\x65\x12\x03\x13\x72\x61\x6e\x64\x6f\x6d\x2d\x62\x79\x74\x65\x2d"
  "\x76\x65\x63\x74\x6f\x72\x05\x18\x63\x6f\x6d\x70\x69\x6c\x65\x2d"
  "\x73\x63\x6f\x64\x65\x2f\x66\x69\x6c\x65\x2f\x68\x6f\x6f\x6b\x02"
  "\x24\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x64\x2d\x69\x6e\x66\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d"
  "\x74\x79\x70\x65\x13\x06\x17\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x73"
  "\x63\x6f\x64\x65\x2f\x69\x6e\x74\x65\x72\x6e\x61\x6c\x14\x0e\x5e"
  "\x42\x81\x87\x02\x5d\x40\x81\x85\x02\x5c\x3e\x81\x83\x02\x5b\x3c"
  "\x81\x83\x02\x5a\x3a\x81\x85\x02\x59\x38\x81\x83\x02\x58\x36\x81"
  "\x83\x02\x57\x34\x81\x83\x02\x56\x32\x81\x85\x02\x55\x30\x81\x87"
  "\x02\x54\x2e\x81\x85\x02\x53\x2c\x81\x89\x02\x52\x2a\x81\x85\x02"
  "\x51\x28\x81\x85\x02\x50\x26\x81\x85\x02\x4f\x24\x81\x85\x02\x4e"
  "\x22\x81\x85\x02\x4d\x20\x81\x83\x02\x4c\x1e\x81\x83\x02\x4b\x1c"
  "\x81\x85\x02\x4a\x1a\x81\x83\x02\x49\x18\x81\x83\x02\x48\x16\x81"
  "\x85\x02\x47\x14\x81\x83\x02\x46\x12\x81\x83\x02\x45\x10\x81\x83"
  "\x02\x44\x0e\x81\x87\x02\x43\x0c\x81\x85\x02\x42\x0a\x81\x89\x02"
  "\x41\x08\x84\x06\x40\x06\x81\x85\x02\x3f\x04\x84\x04\x41\x71\x15"
  "\x02\x04\x16\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x6f\x75\x74"
  "\x70\x75\x74\x2d\x66\x69\x6c\x65\x02\x5f\x04\x85\x08\x03\x16\x02"
  "\x04\x66\x6e\x69\x04\x69\x6e\x66\x1a\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x3a\x63\x72\x6f\x73\x73\x2d\x63\x6f\x6d\x70\x69\x6c\x69\x6e"
  "\x67\x3f\x17\x02\x61\x06\x81\x81\x02\x60\x04\x82\x02\x05\x0c\x18"
  "\x02\x05\x20\x3d\x3e\x20\x11\x43\x6f\x6d\x70\x69\x6c\x69\x6e\x67"
  "\x20\x66\x69\x6c\x65\x3a\x20\x15\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x3a\x62\x61\x74\x63\x68\x2d\x6d\x6f\x64\x65\x3f\x19\x10\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x3a\x6e\x6f\x69\x73\x79\x3f\x1a\x03\x04"
  "\x03\x0d\x62\x61\x74\x63\x68\x2d\x6b\x65\x72\x6e\x65\x6c\x1b\x04"
  "\x0c\x02\x25\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x2d\x74\x79\x70\x65\x0c\x04\x12\x77\x69\x74\x68\x2d\x6e"
  "\x6f\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x1c\x04\x11\x04\x0d"
  "\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x1d\x04\x15\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x66\x69\x6c\x65\x2d\x6f\x75\x74"
  "\x70\x75\x74\x03\x12\x65\x6e\x6f\x75\x67\x68\x2d\x6e\x61\x6d\x65"
  "\x73\x74\x72\x69\x6e\x67\x04\x06\x77\x72\x69\x74\x65\x1e\x0b\x72"
  "\x24\x81\x85\x02\x71\x22\x81\x85\x02\x70\x20\x81\x89\x02\x6f\x1e"
  "\x81\x85\x02\x6e\x1c\x81\x85\x02\x6d\x1a\x81\x83\x02\x6c\x18\x81"
  "\x85\x02\x6b\x16\x81\x83\x02\x6a\x14\x81\x8b\x02\x69\x12\x81\x8b"
  "\x02\x68\x10\x81\x87\x02\x67\x0e\x81\x89\x02\x66\x0c\x81\x85\x02"
  "\x65\x0a\x81\x85\x02\x64\x08\x81\x8d\x02\x63\x06\x86\x0a\x62\x04"
  "\x81\x8b\x02\x23\x40\x1f\x02\x08\x10\x6d\x61\x6b\x65\x2d\x6f\x70"
  "\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x20\x02\x04\x08\x66\x61\x73\x6c"
  "\x6f\x61\x64\x03\x19\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6d\x6d\x65"
  "\x6e\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x03\x10\x03"
  "\x0f\x73\x63\x6f\x64\x65\x2f\x63\x6f\x6d\x6d\x65\x6e\x74\x3f\x03"
  "\x12\x73\x63\x6f\x64\x65\x2f\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63"
  "\x6b\x3f\x04\x0d\x73\x63\x61\x6e\x2d\x64\x65\x66\x69\x6e\x65\x73"
  "\x04\x1c\x73\x63\x6f\x64\x65\x2f\x6f\x70\x65\x6e\x2d\x62\x6c\x6f"
  "\x63\x6b\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x04\x07\x61"
  "\x70\x70\x65\x6e\x64\x05\x20\x0a\x7c\x16\x81\x89\x02\x7b\x14\x81"
  "\x89\x02\x7a\x12\x81\x89\x02\x79\x10\x81\x85\x02\x78\x0e\x81\x83"
  "\x02\x77\x0c\x81\x83\x02\x76\x0a\x81\x85\x02\x75\x08\x81\x83\x02"
  "\x74\x06\x81\x83\x02\x73\x04\x83\x04\x15\x2f\x20\x02\x09\x05\x6b"
  "\x65\x65\x70\x10\x08\x04\x16\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x73"
  "\x63\x6f\x64\x65\x2f\x6e\x6f\x2d\x66\x69\x6c\x65\x21\x03\x25\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x6f\x75\x74\x70\x75\x74\x2d\x3e"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x03\x7e\x06\x81\x85\x02\x7d\x04\x84\x04\x05\x0f\x22"
  "\x02\x0a\x10\x08\x03\x16\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x11\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x6c\x61\x6d\x62\x64\x61\x04\x1b\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x6f\x75\x74\x70\x75\x74\x2d\x3e"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x04\x21\x05\x82\x01\x0a\x81"
  "\x8b\x02\x81\x01\x08\x81\x87\x02\x80\x01\x06\x81\x85\x02\x7f\x04"
  "\x84\x04\x09\x17\x23\x02\x0b\x02\x1a\x17\x2a\x69\x6e\x66\x6f\x2d"
  "\x6f\x75\x74\x70\x75\x74\x2d\x66\x69\x6c\x65\x6e\x61\x6d\x65\x2a"
  "\x24\x03\x1a\x24\x03\x05\x0e\x03\x1b\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x2d\x73\x63\x6f\x64\x65\x2f\x6e\x6f\x2d\x66\x69\x6c\x65\x2f\x68"
  "\x6f\x6f\x6b\x04\x14\x04\x8c\x01\x16\x81\x83\x02\x8b\x01\x14\x81"
  "\x83\x02\x8a\x01\x12\x81\x85\x02\x89\x01\x10\x81\x83\x02\x88\x01"
  "\x0e\x81\x83\x02\x87\x01\x0c\x81\x85\x02\x86\x01\x0a\x81\x83\x02"
  "\x85\x01\x08\x81\x83\x02\x84\x01\x06\x81\x83\x02\x83\x01\x04\x84"
  "\x06\x15\x26\x25\x02\x0c\x08\x02\x19\x02\x1d\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x3a\x62\x61\x74\x63\x68\x2d\x65\x72\x72\x6f\x72\x2d"
  "\x68\x61\x6e\x64\x6c\x65\x72\x26\x15\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x65\x72\x72\x6f\x72\x19\x04\x05"
  "\x0e\x05\x17\x62\x69\x6e\x64\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72\x03\x04\x05\x95\x01\x14\x81"
  "\x83\x02\x94\x01\x12\x81\x83\x02\x93\x01\x10\x81\x85\x02\x92\x01"
  "\x0e\x81\x83\x02\x91\x01\x0c\x81\x83\x02\x90\x01\x0a\x81\x85\x02"
  "\x8f\x01\x08\x81\x83\x02\x8e\x01\x06\x81\x83\x02\x8d\x01\x04\x84"
  "\x04\x13\x29\x27\x02\x0d\x02\x12\x6e\x65\x61\x72\x65\x73\x74\x2d"
  "\x63\x6d\x64\x6c\x2f\x70\x6f\x72\x74\x03\x0f\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x3a\x61\x62\x6f\x72\x74\x28\x03\x0b\x66\x72\x65\x73"
  "\x68\x2d\x6c\x69\x6e\x65\x29\x04\x17\x77\x72\x69\x74\x65\x2d\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x72\x65\x70\x6f\x72\x74\x03"
  "\x08\x6e\x65\x77\x6c\x69\x6e\x65\x2a\x06\x9a\x01\x0c\x81\x83\x02"
  "\x99\x01\x0a\x81\x83\x02\x98\x01\x08\x81\x85\x02\x97\x01\x06\x81"
  "\x83\x02\x96\x01\x04\x83\x04\x0b\x19\x2b\x02\x0e\x11\x3b\x2a\x2a"
  "\x2a\x20\x41\x62\x6f\x72\x74\x69\x6e\x67\x2e\x2e\x2e\x14\x4e\x6f"
  "\x74\x20\x73\x65\x74\x20\x75\x70\x20\x74\x6f\x20\x61\x62\x6f\x72"
  "\x74\x18\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x61\x62\x6f\x72\x74"
  "\x2d\x68\x61\x6e\x64\x6c\x65\x64\x3f\x2c\x02\x04\x06\x65\x72\x72"
  "\x6f\x72\x2d\x02\x29\x03\x1d\x02\x2a\x03\x1c\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x3a\x61\x62\x6f\x72\x74\x2d\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x29\x06\xa0\x01\x0e\x81\x83\x02\x9f\x01"
  "\x0c\x81\x83\x02\x9e\x01\x0a\x81\x83\x02\x9d\x01\x08\x81\x83\x02"
  "\x9c\x01\x06\x83\x04\x9b\x01\x04\x81\x83\x02\x0d\x1f\x2e\x02\x0f"
  "\x02\x29\x2c\x03\x29\x2c\x03\x03\x1f\x63\x61\x6c\x6c\x2d\x77\x69"
  "\x74\x68\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x05\x0e\x03\xab\x01\x18\x81\x83\x02"
  "\xaa\x01\x16\x81\x85\x02\xa9\x01\x14\x81\x83\x02\xa8\x01\x12\x81"
  "\x83\x02\xa7\x01\x10\x81\x85\x02\xa6\x01\x0e\x81\x83\x02\xa5\x01"
  "\x0c\x81\x83\x02\xa4\x01\x0a\x81\x83\x02\xa3\x01\x08\x81\x85\x02"
  "\xa2\x01\x06\x81\x85\x02\xa1\x01\x04\x83\x04\x17\x27\x2f\x02\x10"
  "\x1b\x2a\x2a\x2a\x20\x52\x65\x63\x75\x72\x73\x69\x76\x65\x20\x63"
  "\x6f\x6d\x70\x69\x6c\x61\x74\x69\x6f\x6e\x20\x1e\x2a\x72\x65\x63"
  "\x75\x72\x73\x69\x76\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x61\x74\x69"
  "\x6f\x6e\x2d\x63\x6f\x75\x6e\x74\x2a\x30\x02\x30\x16\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x3a\x73\x68\x6f\x77\x2d\x70\x68\x61\x73\x65"
  "\x73\x3f\x31\x1a\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x73\x68\x6f"
  "\x77\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73\x3f\x32\x04\x04"
  "\x1c\x06\x16\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x72\x65\x63\x75\x72"
  "\x73\x69\x76\x65\x6c\x79\x2d\x31\x33\x04\x1d\x04\x1e\x05\xb4\x01"
  "\x14\x81\x85\x02\xb3\x01\x12\x81\x85\x02\xb2\x01\x10\x81\x83\x02"
  "\xb1\x01\x0e\x81\x8b\x02\xb0\x01\x0c\x81\x8b\x02\xaf\x01\x0a\x81"
  "\x89\x02\xae\x01\x08\x81\x89\x02\xad\x01\x06\x81\x87\x02\xac\x01"
  "\x04\x85\x08\x13\x26\x34\x02\x11\x0a\x72\x65\x63\x75\x72\x73\x69"
  "\x76\x65\x10\x04\x63\x61\x72\x10\x04\x63\x64\x72\x35\x02\x16\x43"
  "\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x20\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x3a\x20\x05\x6e\x6f\x6e\x65\x0f\x2a\x72\x65\x6d\x6f\x74"
  "\x65\x2d\x6c\x69\x6e\x6b\x73\x2a\x36\x1f\x2a\x72\x65\x63\x75\x72"
  "\x73\x69\x76\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x61\x74\x69\x6f\x6e"
  "\x2d\x6e\x75\x6d\x62\x65\x72\x2a\x37\x24\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x3a\x70\x61\x63\x6b\x61\x67\x65\x2d\x6f\x70\x74\x69\x6d"
  "\x69\x7a\x61\x74\x69\x6f\x6e\x2d\x6c\x65\x76\x65\x6c\x38\x14\x2a"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x72\x65\x73\x75\x6c\x74"
  "\x3f\x2a\x39\x05\x32\x36\x37\x38\x39\x12\x2a\x6c\x61\x70\x2d\x6f"
  "\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2a\x38\x12\x2a\x72\x74"
  "\x6c\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2a\x3a\x24"
  "\x18\x62\x69\x6e\x64\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x73\x3b\x0a\x05\x0e\x03\x18\x63\x61"
  "\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73"
  "\x74\x72\x69\x6e\x67\x04\x17\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d"
  "\x70\x68\x61\x73\x65\x2f\x76\x69\x73\x69\x62\x6c\x65\x3c\x04\x1d"
  "\x03\x1d\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x73\x63\x6f\x64\x65\x2f"
  "\x72\x65\x63\x75\x72\x73\x69\x76\x65\x2f\x68\x6f\x6f\x6b\x04\x1e"
  "\x07\x14\x08\xd5\x01\x44\x81\x8b\x02\xd4\x01\x42\x81\x87\x02\xd3"
  "\x01\x40\x81\x87\x02\xd2\x01\x3e\x81\x85\x02\xd1\x01\x3c\x81\x83"
  "\x02\xd0\x01\x3a\x81\x83\x02\xcf\x01\x38\x81\x85\x02\xce\x01\x36"
  "\x81\x83\x02\xcd\x01\x34\x81\x85\x02\xcc\x01\x32\x81\x83\x02\xcb"
  "\x01\x30\x81\x83\x02\xca\x01\x2e\x81\x83\x02\xc9\x01\x2c\x81\x85"
  "\x02\xc8\x01\x2a\x81\x83\x02\xc7\x01\x28\x81\x83\x02\xc6\x01\x26"
  "\x81\x85\x02\xc5\x01\x24\x81\x83\x02\xc4\x01\x22\x81\x83\x02\xc3"
  "\x01\x20\x81\x85\x02\xc2\x01\x1e\x81\x83\x02\xc1\x01\x1c\x81\x83"
  "\x02\xc0\x01\x1a\x81\x83\x02\xbf\x01\x18\x81\x83\x02\xbe\x01\x16"
  "\x81\x85\x02\xbd\x01\x14\x81\x83\x02\xbc\x01\x12\x81\x83\x02\xbb"
  "\x01\x10\x81\x83\x02\xba\x01\x0e\x81\x85\x02\xb9\x01\x0c\x81\x8b"
  "\x02\xb8\x01\x0a\x81\x83\x02\xb7\x01\x08\x81\x83\x02\xb6\x01\x06"
  "\x81\x8b\x02\xb5\x01\x04\x86\x0a\x43\x6c\x3d\x02\x12\x17\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x2d\x62\x79\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x73\x11\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x61\x73"
  "\x2d\x75\x6e\x69\x74\x1d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63"
  "\x6f\x64\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x3e\x62\x6c\x6f"
  "\x63\x6b\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x17\x54\x6f"
  "\x74\x61\x6c\x20\x63\x6f\x6d\x70\x69\x6c\x61\x74\x69\x6f\x6e\x20"
  "\x74\x69\x6d\x65\x02\x37\x30\x39\x36\x0f\x2a\x70\x72\x6f\x63\x65"
  "\x73\x73\x2d\x74\x69\x6d\x65\x2a\x3e\x0c\x2a\x72\x65\x61\x6c\x2d"
  "\x74\x69\x6d\x65\x2a\x3f\x07\x23\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x3a\x70\x72\x65\x73\x65\x72\x76\x65\x2d\x64\x61\x74\x61\x2d\x73"
  "\x74\x72\x75\x63\x74\x75\x72\x65\x73\x3f\x40\x37\x30\x39\x36\x3e"
  "\x3f\x20\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x2d\x62\x79\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73"
  "\x3f\x1c\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x73\x68\x6f\x77\x2d"
  "\x74\x69\x6d\x65\x2d\x72\x65\x70\x6f\x72\x74\x73\x3f\x41\x0a\x2a"
  "\x74\x6c\x2d\x66\x72\x65\x65\x2a\x42\x07\x65\x71\x75\x61\x6c\x3f"
  "\x43\x0b\x6c\x73\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x0b\x2a\x74\x6c"
  "\x2d\x62\x6f\x75\x6e\x64\x2a\x44\x0e\x05\x0e\x02\x10\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x3a\x72\x65\x73\x65\x74\x21\x45\x03\x2a\x62"
  "\x69\x6e\x64\x2d\x61\x73\x73\x65\x6d\x62\x6c\x65\x72\x26\x6c\x69"
  "\x6e\x6b\x65\x72\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x73\x05\x15\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x2d\x74\x69\x6d\x65\x2d\x72\x65\x70\x6f\x72\x74\x46\x02"
  "\x1e\x72\x65\x63\x75\x72\x73\x69\x76\x65\x2d\x63\x6f\x6d\x70\x69"
  "\x6c\x61\x74\x69\x6f\x6e\x2d\x72\x65\x73\x75\x6c\x74\x73\x03\x3b"
  "\x03\x17\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d"
  "\x61\x64\x64\x72\x65\x73\x73\x3f\x04\x04\x6d\x61\x70\x47\x04\x13"
  "\x73\x63\x6f\x64\x65\x2f\x6d\x61\x6b\x65\x2d\x63\x6f\x6d\x6d\x65"
  "\x6e\x74\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72"
  "\x07\x15\x6d\x61\x6b\x65\x2d\x64\x62\x67\x2d\x69\x6e\x66\x6f\x2d"
  "\x76\x65\x63\x74\x6f\x72\x0c\x8d\x02\x72\x81\x8f\x02\x8c\x02\x70"
  "\x81\x8d\x02\x8b\x02\x6e\x83\x04\x8a\x02\x6c\x81\x8d\x02\x89\x02"
  "\x6a\x81\x8b\x02\x88\x02\x68\x83\x04\x87\x02\x66\x81\x8f\x02\x86"
  "\x02\x64\x81\x8f\x02\x85\x02\x62\x81\x8f\x02\x84\x02\x60\x81\x8d"
  "\x02\x83\x02\x5e\x81\x8b\x02\x82\x02\x5c\x81\x89\x02\x81\x02\x5a"
  "\x83\x04\x80\x02\x58\x83\x04\xff\x01\x56\x81\x8d\x02\xfe\x01\x54"
  "\x81\x8d\x02\xfd\x01\x52\x81\x8d\x02\xfc\x01\x50\x81\x8b\x02\xfb"
  "\x01\x4e\x81\x89\x02\xfa\x01\x4c\x81\x87\x02\xf9\x01\x4a\x81\x85"
  "\x02\xf8\x01\x48\x81\x85\x02\xf7\x01\x46\x81\x83\x02\xf6\x01\x44"
  "\x81\x83\x02\xf5\x01\x42\x81\x85\x02\xf4\x01\x40\x81\x87\x02\xf3"
  "\x01\x3e\x81\x85\x02\xf2\x01\x3c\x81\x83\x02\xf1\x01\x3a\x81\x83"
  "\x02\xf0\x01\x38\x81\x83\x02\xef\x01\x36\x81\x87\x02\xee\x01\x34"
  "\x81\x85\x02\xed\x01\x32\x81\x83\x02\xec\x01\x30\x81\x85\x02\xeb"
  "\x01\x2e\x81\x83\x02\xea\x01\x2c\x81\x83\x02\xe9\x01\x2a\x81\x85"
  "\x02\xe8\x01\x28\x81\x83\x02\xe7\x01\x26\x81\x83\x02\xe6\x01\x24"
  "\x81\x85\x02\xe5\x01\x22\x81\x83\x02\xe4\x01\x20\x81\x83\x02\xe3"
  "\x01\x1e\x81\x85\x02\xe2\x01\x1c\x81\x83\x02\xe1\x01\x1a\x81\x83"
  "\x02\xe0\x01\x18\x81\x85\x02\xdf\x01\x16\x81\x83\x02\xde\x01\x14"
  "\x81\x83\x02\xdd\x01\x12\x81\x85\x02\xdc\x01\x10\x81\x83\x02\xdb"
  "\x01\x0e\x81\x83\x02\xda\x01\x0c\x81\x83\x02\xd9\x01\x0a\x81\x83"
  "\x02\xd8\x01\x08\x81\x83\x02\xd7\x01\x06\x81\x83\x02\xd6\x01\x04"
  "\x83\x04\x71\xad\x01\x48\x02\x13\x02\x17\x2a\x69\x63\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72\x73\x2a"
  "\x49\x17\x2a\x63\x75\x72\x72\x65\x6e\x74\x2d\x6c\x61\x62\x65\x6c"
  "\x2d\x6e\x75\x6d\x62\x65\x72\x2a\x4a\x11\x2a\x64\x62\x67\x2d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2a\x4b\x11\x2a\x64\x62\x67"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73\x2a\x4c\x14\x2a\x64"
  "\x62\x67\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x73"
  "\x2a\x4d\x06\x2a\x6c\x61\x70\x2a\x4e\x0c\x2a\x63\x6f\x6e\x73\x74"
  "\x61\x6e\x74\x73\x2a\x4f\x09\x2a\x62\x6c\x6f\x63\x6b\x73\x2a\x50"
  "\x0e\x2a\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x73\x2a\x51\x0d"
  "\x2a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73\x2a\x52\x0a\x2a\x6c"
  "\x76\x61\x6c\x75\x65\x73\x2a\x53\x0f\x2a\x61\x70\x70\x6c\x69\x63"
  "\x61\x74\x69\x6f\x6e\x73\x2a\x54\x0c\x2a\x70\x61\x72\x61\x6c\x6c"
  "\x65\x6c\x73\x2a\x55\x0e\x2a\x69\x6e\x70\x75\x74\x2d\x73\x63\x6f"
  "\x64\x65\x2a\x56\x08\x2a\x73\x63\x6f\x64\x65\x2a\x57\x12\x2a\x72"
  "\x6f\x6f\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2a\x58"
  "\x11\x2a\x72\x6f\x6f\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2a\x59\x0d\x2a\x72\x6f\x6f\x74\x2d\x62\x6c\x6f\x63\x6b\x2a\x5a"
  "\x44\x42\x11\x2a\x72\x74\x6c\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x2a\x5b\x11\x2a\x72\x74\x6c\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x73\x2a\x5c\x14\x2a\x72\x74\x6c\x2d\x63\x6f\x6e\x74"
  "\x69\x6e\x75\x61\x74\x69\x6f\x6e\x73\x2a\x5d\x0d\x2a\x72\x74\x6c"
  "\x2d\x67\x72\x61\x70\x68\x73\x2a\x5e\x0e\x6c\x61\x62\x65\x6c\x2d"
  "\x3e\x6f\x62\x6a\x65\x63\x74\x5f\x0b\x2a\x72\x74\x6c\x2d\x72\x6f"
  "\x6f\x74\x2a\x60\x17\x2a\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x2a\x61\x0e\x2a\x65\x6e"
  "\x74\x72\x79\x2d\x6c\x61\x62\x65\x6c\x2a\x62\x1c\x2a\x73\x75\x62"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6c\x69\x6e\x6b\x69\x6e"
  "\x67\x2d\x69\x6e\x66\x6f\x2a\x63\x1e\x49\x4a\x4b\x4c\x4d\x4e\x4f"
  "\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x44\x42\x5b\x5c\x5d"
  "\x5e\x5f\x60\x61\x62\x63\x1e\x05\x0e\x03\x20\x62\x69\x6e\x64\x2d"
  "\x61\x73\x73\x65\x6d\x62\x6c\x65\x72\x26\x6c\x69\x6e\x6b\x65\x72"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x03\xe9\x02\xba\x01\x81"
  "\x83\x02\xe8\x02\xb8\x01\x81\x85\x02\xe7\x02\xb6\x01\x81\x83\x02"
  "\xe6\x02\xb4\x01\x81\x83\x02\xe5\x02\xb2\x01\x81\x85\x02\xe4\x02"
  "\xb0\x01\x81\x83\x02\xe3\x02\xae\x01\x81\x83\x02\xe2\x02\xac\x01"
  "\x81\x85\x02\xe1\x02\xaa\x01\x81\x83\x02\xe0\x02\xa8\x01\x81\x83"
  "\x02\xdf\x02\xa6\x01\x81\x85\x02\xde\x02\xa4\x01\x81\x83\x02\xdd"
  "\x02\xa2\x01\x81\x83\x02\xdc\x02\xa0\x01\x81\x85\x02\xdb\x02\x9e"
  "\x01\x81\x83\x02\xda\x02\x9c\x01\x81\x83\x02\xd9\x02\x9a\x01\x81"
  "\x85\x02\xd8\x02\x98\x01\x81\x83\x02\xd7\x02\x96\x01\x81\x83\x02"
  "\xd6\x02\x94\x01\x81\x85\x02\xd5\x02\x92\x01\x81\x83\x02\xd4\x02"
  "\x90\x01\x81\x83\x02\xd3\x02\x8e\x01\x81\x85\x02\xd2\x02\x8c\x01"
  "\x81\x83\x02\xd1\x02\x8a\x01\x81\x83\x02\xd0\x02\x88\x01\x81\x85"
  "\x02\xcf\x02\x86\x01\x81\x83\x02\xce\x02\x84\x01\x81\x83\x02\xcd"
  "\x02\x82\x01\x81\x85\x02\xcc\x02\x80\x01\x81\x83\x02\xcb\x02\x7e"
  "\x81\x83\x02\xca\x02\x7c\x81\x85\x02\xc9\x02\x7a\x81\x83\x02\xc8"
  "\x02\x78\x81\x83\x02\xc7\x02\x76\x81\x85\x02\xc6\x02\x74\x81\x83"
  "\x02\xc5\x02\x72\x81\x83\x02\xc4\x02\x70\x81\x85\x02\xc3\x02\x6e"
  "\x81\x83\x02\xc2\x02\x6c\x81\x83\x02\xc1\x02\x6a\x81\x85\x02\xc0"
  "\x02\x68\x81\x83\x02\xbf\x02\x66\x81\x83\x02\xbe\x02\x64\x81\x85"
  "\x02\xbd\x02\x62\x81\x83\x02\xbc\x02\x60\x81\x83\x02\xbb\x02\x5e"
  "\x81\x85\x02\xba\x02\x5c\x81\x83\x02\xb9\x02\x5a\x81\x83\x02\xb8"
  "\x02\x58\x81\x85\x02\xb7\x02\x56\x81\x83\x02\xb6\x02\x54\x81\x83"
  "\x02\xb5\x02\x52\x81\x85\x02\xb4\x02\x50\x81\x83\x02\xb3\x02\x4e"
  "\x81\x83\x02\xb2\x02\x4c\x81\x83\x02\xb1\x02\x4a\x81\x83\x02\xb0"
  "\x02\x48\x81\x85\x02\xaf\x02\x46\x81\x83\x02\xae\x02\x44\x81\x83"
  "\x02\xad\x02\x42\x81\x85\x02\xac\x02\x40\x81\x83\x02\xab\x02\x3e"
  "\x81\x83\x02\xaa\x02\x3c\x81\x85\x02\xa9\x02\x3a\x81\x83\x02\xa8"
  "\x02\x38\x81\x83\x02\xa7\x02\x36\x81\x85\x02\xa6\x02\x34\x81\x83"
  "\x02\xa5\x02\x32\x81\x83\x02\xa4\x02\x30\x81\x85\x02\xa3\x02\x2e"
  "\x81\x83\x02\xa2\x02\x2c\x81\x83\x02\xa1\x02\x2a\x81\x85\x02\xa0"
  "\x02\x28\x81\x83\x02\x9f\x02\x26\x81\x83\x02\x9e\x02\x24\x81\x85"
  "\x02\x9d\x02\x22\x81\x83\x02\x9c\x02\x20\x81\x83\x02\x9b\x02\x1e"
  "\x81\x85\x02\x9a\x02\x1c\x81\x83\x02\x99\x02\x1a\x81\x83\x02\x98"
  "\x02\x18\x81\x85\x02\x97\x02\x16\x81\x83\x02\x96\x02\x14\x81\x83"
  "\x02\x95\x02\x12\x81\x85\x02\x94\x02\x10\x81\x83\x02\x93\x02\x0e"
  "\x81\x83\x02\x92\x02\x0c\x81\x85\x02\x91\x02\x0a\x81\x83\x02\x90"
  "\x02\x08\x81\x83\x02\x8f\x02\x06\x81\x83\x02\x8e\x02\x04\x83\x04"
  "\xb9\x01\xfe\x01\x64\x02\x14\x37\x30\x39\x36\x3e\x3f\x49\x4a\x4b"
  "\x4c\x4d\x4e\x4f\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x44"
  "\x42\x5b\x5c\x5d\x5e\x5f\x60\x61\x62\x63\x24\x02\x18\x61\x73\x73"
  "\x65\x6d\x62\x6c\x65\x72\x26\x6c\x69\x6e\x6b\x65\x72\x2d\x72\x65"
  "\x73\x65\x74\x21\x02\x8d\x03\x4a\x81\x81\x02\x8c\x03\x48\x81\x81"
  "\x02\x8b\x03\x46\x81\x81\x02\x8a\x03\x44\x81\x81\x02\x89\x03\x42"
  "\x81\x81\x02\x88\x03\x40\x81\x81\x02\x87\x03\x3e\x81\x81\x02\x86"
  "\x03\x3c\x81\x81\x02\x85\x03\x3a\x81\x81\x02\x84\x03\x38\x81\x81"
  "\x02\x83\x03\x36\x81\x81\x02\x82\x03\x34\x81\x81\x02\x81\x03\x32"
  "\x81\x81\x02\x80\x03\x30\x81\x81\x02\xff\x02\x2e\x81\x81\x02\xfe"
  "\x02\x2c\x81\x81\x02\xfd\x02\x2a\x81\x81\x02\xfc\x02\x28\x81\x81"
  "\x02\xfb\x02\x26\x81\x81\x02\xfa\x02\x24\x81\x81\x02\xf9\x02\x22"
  "\x81\x81\x02\xf8\x02\x20\x81\x81\x02\xf7\x02\x1e\x81\x81\x02\xf6"
  "\x02\x1c\x81\x81\x02\xf5\x02\x1a\x81\x81\x02\xf4\x02\x18\x81\x81"
  "\x02\xf3\x02\x16\x81\x81\x02\xf2\x02\x14\x81\x81\x02\xf1\x02\x12"
  "\x81\x81\x02\xf0\x02\x10\x81\x81\x02\xef\x02\x0e\x81\x81\x02\xee"
  "\x02\x0c\x81\x81\x02\xed\x02\x0a\x81\x81\x02\xec\x02\x08\x81\x81"
  "\x02\xeb\x02\x06\x81\x81\x02\xea\x02\x04\x82\x02\x49\x77\x61\x02"
  "\x15\x02\x08\x24\x3a\x38\x31\x19\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x3a\x73\x68\x6f\x77\x2d\x73\x75\x62\x70\x68\x61\x73\x65\x73\x3f"
  "\x65\x41\x32\x56\x09\x17\x0c\x69\x6e\x2d\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x17\x12\x69\x6e\x2d\x63\x72\x6f\x73\x73\x2d\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x1a\x32\x41\x65\x31\x24\x3a\x38\x0c\x03\x0a"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x3f\x05\x0e\x02\x14\x70\x68\x61"
  "\x73\x65\x2f\x66\x67\x2d\x67\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e"
  "\x32\x02\x16\x70\x68\x61\x73\x65\x2f\x66\x67\x2d\x6f\x70\x74\x69"
  "\x6d\x69\x7a\x61\x74\x69\x6f\x6e\x1a\x02\x15\x70\x68\x61\x73\x65"
  "\x2f\x72\x74\x6c\x2d\x67\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x66"
  "\x02\x17\x70\x68\x61\x73\x65\x2f\x72\x74\x6c\x2d\x6f\x70\x74\x69"
  "\x6d\x69\x7a\x61\x74\x69\x6f\x6e\x67\x02\x15\x70\x68\x61\x73\x65"
  "\x2f\x6c\x61\x70\x2d\x67\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x68"
  "\x04\x16\x70\x68\x61\x73\x65\x2f\x72\x74\x6c\x2d\x66\x69\x6c\x65"
  "\x2d\x6f\x75\x74\x70\x75\x74\x69\x02\x18\x70\x68\x61\x73\x65\x2f"
  "\x6c\x61\x70\x2d\x6c\x69\x6e\x65\x61\x72\x69\x7a\x61\x74\x69\x6f"
  "\x6e\x6a\x03\x0e\x61\x73\x73\x65\x6d\x62\x6c\x65\x26\x6c\x69\x6e"
  "\x6b\x03\x14\x63\x72\x6f\x73\x73\x2d\x61\x73\x73\x65\x6d\x62\x6c"
  "\x65\x26\x6c\x69\x6e\x6b\x04\x16\x70\x68\x61\x73\x65\x2f\x6c\x61"
  "\x70\x2d\x66\x69\x6c\x65\x2d\x6f\x75\x74\x70\x75\x74\x6b\x0d\xbd"
  "\x03\x62\x81\x83\x02\xbc\x03\x60\x81\x83\x02\xbb\x03\x5e\x81\x83"
  "\x02\xba\x03\x5c\x81\x83\x02\xb9\x03\x5a\x81\x83\x02\xb8\x03\x58"
  "\x81\x83\x02\xb7\x03\x56\x81\x83\x02\xb6\x03\x54\x81\x83\x02\xb5"
  "\x03\x52\x81\x83\x02\xb4\x03\x50\x81\x83\x02\xb3\x03\x4e\x81\x83"
  "\x02\xb2\x03\x4c\x81\x83\x02\xb1\x03\x4a\x81\x85\x02\xb0\x03\x48"
  "\x81\x83\x02\xaf\x03\x46\x81\x83\x02\xae\x03\x44\x81\x85\x02\xad"
  "\x03\x42\x81\x83\x02\xac\x03\x40\x81\x83\x02\xab\x03\x3e\x81\x85"
  "\x02\xaa\x03\x3c\x81\x83\x02\xa9\x03\x3a\x81\x83\x02\xa8\x03\x38"
  "\x81\x85\x02\xa7\x03\x36\x81\x83\x02\xa6\x03\x34\x81\x83\x02\xa5"
  "\x03\x32\x81\x85\x02\xa4\x03\x30\x81\x83\x02\xa3\x03\x2e\x81\x83"
  "\x02\xa2\x03\x2c\x81\x85\x02\xa1\x03\x2a\x81\x83\x02\xa0\x03\x28"
  "\x81\x83\x02\x9f\x03\x26\x81\x85\x02\x9e\x03\x24\x81\x83\x02\x9d"
  "\x03\x22\x81\x83\x02\x9c\x03\x20\x81\x83\x02\x9b\x03\x1e\x81\x9f"
  "\x02\x9a\x03\x1c\x81\x9f\x02\x99\x03\x1a\x81\x99\x02\x98\x03\x18"
  "\x81\x99\x02\x97\x03\x16\x81\x97\x02\x96\x03\x14\x81\x97\x02\x95"
  "\x03\x12\x81\x95\x02\x94\x03\x10\x81\x95\x02\x93\x03\x0e\x81\x93"
  "\x02\x92\x03\x0c\x81\x93\x02\x91\x03\x0a\x81\x8b\x02\x90\x03\x08"
  "\x81\x8b\x02\x8f\x03\x06\x81\x8b\x02\x8e\x03\x04\x87\x04\x61\x94"
  "\x01\x6c\x02\x16\x31\x02\x03\x19\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x2d\x70\x68\x61\x73\x65\x2f\x69\x6e\x76\x69\x73\x69\x62\x6c\x65"
  "\x6d\x04\x3c\x03\xc0\x03\x08\x81\x83\x02\xbf\x03\x06\x81\x85\x02"
  "\xbe\x03\x04\x84\x06\x07\x11\x6e\x02\x17\x65\x02\x04\x0f\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2d\x70\x68\x61\x73\x65\x6f\x02\xc2\x03"
  "\x06\x81\x85\x02\xc1\x03\x04\x84\x06\x05\x0d\x70\x02\x18\x65\x02"
  "\x03\x6d\x04\x6f\x03\xc4\x03\x06\x81\x85\x02\xc3\x03\x04\x84\x06"
  "\x05\x0f\x65\x02\x19\x0b\x54\x69\x6d\x65\x20\x74\x61\x6b\x65\x6e"
  "\x41\x3f\x3e\x04\x05\x46\x04\x1c\x04\x1d\x04\xd0\x03\x1a\x81\x85"
  "\x02\xcf\x03\x18\x81\x8b\x02\xce\x03\x16\xff\xff\x03\xcd\x03\x14"
  "\x81\x8f\x02\xcc\x03\x12\x81\x8f\x02\xcb\x03\x10\x81\x8d\x02\xca"
  "\x03\x0e\x81\x8d\x02\xc9\x03\x0c\x81\x89\x02\xc8\x03\x0a\x81\x87"
  "\x02\xc7\x03\x08\x81\x85\x02\xc6\x03\x06\x81\x85\x02\xc5\x03\x04"
  "\x84\x06\x19\x28\x41\x02\x1a\x02\x0e\x2a\x70\x68\x61\x73\x65\x2d"
  "\x6c\x65\x76\x65\x6c\x2a\x1c\x3e\x3f\x04\x1c\x17\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x3a\x70\x68\x61\x73\x65\x2d\x77\x72\x61\x70\x70"
  "\x65\x72\x71\x3e\x3f\x05\x05\x0e\x02\x10\x72\x65\x61\x6c\x2d\x74"
  "\x69\x6d\x65\x2d\x63\x6c\x6f\x63\x6b\x03\x71\x02\x13\x70\x72\x6f"
  "\x63\x65\x73\x73\x2d\x74\x69\x6d\x65\x2d\x63\x6c\x6f\x63\x6b\x05"
  "\xe9\x03\x34\x81\x8d\x02\xe8\x03\x32\x81\x8d\x02\xe7\x03\x30\x81"
  "\x8d\x02\xe6\x03\x2e\x81\x8d\x02\xe5\x03\x2c\x81\x8d\x02\xe4\x03"
  "\x2a\x81\x8d\x02\xe3\x03\x28\x81\x8b\x02\xe2\x03\x26\x81\x8b\x02"
  "\xe1\x03\x24\x81\x89\x02\xe0\x03\x22\x81\x89\x02\xdf\x03\x20\x81"
  "\x87\x02\xde\x03\x1e\x81\x85\x02\xdd\x03\x1c\x81\x83\x02\xdc\x03"
  "\x1a\x81\x83\x02\xdb\x03\x18\x81\x83\x02\xda\x03\x16\x81\x85\x02"
  "\xd9\x03\x14\x81\x83\x02\xd8\x03\x12\x81\x83\x02\xd7\x03\x10\x81"
  "\x83\x02\xd6\x03\x0e\x81\x83\x02\xd5\x03\x0c\x81\x83\x02\xd4\x03"
  "\x0a\x81\x83\x02\xd3\x03\x08\x81\x83\x02\xd2\x03\x06\x81\x83\x02"
  "\xd1\x03\x04\x83\x04\x33\x4a\x71\x02\x1b\x0d\x20\x28\x72\x65\x61"
  "\x6c\x20\x74\x69\x6d\x65\x29\x12\x20\x28\x70\x72\x6f\x63\x65\x73"
  "\x73\x20\x74\x69\x6d\x65\x29\x3b\x20\xe9\x07\x03\x3a\x20\x03\x18"
  "\x77\x72\x69\x74\x65\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x6c\x69\x6e\x65\x72\x04\x1d\x03\x0f\x65\x78\x61\x63"
  "\x74\x2d\x3e\x69\x6e\x65\x78\x61\x63\x74\x73\x04\x1e\x05\xf4\x03"
  "\x18\x81\x8d\x02\xf3\x03\x16\x81\x89\x02\xf2\x03\x14\x81\x85\x02"
  "\xf1\x03\x12\x81\x85\x02\xf0\x03\x10\x81\x8d\x02\xef\x03\x0e\x81"
  "\x89\x02\xee\x03\x0c\x81\x85\x02\xed\x03\x0a\x81\x85\x02\xec\x03"
  "\x08\x81\x85\x02\xeb\x03\x06\x81\x85\x02\xea\x03\x04\x85\x08\x17"
  "\x27\x74\x02\x1c\x16\x46\x6c\x6f\x77\x20\x47\x72\x61\x70\x68\x20"
  "\x47\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x04\x14\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x2d\x73\x75\x70\x65\x72\x70\x68\x61\x73\x65\x75"
  "\x02\x19\x70\x68\x61\x73\x65\x2f\x63\x61\x6e\x6f\x6e\x69\x63\x61"
  "\x6c\x69\x7a\x65\x2d\x73\x63\x6f\x64\x65\x76\x02\x16\x70\x68\x61"
  "\x73\x65\x2f\x74\x72\x61\x6e\x73\x6c\x61\x74\x65\x2d\x73\x63\x6f"
  "\x64\x65\x77\x04\xf7\x03\x08\x81\x81\x02\xf6\x03\x06\x82\x02\xf5"
  "\x03\x04\x82\x02\x07\x12\x78\x02\x1d\x02\x17\x53\x63\x6f\x64\x65"
  "\x20\x43\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x61\x74\x69\x6f"
  "\x6e\x56\x57\x44\x04\x40\x56\x03\x04\x12\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x2d\x73\x75\x62\x70\x68\x61\x73\x65\x79\x03\x17\x63\x61"
  "\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2f\x74\x6f\x70\x2d\x6c"
  "\x65\x76\x65\x6c\x03\x81\x04\x16\x81\x83\x02\x80\x04\x14\x81\x85"
  "\x02\xff\x03\x12\x81\x85\x02\xfe\x03\x10\x84\x06\xfd\x03\x0e\x81"
  "\x85\x02\xfc\x03\x0c\x81\x87\x02\xfb\x03\x0a\x81\x85\x02\xfa\x03"
  "\x08\x81\x85\x02\xf9\x03\x06\x82\x02\xf8\x03\x04\x82\x02\x15\x26"
  "\x7a\x02\x1e\x15\x4d\x75\x6c\x74\x69\x70\x6c\x65\x20\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x73\x02\x35\x2f\x45\x6e\x74\x72\x79"
  "\x20\x6e\x6f\x64\x65\x20\x6f\x66\x20\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x20\x63\x6f\x6d\x70\x69\x6c\x61\x74\x69\x6f\x6e\x20\x6e"
  "\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x2d\x56\x61\x6c\x75\x65\x20"
  "\x6f\x66\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x20\x63\x6f\x6d"
  "\x70\x69\x6c\x61\x74\x69\x6f\x6e\x20\x6e\x6f\x74\x20\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x25\x54\x72\x61\x6e\x73\x6c\x61\x74\x69"
  "\x6f\x6e\x20\x6f\x66\x20\x53\x63\x6f\x64\x65\x20\x69\x6e\x74\x6f"
  "\x20\x46\x6c\x6f\x77\x20\x47\x72\x61\x70\x68\x4a\x4f\x50\x51\x52"
  "\x53\x54\x55\x57\x59\x58\x44\x5a\x42\x0f\x40\x57\x39\x58\x44\x5a"
  "\x51\x0e\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x6e\x61\x6d\x65\x09"
  "\x04\x79\x03\x10\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x2d\x67\x72"
  "\x61\x70\x68\x04\x2d\x03\x2d\x03\x11\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x2d\x62\x6c\x6f\x63\x6b\x03\x16\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x2d\x65\x6e\x74\x72\x79\x2d\x6e\x6f\x64\x65"
  "\x03\x0d\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x3f\x03\x16"
  "\x62\x6c\x6f\x63\x6b\x2d\x62\x6f\x75\x6e\x64\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x73\x03\x15\x62\x6c\x6f\x63\x6b\x2d\x66\x72\x65"
  "\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x03\x0f\x72\x65\x74"
  "\x75\x72\x6e\x2f\x6f\x70\x65\x72\x61\x6e\x64\x03\x14\x61\x70\x70"
  "\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2f\x72\x65\x74\x75\x72\x6e\x3f"
  "\x04\x47\x03\x0b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x0e\xae"
  "\x04\x5c\x81\x83\x02\xad\x04\x5a\x81\x85\x02\xac\x04\x58\x81\x83"
  "\x02\xab\x04\x56\x81\x85\x02\xaa\x04\x54\x81\x83\x02\xa9\x04\x52"
  "\x81\x81\x02\xa8\x04\x50\x81\x81\x02\xa7\x04\x4e\x81\x81\x02\xa6"
  "\x04\x4c\x81\x81\x02\xa5\x04\x4a\x81\x81\x02\xa4\x04\x48\x81\x81"
  "\x02\xa3\x04\x46\x81\x81\x02\xa2\x04\x44\x81\x83\x02\xa1\x04\x42"
  "\x81\x83\x02\xa0\x04\x40\x81\x83\x02\x9f\x04\x3e\x81\x85\x02\x9e"
  "\x04\x3c\x81\x85\x02\x9d\x04\x3a\x81\x81\x02\x9c\x04\x38\x81\x81"
  "\x02\x9b\x04\x36\x81\x81\x02\x9a\x04\x34\x81\x81\x02\x99\x04\x32"
  "\x81\x81\x02\x98\x04\x30\x81\x81\x02\x97\x04\x2e\x81\x83\x02\x96"
  "\x04\x2c\x81\x83\x02\x95\x04\x2a\x81\x81\x02\x94\x04\x28\x81\x81"
  "\x02\x93\x04\x26\x81\x81\x02\x92\x04\x24\x81\x85\x02\x91\x04\x22"
  "\x81\x85\x02\x90\x04\x20\x81\x85\x02\x8f\x04\x1e\x81\x83\x02\x8e"
  "\x04\x1c\x81\x85\x02\x8d\x04\x1a\x81\x83\x02\x8c\x04\x18\x81\x83"
  "\x02\x8b\x04\x16\x81\x81\x02\x8a\x04\x14\x81\x81\x02\x89\x04\x12"
  "\x81\x81\x02\x88\x04\x10\x81\x81\x02\x87\x04\x0e\x81\x81\x02\x86"
  "\x04\x0c\x81\x81\x02\x85\x04\x0a\x81\x81\x02\x84\x04\x08\x81\x81"
  "\x02\x83\x04\x06\x82\x02\x82\x04\x04\x82\x02\x5b\x99\x01\x51\x02"
  "\x1f\x18\x46\x6c\x6f\x77\x20\x47\x72\x61\x70\x68\x20\x4f\x70\x74"
  "\x69\x6d\x69\x7a\x61\x74\x69\x6f\x6e\x04\x75\x02\x1b\x70\x68\x61"
  "\x73\x65\x2f\x73\x69\x6d\x75\x6c\x61\x74\x65\x2d\x61\x70\x70\x6c"
  "\x69\x63\x61\x74\x69\x6f\x6e\x4a\x02\x15\x70\x68\x61\x73\x65\x2f"
  "\x6f\x75\x74\x65\x72\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73\x2d\x02"
  "\x15\x70\x68\x61\x73\x65\x2f\x66\x6f\x6c\x64\x2d\x63\x6f\x6e\x73"
  "\x74\x61\x6e\x74\x73\x7b\x02\x1b\x70\x68\x61\x73\x65\x2f\x6f\x70"
  "\x65\x6e\x2d\x63\x6f\x64\x69\x6e\x67\x2d\x61\x6e\x61\x6c\x79\x73"
  "\x69\x73\x7c\x02\x18\x70\x68\x61\x73\x65\x2f\x6f\x70\x65\x72\x61"
  "\x74\x6f\x72\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73\x7d\x02\x1f\x70"
  "\x68\x61\x73\x65\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x2d\x6f\x70\x74\x69\x6d\x69\x7a\x61\x74\x69\x6f\x6e\x7e\x02\x1e"
  "\x70\x68\x61\x73\x65\x2f\x69\x64\x65\x6e\x74\x69\x66\x79\x2d\x63"
  "\x6c\x6f\x73\x75\x72\x65\x2d\x6c\x69\x6d\x69\x74\x73\x7f\x02\x18"
  "\x70\x68\x61\x73\x65\x2f\x73\x65\x74\x75\x70\x2d\x62\x6c\x6f\x63"
  "\x6b\x2d\x74\x79\x70\x65\x73\x80\x01\x02\x1b\x70\x68\x61\x73\x65"
  "\x2f\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x69\x6e\x64\x69\x72\x65"
  "\x63\x74\x69\x6f\x6e\x81\x01\x02\x19\x70\x68\x61\x73\x65\x2f\x63"
  "\x6f\x6d\x70\x75\x74\x65\x2d\x63\x61\x6c\x6c\x2d\x67\x72\x61\x70"
  "\x68\x82\x01\x02\x1b\x70\x68\x61\x73\x65\x2f\x73\x69\x64\x65\x2d"
  "\x65\x66\x66\x65\x63\x74\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73\x83"
  "\x01\x02\x1c\x70\x68\x61\x73\x65\x2f\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73\x84\x01"
  "\x02\x1a\x70\x68\x61\x73\x65\x2f\x73\x75\x62\x70\x72\x6f\x62\x6c"
  "\x65\x6d\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73\x85\x01\x02\x23\x70"
  "\x68\x61\x73\x65\x2f\x64\x65\x6c\x65\x74\x65\x2d\x69\x6e\x74\x65"
  "\x67\x72\x61\x74\x65\x64\x2d\x70\x61\x72\x61\x6d\x65\x74\x65\x72"
  "\x73\x86\x01\x02\x1a\x70\x68\x61\x73\x65\x2f\x73\x75\x62\x70\x72"
  "\x6f\x62\x6c\x65\x6d\x2d\x6f\x72\x64\x65\x72\x69\x6e\x67\x87\x01"
  "\x02\x20\x70\x68\x61\x73\x65\x2f\x64\x65\x73\x69\x67\x6e\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x66\x72\x61\x6d\x65"
  "\x73\x88\x01\x02\x1c\x70\x68\x61\x73\x65\x2f\x63\x6f\x6e\x6e\x65"
  "\x63\x74\x69\x76\x69\x74\x79\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73"
  "\x89\x01\x02\x1b\x70\x68\x61\x73\x65\x2f\x63\x6f\x6d\x70\x75\x74"
  "\x65\x2d\x6e\x6f\x64\x65\x2d\x6f\x66\x66\x73\x65\x74\x73\x8a\x01"
  "\x02\x1b\x70\x68\x61\x73\x65\x2f\x72\x65\x74\x75\x72\x6e\x2d\x65"
  "\x71\x75\x69\x76\x61\x6c\x65\x6e\x63\x69\x6e\x67\x8b\x01\x02\x18"
  "\x70\x68\x61\x73\x65\x2f\x69\x6e\x66\x6f\x2d\x67\x65\x6e\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2d\x31\x8c\x01\x02\x1e\x70\x68\x61\x73\x65"
  "\x2f\x66\x67\x2d\x6f\x70\x74\x69\x6d\x69\x7a\x61\x74\x69\x6f\x6e"
  "\x2d\x63\x6c\x65\x61\x6e\x75\x70\x8d\x01\x17\xc5\x04\x30\x81\x81"
  "\x02\xc4\x04\x2e\x81\x81\x02\xc3\x04\x2c\x81\x81\x02\xc2\x04\x2a"
  "\x81\x81\x02\xc1\x04\x28\x81\x81\x02\xc0\x04\x26\x81\x81\x02\xbf"
  "\x04\x24\x81\x81\x02\xbe\x04\x22\x81\x81\x02\xbd\x04\x20\x81\x81"
  "\x02\xbc\x04\x1e\x81\x81\x02\xbb\x04\x1c\x81\x81\x02\xba\x04\x1a"
  "\x81\x81\x02\xb9\x04\x18\x81\x81\x02\xb8\x04\x16\x81\x81\x02\xb7"
  "\x04\x14\x81\x81\x02\xb6\x04\x12\x81\x81\x02\xb5\x04\x10\x81\x81"
  "\x02\xb4\x04\x0e\x81\x81\x02\xb3\x04\x0c\x81\x81\x02\xb2\x04\x0a"
  "\x81\x81\x02\xb1\x04\x08\x81\x81\x02\xb0\x04\x06\x82\x02\xaf\x04"
  "\x04\x82\x02\x2f\x60\x8e\x01\x02\x20\x17\x41\x70\x70\x6c\x69\x63"
  "\x61\x74\x69\x6f\x6e\x20\x53\x69\x6d\x75\x6c\x61\x74\x69\x6f\x6e"
  "\x54\x53\x03\x04\x79\x04\x15\x73\x69\x6d\x75\x6c\x61\x74\x65\x2d"
  "\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x03\xc9\x04\x0a\x81"
  "\x83\x02\xc8\x04\x08\x81\x81\x02\xc7\x04\x06\x82\x02\xc6\x04\x04"
  "\x82\x02\x09\x15\x8f\x01\x02\x21\x0f\x4f\x75\x74\x65\x72\x20\x41"
  "\x6e\x61\x6c\x79\x73\x69\x73\x54\x52\x58\x04\x04\x79\x05\x0f\x6f"
  "\x75\x74\x65\x72\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73\x03\xce\x04"
  "\x0c\x81\x85\x02\xcd\x04\x0a\x81\x83\x02\xcc\x04\x08\x81\x81\x02"
  "\xcb\x04\x06\x82\x02\xca\x04\x04\x82\x02\x0b\x18\x90\x01\x02\x22"
  "\x0f\x46\x6f\x6c\x64\x20\x43\x6f\x6e\x73\x74\x61\x6e\x74\x73\x54"
  "\x53\x03\x04\x79\x04\x0f\x66\x6f\x6c\x64\x2d\x63\x6f\x6e\x73\x74"
  "\x61\x6e\x74\x73\x03\xd2\x04\x0a\x81\x83\x02\xd1\x04\x08\x81\x81"
  "\x02\xd0\x04\x06\x82\x02\xcf\x04\x04\x82\x02\x09\x15\x91\x01\x02"
  "\x23\x15\x4f\x70\x65\x6e\x20\x43\x6f\x64\x69\x6e\x67\x20\x41\x6e"
  "\x61\x6c\x79\x73\x69\x73\x54\x02\x04\x79\x03\x15\x6f\x70\x65\x6e"
  "\x2d\x63\x6f\x64\x69\x6e\x67\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73"
  "\x03\xd5\x04\x08\x81\x81\x02\xd4\x04\x06\x82\x02\xd3\x04\x04\x82"
  "\x02\x07\x12\x92\x01\x02\x24\x12\x4f\x70\x65\x72\x61\x74\x6f\x72"
  "\x20\x41\x6e\x61\x6c\x79\x73\x69\x73\x54\x52\x03\x04\x79\x04\x12"
  "\x6f\x70\x65\x72\x61\x74\x6f\x72\x2d\x61\x6e\x61\x6c\x79\x73\x69"
  "\x73\x03\xd9\x04\x0a\x81\x83\x02\xd8\x04\x08\x81\x81\x02\xd7\x04"
  "\x06\x82\x02\xd6\x04\x04\x82\x02\x09\x15\x93\x01\x02\x25\x15\x56"
  "\x61\x72\x69\x61\x62\x6c\x65\x20\x49\x6e\x64\x69\x72\x65\x63\x74"
  "\x69\x6f\x6e\x53\x02\x04\x79\x03\x22\x69\x6e\x69\x74\x69\x61\x6c"
  "\x69\x7a\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x69\x6e\x64"
  "\x69\x72\x65\x63\x74\x69\x6f\x6e\x73\x21\x03\xdc\x04\x08\x81\x81"
  "\x02\xdb\x04\x06\x82\x02\xda\x04\x04\x82\x02\x07\x12\x94\x01\x02"
  "\x26\x19\x45\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x4f\x70"
  "\x74\x69\x6d\x69\x7a\x61\x74\x69\x6f\x6e\x52\x02\x04\x79\x03\x17"
  "\x6f\x70\x74\x69\x6d\x69\x7a\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x73\x21\x03\xdf\x04\x08\x81\x81\x02\xde\x04\x06"
  "\x82\x02\xdd\x04\x04\x82\x02\x07\x12\x95\x01\x02\x27\x02\x1d\x43"
  "\x6c\x6f\x73\x75\x72\x65\x20\x4c\x69\x6d\x69\x74\x20\x49\x64\x65"
  "\x6e\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x53\x54\x52\x40\x05"
  "\x04\x79\x05\x19\x69\x64\x65\x6e\x74\x69\x66\x79\x2d\x63\x6c\x6f"
  "\x73\x75\x72\x65\x2d\x6c\x69\x6d\x69\x74\x73\x21\x04\x03\x18\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x63\x6f\x6e\x74\x69\x6e\x75"
  "\x61\x74\x69\x6f\x6e\x3f\x96\x01\x04\x1c\x73\x65\x74\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x66\x72\x65\x65\x2d\x63\x61\x6c"
  "\x6c\x65\x65\x73\x21\x04\x1c\x73\x65\x74\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x66\x72\x65\x65\x2d\x63\x61\x6c\x6c\x65\x72"
  "\x73\x21\x07\xea\x04\x18\x81\x83\x02\xe9\x04\x16\x81\x83\x02\xe8"
  "\x04\x14\x83\x04\xe7\x04\x12\x81\x81\x02\xe6\x04\x10\x81\x81\x02"
  "\xe5\x04\x0e\x81\x81\x02\xe4\x04\x0c\x81\x87\x02\xe3\x04\x0a\x81"
  "\x85\x02\xe2\x04\x08\x81\x83\x02\xe1\x04\x06\x82\x02\xe0\x04\x04"
  "\x82\x02\x17\x2f\x97\x01\x02\x28\x02\x19\x42\x6c\x6f\x63\x6b\x20"
  "\x54\x79\x70\x65\x20\x44\x65\x74\x65\x72\x6d\x69\x6e\x61\x74\x69"
  "\x6f\x6e\x5a\x40\x52\x58\x05\x04\x79\x03\x13\x73\x65\x74\x75\x70"
  "\x2d\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x73\x21\x04\x04\x18"
  "\x73\x65\x74\x75\x70\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x6f"
  "\x6e\x74\x65\x78\x74\x73\x21\x03\x96\x01\x04\x19\x73\x65\x74\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x73\x21\x07\xf5\x04\x18\x81\x83\x02\xf4\x04\x16\x83\x04"
  "\xf3\x04\x14\x81\x83\x02\xf2\x04\x12\x81\x81\x02\xf1\x04\x10\x81"
  "\x83\x02\xf0\x04\x0e\x81\x81\x02\xef\x04\x0c\x81\x81\x02\xee\x04"
  "\x0a\x81\x81\x02\xed\x04\x08\x81\x83\x02\xec\x04\x06\x82\x02\xeb"
  "\x04\x04\x82\x02\x17\x2f\x96\x01\x02\x29\x17\x43\x61\x6c\x6c\x20"
  "\x47\x72\x61\x70\x68\x20\x43\x6f\x6d\x70\x75\x74\x61\x74\x69\x6f"
  "\x6e\x52\x02\x04\x79\x03\x14\x63\x6f\x6d\x70\x75\x74\x65\x2d\x63"
  "\x61\x6c\x6c\x2d\x67\x72\x61\x70\x68\x21\x03\xf8\x04\x08\x81\x81"
  "\x02\xf7\x04\x06\x82\x02\xf6\x04\x04\x82\x02\x07\x12\x98\x01\x02"
  "\x2a\x15\x53\x69\x64\x65\x20\x45\x66\x66\x65\x63\x74\x20\x41\x6e"
  "\x61\x6c\x79\x73\x69\x73\x54\x52\x03\x04\x79\x04\x15\x73\x69\x64"
  "\x65\x2d\x65\x66\x66\x65\x63\x74\x2d\x61\x6e\x61\x6c\x79\x73\x69"
  "\x73\x03\xfc\x04\x0a\x81\x83\x02\xfb\x04\x08\x81\x81\x02\xfa\x04"
  "\x06\x82\x02\xf9\x04\x04\x82\x02\x09\x15\x99\x01\x02\x2b\x16\x43"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x20\x41\x6e\x61\x6c"
  "\x79\x73\x69\x73\x50\x54\x03\x04\x79\x03\x16\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73"
  "\x03\x18\x73\x65\x74\x75\x70\x2d\x66\x72\x61\x6d\x65\x2d\x61\x64"
  "\x6a\x75\x73\x74\x6d\x65\x6e\x74\x73\x03\x1a\x73\x65\x74\x75\x70"
  "\x2d\x62\x6c\x6f\x63\x6b\x2d\x73\x74\x61\x74\x69\x63\x2d\x6c\x69"
  "\x6e\x6b\x73\x21\x05\x83\x05\x10\x81\x81\x02\x82\x05\x0e\x81\x81"
  "\x02\x81\x05\x0c\x81\x83\x02\x80\x05\x0a\x81\x81\x02\xff\x04\x08"
  "\x81\x83\x02\xfe\x04\x06\x82\x02\xfd\x04\x04\x82\x02\x0f\x1f\x9a"
  "\x01\x02\x2c\x14\x53\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x20\x41"
  "\x6e\x61\x6c\x79\x73\x69\x73\x55\x02\x04\x79\x03\x14\x73\x69\x6d"
  "\x70\x6c\x69\x63\x69\x74\x79\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73"
  "\x03\x22\x63\x6f\x6d\x70\x75\x74\x65\x2d\x73\x75\x62\x70\x72\x6f"
  "\x62\x6c\x65\x6d\x2d\x66\x72\x65\x65\x2d\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x73\x04\x88\x05\x0c\x81\x81\x02\x87\x05\x0a\x81\x81\x02"
  "\x86\x05\x08\x81\x83\x02\x85\x05\x06\x82\x02\x84\x05\x04\x82\x02"
  "\x0b\x18\x9b\x01\x02\x2d\x1e\x49\x6e\x74\x65\x67\x72\x61\x74\x65"
  "\x64\x20\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x20\x44\x65\x6c\x65"
  "\x74\x69\x6f\x6e\x50\x02\x04\x79\x03\x1d\x64\x65\x6c\x65\x74\x65"
  "\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x2d\x70\x61\x72\x61"
  "\x6d\x65\x74\x65\x72\x73\x03\x8b\x05\x08\x81\x81\x02\x8a\x05\x06"
  "\x82\x02\x89\x05\x04\x82\x02\x07\x12\x9c\x01\x02\x2e\x14\x53\x75"
  "\x62\x70\x72\x6f\x62\x6c\x65\x6d\x20\x4f\x72\x64\x65\x72\x69\x6e"
  "\x67\x55\x02\x04\x79\x03\x14\x73\x75\x62\x70\x72\x6f\x62\x6c\x65"
  "\x6d\x2d\x6f\x72\x64\x65\x72\x69\x6e\x67\x03\x8e\x05\x08\x81\x81"
  "\x02\x8d\x05\x06\x82\x02\x8c\x05\x04\x82\x02\x07\x12\x9d\x01\x02"
  "\x2f\x16\x43\x6f\x6e\x6e\x65\x63\x74\x69\x76\x69\x74\x79\x20\x41"
  "\x6e\x61\x6c\x79\x73\x69\x73\x52\x58\x03\x04\x79\x04\x16\x63\x6f"
  "\x6e\x6e\x65\x63\x74\x69\x76\x69\x74\x79\x2d\x61\x6e\x61\x6c\x79"
  "\x73\x69\x73\x03\x92\x05\x0a\x81\x83\x02\x91\x05\x08\x81\x81\x02"
  "\x90\x05\x06\x82\x02\x8f\x05\x04\x82\x02\x09\x15\x9e\x01\x02\x30"
  "\x19\x45\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x46\x72\x61"
  "\x6d\x65\x20\x44\x65\x73\x69\x67\x6e\x50\x02\x04\x79\x03\x1b\x64"
  "\x65\x73\x69\x67\x6e\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x2d\x66\x72\x61\x6d\x65\x73\x21\x03\x95\x05\x08\x81\x81\x02"
  "\x94\x05\x06\x82\x02\x93\x05\x04\x82\x02\x07\x12\x9f\x01\x02\x31"
  "\x21\x53\x74\x61\x63\x6b\x20\x46\x72\x61\x6d\x65\x20\x4f\x66\x66"
  "\x73\x65\x74\x20\x44\x65\x74\x65\x72\x6d\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x58\x02\x04\x79\x03\x15\x63\x6f\x6d\x70\x75\x74\x65\x2d\x6e"
  "\x6f\x64\x65\x2d\x6f\x66\x66\x73\x65\x74\x73\x03\x98\x05\x08\x81"
  "\x81\x02\x97\x05\x06\x82\x02\x96\x05\x04\x82\x02\x07\x12\xa0\x01"
  "\x02\x32\x15\x52\x65\x74\x75\x72\x6e\x20\x45\x71\x75\x69\x76\x61"
  "\x6c\x65\x6e\x63\x69\x6e\x67\x54\x53\x03\x04\x79\x04\x19\x66\x69"
  "\x6e\x64\x2d\x65\x71\x75\x69\x76\x61\x6c\x65\x6e\x74\x2d\x72\x65"
  "\x74\x75\x72\x6e\x73\x21\x03\x9c\x05\x0a\x81\x83\x02\x9b\x05\x08"
  "\x81\x81\x02\x9a\x05\x06\x82\x02\x99\x05\x04\x82\x02\x09\x15\xa1"
  "\x01\x02\x33\x25\x44\x65\x62\x75\x67\x67\x69\x6e\x67\x20\x49\x6e"
  "\x66\x6f\x72\x6d\x61\x74\x69\x6f\x6e\x20\x49\x6e\x69\x74\x69\x61"
  "\x6c\x69\x7a\x61\x74\x69\x6f\x6e\x52\x58\x03\x04\x79\x04\x18\x69"
  "\x6e\x66\x6f\x2d\x67\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x2d\x70"
  "\x68\x61\x73\x65\x2d\x31\x03\xa0\x05\x0a\x81\x83\x02\x9f\x05\x08"
  "\x81\x81\x02\x9e\x05\x06\x82\x02\x9d\x05\x04\x82\x02\x09\x15\xa2"
  "\x01\x02\x34\x02\x20\x46\x6c\x6f\x77\x20\x47\x72\x61\x70\x68\x20"
  "\x4f\x70\x74\x69\x6d\x69\x7a\x61\x74\x69\x6f\x6e\x20\x43\x6c\x65"
  "\x61\x6e\x75\x70\x4f\x50\x52\x53\x54\x55\x5a\x08\x40\x52\x03\x04"
  "\x79\x03\x12\x63\x6c\x65\x61\x72\x2d\x63\x61\x6c\x6c\x2d\x67\x72"
  "\x61\x70\x68\x21\x03\xac\x05\x1a\x81\x81\x02\xab\x05\x18\x81\x81"
  "\x02\xaa\x05\x16\x81\x81\x02\xa9\x05\x14\x81\x81\x02\xa8\x05\x12"
  "\x81\x81\x02\xa7\x05\x10\x81\x81\x02\xa6\x05\x0e\x81\x81\x02\xa5"
  "\x05\x0c\x81\x81\x02\xa4\x05\x0a\x81\x83\x02\xa3\x05\x08\x81\x81"
  "\x02\xa2\x05\x06\x82\x02\xa1\x05\x04\x82\x02\x19\x2e\x55\x02\x35"
  "\x06\x20\x6d\x65\x61\x6e\x07\x20\x6d\x69\x6e\x2c\x20\x07\x20\x6d"
  "\x61\x78\x2c\x20\x11\x52\x65\x67\x69\x73\x74\x65\x72\x73\x20\x75"
  "\x73\x65\x64\x3a\x20\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x35\x02"
  "\x0f\x52\x54\x4c\x20\x47\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x49"
  "\x58\x5b\x5c\x5d\x5e\x5f\x60\x59\x0a\x40\x58\x39\x5d\x5c\x5b\x49"
  "\x59\x31\x5e\x1c\x6e\x75\x6d\x62\x65\x72\x2d\x6f\x66\x2d\x6d\x61"
  "\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x04"
  "\x6d\x61\x78\x04\x6d\x69\x6e\x02\x2b\x0f\x04\x6f\x02\x21\x69\x6e"
  "\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x6d\x61\x63\x68\x69\x6e\x65"
  "\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x21\x03\x13"
  "\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x74\x6f\x70\x2d\x6c\x65\x76"
  "\x65\x6c\x05\x13\x6d\x61\x6b\x65\x2f\x6c\x61\x62\x65\x6c\x2d\x3e"
  "\x6f\x62\x6a\x65\x63\x74\x04\x03\x10\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x6c\x61\x62\x65\x6c\x03\x5f\x04\x47\x03\x72\x03\x13"
  "\x72\x67\x72\x61\x70\x68\x2d\x6e\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x73\x03\x1d\x72\x74\x6c\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2f\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x6c\x61\x62\x65\x6c"
  "\x54\x04\x1d\x04\x1e\x03\x07\x6c\x65\x6e\x67\x74\x68\x03\x73\x10"
  "\xe7\x05\x78\x81\x8f\x02\xe6\x05\x76\x81\x93\x02\xe5\x05\x74\x81"
  "\x8d\x02\xe4\x05\x72\x81\x8b\x02\xe3\x05\x70\x81\x89\x02\xe2\x05"
  "\x6e\x81\x85\x02\xe1\x05\x6c\x81\x85\x02\xe0\x05\x6a\x81\x89\x02"
  "\xdf\x05\x68\x81\x85\x02\xde\x05\x66\x81\x8d\x02\xdd\x05\x64\x81"
  "\x85\x02\xdc\x05\x62\x81\x89\x02\xdb\x05\x60\x81\x85\x02\xda\x05"
  "\x5e\x81\x8d\x02\xd9\x05\x5c\x81\x85\x02\xd8\x05\x5a\x81\x85\x02"
  "\xd7\x05\x58\x81\x83\x02\xd6\x05\x56\x81\x85\x02\xd5\x05\x54\x81"
  "\x87\x02\xd4\x05\x52\x81\x85\x02\xd3\x05\x50\x83\x04\xd2\x05\x4e"
  "\x81\x81\x02\xd1\x05\x4c\x81\x89\x02\xd0\x05\x4a\x83\x04\xcf\x05"
  "\x48\x81\x83\x02\xce\x05\x46\x81\x81\x02\xcd\x05\x44\x81\x81\x02"
  "\xcc\x05\x42\x81\x83\x02\xcb\x05\x40\x81\x85\x02\xca\x05\x3e\x81"
  "\x87\x02\xc9\x05\x3c\x81\x85\x02\xc8\x05\x3a\x81\x85\x02\xc7\x05"
  "\x38\x81\x83\x02\xc6\x05\x36\x81\x81\x02\xc5\x05\x34\x81\x83\x02"
  "\xc4\x05\x32\x81\x83\x02\xc3\x05\x30\x81\x81\x02\xc2\x05\x2e\x81"
  "\x81\x02\xc1\x05\x2c\x81\x81\x02\xc0\x05\x2a\x81\x85\x02\xbf\x05"
  "\x28\x81\x89\x02\xbe\x05\x26\x81\x89\x02\xbd\x05\x24\x81\x89\x02"
  "\xbc\x05\x22\x81\x89\x02\xbb\x05\x20\x86\x0a\xba\x05\x1e\x81\x87"
  "\x02\xb9\x05\x1c\x81\x85\x02\xb8\x05\x1a\x81\x83\x02\xb7\x05\x18"
  "\x81\x81\x02\xb6\x05\x16\x81\x81\x02\xb5\x05\x14\x81\x81\x02\xb4"
  "\x05\x12\x81\x87\x02\xb3\x05\x10\x81\x89\x02\xb2\x05\x0e\x81\x87"
  "\x02\xb1\x05\x0c\x81\x87\x02\xb0\x05\x0a\x81\x81\x02\xaf\x05\x08"
  "\x81\x81\x02\xae\x05\x06\x82\x02\xad\x05\x04\x82\x02\x77\xbd\x01"
  "\x73\x02\x36\x11\x52\x54\x4c\x20\x4f\x70\x74\x69\x6d\x69\x7a\x61"
  "\x74\x69\x6f\x6e\x16\x72\x74\x6c\x2d\x72\x65\x77\x72\x69\x74\x69"
  "\x6e\x67\x3a\x70\x72\x65\x2d\x63\x73\x65\x0e\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x3a\x63\x73\x65\x3f\x17\x72\x74\x6c\x2d\x72\x65\x77"
  "\x72\x69\x74\x69\x6e\x67\x3a\x70\x6f\x73\x74\x2d\x63\x73\x65\x1b"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63\x6f\x64\x65\x2d\x63\x6f"
  "\x6d\x70\x72\x65\x73\x73\x69\x6f\x6e\x3f\x05\x04\x75\x02\x1c\x70"
  "\x68\x61\x73\x65\x2f\x72\x74\x6c\x2d\x64\x61\x74\x61\x66\x6c\x6f"
  "\x77\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73\x53\x03\x14\x70\x68\x61"
  "\x73\x65\x2f\x72\x74\x6c\x2d\x72\x65\x77\x72\x69\x74\x69\x6e\x67"
  "\x52\x02\x28\x70\x68\x61\x73\x65\x2f\x69\x6e\x76\x65\x72\x74\x69"
  "\x62\x6c\x65\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x65"
  "\x6c\x69\x6d\x69\x6e\x61\x74\x69\x6f\x6e\x50\x02\x27\x70\x68\x61"
  "\x73\x65\x2f\x63\x6f\x6d\x6d\x6f\x6e\x2d\x73\x75\x62\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x2d\x65\x6c\x69\x6d\x69\x6e\x61\x74"
  "\x69\x6f\x6e\x4f\x02\x1c\x70\x68\x61\x73\x65\x2f\x63\x6f\x6d\x6d"
  "\x6f\x6e\x2d\x73\x75\x66\x66\x69\x78\x2d\x6d\x65\x72\x67\x69\x6e"
  "\x67\x31\x02\x18\x70\x68\x61\x73\x65\x2f\x6c\x69\x66\x65\x74\x69"
  "\x6d\x65\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73\x02\x1d\x70\x68\x61"
  "\x73\x65\x2f\x6c\x69\x6e\x65\x61\x72\x69\x7a\x61\x74\x69\x6f\x6e"
  "\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73\xa3\x01\x02\x17\x70\x68\x61"
  "\x73\x65\x2f\x63\x6f\x64\x65\x2d\x63\x6f\x6d\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\xa4\x01\x02\x1a\x70\x68\x61\x73\x65\x2f\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x69\x6f\x6e"
  "\xa5\x01\x02\x1f\x70\x68\x61\x73\x65\x2f\x72\x74\x6c\x2d\x6f\x70"
  "\x74\x69\x6d\x69\x7a\x61\x74\x69\x6f\x6e\x2d\x63\x6c\x65\x61\x6e"
  "\x75\x70\xa6\x01\x0c\xf7\x05\x22\x81\x81\x02\xf6\x05\x20\x81\x81"
  "\x02\xf5\x05\x1e\x81\x81\x02\xf4\x05\x1c\x81\x81\x02\xf3\x05\x1a"
  "\x81\x81\x02\xf2\x05\x18\x81\x81\x02\xf1\x05\x16\x81\x81\x02\xf0"
  "\x05\x14\x81\x83\x02\xef\x05\x12\x81\x81\x02\xee\x05\x10\x81\x81"
  "\x02\xed\x05\x0e\x81\x81\x02\xec\x05\x0c\x81\x81\x02\xeb\x05\x0a"
  "\x81\x83\x02\xea\x05\x08\x81\x81\x02\xe9\x05\x06\x82\x02\xe8\x05"
  "\x04\x82\x02\x21\x41\xa7\x01\x02\x37\x16\x52\x54\x4c\x20\x44\x61"
  "\x74\x61\x66\x6c\x6f\x77\x20\x41\x6e\x61\x6c\x79\x73\x69\x73\x5e"
  "\x02\x04\x79\x03\x16\x72\x74\x6c\x2d\x64\x61\x74\x61\x66\x6c\x6f"
  "\x77\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73\x03\xfa\x05\x08\x81\x81"
  "\x02\xf9\x05\x06\x82\x02\xf8\x05\x04\x82\x02\x07\x12\xa8\x01\x02"
  "\x38\x0e\x52\x54\x4c\x20\x52\x65\x77\x72\x69\x74\x69\x6e\x67\x5e"
  "\x02\x04\x79\x02\xfd\x05\x08\x81\x85\x02\xfc\x05\x06\x81\x83\x02"
  "\xfb\x05\x04\x83\x04\x07\x10\xa9\x01\x02\x39\x21\x43\x6f\x6d\x6d"
  "\x6f\x6e\x20\x53\x75\x62\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x20\x45\x6c\x69\x6d\x69\x6e\x61\x74\x69\x6f\x6e\x5e\x02\x04\x79"
  "\x03\x21\x63\x6f\x6d\x6d\x6f\x6e\x2d\x73\x75\x62\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x2d\x65\x6c\x69\x6d\x69\x6e\x61\x74\x69"
  "\x6f\x6e\x03\x80\x06\x08\x81\x81\x02\xff\x05\x06\x82\x02\xfe\x05"
  "\x04\x82\x02\x07\x12\xaa\x01\x02\x3a\x22\x49\x6e\x76\x65\x72\x74"
  "\x69\x62\x6c\x65\x20\x45\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x20"
  "\x45\x6c\x69\x6d\x69\x6e\x61\x74\x69\x6f\x6e\x5e\x02\x04\x79\x03"
  "\x22\x69\x6e\x76\x65\x72\x74\x69\x62\x6c\x65\x2d\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x2d\x65\x6c\x69\x6d\x69\x6e\x61\x74\x69"
  "\x6f\x6e\x03\x83\x06\x08\x81\x81\x02\x82\x06\x06\x82\x02\x81\x06"
  "\x04\x82\x02\x07\x12\xab\x01\x02\x3b\x16\x43\x6f\x6d\x6d\x6f\x6e"
  "\x20\x53\x75\x66\x66\x69\x78\x20\x4d\x65\x72\x67\x69\x6e\x67\x5e"
  "\x02\x04\x79\x03\x17\x6d\x65\x72\x67\x65\x2d\x63\x6f\x6d\x6d\x6f"
  "\x6e\x2d\x73\x75\x66\x66\x69\x78\x65\x73\x21\x03\x86\x06\x08\x81"
  "\x81\x02\x85\x06\x06\x82\x02\x84\x06\x04\x82\x02\x07\x12\xac\x01"
  "\x02\x3c\x12\x4c\x69\x66\x65\x74\x69\x6d\x65\x20\x41\x6e\x61\x6c"
  "\x79\x73\x69\x73\x5e\x02\x04\x79\x03\x12\x6c\x69\x66\x65\x74\x69"
  "\x6d\x65\x2d\x61\x6e\x61\x6c\x79\x73\x69\x73\x03\x89\x06\x08\x81"
  "\x81\x02\x88\x06\x06\x82\x02\x87\x06\x04\x82\x02\x07\x12\xad\x01"
  "\x02\x3d\x18\x49\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x20\x43"
  "\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x5e\x02\x04\x79\x03\x11"
  "\x63\x6f\x64\x65\x2d\x63\x6f\x6d\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x03\x8c\x06\x08\x81\x81\x02\x8b\x06\x06\x82\x02\x8a\x06\x04\x82"
  "\x02\x07\x12\xae\x01\x02\x3e\x17\x4c\x69\x6e\x65\x61\x72\x69\x7a"
  "\x61\x74\x69\x6f\x6e\x20\x41\x6e\x61\x6c\x79\x73\x69\x73\x5e\x02"
  "\x04\x79\x03\x1c\x73\x65\x74\x75\x70\x2d\x62\x62\x6c\x6f\x63\x6b"
  "\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x73\x21\x03"
  "\x8f\x06\x08\x81\x81\x02\x8e\x06\x06\x82\x02\x8d\x06\x04\x82\x02"
  "\x07\x12\xaf\x01\x02\x3f\x14\x52\x65\x67\x69\x73\x74\x65\x72\x20"
  "\x41\x6c\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x5e\x02\x04\x79\x03\x14"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x61\x6c\x6c\x6f\x63\x61\x74"
  "\x69\x6f\x6e\x03\x92\x06\x08\x81\x81\x02\x91\x06\x06\x82\x02\x90"
  "\x06\x04\x82\x02\x07\x12\xb0\x01\x02\x40\x02\x40\x5e\x03\x04\x04"
  "\x14\x73\x65\x74\x2d\x72\x67\x72\x61\x70\x68\x2d\x62\x62\x6c\x6f"
  "\x63\x6b\x73\x21\x04\x23\x73\x65\x74\x2d\x72\x67\x72\x61\x70\x68"
  "\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x63\x72\x6f\x73\x73\x65"
  "\x73\x2d\x63\x61\x6c\x6c\x3f\x21\x04\x1e\x73\x65\x74\x2d\x72\x67"
  "\x72\x61\x70\x68\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6e\x2d"
  "\x64\x65\x61\x74\x68\x73\x21\x04\x21\x73\x65\x74\x2d\x72\x67\x72"
  "\x61\x70\x68\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6c\x69\x76"
  "\x65\x2d\x6c\x65\x6e\x67\x74\x68\x21\x04\x1c\x73\x65\x74\x2d\x72"
  "\x67\x72\x61\x70\x68\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6e"
  "\x2d\x72\x65\x66\x73\x21\x04\x22\x73\x65\x74\x2d\x72\x67\x72\x61"
  "\x70\x68\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6b\x6e\x6f\x77"
  "\x6e\x2d\x76\x61\x6c\x75\x65\x73\x21\x08\x9b\x06\x14\x81\x83\x02"
  "\x9a\x06\x12\x81\x83\x02\x99\x06\x10\x81\x83\x02\x98\x06\x0e\x81"
  "\x83\x02\x97\x06\x0c\x81\x83\x02\x96\x06\x0a\x83\x04\x95\x06\x08"
  "\x81\x81\x02\x94\x06\x06\x81\x81\x02\x93\x06\x04\x82\x02\x13\x29"
  "\xb1\x01\x02\x41\x01\x0d\x10\x52\x54\x4c\x20\x66\x6f\x72\x20\x6f"
  "\x62\x6a\x65\x63\x74\x20\x10\x52\x54\x4c\x20\x46\x69\x6c\x65\x20"
  "\x4f\x75\x74\x70\x75\x74\x37\x5d\x5c\x60\x05\x04\x6f\x04\x1d\x04"
  "\x1e\x03\x2a\x06\x03\x70\x70\xb2\x01\x05\x0e\x6c\x69\x6e\x65\x61"
  "\x72\x69\x7a\x65\x2d\x72\x74\x6c\x04\x0b\x77\x72\x69\x74\x65\x2d"
  "\x63\x68\x61\x72\xb3\x01\x03\x19\x6f\x75\x74\x70\x75\x74\x2d\x70"
  "\x6f\x72\x74\x2f\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70\x75\x74"
  "\xb4\x01\x04\x17\x77\x72\x69\x74\x65\x2d\x72\x74\x6c\x2d\x69\x6e"
  "\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x73\x0a\xad\x06\x26\x81\x83"
  "\x02\xac\x06\x24\x81\x87\x02\xab\x06\x22\x81\x83\x02\xaa\x06\x20"
  "\x81\x83\x02\xa9\x06\x1e\x81\x83\x02\xa8\x06\x1c\x81\x83\x02\xa7"
  "\x06\x1a\x81\x8d\x02\xa6\x06\x18\x81\x8b\x02\xa5\x06\x16\x81\x89"
  "\x02\xa4\x06\x14\x81\x83\x02\xa3\x06\x12\x81\x83\x02\xa2\x06\x10"
  "\x81\x83\x02\xa1\x06\x0e\x81\x83\x02\xa0\x06\x0c\x81\x83\x02\x9f"
  "\x06\x0a\x81\x87\x02\x9e\x06\x08\x81\x83\x02\x9d\x06\x06\x81\x83"
  "\x02\x9c\x06\x04\x84\x06\x25\x45\xb5\x01\x02\x42\x02\x0f\x4c\x41"
  "\x50\x20\x47\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x62\x63\x03\x39"
  "\x36\x5e\x60\x05\x04\x6f\x02\x15\x69\x6e\x69\x74\x69\x61\x6c\x69"
  "\x7a\x65\x2d\x62\x61\x63\x6b\x2d\x65\x6e\x64\x21\x05\x0d\x67\x65"
  "\x6e\x65\x72\x61\x74\x65\x2d\x6c\x61\x70\x03\x0c\x6d\x61\x6b\x65"
  "\x2d\x73\x62\x6c\x6f\x63\x6b\x03\x0f\x72\x74\x6c\x2d\x65\x78\x70"
  "\x72\x2f\x6c\x61\x62\x65\x6c\x03\x14\x72\x74\x6c\x2d\x65\x78\x70"
  "\x72\x2f\x65\x6e\x74\x72\x79\x2d\x6e\x6f\x64\x65\x03\x54\x03\x19"
  "\x72\x74\x6c\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x65\x6e"
  "\x74\x72\x79\x2d\x6e\x6f\x64\x65\x04\x13\x6e\x6f\x64\x65\x2d\x69"
  "\x6e\x73\x65\x72\x74\x2d\x73\x6e\x6f\x64\x65\x21\x0a\xc5\x06\x32"
  "\x81\x85\x02\xc4\x06\x30\x81\x8d\x02\xc3\x06\x2e\x81\x89\x02\xc2"
  "\x06\x2c\x81\x89\x02\xc1\x06\x2a\x81\x89\x02\xc0\x06\x28\x81\x83"
  "\x02\xbf\x06\x26\x81\x81\x02\xbe\x06\x24\x81\x81\x02\xbd\x06\x22"
  "\x81\x8f\x02\xbc\x06\x20\x81\x8b\x02\xbb\x06\x1e\x81\x8b\x02\xba"
  "\x06\x1c\x81\x89\x02\xb9\x06\x1a\x81\x85\x02\xb8\x06\x18\x81\x83"
  "\x02\xb7\x06\x16\x81\x83\x02\xb6\x06\x14\x81\x81\x02\xb5\x06\x12"
  "\x86\x0a\xb4\x06\x10\x81\x85\x02\xb3\x06\x0e\x81\x89\x02\xb2\x06"
  "\x0c\x81\x87\x02\xb1\x06\x0a\x81\x81\x02\xb0\x06\x08\x81\x81\x02"
  "\xaf\x06\x06\x82\x02\xae\x06\x04\x82\x02\x31\x52\x54\x02\x43\x02"
  "\x12\x4c\x41\x50\x20\x4c\x69\x6e\x65\x61\x72\x69\x7a\x61\x74\x69"
  "\x6f\x6e\x4e\x5b\x5c\x5d\x5e\x5f\x60\x4b\x4c\x4d\x0b\x5d\x5c\x60"
  "\x5b\x62\x40\x07\x04\x6f\x05\x0e\x6c\x69\x6e\x65\x61\x72\x69\x7a"
  "\x65\x2d\x6c\x61\x70\x05\x18\x69\x6e\x66\x6f\x2d\x67\x65\x6e\x65"
  "\x72\x61\x74\x69\x6f\x6e\x2d\x70\x68\x61\x73\x65\x2d\x32\x03\x14"
  "\x6f\x70\x74\x69\x6d\x69\x7a\x65\x2d\x6c\x69\x6e\x65\x61\x72\x2d"
  "\x6c\x61\x70\x04\x09\x77\x72\x61\x70\x2d\x6c\x61\x70\x06\xdf\x06"
  "\x36\x81\x85\x02\xde\x06\x34\x81\x87\x02\xdd\x06\x32\x81\x87\x02"
  "\xdc\x06\x30\x81\x87\x02\xdb\x06\x2e\x85\x08\xda\x06\x2c\x81\x81"
  "\x02\xd9\x06\x2a\x81\x81\x02\xd8\x06\x28\x81\x81\x02\xd7\x06\x26"
  "\x81\x81\x02\xd6\x06\x24\x81\x81\x02\xd5\x06\x22\x81\x81\x02\xd4"
  "\x06\x20\x81\x81\x02\xd3\x06\x1e\x81\x81\x02\xd2\x06\x1c\x81\x87"
  "\x02\xd1\x06\x1a\x81\x85\x02\xd0\x06\x18\x81\x83\x02\xcf\x06\x16"
  "\x81\x8b\x02\xce\x06\x14\x81\x89\x02\xcd\x06\x12\x81\x87\x02\xcc"
  "\x06\x10\x81\x81\x02\xcb\x06\x0e\x81\x81\x02\xca\x06\x0c\x81\x8b"
  "\x02\xc9\x06\x0a\x81\x89\x02\xc8\x06\x08\x81\x87\x02\xc7\x06\x06"
  "\x82\x02\xc6\x06\x04\x82\x02\x35\x57\x40\x02\x44\x04\x72\x74\x6c"
  "\x02\x20\x01\x3b\x03\x3b\x3b\x01\x0a\x08\x63\x6f\x6d\x6d\x65\x6e"
  "\x74\x35\x06\x6c\x61\x62\x65\x6c\x10\x01\x0d\x10\x4c\x41\x50\x20"
  "\x66\x6f\x72\x20\x6f\x62\x6a\x65\x63\x74\x20\x02\x11\x10\x4c\x41"
  "\x50\x20\x46\x69\x6c\x65\x20\x4f\x75\x74\x70\x75\x74\x11\x2a\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x2d\x72\x61\x64\x69\x78\x2a\x35\x26"
  "\x2a\x75\x6e\x70\x61\x72\x73\x65\x2d\x75\x6e\x69\x6e\x74\x65\x72"
  "\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x2d\x62\x79\x2d\x6e"
  "\x61\x6d\x65\x3f\x2a\x10\x03\x35\x10\x37\x4e\x05\x04\x6f\x05\x0e"
  "\x04\x14\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f"
  "\x2d\x70\x6f\x72\x74\x03\x1d\x03\x1e\x02\x2a\x02\x14\x63\x75\x72"
  "\x72\x65\x6e\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74"
  "\x06\xb2\x01\x04\x03\xb3\x01\x03\xb4\x01\x0c\x8a\x07\x58\x81\x85"
  "\x02\x89\x07\x56\x81\x85\x02\x88\x07\x54\x81\x85\x02\x87\x07\x52"
  "\x81\x83\x02\x86\x07\x50\x81\x83\x02\x85\x07\x4e\x83\x04\x84\x07"
  "\x4c\x81\x85\x02\x83\x07\x4a\x81\x83\x02\x82\x07\x48\x81\x83\x02"
  "\x81\x07\x46\x81\x83\x02\x80\x07\x44\x81\x83\x02\xff\x06\x42\x81"
  "\x83\x02\xfe\x06\x40\x81\x83\x02\xfd\x06\x3e\x81\x83\x02\xfc\x06"
  "\x3c\x81\x85\x02\xfb\x06\x3a\x81\x85\x02\xfa\x06\x38\x81\x83\x02"
  "\xf9\x06\x36\x83\x04\xf8\x06\x34\x81\x83\x02\xf7\x06\x32\x81\x83"
  "\x02\xf6\x06\x30\x81\x83\x02\xf5\x06\x2e\x81\x83\x02\xf4\x06\x2c"
  "\x81\x85\x02\xf3\x06\x2a\x81\x83\x02\xf2\x06\x28\x81\x83\x02\xf1"
  "\x06\x26\x81\x83\x02\xf0\x06\x24\x81\x89\x02\xef\x06\x22\x81\x83"
  "\x02\xee\x06\x20\x81\x83\x02\xed\x06\x1e\x81\x83\x02\xec\x06\x1c"
  "\x81\x85\x02\xeb\x06\x1a\x81\x83\x02\xea\x06\x18\x81\x83\x02\xe9"
  "\x06\x16\x81\x83\x02\xe8\x06\x14\x81\x85\x02\xe7\x06\x12\x81\x83"
  "\x02\xe6\x06\x10\x81\x83\x02\xe5\x06\x0e\x81\x85\x02\xe4\x06\x0c"
  "\x81\x83\x02\xe3\x06\x0a\x81\x83\x02\xe2\x06\x08\x81\x83\x02\xe1"
  "\x06\x06\x81\x83\x02\xe0\x06\x04\x84\x06\x57\x89\x01\xb4\x01\x44"
  "\xb2\x01\xb2\x01\x01\x21\x14\x4d\x69\x73\x73\x69\x6e\x67\x20\x64"
  "\x65\x70\x65\x6e\x64\x65\x6e\x63\x79\x3a\x0d\x20\x62\x65\x63\x61"
  "\x75\x73\x65\x20\x6f\x66\x3a\x0c\x47\x65\x6e\x65\x72\x61\x74\x69"
  "\x6e\x67\x20\x04\x73\x63\x6d\x13\x75\x73\x75\x61\x6c\x2d\x69\x6e"
  "\x74\x65\x67\x72\x61\x74\x69\x6f\x6e\x73\x13\x69\x6e\x74\x65\x67"
  "\x72\x61\x74\x65\x2d\x65\x78\x74\x65\x72\x6e\x61\x6c\x0c\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x04\x62\x69\x6e\x04\x65\x78"
  "\x74\x02\x08\xb4\x01\x04\x40\x04\x54\x04\xb5\x01\x04\xb1\x01\x04"
  "\xb0\x01\x04\xaf\x01\x04\xae\x01\x04\xad\x01\x04\xac\x01\x04\xab"
  "\x01\x04\xaa\x01\x04\xa9\x01\x04\xa8\x01\x04\xa7\x01\x04\x73\x04"
  "\x55\x04\xa2\x01\x04\xa1\x01\x04\xa0\x01\x04\x9f\x01\x04\x9e\x01"
  "\x04\x9d\x01\x04\x9c\x01\x04\x9b\x01\x04\x9a\x01\x04\x99\x01\x04"
  "\x98\x01\x04\x96\x01\x04\x97\x01\x04\x95\x01\x04\x94\x01\x04\x93"
  "\x01\x04\x92\x01\x04\x91\x01\x04\x90\x01\x04\x8f\x01\x04\x8e\x01"
  "\x04\x51\x04\x7a\x04\x78\x04\x74\x04\x71\x04\x41\x04\x65\x04\x70"
  "\x04\x6e\x04\x6c\x04\x61\x04\x64\x04\x48\x04\x3d\x04\x34\x04\x2f"
  "\x04\x2e\x06\x2b\x04\x27\x04\x25\x04\x23\x04\x22\x04\x20\x04\x1f"
  "\x06\x18\x04\x16\x04\x15\x04\x04\x04\x68\x6b\x6a\x68\x69\xa6\x01"
  "\xa5\x01\xa3\x01\xa4\x01\x31\x50\x4f\x52\x53\x67\x66\x8d\x01\x8c"
  "\x01\x8b\x01\x8a\x01\x88\x01\x89\x01\x87\x01\x86\x01\x85\x01\x84"
  "\x01\x83\x01\x82\x01\x80\x01\x7f\x7e\x81\x01\x7d\x7c\x7b\x2d\x4a"
  "\x1a\x77\x76\x32\x46\x6d\x1c\x3c\x79\x75\x6f\x14\x45\x3b\x17\x4d"
  "\x4c\x4b\x4e\x63\x62\x49\x60\x5f\x5e\x5d\x5c\x5b\x42\x44\x59\x58"
  "\x5a\x57\x56\x38\x3a\x24\x3f\x3e\x36\x39\x37\x30\x33\x14\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x2d\x72\x65\x63\x75\x72\x73\x69\x76\x65\x6c"
  "\x79\x29\x2c\x19\x1b\x28\x26\x17\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x3a\x62\x61\x74\x63\x68\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x21\x12"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x0e\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x73\x63\x6f\x64\x65\x0f"
  "\x0d\x13\x12\x09\x0a\x04\x63\x62\x66\x03\x63\x66\x68\x13\x6c\x65"
  "\x78\x69\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x0d\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x66\x69\x6c\x65\xb5\x01\xb5"
  "\x01\x0b\x14\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x66\x69\x6c\x65\x3a"
  "\x66\x6f\x72\x63\x65\x3f\xb5\x01\x16\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x2d\x66\x69\x6c\x65\x3a\x73\x66\x2d\x6f\x6e\x6c\x79\x3f\xb4\x01"
  "\x29\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x66\x69\x6c\x65\x3a\x6f\x76"
  "\x65\x72\x72\x69\x64\x65\x2d\x75\x73\x75\x61\x6c\x2d\x69\x6e\x74"
  "\x65\x67\x72\x61\x74\x69\x6f\x6e\x73\xb2\x01\x05\x10\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x18\x73\x66"
  "\x2f\x64\x65\x66\x61\x75\x6c\x74\x2d\x73\x79\x6e\x74\x61\x78\x2d"
  "\x74\x61\x62\x6c\x65\xb1\x01\x18\x73\x66\x2f\x64\x65\x66\x61\x75"
  "\x6c\x74\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\xb0"
  "\x01\x27\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63\x6f\x61\x6c\x65"
  "\x73\x63\x69\x6e\x67\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x77"
  "\x61\x72\x6e\x69\x6e\x67\x73\x3f\xaf\x01\x04\xb4\x01\xb2\x01\xb1"
  "\x01\xb0\x01\xb5\x01\xaf\x01\x07\x04\x47\x04\x14\x6b\x65\x65\x70"
  "\x2d\x6d\x61\x74\x63\x68\x69\x6e\x67\x2d\x69\x74\x65\x6d\x73\x04"
  "\x16\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x66\x61\x75\x6c"
  "\x74\x2d\x74\x79\x70\x65\x02\x0c\x04\x11\x05\x1a\x65\x72\x72\x6f"
  "\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x05\x0e\x03\x0d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x3f\x03\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d"
  "\x74\x79\x70\x65\x04\x04\x43\x03\x17\x66\x69\x6c\x65\x2d\x6d\x6f"
  "\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x69\x6d\x65\x04"
  "\x04\x18\x6c\x69\x73\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d"
  "\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x03\x72\x04\x1d\x03\x0d\x2d"
  "\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x04\x1e\x04\x05\x77"
  "\x61\x72\x6e\x04\x04\xb3\x01\x16\x37\x70\x80\x80\x04\x36\x6e\x81"
  "\x81\x02\x35\x6c\x81\x81\x02\x34\x6a\x81\x87\x02\x33\x68\x81\x85"
  "\x02\x32\x66\x81\x85\x02\x31\x64\x81\x85\x02\x30\x62\x81\x89\x02"
  "\x2f\x60\x81\x87\x02\x2e\x5e\x81\x89\x02\x2d\x5c\x81\x85\x02\x2c"
  "\x5a\x81\x85\x02\x2b\x58\x81\x85\x02\x2a\x56\x81\x85\x02\x29\x54"
  "\x81\x85\x02\x28\x52\x81\x8b\x02\x27\x50\x81\x89\x02\x26\x4e\x81"
  "\x8b\x02\x25\x4c\x81\x89\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x85"
  "\x02\x22\x46\x81\x83\x02\x21\x44\x81\x83\x02\x20\x42\x81\x83\x02"
  "\x1f\x40\x81\x89\x02\x1e\x3e\x81\x89\x02\x1d\x3c\x85\x08\x1c\x3a"
  "\x81\x8f\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x83\x02\x19\x34\x81"
  "\x85\x02\x18\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x85"
  "\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x83\x02"
  "\x12\x26\x81\x85\x02\x11\x24\x81\x89\x02\x10\x22\x81\x8d\x02\x0f"
  "\x20\x83\x04\x0e\x1e\x81\x8b\x02\x0d\x1c\x81\x89\x02\x0c\x1a\x81"
  "\x8b\x02\x0b\x18\x81\x8b\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x87"
  "\x02\x08\x12\x83\x04\x07\x10\x81\x8b\x02\x06\x0e\x81\x89\x02\x05"
  "\x0c\x81\x87\x02\x04\x0a\x81\x87\x02\x03\x08\x85\x04\x02\x06\x81"
  "\x83\x02\x01\x04\x81\x83\x02\x6f\xc1\x01";

SCHEME_OBJECT *
toplev_so_data_d412f70010003197 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_toplev_so_data_d412f70010003197 [0]))), (sizeof (prog_toplev_so_data_d412f70010003197)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_88]));
}

DECLARE_COMPILED_DATA_NS ("toplev.so", toplev_so_data_d412f70010003197)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("toplev.so", "2474dc334b013ee4")
