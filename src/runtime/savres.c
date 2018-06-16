/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:52-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_8 7
#define LABEL_1_6 9
#define LABEL_1_9 11
#define LABEL_1_12 13
#define LABEL_1_14 15
#define LABEL_1_15 17
#define TAG_1_16 7
#define LABEL_1_18 19
#define TAG_1_19 8
#define LABEL_1_21 21
#define LABEL_1_22 23
#define TAG_1_23 10
#define LABEL_1_25 25
#define LABEL_1_27 27
#define LABEL_1_28 29
#define TAG_1_29 13
#define LABEL_1_33 31
#define LABEL_1_30 33
#define LABEL_1_31 35
#define TAG_1_32 16
#define LABEL_1_41 37
#define LABEL_1_34 39
#define LABEL_1_37 41
#define LABEL_1_44 43
#define LABEL_1_35 45
#define TAG_1_36 21
#define LABEL_1_46 47
#define LABEL_1_47 49
#define LABEL_1_48 51
#define LABEL_1_39 53
#define TAG_1_40 25
#define LABEL_1_42 55
#define LABEL_1_51 57
#define LABEL_1_55 59
#define LABEL_1_49 61
#define LABEL_1_54 63
#define LABEL_1_52 65
#define LABEL_1_58 67
#define LABEL_1_60 69
#define LABEL_1_56 71
#define LABEL_1_63 73
#define LABEL_1_59 75
#define LABEL_1_61 77
#define LABEL_1_68 79
#define TAG_1_69 38
#define LABEL_1_71 81
#define LABEL_1_64 83
#define LABEL_1_65 85
#define TAG_1_66 41
#define ENVIRONMENT_LABEL_1_3 145
#define DEBUGGING_LABEL_1_2 144
#define OBJECT_1_10 143
#define OBJECT_1_9 142
#define OBJECT_1_8 141
#define OBJECT_1_7 140
#define OBJECT_1_6 139
#define OBJECT_1_5 138
#define OBJECT_1_4 137
#define OBJECT_1_3 136
#define OBJECT_1_2 135
#define OBJECT_1_1 134
#define OBJECT_1_0 133
#define EXECUTE_CACHE_1_72 87
#define EXECUTE_CACHE_1_70 89
#define EXECUTE_CACHE_1_67 91
#define EXECUTE_CACHE_1_62 93
#define EXECUTE_CACHE_1_57 95
#define EXECUTE_CACHE_1_53 97
#define EXECUTE_CACHE_1_50 99
#define EXECUTE_CACHE_1_45 101
#define EXECUTE_CACHE_1_43 103
#define EXECUTE_CACHE_1_38 105
#define EXECUTE_CACHE_1_26 107
#define EXECUTE_CACHE_1_24 109
#define EXECUTE_CACHE_1_20 111
#define EXECUTE_CACHE_1_17 113
#define EXECUTE_CACHE_1_13 115
#define EXECUTE_CACHE_1_11 117
#define EXECUTE_CACHE_1_10 119
#define EXECUTE_CACHE_1_7 121
#define FREE_REFERENCE_1_4 124
#define FREE_REFERENCE_1_3 125
#define FREE_REFERENCE_1_2 126
#define FREE_REFERENCE_1_1 127
#define FREE_REFERENCE_1_0 128
#define FREE_ASSIGNMENT_1_2 130
#define FREE_ASSIGNMENT_1_1 131
#define FREE_ASSIGNMENT_1_0 132
#define FREE_REFERENCES_LABEL_1_0 86
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
savres_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd38;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_1_4);
      goto disk_save_47;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto label_49;

    case 3:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_45;

    case 7:
      current_block = (Rpc - LABEL_1_15);
      goto lambda_62;

    case 8:
      current_block = (Rpc - LABEL_1_18);
      goto lambda_63;

    case 9:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_23;

    case 10:
      current_block = (Rpc - LABEL_1_22);
      goto lambda_64;

    case 11:
      current_block = (Rpc - LABEL_1_25);
      goto continuation_24;

    case 12:
      current_block = (Rpc - LABEL_1_27);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_1_28);
      goto lambda_65;

    case 14:
      current_block = (Rpc - LABEL_1_33);
      goto label_50;

    case 15:
      current_block = (Rpc - LABEL_1_30);
      goto continuation_20;

    case 16:
      current_block = (Rpc - LABEL_1_31);
      goto lambda_66;

    case 17:
      current_block = (Rpc - LABEL_1_41);
      goto label_51;

    case 18:
      current_block = (Rpc - LABEL_1_34);
      goto continuation_25;

    case 19:
      current_block = (Rpc - LABEL_1_37);
      goto lambda_26;

    case 20:
      current_block = (Rpc - LABEL_1_44);
      goto label_52;

    case 21:
      current_block = (Rpc - LABEL_1_35);
      goto swapB_67;

    case 22:
      current_block = (Rpc - LABEL_1_46);
      goto label_53;

    case 23:
      current_block = (Rpc - LABEL_1_47);
      goto label_54;

    case 24:
      current_block = (Rpc - LABEL_1_48);
      goto label_55;

    case 25:
      current_block = (Rpc - LABEL_1_39);
      goto lambda_68;

    case 26:
      current_block = (Rpc - LABEL_1_42);
      goto continuation_35;

    case 27:
      current_block = (Rpc - LABEL_1_51);
      goto label_57;

    case 28:
      current_block = (Rpc - LABEL_1_55);
      goto label_56;

    case 29:
      current_block = (Rpc - LABEL_1_49);
      goto continuation_7;

    case 30:
      current_block = (Rpc - LABEL_1_54);
      goto continuation_37;

    case 31:
      current_block = (Rpc - LABEL_1_52);
      goto lambda_41;

    case 32:
      current_block = (Rpc - LABEL_1_58);
      goto do_loop_14;

    case 33:
      current_block = (Rpc - LABEL_1_60);
      goto continuation_40;

    case 34:
      current_block = (Rpc - LABEL_1_56);
      goto continuation_38;

    case 35:
      current_block = (Rpc - LABEL_1_63);
      goto label_58;

    case 36:
      current_block = (Rpc - LABEL_1_59);
      goto continuation_10;

    case 37:
      current_block = (Rpc - LABEL_1_61);
      goto continuation_39;

    case 38:
      current_block = (Rpc - LABEL_1_68);
      goto lambda_73;

    case 39:
      current_block = (Rpc - LABEL_1_71);
      goto label_59;

    case 40:
      current_block = (Rpc - LABEL_1_64);
      goto continuation_12;

    case 41:
      current_block = (Rpc - LABEL_1_65);
      goto lambda_72;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (disk_save_61)
DEFLABEL (disk_save_47)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (current_block [OBJECT_1_0]))
    goto label_75;
  Wrd7 = Wrd5;

DEFLABEL (label_74)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_15])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_75)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_77;
  Wrd11 = Wrd15;

DEFLABEL (label_76)
  Wrd7 = Wrd11;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd12.pObj));

DEFLABEL (label_49)
  (Wrd11.Obj) = Rvl;
  goto label_76;

DEFLABEL (lambda_62)
  CLOSURE_HEADER (LABEL_1_15);

DEFLABEL (lambda_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_18])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd11.Obj) = ((Wrd18.pObj) [4]);
  ((Wrd16.pObj) [4]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_1_18);

DEFLABEL (lambda_43)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_22])));
  Rhp += 4;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd20 = Wrd9;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd22.pObj) [3]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd22.pObj) [4]);
  ((Wrd20.pObj) [4]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [5]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_1_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_26]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_1_25);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_28])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = ((Wrd14.pObj) [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_1_22);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 0);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_31])));
  Rhp += 4;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd22 = Wrd9;
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
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_1_30);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 1);

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_1_28);

DEFLABEL (lambda_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Wrd15.Obj) = ((Wrd5.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_80;

DEFLABEL (label_79)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_78)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_1_3]);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-1]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_35])));
  Rhp += 1;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  ((Wrd33.pObj) [2]) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (Rsp [2]) = (Wrd34.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_37]))));
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_38]));

DEFLABEL (label_80)
  if ((Wrd15.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_79;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_33])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_50)
  goto label_78;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_1_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_43]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_1_42);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 30)
    goto label_84;
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_81;
  Rvl = (current_block [OBJECT_1_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_54]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_83;
  Wrd16 = Wrd20;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_45]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_1_54);
  Rvl = (current_block [OBJECT_1_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_55])), (Wrd17.pObj));

DEFLABEL (label_56)
  (Wrd16.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_84)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd34.Obj) = ((Wrd24.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_87;

DEFLABEL (label_86)
  ((Wrd24.pObj) [0]) = (Wrd7.Obj);

DEFLABEL (label_85)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_52]))));
  (Rsp [0]) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_53]));

DEFLABEL (label_87)
  if ((Wrd34.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_86;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_51])), (Wrd24.pObj), (Wrd7.Obj));

DEFLABEL (label_57)
  goto label_85;

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_1_31);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_39])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd22 = Wrd7;
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd24.pObj) [3]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd24.pObj) [4]);
  ((Wrd22.pObj) [4]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd24.pObj) [5]);
  ((Wrd22.pObj) [5]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [6]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_89;
  Wrd27 = Wrd31;

DEFLABEL (label_88)
  (Rsp [0]) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_41])), (Wrd28.pObj));

DEFLABEL (label_51)
  (Wrd27.Obj) = Rvl;
  goto label_88;

DEFLABEL (lambda_69)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_1_37);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_91;
  Wrd5 = Wrd9;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_45]));

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_44])), (Wrd6.pObj));

DEFLABEL (label_52)
  (Wrd5.Obj) = Rvl;
  goto label_90;

DEFLABEL (swapB_67)
  CLOSURE_HEADER (LABEL_1_35);

DEFLABEL (swapB_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_100;

DEFLABEL (label_99)
  Wrd5 = Wrd9;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_97;

DEFLABEL (label_96)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_95)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_94;

DEFLABEL (label_93)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_92)
  Rvl = (current_block [OBJECT_1_6]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_94)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_93;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_48])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_55)
  goto label_92;

DEFLABEL (label_97)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_96;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_47])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_54)
  goto label_95;

DEFLABEL (label_100)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_99;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_46])), (Wrd6.pObj));

DEFLABEL (label_53)
  (Wrd5.Obj) = Rvl;
  goto label_98;

DEFLABEL (lambda_68)
  CLOSURE_HEADER (LABEL_1_39);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_50]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_49);
  goto do_loop_14;

DEFLABEL (lambda_70)
DEFLABEL (lambda_41)
  INTERRUPT_CHECK (26, LABEL_1_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_57]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_1_56);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_103;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_60]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_61]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_62]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_1_61);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_70]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_1_60);

DEFLABEL (label_103)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_102;
  Wrd8 = Wrd12;

DEFLABEL (label_101)
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_45]));

DEFLABEL (label_102)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_63])), (Wrd9.pObj));

DEFLABEL (label_58)
  (Wrd8.Obj) = Rvl;
  goto label_101;

DEFLABEL (do_loop_71)
DEFLABEL (do_loop_14)
  INTERRUPT_CHECK (26, LABEL_1_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 2);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_59);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_104;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_69);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_68])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd15 = Wrd10;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd17.pObj) [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd19.Obj) = ((Wrd17.pObj) [5]);
  (Rsp [0]) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_104)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_64]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_66);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_65])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd27 = Wrd26;
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [4]);
  ((Wrd27.pObj) [2]) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_1_8]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_1_9]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_67]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_64);
  Rsp = (& (Rsp [1]));
  goto do_loop_14;

DEFLABEL (lambda_73)
  CLOSURE_HEADER (LABEL_1_68);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Wrd15.Obj) = ((Wrd5.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_110;

DEFLABEL (label_109)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_108)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 30)
    goto label_106;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_105;

DEFLABEL (label_106)
  Rvl = (current_block [OBJECT_1_6]);

DEFLABEL (label_105)
DEFLABEL (label_107)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_110)
  if ((Wrd15.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_109;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_71])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_59)
  goto label_108;

DEFLABEL (lambda_72)
  CLOSURE_HEADER (LABEL_1_65);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_1_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_72]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_11 7
#define LABEL_2_13 9
#define LABEL_2_15 11
#define LABEL_2_6 13
#define LABEL_2_8 15
#define LABEL_2_19 17
#define LABEL_2_7 19
#define LABEL_2_10 21
#define LABEL_2_22 23
#define LABEL_2_16 25
#define LABEL_2_23 27
#define LABEL_2_24 29
#define LABEL_2_26 31
#define ENVIRONMENT_LABEL_2_3 59
#define DEBUGGING_LABEL_2_2 58
#define OBJECT_2_4 57
#define OBJECT_2_3 56
#define OBJECT_2_2 55
#define OBJECT_2_1 54
#define OBJECT_2_0 53
#define EXECUTE_CACHE_2_27 33
#define EXECUTE_CACHE_2_25 35
#define EXECUTE_CACHE_2_21 37
#define EXECUTE_CACHE_2_20 39
#define EXECUTE_CACHE_2_18 41
#define EXECUTE_CACHE_2_17 43
#define EXECUTE_CACHE_2_14 45
#define EXECUTE_CACHE_2_12 47
#define EXECUTE_CACHE_2_9 49
#define FREE_REFERENCE_2_0 52
#define FREE_REFERENCES_LABEL_2_0 32
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
savres_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_2_4);
      goto disk_restore_22;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_19;

    case 2:
      current_block = (Rpc - LABEL_2_11);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_2_19);
      goto continuation_17;

    case 8:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_20;

    case 10:
      current_block = (Rpc - LABEL_2_22);
      goto lambda_6;

    case 11:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_2_24);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_2_26);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (disk_restore_26)
DEFLABEL (disk_restore_22)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  if ((Wrd11.Obj) == (current_block [OBJECT_2_0]))
    goto label_33;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  goto lambda_6;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (label_28)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_24);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_6;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (label_29)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_31;
  Wrd9 = Wrd13;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_2_10);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_11])), (Wrd10.pObj));

DEFLABEL (label_24)
  (Wrd9.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 0);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;

DEFLABEL (label_34)
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_6);
  goto label_32;

DEFLABEL (label_35)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_19);
  goto label_34;

DEFLABEL (lambda_27)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_2_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_23);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  Rvl = (Rsp [0]);
  goto label_36;

DEFLABEL (label_37)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_36)
DEFLABEL (label_38)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_8 7
#define LABEL_3_10 9
#define LABEL_3_12 11
#define LABEL_3_14 13
#define LABEL_3_16 15
#define LABEL_3_15 17
#define LABEL_3_17 19
#define LABEL_3_22 21
#define LABEL_3_21 23
#define LABEL_3_18 25
#define LABEL_3_19 27
#define LABEL_3_26 29
#define LABEL_3_24 31
#define LABEL_3_30 33
#define LABEL_3_28 35
#define LABEL_3_29 37
#define LABEL_3_32 39
#define LABEL_3_35 41
#define LABEL_3_33 43
#define LABEL_3_34 45
#define ENVIRONMENT_LABEL_3_3 83
#define DEBUGGING_LABEL_3_2 82
#define OBJECT_3_8 81
#define OBJECT_3_7 80
#define OBJECT_3_6 79
#define OBJECT_3_5 78
#define OBJECT_3_4 77
#define OBJECT_3_3 76
#define OBJECT_3_2 75
#define OBJECT_3_1 74
#define OBJECT_3_0 73
#define EXECUTE_CACHE_3_36 47
#define EXECUTE_CACHE_3_31 49
#define EXECUTE_CACHE_3_27 51
#define EXECUTE_CACHE_3_25 53
#define EXECUTE_CACHE_3_23 55
#define EXECUTE_CACHE_3_20 57
#define EXECUTE_CACHE_3_13 59
#define EXECUTE_CACHE_3_11 61
#define EXECUTE_CACHE_3_9 63
#define EXECUTE_CACHE_3_7 65
#define EXECUTE_CACHE_3_6 67
#define FREE_REFERENCE_3_2 70
#define FREE_REFERENCE_3_1 71
#define FREE_REFERENCE_3_0 72
#define FREE_REFERENCES_LABEL_3_0 46
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
savres_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_3_4);
      goto identify_world_18;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_3_14);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_3_17);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_3_22);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_3_21);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_3_19);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_3_26);
      goto label_22;

    case 14:
      current_block = (Rpc - LABEL_3_24);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_3_30);
      goto label_23;

    case 16:
      current_block = (Rpc - LABEL_3_28);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_3_29);
      goto continuation_9;

    case 18:
      current_block = (Rpc - LABEL_3_32);
      goto continuation_11;

    case 19:
      current_block = (Rpc - LABEL_3_35);
      goto label_24;

    case 20:
      current_block = (Rpc - LABEL_3_33);
      goto continuation_13;

    case 21:
      current_block = (Rpc - LABEL_3_34);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (identify_world_26)
DEFLABEL (identify_world_18)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_3_0]))
    goto label_39;
  (Wrd10.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_38;
  Wrd5 = Wrd9;

DEFLABEL (label_37)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_30;

DEFLABEL (label_29)
  (Wrd22.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_20]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_3_19);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_28;
  Wrd5 = Wrd9;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_27]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_3_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3_7]);
  (Rsp [6]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_25]));

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_26])), (Wrd6.pObj));

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_36;
  Wrd16 = Wrd20;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_29]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_34;
  Wrd12 = Wrd16;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_31]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_32;
  Wrd12 = Wrd16;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_36]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_3_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_16);
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_35])), (Wrd13.pObj));

DEFLABEL (label_24)
  (Wrd12.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_30])), (Wrd13.pObj));

DEFLABEL (label_23)
  (Wrd12.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_22])), (Wrd17.pObj));

DEFLABEL (label_21)
  (Wrd16.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_17])), (Wrd6.pObj));

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

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
savres_so_f0b59b1e0c578a48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 3)
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

static const struct liarc_code_S arr_decl_savres_so_f0b59b1e0c578a48 [3] =
  {
    { "savres_so_code_1", 42, savres_so_code_1 },
    { "savres_so_code_2", 15, savres_so_code_2 },
    { "savres_so_code_3", 22, savres_so_code_3 }
  };

int
decl_savres_so_f0b59b1e0c578a48 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_savres_so_f0b59b1e0c578a48);
  return (0);
}

DECLARE_COMPILED_CODE ("savres.so", 3, decl_savres_so_f0b59b1e0c578a48, savres_so_f0b59b1e0c578a48)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_savres_so_data_f0b59b1e0c578a48 [1991] =
  "\x95\x01\x0b\xdb\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0d\x0c"
  "\xc2\x1d\xc2\xc1\x07\xc1\xc0\x1d\x0d\xb9\x0d\xba\x0d\xbb\x25\xb3"
  "\x0d\x0d\xb2\x0d\x24\x28\x0d\xbc\x28\x0d\x28\x0d\xbd\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xbe\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xbf\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x0c\xc1\x0c\xc0\x1d"
  "\x0d\x24\x28\x0d\x28\xb6\x28\x0d\x28\x0d\x28\xb5\x28\x1b\x28\xb4"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x0c\x0c\x0c\x81\x0c"
  "\x0c\x07\xb7\x1d\xb1\xb3\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x9a"
  "\xbd\x88\xb5\xb6\x2a\x1b\x2a\x1b\x2a\x06\x06\x0c\x9d\xb7\x0d\x0d"
  "\xb2\xb1\xb3\x9d\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73\x61\x76\x72\x65"
  "\x73\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x12\x44\x69\x73\x6b"
  "\x20\x73\x61\x76\x65\x20\x66\x61\x69\x6c\x65\x64\x3a\x06\x72\x65"
  "\x74\x72\x79\x0b\x54\x72\x79\x20\x61\x67\x61\x69\x6e\x2e\x0a\x64"
  "\x75\x6d\x70\x2d\x62\x61\x6e\x64\x02\x14\x77\x69\x74\x68\x2d\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x1a\x73\x65"
  "\x74\x2d\x66\x69\x78\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d"
  "\x76\x65\x63\x74\x6f\x72\x21\x1f\x63\x61\x6c\x6c\x2d\x77\x69\x74"
  "\x68\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69\x6e"
  "\x75\x61\x74\x69\x6f\x6e\x19\x67\x65\x74\x2d\x66\x69\x78\x65\x64"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d\x76\x65\x63\x74\x6f\x72\x08"
  "\x11\x74\x69\x6d\x65\x2d\x77\x6f\x72\x6c\x64\x2d\x73\x61\x76\x65"
  "\x64\x19\x2a\x77\x69\x74\x68\x69\x6e\x2d\x72\x65\x73\x74\x6f\x72"
  "\x65\x2d\x77\x69\x6e\x64\x6f\x77\x3f\x2a\x09\x77\x6f\x72\x6c\x64"
  "\x2d\x69\x64\x04\x15\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d"
  "\x61\x73\x6b\x2f\x67\x63\x2d\x6f\x6b\x14\x65\x76\x65\x6e\x74\x3a"
  "\x61\x66\x74\x65\x72\x2d\x72\x65\x73\x74\x6f\x72\x65\x14\x65\x76"
  "\x65\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d\x72\x65\x73\x74\x61\x72"
  "\x74\x06\x03\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x73\x02\x13\x6c\x6f\x63\x61\x6c\x2d\x64\x65\x63\x6f\x64"
  "\x65\x64\x2d\x74\x69\x6d\x65\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73"
  "\x74\x72\x69\x6e\x67\x02\x09\x67\x63\x2d\x63\x6c\x65\x61\x6e\x03"
  "\x13\x77\x69\x74\x68\x6f\x75\x74\x2d\x69\x6e\x74\x65\x72\x72\x75"
  "\x70\x74\x73\x03\x1f\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x63"
  "\x75\x72\x72\x65\x6e\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x03\x1e\x77\x69\x74\x68\x2d\x61\x62\x73\x6f\x6c\x75"
  "\x74\x65\x6c\x79\x2d\x6e\x6f\x2d\x69\x6e\x74\x65\x72\x72\x75\x70"
  "\x74\x73\x02\x17\x72\x65\x61\x64\x2d\x6d\x69\x63\x72\x6f\x63\x6f"
  "\x64\x65\x2d\x74\x61\x62\x6c\x65\x73\x21\x05\x13\x73\x68\x61\x6c"
  "\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x02\x13"
  "\x73\x74\x61\x72\x74\x2d\x74\x68\x72\x65\x61\x64\x2d\x74\x69\x6d"
  "\x65\x72\x03\x1a\x65\x76\x65\x6e\x74\x2d\x64\x69\x73\x74\x72\x69"
  "\x62\x75\x74\x6f\x72\x2f\x69\x6e\x76\x6f\x6b\x65\x21\x02\x08\x67"
  "\x63\x2d\x66\x6c\x69\x70\x03\x11\x61\x62\x6f\x72\x74\x2d\x3e\x74"
  "\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x03\x11\x63\x6d\x64\x6c\x2f\x62"
  "\x61\x74\x63\x68\x2d\x6d\x6f\x64\x65\x3f\x03\x0a\x63\x6d\x64\x6c"
  "\x2f\x70\x6f\x72\x74\x05\x14\x77\x69\x74\x68\x2d\x73\x69\x6d\x70"
  "\x6c\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x03\x0f\x69\x64\x65\x6e"
  "\x74\x69\x66\x79\x2d\x77\x6f\x72\x6c\x64\x04\x06\x65\x72\x72\x6f"
  "\x72\x09\x13\x2d\x56\x81\x83\x02\x2c\x54\x81\x87\x02\x2b\x52\x81"
  "\x83\x02\x2a\x50\x81\x83\x02\x29\x4e\x81\x85\x02\x28\x4c\x81\x85"
  "\x02\x27\x4a\x81\x83\x02\x26\x48\x81\x83\x02\x25\x46\x81\x83\x02"
  "\x24\x44\x81\x85\x02\x23\x42\x83\x04\x22\x40\x81\x83\x02\x21\x3e"
  "\x81\x85\x02\x20\x3c\x81\x85\x02\x1f\x3a\x81\x83\x02\x1e\x38\x81"
  "\x83\x02\x1d\x36\x81\x85\x02\x1c\x34\x81\x83\x02\x1b\x32\x81\x85"
  "\x02\x1a\x30\x81\x83\x02\x19\x2e\x81\x83\x02\x18\x2c\x81\x81\x02"
  "\x17\x2a\x82\x02\x16\x28\x81\x83\x02\x15\x26\x81\x85\x02\x14\x24"
  "\x81\x85\x02\x13\x22\x81\x85\x02\x12\x20\x81\x83\x02\x11\x1e\x81"
  "\x83\x02\x10\x1c\x81\x83\x02\x0f\x1a\x81\x85\x02\x0e\x18\x81\x83"
  "\x02\x0d\x16\x81\x85\x02\x0c\x14\x81\x85\x02\x0b\x12\x81\x83\x02"
  "\x0a\x10\x81\x87\x02\x09\x0e\x81\x87\x02\x08\x0c\x81\x87\x02\x07"
  "\x0a\x81\x87\x02\x06\x08\x81\x87\x02\x05\x06\x81\x85\x02\x04\x04"
  "\x84\x04\x55\x92\x01\x0a\x02\x04\x63\x6f\x6d\x0a\x6c\x6f\x61\x64"
  "\x2d\x62\x61\x6e\x64\x1f\x6e\x6f\x20\x64\x65\x66\x61\x75\x6c\x74"
  "\x20\x62\x61\x6e\x64\x20\x6e\x61\x6d\x65\x20\x61\x76\x61\x69\x6c"
  "\x61\x62\x6c\x65\x11\x72\x65\x6c\x6f\x61\x64\x2d\x62\x61\x6e\x64"
  "\x2d\x6e\x61\x6d\x65\x08\x12\x65\x76\x65\x6e\x74\x3a\x62\x65\x66"
  "\x6f\x72\x65\x2d\x65\x78\x69\x74\x02\x03\x0b\x2d\x3e\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x03\x03\x18\x73\x79\x73\x74\x65\x6d\x2d\x6c"
  "\x69\x62\x72\x61\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x03"
  "\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x03\x03"
  "\x09\x03\x04\x12\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77"
  "\x2d\x74\x79\x70\x65\x03\x0d\x66\x69\x6c\x65\x2d\x65\x78\x69\x73"
  "\x74\x73\x3f\x0a\x3c\x20\x81\x83\x02\x3b\x1e\x81\x85\x02\x3a\x1c"
  "\x81\x83\x02\x39\x1a\x81\x85\x02\x38\x18\x81\x83\x02\x37\x16\x81"
  "\x83\x02\x36\x14\x81\x87\x02\x35\x12\x81\x89\x02\x34\x10\x81\x87"
  "\x02\x33\x0e\x81\x85\x02\x32\x0c\x81\x83\x02\x31\x0a\x81\x83\x02"
  "\x30\x08\x81\x85\x02\x2f\x06\x81\x83\x02\x2e\x04\x83\x02\x1f\x3c"
  "\x09\x02\x05\x20\x61\x74\x20\x01\x0b\x20\x73\x61\x76\x65\x64\x20"
  "\x6f\x6e\x20\x03\x20\x20\x05\x20\x7c\x7c\x20\x08\x24\x67\x65\x74"
  "\x2d\x73\x75\x62\x73\x79\x73\x74\x65\x6d\x2d\x69\x64\x65\x6e\x74"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x73\x74\x72\x69\x6e\x67"
  "\x04\x02\x14\x63\x75\x72\x72\x65\x6e\x74\x2d\x6f\x75\x74\x70\x75"
  "\x74\x2d\x70\x6f\x72\x74\x04\x16\x67\x75\x61\x72\x61\x6e\x74\x65"
  "\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x06\x1b\x77"
  "\x72\x69\x74\x65\x2d\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d"
  "\x63\x6f\x70\x79\x72\x69\x67\x68\x74\x03\x08\x6e\x65\x77\x6c\x69"
  "\x6e\x65\x05\x19\x77\x72\x69\x74\x65\x2d\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x6c\x69\x63\x65\x6e\x73\x65\x02\x14\x67\x65"
  "\x74\x2d\x73\x75\x62\x73\x79\x73\x74\x65\x6d\x2d\x6e\x61\x6d\x65"
  "\x73\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x09"
  "\x19\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x73\x2d\x69"
  "\x6e\x2d\x63\x6f\x6c\x75\x6d\x6e\x73\x04\x04\x6d\x61\x70\x03\x19"
  "\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x2f\x64\x61\x74"
  "\x65\x2d\x73\x74\x72\x69\x6e\x67\x03\x19\x64\x65\x63\x6f\x64\x65"
  "\x64\x2d\x74\x69\x6d\x65\x2f\x74\x69\x6d\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\x0c\x52\x2e\x81\x87\x02\x51\x2c\x81\x83\x02\x50\x2a\x81"
  "\x89\x02\x4f\x28\x81\x83\x02\x4e\x26\x81\x87\x02\x4d\x24\x81\x83"
  "\x02\x4c\x22\x81\x89\x02\x4b\x20\x81\x83\x02\x4a\x1e\x81\x91\x02"
  "\x49\x1c\x81\x8f\x02\x48\x1a\x81\x8d\x02\x47\x18\x81\x83\x02\x46"
  "\x16\x81\x87\x02\x45\x14\x81\x83\x02\x44\x12\x81\x83\x02\x43\x10"
  "\x81\x83\x02\x42\x0e\x81\x83\x02\x41\x0c\x81\x83\x02\x40\x0a\x81"
  "\x83\x02\x3f\x08\x81\x83\x02\x3e\x06\x81\x83\x02\x3d\x04\x83\x02"
  "\x2d\x54\x04\x09\x04\x0a\x04\x06\x49\x6d\x61\x67\x65\x0d\x64\x69"
  "\x73\x6b\x2d\x72\x65\x73\x74\x6f\x72\x65\x0a\x64\x69\x73\x6b\x2d"
  "\x73\x61\x76\x65\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02"
  "\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
savres_so_data_f0b59b1e0c578a48 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_savres_so_data_f0b59b1e0c578a48 [0]))), (sizeof (prog_savres_so_data_f0b59b1e0c578a48)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("savres.so", savres_so_data_f0b59b1e0c578a48)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("savres.so", "f3448ca30da9edd0")
