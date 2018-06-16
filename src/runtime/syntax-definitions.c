/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:56-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 12
#define DEBUGGING_LABEL_1_2 11
#define EXECUTE_CACHE_1_7 7
#define EXECUTE_CACHE_1_6 9
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_definitions_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_4)
DEFLABEL (initialize_packageB_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_5 7
#define LABEL_2_8 9
#define LABEL_2_9 11
#define LABEL_2_7 13
#define LABEL_2_13 15
#define LABEL_2_10 17
#define LABEL_2_12 19
#define LABEL_2_15 21
#define LABEL_2_16 23
#define LABEL_2_14 25
#define LABEL_2_19 27
#define LABEL_2_18 29
#define LABEL_2_21 31
#define LABEL_2_20 33
#define LABEL_2_23 35
#define LABEL_2_22 37
#define LABEL_2_25 39
#define LABEL_2_24 41
#define LABEL_2_27 43
#define LABEL_2_26 45
#define LABEL_2_29 47
#define LABEL_2_28 49
#define LABEL_2_31 51
#define LABEL_2_32 53
#define LABEL_2_30 55
#define LABEL_2_36 57
#define LABEL_2_33 59
#define LABEL_2_35 61
#define LABEL_2_38 63
#define LABEL_2_37 65
#define LABEL_2_40 67
#define LABEL_2_39 69
#define LABEL_2_42 71
#define LABEL_2_41 73
#define LABEL_2_44 75
#define LABEL_2_43 77
#define LABEL_2_45 79
#define ENVIRONMENT_LABEL_2_3 123
#define DEBUGGING_LABEL_2_2 122
#define OBJECT_2_16 121
#define OBJECT_2_15 120
#define OBJECT_2_14 119
#define OBJECT_2_13 118
#define OBJECT_2_12 117
#define OBJECT_2_11 116
#define OBJECT_2_10 115
#define OBJECT_2_9 114
#define OBJECT_2_8 113
#define OBJECT_2_7 112
#define OBJECT_2_6 111
#define OBJECT_2_5 110
#define OBJECT_2_4 109
#define OBJECT_2_3 108
#define OBJECT_2_2 107
#define OBJECT_2_1 106
#define OBJECT_2_0 105
#define EXECUTE_CACHE_2_34 81
#define EXECUTE_CACHE_2_17 83
#define EXECUTE_CACHE_2_11 85
#define FREE_REFERENCE_2_16 88
#define FREE_REFERENCE_2_15 89
#define FREE_REFERENCE_2_14 90
#define FREE_REFERENCE_2_13 91
#define FREE_REFERENCE_2_12 92
#define FREE_REFERENCE_2_11 93
#define FREE_REFERENCE_2_10 94
#define FREE_REFERENCE_2_9 95
#define FREE_REFERENCE_2_8 96
#define FREE_REFERENCE_2_7 97
#define FREE_REFERENCE_2_6 98
#define FREE_REFERENCE_2_5 99
#define FREE_REFERENCE_2_4 100
#define FREE_REFERENCE_2_3 101
#define FREE_REFERENCE_2_2 102
#define FREE_REFERENCE_2_1 103
#define FREE_REFERENCE_2_0 104
#define FREE_REFERENCES_LABEL_2_0 80
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_definitions_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_2_4);
      goto create_bindings_21;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto define_classifier_18;

    case 5:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_2_13);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_17;

    case 8:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_2_15);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_2_16);
      goto def_16;

    case 11:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_2_19);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_2_21);
      goto label_28;

    case 15:
      current_block = (Rpc - LABEL_2_20);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_2_23);
      goto label_29;

    case 17:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_6;

    case 18:
      current_block = (Rpc - LABEL_2_25);
      goto label_30;

    case 19:
      current_block = (Rpc - LABEL_2_24);
      goto continuation_7;

    case 20:
      current_block = (Rpc - LABEL_2_27);
      goto label_31;

    case 21:
      current_block = (Rpc - LABEL_2_26);
      goto continuation_8;

    case 22:
      current_block = (Rpc - LABEL_2_29);
      goto label_32;

    case 23:
      current_block = (Rpc - LABEL_2_28);
      goto continuation_9;

    case 24:
      current_block = (Rpc - LABEL_2_31);
      goto label_33;

    case 25:
      current_block = (Rpc - LABEL_2_32);
      goto define_compiler_20;

    case 26:
      current_block = (Rpc - LABEL_2_30);
      goto continuation_10;

    case 27:
      current_block = (Rpc - LABEL_2_36);
      goto label_34;

    case 28:
      current_block = (Rpc - LABEL_2_33);
      goto continuation_19;

    case 29:
      current_block = (Rpc - LABEL_2_35);
      goto continuation_11;

    case 30:
      current_block = (Rpc - LABEL_2_38);
      goto label_35;

    case 31:
      current_block = (Rpc - LABEL_2_37);
      goto continuation_12;

    case 32:
      current_block = (Rpc - LABEL_2_40);
      goto label_36;

    case 33:
      current_block = (Rpc - LABEL_2_39);
      goto continuation_13;

    case 34:
      current_block = (Rpc - LABEL_2_42);
      goto label_37;

    case 35:
      current_block = (Rpc - LABEL_2_41);
      goto continuation_14;

    case 36:
      current_block = (Rpc - LABEL_2_44);
      goto label_38;

    case 37:
      current_block = (Rpc - LABEL_2_43);
      goto continuation_15;

    case 38:
      current_block = (Rpc - LABEL_2_45);
      goto label_39;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (create_bindings_41)
DEFLABEL (create_bindings_21)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_78;
  Wrd11 = Wrd15;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto define_classifier_18;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_76;
  Wrd11 = Wrd15;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto define_classifier_18;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_74;
  Wrd11 = Wrd15;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto define_classifier_18;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_72;
  Wrd11 = Wrd15;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto define_classifier_18;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_70;
  Wrd11 = Wrd15;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto define_classifier_18;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_68;
  Wrd11 = Wrd15;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto define_classifier_18;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_66;
  Wrd11 = Wrd15;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto define_classifier_18;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_7]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_64;
  Wrd11 = Wrd15;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_7]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto define_classifier_18;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_8]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_62;
  Wrd11 = Wrd15;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto define_classifier_18;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_9]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_60;
  Wrd11 = Wrd15;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_9]);
  (* (--Rsp)) = (Wrd17.Obj);
  Rdl = (& (Rsp [3]));
  goto define_compiler_20;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_10]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_58;
  Wrd11 = Wrd15;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_10]);
  (* (--Rsp)) = (Wrd17.Obj);
  Rdl = (& (Rsp [3]));
  goto define_compiler_20;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_11]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_56;
  Wrd11 = Wrd15;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_11]);
  (* (--Rsp)) = (Wrd17.Obj);
  Rdl = (& (Rsp [3]));
  goto define_compiler_20;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_12]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_54;
  Wrd11 = Wrd15;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_12]);
  (* (--Rsp)) = (Wrd17.Obj);
  Rdl = (& (Rsp [3]));
  goto define_compiler_20;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_2_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_13]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_52;
  Wrd11 = Wrd15;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_13]);
  (* (--Rsp)) = (Wrd17.Obj);
  Rdl = (& (Rsp [3]));
  goto define_compiler_20;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_14]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_50;
  Wrd11 = Wrd15;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_14]);
  (* (--Rsp)) = (Wrd17.Obj);
  Rdl = (& (Rsp [3]));
  goto define_compiler_20;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_15]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_48;
  Wrd11 = Wrd15;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_15]);
  (* (--Rsp)) = (Wrd17.Obj);
  Rdl = (& (Rsp [3]));
  goto define_compiler_20;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_2_43);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_16]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_46;
  Wrd7 = Wrd11;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_2_16]);
  (* (--Rsp)) = (Wrd13.Obj);
  Rdl = (& (Rsp [4]));
  goto define_compiler_20;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_45])), (Wrd8.pObj));

DEFLABEL (label_39)
  (Wrd7.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_44])), (Wrd12.pObj));

DEFLABEL (label_38)
  (Wrd11.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_42])), (Wrd12.pObj));

DEFLABEL (label_37)
  (Wrd11.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_40])), (Wrd12.pObj));

DEFLABEL (label_36)
  (Wrd11.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_38])), (Wrd12.pObj));

DEFLABEL (label_35)
  (Wrd11.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_36])), (Wrd12.pObj));

DEFLABEL (label_34)
  (Wrd11.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_31])), (Wrd12.pObj));

DEFLABEL (label_33)
  (Wrd11.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_29])), (Wrd12.pObj));

DEFLABEL (label_32)
  (Wrd11.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_27])), (Wrd12.pObj));

DEFLABEL (label_31)
  (Wrd11.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_25])), (Wrd12.pObj));

DEFLABEL (label_30)
  (Wrd11.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_23])), (Wrd12.pObj));

DEFLABEL (label_29)
  (Wrd11.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_21])), (Wrd12.pObj));

DEFLABEL (label_28)
  (Wrd11.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_19])), (Wrd12.pObj));

DEFLABEL (label_27)
  (Wrd11.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_15])), (Wrd12.pObj));

DEFLABEL (label_26)
  (Wrd11.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_13])), (Wrd12.pObj));

DEFLABEL (label_25)
  (Wrd11.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_8])), (Wrd12.pObj));

DEFLABEL (label_24)
  (Wrd11.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_6])), (Wrd12.pObj));

DEFLABEL (label_23)
  (Wrd11.Obj) = Rvl;
  goto label_77;

DEFLABEL (define_classifier_42)
DEFLABEL (define_classifier_18)
  INTERRUPT_CHECK (26, LABEL_2_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (Rsp [1]) = Rvl;
  Rdl = (& (Rsp [3]));
  goto def_16;

DEFLABEL (def_43)
DEFLABEL (def_16)
  DLINK_INTERRUPT_CHECK (25, LABEL_2_16);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (define_compiler_44)
DEFLABEL (define_compiler_20)
  DLINK_INTERRUPT_CHECK (25, LABEL_2_32);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_33]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_34]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_33);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [1]) = Rvl;
  goto def_16;

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
syntax_definitions_so_d451bc6d61e1b1f2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 2)
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

static const struct liarc_code_S arr_decl_syntax_definitions_so_d451bc6d61e1b1f2 [2] =
  {
    { "syntax_definitions_so_code_1", 2, syntax_definitions_so_code_1 },
    { "syntax_definitions_so_code_2", 39, syntax_definitions_so_code_2 }
  };

int
decl_syntax_definitions_so_d451bc6d61e1b1f2 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_syntax_definitions_so_d451bc6d61e1b1f2);
  return (0);
}

DECLARE_COMPILED_CODE ("syntax-definitions.so", 3, decl_syntax_definitions_so_d451bc6d61e1b1f2, syntax_definitions_so_d451bc6d61e1b1f2)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_syntax_definitions_so_data_d451bc6d61e1b1f2 [1265] =
  "\x80\x01\x05\xae\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\x28"
  "\x0d\xb9\x23\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb8\x99\xbb\x88\xb3\xb0"
  "\x2a\xb2\x2a\x99\xb1\x0d\x99\x28\x0d\x26\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x61\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73\x79"
  "\x6e\x74\x61\x78\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x73"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x03\x18\x2d\x3e\x73\x79"
  "\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x03\x10\x63\x72\x65\x61\x74\x65\x2d\x62\x69\x6e\x64"
  "\x69\x6e\x67\x73\x03\x05\x06\x81\x81\x02\x04\x04\x82\x02\x05\x0d"
  "\x02\x10\x74\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x05\x73\x65\x74\x21\x06\x71\x75\x6f\x74\x65\x03\x6f\x72\x0d"
  "\x6e\x61\x6d\x65\x64\x2d\x6c\x61\x6d\x62\x64\x61\x07\x6c\x61\x6d"
  "\x62\x64\x61\x03\x69\x66\x06\x64\x65\x6c\x61\x79\x15\x73\x63\x2d"
  "\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65"
  "\x72\x16\x72\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e"
  "\x73\x66\x6f\x72\x6d\x65\x72\x1f\x6e\x6f\x6e\x2d\x68\x79\x67\x69"
  "\x65\x6e\x69\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73"
  "\x66\x6f\x72\x6d\x65\x72\x0e\x6c\x65\x74\x72\x65\x63\x2d\x73\x79"
  "\x6e\x74\x61\x78\x0b\x6c\x65\x74\x2d\x73\x79\x6e\x74\x61\x78\x15"
  "\x65\x72\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f"
  "\x72\x6d\x65\x72\x0e\x64\x65\x66\x69\x6e\x65\x2d\x73\x79\x6e\x74"
  "\x61\x78\x08\x64\x65\x63\x6c\x61\x72\x65\x06\x62\x65\x67\x69\x6e"
  "\x11\x63\x6c\x61\x73\x73\x69\x66\x69\x65\x72\x3a\x62\x65\x67\x69"
  "\x6e\x13\x63\x6c\x61\x73\x73\x69\x66\x69\x65\x72\x3a\x64\x65\x63"
  "\x6c\x61\x72\x65\x19\x63\x6c\x61\x73\x73\x69\x66\x69\x65\x72\x3a"
  "\x64\x65\x66\x69\x6e\x65\x2d\x73\x79\x6e\x74\x61\x78\x20\x63\x6c"
  "\x61\x73\x73\x69\x66\x69\x65\x72\x3a\x65\x72\x2d\x6d\x61\x63\x72"
  "\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x16\x63\x6c"
  "\x61\x73\x73\x69\x66\x69\x65\x72\x3a\x6c\x65\x74\x2d\x73\x79\x6e"
  "\x74\x61\x78\x19\x63\x6c\x61\x73\x73\x69\x66\x69\x65\x72\x3a\x6c"
  "\x65\x74\x72\x65\x63\x2d\x73\x79\x6e\x74\x61\x78\x2a\x63\x6c\x61"
  "\x73\x73\x69\x66\x69\x65\x72\x3a\x6e\x6f\x6e\x2d\x68\x79\x67\x69"
  "\x65\x6e\x69\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73"
  "\x66\x6f\x72\x6d\x65\x72\x21\x63\x6c\x61\x73\x73\x69\x66\x69\x65"
  "\x72\x3a\x72\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e"
  "\x73\x66\x6f\x72\x6d\x65\x72\x20\x63\x6c\x61\x73\x73\x69\x66\x69"
  "\x65\x72\x3a\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e"
  "\x73\x66\x6f\x72\x6d\x65\x72\x0f\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x3a\x64\x65\x6c\x61\x79\x0c\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a"
  "\x69\x66\x10\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6c\x61\x6d\x62"
  "\x64\x61\x16\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6e\x61\x6d\x65"
  "\x64\x2d\x6c\x61\x6d\x62\x64\x61\x0c\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x3a\x6f\x72\x0f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x71\x75"
  "\x6f\x74\x65\x0e\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x73\x65\x74"
  "\x21\x19\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x74\x68\x65\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x12\x03\x15\x6d\x61\x6b"
  "\x65\x2d\x63\x6c\x61\x73\x73\x69\x66\x69\x65\x72\x2d\x69\x74\x65"
  "\x6d\x05\x1d\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x64\x65\x66\x69\x6e\x65\x03"
  "\x13\x6d\x61\x6b\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69"
  "\x74\x65\x6d\x04\x2c\x50\x81\x85\x02\x2b\x4e\x81\x83\x02\x2a\x4c"
  "\x81\x87\x02\x29\x4a\x81\x83\x02\x28\x48\x81\x87\x02\x27\x46\x81"
  "\x83\x02\x26\x44\x81\x87\x02\x25\x42\x81\x83\x02\x24\x40\x81\x87"
  "\x02\x23\x3e\x81\x83\x02\x22\x3c\xfd\xff\x03\x21\x3a\x81\x87\x02"
  "\x20\x38\x81\x83\x02\x1f\x36\xff\xff\x03\x1e\x34\x81\x87\x02\x1d"
  "\x32\x81\x83\x02\x1c\x30\x81\x87\x02\x1b\x2e\x81\x83\x02\x1a\x2c"
  "\x81\x87\x02\x19\x2a\x81\x83\x02\x18\x28\x81\x87\x02\x17\x26\x81"
  "\x83\x02\x16\x24\x81\x87\x02\x15\x22\x81\x83\x02\x14\x20\x81\x87"
  "\x02\x13\x1e\x81\x83\x02\x12\x1c\x81\x87\x02\x11\x1a\x81\x83\x02"
  "\x10\x18\xff\xff\x03\x0f\x16\x81\x87\x02\x0e\x14\x81\x83\x02\x0d"
  "\x12\x81\x87\x02\x0c\x10\x81\x87\x02\x0b\x0e\x81\x83\x02\x0a\x0c"
  "\x81\x87\x02\x09\x0a\x81\x87\x02\x08\x08\x81\x83\x02\x07\x06\x81"
  "\x87\x02\x06\x04\x83\x04\x4f\x7c\x04\x04\x14\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02"
  "\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07"
  "\x11";

SCHEME_OBJECT *
syntax_definitions_so_data_d451bc6d61e1b1f2 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_syntax_definitions_so_data_d451bc6d61e1b1f2 [0]))), (sizeof (prog_syntax_definitions_so_data_d451bc6d61e1b1f2)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("syntax-definitions.so", syntax_definitions_so_data_d451bc6d61e1b1f2)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("syntax-definitions.so", "50f0988ed2612021")
