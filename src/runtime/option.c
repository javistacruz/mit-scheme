/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:43-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_12 5
#define LABEL_1_11 7
#define LABEL_1_14 9
#define LABEL_1_15 11
#define LABEL_1_9 13
#define TAG_1_10 5
#define LABEL_1_7 15
#define TAG_1_8 6
#define LABEL_1_19 17
#define LABEL_1_5 19
#define TAG_1_6 8
#define LABEL_1_16 21
#define LABEL_1_18 23
#define LABEL_1_30 25
#define LABEL_1_31 27
#define LABEL_1_20 29
#define LABEL_1_22 31
#define LABEL_1_25 33
#define TAG_1_26 15
#define LABEL_1_23 35
#define TAG_1_24 16
#define LABEL_1_37 37
#define LABEL_1_38 39
#define LABEL_1_39 41
#define LABEL_1_40 43
#define LABEL_1_41 45
#define LABEL_1_42 47
#define LABEL_1_28 49
#define LABEL_1_32 51
#define LABEL_1_44 53
#define LABEL_1_45 55
#define LABEL_1_35 57
#define TAG_1_36 27
#define LABEL_1_33 59
#define TAG_1_34 28
#define LABEL_1_50 61
#define LABEL_1_51 63
#define LABEL_1_52 65
#define LABEL_1_46 67
#define TAG_1_47 32
#define LABEL_1_48 69
#define LABEL_1_53 71
#define ENVIRONMENT_LABEL_1_3 109
#define DEBUGGING_LABEL_1_2 108
#define OBJECT_1_6 107
#define OBJECT_1_5 106
#define OBJECT_1_4 105
#define OBJECT_1_3 104
#define OBJECT_1_2 103
#define OBJECT_1_1 102
#define OBJECT_1_0 101
#define EXECUTE_CACHE_1_55 73
#define EXECUTE_CACHE_1_54 75
#define EXECUTE_CACHE_1_49 77
#define EXECUTE_CACHE_1_43 79
#define EXECUTE_CACHE_1_29 81
#define EXECUTE_CACHE_1_27 83
#define EXECUTE_CACHE_1_21 85
#define EXECUTE_CACHE_1_17 87
#define EXECUTE_CACHE_1_13 89
#define FREE_REFERENCE_1_3 92
#define FREE_REFERENCE_1_2 93
#define FREE_REFERENCE_1_1 94
#define FREE_REFERENCE_1_0 95
#define FREE_ASSIGNMENT_1_3 97
#define FREE_ASSIGNMENT_1_2 98
#define FREE_ASSIGNMENT_1_1 99
#define FREE_ASSIGNMENT_1_0 100
#define FREE_REFERENCES_LABEL_1_0 72
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
option_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_1_4);
      goto load_option_48;

    case 1:
      current_block = (Rpc - LABEL_1_12);
      goto label_50;

    case 2:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_1_14);
      goto label_51;

    case 4:
      current_block = (Rpc - LABEL_1_15);
      goto label_52;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto find_option_71;

    case 6:
      current_block = (Rpc - LABEL_1_7);
      goto load_entry_12;

    case 7:
      current_block = (Rpc - LABEL_1_19);
      goto label_53;

    case 8:
      current_block = (Rpc - LABEL_1_5);
      goto search_parent_42;

    case 9:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_1_30);
      goto label_54;

    case 12:
      current_block = (Rpc - LABEL_1_31);
      goto label_55;

    case 13:
      current_block = (Rpc - LABEL_1_20);
      goto lambda_8;

    case 14:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_1_25);
      goto lambda_73;

    case 16:
      current_block = (Rpc - LABEL_1_23);
      goto swapB_72;

    case 17:
      current_block = (Rpc - LABEL_1_37);
      goto label_56;

    case 18:
      current_block = (Rpc - LABEL_1_38);
      goto label_57;

    case 19:
      current_block = (Rpc - LABEL_1_39);
      goto label_58;

    case 20:
      current_block = (Rpc - LABEL_1_40);
      goto label_59;

    case 21:
      current_block = (Rpc - LABEL_1_41);
      goto label_60;

    case 22:
      current_block = (Rpc - LABEL_1_42);
      goto label_61;

    case 23:
      current_block = (Rpc - LABEL_1_28);
      goto continuation_4;

    case 24:
      current_block = (Rpc - LABEL_1_32);
      goto continuation_14;

    case 25:
      current_block = (Rpc - LABEL_1_44);
      goto label_62;

    case 26:
      current_block = (Rpc - LABEL_1_45);
      goto label_63;

    case 27:
      current_block = (Rpc - LABEL_1_35);
      goto lambda_76;

    case 28:
      current_block = (Rpc - LABEL_1_33);
      goto swapB_75;

    case 29:
      current_block = (Rpc - LABEL_1_50);
      goto label_64;

    case 30:
      current_block = (Rpc - LABEL_1_51);
      goto label_65;

    case 31:
      current_block = (Rpc - LABEL_1_52);
      goto label_66;

    case 32:
      current_block = (Rpc - LABEL_1_46);
      goto lambda_77;

    case 33:
      current_block = (Rpc - LABEL_1_48);
      goto continuation_43;

    case 34:
      current_block = (Rpc - LABEL_1_53);
      goto continuation_44;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_option_68)
DEFLABEL (load_option_48)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_1_0]))
    goto label_79;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_78;

DEFLABEL (label_79)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_78)
DEFLABEL (label_87)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd40.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd38.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_7])));
  Rhp += 1;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_9])));
  Rhp += 4;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  Wrd28 = Wrd36;
  (Wrd29.Obj) = (Rsp [4]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  ((Wrd28.pObj) [3]) = (Wrd41.Obj);
  ((Wrd28.pObj) [4]) = (Wrd39.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  ((Wrd28.pObj) [5]) = (Wrd20.Obj);
  ((Wrd38.pObj) [2]) = (Wrd29.Obj);
  ((Wrd40.pObj) [2]) = (Wrd37.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_86;
  Wrd11 = Wrd15;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  Rvl = (Rsp [4]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_84;
  Wrd11 = Wrd15;

DEFLABEL (label_83)
  (Rsp [5]) = (Wrd11.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_82;
  Wrd18 = Wrd22;

DEFLABEL (label_81)
  (Rsp [4]) = (Wrd18.Obj);
  Rsp = (& (Rsp [3]));
  goto find_option_7;

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd19.pObj));

DEFLABEL (label_52)
  (Wrd18.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_14])), (Wrd12.pObj));

DEFLABEL (label_51)
  (Wrd11.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd12.pObj));

DEFLABEL (label_50)
  (Wrd11.Obj) = Rvl;
  goto label_85;

DEFLABEL (find_option_71)
  CLOSURE_HEADER (LABEL_1_9);

DEFLABEL (find_option_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto load_entry_12;

DEFLABEL (label_88)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_28);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_89;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [3]);
  (Rsp [2]) = (Wrd8.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto search_parent_42;

DEFLABEL (label_89)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [5]);
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_90;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_90)
  (Wrd19.Obj) = (current_block [OBJECT_1_5]);
  (Rsp [2]) = (Wrd19.Obj);
  (Wrd20.Obj) = ((Wrd14.pObj) [2]);
  (Rsp [3]) = (Wrd20.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_43]));

DEFLABEL (load_entry_70)
DEFLABEL (load_entry_12)
  INTERRUPT_CHECK (26, LABEL_1_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_97;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_96)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_95;
  Wrd6 = Wrd10;

DEFLABEL (label_94)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_93;

DEFLABEL (label_92)
  ((Wrd18.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_91)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  Rvl = ((Wrd32.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_93)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_92;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_31])), (Wrd18.pObj), (Wrd12.Obj));

DEFLABEL (label_55)
  goto label_91;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_30])), (Wrd7.pObj));

DEFLABEL (label_54)
  (Wrd6.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (search_parent_69)
DEFLABEL (search_parent_42)
  INTERRUPT_CHECK (26, LABEL_1_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_23])));
  Rhp += 2;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  Wrd30 = Wrd32;
  ((Wrd30.pObj) [2]) = (Wrd13.Obj);
  ((Wrd30.pObj) [3]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd33.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_25])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [6]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  (Rsp [0]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_74)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_1_20);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (lambda_73)
  CLOSURE_HEADER (LABEL_1_25);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_33])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  ((Wrd24.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (Rsp [2]) = (Wrd25.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_35])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_32);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_101;
  Wrd5 = Wrd9;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_99;
  Wrd12 = Wrd16;

DEFLABEL (label_98)
  (Rsp [1]) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_47);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_46])));
  Rhp += 2;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd23 = Wrd20;
  ((Wrd23.pObj) [2]) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  Rvl = (Wrd19.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_45])), (Wrd13.pObj));

DEFLABEL (label_63)
  (Wrd12.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_44])), (Wrd6.pObj));

DEFLABEL (label_62)
  (Wrd5.Obj) = Rvl;
  goto label_100;

DEFLABEL (swapB_72)
  CLOSURE_HEADER (LABEL_1_23);

DEFLABEL (swapB_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_119;

DEFLABEL (label_118)
  Wrd5 = Wrd9;

DEFLABEL (label_117)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_116;

DEFLABEL (label_115)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_114)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_113;

DEFLABEL (label_112)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_111)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_110;

DEFLABEL (label_109)
  Wrd57 = Wrd61;

DEFLABEL (label_108)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_107;

DEFLABEL (label_106)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_105)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_104;

DEFLABEL (label_103)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_102)
  Rvl = (current_block [OBJECT_1_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_104)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_103;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_42])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_61)
  goto label_102;

DEFLABEL (label_107)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_106;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_41])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_60)
  goto label_105;

DEFLABEL (label_110)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_109;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_40])), (Wrd58.pObj));

DEFLABEL (label_59)
  (Wrd57.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_113)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_112;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_39])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_58)
  goto label_111;

DEFLABEL (label_116)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_115;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_38])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_57)
  goto label_114;

DEFLABEL (label_119)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_118;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_37])), (Wrd6.pObj));

DEFLABEL (label_56)
  (Wrd5.Obj) = Rvl;
  goto label_117;

DEFLABEL (lambda_76)
  CLOSURE_HEADER (LABEL_1_35);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_49]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_1_48);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_54]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_1_53);
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_55]));

DEFLABEL (swapB_75)
  CLOSURE_HEADER (LABEL_1_33);

DEFLABEL (swapB_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_128;

DEFLABEL (label_127)
  Wrd5 = Wrd9;

DEFLABEL (label_126)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_125;

DEFLABEL (label_124)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_123)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_122;

DEFLABEL (label_121)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_120)
  Rvl = (current_block [OBJECT_1_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_122)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_121;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_52])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_66)
  goto label_120;

DEFLABEL (label_125)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_124;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_51])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_65)
  goto label_123;

DEFLABEL (label_128)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_127;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_50])), (Wrd6.pObj));

DEFLABEL (label_64)
  (Wrd5.Obj) = Rvl;
  goto label_126;

DEFLABEL (lambda_77)
  CLOSURE_HEADER (LABEL_1_46);

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

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define ENVIRONMENT_LABEL_2_3 14
#define DEBUGGING_LABEL_2_2 13
#define OBJECT_2_0 12
#define FREE_REFERENCE_2_0 9
#define FREE_ASSIGNMENT_2_0 11
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
option_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_2_4);
      goto define_load_option_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_load_option_7)
DEFLABEL (define_load_option_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd28.Obj) = ((Wrd20.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd20.pObj) [0]) = (Wrd17.Obj);

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_2_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd28.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_6])), (Wrd20.pObj), (Wrd17.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 10
#define DEBUGGING_LABEL_3_2 9
#define OBJECT_3_0 8
#define FREE_ASSIGNMENT_3_0 7
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
option_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_3_4);
      goto further_load_options_0;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (further_load_options_4)
DEFLABEL (further_load_options_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;

DEFLABEL (label_6)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_3_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_6;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_6 9
#define LABEL_4_9 11
#define LABEL_4_10 13
#define ENVIRONMENT_LABEL_4_3 29
#define DEBUGGING_LABEL_4_2 28
#define OBJECT_4_0 27
#define EXECUTE_CACHE_4_14 15
#define EXECUTE_CACHE_4_13 17
#define EXECUTE_CACHE_4_12 19
#define EXECUTE_CACHE_4_11 21
#define EXECUTE_CACHE_4_8 23
#define FREE_REFERENCE_4_0 26
#define FREE_REFERENCES_LABEL_4_0 14
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
option_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_4_4);
      goto initial_load_options_7;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initial_load_options_11)
DEFLABEL (initial_load_options_7)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_17;
  Wrd5 = Wrd9;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (label_13)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_12]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_5])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_16;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 13
#define DEBUGGING_LABEL_5_2 12
#define OBJECT_5_0 11
#define EXECUTE_CACHE_5_7 7
#define EXECUTE_CACHE_5_6 9
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
option_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto local_load_options_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (local_load_options_5)
DEFLABEL (local_load_options_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 14
#define DEBUGGING_LABEL_6_2 13
#define OBJECT_6_1 12
#define OBJECT_6_0 11
#define EXECUTE_CACHE_6_7 7
#define EXECUTE_CACHE_6_6 9
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
option_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto standard_load_options_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_load_options_5)
DEFLABEL (standard_load_options_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (current_block [OBJECT_6_1]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 12
#define DEBUGGING_LABEL_7_2 11
#define EXECUTE_CACHE_7_7 7
#define EXECUTE_CACHE_7_6 9
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
option_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto library_fileP_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (library_fileP_4)
DEFLABEL (library_fileP_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 10
#define DEBUGGING_LABEL_8_2 9
#define EXECUTE_CACHE_8_6 7
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
option_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto confirm_pathname_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (confirm_pathname_4)
DEFLABEL (confirm_pathname_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (Rsp [0]);
  goto label_5;

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
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
option_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dummy_option_loader_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dummy_option_loader_3)
DEFLABEL (dummy_option_loader_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  Rvl = (current_block [OBJECT_9_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_7 7
#define LABEL_10_9 9
#define LABEL_10_11 11
#define LABEL_10_12 13
#define LABEL_10_14 15
#define LABEL_10_15 17
#define TAG_10_16 7
#define LABEL_10_19 19
#define LABEL_10_21 21
#define LABEL_10_24 23
#define LABEL_10_25 25
#define LABEL_10_28 27
#define LABEL_10_27 29
#define LABEL_10_32 31
#define TAG_10_33 14
#define LABEL_10_35 33
#define LABEL_10_37 35
#define TAG_10_38 16
#define ENVIRONMENT_LABEL_10_3 73
#define DEBUGGING_LABEL_10_2 72
#define OBJECT_10_2 71
#define OBJECT_10_1 70
#define OBJECT_10_0 69
#define EXECUTE_CACHE_10_40 37
#define EXECUTE_CACHE_10_39 39
#define EXECUTE_CACHE_10_36 41
#define EXECUTE_CACHE_10_34 43
#define EXECUTE_CACHE_10_31 45
#define EXECUTE_CACHE_10_30 47
#define EXECUTE_CACHE_10_29 49
#define EXECUTE_CACHE_10_26 51
#define EXECUTE_CACHE_10_23 53
#define EXECUTE_CACHE_10_22 55
#define EXECUTE_CACHE_10_20 57
#define EXECUTE_CACHE_10_18 59
#define EXECUTE_CACHE_10_17 61
#define EXECUTE_CACHE_10_13 63
#define EXECUTE_CACHE_10_10 65
#define EXECUTE_CACHE_10_8 67
#define FREE_REFERENCES_LABEL_10_0 36
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
option_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_10_4);
      goto standard_option_loader_21;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_25;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_10_12);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_10_14);
      goto continuation_17;

    case 7:
      current_block = (Rpc - LABEL_10_15);
      goto lambda_26;

    case 8:
      current_block = (Rpc - LABEL_10_19);
      goto continuation_18;

    case 9:
      current_block = (Rpc - LABEL_10_21);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_10_24);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_10_25);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_10_28);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_10_27);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_10_32);
      goto lambda_27;

    case 15:
      current_block = (Rpc - LABEL_10_35);
      goto continuation_8;

    case 16:
      current_block = (Rpc - LABEL_10_37);
      goto lambda_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_option_loader_24)
DEFLABEL (standard_option_loader_21)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_18]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_15])));
  Rhp += 3;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd17 = Wrd12;
  (Wrd18.Obj) = (Rsp [4]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  ((Wrd17.pObj) [4]) = Rvl;
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_10_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_20]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_10_19);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_23]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_10_15);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_22]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_26]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_30]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_24);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_29]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_10_28);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_31]));

DEFLABEL (label_29)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_27]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_26]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10_27);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_32])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd15.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [0]) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd13.pObj) [3]);
  (Rsp [1]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_34]));

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_10_32);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_36]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_35);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_37])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = ((Wrd14.pObj) [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_39]));

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_10_37);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_10_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [3]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_40]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_9 7
#define LABEL_11_7 9
#define LABEL_11_11 11
#define ENVIRONMENT_LABEL_11_3 22
#define DEBUGGING_LABEL_11_2 21
#define EXECUTE_CACHE_11_12 13
#define EXECUTE_CACHE_11_10 15
#define EXECUTE_CACHE_11_8 17
#define EXECUTE_CACHE_11_6 19
#define FREE_REFERENCES_LABEL_11_0 12
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
option_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_11_4);
      goto force__4;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (force__7)
DEFLABEL (force__4)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define LABEL_12_9 11
#define TAG_12_10 4
#define LABEL_12_11 13
#define LABEL_12_14 15
#define ENVIRONMENT_LABEL_12_3 31
#define DEBUGGING_LABEL_12_2 30
#define OBJECT_12_0 29
#define EXECUTE_CACHE_12_17 17
#define EXECUTE_CACHE_12_16 19
#define EXECUTE_CACHE_12_15 21
#define EXECUTE_CACHE_12_13 23
#define EXECUTE_CACHE_12_12 25
#define EXECUTE_CACHE_12_8 27
#define FREE_REFERENCES_LABEL_12_0 16
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
option_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_12_4);
      goto standard_system_loader_7;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto lambda_11;

    case 5:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_12_14);
      goto lambda_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_system_loader_10)
DEFLABEL (standard_system_loader_7)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_9])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_12_9);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_15]));

DEFLABEL (lambda_12)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_12_14);
  (Wrd5.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define ENVIRONMENT_LABEL_3 28
#define DEBUGGING_LABEL_2 27
#define PURIFICATION_ROOT 26
#define OBJECT_6 25
#define OBJECT_5 24
#define OBJECT_4 23
#define OBJECT_3 22
#define OBJECT_2 21
#define OBJECT_1 20
#define OBJECT_0 19
#define FREE_REFERENCE_0 15
#define GLOBAL_EXECUTE_CACHE_5 17
#define FREE_REFERENCES_LABEL_0 14
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
option_so_d6be06e671b4d0b4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_7);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto expression_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_3)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_9])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_8)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_7)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	0,
	1,
	1,
	1,
	1,
	2,
	1,
	2,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 12)
      goto label_6;
    blocks = (current_block [OBJECT_6]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_8])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_6)
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_5]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_option_so_d6be06e671b4d0b4 [12] =
  {
    { "option_so_code_1", 35, option_so_code_1 },
    { "option_so_code_2", 3, option_so_code_2 },
    { "option_so_code_3", 2, option_so_code_3 },
    { "option_so_code_4", 6, option_so_code_4 },
    { "option_so_code_5", 2, option_so_code_5 },
    { "option_so_code_6", 2, option_so_code_6 },
    { "option_so_code_7", 2, option_so_code_7 },
    { "option_so_code_8", 2, option_so_code_8 },
    { "option_so_code_9", 1, option_so_code_9 },
    { "option_so_code_10", 17, option_so_code_10 },
    { "option_so_code_11", 5, option_so_code_11 },
    { "option_so_code_12", 7, option_so_code_12 }
  };

int
decl_option_so_d6be06e671b4d0b4 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_option_so_d6be06e671b4d0b4);
  return (0);
}

DECLARE_COMPILED_CODE ("option.so", 6, decl_option_so_d6be06e671b4d0b4, option_so_d6be06e671b4d0b4)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_option_so_data_d6be06e671b4d0b4 [2206] =
  "\x71\x1b\xf1\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x0c\x1d\x07"
  "\x08\xc1\x1d\x0d\xb9\x0d\xba\x0d\xbb\x0d\xbc\x25\xb1\xb3\xb2\xb4"
  "\x24\x28\x0d\x28\x0d\x28\x0d\xbc\x28\x0d\x28\x0d\xbd\x28\x0d\xbe"
  "\x28\x0d\x28\x0d\x28\x0d\xbf\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x82\x88\x1d\xb2\x25\xb2\x24\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x1d\xb3\x25\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0c\x0d\x1c\x24\x28\x0d\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0c\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x86\x88\x0c\x0c\x28\x1b\x28\xb6\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\xbe\x1d\xb0\x02\x88\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x0c\x07\x28\x0d\x28\x0d\x1c\x28\x0d\x28\xb4\x28\x0d\x28\x0d"
  "\x28\xb5\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\xbc\x28\x0d\x1c\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x28\x0d\x28\xb5\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x28"
  "\x1b\x28\xb4\x28\x1b\x28\x1b\x28\xb7\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x06\x9c\x0d\xb5\x0d\x0d\x1b\x9c"
  "\xc3\xb3\xb2\xb1\x1b\x1b\x1b\x1b\x0d\x1c\x0d\x0d\x0d\x17\x08\x08"
  "\x1b\x2a\x1b\x2a\xb6\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x17\x28\x0d\x26\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f"
  "\x6f\x70\x74\x69\x6f\x6e\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x1f\x2a\x70\x61\x72\x73\x65\x72\x2d\x63\x61\x6e\x6f\x6e\x69\x63"
  "\x61\x6c\x69\x7a\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x3f\x2a\x15"
  "\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6f\x70\x74\x69\x6f\x6e\x20\x6e"
  "\x61\x6d\x65\x3a\x02\x04\x63\x64\x72\x08\x0f\x6c\x6f\x61\x64\x65"
  "\x64\x2d\x6f\x70\x74\x69\x6f\x6e\x73\x0a\x2a\x6f\x70\x74\x69\x6f"
  "\x6e\x73\x2a\x09\x2a\x70\x61\x72\x65\x6e\x74\x2a\x1f\x6c\x6f\x61"
  "\x64\x2f\x73\x75\x70\x70\x72\x65\x73\x73\x2d\x6c\x6f\x61\x64\x69"
  "\x6e\x67\x2d\x6d\x65\x73\x73\x61\x67\x65\x3f\x05\x05\x04\x05\x6d"
  "\x65\x6d\x71\x04\x05\x61\x73\x73\x71\x04\x09\x66\x6f\x72\x2d\x65"
  "\x61\x63\x68\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75"
  "\x69\x64\x2d\x62\x69\x6e\x64\x03\x07\x66\x6f\x72\x63\x65\x2a\x04"
  "\x06\x65\x72\x72\x6f\x72\x03\x1d\x65\x78\x74\x65\x6e\x64\x2d\x74"
  "\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x05\x13\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x2d\x64\x65\x66\x69\x6e\x65\x04\x05\x6c\x6f\x61\x64\x0a\x29"
  "\x48\x81\x87\x02\x28\x46\x81\x85\x02\x27\x44\x81\x85\x02\x26\x42"
  "\x81\x83\x02\x25\x40\x81\x85\x02\x24\x3e\x81\x83\x02\x23\x3c\x81"
  "\x83\x02\x22\x3a\x81\x83\x02\x21\x38\x81\x85\x02\x20\x36\x81\x83"
  "\x02\x1f\x34\x81\x83\x02\x1e\x32\x81\x89\x02\x1d\x30\x81\x83\x02"
  "\x1c\x2e\x81\x85\x02\x1b\x2c\x81\x83\x02\x1a\x2a\x81\x83\x02\x19"
  "\x28\x81\x85\x02\x18\x26\x81\x83\x02\x17\x24\x81\x83\x02\x16\x22"
  "\x81\x83\x02\x15\x20\x81\x87\x02\x14\x1e\x83\x04\x13\x1c\x81\x85"
  "\x02\x12\x1a\x81\x85\x02\x11\x18\x81\x85\x02\x10\x16\x81\x87\x02"
  "\x0f\x14\x81\x85\x02\x0e\x12\x81\x87\x02\x0d\x10\x81\x85\x02\x0c"
  "\x0e\x81\x87\x02\x0b\x0c\x81\x8d\x02\x0a\x0a\x81\x8d\x02\x09\x08"
  "\x81\x8d\x02\x08\x06\x81\x8f\x02\x07\x04\x84\x04\x47\x6e\x09\x02"
  "\x02\x02\x02\x2c\x08\x81\x85\x02\x2b\x06\x81\x85\x02\x2a\x04\xfe"
  "\x05\x07\x0f\x0a\x02\x02\x02\x2e\x06\x81\x83\x02\x2d\x04\x83\x04"
  "\x05\x0b\x0b\x02\x17\x4d\x49\x54\x53\x43\x48\x45\x4d\x45\x5f\x4c"
  "\x4f\x41\x44\x5f\x4f\x50\x54\x49\x4f\x4e\x53\x17\x2a\x69\x6e\x69"
  "\x74\x69\x61\x6c\x2d\x6f\x70\x74\x69\x6f\x6e\x73\x2d\x66\x69\x6c"
  "\x65\x2a\x0c\x02\x03\x19\x67\x65\x74\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x02\x16"
  "\x75\x73\x65\x72\x2d\x68\x6f\x6d\x65\x64\x69\x72\x2d\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x02\x13\x6c\x6f\x63\x61\x6c\x2d\x6c\x6f\x61"
  "\x64\x2d\x6f\x70\x74\x69\x6f\x6e\x73\x0d\x03\x11\x63\x6f\x6e\x66"
  "\x69\x72\x6d\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x0e\x04\x10\x6d"
  "\x65\x72\x67\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x73\x0f\x06"
  "\x34\x0e\x81\x85\x02\x33\x0c\x81\x83\x02\x32\x0a\x81\x83\x02\x31"
  "\x08\x81\x85\x02\x30\x06\x81\x81\x02\x2f\x04\x82\x02\x0d\x1e\x10"
  "\x02\x09\x6f\x70\x74\x69\x6f\x6e\x64\x62\x03\x0e\x6c\x69\x62\x72"
  "\x61\x72\x79\x2d\x66\x69\x6c\x65\x3f\x11\x02\x16\x73\x74\x61\x6e"
  "\x64\x61\x72\x64\x2d\x6c\x6f\x61\x64\x2d\x6f\x70\x74\x69\x6f\x6e"
  "\x73\x12\x03\x36\x06\x81\x81\x02\x35\x04\x82\x02\x05\x0e\x13\x02"
  "\x26\x43\x61\x6e\x6e\x6f\x74\x20\x6c\x6f\x63\x61\x74\x65\x20\x61"
  "\x20\x6c\x6f\x61\x64\x2d\x6f\x70\x74\x69\x6f\x6e\x20\x64\x61\x74"
  "\x61\x62\x61\x73\x65\x2e\x11\x72\x75\x6e\x74\x69\x6d\x65\x2f\x6f"
  "\x70\x74\x69\x6f\x6e\x64\x62\x03\x11\x03\x03\x38\x06\x81\x81\x02"
  "\x37\x04\x82\x02\x05\x0f\x02\x08\x04\x18\x73\x79\x73\x74\x65\x6d"
  "\x2d\x6c\x69\x62\x72\x61\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x03\x0e\x03\x3a\x06\x81\x83\x02\x39\x04\x83\x04\x05\x0d\x14"
  "\x02\x09\x03\x0f\x66\x69\x6c\x65\x2d\x6c\x6f\x61\x64\x61\x62\x6c"
  "\x65\x3f\x02\x3c\x06\x81\x83\x02\x3b\x04\x83\x04\x05\x0b\x15\x02"
  "\x0a\x02\x3d\x04\x82\x02\x03\x16\x02\x0b\x08\x64\x65\x66\x61\x75"
  "\x6c\x74\x08\x72\x75\x6e\x74\x69\x6d\x65\x04\x22\x73\x79\x73\x74"
  "\x65\x6d\x2d\x6c\x69\x62\x72\x61\x72\x79\x2d\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x03\x16\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x17\x03\x0d\x66\x69\x6e\x64\x2d\x70\x61\x63\x6b"
  "\x61\x67\x65\x04\x03\x14\x70\x61\x63\x6b\x61\x67\x65\x2f\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x02\x1a\x66\x6c\x75\x73\x68"
  "\x2d\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x71\x75"
  "\x65\x75\x65\x21\x03\x04\x05\x65\x76\x61\x6c\x04\x0f\x03\x07\x70"
  "\x75\x72\x69\x66\x79\x03\x15\x62\x75\x69\x6c\x74\x2d\x69\x6e\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x66\x69\x6c\x65\x04\x0b\x73\x63\x6f"
  "\x64\x65\x2d\x65\x76\x61\x6c\x05\x1e\x77\x69\x74\x68\x2d\x64\x69"
  "\x72\x65\x63\x74\x6f\x72\x79\x2d\x72\x65\x77\x72\x69\x74\x69\x6e"
  "\x67\x2d\x72\x75\x6c\x65\x03\x13\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x04\x20\x77\x69\x74\x68"
  "\x2d\x77\x6f\x72\x6b\x69\x6e\x67\x2d\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x18\x06\x11\x4e\x24"
  "\x81\x83\x02\x4d\x22\x81\x83\x02\x4c\x20\x81\x83\x02\x4b\x1e\x81"
  "\x89\x02\x4a\x1c\x81\x87\x02\x49\x1a\x81\x89\x02\x48\x18\x81\x87"
  "\x02\x47\x16\x81\x85\x02\x46\x14\x81\x89\x02\x45\x12\x81\x85\x02"
  "\x44\x10\x81\x89\x02\x43\x0e\x81\x89\x02\x42\x0c\x81\x87\x02\x41"
  "\x0a\x81\x85\x02\x40\x08\x81\x83\x02\x3f\x06\x81\x83\x02\x3e\x04"
  "\xfd\x07\x23\x4a\x19\x02\x0c\x03\x0b\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x3f\x03\x09\x70\x72\x6f\x6d\x69\x73\x65\x3f\x03\x03\x06"
  "\x66\x6f\x72\x63\x65\x05\x53\x0c\x81\x83\x02\x52\x0a\x81\x83\x02"
  "\x51\x08\x81\x83\x02\x50\x06\x81\x83\x02\x4f\x04\x83\x04\x0b\x17"
  "\x1a\x02\x0d\x05\x6d\x61\x6b\x65\x02\x16\x63\x75\x72\x72\x65\x6e"
  "\x74\x2d\x6c\x6f\x61\x64\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x03"
  "\x17\x03\x04\x18\x04\x0f\x03\x07\x5a\x10\x82\x02\x59\x0e\x81\x87"
  "\x02\x58\x0c\x81\x83\x02\x57\x0a\x81\x87\x02\x56\x08\x81\x85\x02"
  "\x55\x06\x81\x83\x02\x54\x04\x83\x04\x0f\x20\x18\x0d\x17\x17\x18"
  "\x04\x1a\x04\x19\x04\x16\x04\x17\x73\x74\x61\x6e\x64\x61\x72\x64"
  "\x2d\x73\x79\x73\x74\x65\x6d\x2d\x6c\x6f\x61\x64\x65\x72\x17\x73"
  "\x74\x61\x6e\x64\x61\x72\x64\x2d\x6f\x70\x74\x69\x6f\x6e\x2d\x6c"
  "\x6f\x61\x64\x65\x72\x14\x64\x75\x6d\x6d\x79\x2d\x6f\x70\x74\x69"
  "\x6f\x6e\x2d\x6c\x6f\x61\x64\x65\x72\x0c\x11\x6c\x6f\x63\x61\x6c"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0e\x11\x12\x0d\x15"
  "\x69\x6e\x69\x74\x69\x61\x6c\x2d\x6c\x6f\x61\x64\x2d\x6f\x70\x74"
  "\x69\x6f\x6e\x73\x1a\x15\x66\x75\x72\x74\x68\x65\x72\x2d\x6c\x6f"
  "\x61\x64\x2d\x6f\x70\x74\x69\x6f\x6e\x73\x13\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6c\x6f\x61\x64\x2d\x6f\x70\x74\x69\x6f\x6e\x0c\x6c\x6f"
  "\x61\x64\x2d\x6f\x70\x74\x69\x6f\x6e\x0b\x15\x04\x14\x04\x04\x13"
  "\x04\x10\x04\x0b\x04\x0a\x04\x09\x04\x0b\x05\x10\x64\x65\x66\x69"
  "\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x1a\x02\x06\x0e"
  "\x80\x80\x04\x05\x0c\x81\x81\x02\x04\x0a\x81\x81\x02\x03\x08\x81"
  "\x83\x02\x02\x06\x81\x85\x02\x01\x04\x81\x83\x02\x0d\x1d";

SCHEME_OBJECT *
option_so_data_d6be06e671b4d0b4 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_option_so_data_d6be06e671b4d0b4 [0]))), (sizeof (prog_option_so_data_d6be06e671b4d0b4)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_10]));
}

DECLARE_COMPILED_DATA_NS ("option.so", option_so_data_d6be06e671b4d0b4)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("option.so", "d1506a9218ff5d5c")
