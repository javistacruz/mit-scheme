/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:43-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_8 5
#define LABEL_1_5 7
#define TAG_1_6 2
#define LABEL_1_7 9
#define LABEL_1_13 11
#define LABEL_1_11 13
#define TAG_1_12 5
#define LABEL_1_16 15
#define LABEL_1_17 17
#define LABEL_1_14 19
#define TAG_1_15 8
#define LABEL_1_20 21
#define LABEL_1_21 23
#define LABEL_1_23 25
#define LABEL_1_24 27
#define LABEL_1_18 29
#define LABEL_1_22 31
#define LABEL_1_29 33
#define LABEL_1_27 35
#define TAG_1_28 16
#define LABEL_1_30 37
#define LABEL_1_31 39
#define LABEL_1_25 41
#define TAG_1_26 19
#define LABEL_1_32 43
#define LABEL_1_35 45
#define LABEL_1_34 47
#define LABEL_1_36 49
#define TAG_1_37 23
#define LABEL_1_40 51
#define LABEL_1_41 53
#define LABEL_1_42 55
#define LABEL_1_33 57
#define LABEL_1_44 59
#define LABEL_1_39 61
#define LABEL_1_45 63
#define LABEL_1_46 65
#define LABEL_1_49 67
#define LABEL_1_43 69
#define LABEL_1_51 71
#define LABEL_1_52 73
#define LABEL_1_53 75
#define LABEL_1_56 77
#define LABEL_1_50 79
#define LABEL_1_57 81
#define LABEL_1_47 83
#define TAG_1_48 40
#define LABEL_1_59 85
#define LABEL_1_58 87
#define LABEL_1_60 89
#define TAG_1_61 43
#define LABEL_1_62 91
#define LABEL_1_54 93
#define TAG_1_55 45
#define LABEL_1_63 95
#define LABEL_1_64 97
#define TAG_1_65 47
#define LABEL_1_66 99
#define ENVIRONMENT_LABEL_1_3 123
#define DEBUGGING_LABEL_1_2 122
#define OBJECT_1_10 121
#define OBJECT_1_9 120
#define OBJECT_1_8 119
#define OBJECT_1_7 118
#define OBJECT_1_6 117
#define OBJECT_1_5 116
#define OBJECT_1_4 115
#define OBJECT_1_3 114
#define OBJECT_1_2 113
#define OBJECT_1_1 112
#define OBJECT_1_0 111
#define EXECUTE_CACHE_1_38 101
#define EXECUTE_CACHE_1_19 103
#define EXECUTE_CACHE_1_10 105
#define EXECUTE_CACHE_1_9 107
#define FREE_REFERENCE_1_0 110
#define FREE_REFERENCES_LABEL_1_0 100
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd25;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd18;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd67;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd33;
  machine_word Wrd19;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_61;

    case 1:
      current_block = (Rpc - LABEL_1_8);
      goto label_63;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_0;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_1_13);
      goto label_64;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto loop_58;

    case 6:
      current_block = (Rpc - LABEL_1_16);
      goto label_65;

    case 7:
      current_block = (Rpc - LABEL_1_17);
      goto label_66;

    case 8:
      current_block = (Rpc - LABEL_1_14);
      goto lambda_88;

    case 9:
      current_block = (Rpc - LABEL_1_20);
      goto label_67;

    case 10:
      current_block = (Rpc - LABEL_1_21);
      goto label_68;

    case 11:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_1_24);
      goto label_69;

    case 13:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_1_29);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_1_27);
      goto lambda_90;

    case 17:
      current_block = (Rpc - LABEL_1_30);
      goto label_70;

    case 18:
      current_block = (Rpc - LABEL_1_31);
      goto label_71;

    case 19:
      current_block = (Rpc - LABEL_1_25);
      goto req_loop_53;

    case 20:
      current_block = (Rpc - LABEL_1_32);
      goto continuation_19;

    case 21:
      current_block = (Rpc - LABEL_1_35);
      goto label_72;

    case 22:
      current_block = (Rpc - LABEL_1_34);
      goto continuation_52;

    case 23:
      current_block = (Rpc - LABEL_1_36);
      goto lambda_91;

    case 24:
      current_block = (Rpc - LABEL_1_40);
      goto continuation_23;

    case 25:
      current_block = (Rpc - LABEL_1_41);
      goto label_74;

    case 26:
      current_block = (Rpc - LABEL_1_42);
      goto label_75;

    case 27:
      current_block = (Rpc - LABEL_1_33);
      goto continuation_20;

    case 28:
      current_block = (Rpc - LABEL_1_44);
      goto label_73;

    case 29:
      current_block = (Rpc - LABEL_1_39);
      goto continuation_50;

    case 30:
      current_block = (Rpc - LABEL_1_45);
      goto continuation_21;

    case 31:
      current_block = (Rpc - LABEL_1_46);
      goto continuation_27;

    case 32:
      current_block = (Rpc - LABEL_1_49);
      goto label_77;

    case 33:
      current_block = (Rpc - LABEL_1_43);
      goto continuation_24;

    case 34:
      current_block = (Rpc - LABEL_1_51);
      goto label_76;

    case 35:
      current_block = (Rpc - LABEL_1_52);
      goto continuation_25;

    case 36:
      current_block = (Rpc - LABEL_1_53);
      goto continuation_31;

    case 37:
      current_block = (Rpc - LABEL_1_56);
      goto label_80;

    case 38:
      current_block = (Rpc - LABEL_1_50);
      goto continuation_28;

    case 39:
      current_block = (Rpc - LABEL_1_57);
      goto label_78;

    case 40:
      current_block = (Rpc - LABEL_1_47);
      goto and_loop_46;

    case 41:
      current_block = (Rpc - LABEL_1_59);
      goto label_79;

    case 42:
      current_block = (Rpc - LABEL_1_58);
      goto continuation_29;

    case 43:
      current_block = (Rpc - LABEL_1_60);
      goto lambda_94;

    case 44:
      current_block = (Rpc - LABEL_1_62);
      goto label_81;

    case 45:
      current_block = (Rpc - LABEL_1_54);
      goto or_loop_38;

    case 46:
      current_block = (Rpc - LABEL_1_63);
      goto label_82;

    case 47:
      current_block = (Rpc - LABEL_1_64);
      goto lambda_95;

    case 48:
      current_block = (Rpc - LABEL_1_66);
      goto label_83;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_85)
DEFLABEL (lambda_61)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_100;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_99)
  (Wrd21.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_96;
  (Wrd30.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd30.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_0;

DEFLABEL (label_96)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_11])));
  Rhp += 3;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  Wrd26 = Wrd28;
  (Wrd27.Obj) = (Rsp [4]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  ((Wrd26.pObj) [3]) = (Wrd24.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd26.pObj) [4]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd29.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_98;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_97)
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_58;

DEFLABEL (label_98)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_64)
  (Wrd9.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (lambda_86)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_1_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (loop_87)
DEFLABEL (loop_58)
  INTERRUPT_CHECK (26, LABEL_1_11);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_14])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_109;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_108)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_107;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_106)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_102;

DEFLABEL (label_101)
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd49.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_25])));
  Rhp += 3;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd49.pObj)));
  (* (--Rsp)) = (Wrd50.Obj);
  Wrd45 = Wrd49;
  (Wrd46.Obj) = (Rsp [4]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [2]);
  ((Wrd45.pObj) [2]) = (Wrd48.Obj);
  (Wrd43.Obj) = ((Wrd47.pObj) [3]);
  ((Wrd45.pObj) [3]) = (Wrd43.Obj);
  (Wrd38.Obj) = ((Wrd47.pObj) [4]);
  ((Wrd45.pObj) [4]) = (Wrd38.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd50.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_27])));
  Rhp += 3;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd29 = Wrd24;
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [4]);
  ((Wrd29.pObj) [2]) = (Wrd32.Obj);
  ((Wrd29.pObj) [3]) = (Wrd30.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  ((Wrd29.pObj) [4]) = (Wrd26.Obj);
  (Rsp [4]) = (Wrd23.Obj);
  (Wrd33.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd33.Obj);
  goto req_loop_53;

DEFLABEL (label_102)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  (Wrd56.Obj) = (Rsp [3]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_105;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_104)
  if ((Wrd53.Obj) == (current_block [OBJECT_1_4]))
    goto label_103;
  (Wrd64.Obj) = (Rsp [2]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [4]);
  (Rsp [3]) = (Wrd63.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_0;

DEFLABEL (label_103)
  (Wrd67.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd67.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_10;

DEFLABEL (label_105)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_69)
  (Wrd53.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_65)
  (Wrd13.Obj) = Rvl;
  goto label_108;

DEFLABEL (lambda_88)
  CLOSURE_HEADER (LABEL_1_14);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_113;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_112)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_111;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_110)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_111)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_67)
  (Wrd5.Obj) = Rvl;
  goto label_112;

DEFLABEL (lambda_90)
  CLOSURE_HEADER (LABEL_1_27);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_118;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_117)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_1_4])))
    goto label_114;
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [2]);
  (Rsp [0]) = (Wrd39.Obj);
  goto lambda_0;

DEFLABEL (label_114)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd31.Obj) = ((Wrd22.pObj) [4]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_116;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd24.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_115)
  (Rsp [1]) = (Wrd24.Obj);
  goto loop_58;

DEFLABEL (label_116)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_71)
  (Wrd24.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_70)
  (Wrd5.Obj) = Rvl;
  goto label_117;

DEFLABEL (req_loop_89)
DEFLABEL (req_loop_53)
  INTERRUPT_CHECK (26, LABEL_1_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_1_32);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_139;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_1_33);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_132;

DEFLABEL (label_131)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_43]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_1_7]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_1_43);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_126;

DEFLABEL (label_125)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_50]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_1_7]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_50);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_120;

DEFLABEL (label_119)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [4]);
  (Rsp [3]) = (Wrd26.Obj);
  Rsp = (& (Rsp [3]));
  goto lambda_0;

DEFLABEL (label_120)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_53]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_124;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_123)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_58]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_1_10]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_1_58);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_53);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_119;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd53.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_55);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_54])));
  Rhp += 3;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd53.pObj)));
  (* (--Rsp)) = (Wrd54.Obj);
  Wrd51 = Wrd53;
  (Wrd52.Obj) = (Rsp [1]);
  ((Wrd51.pObj) [2]) = (Wrd52.Obj);
  (Wrd49.Obj) = (Rsp [4]);
  ((Wrd51.pObj) [3]) = (Wrd49.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  ((Wrd51.pObj) [4]) = (Wrd46.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd54.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_122;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_121)
  (Rsp [3]) = (Wrd34.Obj);
  Rsp = (& (Rsp [2]));
  goto or_loop_38;

DEFLABEL (label_122)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_56]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_80)
  (Wrd34.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_124)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_57]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_46]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_130;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_129)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_52]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_1_9]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_1_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_1_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_125;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd54.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_48);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_47])));
  Rhp += 3;
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd54.pObj)));
  (* (--Rsp)) = (Wrd55.Obj);
  Wrd52 = Wrd54;
  (Wrd53.Obj) = (Rsp [1]);
  ((Wrd52.pObj) [2]) = (Wrd53.Obj);
  (Wrd50.Obj) = (Rsp [4]);
  ((Wrd52.pObj) [3]) = (Wrd50.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  ((Wrd52.pObj) [4]) = (Wrd47.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd55.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_128;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_127)
  (Rsp [3]) = (Wrd35.Obj);
  Rsp = (& (Rsp [2]));
  goto and_loop_46;

DEFLABEL (label_128)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_49]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_77)
  (Wrd35.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_51]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_76)
  (* (--Rsp)) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_40]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_138;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_137)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_45]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_1_8]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_1_45);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_1_40);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_131;
  (Wrd33.Obj) = (Rsp [0]);
  (Rsp [0]) = (Wrd33.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_136;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_135)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_134;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd43.Obj) = ((Wrd44.pObj) [0]);

DEFLABEL (label_133)
  (Rsp [1]) = (Wrd43.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd51.Obj);
  (Rsp [3]) = (Wrd50.Obj);
  goto req_loop_53;

DEFLABEL (label_134)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_75)
  (Wrd43.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_41]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_74)
  (Wrd34.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_44]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_137;

DEFLABEL (label_139)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_142;
  Wrd10 = Wrd14;

DEFLABEL (label_141)
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_36])));
  Rhp += 3;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd24 = Wrd17;
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  ((Wrd24.pObj) [2]) = (Wrd27.Obj);
  (Wrd23.Obj) = ((Wrd26.pObj) [3]);
  ((Wrd24.pObj) [3]) = (Wrd23.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd24.pObj) [4]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_38]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_1_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_140;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);

DEFLABEL (label_140)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_142)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_35])), (Wrd11.pObj));

DEFLABEL (label_72)
  (Wrd10.Obj) = Rvl;
  goto label_141;

DEFLABEL (lambda_91)
  CLOSURE_HEADER (LABEL_1_36);

DEFLABEL (lambda_51)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_39]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_1_39);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (and_loop_92)
DEFLABEL (and_loop_46)
  INTERRUPT_CHECK (26, LABEL_1_47);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_143;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [4]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_143)
  if (! ((Wrd6.uLng) == 1))
    goto label_145;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_144)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = ((Wrd21.pObj) [3]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_61);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_60])));
  Rhp += 2;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd31 = Wrd28;
  ((Wrd31.pObj) [2]) = (Wrd20.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  ((Wrd31.pObj) [3]) = (Wrd30.Obj);
  (Rsp [2]) = (Wrd27.Obj);
  (Rsp [3]) = (Wrd23.Obj);
  goto req_loop_53;

DEFLABEL (label_145)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_59]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_144;

DEFLABEL (lambda_94)
  CLOSURE_HEADER (LABEL_1_60);

DEFLABEL (lambda_45)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_147;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_146)
  (Rsp [1]) = (Wrd8.Obj);
  goto and_loop_46;

DEFLABEL (label_147)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_62]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_81)
  (Wrd8.Obj) = Rvl;
  goto label_146;

DEFLABEL (or_loop_93)
DEFLABEL (or_loop_38)
  INTERRUPT_CHECK (26, LABEL_1_54);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_148;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_148)
  if (! ((Wrd6.uLng) == 1))
    goto label_150;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_149)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_65);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_64])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd28 = Wrd25;
  ((Wrd28.pObj) [2]) = (Wrd20.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Rsp [3]) = (Wrd24.Obj);
  (Wrd30.Obj) = ((Wrd21.pObj) [4]);
  (Rsp [2]) = (Wrd30.Obj);
  goto req_loop_53;

DEFLABEL (label_150)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_63]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_149;

DEFLABEL (lambda_95)
  CLOSURE_HEADER (LABEL_1_64);

DEFLABEL (lambda_37)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_152;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_151)
  (Rsp [1]) = (Wrd8.Obj);
  goto or_loop_38;

DEFLABEL (label_152)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_66]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_83)
  (Wrd8.Obj) = Rvl;
  goto label_151;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_5 7
#define LABEL_2_9 9
#define LABEL_2_10 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_13 17
#define LABEL_2_14 19
#define LABEL_2_15 21
#define LABEL_2_16 23
#define LABEL_2_17 25
#define LABEL_2_18 27
#define ENVIRONMENT_LABEL_2_3 40
#define DEBUGGING_LABEL_2_2 39
#define OBJECT_2_5 38
#define OBJECT_2_4 37
#define OBJECT_2_3 36
#define OBJECT_2_2 35
#define OBJECT_2_1 34
#define OBJECT_2_0 33
#define EXECUTE_CACHE_2_8 29
#define EXECUTE_CACHE_2_7 31
#define FREE_REFERENCES_LABEL_2_0 28
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd91;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_2_4);
      goto lambda_20;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_2_14);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_2_15);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_2_16);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_2_17);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_32)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_51;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_50)
  (Wrd17.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_49;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_48)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_47;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_46)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_45;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_44)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_43;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_42)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_41;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_40)
  (Wrd44.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd51.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (Wrd55.Obj) = (current_block [OBJECT_2_4]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd59.Obj) = (Rsp [2]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_39;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_38)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_37;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd65.Obj) = ((Wrd66.pObj) [1]);

DEFLABEL (label_36)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_35;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd72.Obj) = ((Wrd73.pObj) [0]);

DEFLABEL (label_34)
  (Wrd82.Obj) = (current_block [OBJECT_2_4]);
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd82.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd79.Obj);
  (Wrd85.pObj) = (& (Rhp [-2]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd85.pObj)));
  (Wrd90.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd83.Obj);
  (Wrd89.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd89.pObj)));
  (Wrd91.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (Wrd93.pObj) = (& (Rhp [-2]));
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd93.pObj)));
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd98.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd99.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd99.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_30)
  (Wrd72.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_29)
  (Wrd65.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_28)
  (Wrd56.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_3]), 1);

DEFLABEL (label_27)
  (Wrd37.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_26)
  (Wrd28.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_24)
  (Wrd14.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_50;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_5 7
#define LABEL_3_9 9
#define LABEL_3_10 11
#define LABEL_3_11 13
#define LABEL_3_12 15
#define LABEL_3_13 17
#define LABEL_3_14 19
#define LABEL_3_15 21
#define LABEL_3_16 23
#define LABEL_3_17 25
#define LABEL_3_18 27
#define LABEL_3_19 29
#define LABEL_3_20 31
#define LABEL_3_21 33
#define LABEL_3_22 35
#define LABEL_3_23 37
#define LABEL_3_24 39
#define LABEL_3_25 41
#define LABEL_3_26 43
#define LABEL_3_27 45
#define LABEL_3_28 47
#define LABEL_3_33 49
#define LABEL_3_34 51
#define LABEL_3_35 53
#define LABEL_3_36 55
#define LABEL_3_29 57
#define TAG_3_30 27
#define LABEL_3_37 59
#define LABEL_3_38 61
#define LABEL_3_39 63
#define LABEL_3_32 65
#define LABEL_3_40 67
#define LABEL_3_42 69
#define LABEL_3_43 71
#define LABEL_3_41 73
#define LABEL_3_45 75
#define LABEL_3_44 77
#define LABEL_3_47 79
#define LABEL_3_48 81
#define ENVIRONMENT_LABEL_3_3 106
#define DEBUGGING_LABEL_3_2 105
#define OBJECT_3_11 104
#define OBJECT_3_10 103
#define OBJECT_3_9 102
#define OBJECT_3_8 101
#define OBJECT_3_7 100
#define OBJECT_3_6 99
#define OBJECT_3_5 98
#define OBJECT_3_4 97
#define OBJECT_3_3 96
#define OBJECT_3_2 95
#define OBJECT_3_1 94
#define OBJECT_3_0 93
#define EXECUTE_CACHE_3_46 83
#define EXECUTE_CACHE_3_31 85
#define EXECUTE_CACHE_3_8 87
#define EXECUTE_CACHE_3_7 89
#define FREE_REFERENCE_3_0 92
#define FREE_REFERENCES_LABEL_3_0 82
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd47;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd96;
  machine_word Wrd91;
  machine_word Wrd84;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd148;
  machine_word Wrd150;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd145;
  machine_word Wrd146;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd136;
  machine_word Wrd133;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd124;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd111;
  machine_word Wrd112;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd94;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd74;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_3_4);
      goto lambda_84;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_86;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_20;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto label_87;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto label_88;

    case 6:
      current_block = (Rpc - LABEL_3_12);
      goto label_89;

    case 7:
      current_block = (Rpc - LABEL_3_13);
      goto label_90;

    case 8:
      current_block = (Rpc - LABEL_3_14);
      goto label_91;

    case 9:
      current_block = (Rpc - LABEL_3_15);
      goto label_92;

    case 10:
      current_block = (Rpc - LABEL_3_16);
      goto label_93;

    case 11:
      current_block = (Rpc - LABEL_3_17);
      goto label_94;

    case 12:
      current_block = (Rpc - LABEL_3_18);
      goto label_95;

    case 13:
      current_block = (Rpc - LABEL_3_19);
      goto label_96;

    case 14:
      current_block = (Rpc - LABEL_3_20);
      goto label_97;

    case 15:
      current_block = (Rpc - LABEL_3_21);
      goto label_98;

    case 16:
      current_block = (Rpc - LABEL_3_22);
      goto label_99;

    case 17:
      current_block = (Rpc - LABEL_3_23);
      goto label_100;

    case 18:
      current_block = (Rpc - LABEL_3_24);
      goto label_101;

    case 19:
      current_block = (Rpc - LABEL_3_25);
      goto label_102;

    case 20:
      current_block = (Rpc - LABEL_3_26);
      goto label_103;

    case 21:
      current_block = (Rpc - LABEL_3_27);
      goto label_104;

    case 22:
      current_block = (Rpc - LABEL_3_28);
      goto continuation_79;

    case 23:
      current_block = (Rpc - LABEL_3_33);
      goto continuation_68;

    case 24:
      current_block = (Rpc - LABEL_3_34);
      goto label_110;

    case 25:
      current_block = (Rpc - LABEL_3_35);
      goto label_111;

    case 26:
      current_block = (Rpc - LABEL_3_36);
      goto label_112;

    case 27:
      current_block = (Rpc - LABEL_3_29);
      goto lambda_116;

    case 28:
      current_block = (Rpc - LABEL_3_37);
      goto label_105;

    case 29:
      current_block = (Rpc - LABEL_3_38);
      goto label_106;

    case 30:
      current_block = (Rpc - LABEL_3_39);
      goto label_107;

    case 31:
      current_block = (Rpc - LABEL_3_32);
      goto continuation_43;

    case 32:
      current_block = (Rpc - LABEL_3_40);
      goto continuation_52;

    case 33:
      current_block = (Rpc - LABEL_3_42);
      goto label_108;

    case 34:
      current_block = (Rpc - LABEL_3_43);
      goto label_109;

    case 35:
      current_block = (Rpc - LABEL_3_41);
      goto continuation_34;

    case 36:
      current_block = (Rpc - LABEL_3_45);
      goto label_113;

    case 37:
      current_block = (Rpc - LABEL_3_44);
      goto continuation_25;

    case 38:
      current_block = (Rpc - LABEL_3_47);
      goto continuation_22;

    case 39:
      current_block = (Rpc - LABEL_3_48);
      goto continuation_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_115)
DEFLABEL (lambda_84)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_157;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_156)
  (Wrd17.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_117;
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (label_117)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_155;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_154)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_153;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_152)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_151;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_150)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_149;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_148)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_147;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_146)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_145;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd44.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_144)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_143;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd51.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_142)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_141;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_140)
  (Wrd68.Obj) = (Rsp [3]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_139;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd65.Obj) = ((Wrd67.pObj) [1]);

DEFLABEL (label_138)
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_137;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd74.Obj) = ((Wrd75.pObj) [1]);

DEFLABEL (label_136)
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_135;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd81.Obj) = ((Wrd82.pObj) [0]);

DEFLABEL (label_134)
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_133;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [1]);
  (* (--Rsp)) = (Wrd89.Obj);

DEFLABEL (label_132)
  (Wrd98.Obj) = (Rsp [4]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_131;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd95.Obj) = ((Wrd97.pObj) [1]);

DEFLABEL (label_130)
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd106.uLng) == 1))
    goto label_129;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd104.Obj) = ((Wrd105.pObj) [1]);

DEFLABEL (label_128)
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd113.uLng) == 1))
    goto label_127;
  (Wrd112.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd111.Obj) = ((Wrd112.pObj) [0]);

DEFLABEL (label_126)
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd120.uLng) == 1))
    goto label_125;
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd119.Obj) = ((Wrd118.pObj) [0]);
  (* (--Rsp)) = (Wrd119.Obj);

DEFLABEL (label_124)
  (Wrd128.Obj) = (Rsp [5]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd129.uLng) == 1))
    goto label_123;
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd125.Obj) = ((Wrd127.pObj) [1]);

DEFLABEL (label_122)
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd136.uLng) == 1))
    goto label_121;
  (Wrd134.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd135.Obj) = ((Wrd134.pObj) [0]);
  (* (--Rsp)) = (Wrd135.Obj);

DEFLABEL (label_120)
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd144.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd144.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd146.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_29])));
  Rhp += 3;
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd146.pObj)));
  Wrd151 = Wrd146;
  (Wrd152.Obj) = (Rsp [9]);
  ((Wrd151.pObj) [2]) = (Wrd152.Obj);
  (Wrd150.Obj) = (Rsp [7]);
  ((Wrd151.pObj) [3]) = (Wrd150.Obj);
  (Wrd148.Obj) = (Rsp [2]);
  ((Wrd151.pObj) [4]) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_31]));

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_3_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_3_32);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_41]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_3_9]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_3_41);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_3_6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd37.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd38.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_44]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_119;
  Wrd46 = Wrd50;

DEFLABEL (label_118)
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_46]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_3_44);
  (Wrd9.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_3_6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_47]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_3_10]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_3_47);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd22.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_48]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_3_11]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd30.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_3_48);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_45])), (Wrd47.pObj));

DEFLABEL (label_113)
  (Wrd46.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_104)
  (* (--Rsp)) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_103)
  (Wrd125.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd111.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_102)
  (* (--Rsp)) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_101)
  (Wrd111.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_100)
  (Wrd104.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_99)
  (Wrd95.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_98)
  (* (--Rsp)) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_97)
  (Wrd81.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_96)
  (Wrd74.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_95)
  (Wrd65.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_94)
  (* (--Rsp)) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_93)
  (Wrd51.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_92)
  (Wrd44.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_91)
  (Wrd35.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_89)
  (Wrd21.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_88)
  (Wrd14.Obj) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_87)
  (Wrd5.Obj) = Rvl;
  goto label_154;

DEFLABEL (label_157)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_156;

DEFLABEL (lambda_116)
  CLOSURE_HEADER (LABEL_3_29);

DEFLABEL (lambda_78)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_175;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_174)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_173;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_172)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_171;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_170)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_169;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_3_7]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [2]);
  (* (--Rsp)) = (Wrd45.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_3_33);
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Wrd54.Obj) = (current_block [OBJECT_3_6]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [4]);
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd70.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd70.pObj)));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd76.Obj) = (Rsp [3]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_168;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd73.Obj) = ((Wrd75.pObj) [1]);

DEFLABEL (label_167)
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_166;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd82.Obj) = ((Wrd83.pObj) [1]);

DEFLABEL (label_165)
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_164;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd89.Obj) = ((Wrd90.pObj) [0]);

DEFLABEL (label_163)
  (Wrd96.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd99.pObj) = (& (Rhp [-2]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd99.pObj)));
  (Wrd103.Obj) = (Rsp [1]);
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd105.Obj) = ((Wrd104.pObj) [3]);
  (* (Rhp++)) = (Wrd105.Obj);
  (* (Rhp++)) = (Wrd97.Obj);
  (Wrd102.pObj) = (& (Rhp [-2]));
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd102.pObj)));
  (Wrd109.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = (Wrd100.Obj);
  (* (Rhp++)) = (Wrd109.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (* (--Rsp)) = (Wrd108.Obj);

DEFLABEL (label_162)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_40]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_3_8]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [2]);
  (* (--Rsp)) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_3_40);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_3_6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [4]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_161;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_160)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_159;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd41.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_158)
  (Wrd48.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [3]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (Wrd58.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_159)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_43]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_109)
  (Wrd41.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_42]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_108)
  (Wrd32.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_164)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_36]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_112)
  (Wrd89.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_35]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_111)
  (Wrd82.Obj) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_110)
  (Wrd73.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_169)
  (Wrd31.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd31.Obj);
  goto label_162;

DEFLABEL (label_171)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_39]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_107)
  (Wrd23.Obj) = Rvl;
  goto label_170;

DEFLABEL (label_173)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_38]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_106)
  (Wrd14.Obj) = Rvl;
  goto label_172;

DEFLABEL (label_175)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_105)
  (* (--Rsp)) = Rvl;
  goto label_174;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define ENVIRONMENT_LABEL_4_3 17
#define DEBUGGING_LABEL_4_2 16
#define OBJECT_4_0 15
#define EXECUTE_CACHE_4_6 11
#define FREE_REFERENCE_4_0 14
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_4_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto lambda_2;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_9)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_4_7);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_11;
  Wrd6 = Wrd10;

DEFLABEL (label_10)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_8])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_5 7
#define LABEL_5_9 9
#define LABEL_5_11 11
#define LABEL_5_12 13
#define LABEL_5_13 15
#define LABEL_5_10 17
#define LABEL_5_15 19
#define LABEL_5_16 21
#define LABEL_5_17 23
#define LABEL_5_18 25
#define LABEL_5_19 27
#define LABEL_5_21 29
#define LABEL_5_23 31
#define LABEL_5_8 33
#define LABEL_5_25 35
#define LABEL_5_26 37
#define LABEL_5_27 39
#define LABEL_5_28 41
#define LABEL_5_29 43
#define LABEL_5_30 45
#define LABEL_5_31 47
#define LABEL_5_20 49
#define LABEL_5_22 51
#define LABEL_5_35 53
#define LABEL_5_36 55
#define LABEL_5_37 57
#define LABEL_5_38 59
#define LABEL_5_32 61
#define TAG_5_33 29
#define ENVIRONMENT_LABEL_5_3 81
#define DEBUGGING_LABEL_5_2 80
#define OBJECT_5_6 79
#define OBJECT_5_5 78
#define OBJECT_5_4 77
#define OBJECT_5_3 76
#define OBJECT_5_2 75
#define OBJECT_5_1 74
#define OBJECT_5_0 73
#define EXECUTE_CACHE_5_39 63
#define EXECUTE_CACHE_5_34 65
#define EXECUTE_CACHE_5_24 67
#define EXECUTE_CACHE_5_14 69
#define EXECUTE_CACHE_5_7 71
#define FREE_REFERENCES_LABEL_5_0 62
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd61;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd74;
  machine_word Wrd68;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_5_4);
      goto parse_define_form_35;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_37;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto label_41;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto label_38;

    case 5:
      current_block = (Rpc - LABEL_5_12);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_5_13);
      goto label_40;

    case 7:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_21;

    case 8:
      current_block = (Rpc - LABEL_5_15);
      goto label_43;

    case 9:
      current_block = (Rpc - LABEL_5_16);
      goto label_44;

    case 10:
      current_block = (Rpc - LABEL_5_17);
      goto label_45;

    case 11:
      current_block = (Rpc - LABEL_5_18);
      goto label_46;

    case 12:
      current_block = (Rpc - LABEL_5_19);
      goto label_47;

    case 13:
      current_block = (Rpc - LABEL_5_21);
      goto label_42;

    case 14:
      current_block = (Rpc - LABEL_5_23);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_3;

    case 16:
      current_block = (Rpc - LABEL_5_25);
      goto label_48;

    case 17:
      current_block = (Rpc - LABEL_5_26);
      goto label_49;

    case 18:
      current_block = (Rpc - LABEL_5_27);
      goto label_50;

    case 19:
      current_block = (Rpc - LABEL_5_28);
      goto label_51;

    case 20:
      current_block = (Rpc - LABEL_5_29);
      goto label_52;

    case 21:
      current_block = (Rpc - LABEL_5_30);
      goto label_53;

    case 22:
      current_block = (Rpc - LABEL_5_31);
      goto label_54;

    case 23:
      current_block = (Rpc - LABEL_5_20);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_5_22);
      goto continuation_30;

    case 25:
      current_block = (Rpc - LABEL_5_35);
      goto label_55;

    case 26:
      current_block = (Rpc - LABEL_5_36);
      goto label_56;

    case 27:
      current_block = (Rpc - LABEL_5_37);
      goto label_57;

    case 28:
      current_block = (Rpc - LABEL_5_38);
      goto label_58;

    case 29:
      current_block = (Rpc - LABEL_5_32);
      goto lambda_61;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_define_form_60)
DEFLABEL (parse_define_form_35)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_103;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_102)
  (Wrd17.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_81;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_80)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_79;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_78)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_77;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_76)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_14]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_5_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_64;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_63)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_62)
  (Wrd68.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd68.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_64)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_75;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_74)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_73;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_72)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_71;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_70)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_69;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [0]);

DEFLABEL (label_68)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_67;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd53.Obj) = ((Wrd54.pObj) [1]);

DEFLABEL (label_66)
  (Wrd60.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (current_block [OBJECT_5_4]);
  (* (--Rsp)) = (Wrd67.Obj);
  goto label_62;

DEFLABEL (label_67)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_47)
  (Wrd53.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_46)
  (Wrd46.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_45)
  (Wrd37.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_43)
  (Wrd21.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_39)
  (Wrd19.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_38)
  (Wrd10.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_82)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_101;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_100)
  (Wrd45.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_83;
  (Wrd74.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd74.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_24]));

DEFLABEL (label_83)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_99;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_98)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_97;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_96)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd26.uLng) == 1)
    goto label_89;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_34]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_23);
  (Wrd44.Obj) = Rvl;

DEFLABEL (label_88)
  (Rsp [1]) = (Wrd44.Obj);
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_87;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [1]);

DEFLABEL (label_86)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_85;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd60.Obj) = ((Wrd61.pObj) [0]);

DEFLABEL (label_84)
  (Rsp [0]) = (Wrd60.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd69.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_32])));
  Rhp += 2;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd69.pObj)));
  Wrd72 = Wrd69;
  (Wrd73.Obj) = (Rsp [1]);
  ((Wrd72.pObj) [2]) = (Wrd73.Obj);
  ((Wrd72.pObj) [3]) = (Wrd60.Obj);
  Rvl = (Wrd68.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_85)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_31]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_54)
  (Wrd60.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_30]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_53)
  (Wrd51.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_95;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_94)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_93;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd36.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_92)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_91;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd44.Obj) = ((Wrd45.pObj) [0]);

DEFLABEL (label_90)
  Rsp = (& (Rsp [1]));
  goto label_88;

DEFLABEL (label_91)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_29]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_52)
  (Wrd44.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_28]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_51)
  (Wrd36.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_50)
  (Wrd27.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_49)
  (Wrd19.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_25]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_48)
  (Wrd10.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_5_22);

DEFLABEL (label_112)
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_5_6]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_111;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_110)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_109;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_108)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_107;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_106)
  (Wrd37.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_105;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [0]);

DEFLABEL (label_104)
  (Wrd50.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (Rsp [0]) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_39]));

DEFLABEL (label_105)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_38]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_58)
  (Wrd41.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_37]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_57)
  (Wrd30.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_36]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 1);

DEFLABEL (label_56)
  (Wrd23.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_35]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 1);

DEFLABEL (label_55)
  (Wrd14.Obj) = Rvl;
  goto label_110;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_5_20);
  goto label_112;

DEFLABEL (lambda_61)
  CLOSURE_HEADER (LABEL_5_32);

DEFLABEL (lambda_12)
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

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_5 7
#define LABEL_6_9 9
#define LABEL_6_10 11
#define LABEL_6_11 13
#define LABEL_6_12 15
#define LABEL_6_13 17
#define LABEL_6_14 19
#define LABEL_6_15 21
#define LABEL_6_16 23
#define LABEL_6_17 25
#define LABEL_6_18 27
#define LABEL_6_22 29
#define LABEL_6_19 31
#define LABEL_6_23 33
#define LABEL_6_24 35
#define LABEL_6_8 37
#define LABEL_6_21 39
#define LABEL_6_29 41
#define LABEL_6_34 43
#define LABEL_6_27 45
#define LABEL_6_36 47
#define LABEL_6_37 49
#define LABEL_6_33 51
#define LABEL_6_32 53
#define LABEL_6_31 55
#define LABEL_6_30 57
#define LABEL_6_38 59
#define LABEL_6_39 61
#define LABEL_6_40 63
#define LABEL_6_41 65
#define LABEL_6_42 67
#define LABEL_6_43 69
#define LABEL_6_45 71
#define LABEL_6_46 73
#define ENVIRONMENT_LABEL_6_3 114
#define DEBUGGING_LABEL_6_2 113
#define OBJECT_6_19 112
#define OBJECT_6_18 111
#define OBJECT_6_17 110
#define OBJECT_6_16 109
#define OBJECT_6_15 108
#define OBJECT_6_14 107
#define OBJECT_6_13 106
#define OBJECT_6_12 105
#define OBJECT_6_11 104
#define OBJECT_6_10 103
#define OBJECT_6_9 102
#define OBJECT_6_8 101
#define OBJECT_6_7 100
#define OBJECT_6_6 99
#define OBJECT_6_5 98
#define OBJECT_6_4 97
#define OBJECT_6_3 96
#define OBJECT_6_2 95
#define OBJECT_6_1 94
#define OBJECT_6_0 93
#define EXECUTE_CACHE_6_44 75
#define EXECUTE_CACHE_6_35 77
#define EXECUTE_CACHE_6_28 79
#define EXECUTE_CACHE_6_26 81
#define EXECUTE_CACHE_6_25 83
#define EXECUTE_CACHE_6_20 85
#define EXECUTE_CACHE_6_7 87
#define FREE_REFERENCE_6_2 90
#define FREE_REFERENCE_6_1 91
#define FREE_REFERENCE_6_0 92
#define FREE_REFERENCES_LABEL_6_0 74
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd130;
  machine_word Wrd124;
  machine_word Wrd126;
  machine_word Wrd120;
  machine_word Wrd122;
  machine_word Wrd117;
  machine_word Wrd119;
  machine_word Wrd113;
  machine_word Wrd115;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd106;
  machine_word Wrd108;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd89;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd74;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd77;
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
      current_block = (Rpc - LABEL_6_4);
      goto lambda_95;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_97;

    case 2:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto label_106;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto label_98;

    case 5:
      current_block = (Rpc - LABEL_6_11);
      goto label_99;

    case 6:
      current_block = (Rpc - LABEL_6_12);
      goto label_100;

    case 7:
      current_block = (Rpc - LABEL_6_13);
      goto label_101;

    case 8:
      current_block = (Rpc - LABEL_6_14);
      goto label_102;

    case 9:
      current_block = (Rpc - LABEL_6_15);
      goto label_103;

    case 10:
      current_block = (Rpc - LABEL_6_16);
      goto label_104;

    case 11:
      current_block = (Rpc - LABEL_6_17);
      goto label_105;

    case 12:
      current_block = (Rpc - LABEL_6_18);
      goto continuation_19;

    case 13:
      current_block = (Rpc - LABEL_6_22);
      goto label_107;

    case 14:
      current_block = (Rpc - LABEL_6_19);
      goto lambda_18;

    case 15:
      current_block = (Rpc - LABEL_6_23);
      goto label_108;

    case 16:
      current_block = (Rpc - LABEL_6_24);
      goto label_109;

    case 17:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_3;

    case 18:
      current_block = (Rpc - LABEL_6_21);
      goto continuation_14;

    case 19:
      current_block = (Rpc - LABEL_6_29);
      goto label_110;

    case 20:
      current_block = (Rpc - LABEL_6_34);
      goto label_111;

    case 21:
      current_block = (Rpc - LABEL_6_27);
      goto continuation_4;

    case 22:
      current_block = (Rpc - LABEL_6_36);
      goto label_112;

    case 23:
      current_block = (Rpc - LABEL_6_37);
      goto label_113;

    case 24:
      current_block = (Rpc - LABEL_6_33);
      goto continuation_25;

    case 25:
      current_block = (Rpc - LABEL_6_32);
      goto continuation_36;

    case 26:
      current_block = (Rpc - LABEL_6_31);
      goto continuation_47;

    case 27:
      current_block = (Rpc - LABEL_6_30);
      goto continuation_59;

    case 28:
      current_block = (Rpc - LABEL_6_38);
      goto continuation_24;

    case 29:
      current_block = (Rpc - LABEL_6_39);
      goto continuation_35;

    case 30:
      current_block = (Rpc - LABEL_6_40);
      goto continuation_46;

    case 31:
      current_block = (Rpc - LABEL_6_41);
      goto continuation_58;

    case 32:
      current_block = (Rpc - LABEL_6_42);
      goto lambda_57;

    case 33:
      current_block = (Rpc - LABEL_6_43);
      goto continuation_56;

    case 34:
      current_block = (Rpc - LABEL_6_45);
      goto continuation_55;

    case 35:
      current_block = (Rpc - LABEL_6_46);
      goto continuation_60;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_115)
DEFLABEL (lambda_95)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_155;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_154)
  (Wrd17.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_146;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_145;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_144)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_143;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_142)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_141;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_140)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_139;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_138)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_137;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_136)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_135;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_134)
  (Wrd56.Obj) = (Rsp [2]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_133;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_132)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_131;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_130)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_20]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_6_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_129;
  Wrd9 = Wrd13;

DEFLABEL (label_128)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_20]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_6_21);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_127;
  Wrd5 = Wrd9;

DEFLABEL (label_126)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == (current_block [OBJECT_6_4]))
    goto label_125;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_6]))
    goto label_124;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_8]))
    goto label_123;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_9]))
    goto label_120;
  (Wrd19.Obj) = (current_block [OBJECT_6_11]);
  (Rsp [7]) = (Wrd19.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_119;
  Wrd21 = Wrd25;

DEFLABEL (label_118)
  (Rsp [8]) = (Wrd21.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_35]));

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_34])), (Wrd22.pObj));

DEFLABEL (label_111)
  (Wrd21.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_120)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_33]))));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_122)
  (Wrd31.Obj) = (current_block [OBJECT_6_10]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_121)
  (Wrd47.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd47.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_123)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_32]))));
  (* (--Rsp)) = (Wrd35.Obj);
  goto label_122;

DEFLABEL (label_124)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_6_7]);
  (* (--Rsp)) = (Wrd41.Obj);
  goto label_121;

DEFLABEL (label_125)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_30]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_6_5]);
  (* (--Rsp)) = (Wrd46.Obj);
  goto label_121;

DEFLABEL (label_127)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_29])), (Wrd6.pObj));

DEFLABEL (label_110)
  (Wrd5.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_22])), (Wrd10.pObj));

DEFLABEL (label_107)
  (Wrd9.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_105)
  (* (--Rsp)) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_104)
  (Wrd53.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_103)
  (* (--Rsp)) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_102)
  (Wrd39.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_101)
  (Wrd30.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_100)
  (* (--Rsp)) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_99)
  (Wrd16.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_98)
  (Wrd7.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_146)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd81.Obj) = (Rsp [1]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 1))
    goto label_153;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [1]);
  (* (--Rsp)) = (Wrd80.Obj);

DEFLABEL (label_152)
  (Wrd87.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd87.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_147;
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_26]));

DEFLABEL (label_147)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_28]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_27);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_151;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_150)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_2]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_149;
  Wrd14 = Wrd18;

DEFLABEL (label_148)
  (Wrd20.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_149)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_37])), (Wrd15.pObj));

DEFLABEL (label_113)
  (Wrd14.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_36]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_112)
  (* (--Rsp)) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_106)
  (* (--Rsp)) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_97)
  (* (--Rsp)) = Rvl;
  goto label_154;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_6_33);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_6_12]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_38]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_6_9]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd42.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_6_38);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_6_32);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_6_12]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_39]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_6_8]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd42.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_6_39);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_6_31);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_6_12]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_40]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_6_13]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_6_40);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_6_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_42]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_20]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_6_41);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_44]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_6_43);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_44]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_6_45);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_6_46);
  (Rsp [4]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (current_block [OBJECT_6_12]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd15.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd30.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd39.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd49.Obj) = (current_block [OBJECT_6_18]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd61.Obj) = (Rsp [9]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (Wrd72.Obj) = (current_block [OBJECT_6_19]);
  (Wrd73.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd72.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd71.pObj) = (& (Rhp [-2]));
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd71.pObj)));
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd80.pObj) = (& (Rhp [-2]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd80.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd84.pObj) = (& (Rhp [-2]));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd84.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd82.Obj);
  (Wrd89.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd89.pObj)));
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd93.pObj) = (& (Rhp [-2]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd93.pObj)));
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (Wrd97.pObj) = (& (Rhp [-2]));
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd97.pObj)));
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd95.Obj);
  (Wrd100.pObj) = (& (Rhp [-2]));
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd100.pObj)));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd98.Obj);
  (Wrd104.pObj) = (& (Rhp [-2]));
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd104.pObj)));
  (* (Rhp++)) = (Wrd102.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd108.pObj) = (& (Rhp [-2]));
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd108.pObj)));
  (* (Rhp++)) = (Wrd65.Obj);
  (* (Rhp++)) = (Wrd106.Obj);
  (Wrd112.pObj) = (& (Rhp [-2]));
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd112.pObj)));
  (* (Rhp++)) = (Wrd110.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd115.pObj) = (& (Rhp [-2]));
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd115.pObj)));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd113.Obj);
  (Wrd119.pObj) = (& (Rhp [-2]));
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd119.pObj)));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd117.Obj);
  (Wrd122.pObj) = (& (Rhp [-2]));
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd122.pObj)));
  (* (Rhp++)) = (Wrd120.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd126.pObj) = (& (Rhp [-2]));
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd126.pObj)));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd124.Obj);
  (Wrd130.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd130.pObj)));
  Rsp = (& (Rsp [13]));
  goto pop_return;

DEFLABEL (lambda_116)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_6_19);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_161;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_160)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_156;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_25]));

DEFLABEL (label_156)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_159;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_158)
  (Rsp [0]) = (Wrd16.Obj);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_157;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  Rvl = ((Wrd27.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_157)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_3]), 1);

DEFLABEL (label_159)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_109)
  (Wrd16.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_108)
  (Wrd5.Obj) = Rvl;
  goto label_160;

DEFLABEL (lambda_117)
DEFLABEL (lambda_57)
  INTERRUPT_CHECK (26, LABEL_6_42);
  (Wrd5.Obj) = (current_block [OBJECT_6_15]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_44]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_8 9
#define LABEL_7_9 11
#define LABEL_7_7 13
#define LABEL_7_12 15
#define LABEL_7_10 17
#define LABEL_7_13 19
#define LABEL_7_14 21
#define LABEL_7_16 23
#define ENVIRONMENT_LABEL_7_3 33
#define DEBUGGING_LABEL_7_2 32
#define OBJECT_7_2 31
#define OBJECT_7_1 30
#define OBJECT_7_0 29
#define EXECUTE_CACHE_7_15 25
#define EXECUTE_CACHE_7_11 27
#define FREE_REFERENCES_LABEL_7_0 24
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_7_4);
      goto normalize_let_bindings_13;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_7_12);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_7_10);
      goto lambda_6;

    case 8:
      current_block = (Rpc - LABEL_7_13);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_7_16);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (normalize_let_bindings_23)
DEFLABEL (normalize_let_bindings_13)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_34;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_33)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_32;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_31)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_30;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_29)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_28;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_27)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_26;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_25)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_19)
  (Wrd10.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_17)
  (Wrd24.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_33;

DEFLABEL (lambda_24)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_7_10);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_39;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_38)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_35;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (Wrd9.Obj) = (current_block [OBJECT_7_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_37;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_36)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_21)
  (Wrd10.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 11
#define DEBUGGING_LABEL_8_2 10
#define OBJECT_8_0 9
#define EXECUTE_CACHE_8_6 7
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 11
#define DEBUGGING_LABEL_9_2 10
#define OBJECT_9_0 9
#define EXECUTE_CACHE_9_6 7
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define LABEL_10_8 9
#define LABEL_10_9 11
#define LABEL_10_10 13
#define LABEL_10_11 15
#define LABEL_10_12 17
#define LABEL_10_14 19
#define LABEL_10_13 21
#define LABEL_10_15 23
#define ENVIRONMENT_LABEL_10_3 32
#define DEBUGGING_LABEL_10_2 31
#define OBJECT_10_3 30
#define OBJECT_10_2 29
#define OBJECT_10_1 28
#define OBJECT_10_0 27
#define EXECUTE_CACHE_10_6 25
#define FREE_REFERENCES_LABEL_10_0 24
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd53;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd50;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_10_4);
      goto expand_let__20;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_10_9);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_10_10);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_10_11);
      goto loop_17;

    case 7:
      current_block = (Rpc - LABEL_10_12);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_10_14);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_10_15);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expand_let__30)
DEFLABEL (expand_let__20)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_40;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_39)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_38;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_37)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_36;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_35)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_34;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_33)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 1)
    goto label_32;
  (Wrd43.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd48.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  Rdl = (& (Rsp [6]));
  goto loop_17;

DEFLABEL (label_34)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_24)
  (Wrd21.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_39;

DEFLABEL (loop_31)
DEFLABEL (loop_17)
  DLINK_INTERRUPT_CHECK (25, LABEL_10_11);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_47;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_46)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 1)
    goto label_41;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd31.Obj) = ((Wrd24.pObj) [3]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_41)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_45;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_44)
  Rdl = (& (Rsp [2]));
  goto loop_17;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_10_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_43;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_42)
  (Wrd28.Obj) = (current_block [OBJECT_10_3]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd29.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [3]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_43)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_28)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd12.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_27)
  (Wrd46.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd46.Obj));
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_26)
  (Wrd10.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd5.Obj) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_8 9
#define LABEL_11_9 11
#define LABEL_11_10 13
#define LABEL_11_11 15
#define LABEL_11_12 17
#define LABEL_11_13 19
#define LABEL_11_18 21
#define LABEL_11_15 23
#define LABEL_11_20 25
#define LABEL_11_21 27
#define LABEL_11_23 29
#define LABEL_11_16 31
#define LABEL_11_17 33
#define LABEL_11_22 35
#define LABEL_11_26 37
#define LABEL_11_31 39
#define LABEL_11_27 41
#define TAG_11_28 19
#define LABEL_11_32 43
#define LABEL_11_30 45
#define ENVIRONMENT_LABEL_11_3 71
#define DEBUGGING_LABEL_11_2 70
#define OBJECT_11_7 69
#define OBJECT_11_6 68
#define OBJECT_11_5 67
#define OBJECT_11_4 66
#define OBJECT_11_3 65
#define OBJECT_11_2 64
#define OBJECT_11_1 63
#define OBJECT_11_0 62
#define EXECUTE_CACHE_11_25 47
#define EXECUTE_CACHE_11_24 49
#define EXECUTE_CACHE_11_19 51
#define EXECUTE_CACHE_11_29 53
#define EXECUTE_CACHE_11_14 55
#define EXECUTE_CACHE_11_6 57
#define FREE_REFERENCE_11_1 60
#define FREE_REFERENCE_11_0 61
#define FREE_REFERENCES_LABEL_11_0 46
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd30;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_11_4);
      goto lambda_34;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_11_10);
      goto label_36;

    case 6:
      current_block = (Rpc - LABEL_11_11);
      goto label_37;

    case 7:
      current_block = (Rpc - LABEL_11_12);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_11_13);
      goto lambda_8;

    case 9:
      current_block = (Rpc - LABEL_11_18);
      goto label_38;

    case 10:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_31;

    case 11:
      current_block = (Rpc - LABEL_11_20);
      goto label_39;

    case 12:
      current_block = (Rpc - LABEL_11_21);
      goto label_40;

    case 13:
      current_block = (Rpc - LABEL_11_23);
      goto label_41;

    case 14:
      current_block = (Rpc - LABEL_11_16);
      goto lambda_30;

    case 15:
      current_block = (Rpc - LABEL_11_17);
      goto continuation_7;

    case 16:
      current_block = (Rpc - LABEL_11_22);
      goto continuation_19;

    case 17:
      current_block = (Rpc - LABEL_11_26);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_11_31);
      goto label_42;

    case 19:
      current_block = (Rpc - LABEL_11_27);
      goto lambda_48;

    case 20:
      current_block = (Rpc - LABEL_11_32);
      goto label_43;

    case 21:
      current_block = (Rpc - LABEL_11_30);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_45)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_60;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_59)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_58;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_57)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_11_15);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [6]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_56;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_55)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_54;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_53)
  (Wrd24.Obj) = (current_block [OBJECT_11_6]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_52;
  Wrd41 = Wrd45;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_11_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_27])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [10]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_29]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_11_26);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_30]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_50;
  Wrd26 = Wrd30;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_11_30);
  (Wrd9.Obj) = (current_block [OBJECT_11_7]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_31])), (Wrd27.pObj));

DEFLABEL (label_42)
  (Wrd26.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_23])), (Wrd42.pObj));

DEFLABEL (label_41)
  (Wrd41.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_40)
  (Wrd14.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_39)
  (Wrd5.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_5]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 1);

DEFLABEL (label_36)
  (Wrd5.Obj) = Rvl;
  goto label_59;

DEFLABEL (lambda_46)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_11_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_62;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_17);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_25]));

DEFLABEL (label_62)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_5]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (lambda_47)
DEFLABEL (lambda_30)
  INTERRUPT_CHECK (26, LABEL_11_16);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_24]));

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_11_27);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_64;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_63)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_11_6]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_32]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_5]), 1);

DEFLABEL (label_43)
  (Wrd5.Obj) = Rvl;
  goto label_63;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_8 9
#define LABEL_12_9 11
#define LABEL_12_10 13
#define LABEL_12_11 15
#define LABEL_12_12 17
#define LABEL_12_16 19
#define LABEL_12_17 21
#define LABEL_12_13 23
#define LABEL_12_15 25
#define LABEL_12_23 27
#define LABEL_12_18 29
#define LABEL_12_19 31
#define TAG_12_20 14
#define LABEL_12_22 33
#define ENVIRONMENT_LABEL_12_3 54
#define DEBUGGING_LABEL_12_2 53
#define OBJECT_12_7 52
#define OBJECT_12_6 51
#define OBJECT_12_5 50
#define OBJECT_12_4 49
#define OBJECT_12_3 48
#define OBJECT_12_2 47
#define OBJECT_12_1 46
#define OBJECT_12_0 45
#define EXECUTE_CACHE_12_24 35
#define EXECUTE_CACHE_12_21 37
#define EXECUTE_CACHE_12_14 39
#define EXECUTE_CACHE_12_6 41
#define FREE_REFERENCE_12_0 44
#define FREE_REFERENCES_LABEL_12_0 34
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_12_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_12_11);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_12_12);
      goto continuation_20;

    case 8:
      current_block = (Rpc - LABEL_12_16);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_12_17);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_12_13);
      goto lambda_19;

    case 11:
      current_block = (Rpc - LABEL_12_15);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_12_23);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_12_18);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_12_19);
      goto lambda_31;

    case 15:
      current_block = (Rpc - LABEL_12_22);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_30)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_42;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_41)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_40;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_39)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_12_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_38;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_37)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_36;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_35)
  (Wrd27.Obj) = (current_block [OBJECT_12_6]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd31.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_18]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd45.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_19])));
  Rhp += 1;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd45.pObj)));
  Wrd46 = Wrd45;
  (Wrd47.Obj) = (Rsp [8]);
  ((Wrd46.pObj) [2]) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_12_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_24]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_12_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_34;
  Wrd9 = Wrd13;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_22);
  (Wrd9.Obj) = (current_block [OBJECT_12_7]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_23])), (Wrd10.pObj));

DEFLABEL (label_28)
  (Wrd9.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 1);

DEFLABEL (label_27)
  (Wrd17.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 1);

DEFLABEL (label_26)
  (Wrd8.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_5]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_4]), 1);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_41;

DEFLABEL (lambda_32)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_12_13);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_21]));

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_12_19);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (Wrd12.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_8 9
#define LABEL_13_9 11
#define LABEL_13_10 13
#define LABEL_13_12 15
#define LABEL_13_11 17
#define LABEL_13_13 19
#define ENVIRONMENT_LABEL_13_3 30
#define DEBUGGING_LABEL_13_2 29
#define OBJECT_13_5 28
#define OBJECT_13_4 27
#define OBJECT_13_3 26
#define OBJECT_13_2 25
#define OBJECT_13_1 24
#define OBJECT_13_0 23
#define EXECUTE_CACHE_13_6 21
#define FREE_REFERENCES_LABEL_13_0 20
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd40;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_17;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto loop_13;

    case 5:
      current_block = (Rpc - LABEL_13_10);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_13_12);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_13_11);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_13_13);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_24)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_28;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_27)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 1)
    goto label_26;
  Rvl = (current_block [OBJECT_13_3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [7]));
  goto loop_13;

DEFLABEL (label_28)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (loop_25)
DEFLABEL (loop_13)
  DLINK_INTERRUPT_CHECK (25, LABEL_13_9);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_36;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_35)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 1)
    goto label_30;
  (Wrd19.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_29;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  Rvl = ((Wrd22.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 1);

DEFLABEL (label_30)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_34;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [1]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_33)
  Rdl = (& (Rsp [2]));
  goto loop_13;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_13_5]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_32;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_31)
  (Wrd29.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_32)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 1);

DEFLABEL (label_22)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd16.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_21)
  (Wrd40.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd40.Obj));
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_20)
  (Wrd10.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd5.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_17 7
#define LABEL_14_18 9
#define LABEL_14_19 11
#define LABEL_14_20 13
#define LABEL_14_21 15
#define LABEL_14_22 17
#define LABEL_14_7 19
#define TAG_14_8 8
#define LABEL_14_9 21
#define TAG_14_10 9
#define LABEL_14_24 23
#define LABEL_14_25 25
#define LABEL_14_26 27
#define LABEL_14_27 29
#define LABEL_14_29 31
#define LABEL_14_30 33
#define LABEL_14_31 35
#define LABEL_14_32 37
#define LABEL_14_33 39
#define LABEL_14_35 41
#define LABEL_14_36 43
#define LABEL_14_37 45
#define LABEL_14_38 47
#define LABEL_14_39 49
#define LABEL_14_40 51
#define LABEL_14_41 53
#define LABEL_14_43 55
#define LABEL_14_44 57
#define LABEL_14_45 59
#define LABEL_14_46 61
#define LABEL_14_11 63
#define TAG_14_12 30
#define LABEL_14_48 65
#define LABEL_14_49 67
#define LABEL_14_13 69
#define TAG_14_14 33
#define LABEL_14_51 71
#define LABEL_14_53 73
#define LABEL_14_55 75
#define LABEL_14_15 77
#define LABEL_14_56 79
#define LABEL_14_16 81
#define LABEL_14_59 83
#define LABEL_14_60 85
#define LABEL_14_23 87
#define LABEL_14_47 89
#define LABEL_14_42 91
#define LABEL_14_68 93
#define LABEL_14_69 95
#define LABEL_14_70 97
#define LABEL_14_34 99
#define LABEL_14_72 101
#define LABEL_14_73 103
#define LABEL_14_28 105
#define LABEL_14_75 107
#define LABEL_14_76 109
#define LABEL_14_77 111
#define LABEL_14_52 113
#define LABEL_14_80 115
#define LABEL_14_82 117
#define LABEL_14_57 119
#define LABEL_14_61 121
#define LABEL_14_62 123
#define LABEL_14_63 125
#define LABEL_14_85 127
#define LABEL_14_86 129
#define LABEL_14_87 131
#define LABEL_14_88 133
#define LABEL_14_64 135
#define LABEL_14_65 137
#define LABEL_14_67 139
#define LABEL_14_91 141
#define LABEL_14_92 143
#define LABEL_14_71 145
#define LABEL_14_94 147
#define LABEL_14_74 149
#define LABEL_14_83 151
#define LABEL_14_79 153
#define LABEL_14_84 155
#define LABEL_14_89 157
#define LABEL_14_90 159
#define LABEL_14_98 161
#define LABEL_14_93 163
#define LABEL_14_78 165
#define LABEL_14_96 167
#define LABEL_14_99 169
#define LABEL_14_97 171
#define LABEL_14_100 173
#define LABEL_14_101 175
#define ENVIRONMENT_LABEL_14_3 213
#define DEBUGGING_LABEL_14_2 212
#define OBJECT_14_20 211
#define OBJECT_14_19 210
#define OBJECT_14_18 209
#define OBJECT_14_17 208
#define OBJECT_14_16 207
#define OBJECT_14_15 206
#define OBJECT_14_14 205
#define OBJECT_14_13 204
#define OBJECT_14_12 203
#define OBJECT_14_11 202
#define OBJECT_14_10 201
#define OBJECT_14_9 200
#define OBJECT_14_8 199
#define OBJECT_14_7 198
#define OBJECT_14_6 197
#define OBJECT_14_5 196
#define OBJECT_14_4 195
#define OBJECT_14_3 194
#define OBJECT_14_2 193
#define OBJECT_14_1 192
#define OBJECT_14_0 191
#define EXECUTE_CACHE_14_95 177
#define EXECUTE_CACHE_14_81 179
#define EXECUTE_CACHE_14_66 181
#define EXECUTE_CACHE_14_58 183
#define EXECUTE_CACHE_14_54 185
#define EXECUTE_CACHE_14_50 187
#define EXECUTE_CACHE_14_6 189
#define FREE_REFERENCES_LABEL_14_0 176
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd20;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd182;
  machine_word Wrd126;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd107;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd157;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd153;
  machine_word Wrd150;
  machine_word Wrd144;
  machine_word Wrd145;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd135;
  machine_word Wrd137;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd134;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd181;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd177;
  machine_word Wrd174;
  machine_word Wrd166;
  machine_word Wrd168;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd165;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd200;
  machine_word Wrd192;
  machine_word Wrd194;
  machine_word Wrd196;
  machine_word Wrd195;
  machine_word Wrd187;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd115;
  machine_word Wrd116;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd106;
  machine_word Wrd108;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd105;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd92;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_14_4);
      goto lambda_128;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_17);
      goto label_130;

    case 3:
      current_block = (Rpc - LABEL_14_18);
      goto label_131;

    case 4:
      current_block = (Rpc - LABEL_14_19);
      goto label_132;

    case 5:
      current_block = (Rpc - LABEL_14_20);
      goto label_133;

    case 6:
      current_block = (Rpc - LABEL_14_21);
      goto label_134;

    case 7:
      current_block = (Rpc - LABEL_14_22);
      goto label_135;

    case 8:
      current_block = (Rpc - LABEL_14_7);
      goto lambda_180;

    case 9:
      current_block = (Rpc - LABEL_14_9);
      goto lambda_181;

    case 10:
      current_block = (Rpc - LABEL_14_24);
      goto label_136;

    case 11:
      current_block = (Rpc - LABEL_14_25);
      goto label_155;

    case 12:
      current_block = (Rpc - LABEL_14_26);
      goto label_137;

    case 13:
      current_block = (Rpc - LABEL_14_27);
      goto label_138;

    case 14:
      current_block = (Rpc - LABEL_14_29);
      goto label_153;

    case 15:
      current_block = (Rpc - LABEL_14_30);
      goto label_154;

    case 16:
      current_block = (Rpc - LABEL_14_31);
      goto label_139;

    case 17:
      current_block = (Rpc - LABEL_14_32);
      goto label_140;

    case 18:
      current_block = (Rpc - LABEL_14_33);
      goto label_141;

    case 19:
      current_block = (Rpc - LABEL_14_35);
      goto label_150;

    case 20:
      current_block = (Rpc - LABEL_14_36);
      goto label_151;

    case 21:
      current_block = (Rpc - LABEL_14_37);
      goto label_152;

    case 22:
      current_block = (Rpc - LABEL_14_38);
      goto label_142;

    case 23:
      current_block = (Rpc - LABEL_14_39);
      goto label_143;

    case 24:
      current_block = (Rpc - LABEL_14_40);
      goto label_144;

    case 25:
      current_block = (Rpc - LABEL_14_41);
      goto label_145;

    case 26:
      current_block = (Rpc - LABEL_14_43);
      goto label_146;

    case 27:
      current_block = (Rpc - LABEL_14_44);
      goto label_147;

    case 28:
      current_block = (Rpc - LABEL_14_45);
      goto label_148;

    case 29:
      current_block = (Rpc - LABEL_14_46);
      goto label_149;

    case 30:
      current_block = (Rpc - LABEL_14_11);
      goto lambda_182;

    case 31:
      current_block = (Rpc - LABEL_14_48);
      goto label_156;

    case 32:
      current_block = (Rpc - LABEL_14_49);
      goto label_157;

    case 33:
      current_block = (Rpc - LABEL_14_13);
      goto lambda_183;

    case 34:
      current_block = (Rpc - LABEL_14_51);
      goto label_158;

    case 35:
      current_block = (Rpc - LABEL_14_53);
      goto label_159;

    case 36:
      current_block = (Rpc - LABEL_14_55);
      goto continuation_101;

    case 37:
      current_block = (Rpc - LABEL_14_15);
      goto lambda_108;

    case 38:
      current_block = (Rpc - LABEL_14_56);
      goto label_160;

    case 39:
      current_block = (Rpc - LABEL_14_16);
      goto continuation_124;

    case 40:
      current_block = (Rpc - LABEL_14_59);
      goto label_161;

    case 41:
      current_block = (Rpc - LABEL_14_60);
      goto label_162;

    case 42:
      current_block = (Rpc - LABEL_14_23);
      goto continuation_95;

    case 43:
      current_block = (Rpc - LABEL_14_47);
      goto continuation_45;

    case 44:
      current_block = (Rpc - LABEL_14_42);
      goto continuation_64;

    case 45:
      current_block = (Rpc - LABEL_14_68);
      goto label_163;

    case 46:
      current_block = (Rpc - LABEL_14_69);
      goto label_164;

    case 47:
      current_block = (Rpc - LABEL_14_70);
      goto label_165;

    case 48:
      current_block = (Rpc - LABEL_14_34);
      goto continuation_78;

    case 49:
      current_block = (Rpc - LABEL_14_72);
      goto label_166;

    case 50:
      current_block = (Rpc - LABEL_14_73);
      goto label_167;

    case 51:
      current_block = (Rpc - LABEL_14_28);
      goto continuation_87;

    case 52:
      current_block = (Rpc - LABEL_14_75);
      goto label_168;

    case 53:
      current_block = (Rpc - LABEL_14_76);
      goto continuation_7;

    case 54:
      current_block = (Rpc - LABEL_14_77);
      goto label_174;

    case 55:
      current_block = (Rpc - LABEL_14_52);
      goto continuation_4;

    case 56:
      current_block = (Rpc - LABEL_14_80);
      goto label_170;

    case 57:
      current_block = (Rpc - LABEL_14_82);
      goto label_169;

    case 58:
      current_block = (Rpc - LABEL_14_57);
      goto continuation_104;

    case 59:
      current_block = (Rpc - LABEL_14_61);
      goto continuation_112;

    case 60:
      current_block = (Rpc - LABEL_14_62);
      goto continuation_94;

    case 61:
      current_block = (Rpc - LABEL_14_63);
      goto continuation_92;

    case 62:
      current_block = (Rpc - LABEL_14_85);
      goto continuation_13;

    case 63:
      current_block = (Rpc - LABEL_14_86);
      goto continuation_50;

    case 64:
      current_block = (Rpc - LABEL_14_87);
      goto continuation_69;

    case 65:
      current_block = (Rpc - LABEL_14_88);
      goto continuation_82;

    case 66:
      current_block = (Rpc - LABEL_14_64);
      goto continuation_44;

    case 67:
      current_block = (Rpc - LABEL_14_65);
      goto continuation_42;

    case 68:
      current_block = (Rpc - LABEL_14_67);
      goto continuation_59;

    case 69:
      current_block = (Rpc - LABEL_14_91);
      goto label_171;

    case 70:
      current_block = (Rpc - LABEL_14_92);
      goto label_172;

    case 71:
      current_block = (Rpc - LABEL_14_71);
      goto continuation_74;

    case 72:
      current_block = (Rpc - LABEL_14_94);
      goto label_173;

    case 73:
      current_block = (Rpc - LABEL_14_74);
      goto continuation_84;

    case 74:
      current_block = (Rpc - LABEL_14_83);
      goto continuation_5;

    case 75:
      current_block = (Rpc - LABEL_14_79);
      goto continuation_10;

    case 76:
      current_block = (Rpc - LABEL_14_84);
      goto continuation_111;

    case 77:
      current_block = (Rpc - LABEL_14_89);
      goto continuation_11;

    case 78:
      current_block = (Rpc - LABEL_14_90);
      goto continuation_55;

    case 79:
      current_block = (Rpc - LABEL_14_98);
      goto label_175;

    case 80:
      current_block = (Rpc - LABEL_14_93);
      goto continuation_71;

    case 81:
      current_block = (Rpc - LABEL_14_78);
      goto continuation_21;

    case 82:
      current_block = (Rpc - LABEL_14_96);
      goto continuation_17;

    case 83:
      current_block = (Rpc - LABEL_14_99);
      goto label_176;

    case 84:
      current_block = (Rpc - LABEL_14_97);
      goto continuation_52;

    case 85:
      current_block = (Rpc - LABEL_14_100);
      goto continuation_14;

    case 86:
      current_block = (Rpc - LABEL_14_101);
      goto label_177;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_179)
DEFLABEL (lambda_128)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
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
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_7])));
  Rhp += 2;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd39 = Wrd36;
  (Wrd40.Obj) = (Rsp [6]);
  ((Wrd39.pObj) [2]) = (Wrd40.Obj);
  ((Wrd39.pObj) [3]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_9])));
  Rhp += 3;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  Wrd47 = Wrd42;
  ((Wrd47.pObj) [2]) = (Wrd40.Obj);
  ((Wrd47.pObj) [3]) = (Wrd7.Obj);
  ((Wrd47.pObj) [4]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd50.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_11])));
  Rhp += 1;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd50.pObj)));
  ((Wrd50.pObj) [2]) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd54.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_13])));
  Rhp += 4;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd54.pObj)));
  Wrd61 = Wrd54;
  (Wrd62.Obj) = (Rsp [10]);
  ((Wrd61.pObj) [2]) = (Wrd62.Obj);
  ((Wrd61.pObj) [3]) = (Wrd40.Obj);
  ((Wrd61.pObj) [4]) = (Wrd19.Obj);
  ((Wrd61.pObj) [5]) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  ((Wrd30.pObj) [0]) = (Wrd53.Obj);
  ((Wrd24.pObj) [0]) = (Wrd49.Obj);
  ((Wrd18.pObj) [0]) = (Wrd41.Obj);
  ((Wrd12.pObj) [0]) = (Wrd35.Obj);
  Wrd76 = Wrd6;
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  ((Wrd76.pObj) [0]) = (Wrd78.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_16]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd86.Obj) = (Rsp [6]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_200;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd83.Obj) = ((Wrd85.pObj) [1]);

DEFLABEL (label_199)
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd94.uLng) == 1))
    goto label_198;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd92.Obj) = ((Wrd93.pObj) [1]);

DEFLABEL (label_197)
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd101.uLng) == 1))
    goto label_196;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd100.Obj) = ((Wrd99.pObj) [1]);
  (* (--Rsp)) = (Wrd100.Obj);

DEFLABEL (label_195)
  (Wrd109.Obj) = (Rsp [7]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 1))
    goto label_194;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd106.Obj) = ((Wrd108.pObj) [1]);

DEFLABEL (label_193)
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd117.uLng) == 1))
    goto label_192;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd115.Obj) = ((Wrd116.pObj) [1]);

DEFLABEL (label_191)
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd124.uLng) == 1))
    goto label_190;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [0]);
  (* (--Rsp)) = (Wrd123.Obj);

DEFLABEL (label_189)
  (Wrd129.Obj) = (Rsp [3]);
  (Wrd130.pObj) = (OBJECT_ADDRESS (Wrd129.Obj));
  (Wrd131.Obj) = ((Wrd130.pObj) [0]);
  (* (--Rsp)) = (Wrd131.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_14_16);
  (Wrd9.Obj) = (current_block [OBJECT_14_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_188;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_187)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_186;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_185)
  (Wrd29.Obj) = (current_block [OBJECT_14_4]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_61]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_14_61);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_14_4]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_84]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_14_13]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_14_84);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_186)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_60]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_162)
  (Wrd19.Obj) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_59]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_161)
  (Wrd10.Obj) = Rvl;
  goto label_187;

DEFLABEL (label_190)
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_22]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_135)
  (* (--Rsp)) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_21]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_134)
  (Wrd115.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_20]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_133)
  (Wrd106.Obj) = Rvl;
  goto label_193;

DEFLABEL (label_196)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_19]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_132)
  (* (--Rsp)) = Rvl;
  goto label_195;

DEFLABEL (label_198)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_131)
  (Wrd92.Obj) = Rvl;
  goto label_197;

DEFLABEL (label_200)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_130)
  (Wrd83.Obj) = Rvl;
  goto label_199;

DEFLABEL (lambda_180)
  CLOSURE_HEADER (LABEL_14_7);

DEFLABEL (lambda_100)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_14_23);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_14_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_14_10]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_62]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_63]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [3]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_14_63);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_202;
  (Wrd7.Obj) = (current_block [OBJECT_14_15]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_201;

DEFLABEL (label_202)
  (Wrd11.Obj) = (current_block [OBJECT_14_14]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_201)
DEFLABEL (label_203)
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_14_62);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_181)
  CLOSURE_HEADER (LABEL_14_9);

DEFLABEL (lambda_91)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_251;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_250)
  if ((Wrd5.Obj) == (current_block [OBJECT_14_4]))
    goto label_247;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_246;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_245)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_244;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_243)
  if ((Wrd24.Obj) == (current_block [OBJECT_14_4]))
    goto label_239;
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_238;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_237)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_236;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd41.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_235)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_234;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd48.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_233)
  if ((Wrd48.Obj) == (current_block [OBJECT_14_4]))
    goto label_227;
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_226;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_225)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_224;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd65.Obj) = ((Wrd66.pObj) [1]);

DEFLABEL (label_223)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_222;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd72.Obj) = ((Wrd73.pObj) [1]);

DEFLABEL (label_221)
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_220;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd79.Obj) = ((Wrd80.pObj) [1]);

DEFLABEL (label_219)
  if ((Wrd79.Obj) == (current_block [OBJECT_14_4]))
    goto label_209;
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_47]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd90.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (Rsp [2]);
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [2]);
  (* (--Rsp)) = (Wrd93.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_14_47);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_14_4]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_14_10]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_64]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_65]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_66]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_14_65);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_205;
  (Wrd7.Obj) = (current_block [OBJECT_14_18]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_204;

DEFLABEL (label_205)
  (Wrd11.Obj) = (current_block [OBJECT_14_17]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_204)
DEFLABEL (label_208)
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_14_64);

DEFLABEL (label_207)
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = (& (Rsp [3]));

DEFLABEL (label_206)
  (Wrd11.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_89]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_14_16]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_14_89);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_209)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_42]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd100.Obj) = (Rsp [2]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 1))
    goto label_218;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd97.Obj) = ((Wrd99.pObj) [1]);

DEFLABEL (label_217)
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd108.uLng) == 1))
    goto label_216;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd106.Obj) = ((Wrd107.pObj) [1]);

DEFLABEL (label_215)
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd115.uLng) == 1))
    goto label_214;
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd113.Obj) = ((Wrd114.pObj) [1]);

DEFLABEL (label_213)
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd122.uLng) == 1))
    goto label_211;
  (Wrd120.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd121.Obj) = ((Wrd120.pObj) [0]);
  (* (--Rsp)) = (Wrd121.Obj);

DEFLABEL (label_210)
  (Wrd182.Obj) = (Rsp [2]);
  (Wrd183.pObj) = (OBJECT_ADDRESS (Wrd182.Obj));
  (Wrd184.Obj) = ((Wrd183.pObj) [4]);
  (Wrd185.pObj) = (OBJECT_ADDRESS (Wrd184.Obj));
  (Wrd186.Obj) = ((Wrd185.pObj) [0]);
  (* (--Rsp)) = (Wrd186.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_211)
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_46]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_149)
DEFLABEL (label_212)
  (* (--Rsp)) = Rvl;
  goto label_210;

DEFLABEL (label_214)
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_45]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_148)
  (Wrd113.Obj) = Rvl;
  goto label_213;

DEFLABEL (label_216)
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_44]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_147)
  (Wrd106.Obj) = Rvl;
  goto label_215;

DEFLABEL (label_218)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_43]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_146)
  (Wrd97.Obj) = Rvl;
  goto label_217;

DEFLABEL (label_220)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_41]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_145)
  (Wrd79.Obj) = Rvl;
  goto label_219;

DEFLABEL (label_222)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_40]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_144)
  (Wrd72.Obj) = Rvl;
  goto label_221;

DEFLABEL (label_224)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_39]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_143)
  (Wrd65.Obj) = Rvl;
  goto label_223;

DEFLABEL (label_226)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_38]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_142)
  (Wrd56.Obj) = Rvl;
  goto label_225;

DEFLABEL (label_227)
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_34]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (Wrd138.Obj) = (Rsp [2]);
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if (! ((Wrd139.uLng) == 1))
    goto label_232;
  (Wrd137.pObj) = (OBJECT_ADDRESS (Wrd138.Obj));
  (Wrd135.Obj) = ((Wrd137.pObj) [1]);

DEFLABEL (label_231)
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if (! ((Wrd146.uLng) == 1))
    goto label_230;
  (Wrd145.pObj) = (OBJECT_ADDRESS (Wrd135.Obj));
  (Wrd144.Obj) = ((Wrd145.pObj) [1]);

DEFLABEL (label_229)
  (Wrd153.uLng) = (OBJECT_TYPE (Wrd144.Obj));
  if (! ((Wrd153.uLng) == 1))
    goto label_228;
  (Wrd151.pObj) = (OBJECT_ADDRESS (Wrd144.Obj));
  (Wrd152.Obj) = ((Wrd151.pObj) [0]);
  (* (--Rsp)) = (Wrd152.Obj);
  goto label_210;

DEFLABEL (label_228)
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_37]))));
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_152)
  goto label_212;

DEFLABEL (label_230)
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_36]))));
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_151)
  (Wrd144.Obj) = Rvl;
  goto label_229;

DEFLABEL (label_232)
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_35]))));
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_150)
  (Wrd135.Obj) = Rvl;
  goto label_231;

DEFLABEL (label_234)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_33]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_141)
  (Wrd48.Obj) = Rvl;
  goto label_233;

DEFLABEL (label_236)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_32]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_140)
  (Wrd41.Obj) = Rvl;
  goto label_235;

DEFLABEL (label_238)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_31]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_139)
  (Wrd32.Obj) = Rvl;
  goto label_237;

DEFLABEL (label_239)
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_28]))));
  (* (--Rsp)) = (Wrd165.Obj);
  (Wrd169.Obj) = (Rsp [2]);
  (Wrd170.uLng) = (OBJECT_TYPE (Wrd169.Obj));
  if (! ((Wrd170.uLng) == 1))
    goto label_242;
  (Wrd168.pObj) = (OBJECT_ADDRESS (Wrd169.Obj));
  (Wrd166.Obj) = ((Wrd168.pObj) [1]);

DEFLABEL (label_241)
  (Wrd177.uLng) = (OBJECT_TYPE (Wrd166.Obj));
  if (! ((Wrd177.uLng) == 1))
    goto label_240;
  (Wrd175.pObj) = (OBJECT_ADDRESS (Wrd166.Obj));
  (Wrd176.Obj) = ((Wrd175.pObj) [0]);
  (* (--Rsp)) = (Wrd176.Obj);
  goto label_210;

DEFLABEL (label_240)
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_30]))));
  (* (--Rsp)) = (Wrd181.Obj);
  (* (--Rsp)) = (Wrd166.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_154)
  goto label_212;

DEFLABEL (label_242)
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_29]))));
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd169.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_153)
  (Wrd166.Obj) = Rvl;
  goto label_241;

DEFLABEL (label_244)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_27]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_138)
  (Wrd24.Obj) = Rvl;
  goto label_243;

DEFLABEL (label_246)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_26]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_137)
  (Wrd15.Obj) = Rvl;
  goto label_245;

DEFLABEL (label_247)
  (Wrd188.Obj) = (Rsp [0]);
  (Wrd189.pObj) = (OBJECT_ADDRESS (Wrd188.Obj));
  (Wrd190.Obj) = ((Wrd189.pObj) [4]);
  (Wrd191.pObj) = (OBJECT_ADDRESS (Wrd190.Obj));
  (Wrd187.Obj) = ((Wrd191.pObj) [0]);
  (Rsp [0]) = (Wrd187.Obj);
  (Wrd195.Obj) = (Rsp [1]);
  (Wrd196.uLng) = (OBJECT_TYPE (Wrd195.Obj));
  if (! ((Wrd196.uLng) == 1))
    goto label_249;
  (Wrd194.pObj) = (OBJECT_ADDRESS (Wrd195.Obj));
  (Wrd192.Obj) = ((Wrd194.pObj) [0]);

DEFLABEL (label_248)
  (Rsp [1]) = (Wrd192.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_249)
  (Wrd200.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_25]))));
  (* (--Rsp)) = (Wrd200.Obj);
  (* (--Rsp)) = (Wrd195.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_155)
  (Wrd192.Obj) = Rvl;
  goto label_248;

DEFLABEL (label_251)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_136)
  (Wrd5.Obj) = Rvl;
  goto label_250;

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_14_42);
  (Wrd9.Obj) = (current_block [OBJECT_14_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_67]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_263;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_262)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_261;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_260)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_259;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_258)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [4]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_14_67);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_90]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_257;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_256)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_255;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_254)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [4]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_14_90);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_97]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_253;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_252)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [4]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_14_97);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_86]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_14_19]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_14_86);
  goto label_207;

DEFLABEL (label_253)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_98]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_175)
  (* (--Rsp)) = Rvl;
  goto label_252;

DEFLABEL (label_255)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_92]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_172)
  (* (--Rsp)) = Rvl;
  goto label_254;

DEFLABEL (label_257)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_91]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_171)
  (Wrd13.Obj) = Rvl;
  goto label_256;

DEFLABEL (label_259)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_70]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_165)
  (* (--Rsp)) = Rvl;
  goto label_258;

DEFLABEL (label_261)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_69]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_164)
  (Wrd22.Obj) = Rvl;
  goto label_260;

DEFLABEL (label_263)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_68]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_163)
  (Wrd13.Obj) = Rvl;
  goto label_262;

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_14_34);
  (Wrd9.Obj) = (current_block [OBJECT_14_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_71]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_269;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_268)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_267;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_266)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [4]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_14_71);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_93]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_265;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_264)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [4]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_14_93);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_87]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_14_19]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_14_87);
  goto label_207;

DEFLABEL (label_265)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_94]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_173)
  (* (--Rsp)) = Rvl;
  goto label_264;

DEFLABEL (label_267)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_73]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_167)
  (* (--Rsp)) = Rvl;
  goto label_266;

DEFLABEL (label_269)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_72]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_166)
  (Wrd13.Obj) = Rvl;
  goto label_268;

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_14_28);
  (Wrd9.Obj) = (current_block [OBJECT_14_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_74]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_271;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_270)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [4]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_14_74);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_88]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_14_19]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_14_88);
  goto label_207;

DEFLABEL (label_271)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_75]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_168)
  (* (--Rsp)) = Rvl;
  goto label_270;

DEFLABEL (lambda_182)
  CLOSURE_HEADER (LABEL_14_11);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_272;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_50]));

DEFLABEL (label_272)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_276;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_275)
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_274;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_273)
  (Rsp [2]) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_274)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_49]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_157)
  (Wrd22.Obj) = Rvl;
  goto label_273;

DEFLABEL (label_276)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_48]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_156)
  (Wrd13.Obj) = Rvl;
  goto label_275;

DEFLABEL (lambda_183)
  CLOSURE_HEADER (LABEL_14_13);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_294;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_293)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_14_4])))
    goto label_277;
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [5]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd31.pObj) [0]);
  (Rsp [1]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_277)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_52]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_292;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_291)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_54]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_52);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_285;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_76]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_290;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_289)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_83]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_14_12]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_83);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14_76);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_285;
  (Wrd40.Obj) = (Rsp [2]);
  if ((Wrd40.Obj) == (current_block [OBJECT_14_4]))
    goto label_286;

DEFLABEL (label_285)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_79]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_284;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_283)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_81]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14_79);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_278;
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_14_20]);
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_95]));

DEFLABEL (label_278)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_96]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_14_96);
  (Wrd9.Obj) = (current_block [OBJECT_14_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_282;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_281)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_100]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_14_11]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_14_100);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_85]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_280;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_279)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [4]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_14_85);
  (Wrd8.Obj) = Rvl;
  goto label_206;

DEFLABEL (label_280)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_101]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_177)
  (* (--Rsp)) = Rvl;
  goto label_279;

DEFLABEL (label_282)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_99]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_176)
  (* (--Rsp)) = Rvl;
  goto label_281;

DEFLABEL (label_284)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_80]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_170)
  (* (--Rsp)) = Rvl;
  goto label_283;

DEFLABEL (label_286)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_288;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [1]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_287)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_78]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_14_11]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [3]);
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [3]);
  (* (--Rsp)) = (Wrd57.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_14_78);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_288)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_77]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 1);

DEFLABEL (label_174)
  (* (--Rsp)) = Rvl;
  goto label_287;

DEFLABEL (label_290)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_82]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_169)
  (* (--Rsp)) = Rvl;
  goto label_289;

DEFLABEL (label_292)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_53]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_159)
  (* (--Rsp)) = Rvl;
  goto label_291;

DEFLABEL (label_294)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_51]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 1);

DEFLABEL (label_158)
  (Wrd5.Obj) = Rvl;
  goto label_293;

DEFLABEL (lambda_184)
DEFLABEL (lambda_108)
  INTERRUPT_CHECK (26, LABEL_14_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_14_5]);
  (Wrd37.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd37.Lng))))
    goto label_307;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_306;

DEFLABEL (label_305)
  (Wrd13.Obj) = (current_block [OBJECT_14_7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_295;
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_6]), 2);

DEFLABEL (label_295)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_297;
  (Wrd15.Obj) = (current_block [OBJECT_14_9]);
  goto label_296;

DEFLABEL (label_297)
  (Wrd15.Obj) = (current_block [OBJECT_14_8]);

DEFLABEL (label_296)
DEFLABEL (label_304)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_303)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_298;
  Rvl = (Wrd24.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_298)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_57]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_58]));

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_14_57);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_300;
  Rvl = Rvl;

DEFLABEL (label_299)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_300)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 2)
    goto label_302;
  if ((Wrd11.uLng) == 26)
    goto label_302;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_301;

DEFLABEL (label_302)
  Rvl = (current_block [OBJECT_14_8]);

DEFLABEL (label_301)
  goto label_299;

DEFLABEL (label_306)
  (Wrd33.Obj) = (current_block [OBJECT_14_8]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd33.Obj);
  goto label_303;

DEFLABEL (label_307)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_56]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_6]), 2);

DEFLABEL (label_160)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_305;
  goto label_306;

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_14_55);
  (* (--Rsp)) = Rvl;
  goto label_303;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_5 3
#define LABEL_15_4 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define LABEL_15_8 11
#define LABEL_15_10 13
#define LABEL_15_12 15
#define LABEL_15_13 17
#define LABEL_15_11 19
#define ENVIRONMENT_LABEL_15_3 33
#define DEBUGGING_LABEL_15_2 32
#define OBJECT_15_4 31
#define OBJECT_15_3 30
#define OBJECT_15_2 29
#define OBJECT_15_1 28
#define OBJECT_15_0 27
#define EXECUTE_CACHE_15_15 21
#define EXECUTE_CACHE_15_14 23
#define EXECUTE_CACHE_15_9 25
#define FREE_REFERENCES_LABEL_15_0 20
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_15_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_15_4);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_15_8);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_15_10);
      goto loop_11;

    case 6:
      current_block = (Rpc - LABEL_15_12);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_15_13);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_22)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_30;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_29)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 1)
    goto label_28;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_15_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_5);

DEFLABEL (label_28)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_27;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_26)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_25;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_24)
  (Wrd40.pObj) = (& (Rsp [3]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd40.pObj)));
  (Rsp [2]) = (Wrd42.Obj);
  Rdl = (& (Rsp [6]));
  goto loop_11;

DEFLABEL (label_25)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (loop_23)
DEFLABEL (loop_11)
  DLINK_INTERRUPT_CHECK (25, LABEL_15_10);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 1)
    goto label_34;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_15_3]))
    goto label_32;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  (Wrd10.Obj) = (current_block [OBJECT_15_4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_31)
DEFLABEL (label_33)
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [5]));
    SCHEME_OBJECT * MFUp2 = Rdl;
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (label_34)
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  if (! ((Wrd11.uLng) == 1))
    goto label_38;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_37)
  (Wrd32.Obj) = (Rsp [5]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_36;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_35)
  Rdl = (& (Rsp [3]));
  goto loop_11;

DEFLABEL (label_36)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 1);

DEFLABEL (label_20)
  (Wrd34.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd34.Obj));
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_19)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_8 9
#define LABEL_16_9 11
#define LABEL_16_10 13
#define LABEL_16_11 15
#define LABEL_16_12 17
#define LABEL_16_18 19
#define LABEL_16_19 21
#define LABEL_16_20 23
#define LABEL_16_13 25
#define LABEL_16_22 27
#define LABEL_16_23 29
#define LABEL_16_24 31
#define LABEL_16_25 33
#define LABEL_16_15 35
#define LABEL_16_16 37
#define LABEL_16_27 39
#define LABEL_16_28 41
#define LABEL_16_29 43
#define LABEL_16_17 45
#define LABEL_16_30 47
#define LABEL_16_31 49
#define LABEL_16_32 51
#define LABEL_16_26 53
#define ENVIRONMENT_LABEL_16_3 71
#define DEBUGGING_LABEL_16_2 70
#define OBJECT_16_6 69
#define OBJECT_16_5 68
#define OBJECT_16_4 67
#define OBJECT_16_3 66
#define OBJECT_16_2 65
#define OBJECT_16_1 64
#define OBJECT_16_0 63
#define EXECUTE_CACHE_16_33 55
#define EXECUTE_CACHE_16_21 57
#define EXECUTE_CACHE_16_14 59
#define EXECUTE_CACHE_16_6 61
#define FREE_REFERENCES_LABEL_16_0 54
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_16_4);
      goto lambda_34;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_36;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto label_37;

    case 5:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_29;

    case 6:
      current_block = (Rpc - LABEL_16_11);
      goto continuation_27;

    case 7:
      current_block = (Rpc - LABEL_16_12);
      goto continuation_24;

    case 8:
      current_block = (Rpc - LABEL_16_18);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_16_19);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_16_20);
      goto label_40;

    case 11:
      current_block = (Rpc - LABEL_16_13);
      goto lambda_23;

    case 12:
      current_block = (Rpc - LABEL_16_22);
      goto label_41;

    case 13:
      current_block = (Rpc - LABEL_16_23);
      goto label_42;

    case 14:
      current_block = (Rpc - LABEL_16_24);
      goto label_43;

    case 15:
      current_block = (Rpc - LABEL_16_25);
      goto label_44;

    case 16:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_16_16);
      goto lambda_9;

    case 18:
      current_block = (Rpc - LABEL_16_27);
      goto label_45;

    case 19:
      current_block = (Rpc - LABEL_16_28);
      goto label_46;

    case 20:
      current_block = (Rpc - LABEL_16_29);
      goto label_47;

    case 21:
      current_block = (Rpc - LABEL_16_17);
      goto continuation_14;

    case 22:
      current_block = (Rpc - LABEL_16_30);
      goto label_48;

    case 23:
      current_block = (Rpc - LABEL_16_31);
      goto label_49;

    case 24:
      current_block = (Rpc - LABEL_16_32);
      goto label_50;

    case 25:
      current_block = (Rpc - LABEL_16_26);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_52)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_70;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_69)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_68;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_67)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_14]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_16_12);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_16_4]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_66;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_65)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_64;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_63)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_62;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_21]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_16_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16_17);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_60;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_59)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_58;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_57)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_56;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_55)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_33]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_16_10);
  (Wrd9.Obj) = (current_block [OBJECT_16_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_26]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_16_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_16_26);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_32]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 1);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_31]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_49)
  (Wrd22.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_30]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_48)
  (Wrd13.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_19]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_39)
  (Wrd23.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_38)
  (Wrd14.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_36)
  (Wrd5.Obj) = Rvl;
  goto label_69;

DEFLABEL (lambda_53)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_16_13);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_82;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_81)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_80;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_79)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_74;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 1);

DEFLABEL (label_72)
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  Rvl = ((Wrd24.pObj) [0]);

DEFLABEL (label_73)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_78;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_77)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_76;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_75)
  (Rsp [0]) = (Wrd37.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_71;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  Rvl = ((Wrd46.pObj) [0]);
  goto label_73;

DEFLABEL (label_76)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_25]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_44)
  (Wrd37.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_24]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_43)
  (Wrd28.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_42)
  (Wrd14.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_41)
  (Wrd5.Obj) = Rvl;
  goto label_81;

DEFLABEL (lambda_54)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_16_16);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_88;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_87)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_86;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_85)
  (Wrd24.Obj) = (current_block [OBJECT_16_4]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_84;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_83)
  (Wrd34.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_29]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 1);

DEFLABEL (label_47)
  (Wrd25.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_28]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 1);

DEFLABEL (label_46)
  (Wrd14.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_27]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_45)
  (Wrd5.Obj) = Rvl;
  goto label_87;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_5 3
#define LABEL_17_6 5
#define LABEL_17_8 7
#define LABEL_17_4 9
#define LABEL_17_10 11
#define LABEL_17_13 13
#define LABEL_17_14 15
#define LABEL_17_15 17
#define LABEL_17_16 19
#define LABEL_17_17 21
#define LABEL_17_19 23
#define LABEL_17_20 25
#define LABEL_17_22 27
#define LABEL_17_23 29
#define LABEL_17_24 31
#define LABEL_17_25 33
#define LABEL_17_7 35
#define LABEL_17_26 37
#define LABEL_17_28 39
#define LABEL_17_29 41
#define LABEL_17_30 43
#define LABEL_17_32 45
#define LABEL_17_33 47
#define LABEL_17_31 49
#define LABEL_17_34 51
#define LABEL_17_35 53
#define LABEL_17_36 55
#define LABEL_17_37 57
#define LABEL_17_38 59
#define LABEL_17_39 61
#define LABEL_17_40 63
#define LABEL_17_27 65
#define LABEL_17_42 67
#define LABEL_17_44 69
#define LABEL_17_45 71
#define LABEL_17_46 73
#define LABEL_17_43 75
#define LABEL_17_47 77
#define LABEL_17_21 79
#define LABEL_17_18 81
#define LABEL_17_41 83
#define LABEL_17_49 85
#define LABEL_17_50 87
#define LABEL_17_51 89
#define LABEL_17_48 91
#define LABEL_17_52 93
#define LABEL_17_53 95
#define LABEL_17_54 97
#define ENVIRONMENT_LABEL_17_3 120
#define DEBUGGING_LABEL_17_2 119
#define OBJECT_17_13 118
#define OBJECT_17_12 117
#define OBJECT_17_11 116
#define OBJECT_17_10 115
#define OBJECT_17_9 114
#define OBJECT_17_8 113
#define OBJECT_17_7 112
#define OBJECT_17_6 111
#define OBJECT_17_5 110
#define OBJECT_17_4 109
#define OBJECT_17_3 108
#define OBJECT_17_2 107
#define OBJECT_17_1 106
#define OBJECT_17_0 105
#define EXECUTE_CACHE_17_12 99
#define EXECUTE_CACHE_17_11 101
#define EXECUTE_CACHE_17_9 103
#define FREE_REFERENCES_LABEL_17_0 98
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd41;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd66;
  machine_word Wrd95;
  machine_word Wrd85;
  machine_word Wrd86;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd157;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd131;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd74;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd112;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd96;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd77;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd148;
  machine_word Wrd145;
  machine_word Wrd137;
  machine_word Wrd139;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd136;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_17_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_17_8);
      goto label_73;

    case 3:
      current_block = (Rpc - LABEL_17_4);
      goto expand_cond_clause_70;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto label_72;

    case 5:
      current_block = (Rpc - LABEL_17_13);
      goto continuation_66;

    case 6:
      current_block = (Rpc - LABEL_17_14);
      goto continuation_57;

    case 7:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_62;

    case 8:
      current_block = (Rpc - LABEL_17_16);
      goto label_86;

    case 9:
      current_block = (Rpc - LABEL_17_17);
      goto label_87;

    case 10:
      current_block = (Rpc - LABEL_17_19);
      goto continuation_67;

    case 11:
      current_block = (Rpc - LABEL_17_20);
      goto label_85;

    case 12:
      current_block = (Rpc - LABEL_17_22);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_17_23);
      goto label_79;

    case 14:
      current_block = (Rpc - LABEL_17_24);
      goto label_80;

    case 15:
      current_block = (Rpc - LABEL_17_25);
      goto label_81;

    case 16:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_5;

    case 17:
      current_block = (Rpc - LABEL_17_26);
      goto label_75;

    case 18:
      current_block = (Rpc - LABEL_17_28);
      goto label_77;

    case 19:
      current_block = (Rpc - LABEL_17_29);
      goto label_78;

    case 20:
      current_block = (Rpc - LABEL_17_30);
      goto label_76;

    case 21:
      current_block = (Rpc - LABEL_17_32);
      goto label_74;

    case 22:
      current_block = (Rpc - LABEL_17_33);
      goto continuation_6;

    case 23:
      current_block = (Rpc - LABEL_17_31);
      goto continuation_53;

    case 24:
      current_block = (Rpc - LABEL_17_34);
      goto continuation_33;

    case 25:
      current_block = (Rpc - LABEL_17_35);
      goto continuation_17;

    case 26:
      current_block = (Rpc - LABEL_17_36);
      goto label_88;

    case 27:
      current_block = (Rpc - LABEL_17_37);
      goto label_89;

    case 28:
      current_block = (Rpc - LABEL_17_38);
      goto label_90;

    case 29:
      current_block = (Rpc - LABEL_17_39);
      goto label_91;

    case 30:
      current_block = (Rpc - LABEL_17_40);
      goto label_92;

    case 31:
      current_block = (Rpc - LABEL_17_27);
      goto continuation_13;

    case 32:
      current_block = (Rpc - LABEL_17_42);
      goto label_84;

    case 33:
      current_block = (Rpc - LABEL_17_44);
      goto label_82;

    case 34:
      current_block = (Rpc - LABEL_17_45);
      goto label_83;

    case 35:
      current_block = (Rpc - LABEL_17_46);
      goto continuation_14;

    case 36:
      current_block = (Rpc - LABEL_17_43);
      goto continuation_20;

    case 37:
      current_block = (Rpc - LABEL_17_47);
      goto label_93;

    case 38:
      current_block = (Rpc - LABEL_17_21);
      goto continuation_68;

    case 39:
      current_block = (Rpc - LABEL_17_18);
      goto continuation_63;

    case 40:
      current_block = (Rpc - LABEL_17_41);
      goto continuation_34;

    case 41:
      current_block = (Rpc - LABEL_17_49);
      goto label_94;

    case 42:
      current_block = (Rpc - LABEL_17_50);
      goto label_95;

    case 43:
      current_block = (Rpc - LABEL_17_51);
      goto label_96;

    case 44:
      current_block = (Rpc - LABEL_17_48);
      goto continuation_18;

    case 45:
      current_block = (Rpc - LABEL_17_52);
      goto continuation_40;

    case 46:
      current_block = (Rpc - LABEL_17_53);
      goto label_97;

    case 47:
      current_block = (Rpc - LABEL_17_54);
      goto continuation_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expand_cond_clause_99)
DEFLABEL (expand_cond_clause_70)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_119;

DEFLABEL (label_118)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_6);

DEFLABEL (label_117)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_116;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_115)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_103;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_102;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_101)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_33]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_17_9]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_100)
  (Wrd157.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd157.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_102)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_32]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_74)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_103)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_114;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_113)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd33.uLng) == 1)
    goto label_107;
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_106;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [0]);

DEFLABEL (label_105)
  (Wrd46.Obj) = (Rsp [4]);
  (Wrd47.Obj) = (current_block [OBJECT_17_7]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_31]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_17_8]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_104)
  (Wrd131.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd131.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_106)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_30]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_76)
  (Wrd34.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_107)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_27]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_112;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [1]);

DEFLABEL (label_111)
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_109;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (* (--Rsp)) = (Wrd69.Obj);

DEFLABEL (label_108)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_9]));

DEFLABEL (label_109)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_29]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_78)
DEFLABEL (label_110)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (label_112)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_28]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_77)
  (Wrd59.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_26]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_75)
  (Wrd24.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_73)
  (* (--Rsp)) = Rvl;
  goto label_115;

DEFLABEL (label_119)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_121;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_120)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_118;
  goto label_117;

DEFLABEL (label_121)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_120;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_17_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_103;
  (Wrd77.Obj) = (Rsp [3]);
  if (! ((Wrd77.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_132;
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd116.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd116.Obj);
  (Wrd117.Obj) = (current_block [OBJECT_17_5]);
  (* (--Rsp)) = (Wrd117.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_17_14);

DEFLABEL (label_132)
  (Wrd82.Obj) = (Rsp [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_131;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd79.Obj) = ((Wrd81.pObj) [1]);

DEFLABEL (label_130)
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd88.uLng) == 1)
    goto label_126;

DEFLABEL (label_125)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_19]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd92.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd93.Obj) = (current_block [OBJECT_17_6]);
  (* (--Rsp)) = (Wrd93.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_17_19);

DEFLABEL (label_124)
  (Wrd121.Obj) = (Rsp [0]);
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd121.Obj));
  if (! ((Wrd122.uLng) == 1))
    goto label_123;
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd121.Obj));
  (Wrd120.Obj) = ((Wrd119.pObj) [1]);
  (* (--Rsp)) = (Wrd120.Obj);

DEFLABEL (label_122)
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_21]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (Wrd130.Obj) = (current_block [OBJECT_17_4]);
  (* (--Rsp)) = (Wrd130.Obj);
  goto label_104;

DEFLABEL (label_123)
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_20]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_122;

DEFLABEL (label_126)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd100.Obj) = (Rsp [1]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 1))
    goto label_129;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd97.Obj) = ((Wrd99.pObj) [1]);

DEFLABEL (label_128)
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd108.uLng) == 1))
    goto label_127;
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd107.Obj) = ((Wrd106.pObj) [0]);
  (* (--Rsp)) = (Wrd107.Obj);
  goto label_108;

DEFLABEL (label_127)
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_25]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_81)
  goto label_110;

DEFLABEL (label_129)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_24]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_80)
  (Wrd97.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_23]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_79)
  (Wrd79.Obj) = Rvl;
  goto label_130;

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_17_31);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_154;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_35]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_162;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_161)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_160;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_159)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_46]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_17_3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd30.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_17_46);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_17_35);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_154;
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_153;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_152)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_151;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_150)
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd63.uLng) == 1)
    goto label_143;

DEFLABEL (label_142)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_34]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (current_block [OBJECT_17_11]);
  (* (--Rsp)) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_17_34);

DEFLABEL (label_141)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_41]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd96.Obj) = (current_block [OBJECT_17_10]);
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd97.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd97.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_17_41);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_140;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_139)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_138;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_137)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_136;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_135)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.Obj) = (current_block [OBJECT_17_7]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd39.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_52]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_17_12]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd52.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_17_52);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_17_7]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_134;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_133)
  (Wrd26.Obj) = (current_block [OBJECT_17_7]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd35.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_54]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_17_13]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd43.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_17_54);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_134)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_53]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_97)
  (Wrd14.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_51]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_96)
  (Wrd21.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_50]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_95)
  (Wrd14.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_49]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_94)
  (Wrd5.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_143)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_149;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd69.Obj) = ((Wrd71.pObj) [1]);

DEFLABEL (label_148)
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_147;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd78.Obj) = ((Wrd79.pObj) [1]);

DEFLABEL (label_146)
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_145;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd85.Obj) = ((Wrd86.pObj) [1]);

DEFLABEL (label_144)
  if ((Wrd85.Obj) == (current_block [OBJECT_17_7]))
    goto label_141;
  goto label_142;

DEFLABEL (label_145)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_40]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_92)
  (Wrd85.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_39]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_91)
  (Wrd78.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_38]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_90)
  (Wrd69.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_37]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_89)
  (Wrd56.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_36]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_88)
  (Wrd47.Obj) = Rvl;
  goto label_152;

DEFLABEL (label_154)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_158;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_157)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_43]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_17_4]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd44.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_17_43);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.Obj) = (current_block [OBJECT_17_7]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_156;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_155)
  (Wrd27.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_48]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_17_12]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd35.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_17_48);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_156)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_47]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_93)
  (Wrd18.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_42]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_45]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_83)
  (* (--Rsp)) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_44]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_82)
  (Wrd10.Obj) = Rvl;
  goto label_161;

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_17_21);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_17_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_124;
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd140.Obj) = (Rsp [1]);
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd140.Obj));
  if (! ((Wrd141.uLng) == 1))
    goto label_166;
  (Wrd139.pObj) = (OBJECT_ADDRESS (Wrd140.Obj));
  (Wrd137.Obj) = ((Wrd139.pObj) [1]);

DEFLABEL (label_165)
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if (! ((Wrd148.uLng) == 1))
    goto label_164;
  (Wrd146.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd147.Obj) = ((Wrd146.pObj) [0]);
  (* (--Rsp)) = (Wrd147.Obj);

DEFLABEL (label_163)
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (Wrd156.Obj) = (current_block [OBJECT_17_3]);
  (* (--Rsp)) = (Wrd156.Obj);
  goto label_100;

DEFLABEL (label_164)
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_87)
  (* (--Rsp)) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 1);

DEFLABEL (label_86)
  (Wrd137.Obj) = Rvl;
  goto label_165;

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_17_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_17_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_124;
  goto label_125;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_15 5
#define LABEL_18_17 7
#define LABEL_18_18 9
#define LABEL_18_13 11
#define TAG_18_14 4
#define LABEL_18_19 13
#define LABEL_18_20 15
#define LABEL_18_21 17
#define LABEL_18_22 19
#define LABEL_18_24 21
#define LABEL_18_11 23
#define TAG_18_12 10
#define LABEL_18_26 25
#define LABEL_18_9 27
#define TAG_18_10 12
#define LABEL_18_30 29
#define LABEL_18_7 31
#define TAG_18_8 14
#define LABEL_18_5 33
#define TAG_18_6 15
#define LABEL_18_28 35
#define TAG_18_29 16
#define LABEL_18_40 37
#define LABEL_18_31 39
#define TAG_18_32 18
#define LABEL_18_33 41
#define LABEL_18_37 43
#define LABEL_18_35 45
#define LABEL_18_23 47
#define LABEL_18_43 49
#define LABEL_18_45 51
#define LABEL_18_25 53
#define LABEL_18_46 55
#define LABEL_18_38 57
#define TAG_18_39 27
#define LABEL_18_41 59
#define LABEL_18_42 61
#define LABEL_18_56 63
#define LABEL_18_58 65
#define LABEL_18_59 67
#define LABEL_18_60 69
#define LABEL_18_61 71
#define LABEL_18_44 73
#define LABEL_18_54 75
#define LABEL_18_53 77
#define LABEL_18_51 79
#define LABEL_18_55 81
#define LABEL_18_63 83
#define LABEL_18_64 85
#define LABEL_18_65 87
#define LABEL_18_66 89
#define LABEL_18_57 91
#define LABEL_18_62 93
#define LABEL_18_47 95
#define LABEL_18_48 97
#define TAG_18_49 47
#define LABEL_18_67 99
#define ENVIRONMENT_LABEL_18_3 129
#define DEBUGGING_LABEL_18_2 128
#define OBJECT_18_14 127
#define OBJECT_18_13 126
#define OBJECT_18_12 125
#define OBJECT_18_11 124
#define OBJECT_18_10 123
#define OBJECT_18_9 122
#define OBJECT_18_8 121
#define OBJECT_18_7 120
#define OBJECT_18_6 119
#define OBJECT_18_5 118
#define OBJECT_18_4 117
#define OBJECT_18_3 116
#define OBJECT_18_2 115
#define OBJECT_18_1 114
#define OBJECT_18_0 113
#define EXECUTE_CACHE_18_52 101
#define EXECUTE_CACHE_18_50 103
#define EXECUTE_CACHE_18_36 105
#define EXECUTE_CACHE_18_34 107
#define EXECUTE_CACHE_18_27 109
#define EXECUTE_CACHE_18_16 111
#define FREE_REFERENCES_LABEL_18_0 100
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd10;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
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
      goto lambda_75;

    case 1:
      current_block = (Rpc - LABEL_18_15);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_17);
      goto label_77;

    case 3:
      current_block = (Rpc - LABEL_18_18);
      goto label_78;

    case 4:
      current_block = (Rpc - LABEL_18_13);
      goto descend_quasiquote_5;

    case 5:
      current_block = (Rpc - LABEL_18_19);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_18_20);
      goto label_81;

    case 7:
      current_block = (Rpc - LABEL_18_21);
      goto label_82;

    case 8:
      current_block = (Rpc - LABEL_18_22);
      goto label_83;

    case 9:
      current_block = (Rpc - LABEL_18_24);
      goto label_84;

    case 10:
      current_block = (Rpc - LABEL_18_11);
      goto descend_quasiquote_pair_32;

    case 11:
      current_block = (Rpc - LABEL_18_26);
      goto label_79;

    case 12:
      current_block = (Rpc - LABEL_18_9);
      goto descend_quasiquote_pair__58;

    case 13:
      current_block = (Rpc - LABEL_18_30);
      goto label_80;

    case 14:
      current_block = (Rpc - LABEL_18_7);
      goto descend_quasiquote_vector_66;

    case 15:
      current_block = (Rpc - LABEL_18_5);
      goto finalize_quasiquote_99;

    case 16:
      current_block = (Rpc - LABEL_18_28);
      goto lambda_104;

    case 17:
      current_block = (Rpc - LABEL_18_40);
      goto label_85;

    case 18:
      current_block = (Rpc - LABEL_18_31);
      goto lambda_105;

    case 19:
      current_block = (Rpc - LABEL_18_33);
      goto continuation_59;

    case 20:
      current_block = (Rpc - LABEL_18_37);
      goto continuation_70;

    case 21:
      current_block = (Rpc - LABEL_18_35);
      goto continuation_71;

    case 22:
      current_block = (Rpc - LABEL_18_23);
      goto continuation_16;

    case 23:
      current_block = (Rpc - LABEL_18_43);
      goto label_87;

    case 24:
      current_block = (Rpc - LABEL_18_45);
      goto label_86;

    case 25:
      current_block = (Rpc - LABEL_18_25);
      goto continuation_14;

    case 26:
      current_block = (Rpc - LABEL_18_46);
      goto continuation_39;

    case 27:
      current_block = (Rpc - LABEL_18_38);
      goto lambda_106;

    case 28:
      current_block = (Rpc - LABEL_18_41);
      goto continuation_62;

    case 29:
      current_block = (Rpc - LABEL_18_42);
      goto continuation_19;

    case 30:
      current_block = (Rpc - LABEL_18_56);
      goto label_92;

    case 31:
      current_block = (Rpc - LABEL_18_58);
      goto label_88;

    case 32:
      current_block = (Rpc - LABEL_18_59);
      goto label_89;

    case 33:
      current_block = (Rpc - LABEL_18_60);
      goto label_90;

    case 34:
      current_block = (Rpc - LABEL_18_61);
      goto label_91;

    case 35:
      current_block = (Rpc - LABEL_18_44);
      goto continuation_17;

    case 36:
      current_block = (Rpc - LABEL_18_54);
      goto continuation_42;

    case 37:
      current_block = (Rpc - LABEL_18_53);
      goto continuation_45;

    case 38:
      current_block = (Rpc - LABEL_18_51);
      goto continuation_53;

    case 39:
      current_block = (Rpc - LABEL_18_55);
      goto continuation_22;

    case 40:
      current_block = (Rpc - LABEL_18_63);
      goto label_93;

    case 41:
      current_block = (Rpc - LABEL_18_64);
      goto label_94;

    case 42:
      current_block = (Rpc - LABEL_18_65);
      goto label_95;

    case 43:
      current_block = (Rpc - LABEL_18_66);
      goto label_96;

    case 44:
      current_block = (Rpc - LABEL_18_57);
      goto continuation_20;

    case 45:
      current_block = (Rpc - LABEL_18_62);
      goto continuation_41;

    case 46:
      current_block = (Rpc - LABEL_18_47);
      goto continuation_49;

    case 47:
      current_block = (Rpc - LABEL_18_48);
      goto lambda_107;

    case 48:
      current_block = (Rpc - LABEL_18_67);
      goto continuation_47;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_98)
DEFLABEL (lambda_75)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd48.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 1;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_7])));
  Rhp += 2;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd44.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_9])));
  Rhp += 2;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_11])));
  Rhp += 3;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd40.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_13])));
  Rhp += 2;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd41.Obj);
  Wrd14 = Wrd40;
  ((Wrd14.pObj) [2]) = (Wrd47.Obj);
  ((Wrd14.pObj) [3]) = (Wrd43.Obj);
  Wrd23 = Wrd42;
  ((Wrd23.pObj) [2]) = (Wrd45.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  ((Wrd23.pObj) [3]) = (Wrd21.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  ((Wrd23.pObj) [4]) = (Wrd18.Obj);
  Wrd29 = Wrd44;
  ((Wrd29.pObj) [2]) = (Wrd49.Obj);
  ((Wrd29.pObj) [3]) = (Wrd41.Obj);
  Wrd35 = Wrd46;
  ((Wrd35.pObj) [2]) = (Wrd49.Obj);
  ((Wrd35.pObj) [3]) = (Wrd41.Obj);
  ((Wrd48.pObj) [2]) = (Wrd18.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_16]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_15);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_111;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_110)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_109;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_108)
  (Rsp [5]) = (Wrd14.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (Rsp [7]) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_18_3]);
  (Rsp [6]) = (Wrd23.Obj);
  Rsp = (& (Rsp [4]));
  goto descend_quasiquote_5;

DEFLABEL (label_109)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_78)
  (Wrd14.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_77)
  (Wrd5.Obj) = Rvl;
  goto label_110;

DEFLABEL (descend_quasiquote_103)
DEFLABEL (descend_quasiquote_5)
  INTERRUPT_CHECK (26, LABEL_18_13);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 1))
    goto label_112;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [3]);
  (Rsp [0]) = (Wrd16.Obj);
  goto descend_quasiquote_pair_32;

DEFLABEL (label_112)
  if ((Wrd6.uLng) == 10)
    goto label_113;
  (Wrd9.Obj) = (current_block [OBJECT_18_4]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_113)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [0]) = (Wrd13.Obj);
  goto descend_quasiquote_vector_66;

DEFLABEL (descend_quasiquote_pair_102)
DEFLABEL (descend_quasiquote_pair_32)
  INTERRUPT_CHECK (26, LABEL_18_11);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_115;

DEFLABEL (label_114)
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd7.Obj);
  goto descend_quasiquote_pair__58;

DEFLABEL (label_115)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_152;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_151)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_27]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_18_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_114;
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_150;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_149)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_114;
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_148;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_147)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_146;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd43.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_145)
  if (! ((Wrd43.Obj) == (current_block [OBJECT_18_5])))
    goto label_114;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_23]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_144;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_143)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_25]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd66.Obj) = (current_block [OBJECT_18_6]);
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (Rsp [4]);
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [4]);
  (* (--Rsp)) = (Wrd69.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_18_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_118;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_117;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd19.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_117;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));

DEFLABEL (label_116)
  (Rsp [2]) = (Wrd14.Obj);
  goto descend_quasiquote_pair__58;

DEFLABEL (label_117)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_45]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_86)
  (Wrd14.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_118)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_42]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_142;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_141)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_44]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_18_7]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_18_44);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_18_42);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_128;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_127;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd47.Lng) == 0)
    goto label_122;

DEFLABEL (label_121)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [2]);
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_120;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_120;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));

DEFLABEL (label_119)
  (Rsp [2]) = (Wrd21.Obj);
  goto descend_quasiquote_pair__58;

DEFLABEL (label_120)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_59]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_89)
  (Wrd21.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd27.Obj) = (current_block [OBJECT_18_7]);
  (Rsp [2]) = (Wrd27.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_126;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_125)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_124;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_123)
  (Wrd44.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd44.Obj);
  (Rsp [3]) = (Wrd37.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_124)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_61]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_91)
  (Wrd37.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_60]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_90)
  (Wrd28.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_127)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_58]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_88)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_121;
  goto label_122;

DEFLABEL (label_128)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_55]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_140;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_139)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_57]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (current_block [OBJECT_18_8]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd64.Obj) = (Rsp [4]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [4]);
  (* (--Rsp)) = (Wrd66.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_18_57);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_18_55);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_129;
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [2]);
  (Rsp [0]) = (Wrd48.Obj);
  goto descend_quasiquote_pair__58;

DEFLABEL (label_129)
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_138;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd47.Lng) == 0)
    goto label_133;

DEFLABEL (label_132)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [2]);
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_131;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_131;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));

DEFLABEL (label_130)
  (Rsp [2]) = (Wrd21.Obj);
  goto descend_quasiquote_pair__58;

DEFLABEL (label_131)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_64]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_94)
  (Wrd21.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd27.Obj) = (current_block [OBJECT_18_8]);
  (Rsp [2]) = (Wrd27.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_137;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_136)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_135;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_134)
  (Wrd44.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd44.Obj);
  (Rsp [3]) = (Wrd37.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_135)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_66]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_96)
  (Wrd37.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_65]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_95)
  (Wrd28.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_138)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_63]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_93)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_132;
  goto label_133;

DEFLABEL (label_140)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_56]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_92)
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_43]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_87)
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_24]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_22]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_83)
  (Wrd43.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_21]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_82)
  (Wrd34.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_20]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_81)
  (Wrd24.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_26]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_151;

DEFLABEL (descend_quasiquote_pair__101)
DEFLABEL (descend_quasiquote_pair__58)
  INTERRUPT_CHECK (26, LABEL_18_9);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_28])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd18 = Wrd7;
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd20.pObj) [3]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [5]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [6]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Rsp [0]) = (Wrd17.Obj);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_154;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_153)
  (Rsp [1]) = (Wrd25.Obj);
  goto descend_quasiquote_5;

DEFLABEL (label_154)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_30]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_80)
  (Wrd25.Obj) = Rvl;
  goto label_153;

DEFLABEL (descend_quasiquote_vector_100)
DEFLABEL (descend_quasiquote_vector_66)
  INTERRUPT_CHECK (26, LABEL_18_7);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_31])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_33]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_34]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_18_33);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  goto descend_quasiquote_5;

DEFLABEL (finalize_quasiquote_99)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (finalize_quasiquote_74)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_18_4]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_158;
  if (! ((Wrd5.Obj) == (current_block [OBJECT_18_7])))
    goto label_155;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_155)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_18_8])))
    goto label_156;
  (Wrd18.Obj) = (current_block [OBJECT_18_9]);
  (Rsp [1]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_36]));

DEFLABEL (label_156)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_157)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_158)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_35]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  goto label_157;

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_18_37);
  (Wrd10.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_18_35);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_18_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_104)
  CLOSURE_HEADER (LABEL_18_28);

DEFLABEL (lambda_57)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_39);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_38])));
  Rhp += 5;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd23 = Wrd10;
  (Wrd26.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd23.pObj) [2]) = (Wrd26.Obj);
  (Wrd22.Obj) = ((Wrd6.pObj) [4]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [6]);
  ((Wrd23.pObj) [4]) = (Wrd18.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd23.pObj) [5]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [6]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd27.Obj) = ((Wrd6.pObj) [5]);
  (Rsp [2]) = (Wrd27.Obj);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_160;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd30.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_159)
  (Rsp [1]) = (Wrd30.Obj);
  goto descend_quasiquote_5;

DEFLABEL (label_160)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_40]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_85)
  (Wrd30.Obj) = Rvl;
  goto label_159;

DEFLABEL (lambda_105)
  CLOSURE_HEADER (LABEL_18_31);

DEFLABEL (lambda_65)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_18_4]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_161;
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [4]);
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (Rsp [0]) = (Wrd25.Obj);
  goto pop_return;

DEFLABEL (label_161)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_18_10])))
    goto label_162;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [3]);
  (Rsp [0]) = (Wrd17.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_18_11]);
  (Rsp [1]) = (Wrd20.Obj);
  goto pop_return;

DEFLABEL (label_162)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_41]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto finalize_quasiquote_74;

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_18_41);
  (Wrd9.Obj) = (current_block [OBJECT_18_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [3]);
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_18_12]);
  (Rsp [1]) = (Wrd13.Obj);
  goto pop_return;

DEFLABEL (lambda_106)
  CLOSURE_HEADER (LABEL_18_38);

DEFLABEL (lambda_56)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [6]);
  (Wrd8.Obj) = (current_block [OBJECT_18_4]);
  if ((Wrd7.Obj) == (Wrd8.Obj))
    goto label_170;

DEFLABEL (label_169)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [6]);
  if ((Wrd11.Obj) == (current_block [OBJECT_18_8]))
    goto label_166;
  (Wrd13.Obj) = (Rsp [1]);
  if (! ((Wrd13.Obj) == (current_block [OBJECT_18_4])))
    goto label_163;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_46]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_52]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_18_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_163;
  (Wrd72.Obj) = (current_block [OBJECT_18_10]);
  (Rsp [1]) = (Wrd72.Obj);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_47]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd78.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_49);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_48])));
  Rhp += 1;
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd78.pObj)));
  Wrd79 = Wrd78;
  (Wrd80.Obj) = (Rsp [2]);
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [2]);
  ((Wrd79.pObj) [2]) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_50]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_18_47);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto finalize_quasiquote_74;

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_18_67);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [3]);
  (Rsp [0]) = (Wrd10.Obj);
  goto pop_return;

DEFLABEL (label_163)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (current_block [OBJECT_18_10]);
  if (! ((Wrd15.Obj) == (Wrd16.Obj)))
    goto label_164;
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_53]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [5]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = ((Wrd30.pObj) [6]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  goto finalize_quasiquote_74;

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_18_53);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [3]);
  (Rsp [0]) = (Wrd10.Obj);
  goto pop_return;

DEFLABEL (label_164)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_54]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_165)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto finalize_quasiquote_74;

DEFLABEL (label_166)
  (Wrd42.Obj) = (Rsp [1]);
  if ((Wrd42.Obj) == (current_block [OBJECT_18_4]))
    goto label_168;

DEFLABEL (label_167)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_51]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd48.Obj);
  goto label_165;

DEFLABEL (label_168)
  (Wrd52.Obj) = (Rsp [2]);
  if (! ((Wrd52.Obj) == (current_block [OBJECT_18_5])))
    goto label_167;
  (Wrd54.Obj) = (current_block [OBJECT_18_7]);
  (Rsp [1]) = (Wrd54.Obj);
  (Wrd55.Obj) = ((Wrd10.pObj) [5]);
  (Rsp [2]) = (Wrd55.Obj);
  (Wrd58.Obj) = ((Wrd10.pObj) [3]);
  (Rsp [0]) = (Wrd58.Obj);
  goto pop_return;

DEFLABEL (label_170)
  (Wrd61.Obj) = (Rsp [1]);
  if (! ((Wrd61.Obj) == (Wrd8.Obj)))
    goto label_169;
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd64.Obj) = ((Wrd6.pObj) [4]);
  (Rsp [2]) = (Wrd64.Obj);
  (Wrd67.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [0]) = (Wrd67.Obj);
  goto pop_return;

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_18_54);
  (Wrd9.Obj) = (current_block [OBJECT_18_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_62]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd14.pObj) [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto finalize_quasiquote_74;

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_18_62);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [3]);
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_18_14]);
  (Rsp [1]) = (Wrd13.Obj);
  goto pop_return;

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_18_51);
  (Wrd9.Obj) = (current_block [OBJECT_18_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [5]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd16.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [0]) = (Wrd16.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_18_13]);
  (Rsp [1]) = (Wrd19.Obj);
  goto pop_return;

DEFLABEL (lambda_107)
  CLOSURE_HEADER (LABEL_18_48);

DEFLABEL (lambda_48)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_4]);
  (Rsp [1]) = (Wrd8.Obj);
  goto finalize_quasiquote_74;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_7 9
#define LABEL_19_9 11
#define LABEL_19_8 13
#define LABEL_19_12 15
#define LABEL_19_13 17
#define LABEL_19_14 19
#define LABEL_19_11 21
#define LABEL_19_16 23
#define LABEL_19_17 25
#define LABEL_19_18 27
#define LABEL_19_19 29
#define LABEL_19_24 31
#define LABEL_19_26 33
#define TAG_19_27 15
#define LABEL_19_20 35
#define TAG_19_21 16
#define LABEL_19_28 37
#define LABEL_19_31 39
#define LABEL_19_25 41
#define LABEL_19_22 43
#define TAG_19_23 20
#define LABEL_19_29 45
#define TAG_19_30 21
#define LABEL_19_32 47
#define LABEL_19_33 49
#define LABEL_19_34 51
#define LABEL_19_36 53
#define LABEL_19_35 55
#define LABEL_19_38 57
#define LABEL_19_37 59
#define ENVIRONMENT_LABEL_19_3 78
#define DEBUGGING_LABEL_19_2 77
#define OBJECT_19_11 76
#define OBJECT_19_10 75
#define OBJECT_19_9 74
#define OBJECT_19_8 73
#define OBJECT_19_7 72
#define OBJECT_19_6 71
#define OBJECT_19_5 70
#define OBJECT_19_4 69
#define OBJECT_19_3 68
#define OBJECT_19_2 67
#define OBJECT_19_1 66
#define OBJECT_19_0 65
#define EXECUTE_CACHE_19_15 61
#define EXECUTE_CACHE_19_10 63
#define FREE_REFERENCES_LABEL_19_0 60
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd55;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd69;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_46;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto label_48;

    case 5:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_19_12);
      goto label_51;

    case 7:
      current_block = (Rpc - LABEL_19_13);
      goto label_49;

    case 8:
      current_block = (Rpc - LABEL_19_14);
      goto label_50;

    case 9:
      current_block = (Rpc - LABEL_19_11);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_19_16);
      goto label_52;

    case 11:
      current_block = (Rpc - LABEL_19_17);
      goto label_53;

    case 12:
      current_block = (Rpc - LABEL_19_18);
      goto label_54;

    case 13:
      current_block = (Rpc - LABEL_19_19);
      goto label_55;

    case 14:
      current_block = (Rpc - LABEL_19_24);
      goto continuation_18;

    case 15:
      current_block = (Rpc - LABEL_19_26);
      goto lambda_64;

    case 16:
      current_block = (Rpc - LABEL_19_20);
      goto recur_40;

    case 17:
      current_block = (Rpc - LABEL_19_28);
      goto label_56;

    case 18:
      current_block = (Rpc - LABEL_19_31);
      goto label_57;

    case 19:
      current_block = (Rpc - LABEL_19_25);
      goto lambda_17;

    case 20:
      current_block = (Rpc - LABEL_19_22);
      goto expand_30;

    case 21:
      current_block = (Rpc - LABEL_19_29);
      goto lambda_65;

    case 22:
      current_block = (Rpc - LABEL_19_32);
      goto continuation_20;

    case 23:
      current_block = (Rpc - LABEL_19_33);
      goto continuation_35;

    case 24:
      current_block = (Rpc - LABEL_19_34);
      goto continuation_21;

    case 25:
      current_block = (Rpc - LABEL_19_36);
      goto label_58;

    case 26:
      current_block = (Rpc - LABEL_19_35);
      goto continuation_22;

    case 27:
      current_block = (Rpc - LABEL_19_38);
      goto label_59;

    case 28:
      current_block = (Rpc - LABEL_19_37);
      goto continuation_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_61)
DEFLABEL (lambda_46)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_88;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_87)
  (Wrd17.Obj) = (current_block [OBJECT_19_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_70;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_69)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_68;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_67)
  (Wrd26.Obj) = (current_block [OBJECT_19_6]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd31.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 1);

DEFLABEL (label_50)
  (Wrd16.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 1);

DEFLABEL (label_49)
  (Wrd7.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_71)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_86;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [1]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_85)
  (Wrd44.Obj) = (current_block [OBJECT_19_5]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_19_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_72;
  (Wrd69.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd69.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_15]));

DEFLABEL (label_72)
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_84;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_83)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_82;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_81)
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_80;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_79)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_78;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_77)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd67.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_20])));
  Rhp += 2;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd67.pObj)));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd65.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_22])));
  Rhp += 1;
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd65.pObj)));
  (* (--Rsp)) = (Wrd66.Obj);
  Wrd57 = Wrd65;
  (Wrd58.Obj) = (Rsp [5]);
  ((Wrd57.pObj) [2]) = (Wrd58.Obj);
  Wrd63 = Wrd67;
  (Wrd64.Obj) = (Rsp [4]);
  ((Wrd63.pObj) [2]) = (Wrd64.Obj);
  ((Wrd63.pObj) [3]) = (Wrd66.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_24]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [4]);
  if ((Wrd42.Obj) == (current_block [OBJECT_19_8]))
    goto label_74;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd45.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_26])));
  Rhp += 3;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd45.pObj)));
  Wrd50 = Wrd45;
  (Wrd51.Obj) = (Rsp [7]);
  ((Wrd50.pObj) [2]) = (Wrd51.Obj);
  ((Wrd50.pObj) [3]) = (Wrd64.Obj);
  ((Wrd50.pObj) [4]) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  goto label_73;

DEFLABEL (label_74)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_25]))));
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_73)
DEFLABEL (label_76)
  (Wrd52.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd53.Obj);
  goto recur_40;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_19_24);
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [6]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_75;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_15]));

DEFLABEL (label_78)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_7]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_18]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 1);

DEFLABEL (label_54)
  (Wrd23.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 1);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 1);

DEFLABEL (label_52)
  (Wrd7.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_19_26);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_19_8]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd28.Obj) = ((Wrd9.pObj) [3]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (recur_62)
DEFLABEL (recur_40)
  INTERRUPT_CHECK (26, LABEL_19_20);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_95;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_94)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == (current_block [OBJECT_19_8]))
    goto label_90;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_29])));
  Rhp += 4;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd25 = Wrd18;
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  ((Wrd25.pObj) [2]) = (Wrd28.Obj);
  ((Wrd25.pObj) [3]) = (Wrd26.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  ((Wrd25.pObj) [4]) = (Wrd22.Obj);
  ((Wrd25.pObj) [5]) = (Wrd14.Obj);
  Wrd29 = Wrd17;
  goto label_89;

DEFLABEL (label_90)
  (Wrd29.Obj) = (Rsp [3]);

DEFLABEL (label_89)
DEFLABEL (label_93)
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd29.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [3]);
  (Rsp [0]) = (Wrd30.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_92;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [0]);

DEFLABEL (label_91)
  (Rsp [1]) = (Wrd33.Obj);
  goto expand_30;

DEFLABEL (label_92)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_31]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_7]), 1);

DEFLABEL (label_57)
  (Wrd33.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_95)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_28]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (lambda_66)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_19_25);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (expand_63)
DEFLABEL (expand_30)
  INTERRUPT_CHECK (26, LABEL_19_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_19_32);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_96;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_96)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_34]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_19_10]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_19_34);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_103;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_35]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_19_11]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_19_35);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_97;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_97)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_37]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_102;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_101)
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto pop_return;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_19_37);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_99;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (current_block [OBJECT_19_8]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  goto label_98;

DEFLABEL (label_99)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_98)
DEFLABEL (label_100)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_102)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_38]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_7]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_103)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_105;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_104)
  (Wrd16.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd16.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_105)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_36]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_7]), 1);

DEFLABEL (label_58)
  (Wrd7.Obj) = Rvl;
  goto label_104;

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_19_29);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto recur_40;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_19_33);
  (Wrd9.Obj) = (current_block [OBJECT_19_8]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_6 5
#define LABEL_20_5 7
#define LABEL_20_9 9
#define LABEL_20_10 11
#define LABEL_20_11 13
#define LABEL_20_8 15
#define LABEL_20_13 17
#define LABEL_20_14 19
#define LABEL_20_15 21
#define LABEL_20_16 23
#define LABEL_20_17 25
#define LABEL_20_18 27
#define ENVIRONMENT_LABEL_20_3 41
#define DEBUGGING_LABEL_20_2 40
#define OBJECT_20_4 39
#define OBJECT_20_3 38
#define OBJECT_20_2 37
#define OBJECT_20_1 36
#define OBJECT_20_0 35
#define EXECUTE_CACHE_20_12 29
#define EXECUTE_CACHE_20_7 31
#define FREE_REFERENCE_20_0 34
#define FREE_REFERENCES_LABEL_20_0 28
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd61;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd72;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_20_4);
      goto lambda_13;

    case 1:
      current_block = (Rpc - LABEL_20_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_20_9);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_20_11);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_20_13);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_20_14);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_20_15);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_20_16);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_20_17);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_20_18);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_26)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_48;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_47)
  (Wrd17.Obj) = (current_block [OBJECT_20_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_30;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_29)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_28;
  Wrd17 = Wrd21;

DEFLABEL (label_27)
  (Wrd23.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_11])), (Wrd18.pObj));

DEFLABEL (label_17)
  (Wrd17.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_46;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_45)
  (Wrd40.Obj) = (current_block [OBJECT_20_2]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  (Wrd72.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd72.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (label_32)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_44;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_43)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_42;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_41)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_40;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_39)
  (Wrd32.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd39.Obj) = (current_block [OBJECT_20_4]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_38;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_37)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_36;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd49.Obj) = ((Wrd50.pObj) [0]);

DEFLABEL (label_35)
  (Wrd56.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd65.Obj) = ((Wrd62.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_34;
  Wrd61 = Wrd65;

DEFLABEL (label_33)
  (Wrd67.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd67.Obj);
  (Wrd70.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd70.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_18])), (Wrd62.pObj));

DEFLABEL (label_24)
  (Wrd61.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 1);

DEFLABEL (label_23)
  (Wrd49.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_22)
  (Wrd40.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 1);

DEFLABEL (label_21)
  (Wrd23.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_19)
  (Wrd7.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define LABEL_21_8 9
#define LABEL_21_9 11
#define LABEL_21_10 13
#define LABEL_21_11 15
#define LABEL_21_12 17
#define LABEL_21_13 19
#define ENVIRONMENT_LABEL_21_3 30
#define DEBUGGING_LABEL_21_2 29
#define OBJECT_21_5 28
#define OBJECT_21_4 27
#define OBJECT_21_3 26
#define OBJECT_21_2 25
#define OBJECT_21_1 24
#define OBJECT_21_0 23
#define EXECUTE_CACHE_21_6 21
#define FREE_REFERENCES_LABEL_21_0 20
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_21_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_21_11);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_21_12);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_21_13);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_20)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_30;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_29)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_28;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_27)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_26;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_25)
  (Wrd31.Obj) = (current_block [OBJECT_21_3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_21_4]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd36.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_21_3]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_24;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_23)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_22;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_21)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_21_5]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_13);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_18)
  (Wrd23.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_17)
  (Wrd14.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_16)
  (Wrd21.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_15)
  (Wrd14.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_7 9
#define LABEL_22_9 11
#define LABEL_22_8 13
#define LABEL_22_12 15
#define LABEL_22_13 17
#define LABEL_22_14 19
#define LABEL_22_15 21
#define LABEL_22_11 23
#define LABEL_22_18 25
#define LABEL_22_19 27
#define LABEL_22_20 29
#define LABEL_22_21 31
#define LABEL_22_22 33
#define LABEL_22_17 35
#define LABEL_22_24 37
#define LABEL_22_25 39
#define LABEL_22_26 41
#define LABEL_22_27 43
#define LABEL_22_28 45
#define ENVIRONMENT_LABEL_22_3 64
#define DEBUGGING_LABEL_22_2 63
#define OBJECT_22_9 62
#define OBJECT_22_8 61
#define OBJECT_22_7 60
#define OBJECT_22_6 59
#define OBJECT_22_5 58
#define OBJECT_22_4 57
#define OBJECT_22_3 56
#define OBJECT_22_2 55
#define OBJECT_22_1 54
#define OBJECT_22_0 53
#define EXECUTE_CACHE_22_23 47
#define EXECUTE_CACHE_22_16 49
#define EXECUTE_CACHE_22_10 51
#define FREE_REFERENCES_LABEL_22_0 46
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd31;
  machine_word Wrd5;
  machine_word Wrd65;
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd67;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_22_4);
      goto lambda_43;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_22_9);
      goto label_45;

    case 5:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_22_12);
      goto label_49;

    case 7:
      current_block = (Rpc - LABEL_22_13);
      goto label_46;

    case 8:
      current_block = (Rpc - LABEL_22_14);
      goto label_47;

    case 9:
      current_block = (Rpc - LABEL_22_15);
      goto label_48;

    case 10:
      current_block = (Rpc - LABEL_22_11);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_22_18);
      goto label_50;

    case 12:
      current_block = (Rpc - LABEL_22_19);
      goto label_51;

    case 13:
      current_block = (Rpc - LABEL_22_20);
      goto label_52;

    case 14:
      current_block = (Rpc - LABEL_22_21);
      goto label_53;

    case 15:
      current_block = (Rpc - LABEL_22_22);
      goto label_54;

    case 16:
      current_block = (Rpc - LABEL_22_17);
      goto continuation_27;

    case 17:
      current_block = (Rpc - LABEL_22_24);
      goto label_55;

    case 18:
      current_block = (Rpc - LABEL_22_25);
      goto label_56;

    case 19:
      current_block = (Rpc - LABEL_22_26);
      goto label_57;

    case 20:
      current_block = (Rpc - LABEL_22_27);
      goto label_58;

    case 21:
      current_block = (Rpc - LABEL_22_28);
      goto label_59;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_61)
DEFLABEL (lambda_43)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_96;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_95)
  (Wrd17.Obj) = (current_block [OBJECT_22_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_67;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_66)
  (Wrd19.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (current_block [OBJECT_22_6]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_65;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_64)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_63;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd33.Obj) = ((Wrd34.pObj) [0]);

DEFLABEL (label_62)
  (Wrd43.Obj) = (current_block [OBJECT_22_6]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Wrd47.Obj) = (current_block [OBJECT_22_8]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (Wrd55.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (Wrd56.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (Wrd64.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_63)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_15]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_7]), 1);

DEFLABEL (label_48)
  (Wrd33.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_14]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 1);

DEFLABEL (label_47)
  (Wrd24.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 1);

DEFLABEL (label_46)
  (Wrd7.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_68)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd71.Obj) = (Rsp [4]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_94;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_93)
  (Wrd77.Obj) = (current_block [OBJECT_22_5]);
  (* (--Rsp)) = (Wrd77.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_69;
  (Wrd71.Obj) = (Rsp [3]);
  (Rsp [5]) = (Wrd71.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_16]));

DEFLABEL (label_69)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_92;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_91)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_90;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_89)
  (Wrd29.Obj) = (Rsp [5]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_88;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_87)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_86;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd35.Obj) = ((Wrd36.pObj) [0]);

DEFLABEL (label_85)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_84;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_83)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_22_6]);
  if ((Wrd49.Obj) == (Wrd50.Obj))
    goto label_71;
  (Wrd54.Obj) = (current_block [OBJECT_22_8]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (Wrd63.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd65.Obj);
  goto label_70;

DEFLABEL (label_71)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_70)
DEFLABEL (label_82)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_23]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_22_17);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_81;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_80)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_79;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_78)
  (Wrd21.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd28.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_22_6]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_77;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_76)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_75;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd42.Obj) = ((Wrd43.pObj) [0]);

DEFLABEL (label_74)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_73;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd49.Obj) = ((Wrd50.pObj) [0]);

DEFLABEL (label_72)
  (Wrd59.Obj) = (current_block [OBJECT_22_6]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (Wrd63.Obj) = (current_block [OBJECT_22_9]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (Wrd71.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd71.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd70.pObj) = (& (Rhp [-2]));
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd70.pObj)));
  (Wrd72.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd75.pObj) = (& (Rhp [-2]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd75.pObj)));
  (Wrd80.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd80.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd78.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd78.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_28]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_7]), 1);

DEFLABEL (label_59)
  (Wrd49.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_27]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_7]), 1);

DEFLABEL (label_58)
  (Wrd42.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_26]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 1);

DEFLABEL (label_57)
  (Wrd33.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_25]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_7]), 1);

DEFLABEL (label_56)
  (Wrd14.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 1);

DEFLABEL (label_55)
  (Wrd5.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_84)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_22]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_21]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_7]), 1);

DEFLABEL (label_53)
  (Wrd35.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_20]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 1);

DEFLABEL (label_52)
  (Wrd26.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_19]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 1);

DEFLABEL (label_50)
  (Wrd10.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_95;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define LABEL_23_8 9
#define LABEL_23_9 11
#define LABEL_23_10 13
#define LABEL_23_11 15
#define LABEL_23_12 17
#define LABEL_23_14 19
#define LABEL_23_15 21
#define LABEL_23_16 23
#define LABEL_23_13 25
#define LABEL_23_19 27
#define LABEL_23_20 29
#define LABEL_23_21 31
#define LABEL_23_18 33
#define LABEL_23_22 35
#define LABEL_23_23 37
#define LABEL_23_24 39
#define LABEL_23_26 41
#define LABEL_23_27 43
#define LABEL_23_28 45
#define LABEL_23_36 47
#define LABEL_23_29 49
#define LABEL_23_30 51
#define TAG_23_31 24
#define LABEL_23_33 53
#define LABEL_23_35 55
#define ENVIRONMENT_LABEL_23_3 86
#define DEBUGGING_LABEL_23_2 85
#define OBJECT_23_11 84
#define OBJECT_23_10 83
#define OBJECT_23_9 82
#define OBJECT_23_8 81
#define OBJECT_23_7 80
#define OBJECT_23_6 79
#define OBJECT_23_5 78
#define OBJECT_23_4 77
#define OBJECT_23_3 76
#define OBJECT_23_2 75
#define OBJECT_23_1 74
#define OBJECT_23_0 73
#define EXECUTE_CACHE_23_37 57
#define EXECUTE_CACHE_23_34 59
#define EXECUTE_CACHE_23_25 61
#define EXECUTE_CACHE_23_32 63
#define EXECUTE_CACHE_23_17 65
#define EXECUTE_CACHE_23_6 67
#define FREE_REFERENCE_23_2 70
#define FREE_REFERENCE_23_1 71
#define FREE_REFERENCE_23_0 72
#define FREE_REFERENCES_LABEL_23_0 56
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_23_4);
      goto lambda_46;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_12;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_23_10);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_23_11);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_23_12);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_23_14);
      goto label_48;

    case 9:
      current_block = (Rpc - LABEL_23_15);
      goto label_49;

    case 10:
      current_block = (Rpc - LABEL_23_16);
      goto label_50;

    case 11:
      current_block = (Rpc - LABEL_23_13);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_23_19);
      goto label_51;

    case 13:
      current_block = (Rpc - LABEL_23_20);
      goto label_52;

    case 14:
      current_block = (Rpc - LABEL_23_21);
      goto label_53;

    case 15:
      current_block = (Rpc - LABEL_23_18);
      goto continuation_3;

    case 16:
      current_block = (Rpc - LABEL_23_22);
      goto label_54;

    case 17:
      current_block = (Rpc - LABEL_23_23);
      goto label_55;

    case 18:
      current_block = (Rpc - LABEL_23_24);
      goto continuation_17;

    case 19:
      current_block = (Rpc - LABEL_23_26);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_23_27);
      goto lambda_15;

    case 21:
      current_block = (Rpc - LABEL_23_28);
      goto continuation_34;

    case 22:
      current_block = (Rpc - LABEL_23_36);
      goto label_56;

    case 23:
      current_block = (Rpc - LABEL_23_29);
      goto continuation_32;

    case 24:
      current_block = (Rpc - LABEL_23_30);
      goto lambda_59;

    case 25:
      current_block = (Rpc - LABEL_23_33);
      goto continuation_13;

    case 26:
      current_block = (Rpc - LABEL_23_35);
      goto continuation_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_58)
DEFLABEL (lambda_46)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_23_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_23_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_23_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_23_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_23_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_78;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_77)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_76;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_75)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_74;
  Wrd24 = Wrd28;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_23_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [8]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_72;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_71)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_70;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_69)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_68;
  Wrd24 = Wrd28;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_18);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [8]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_66;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_65)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_64;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_63)
  (Wrd24.Obj) = (current_block [OBJECT_23_9]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_24]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_23_10]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_25]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_23_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_17]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_23_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [11]);
  (Wrd12.Obj) = (current_block [OBJECT_23_9]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_29]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd17.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_30])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd20 = Wrd19;
  (Wrd21.Obj) = (Rsp [13]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_32]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_23_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_37]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_23_28);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_23_9]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (Rsp [9]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_35]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_2]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_62;
  Wrd47 = Wrd51;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_32]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_23_35);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [14]));
  goto pop_return;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_36])), (Wrd48.pObj));

DEFLABEL (label_56)
  (Wrd47.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_7]), 1);

DEFLABEL (label_55)
  (Wrd14.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_7]), 1);

DEFLABEL (label_54)
  (Wrd5.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_21])), (Wrd25.pObj));

DEFLABEL (label_53)
  (Wrd24.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_20]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_8]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_19]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_7]), 1);

DEFLABEL (label_51)
  (Wrd8.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_16])), (Wrd25.pObj));

DEFLABEL (label_50)
  (Wrd24.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_8]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_7]), 1);

DEFLABEL (label_48)
  (Wrd8.Obj) = Rvl;
  goto label_77;

DEFLABEL (lambda_60)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_23_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_34]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_23_33);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  (Wrd7.Obj) = (Rsp [0]);
  goto label_79;

DEFLABEL (label_80)
  (Wrd7.Obj) = (current_block [OBJECT_23_11]);

DEFLABEL (label_79)
DEFLABEL (label_81)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_25]));

DEFLABEL (lambda_59)
  CLOSURE_HEADER (LABEL_23_30);

DEFLABEL (lambda_31)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_23_9]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define LABEL_24_9 11
#define LABEL_24_10 13
#define LABEL_24_11 15
#define LABEL_24_12 17
#define ENVIRONMENT_LABEL_24_3 28
#define DEBUGGING_LABEL_24_2 27
#define OBJECT_24_5 26
#define OBJECT_24_4 25
#define OBJECT_24_3 24
#define OBJECT_24_2 23
#define OBJECT_24_1 22
#define OBJECT_24_0 21
#define EXECUTE_CACHE_24_6 19
#define FREE_REFERENCES_LABEL_24_0 18
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_24_4);
      goto lambda_11;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_24_10);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_24_11);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_24_12);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_18)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_26;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_25)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_24;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_23)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_22;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_21)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_20;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_19)
  (Wrd40.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd41.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd48.Obj) = (current_block [OBJECT_24_5]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd53.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_4]), 1);

DEFLABEL (label_16)
  (Wrd30.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 1);

DEFLABEL (label_15)
  (Wrd21.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 1);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define ENVIRONMENT_LABEL_25_3 10
#define DEBUGGING_LABEL_25_2 9
#define OBJECT_25_0 8
#define FREE_REFERENCE_25_0 7
#define FREE_REFERENCES_LABEL_25_0 6
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_25_4);
      goto unspecific_expression_0;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unspecific_expression_4)
DEFLABEL (unspecific_expression_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (Wrd15.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 10
#define DEBUGGING_LABEL_26_2 9
#define OBJECT_26_0 8
#define FREE_REFERENCE_26_0 7
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_26_4);
      goto unassigned_expression_0;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unassigned_expression_4)
DEFLABEL (unassigned_expression_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (Wrd15.Obj) = (current_block [OBJECT_26_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_5 3
#define LABEL_27_8 5
#define LABEL_27_4 7
#define LABEL_27_9 9
#define LABEL_27_10 11
#define LABEL_27_6 13
#define LABEL_27_12 15
#define LABEL_27_13 17
#define LABEL_27_7 19
#define LABEL_27_15 21
#define LABEL_27_16 23
#define LABEL_27_14 25
#define LABEL_27_18 27
#define ENVIRONMENT_LABEL_27_3 39
#define DEBUGGING_LABEL_27_2 38
#define OBJECT_27_4 37
#define OBJECT_27_3 36
#define OBJECT_27_2 35
#define OBJECT_27_1 34
#define OBJECT_27_0 33
#define EXECUTE_CACHE_27_17 29
#define EXECUTE_CACHE_27_11 31
#define FREE_REFERENCES_LABEL_27_0 28
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_27_5);
      goto lambda_9;

    case 1:
      current_block = (Rpc - LABEL_27_8);
      goto label_29;

    case 2:
      current_block = (Rpc - LABEL_27_4);
      goto lambda_25;

    case 3:
      current_block = (Rpc - LABEL_27_9);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_27_10);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_23;

    case 6:
      current_block = (Rpc - LABEL_27_12);
      goto label_30;

    case 7:
      current_block = (Rpc - LABEL_27_13);
      goto label_31;

    case 8:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_21;

    case 9:
      current_block = (Rpc - LABEL_27_15);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_27_16);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_27_14);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_27_18);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_36)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_38;

DEFLABEL (label_37)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_11]));

DEFLABEL (label_38)
  if (! ((Wrd6.uLng) == 1))
    goto label_44;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_43)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_40;

DEFLABEL (label_39)
  Rsp = (& (Rsp [1]));
  goto label_37;

DEFLABEL (label_40)
  if (! ((Wrd19.uLng) == 1))
    goto label_42;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_41)
  (Rsp [0]) = (Wrd21.Obj);
  goto lambda_9;

DEFLABEL (label_42)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_28)
  (Wrd21.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (lambda_35)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_27_5);
  (Wrd30.Obj) = (Rsp [0]);
  if (! ((Wrd30.Obj) == (current_block [OBJECT_27_0])))
    goto label_53;
  Rsp = (& (Rsp [1]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_27_1]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd52.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (Wrd9.Obj) = (current_block [OBJECT_27_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_52;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_51)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_50;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_49)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_17]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27_6);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_48;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_47)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_46;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_45)
  (Wrd24.Obj) = (current_block [OBJECT_27_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_27_1]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd29.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_27_14);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_27_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_27_4]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_27_18);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 1);

DEFLABEL (label_31)
  (Wrd14.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_16]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_32)
  (Wrd10.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_53)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_39;
  if (! ((Wrd33.uLng) == 1))
    goto label_55;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_54)
  (Rsp [0]) = (Wrd35.Obj);
  goto lambda_9;

DEFLABEL (label_55)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 1);

DEFLABEL (label_29)
  (Wrd35.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_6 7
#define LABEL_28_7 9
#define LABEL_28_8 11
#define LABEL_28_9 13
#define LABEL_28_10 15
#define LABEL_28_12 17
#define LABEL_28_13 19
#define LABEL_28_14 21
#define LABEL_28_15 23
#define LABEL_28_16 25
#define ENVIRONMENT_LABEL_28_3 40
#define DEBUGGING_LABEL_28_2 39
#define OBJECT_28_9 38
#define OBJECT_28_8 37
#define OBJECT_28_7 36
#define OBJECT_28_6 35
#define OBJECT_28_5 34
#define OBJECT_28_4 33
#define OBJECT_28_3 32
#define OBJECT_28_2 31
#define OBJECT_28_1 30
#define OBJECT_28_0 29
#define EXECUTE_CACHE_28_11 27
#define FREE_REFERENCES_LABEL_28_0 26
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_macros_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto lambda_23;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_25;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_28_8);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_28_9);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_28_10);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_28_12);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_28_13);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_28_14);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_28_15);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_28_16);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_33)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_35;

DEFLABEL (label_34)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_11]));

DEFLABEL (label_35)
  if (! ((Wrd6.uLng) == 1))
    goto label_52;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_51)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_37;
  (Wrd19.Obj) = (current_block [OBJECT_28_2]);
  goto label_36;

DEFLABEL (label_37)
  (Wrd19.Obj) = (current_block [OBJECT_28_1]);

DEFLABEL (label_36)
DEFLABEL (label_50)
  Rsp = (& (Rsp [1]));
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_49;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_48)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_47;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_46)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_45;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_44)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_43;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd48.Obj) = ((Wrd49.pObj) [0]);

DEFLABEL (label_42)
  (Wrd58.Obj) = (current_block [OBJECT_28_4]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (current_block [OBJECT_28_5]);
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd63.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_28_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_28_6]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_28_7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_28_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_28_4]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_41;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_40)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_39;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_38)
  (Wrd33.Obj) = (current_block [OBJECT_28_4]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_15]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_28_8]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_28_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_28_9]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_16);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 1);

DEFLABEL (label_31)
  (Wrd23.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_30)
  (Wrd14.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 1);

DEFLABEL (label_29)
  (Wrd48.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_28)
  (Wrd39.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_26)
  (Wrd23.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_52)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_51;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_12 17
#define LABEL_13 19
#define LABEL_14 21
#define LABEL_15 23
#define LABEL_16 25
#define LABEL_17 27
#define LABEL_18 29
#define LABEL_19 31
#define LABEL_20 33
#define LABEL_21 35
#define LABEL_22 37
#define LABEL_23 39
#define LABEL_24 41
#define LABEL_25 43
#define LABEL_26 45
#define LABEL_27 47
#define LABEL_28 49
#define LABEL_29 51
#define LABEL_30 53
#define LABEL_31 55
#define LABEL_32 57
#define LABEL_33 59
#define LABEL_34 61
#define LABEL_35 63
#define LABEL_36 65
#define LABEL_37 67
#define LABEL_38 69
#define LABEL_39 71
#define LABEL_40 73
#define LABEL_41 75
#define LABEL_42 77
#define LABEL_43 79
#define LABEL_44 81
#define LABEL_45 83
#define LABEL_46 85
#define LABEL_47 87
#define LABEL_48 89
#define LABEL_49 91
#define LABEL_50 93
#define LABEL_51 95
#define LABEL_52 97
#define LABEL_53 99
#define LABEL_54 101
#define LABEL_55 103
#define LABEL_56 105
#define LABEL_57 107
#define LABEL_58 109
#define LABEL_59 111
#define LABEL_60 113
#define LABEL_61 115
#define LABEL_62 117
#define LABEL_63 119
#define LABEL_64 121
#define LABEL_65 123
#define LABEL_66 125
#define LABEL_67 127
#define LABEL_68 129
#define LABEL_69 131
#define LABEL_70 133
#define LABEL_71 135
#define LABEL_72 137
#define LABEL_73 139
#define LABEL_74 141
#define LABEL_75 143
#define LABEL_76 145
#define LABEL_77 147
#define LABEL_78 149
#define LABEL_79 151
#define LABEL_80 153
#define ENVIRONMENT_LABEL_3 224
#define DEBUGGING_LABEL_2 223
#define PURIFICATION_ROOT 222
#define OBJECT_64 221
#define OBJECT_63 220
#define OBJECT_62 219
#define OBJECT_61 218
#define OBJECT_60 217
#define OBJECT_59 216
#define OBJECT_58 215
#define OBJECT_57 214
#define OBJECT_56 213
#define OBJECT_55 212
#define OBJECT_54 211
#define OBJECT_53 210
#define OBJECT_52 209
#define OBJECT_51 208
#define OBJECT_50 207
#define OBJECT_49 206
#define OBJECT_48 205
#define OBJECT_47 204
#define OBJECT_46 203
#define OBJECT_45 202
#define OBJECT_44 201
#define OBJECT_43 200
#define OBJECT_42 199
#define OBJECT_41 198
#define OBJECT_40 197
#define OBJECT_39 196
#define OBJECT_38 195
#define OBJECT_37 194
#define OBJECT_36 193
#define OBJECT_35 192
#define OBJECT_34 191
#define OBJECT_33 190
#define OBJECT_32 189
#define OBJECT_31 188
#define OBJECT_30 187
#define OBJECT_29 186
#define OBJECT_28 185
#define OBJECT_27 184
#define OBJECT_26 183
#define OBJECT_25 182
#define OBJECT_24 181
#define OBJECT_23 180
#define OBJECT_22 179
#define OBJECT_21 178
#define OBJECT_20 177
#define OBJECT_19 176
#define OBJECT_18 175
#define OBJECT_17 174
#define OBJECT_16 173
#define OBJECT_15 172
#define OBJECT_14 171
#define OBJECT_13 170
#define OBJECT_12 169
#define OBJECT_11 168
#define OBJECT_10 167
#define OBJECT_9 166
#define OBJECT_8 165
#define OBJECT_7 164
#define OBJECT_6 163
#define OBJECT_5 162
#define OBJECT_4 161
#define OBJECT_3 160
#define OBJECT_2 159
#define OBJECT_1 158
#define OBJECT_0 157
#define GLOBAL_EXECUTE_CACHE_7 155
#define FREE_REFERENCES_LABEL_0 154
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
mit_macros_so_a42d94633f78fac6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd11;
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
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto continuation_18;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto continuation_22;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_21;

    case 17:
      current_block = (Rpc - LABEL_22);
      goto continuation_19;

    case 18:
      current_block = (Rpc - LABEL_23);
      goto continuation_23;

    case 19:
      current_block = (Rpc - LABEL_24);
      goto continuation_27;

    case 20:
      current_block = (Rpc - LABEL_25);
      goto continuation_26;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto continuation_24;

    case 22:
      current_block = (Rpc - LABEL_27);
      goto continuation_31;

    case 23:
      current_block = (Rpc - LABEL_28);
      goto continuation_30;

    case 24:
      current_block = (Rpc - LABEL_29);
      goto continuation_28;

    case 25:
      current_block = (Rpc - LABEL_30);
      goto continuation_32;

    case 26:
      current_block = (Rpc - LABEL_31);
      goto continuation_36;

    case 27:
      current_block = (Rpc - LABEL_32);
      goto continuation_35;

    case 28:
      current_block = (Rpc - LABEL_33);
      goto continuation_33;

    case 29:
      current_block = (Rpc - LABEL_34);
      goto continuation_40;

    case 30:
      current_block = (Rpc - LABEL_35);
      goto continuation_39;

    case 31:
      current_block = (Rpc - LABEL_36);
      goto continuation_37;

    case 32:
      current_block = (Rpc - LABEL_37);
      goto continuation_44;

    case 33:
      current_block = (Rpc - LABEL_38);
      goto continuation_43;

    case 34:
      current_block = (Rpc - LABEL_39);
      goto continuation_41;

    case 35:
      current_block = (Rpc - LABEL_40);
      goto continuation_48;

    case 36:
      current_block = (Rpc - LABEL_41);
      goto continuation_47;

    case 37:
      current_block = (Rpc - LABEL_42);
      goto continuation_45;

    case 38:
      current_block = (Rpc - LABEL_43);
      goto continuation_52;

    case 39:
      current_block = (Rpc - LABEL_44);
      goto continuation_51;

    case 40:
      current_block = (Rpc - LABEL_45);
      goto continuation_49;

    case 41:
      current_block = (Rpc - LABEL_46);
      goto continuation_56;

    case 42:
      current_block = (Rpc - LABEL_47);
      goto continuation_55;

    case 43:
      current_block = (Rpc - LABEL_48);
      goto continuation_53;

    case 44:
      current_block = (Rpc - LABEL_49);
      goto continuation_57;

    case 45:
      current_block = (Rpc - LABEL_50);
      goto continuation_61;

    case 46:
      current_block = (Rpc - LABEL_51);
      goto continuation_60;

    case 47:
      current_block = (Rpc - LABEL_52);
      goto continuation_58;

    case 48:
      current_block = (Rpc - LABEL_53);
      goto continuation_65;

    case 49:
      current_block = (Rpc - LABEL_54);
      goto continuation_64;

    case 50:
      current_block = (Rpc - LABEL_55);
      goto continuation_62;

    case 51:
      current_block = (Rpc - LABEL_56);
      goto continuation_69;

    case 52:
      current_block = (Rpc - LABEL_57);
      goto continuation_68;

    case 53:
      current_block = (Rpc - LABEL_58);
      goto continuation_66;

    case 54:
      current_block = (Rpc - LABEL_59);
      goto continuation_73;

    case 55:
      current_block = (Rpc - LABEL_60);
      goto continuation_72;

    case 56:
      current_block = (Rpc - LABEL_61);
      goto continuation_70;

    case 57:
      current_block = (Rpc - LABEL_62);
      goto continuation_77;

    case 58:
      current_block = (Rpc - LABEL_63);
      goto continuation_76;

    case 59:
      current_block = (Rpc - LABEL_64);
      goto continuation_74;

    case 60:
      current_block = (Rpc - LABEL_65);
      goto continuation_81;

    case 61:
      current_block = (Rpc - LABEL_66);
      goto continuation_80;

    case 62:
      current_block = (Rpc - LABEL_67);
      goto continuation_78;

    case 63:
      current_block = (Rpc - LABEL_68);
      goto continuation_85;

    case 64:
      current_block = (Rpc - LABEL_69);
      goto continuation_84;

    case 65:
      current_block = (Rpc - LABEL_70);
      goto continuation_82;

    case 66:
      current_block = (Rpc - LABEL_71);
      goto continuation_86;

    case 67:
      current_block = (Rpc - LABEL_72);
      goto continuation_87;

    case 68:
      current_block = (Rpc - LABEL_73);
      goto continuation_91;

    case 69:
      current_block = (Rpc - LABEL_74);
      goto continuation_90;

    case 70:
      current_block = (Rpc - LABEL_75);
      goto continuation_88;

    case 71:
      current_block = (Rpc - LABEL_76);
      goto continuation_94;

    case 72:
      current_block = (Rpc - LABEL_77);
      goto continuation_92;

    case 73:
      current_block = (Rpc - LABEL_78);
      goto label_99;

    case 74:
      current_block = (Rpc - LABEL_79);
      goto label_100;

    case 75:
      current_block = (Rpc - LABEL_80);
      goto expression_96;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_96)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_79])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_100)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_99)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	1,
	1,
	1,
	1,
	2,
	1,
	2,
	2,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 28)
      goto label_98;
    blocks = (current_block [OBJECT_64]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_78])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_98)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_35);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_38);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_47);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_51);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_54);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_57);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_60);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_63);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_66);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_69);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_74);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd5.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7]), 2);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_76);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_mit_macros_so_a42d94633f78fac6 [28] =
  {
    { "mit_macros_so_code_1", 49, mit_macros_so_code_1 },
    { "mit_macros_so_code_2", 13, mit_macros_so_code_2 },
    { "mit_macros_so_code_3", 40, mit_macros_so_code_3 },
    { "mit_macros_so_code_4", 4, mit_macros_so_code_4 },
    { "mit_macros_so_code_5", 30, mit_macros_so_code_5 },
    { "mit_macros_so_code_6", 36, mit_macros_so_code_6 },
    { "mit_macros_so_code_7", 11, mit_macros_so_code_7 },
    { "mit_macros_so_code_8", 2, mit_macros_so_code_8 },
    { "mit_macros_so_code_9", 2, mit_macros_so_code_9 },
    { "mit_macros_so_code_10", 11, mit_macros_so_code_10 },
    { "mit_macros_so_code_11", 22, mit_macros_so_code_11 },
    { "mit_macros_so_code_12", 16, mit_macros_so_code_12 },
    { "mit_macros_so_code_13", 9, mit_macros_so_code_13 },
    { "mit_macros_so_code_14", 87, mit_macros_so_code_14 },
    { "mit_macros_so_code_15", 9, mit_macros_so_code_15 },
    { "mit_macros_so_code_16", 26, mit_macros_so_code_16 },
    { "mit_macros_so_code_17", 48, mit_macros_so_code_17 },
    { "mit_macros_so_code_18", 49, mit_macros_so_code_18 },
    { "mit_macros_so_code_19", 29, mit_macros_so_code_19 },
    { "mit_macros_so_code_20", 13, mit_macros_so_code_20 },
    { "mit_macros_so_code_21", 9, mit_macros_so_code_21 },
    { "mit_macros_so_code_22", 22, mit_macros_so_code_22 },
    { "mit_macros_so_code_23", 27, mit_macros_so_code_23 },
    { "mit_macros_so_code_24", 8, mit_macros_so_code_24 },
    { "mit_macros_so_code_25", 2, mit_macros_so_code_25 },
    { "mit_macros_so_code_26", 2, mit_macros_so_code_26 },
    { "mit_macros_so_code_27", 13, mit_macros_so_code_27 },
    { "mit_macros_so_code_28", 12, mit_macros_so_code_28 }
  };

int
decl_mit_macros_so_a42d94633f78fac6 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_mit_macros_so_a42d94633f78fac6);
  return (0);
}

DECLARE_COMPILED_CODE ("mit-macros.so", 76, decl_mit_macros_so_a42d94633f78fac6, mit_macros_so_a42d94633f78fac6)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_mit_macros_so_data_a42d94633f78fac6 [8584] =
  "\xe6\x01\x3f\xc3\x12\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x0d"
  "\xba\x0d\xbb\x0d\xbc\x0d\xbd\x0d\xbe\x08\x8a\xb4\xb6\x08\x89\x0d"
  "\xbf\x08\x0d\x1c\xc1\x1c\x0d\x1c\xb6\xb5\x0d\x1c\x08\x8a\x08\x89"
  "\xc1\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x0d\x08\x1b\x0d\x1c"
  "\x0d\x1b\x1b\x1b\x08\x8b\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x1b\x0d"
  "\x0d\x0d\x0d\x0d\x1c\x08\x0d\x1b\x0d\x1c\xb4\xb4\xb5\xb4\x08\x8a"
  "\xb4\xb5\xb4\xb4\x0d\x1c\xb4\x08\x8b\x08\x8c\x1b\x0d\x1c\x24\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84"
  "\x88\x08\x0d\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x08\x0d\x1c\x1b\x1b\xb4\x1b\x0d"
  "\x1c\x08\x8a\xb6\x0d\x88\x1b\x1b\x08\x8a\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x0d\x1c\x0d\x0d\x1c\x08\x0c\x1b\x0d\x0d\x1b\x0d\x1c\x1b"
  "\x0d\x1b\xb5\xb4\x1b\x1b\x08\x8a\x08\x89\x1b\x1b\x08\x8a\xb4\xb5"
  "\xb4\x1b\x1b\x08\x8a\x08\x89\x1b\x1b\x08\x8b\x1b\x1b\x0d\x1c\x0d"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\x1b\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x1b\x0d\x1c\xb5"
  "\xb6\x08\x89\x1b\x1b\x08\x8b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\x1b\x1b\x1b\x1b"
  "\x0d\x1c\x1b\xb5\xb4\x1b\x1b\x08\x8a\x08\x89\x1b\x1b\x08\x8b\x0d"
  "\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x08\x1b\x1b\x1b\x1b\x1b\x1b\xb5\xb4\x1b\x1b\x08"
  "\x8a\x08\x89\x1b\x1b\x08\x8b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x07\x0d\x1c"
  "\x1b\x1b\xb5\x1b\x08\x8a\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\xb1\x0d\x0d\x1b\x0d\x0d\x1b\xb7\x1b\x1b\x06\x07"
  "\x85\xc2\x02\x08\x1b\x1b\x1b\x1b\x1b\x1b\xb6\xb5\x1b\x08\x8a\x08"
  "\x8b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x08\x0c\x1b\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x08\x1b\x1b\x0d\x1b\xb5\xb4\x1b\x1b\x1b\x08\x8b\x08\x89"
  "\x1b\x1b\x08\x89\xb5\x1b\x08\x8c\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0c"
  "\x1b\xb7\xb1\x08\x0c\x0c\x1b\x0d\x0c\x1b\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\xbf\x1b\x0d\x0d\x0d"
  "\x0c\x0d\x0d\x0d\x08\x1b\x80\x1b\x1b\x1b\x1b\x08\x89\x28\x1b\x28"
  "\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb4\x1b\x08\x89\x1b\x08\x88\xb4\x08\x1b\x07\xb5"
  "\xb6\x08\x89\xb5\x1b\x08\x8a\x08\xb5\x1b\x08\x8a\x1b\xb2\x1b\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\xb4\xb4\x1b\x1b\x08\x8b\xb4"
  "\x1b\x08\x89\x1b\x0d\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x02\x88\xb7\x0d\x08"
  "\x1b\x1b\x1b\x1b\x1b\x08\x8a\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9"
  "\x1d\xb0\x02\x88\x1b\x1b\x1b\x08\xb4\xb5\xb4\x08\x8a\x1b\x1b\x08"
  "\x8a\xb4\x1b\x08\x89\x1b\x1b\x1b\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x0d\x08\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b"
  "\xb5\x1b\x1b\x1b\x08\x8a\x08\x89\x1b\x1b\x08\x8b\x0d\x1b\xb7\x24"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\x1b\x1b\x1b"
  "\x1b\xb5\xb4\xb5\xb6\x08\x8a\x08\x89\x1b\x1b\x08\x8b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x24\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x24\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x0d\x08\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\xb3\x1b\x0c\x1b\x08\x1b\x06\x07\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\xb1\x2a\x0d\xb2\x2a\x0d\x1b\x2a\x1b\x2a"
  "\x0d\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x1b\x2a\x0d\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x2a\x0d\x1b"
  "\x1b\x2a\x1b\x2a\x1b\x1b\x0d\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x1b\x2a\xc2\x02\x02\x0d\xc3\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x08\x14\x1b\x2a\x28\x0d\x26\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f"
  "\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d"
  "\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63"
  "\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65"
  "\x2f\x2e\x2f\x6d\x69\x74\x2d\x6d\x61\x63\x72\x6f\x73\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x03\x6f\x72\x04\x61\x6e\x64\x04\x6e"
  "\x6f\x74\x0b\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x02\x2a\x06"
  "\x64\x61\x74\x75\x6d\x05\x65\x6c\x73\x65\x06\x62\x65\x67\x69\x6e"
  "\x09\x04\x63\x61\x72\x0a\x02\x2b\x0b\x05\x66\x6f\x72\x6d\x0c\x04"
  "\x63\x64\x72\x0d\x18\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x2d\x73"
  "\x72\x66\x69\x2d\x66\x65\x61\x74\x75\x72\x65\x73\x0e\x02\x04\x0e"
  "\x73\x79\x6e\x74\x61\x78\x2d\x6d\x61\x74\x63\x68\x3f\x0f\x03\x12"
  "\x69\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x2d\x73\x79\x6e\x74\x61"
  "\x78\x10\x03\x0c\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x3f\x11"
  "\x04\x04\x61\x6e\x79\x05\x7d\x64\x81\x85\x02\x7c\x62\x81\x83\x02"
  "\x7b\x60\x81\x85\x02\x7a\x5e\x81\x85\x02\x79\x5c\x81\x85\x02\x78"
  "\x5a\x81\x83\x02\x77\x58\x81\x8d\x02\x76\x56\x81\x85\x02\x75\x54"
  "\x81\x85\x02\x74\x52\x81\x8b\x02\x73\x50\x81\x89\x02\x72\x4e\x81"
  "\x89\x02\x71\x4c\x81\x89\x02\x70\x4a\x81\x8d\x02\x6f\x48\x81\x8b"
  "\x02\x6e\x46\x81\x89\x02\x6d\x44\x81\x89\x02\x6c\x42\x81\x89\x02"
  "\x6b\x40\x81\x8d\x02\x6a\x3e\x81\x89\x02\x69\x3c\x81\x8b\x02\x68"
  "\x3a\x81\x89\x02\x67\x38\x81\x89\x02\x66\x36\x81\x89\x02\x65\x34"
  "\x81\x89\x02\x64\x32\x81\x85\x02\x63\x30\x81\x89\x02\x62\x2e\x81"
  "\x8b\x02\x61\x2c\x81\x89\x02\x60\x2a\x81\x89\x02\x5f\x28\x81\x85"
  "\x02\x5e\x26\x81\x83\x02\x5d\x24\x81\x83\x02\x5c\x22\x81\x8d\x02"
  "\x5b\x20\x81\x85\x02\x5a\x1e\x81\x89\x02\x59\x1c\x81\x89\x02\x58"
  "\x1a\x81\x89\x02\x57\x18\x81\x83\x02\x56\x16\x81\x83\x02\x55\x14"
  "\x81\x83\x02\x54\x12\x81\x87\x02\x53\x10\x81\x87\x02\x52\x0e\x81"
  "\x85\x02\x51\x0c\x81\x89\x02\x50\x0a\x81\x89\x02\x4f\x08\x81\x83"
  "\x02\x4e\x06\x81\x8b\x02\x4d\x04\x85\x08\x63\x7c\x12\x02\x11\x63"
  "\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x76\x61\x6c\x75\x65\x73\x0a"
  "\x07\x6c\x61\x6d\x62\x64\x61\x13\x09\x72\x34\x72\x73\x2d\x62\x76"
  "\x6c\x0c\x0b\x0c\x0d\x04\x0f\x03\x10\x03\x8a\x01\x1c\x81\x8b\x02"
  "\x89\x01\x1a\x81\x8b\x02\x88\x01\x18\x81\x8b\x02\x87\x01\x16\x81"
  "\x8b\x02\x86\x01\x14\x81\x8b\x02\x85\x01\x12\x81\x8b\x02\x84\x01"
  "\x10\x81\x89\x02\x83\x01\x0e\x81\x89\x02\x82\x01\x0c\x81\x89\x02"
  "\x81\x01\x0a\x81\x87\x02\x80\x01\x08\x81\x87\x02\x7f\x06\x81\x89"
  "\x02\x7e\x04\x85\x08\x1b\x29\x14\x02\x09\x11\x6d\x61\x6b\x65\x2d"
  "\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x13\x72\x65\x63\x6f"
  "\x72\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f\x72\x10\x72"
  "\x65\x63\x6f\x72\x64\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x10\x72"
  "\x65\x63\x6f\x72\x64\x2d\x6d\x6f\x64\x69\x66\x69\x65\x72\x06\x71"
  "\x75\x6f\x74\x65\x15\x11\x72\x65\x63\x6f\x72\x64\x2d\x70\x72\x65"
  "\x64\x69\x63\x61\x74\x65\x0a\x07\x64\x65\x66\x69\x6e\x65\x16\x02"
  "\x3f\x17\x0d\x04\x63\x61\x72\x18\x02\x04\x0f\x03\x10\x04\x0b\x61"
  "\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70\x04\x04\x6d\x61\x70\x19\x05"
  "\xb2\x01\x52\x81\x95\x02\xb1\x01\x50\x81\x97\x02\xb0\x01\x4e\x81"
  "\x95\x02\xaf\x01\x4c\x81\x99\x02\xae\x01\x4a\x81\x95\x02\xad\x01"
  "\x48\x81\x8b\x02\xac\x01\x46\x81\x8b\x02\xab\x01\x44\x81\x89\x02"
  "\xaa\x01\x42\x81\x95\x02\xa9\x01\x40\x81\x87\x02\xa8\x01\x3e\x81"
  "\x87\x02\xa7\x01\x3c\x81\x85\x02\xa6\x01\x3a\x81\x85\x02\xa5\x01"
  "\x38\x81\x89\x02\xa4\x01\x36\x81\x89\x02\xa3\x01\x34\x81\x89\x02"
  "\xa2\x01\x32\x81\x87\x02\xa1\x01\x30\x81\x93\x02\xa0\x01\x2e\x81"
  "\x91\x02\x9f\x01\x2c\x81\x91\x02\x9e\x01\x2a\x81\x8f\x02\x9d\x01"
  "\x28\x81\x8f\x02\x9c\x01\x26\x81\x8f\x02\x9b\x01\x24\x81\x8f\x02"
  "\x9a\x01\x22\x81\x8d\x02\x99\x01\x20\x81\x8d\x02\x98\x01\x1e\x81"
  "\x8d\x02\x97\x01\x1c\x81\x8d\x02\x96\x01\x1a\x81\x8b\x02\x95\x01"
  "\x18\x81\x8b\x02\x94\x01\x16\x81\x8b\x02\x93\x01\x14\x81\x8b\x02"
  "\x92\x01\x12\x81\x89\x02\x91\x01\x10\x81\x89\x02\x90\x01\x0e\x81"
  "\x89\x02\x8f\x01\x0c\x81\x89\x02\x8e\x01\x0a\x81\x87\x02\x8d\x01"
  "\x08\x81\x87\x02\x8c\x01\x06\x81\x89\x02\x8b\x01\x04\x85\x08\x51"
  "\x6b\x1a\x02\x0f\x6b\x65\x79\x77\x6f\x72\x64\x3a\x64\x65\x66\x69"
  "\x6e\x65\x02\x04\x12\x70\x61\x72\x73\x65\x2d\x64\x65\x66\x69\x6e"
  "\x65\x2d\x66\x6f\x72\x6d\x1b\x02\xb6\x01\x0a\x81\x85\x02\xb5\x01"
  "\x08\x84\x06\xb4\x01\x06\x81\x87\x02\xb3\x01\x04\x85\x08\x09\x12"
  "\x1c\x02\x0d\x6e\x61\x6d\x65\x64\x2d\x6c\x61\x6d\x62\x64\x61\x1d"
  "\x13\x0a\x17\x0b\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x1e\x08"
  "\x6d\x69\x74\x2d\x62\x76\x6c\x0b\x0c\x0d\x04\x0f\x03\x11\x03\x10"
  "\x02\x16\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x1f\x04\x1b\x06\xd4\x01\x3e\x81\x85"
  "\x02\xd3\x01\x3c\x81\x87\x02\xd2\x01\x3a\x81\x87\x02\xd1\x01\x38"
  "\x81\x87\x02\xd0\x01\x36\x81\x87\x02\xcf\x01\x34\x81\x87\x02\xce"
  "\x01\x32\x81\x87\x02\xcd\x01\x30\x81\x85\x02\xcc\x01\x2e\x81\x85"
  "\x02\xcb\x01\x2c\x81\x87\x02\xca\x01\x2a\x81\x87\x02\xc9\x01\x28"
  "\x81\x87\x02\xc8\x01\x26\x81\x87\x02\xc7\x01\x24\x81\x87\x02\xc6"
  "\x01\x22\x81\x85\x02\xc5\x01\x20\x81\x85\x02\xc4\x01\x1e\x81\x85"
  "\x02\xc3\x01\x1c\x81\x87\x02\xc2\x01\x1a\x81\x87\x02\xc1\x01\x18"
  "\x81\x87\x02\xc0\x01\x16\x81\x85\x02\xbf\x01\x14\x81\x85\x02\xbe"
  "\x01\x12\x81\x85\x02\xbd\x01\x10\x81\x87\x02\xbc\x01\x0e\x81\x87"
  "\x02\xbb\x01\x0c\x81\x87\x02\xba\x01\x0a\x81\x87\x02\xb9\x01\x08"
  "\x81\x85\x02\xb8\x01\x06\x81\x87\x02\xb7\x01\x04\x84\x06\x3d\x52"
  "\x20\x02\x0a\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x21\x13\x69\x6e"
  "\x74\x65\x67\x72\x61\x74\x65\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72"
  "\x22\x08\x64\x65\x63\x6c\x61\x72\x65\x23\x05\x69\x74\x65\x72\x05"
  "\x74\x65\x6d\x70\x24\x07\x6b\x65\x72\x6e\x65\x6c\x04\x6c\x65\x74"
  "\x25\x22\x55\x6e\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x6e"
  "\x61\x6d\x65\x64\x2d\x6c\x65\x74\x2d\x73\x74\x72\x61\x74\x65\x67"
  "\x79\x3a\x20\x1d\x08\x6c\x65\x74\x72\x65\x63\x2a\x07\x6c\x65\x74"
  "\x72\x65\x63\x16\x14\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x64\x65"
  "\x66\x69\x6e\x69\x74\x69\x6f\x6e\x26\x13\x0c\x66\x69\x78\x65\x64"
  "\x2d\x70\x6f\x69\x6e\x74\x0a\x17\x1e\x0b\x0c\x17\x1e\x0b\x0c\x0d"
  "\x18\x13\x6e\x61\x6d\x65\x64\x2d\x6c\x65\x74\x2d\x73\x74\x72\x61"
  "\x74\x65\x67\x79\x27\x0c\x6b\x65\x79\x77\x6f\x72\x64\x3a\x6c\x65"
  "\x74\x04\x04\x0f\x04\x19\x02\x1f\x03\x10\x03\x17\x6e\x6f\x72\x6d"
  "\x61\x6c\x69\x7a\x65\x2d\x6c\x65\x74\x2d\x62\x69\x6e\x64\x69\x6e"
  "\x67\x73\x28\x04\x06\x65\x72\x72\x6f\x72\x29\x03\x1a\x6d\x61\x6b"
  "\x65\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x2d\x69\x64\x65\x6e"
  "\x74\x69\x66\x69\x65\x72\x2a\x08\xf8\x01\x4a\x81\x9b\x02\xf7\x01"
  "\x48\x81\x99\x02\xf6\x01\x46\x81\x97\x02\xf5\x01\x44\x83\x04\xf4"
  "\x01\x42\x81\x95\x02\xf3\x01\x40\x81\x95\x02\xf2\x01\x3e\x81\x95"
  "\x02\xf1\x01\x3c\x81\x95\x02\xf0\x01\x3a\x81\x93\x02\xef\x01\x38"
  "\x81\x93\x02\xee\x01\x36\x81\x93\x02\xed\x01\x34\x81\x93\x02\xec"
  "\x01\x32\x81\x89\x02\xeb\x01\x30\x81\x87\x02\xea\x01\x2e\x81\x87"
  "\x02\xe9\x01\x2c\x81\x93\x02\xe8\x01\x2a\x81\x91\x02\xe7\x01\x28"
  "\x81\x8f\x02\xe6\x01\x26\x81\x87\x02\xe5\x01\x24\x81\x83\x02\xe4"
  "\x01\x22\x81\x83\x02\xe3\x01\x20\x83\x04\xe2\x01\x1e\x81\x93\x02"
  "\xe1\x01\x1c\x81\x8d\x02\xe0\x01\x1a\x81\x8b\x02\xdf\x01\x18\x81"
  "\x8b\x02\xde\x01\x16\x81\x89\x02\xdd\x01\x14\x81\x89\x02\xdc\x01"
  "\x12\x81\x89\x02\xdb\x01\x10\x81\x87\x02\xda\x01\x0e\x81\x87\x02"
  "\xd9\x01\x0c\x81\x87\x02\xd8\x01\x0a\x81\x89\x02\xd7\x01\x08\x81"
  "\x87\x02\xd6\x01\x06\x81\x89\x02\xd5\x01\x04\x85\x08\x49\x73\x2b"
  "\x02\x08\x0a\x0d\x04\x19\x02\x1f\x03\x83\x02\x18\x81\x85\x02\x82"
  "\x02\x16\x81\x83\x02\x81\x02\x14\x81\x83\x02\x80\x02\x12\x83\x04"
  "\xff\x01\x10\x81\x85\x02\xfe\x01\x0e\x81\x85\x02\xfd\x01\x0c\x81"
  "\x87\x02\xfc\x01\x0a\x81\x87\x02\xfb\x01\x08\x81\x83\x02\xfa\x01"
  "\x06\x81\x83\x02\xf9\x01\x04\x83\x04\x17\x22\x2c\x02\x09\x25\x04"
  "\x0c\x65\x78\x70\x61\x6e\x64\x2f\x6c\x65\x74\x2a\x2d\x02\x85\x02"
  "\x06\x81\x87\x02\x84\x02\x04\x85\x08\x05\x0c\x2e\x02\x0a\x0b\x6c"
  "\x65\x74\x2d\x73\x79\x6e\x74\x61\x78\x04\x2d\x02\x87\x02\x06\x81"
  "\x87\x02\x86\x02\x04\x85\x08\x05\x0c\x2f\x02\x0b\x0a\x0d\x08\x6b"
  "\x65\x79\x77\x6f\x72\x64\x30\x0b\x0c\x04\x0d\x73\x79\x6e\x74\x61"
  "\x78\x2d\x63\x68\x65\x63\x6b\x31\x02\x92\x02\x18\xfd\xff\x03\x91"
  "\x02\x16\xfd\xff\x03\x90\x02\x14\xfd\xff\x03\x8f\x02\x12\xfd\xff"
  "\x03\x8e\x02\x10\xff\xff\x03\x8d\x02\x0e\x81\x87\x02\x8c\x02\x0c"
  "\x81\x87\x02\x8b\x02\x0a\x81\x85\x02\x8a\x02\x08\x81\x85\x02\x89"
  "\x02\x06\x81\x85\x02\x88\x02\x04\x84\x06\x17\x21\x32\x02\x0c\x15"
  "\x23\x5b\x75\x6e\x6e\x61\x6d\x65\x64\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x5d\x33\x0a\x0d\x13\x1d\x05\x73\x65\x74\x21\x34\x30"
  "\x17\x1e\x0b\x0c\x05\x63\x61\x64\x72\x18\x03\x04\x31\x04\x19\x05"
  "\x19\x03\x13\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2d\x3e\x73"
  "\x79\x6d\x62\x6f\x6c\x02\x1f\x03\x2a\x07\xa8\x02\x2e\x81\x95\x02"
  "\xa7\x02\x2c\x81\x87\x02\xa6\x02\x2a\x81\x87\x02\xa5\x02\x28\x81"
  "\x99\x02\xa4\x02\x26\x81\x97\x02\xa3\x02\x24\x81\x95\x02\xa2\x02"
  "\x22\x81\x83\x02\xa1\x02\x20\x83\x04\xa0\x02\x1e\x81\x99\x02\x9f"
  "\x02\x1c\x81\x93\x02\x9e\x02\x1a\x81\x93\x02\x9d\x02\x18\x81\x91"
  "\x02\x9c\x02\x16\x81\x85\x02\x9b\x02\x14\x83\x04\x9a\x02\x12\x81"
  "\x8f\x02\x99\x02\x10\x81\x8d\x02\x98\x02\x0e\x81\x8d\x02\x97\x02"
  "\x0c\x81\x8b\x02\x96\x02\x0a\x81\x89\x02\x95\x02\x08\x81\x87\x02"
  "\x94\x02\x06\x81\x87\x02\x93\x02\x04\x85\x08\x2d\x48\x35\x02\x0d"
  "\x33\x0a\x0d\x13\x1d\x34\x30\x17\x1e\x0b\x0c\x18\x02\x04\x31\x04"
  "\x19\x02\x1f\x04\x07\x61\x70\x70\x65\x6e\x64\x33\x05\xb8\x02\x22"
  "\x81\x93\x02\xb7\x02\x20\x81\x85\x02\xb6\x02\x1e\x81\x95\x02\xb5"
  "\x02\x1c\x81\x97\x02\xb4\x02\x1a\x81\x91\x02\xb3\x02\x18\x83\x04"
  "\xb2\x02\x16\x81\x93\x02\xb1\x02\x14\x81\x93\x02\xb0\x02\x12\x81"
  "\x8f\x02\xaf\x02\x10\x81\x8d\x02\xae\x02\x0e\x81\x8d\x02\xad\x02"
  "\x0c\x81\x8b\x02\xac\x02\x0a\x81\x89\x02\xab\x02\x08\x81\x87\x02"
  "\xaa\x02\x06\x81\x87\x02\xa9\x02\x04\x85\x08\x21\x37\x1d\x02\x0e"
  "\x0a\x03\x69\x66\x36\x0d\x30\x1e\x04\x31\x02\xc1\x02\x14\xfd\xff"
  "\x03\xc0\x02\x12\xfd\xff\x03\xbf\x02\x10\xfd\xff\x03\xbe\x02\x0e"
  "\xfd\xff\x03\xbd\x02\x0c\xff\xff\x03\xbc\x02\x0a\x81\x89\x02\xbb"
  "\x02\x08\x81\x87\x02\xba\x02\x06\x81\x87\x02\xb9\x02\x04\x85\x08"
  "\x13\x1f\x37\x02\x0f\x13\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64"
  "\x20\x63\x6c\x61\x75\x73\x65\x3a\x05\x6d\x65\x6d\x71\x05\x6d\x65"
  "\x6d\x76\x36\x04\x65\x71\x3f\x05\x65\x71\x76\x3f\x25\x09\x15\x0d"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1e\x24\x0a\x0d"
  "\x30\x1e\x0b\x1e\x04\x31\x02\x16\x75\x6e\x73\x70\x65\x63\x69\x66"
  "\x69\x63\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x38\x03\x11"
  "\x03\x09\x62\x6f\x6f\x6c\x65\x61\x6e\x3f\x04\x09\x66\x6f\x72\x2d"
  "\x61\x6c\x6c\x3f\x03\x06\x6c\x69\x73\x74\x3f\x39\x04\x0d\x73\x79"
  "\x6e\x74\x61\x78\x2d\x65\x72\x72\x6f\x72\x3a\x08\x98\x03\xb0\x01"
  "\x81\x8b\x02\x97\x03\xae\x01\x81\x8b\x02\x96\x03\xac\x01\x81\x87"
  "\x02\x95\x03\xaa\x01\x81\x89\x02\x94\x03\xa8\x01\x81\x87\x02\x93"
  "\x03\xa6\x01\x81\x89\x02\x92\x03\xa4\x01\x81\x87\x02\x91\x03\xa2"
  "\x01\x81\x89\x02\x90\x03\xa0\x01\x81\x87\x02\x8f\x03\x9e\x01\x81"
  "\x89\x02\x8e\x03\x9c\x01\x81\x93\x02\x8d\x03\x9a\x01\x81\x87\x02"
  "\x8c\x03\x98\x01\x81\x8b\x02\x8b\x03\x96\x01\x81\x87\x02\x8a\x03"
  "\x94\x01\x81\x89\x02\x89\x03\x92\x01\x81\x87\x02\x88\x03\x90\x01"
  "\x81\x89\x02\x87\x03\x8e\x01\x81\x89\x02\x86\x03\x8c\x01\x81\x87"
  "\x02\x85\x03\x8a\x01\x81\x89\x02\x84\x03\x88\x01\x81\x87\x02\x83"
  "\x03\x86\x01\x81\x87\x02\x82\x03\x84\x01\x81\x87\x02\x81\x03\x82"
  "\x01\x81\x87\x02\x80\x03\x80\x01\x81\x89\x02\xff\x02\x7e\x81\x89"
  "\x02\xfe\x02\x7c\x81\x87\x02\xfd\x02\x7a\x81\x95\x02\xfc\x02\x78"
  "\x81\x85\x02\xfb\x02\x76\x81\x89\x02\xfa\x02\x74\x81\x89\x02\xf9"
  "\x02\x72\x81\x87\x02\xf8\x02\x70\x81\x87\x02\xf7\x02\x6e\x81\x87"
  "\x02\xf6\x02\x6c\x81\x89\x02\xf5\x02\x6a\x81\x85\x02\xf4\x02\x68"
  "\x81\x89\x02\xf3\x02\x66\x81\x89\x02\xf2\x02\x64\x81\x85\x02\xf1"
  "\x02\x62\x81\x89\x02\xf0\x02\x60\x81\x89\x02\xef\x02\x5e\x81\x89"
  "\x02\xee\x02\x5c\x81\x85\x02\xed\x02\x5a\x81\x85\x02\xec\x02\x58"
  "\x81\x85\x02\xeb\x02\x56\x81\x93\x02\xea\x02\x54\x81\x93\x02\xe9"
  "\x02\x52\x81\x91\x02\xe8\x02\x50\x81\x83\x02\xe7\x02\x4e\x83\x04"
  "\xe6\x02\x4c\x81\x83\x02\xe5\x02\x4a\x81\x89\x02\xe4\x02\x48\x81"
  "\x87\x02\xe3\x02\x46\x81\x87\x02\xe2\x02\x44\x81\x87\x02\xe1\x02"
  "\x42\x81\x87\x02\xe0\x02\x40\x81\x85\x02\xdf\x02\x3e\x81\x87\x02"
  "\xde\x02\x3c\x81\x87\x02\xdd\x02\x3a\x81\x87\x02\xdc\x02\x38\x81"
  "\x87\x02\xdb\x02\x36\x81\x85\x02\xda\x02\x34\x81\x85\x02\xd9\x02"
  "\x32\x81\x85\x02\xd8\x02\x30\x81\x85\x02\xd7\x02\x2e\x81\x87\x02"
  "\xd6\x02\x2c\x81\x87\x02\xd5\x02\x2a\x81\x87\x02\xd4\x02\x28\x81"
  "\x85\x02\xd3\x02\x26\x81\x85\x02\xd2\x02\x24\x81\x85\x02\xd1\x02"
  "\x22\x81\x87\x02\xd0\x02\x20\x81\x87\x02\xcf\x02\x1e\x81\x85\x02"
  "\xce\x02\x1c\x81\x85\x02\xcd\x02\x1a\x81\x85\x02\xcc\x02\x18\x81"
  "\x85\x02\xcb\x02\x16\x81\x85\x02\xca\x02\x14\x81\x85\x02\xc9\x02"
  "\x12\x81\x95\x02\xc8\x02\x10\x81\x95\x02\xc7\x02\x0e\x81\x95\x02"
  "\xc6\x02\x0c\x81\x93\x02\xc5\x02\x0a\x81\x93\x02\xc4\x02\x08\x81"
  "\x93\x02\xc3\x02\x06\x81\x87\x02\xc2\x02\x04\x85\x08\xaf\x01\xd6"
  "\x01\x3b\x02\x10\x24\x46\x6f\x72\x6d\x20\x6d\x75\x73\x74\x20\x68"
  "\x61\x76\x65\x20\x61\x74\x20\x6c\x65\x61\x73\x74\x20\x6f\x6e\x65"
  "\x20\x63\x6c\x61\x75\x73\x65\x3a\x0a\x0d\x04\x3a\x02\x38\x07\x13"
  "\x65\x78\x70\x61\x6e\x64\x2f\x63\x6f\x6e\x64\x2d\x63\x6c\x61\x75"
  "\x73\x65\x3c\x04\xa1\x03\x14\xfd\xff\x03\xa0\x03\x12\xfd\xff\x03"
  "\x9f\x03\x10\xfd\xff\x03\x9e\x03\x0e\xff\xff\x03\x9d\x03\x0c\x81"
  "\x8b\x02\x9c\x03\x0a\x81\x89\x02\x9b\x03\x08\x81\x87\x02\x9a\x03"
  "\x06\x85\x08\x99\x03\x04\x81\x89\x02\x13\x22\x3d\x02\x11\x25\x09"
  "\x0a\x0d\x08\x64\x6f\x2d\x6c\x6f\x6f\x70\x30\x1e\x17\x1e\x0b\x0c"
  "\x0c\x04\x31\x04\x19\x04\x33\x07\x3c\x05\xbb\x03\x36\x81\x8d\x02"
  "\xba\x03\x34\x81\x95\x02\xb9\x03\x32\x81\x95\x02\xb8\x03\x30\x81"
  "\x95\x02\xb7\x03\x2e\x81\x8f\x02\xb6\x03\x2c\x81\x85\x02\xb5\x03"
  "\x2a\x81\x83\x02\xb4\x03\x28\x81\x83\x02\xb3\x03\x26\x83\x04\xb2"
  "\x03\x24\x81\x8d\x02\xb1\x03\x22\x81\x83\x02\xb0\x03\x20\x81\x83"
  "\x02\xaf\x03\x1e\x81\x83\x02\xae\x03\x1c\x81\x83\x02\xad\x03\x1a"
  "\x83\x04\xac\x03\x18\x81\x91\x02\xab\x03\x16\x81\x91\x02\xaa\x03"
  "\x14\x81\x91\x02\xa9\x03\x12\x81\x8f\x02\xa8\x03\x10\x81\x8d\x02"
  "\xa7\x03\x0e\x81\x8b\x02\xa6\x03\x0c\x81\x89\x02\xa5\x03\x0a\x81"
  "\x89\x02\xa4\x03\x08\x81\x87\x02\xa3\x03\x06\x81\x87\x02\xa2\x03"
  "\x04\x85\x08\x35\x48\x3e\x02\x12\x25\x36\x16\x49\x6c\x6c\x2d\x66"
  "\x6f\x72\x6d\x65\x64\x20\x3d\x3e\x20\x63\x6c\x61\x75\x73\x65\x3a"
  "\x24\x18\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x20\x45\x4c\x53"
  "\x45\x20\x63\x6c\x61\x75\x73\x65\x3a\x17\x4d\x69\x73\x70\x6c\x61"
  "\x63\x65\x64\x20\x45\x4c\x53\x45\x20\x63\x6c\x61\x75\x73\x65\x3a"
  "\x09\x03\x3d\x3e\x13\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x20"
  "\x63\x6c\x61\x75\x73\x65\x3a\x0d\x0a\x03\x11\x03\x39\x04\x3a\x04"
  "\xeb\x03\x62\x81\x8f\x02\xea\x03\x60\x81\x8f\x02\xe9\x03\x5e\x81"
  "\x8f\x02\xe8\x03\x5c\x81\x8d\x02\xe7\x03\x5a\x81\x8d\x02\xe6\x03"
  "\x58\x81\x8d\x02\xe5\x03\x56\x81\x8d\x02\xe4\x03\x54\x81\x8b\x02"
  "\xe3\x03\x52\x81\x8f\x02\xe2\x03\x50\x81\x8d\x02\xe1\x03\x4e\x81"
  "\x8d\x02\xe0\x03\x4c\x81\x8d\x02\xdf\x03\x4a\x81\x8f\x02\xde\x03"
  "\x48\x81\x8d\x02\xdd\x03\x46\x81\x8d\x02\xdc\x03\x44\x81\x8b\x02"
  "\xdb\x03\x42\x81\x8b\x02\xda\x03\x40\x81\x8b\x02\xd9\x03\x3e\x81"
  "\x8b\x02\xd8\x03\x3c\x81\x8b\x02\xd7\x03\x3a\x81\x8b\x02\xd6\x03"
  "\x38\x81\x8b\x02\xd5\x03\x36\x81\x8b\x02\xd4\x03\x34\x81\x8b\x02"
  "\xd3\x03\x32\x81\x8d\x02\xd2\x03\x30\x81\x8f\x02\xd1\x03\x2e\x81"
  "\x8d\x02\xd0\x03\x2c\x81\x8b\x02\xcf\x03\x2a\x81\x8d\x02\xce\x03"
  "\x28\x81\x8d\x02\xcd\x03\x26\x81\x8b\x02\xcc\x03\x24\x81\x8b\x02"
  "\xcb\x03\x22\x81\x8d\x02\xca\x03\x20\x81\x8d\x02\xc9\x03\x1e\x81"
  "\x8b\x02\xc8\x03\x1c\x81\x8b\x02\xc7\x03\x1a\x81\x8b\x02\xc6\x03"
  "\x18\x81\x8b\x02\xc5\x03\x16\x81\x8d\x02\xc4\x03\x14\x81\x8d\x02"
  "\xc3\x03\x12\x81\x8b\x02\xc2\x03\x10\x81\x8b\x02\xc1\x03\x0e\x81"
  "\x8b\x02\xc0\x03\x0c\x81\x8d\x02\xbf\x03\x0a\x87\x0c\xbe\x03\x08"
  "\x81\x8d\x02\xbd\x03\x06\x81\x8b\x02\xbc\x03\x04\x81\x8b\x02\x61"
  "\x79\x24\x02\x13\x05\x63\x6f\x6e\x73\x33\x0d\x6c\x69\x73\x74\x2d"
  "\x3e\x76\x65\x63\x74\x6f\x72\x07\x76\x65\x63\x74\x6f\x72\x05\x6c"
  "\x69\x73\x74\x17\x2c\x40\x20\x69\x6e\x20\x69\x6c\x6c\x65\x67\x61"
  "\x6c\x20\x63\x6f\x6e\x74\x65\x78\x74\x3a\x11\x75\x6e\x71\x75\x6f"
  "\x74\x65\x2d\x73\x70\x6c\x69\x63\x69\x6e\x67\x08\x75\x6e\x71\x75"
  "\x6f\x74\x65\x0b\x71\x75\x61\x73\x69\x71\x75\x6f\x74\x65\x15\x0a"
  "\x0d\x30\x1e\x04\x31\x03\x11\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d"
  "\x3e\x6c\x69\x73\x74\x04\x3a\x04\x19\x03\x39\x07\x9c\x04\x64\x81"
  "\x89\x02\x9b\x04\x62\x81\x85\x02\x9a\x04\x60\x81\x87\x02\x99\x04"
  "\x5e\x81\x89\x02\x98\x04\x5c\x81\x8d\x02\x97\x04\x5a\x81\x89\x02"
  "\x96\x04\x58\x81\x89\x02\x95\x04\x56\x81\x89\x02\x94\x04\x54\x81"
  "\x89\x02\x93\x04\x52\x81\x89\x02\x92\x04\x50\x81\x87\x02\x91\x04"
  "\x4e\x81\x87\x02\x90\x04\x4c\x81\x87\x02\x8f\x04\x4a\x81\x8d\x02"
  "\x8e\x04\x48\x81\x89\x02\x8d\x04\x46\x81\x89\x02\x8c\x04\x44\x81"
  "\x89\x02\x8b\x04\x42\x81\x89\x02\x8a\x04\x40\x81\x8b\x02\x89\x04"
  "\x3e\x81\x89\x02\x88\x04\x3c\x81\x87\x02\x87\x04\x3a\x81\x87\x02"
  "\x86\x04\x38\x81\x87\x02\x85\x04\x36\x81\x8d\x02\x84\x04\x34\x81"
  "\x89\x02\x83\x04\x32\x81\x8b\x02\x82\x04\x30\x81\x89\x02\x81\x04"
  "\x2e\x81\x87\x02\x80\x04\x2c\x81\x87\x02\xff\x03\x2a\x81\x89\x02"
  "\xfe\x03\x28\x81\x87\x02\xfd\x03\x26\x81\x89\x02\xfc\x03\x24\x81"
  "\x87\x02\xfb\x03\x22\x81\x87\x02\xfa\x03\x20\x81\x89\x02\xf9\x03"
  "\x1e\x81\x89\x02\xf8\x03\x1c\x81\x89\x02\xf7\x03\x1a\x81\x8b\x02"
  "\xf6\x03\x18\x81\x89\x02\xf5\x03\x16\x81\x8b\x02\xf4\x03\x14\x81"
  "\x89\x02\xf3\x03\x12\x81\x89\x02\xf2\x03\x10\x81\x89\x02\xf1\x03"
  "\x0e\x81\x89\x02\xf0\x03\x0c\x81\x89\x02\xef\x03\x0a\x81\x91\x02"
  "\xee\x03\x08\x81\x91\x02\xed\x03\x06\x81\x91\x02\xec\x03\x04\x85"
  "\x08\x63\x82\x01\x3a\x02\x14\x1e\x1e\x0a\x0c\x0c\x0d\x25\x09\x04"
  "\x0f\x03\x10\x03\xb9\x04\x3c\x81\x87\x02\xb8\x04\x3a\x81\x89\x02"
  "\xb7\x04\x38\x81\x87\x02\xb6\x04\x36\x81\x87\x02\xb5\x04\x34\x81"
  "\x87\x02\xb4\x04\x32\x81\x85\x02\xb3\x04\x30\x81\x87\x02\xb2\x04"
  "\x2e\x81\x85\x02\xb1\x04\x2c\x81\x87\x02\xb0\x04\x2a\x83\x04\xaf"
  "\x04\x28\x81\x87\x02\xae\x04\x26\x81\x87\x02\xad\x04\x24\x81\x87"
  "\x02\xac\x04\x22\x81\x85\x02\xab\x04\x20\x81\x95\x02\xaa\x04\x1e"
  "\x81\x8f\x02\xa9\x04\x1c\x81\x8f\x02\xa8\x04\x1a\x81\x8d\x02\xa7"
  "\x04\x18\x81\x8d\x02\xa6\x04\x16\x81\x8d\x02\xa5\x04\x14\x81\x8d"
  "\x02\xa4\x04\x12\x81\x8d\x02\xa3\x04\x10\x81\x8f\x02\xa2\x04\x0e"
  "\x81\x8d\x02\xa1\x04\x0c\x81\x8f\x02\xa0\x04\x0a\x81\x8b\x02\x9f"
  "\x04\x08\x81\x89\x02\x9e\x04\x06\x81\x87\x02\x9d\x04\x04\x85\x08"
  "\x3b\x4f\x39\x02\x15\x0a\x0b\x0c\x1e\x0d\x0f\x6b\x65\x79\x77\x6f"
  "\x72\x64\x3a\x61\x63\x63\x65\x73\x73\x02\x04\x0f\x03\x10\x03\xc6"
  "\x04\x1c\x81\x89\x02\xc5\x04\x1a\x81\x89\x02\xc4\x04\x18\x81\x89"
  "\x02\xc3\x04\x16\x81\x89\x02\xc2\x04\x14\x81\x87\x02\xc1\x04\x12"
  "\x81\x87\x02\xc0\x04\x10\x81\x87\x02\xbf\x04\x0e\x81\x89\x02\xbe"
  "\x04\x0c\x81\x87\x02\xbd\x04\x0a\x81\x89\x02\xbc\x04\x08\x81\x87"
  "\x02\xbb\x04\x06\x81\x89\x02\xba\x04\x04\x85\x08\x1b\x2a\x02\x16"
  "\x06\x64\x65\x6c\x61\x79\x0a\x0d\x30\x1e\x1e\x04\x31\x02\xcf\x04"
  "\x14\x81\x89\x02\xce\x04\x12\x81\x89\x02\xcd\x04\x10\x81\x89\x02"
  "\xcc\x04\x0e\x81\x89\x02\xcb\x04\x0c\x81\x87\x02\xca\x04\x0a\x81"
  "\x87\x02\xc9\x04\x08\x81\x87\x02\xc8\x04\x06\x81\x87\x02\xc7\x04"
  "\x04\x85\x08\x13\x1f\x02\x17\x22\x21\x0a\x0b\x0c\x1e\x0d\x09\x23"
  "\x16\x04\x0f\x03\x10\x04\x33\x04\xe5\x04\x2e\x81\x8f\x02\xe4\x04"
  "\x2c\x81\x8f\x02\xe3\x04\x2a\x81\x8f\x02\xe2\x04\x28\x81\x8f\x02"
  "\xe1\x04\x26\x81\x8f\x02\xe0\x04\x24\x81\x8d\x02\xdf\x04\x22\x81"
  "\x91\x02\xde\x04\x20\x81\x91\x02\xdd\x04\x1e\x81\x91\x02\xdc\x04"
  "\x1c\x81\x8f\x02\xdb\x04\x1a\x81\x8f\x02\xda\x04\x18\x81\x8d\x02"
  "\xd9\x04\x16\x81\x8f\x02\xd8\x04\x14\x81\x8f\x02\xd7\x04\x12\x81"
  "\x8d\x02\xd6\x04\x10\x81\x8f\x02\xd5\x04\x0e\x81\x8d\x02\xd4\x04"
  "\x0c\x81\x8f\x02\xd3\x04\x0a\x81\x8b\x02\xd2\x04\x08\x81\x89\x02"
  "\xd1\x04\x06\x81\x87\x02\xd0\x04\x04\x85\x08\x2d\x41\x22\x02\x18"
  "\x0a\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x06\x73\x77\x61\x70\x21"
  "\x0a\x0d\x16\x13\x25\x34\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66"
  "\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x0b\x75\x6e\x73\x70\x65\x63"
  "\x69\x66\x69\x63\x30\x0c\x17\x1e\x0b\x0c\x04\x63\x64\x72\x18\x04"
  "\x04\x31\x04\x19\x05\x19\x03\x2a\x03\x11\x04\x33\x07\x80\x05\x38"
  "\x81\x9f\x02\xff\x04\x36\x81\x83\x02\xfe\x04\x34\x81\x87\x02\xfd"
  "\x04\x32\x81\xa1\x02\xfc\x04\x30\x81\xa5\x02\xfb\x04\x2e\x81\x9d"
  "\x02\xfa\x04\x2c\x83\x04\xf9\x04\x2a\x81\x9b\x02\xf8\x04\x28\x81"
  "\x99\x02\xf7\x04\x26\x81\x97\x02\xf6\x04\x24\x81\x97\x02\xf5\x04"
  "\x22\x81\x95\x02\xf4\x04\x20\x81\x99\x02\xf3\x04\x1e\x81\x97\x02"
  "\xf2\x04\x1c\x81\x97\x02\xf1\x04\x1a\x81\x93\x02\xf0\x04\x18\x81"
  "\x97\x02\xef\x04\x16\x81\x95\x02\xee\x04\x14\x81\x95\x02\xed\x04"
  "\x12\x81\x91\x02\xec\x04\x10\x81\x8f\x02\xeb\x04\x0e\x81\x8d\x02"
  "\xea\x04\x0c\x81\x8b\x02\xe9\x04\x0a\x81\x89\x02\xe8\x04\x08\x81"
  "\x87\x02\xe7\x04\x06\x81\x87\x02\xe6\x04\x04\x85\x08\x37\x57\x34"
  "\x02\x19\x0a\x0d\x25\x23\x30\x0b\x0c\x04\x31\x02\x88\x05\x12\x81"
  "\x8d\x02\x87\x05\x10\x81\x8d\x02\x86\x05\x0e\x81\x8b\x02\x85\x05"
  "\x0c\x81\x8b\x02\x84\x05\x0a\x81\x89\x02\x83\x05\x08\x81\x87\x02"
  "\x82\x05\x06\x81\x87\x02\x81\x05\x04\x85\x08\x11\x1d\x31\x02\x1a"
  "\x13\x6b\x65\x79\x77\x6f\x72\x64\x3a\x75\x6e\x73\x70\x65\x63\x69"
  "\x66\x69\x63\x02\x8a\x05\x06\x81\x81\x02\x89\x05\x04\x82\x02\x05"
  "\x0b\x30\x02\x1b\x13\x6b\x65\x79\x77\x6f\x72\x64\x3a\x75\x6e\x61"
  "\x73\x73\x69\x67\x6e\x65\x64\x02\x8c\x05\x06\x81\x81\x02\x8b\x05"
  "\x04\x82\x02\x05\x0b\x2a\x02\x1c\x25\x0a\x0d\x07\x72\x65\x73\x75"
  "\x6c\x74\x03\x10\x04\x33\x03\x99\x05\x1c\x81\x89\x02\x98\x05\x1a"
  "\x81\x8b\x02\x97\x05\x18\x81\x8b\x02\x96\x05\x16\x81\x8b\x02\x95"
  "\x05\x14\x81\x89\x02\x94\x05\x12\x81\x89\x02\x93\x05\x10\x81\x89"
  "\x02\x92\x05\x0e\x81\x87\x02\x91\x05\x0c\x81\x89\x02\x90\x05\x0a"
  "\x81\x87\x02\x8f\x05\x08\x85\x08\x8e\x05\x06\x81\x89\x02\x8d\x05"
  "\x04\x81\x89\x02\x1b\x28\x33\x02\x1d\x36\x29\x12\x41\x73\x73\x65"
  "\x72\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x65\x64\x3a\x15\x0a\x0d"
  "\x03\x10\x02\xa5\x05\x1a\x81\x89\x02\xa4\x05\x18\x81\x8b\x02\xa3"
  "\x05\x16\x81\x89\x02\xa2\x05\x14\x81\x89\x02\xa1\x05\x12\x81\x89"
  "\x02\xa0\x05\x10\x81\x8b\x02\x9f\x05\x0e\x81\x89\x02\x9e\x05\x0c"
  "\x81\x89\x02\x9d\x05\x0a\x81\x87\x02\x9c\x05\x08\x81\x87\x02\x9b"
  "\x05\x06\x81\x87\x02\x9a\x05\x04\x85\x08\x19\x29\x36\x1d\x29\x29"
  "\x08\x3a\x62\x65\x67\x69\x6e\x30\x36\x04\x08\x3a\x61\x73\x73\x65"
  "\x72\x74\x33\x08\x1f\x2a\x04\x0f\x3a\x6c\x6f\x63\x61\x6c\x2d\x64"
  "\x65\x63\x6c\x61\x72\x65\x38\x30\x04\x0b\x3a\x66\x6c\x75\x69\x64"
  "\x2d\x6c\x65\x74\x31\x04\x13\x3a\x64\x65\x66\x69\x6e\x65\x2d\x69"
  "\x6e\x74\x65\x67\x72\x61\x62\x6c\x65\x34\x04\x0d\x3a\x63\x6f\x6e"
  "\x73\x2d\x73\x74\x72\x65\x61\x6d\x22\x04\x08\x3a\x61\x63\x63\x65"
  "\x73\x73\x04\x0a\x3a\x61\x6e\x64\x2d\x6c\x65\x74\x2a\x04\x0c\x3a"
  "\x71\x75\x61\x73\x69\x71\x75\x6f\x74\x65\x39\x04\x3a\x04\x04\x3a"
  "\x64\x6f\x3c\x24\x0a\x06\x3a\x63\x6f\x6e\x64\x3e\x04\x06\x3a\x63"
  "\x61\x73\x65\x3d\x06\x05\x3a\x61\x6e\x64\x3b\x04\x09\x3a\x6c\x65"
  "\x74\x72\x65\x63\x2a\x37\x04\x08\x3a\x6c\x65\x74\x72\x65\x63\x1d"
  "\x04\x35\x04\x0d\x3a\x6c\x65\x74\x2a\x2d\x73\x79\x6e\x74\x61\x78"
  "\x2d\x32\x04\x06\x3a\x6c\x65\x74\x2a\x2f\x04\x2e\x04\x05\x3a\x6c"
  "\x65\x74\x28\x2c\x04\x2b\x04\x27\x26\x08\x3a\x64\x65\x66\x69\x6e"
  "\x65\x1b\x20\x04\x14\x3a\x64\x65\x66\x69\x6e\x65\x2d\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x1c\x04\x09\x3a\x72\x65\x63\x65"
  "\x69\x76\x65\x1a\x04\x14\x04\x1a\x70\x72\x69\x6d\x69\x74\x69\x76"
  "\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70"
  "\x65\x33\x10\x0d\x3a\x63\x6f\x6e\x64\x2d\x65\x78\x70\x61\x6e\x64"
  "\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x0e\x04\x6d\x69\x74\x08\x6d\x69\x74\x2f\x67\x6e\x75\x06\x73"
  "\x77\x61\x6e\x6b\x07\x73\x72\x66\x69\x2d\x30\x07\x73\x72\x66\x69"
  "\x2d\x31\x07\x73\x72\x66\x69\x2d\x32\x07\x73\x72\x66\x69\x2d\x36"
  "\x07\x73\x72\x66\x69\x2d\x38\x07\x73\x72\x66\x69\x2d\x39\x08\x73"
  "\x72\x66\x69\x2d\x32\x33\x08\x73\x72\x66\x69\x2d\x32\x37\x08\x73"
  "\x72\x66\x69\x2d\x33\x30\x08\x73\x72\x66\x69\x2d\x36\x32\x08\x73"
  "\x72\x66\x69\x2d\x36\x39\x0e\x12\x04\x04\x1f\x65\x72\x2d\x6d\x61"
  "\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d"
  "\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x02\x4c\x9a\x01\x80\x80\x04"
  "\x4b\x98\x01\x81\x81\x02\x4a\x96\x01\x81\x81\x02\x49\x94\x01\x81"
  "\x89\x02\x48\x92\x01\x81\x87\x02\x47\x90\x01\x81\x87\x02\x46\x8e"
  "\x01\x81\x85\x02\x45\x8c\x01\x81\x83\x02\x44\x8a\x01\x81\x83\x02"
  "\x43\x88\x01\x81\x83\x02\x42\x86\x01\x81\x87\x02\x41\x84\x01\x81"
  "\x85\x02\x40\x82\x01\x81\x83\x02\x3f\x80\x01\x81\x87\x02\x3e\x7e"
  "\x81\x85\x02\x3d\x7c\x81\x83\x02\x3c\x7a\x81\x87\x02\x3b\x78\x81"
  "\x85\x02\x3a\x76\x81\x83\x02\x39\x74\x81\x87\x02\x38\x72\x81\x85"
  "\x02\x37\x70\x81\x83\x02\x36\x6e\x81\x87\x02\x35\x6c\x81\x85\x02"
  "\x34\x6a\x81\x83\x02\x33\x68\x81\x87\x02\x32\x66\x81\x85\x02\x31"
  "\x64\x81\x83\x02\x30\x62\x81\x87\x02\x2f\x60\x81\x85\x02\x2e\x5e"
  "\x81\x83\x02\x2d\x5c\x81\x83\x02\x2c\x5a\x81\x87\x02\x2b\x58\x81"
  "\x85\x02\x2a\x56\x81\x83\x02\x29\x54\x81\x87\x02\x28\x52\x81\x85"
  "\x02\x27\x50\x81\x83\x02\x26\x4e\x81\x87\x02\x25\x4c\x81\x85\x02"
  "\x24\x4a\x81\x83\x02\x23\x48\x81\x87\x02\x22\x46\x81\x85\x02\x21"
  "\x44\x81\x83\x02\x20\x42\x81\x87\x02\x1f\x40\x81\x85\x02\x1e\x3e"
  "\x81\x83\x02\x1d\x3c\x81\x87\x02\x1c\x3a\x81\x85\x02\x1b\x38\x81"
  "\x83\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x87\x02\x18\x32\x81\x85"
  "\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x87\x02\x15\x2c\x81\x85\x02"
  "\x14\x2a\x81\x83\x02\x13\x28\x81\x83\x02\x12\x26\x81\x87\x02\x11"
  "\x24\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e"
  "\x81\x83\x02\x0d\x1c\x81\x87\x02\x0c\x1a\x81\x85\x02\x0b\x18\x81"
  "\x83\x02\x0a\x16\x81\x87\x02\x09\x14\x81\x85\x02\x08\x12\x81\x83"
  "\x02\x07\x10\x81\x87\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83\x02"
  "\x04\x0a\x81\x83\x02\x03\x08\x81\x87\x02\x02\x06\x81\x85\x02\x01"
  "\x04\x81\x83\x02\x99\x01\xe1\x01";

SCHEME_OBJECT *
mit_macros_so_data_a42d94633f78fac6 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_mit_macros_so_data_a42d94633f78fac6 [0]))), (sizeof (prog_mit_macros_so_data_a42d94633f78fac6)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_80]));
}

DECLARE_COMPILED_DATA_NS ("mit-macros.so", mit_macros_so_data_a42d94633f78fac6)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("mit-macros.so", "b299df680ac2bd93")
