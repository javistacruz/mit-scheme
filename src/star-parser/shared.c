/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:26-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_10 7
#define TAG_1_11 2
#define LABEL_1_8 9
#define TAG_1_9 3
#define LABEL_1_15 11
#define LABEL_1_16 13
#define LABEL_1_17 15
#define LABEL_1_18 17
#define LABEL_1_19 19
#define LABEL_1_20 21
#define LABEL_1_21 23
#define LABEL_1_22 25
#define LABEL_1_23 27
#define LABEL_1_13 29
#define LABEL_1_24 31
#define LABEL_1_25 33
#define LABEL_1_28 35
#define TAG_1_29 16
#define LABEL_1_34 37
#define LABEL_1_26 39
#define TAG_1_27 18
#define LABEL_1_37 41
#define LABEL_1_38 43
#define LABEL_1_39 45
#define LABEL_1_30 47
#define LABEL_1_41 49
#define LABEL_1_31 51
#define LABEL_1_43 53
#define LABEL_1_44 55
#define LABEL_1_33 57
#define LABEL_1_51 59
#define LABEL_1_52 61
#define LABEL_1_35 63
#define LABEL_1_53 65
#define LABEL_1_54 67
#define LABEL_1_40 69
#define LABEL_1_42 71
#define LABEL_1_56 73
#define LABEL_1_57 75
#define LABEL_1_46 77
#define LABEL_1_47 79
#define LABEL_1_48 81
#define LABEL_1_49 83
#define LABEL_1_50 85
#define LABEL_1_61 87
#define LABEL_1_62 89
#define LABEL_1_60 91
#define ENVIRONMENT_LABEL_1_3 131
#define DEBUGGING_LABEL_1_2 130
#define OBJECT_1_7 129
#define OBJECT_1_6 128
#define OBJECT_1_5 127
#define OBJECT_1_4 126
#define OBJECT_1_3 125
#define OBJECT_1_2 124
#define OBJECT_1_1 123
#define OBJECT_1_0 122
#define EXECUTE_CACHE_1_59 93
#define EXECUTE_CACHE_1_58 95
#define EXECUTE_CACHE_1_55 97
#define EXECUTE_CACHE_1_45 99
#define EXECUTE_CACHE_1_36 101
#define EXECUTE_CACHE_1_32 103
#define EXECUTE_CACHE_1_14 105
#define EXECUTE_CACHE_1_12 107
#define EXECUTE_CACHE_1_7 109
#define FREE_REFERENCE_1_4 112
#define FREE_REFERENCE_1_3 113
#define FREE_REFERENCE_1_2 114
#define FREE_REFERENCE_1_1 115
#define FREE_REFERENCE_1_0 116
#define FREE_ASSIGNMENT_1_3 118
#define FREE_ASSIGNMENT_1_2 119
#define FREE_ASSIGNMENT_1_1 120
#define FREE_ASSIGNMENT_1_0 121
#define FREE_REFERENCES_LABEL_1_0 92
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
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
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_1_4);
      goto generate_external_procedure_71;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_99;

    case 2:
      current_block = (Rpc - LABEL_1_10);
      goto lambda_101;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto swapB_100;

    case 4:
      current_block = (Rpc - LABEL_1_15);
      goto label_73;

    case 5:
      current_block = (Rpc - LABEL_1_16);
      goto label_74;

    case 6:
      current_block = (Rpc - LABEL_1_17);
      goto label_75;

    case 7:
      current_block = (Rpc - LABEL_1_18);
      goto label_76;

    case 8:
      current_block = (Rpc - LABEL_1_19);
      goto label_77;

    case 9:
      current_block = (Rpc - LABEL_1_20);
      goto label_78;

    case 10:
      current_block = (Rpc - LABEL_1_21);
      goto label_79;

    case 11:
      current_block = (Rpc - LABEL_1_22);
      goto label_80;

    case 12:
      current_block = (Rpc - LABEL_1_23);
      goto label_81;

    case 13:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_2;

    case 14:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_3;

    case 15:
      current_block = (Rpc - LABEL_1_25);
      goto continuation_6;

    case 16:
      current_block = (Rpc - LABEL_1_28);
      goto lambda_103;

    case 17:
      current_block = (Rpc - LABEL_1_34);
      goto label_82;

    case 18:
      current_block = (Rpc - LABEL_1_26);
      goto swapB_102;

    case 19:
      current_block = (Rpc - LABEL_1_37);
      goto label_83;

    case 20:
      current_block = (Rpc - LABEL_1_38);
      goto label_84;

    case 21:
      current_block = (Rpc - LABEL_1_39);
      goto label_85;

    case 22:
      current_block = (Rpc - LABEL_1_30);
      goto continuation_43;

    case 23:
      current_block = (Rpc - LABEL_1_41);
      goto label_86;

    case 24:
      current_block = (Rpc - LABEL_1_31);
      goto continuation_38;

    case 25:
      current_block = (Rpc - LABEL_1_43);
      goto label_87;

    case 26:
      current_block = (Rpc - LABEL_1_44);
      goto label_88;

    case 27:
      current_block = (Rpc - LABEL_1_33);
      goto continuation_12;

    case 28:
      current_block = (Rpc - LABEL_1_51);
      goto label_89;

    case 29:
      current_block = (Rpc - LABEL_1_52);
      goto label_90;

    case 30:
      current_block = (Rpc - LABEL_1_35);
      goto lambda_10;

    case 31:
      current_block = (Rpc - LABEL_1_53);
      goto label_91;

    case 32:
      current_block = (Rpc - LABEL_1_54);
      goto label_92;

    case 33:
      current_block = (Rpc - LABEL_1_40);
      goto continuation_35;

    case 34:
      current_block = (Rpc - LABEL_1_42);
      goto lambda_33;

    case 35:
      current_block = (Rpc - LABEL_1_56);
      goto label_93;

    case 36:
      current_block = (Rpc - LABEL_1_57);
      goto label_94;

    case 37:
      current_block = (Rpc - LABEL_1_46);
      goto continuation_20;

    case 38:
      current_block = (Rpc - LABEL_1_47);
      goto continuation_19;

    case 39:
      current_block = (Rpc - LABEL_1_48);
      goto continuation_18;

    case 40:
      current_block = (Rpc - LABEL_1_49);
      goto continuation_17;

    case 41:
      current_block = (Rpc - LABEL_1_50);
      goto continuation_16;

    case 42:
      current_block = (Rpc - LABEL_1_61);
      goto label_95;

    case 43:
      current_block = (Rpc - LABEL_1_62);
      goto label_96;

    case 44:
      current_block = (Rpc - LABEL_1_60);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_external_procedure_98)
DEFLABEL (generate_external_procedure_71)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_99)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_70)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_8])));
  Rhp += 3;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  Wrd44 = Wrd46;
  ((Wrd44.pObj) [2]) = (Wrd7.Obj);
  ((Wrd44.pObj) [3]) = (Wrd11.Obj);
  ((Wrd44.pObj) [4]) = (Wrd17.Obj);
  (Rsp [5]) = (Wrd47.Obj);
  (Rsp [3]) = (Wrd47.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_10])));
  Rhp += 3;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd32 = Wrd23;
  (Wrd35.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd32.pObj) [2]) = (Wrd35.Obj);
  (Wrd31.Obj) = ((Wrd13.pObj) [3]);
  ((Wrd32.pObj) [3]) = (Wrd31.Obj);
  (Wrd27.Obj) = ((Wrd13.pObj) [5]);
  ((Wrd32.pObj) [4]) = (Wrd27.Obj);
  (Rsp [4]) = (Wrd22.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (lambda_101)
  CLOSURE_HEADER (LABEL_1_10);

DEFLABEL (lambda_49)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_1_3]);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd21.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_26])));
  Rhp += 1;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd36.pObj) = (& (Rhp [-1]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd36.pObj)));
  (Rsp [1]) = (Wrd37.Obj);
  ((Wrd39.pObj) [2]) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (Rsp [2]) = (Wrd40.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_28])));
  Rhp += 4;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd28 = Wrd21;
  (Wrd29.Obj) = (Rsp [8]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  ((Wrd28.pObj) [2]) = (Wrd31.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  ((Wrd28.pObj) [4]) = (Wrd25.Obj);
  ((Wrd28.pObj) [5]) = Rvl;
  (Rsp [1]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_25);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd21.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_32]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_1_31);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_114;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_113)
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_112;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd25.Lng) > 0)
    goto label_107;

DEFLABEL (label_108)
  (Wrd22.Obj) = (Rsp [5]);
  (Wrd23.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_106;

DEFLABEL (label_107)
  (Wrd24.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_106)
DEFLABEL (label_111)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_45]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_1_30);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_1_6]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_40]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_110;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_109)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_36]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_1_40);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_55]));

DEFLABEL (label_110)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_41]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 1);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_44]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_88)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_108;
  goto label_107;

DEFLABEL (label_114)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_43]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 1);

DEFLABEL (label_87)
  (Wrd6.Obj) = Rvl;
  goto label_113;

DEFLABEL (swapB_100)
  CLOSURE_HEADER (LABEL_1_8);

DEFLABEL (swapB_68)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_141;

DEFLABEL (label_140)
  Wrd5 = Wrd9;

DEFLABEL (label_139)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_138;

DEFLABEL (label_137)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_136)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_135;

DEFLABEL (label_134)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_133)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_132;

DEFLABEL (label_131)
  Wrd57 = Wrd61;

DEFLABEL (label_130)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_129;

DEFLABEL (label_128)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_127)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_126;

DEFLABEL (label_125)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_124)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_123;

DEFLABEL (label_122)
  Wrd109 = Wrd113;

DEFLABEL (label_121)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_120;

DEFLABEL (label_119)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_118)
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
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_117;

DEFLABEL (label_116)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_115)
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_117)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_116;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_23])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_81)
  goto label_115;

DEFLABEL (label_120)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_119;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_22])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_80)
  goto label_118;

DEFLABEL (label_123)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_122;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_21])), (Wrd110.pObj));

DEFLABEL (label_79)
  (Wrd109.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_126)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_125;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_20])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_78)
  goto label_124;

DEFLABEL (label_129)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_128;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_19])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_77)
  goto label_127;

DEFLABEL (label_132)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_131;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_18])), (Wrd58.pObj));

DEFLABEL (label_76)
  (Wrd57.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_135)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_134;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_17])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_75)
  goto label_133;

DEFLABEL (label_138)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_137;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_16])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_74)
  goto label_136;

DEFLABEL (label_141)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_140;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_15])), (Wrd6.pObj));

DEFLABEL (label_73)
  (Wrd5.Obj) = Rvl;
  goto label_139;

DEFLABEL (lambda_103)
  CLOSURE_HEADER (LABEL_1_28);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_151;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_150)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_35]))));
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_36]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_33);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_48]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_49]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_50]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd25.Obj) = (Rsp [6]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_149;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_148)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_147;
  Wrd35 = Wrd39;

DEFLABEL (label_146)
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_36]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_1_50);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [4]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_145;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_144)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_143;
  Wrd23 = Wrd27;

DEFLABEL (label_142)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_36]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_60);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_45]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_49);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_1_48);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_59]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_1_47);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_58]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_1_46);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_55]));

DEFLABEL (label_143)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_62])), (Wrd24.pObj));

DEFLABEL (label_96)
  (Wrd23.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_61]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 1);

DEFLABEL (label_95)
  (* (--Rsp)) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_52])), (Wrd36.pObj));

DEFLABEL (label_90)
  (Wrd35.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_51]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 1);

DEFLABEL (label_89)
  (* (--Rsp)) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 1);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_150;

DEFLABEL (swapB_102)
  CLOSURE_HEADER (LABEL_1_26);

DEFLABEL (swapB_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_160;

DEFLABEL (label_159)
  Wrd5 = Wrd9;

DEFLABEL (label_158)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_3]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_157;

DEFLABEL (label_156)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_155)
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
    goto label_154;

DEFLABEL (label_153)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_152)
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_154)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_153;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_39])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_85)
  goto label_152;

DEFLABEL (label_157)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_156;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_38])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_84)
  goto label_155;

DEFLABEL (label_160)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_159;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_37])), (Wrd6.pObj));

DEFLABEL (label_83)
  (Wrd5.Obj) = Rvl;
  goto label_158;

DEFLABEL (lambda_104)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_1_35);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_164;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_163)
  (Wrd17.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_162;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_161)
  (Wrd27.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_162)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_54]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 1);

DEFLABEL (label_92)
  (Wrd18.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_53]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 1);

DEFLABEL (label_91)
  (Wrd5.Obj) = Rvl;
  goto label_163;

DEFLABEL (lambda_105)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_1_42);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_168;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_167)
  (Wrd17.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_166;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_165)
  (Wrd27.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_166)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_57]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 1);

DEFLABEL (label_94)
  (Wrd18.Obj) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_56]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 1);

DEFLABEL (label_93)
  (Wrd5.Obj) = Rvl;
  goto label_167;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_8 11
#define LABEL_2_9 13
#define LABEL_2_10 15
#define LABEL_2_11 17
#define LABEL_2_12 19
#define LABEL_2_14 21
#define ENVIRONMENT_LABEL_2_3 42
#define DEBUGGING_LABEL_2_2 41
#define OBJECT_2_3 40
#define OBJECT_2_2 39
#define OBJECT_2_1 38
#define OBJECT_2_0 37
#define EXECUTE_CACHE_2_19 23
#define EXECUTE_CACHE_2_18 25
#define EXECUTE_CACHE_2_17 27
#define EXECUTE_CACHE_2_16 29
#define EXECUTE_CACHE_2_15 31
#define EXECUTE_CACHE_2_13 33
#define FREE_REFERENCE_2_0 36
#define FREE_REFERENCES_LABEL_2_0 22
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_2_4);
      goto run_optimizers_9;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (run_optimizers_13)
DEFLABEL (run_optimizers_9)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_17;
  Wrd5 = Wrd9;

DEFLABEL (label_16)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_2_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_19]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define LABEL_3_11 13
#define LABEL_3_12 15
#define LABEL_3_13 17
#define LABEL_3_14 19
#define LABEL_3_16 21
#define LABEL_3_17 23
#define LABEL_3_10 25
#define LABEL_3_20 27
#define LABEL_3_21 29
#define LABEL_3_22 31
#define LABEL_3_6 33
#define LABEL_3_24 35
#define LABEL_3_25 37
#define LABEL_3_19 39
#define LABEL_3_26 41
#define LABEL_3_27 43
#define LABEL_3_23 45
#define LABEL_3_29 47
#define LABEL_3_30 49
#define LABEL_3_28 51
#define LABEL_3_31 53
#define ENVIRONMENT_LABEL_3_3 68
#define DEBUGGING_LABEL_3_2 67
#define OBJECT_3_5 66
#define OBJECT_3_4 65
#define OBJECT_3_3 64
#define OBJECT_3_2 63
#define OBJECT_3_1 62
#define OBJECT_3_0 61
#define EXECUTE_CACHE_3_18 55
#define EXECUTE_CACHE_3_15 57
#define FREE_REFERENCE_3_0 60
#define FREE_REFERENCES_LABEL_3_0 54
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd79;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
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
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_3_4);
      goto strip_protection_wrappers_35;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_37;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_44;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_45;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto label_46;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto label_40;

    case 6:
      current_block = (Rpc - LABEL_3_12);
      goto label_41;

    case 7:
      current_block = (Rpc - LABEL_3_13);
      goto label_42;

    case 8:
      current_block = (Rpc - LABEL_3_14);
      goto label_43;

    case 9:
      current_block = (Rpc - LABEL_3_16);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_3_17);
      goto label_38;

    case 11:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_22;

    case 12:
      current_block = (Rpc - LABEL_3_20);
      goto label_47;

    case 13:
      current_block = (Rpc - LABEL_3_21);
      goto label_48;

    case 14:
      current_block = (Rpc - LABEL_3_22);
      goto label_49;

    case 15:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_31;

    case 16:
      current_block = (Rpc - LABEL_3_24);
      goto label_50;

    case 17:
      current_block = (Rpc - LABEL_3_25);
      goto label_51;

    case 18:
      current_block = (Rpc - LABEL_3_19);
      goto continuation_17;

    case 19:
      current_block = (Rpc - LABEL_3_26);
      goto label_52;

    case 20:
      current_block = (Rpc - LABEL_3_27);
      goto label_53;

    case 21:
      current_block = (Rpc - LABEL_3_23);
      goto lambda_13;

    case 22:
      current_block = (Rpc - LABEL_3_29);
      goto label_54;

    case 23:
      current_block = (Rpc - LABEL_3_30);
      goto label_55;

    case 24:
      current_block = (Rpc - LABEL_3_28);
      goto continuation_11;

    case 25:
      current_block = (Rpc - LABEL_3_31);
      goto label_56;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (strip_protection_wrappers_58)
DEFLABEL (strip_protection_wrappers_35)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_61;
  Rvl = (Wrd5.Obj);

DEFLABEL (label_60)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_61)
  if (! ((Wrd6.uLng) == 1))
    goto label_85;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_84)
  (Wrd18.Obj) = (Rsp [0]);
  if ((Wrd18.Obj) == (current_block [OBJECT_3_1]))
    goto label_78;
  if ((Wrd18.Obj) == (current_block [OBJECT_3_3]))
    goto label_68;
  if ((Wrd18.Obj) == (current_block [OBJECT_3_4]))
    goto label_64;
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_63;
  Wrd25 = Wrd29;

DEFLABEL (label_62)
  (Rsp [0]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_17])), (Wrd26.pObj));

DEFLABEL (label_38)
  (Wrd25.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_64)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_67;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [1]);

DEFLABEL (label_66)
  (Rsp [1]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 1)
    goto label_65;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_65)
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  Rvl = ((Wrd42.pObj) [0]);
  goto label_60;

DEFLABEL (label_67)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_39)
  (Wrd31.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_68)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_77;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_76)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_75;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd59.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_74)
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_73;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd66.Obj) = ((Wrd67.pObj) [1]);

DEFLABEL (label_72)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_70;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_69)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (label_70)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_43)
DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_73)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_42)
  (Wrd66.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_41)
  (Wrd59.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_40)
  (Wrd50.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_78)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd86.Obj) = (Rsp [2]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_83;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd83.Obj) = ((Wrd85.pObj) [1]);

DEFLABEL (label_82)
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd94.uLng) == 1))
    goto label_81;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd92.Obj) = ((Wrd93.pObj) [1]);

DEFLABEL (label_80)
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd101.uLng) == 1))
    goto label_79;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd100.Obj) = ((Wrd99.pObj) [0]);
  (* (--Rsp)) = (Wrd100.Obj);
  goto label_69;

DEFLABEL (label_79)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_46)
  goto label_71;

DEFLABEL (label_81)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_45)
  (Wrd92.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_44)
  (Wrd83.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Wrd9.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_95;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_94)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_93;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_92)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_91;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_90)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_3_19);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_89;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_88)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_87;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_86)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_53)
  (Wrd19.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_52)
  (Wrd10.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_48)
  (Wrd22.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_47)
  (Wrd13.Obj) = Rvl;
  goto label_94;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (Wrd9.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [2]);
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
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_96)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_3_1]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_97)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_51)
  (Wrd19.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_50)
  (Wrd10.Obj) = Rvl;
  goto label_98;

DEFLABEL (lambda_59)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_3_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_105;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_104)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_103;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_102)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_28);
  (Wrd9.Obj) = (current_block [OBJECT_3_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_101;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_100)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_101)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_31]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_56)
  (Wrd10.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_29]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_54)
  (Wrd8.Obj) = Rvl;
  goto label_104;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 9
#define DEBUGGING_LABEL_4_2 8
#define OBJECT_4_0 7
#define EXECUTE_CACHE_4_5 5
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto check_0_args_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_0_args_3)
DEFLABEL (check_0_args_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define ENVIRONMENT_LABEL_5_3 15
#define DEBUGGING_LABEL_5_2 14
#define OBJECT_5_2 13
#define OBJECT_5_1 12
#define OBJECT_5_0 11
#define EXECUTE_CACHE_5_6 9
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_5_4);
      goto check_1_arg_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_1_arg_6)
DEFLABEL (check_1_arg_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_9;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_7;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  Rvl = ((Wrd16.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 1);

DEFLABEL (label_9)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
shared_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto check_2_args_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_2_args_3)
DEFLABEL (check_2_args_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_7 5
#define LABEL_7_9 7
#define LABEL_7_5 9
#define LABEL_7_6 11
#define ENVIRONMENT_LABEL_7_3 23
#define DEBUGGING_LABEL_7_2 22
#define OBJECT_7_2 21
#define OBJECT_7_1 20
#define OBJECT_7_0 19
#define EXECUTE_CACHE_7_11 13
#define EXECUTE_CACHE_7_10 15
#define EXECUTE_CACHE_7_8 17
#define FREE_REFERENCES_LABEL_7_0 12
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_7_4);
      goto check_n_args_5;

    case 1:
      current_block = (Rpc - LABEL_7_7);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_n_args_9)
DEFLABEL (check_n_args_5)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_15;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (label_11)
  (Wrd7.Obj) = (Rsp [2]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_7_1])))
    goto label_13;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_7_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_12;

DEFLABEL (label_15)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 9
#define DEBUGGING_LABEL_8_2 8
#define OBJECT_8_0 7
#define EXECUTE_CACHE_8_5 5
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_8_4);
      goto error_ill_formed_expression_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_ill_formed_expression_3)
DEFLABEL (error_ill_formed_expression_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_5 3
#define LABEL_9_4 5
#define LABEL_9_6 7
#define LABEL_9_7 9
#define LABEL_9_8 11
#define LABEL_9_10 13
#define LABEL_9_11 15
#define LABEL_9_13 17
#define LABEL_9_15 19
#define LABEL_9_16 21
#define LABEL_9_9 23
#define LABEL_9_17 25
#define LABEL_9_18 27
#define ENVIRONMENT_LABEL_9_3 42
#define DEBUGGING_LABEL_9_2 41
#define OBJECT_9_7 40
#define OBJECT_9_6 39
#define OBJECT_9_5 38
#define OBJECT_9_4 37
#define OBJECT_9_3 36
#define OBJECT_9_2 35
#define OBJECT_9_1 34
#define OBJECT_9_0 33
#define EXECUTE_CACHE_9_14 29
#define EXECUTE_CACHE_9_12 31
#define FREE_REFERENCES_LABEL_9_0 28
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd49;
  machine_word Wrd14;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_9_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_9_4);
      goto handle_complex_expression_21;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_9_8);
      goto loop_19;

    case 5:
      current_block = (Rpc - LABEL_9_10);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_9_11);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_9_13);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_9_15);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_9_16);
      goto label_28;

    case 10:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_9_17);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_9_18);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (handle_complex_expression_32)
DEFLABEL (handle_complex_expression_21)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 2))
    goto label_35;

DEFLABEL (label_34)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_35)
  if ((Wrd6.uLng) == 30)
    goto label_34;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_9_0]);
  (Wrd44.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd44.Lng))))
    goto label_45;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  if ((Wrd14.Obj) == (Wrd6.Obj))
    goto label_44;

DEFLABEL (label_43)
  (Wrd17.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd27.Lng)))
    goto label_36;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_36)
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd21.Obj) == (Wrd23.Obj))
    goto label_38;
  (Wrd19.Obj) = (current_block [OBJECT_9_4]);
  goto label_37;

DEFLABEL (label_38)
  (Wrd19.Obj) = (current_block [OBJECT_9_3]);

DEFLABEL (label_37)
DEFLABEL (label_42)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd19.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_34;

DEFLABEL (label_41)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_40;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_39)
  goto loop_19;

DEFLABEL (label_40)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_44)
  Rsp = (& (Rsp [2]));
  goto label_34;

DEFLABEL (label_45)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  goto label_34;

DEFLABEL (loop_33)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_9_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_50;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9_13);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_49;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_48)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_47;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  ((Wrd26.pObj) [1]) = (Wrd20.Obj);

DEFLABEL (label_46)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_7]), 2);

DEFLABEL (label_28)
  goto label_46;

DEFLABEL (label_49)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 1);

DEFLABEL (label_27)
  (Wrd6.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_60;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_59)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_58;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_57)
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_9_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_53;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_52)
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_51;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  Rvl = ((Wrd18.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_51)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 1);

DEFLABEL (label_53)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_6]), 1);

DEFLABEL (label_29)
  (Wrd7.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_54)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_56;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_55)
  (Rsp [0]) = (Wrd23.Obj);
  goto loop_19;

DEFLABEL (label_56)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_5]), 1);

DEFLABEL (label_30)
  (Wrd23.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_6]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_6]), 1);

DEFLABEL (label_25)
  (Wrd13.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 12
#define DEBUGGING_LABEL_10_2 11
#define EXECUTE_CACHE_10_6 7
#define FREE_REFERENCE_10_0 10
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_10_4);
      goto close_0;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_4)
DEFLABEL (close_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_5 3
#define LABEL_11_4 5
#define LABEL_11_6 7
#define LABEL_11_9 9
#define LABEL_11_10 11
#define ENVIRONMENT_LABEL_11_3 23
#define DEBUGGING_LABEL_11_2 22
#define OBJECT_11_0 21
#define EXECUTE_CACHE_11_11 13
#define EXECUTE_CACHE_11_8 15
#define EXECUTE_CACHE_11_7 17
#define FREE_REFERENCE_11_0 20
#define FREE_REFERENCES_LABEL_11_0 12
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_11_4);
      goto make_parser_macros_5;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_parser_macros_9)
DEFLABEL (make_parser_macros_5)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);

DEFLABEL (label_14)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_10)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (label_11)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_13;
  Wrd15 = Wrd19;

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_9])), (Wrd16.pObj));

DEFLABEL (label_7)
  (Wrd15.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 14
#define DEBUGGING_LABEL_12_2 13
#define OBJECT_12_1 12
#define OBJECT_12_0 11
#define EXECUTE_CACHE_12_7 7
#define EXECUTE_CACHE_12_6 9
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_12_4);
      goto guarantee_parser_macros_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_parser_macros_4)
DEFLABEL (guarantee_parser_macros_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_12_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_6 5
#define LABEL_13_5 7
#define ENVIRONMENT_LABEL_13_3 16
#define DEBUGGING_LABEL_13_2 15
#define EXECUTE_CACHE_13_8 9
#define EXECUTE_CACHE_13_7 11
#define FREE_REFERENCE_13_0 14
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_13_4);
      goto define_matcher_macro_1;

    case 1:
      current_block = (Rpc - LABEL_13_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_matcher_macro_5)
DEFLABEL (define_matcher_macro_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_7;
  Wrd8 = Wrd12;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_7 9
#define LABEL_14_8 11
#define LABEL_14_10 13
#define ENVIRONMENT_LABEL_14_3 24
#define DEBUGGING_LABEL_14_2 23
#define EXECUTE_CACHE_14_12 15
#define EXECUTE_CACHE_14_11 17
#define EXECUTE_CACHE_14_9 19
#define FREE_REFERENCE_14_0 22
#define FREE_REFERENCES_LABEL_14_0 14
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_14_4);
      goto lookup_matcher_macro_7;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto loop_5;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lookup_matcher_macro_11)
DEFLABEL (lookup_matcher_macro_7)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_5;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (loop_12)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_14_6);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_6 5
#define LABEL_15_5 7
#define ENVIRONMENT_LABEL_15_3 16
#define DEBUGGING_LABEL_15_2 15
#define EXECUTE_CACHE_15_8 9
#define EXECUTE_CACHE_15_7 11
#define FREE_REFERENCE_15_0 14
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_15_4);
      goto define_parser_macro_1;

    case 1:
      current_block = (Rpc - LABEL_15_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_parser_macro_5)
DEFLABEL (define_parser_macro_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_7;
  Wrd8 = Wrd12;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_7 9
#define LABEL_16_8 11
#define LABEL_16_10 13
#define ENVIRONMENT_LABEL_16_3 24
#define DEBUGGING_LABEL_16_2 23
#define EXECUTE_CACHE_16_12 15
#define EXECUTE_CACHE_16_11 17
#define EXECUTE_CACHE_16_9 19
#define FREE_REFERENCE_16_0 22
#define FREE_REFERENCES_LABEL_16_0 14
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_16_4);
      goto lookup_parser_macro_7;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto loop_5;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lookup_parser_macro_11)
DEFLABEL (lookup_parser_macro_7)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_5;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (loop_12)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_16_6);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_10);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_9 7
#define TAG_17_10 2
#define LABEL_17_7 9
#define TAG_17_8 3
#define LABEL_17_12 11
#define LABEL_17_13 13
#define LABEL_17_14 15
#define ENVIRONMENT_LABEL_17_3 28
#define DEBUGGING_LABEL_17_2 27
#define OBJECT_17_1 26
#define OBJECT_17_0 25
#define EXECUTE_CACHE_17_11 17
#define EXECUTE_CACHE_17_6 19
#define FREE_REFERENCE_17_0 22
#define FREE_ASSIGNMENT_17_0 24
#define FREE_REFERENCES_LABEL_17_0 16
#define NUMBER_OF_LINKER_SECTIONS_17_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_17_4);
      goto with_current_parser_macros_10;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_17_9);
      goto lambda_18;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto swapB_17;

    case 4:
      current_block = (Rpc - LABEL_17_12);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_17_13);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_17_14);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_current_parser_macros_16)
DEFLABEL (with_current_parser_macros_10)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd8.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_7])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  ((Wrd20.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_9])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd21.Obj);
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_11]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_17_9);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_17)
  CLOSURE_HEADER (LABEL_17_7);

DEFLABEL (swapB_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  Wrd5 = Wrd9;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_22)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_17_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_14)
  goto label_19;

DEFLABEL (label_24)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_13)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_17_12])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 9
#define DEBUGGING_LABEL_18_2 8
#define FREE_REFERENCE_18_0 7
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto current_parser_macros_0;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_parser_macros_4)
DEFLABEL (current_parser_macros_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define ENVIRONMENT_LABEL_19_3 16
#define DEBUGGING_LABEL_19_2 15
#define OBJECT_19_1 14
#define OBJECT_19_0 13
#define EXECUTE_CACHE_19_6 9
#define FREE_ASSIGNMENT_19_0 12
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_19_4);
      goto set_current_parser_macrosB_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_current_parser_macrosB_5)
DEFLABEL (set_current_parser_macrosB_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_0]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_8;

DEFLABEL (label_7)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_19_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_7;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_7])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 9
#define DEBUGGING_LABEL_20_2 8
#define FREE_REFERENCE_20_0 7
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto global_parser_macros_0;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (global_parser_macros_4)
DEFLABEL (global_parser_macros_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_6 5
#define LABEL_21_5 7
#define LABEL_21_9 9
#define LABEL_21_8 11
#define ENVIRONMENT_LABEL_21_3 21
#define DEBUGGING_LABEL_21_2 20
#define OBJECT_21_1 19
#define OBJECT_21_0 18
#define EXECUTE_CACHE_21_7 13
#define FREE_REFERENCE_21_1 16
#define FREE_REFERENCE_21_0 17
#define FREE_REFERENCES_LABEL_21_0 12
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_21_4);
      goto maybe_make_let_6;

    case 1:
      current_block = (Rpc - LABEL_21_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_21_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_make_let_11)
DEFLABEL (maybe_make_let_6)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_12;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_16;
  Wrd13 = Wrd17;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_21_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_21_1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_9])), (Wrd10.pObj));

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_6])), (Wrd14.pObj));

DEFLABEL (label_8)
  (Wrd13.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define ENVIRONMENT_LABEL_22_3 14
#define DEBUGGING_LABEL_22_2 13
#define OBJECT_22_1 12
#define OBJECT_22_0 11
#define EXECUTE_CACHE_22_6 9
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_22_4);
      goto with_value_binding_8;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_value_binding_11)
DEFLABEL (with_value_binding_8)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (Wrd9.Obj) = (current_block [OBJECT_22_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_22_1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  Rsp = (& (Rsp [1]));
  (Wrd26.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define LABEL_23_9 9
#define ENVIRONMENT_LABEL_23_3 18
#define DEBUGGING_LABEL_23_2 17
#define OBJECT_23_1 16
#define OBJECT_23_0 15
#define EXECUTE_CACHE_23_8 11
#define EXECUTE_CACHE_23_6 13
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_23_4);
      goto call_with_pointer_9;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_pointer_12)
DEFLABEL (call_with_pointer_9)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Wrd9.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_9);
  (Wrd9.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_23_1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  Rsp = (& (Rsp [1]));
  (Wrd23.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 11
#define DEBUGGING_LABEL_24_2 10
#define OBJECT_24_1 9
#define OBJECT_24_0 8
#define FREE_REFERENCE_24_0 7
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_24_4);
      goto fetch_pointer_1;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fetch_pointer_5)
DEFLABEL (fetch_pointer_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_7;
  Wrd6 = Wrd10;

DEFLABEL (label_6)
  (Wrd15.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_24_1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  goto pop_return;

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_8 7
#define LABEL_25_9 9
#define ENVIRONMENT_LABEL_25_3 19
#define DEBUGGING_LABEL_25_2 18
#define OBJECT_25_2 17
#define OBJECT_25_1 16
#define OBJECT_25_0 15
#define EXECUTE_CACHE_25_7 11
#define FREE_REFERENCE_25_0 14
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_25_4);
      goto backtracking_kf_7;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (backtracking_kf_11)
DEFLABEL (backtracking_kf_7)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_25_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_25_8);
  (Wrd9.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_14;
  Wrd11 = Wrd15;

DEFLABEL (label_13)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [3]);
  (Wrd23.Obj) = (current_block [OBJECT_25_0]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_25_1]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd31.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Wrd39.Obj) = (current_block [OBJECT_25_2]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_9])), (Wrd12.pObj));

DEFLABEL (label_9)
  (Wrd11.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 13
#define DEBUGGING_LABEL_26_2 12
#define OBJECT_26_0 11
#define EXECUTE_CACHE_26_6 7
#define FREE_REFERENCE_26_0 10
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_26_4);
      goto make_kf_lambda_0;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_kf_lambda_4)
DEFLABEL (make_kf_lambda_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define ENVIRONMENT_LABEL_27_3 16
#define DEBUGGING_LABEL_27_2 15
#define OBJECT_27_0 14
#define EXECUTE_CACHE_27_7 9
#define FREE_REFERENCE_27_1 12
#define FREE_REFERENCE_27_0 13
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_27_4);
      goto make_matcher_ks_lambda_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_matcher_ks_lambda_6)
DEFLABEL (make_matcher_ks_lambda_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  (Wrd15.Obj) = (current_block [OBJECT_27_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_8;
  Wrd16 = Wrd20;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_6])), (Wrd17.pObj));

DEFLABEL (label_4)
  (Wrd16.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_6 7
#define LABEL_28_7 9
#define ENVIRONMENT_LABEL_28_3 19
#define DEBUGGING_LABEL_28_2 18
#define OBJECT_28_0 17
#define EXECUTE_CACHE_28_8 11
#define FREE_REFERENCE_28_2 14
#define FREE_REFERENCE_28_1 15
#define FREE_REFERENCE_28_0 16
#define FREE_REFERENCES_LABEL_28_0 10
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_28_4);
      goto make_parser_ks_lambda_2;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_parser_ks_lambda_8)
DEFLABEL (make_parser_ks_lambda_2)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_14;
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  (Wrd15.Obj) = (current_block [OBJECT_28_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_12;
  Wrd17 = Wrd21;

DEFLABEL (label_11)
  (Wrd23.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_2]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_10;
  Wrd27 = Wrd31;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_7])), (Wrd28.pObj));

DEFLABEL (label_6)
  (Wrd27.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_6])), (Wrd18.pObj));

DEFLABEL (label_5)
  (Wrd17.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_6 5
#define LABEL_29_5 7
#define ENVIRONMENT_LABEL_29_3 16
#define DEBUGGING_LABEL_29_2 15
#define OBJECT_29_1 14
#define OBJECT_29_0 13
#define EXECUTE_CACHE_29_7 9
#define FREE_REFERENCE_29_0 12
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_29_4);
      goto protect_2;

    case 1:
      current_block = (Rpc - LABEL_29_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (protect_6)
DEFLABEL (protect_2)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_8;
  Wrd10 = Wrd14;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Wrd9.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_29_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_6])), (Wrd11.pObj));

DEFLABEL (label_4)
  (Wrd10.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 9
#define DEBUGGING_LABEL_30_2 8
#define OBJECT_30_0 7
#define EXECUTE_CACHE_30_5 5
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_30_4);
      goto make_kf_identifier_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_kf_identifier_3)
DEFLABEL (make_kf_identifier_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 9
#define DEBUGGING_LABEL_31_2 8
#define OBJECT_31_0 7
#define EXECUTE_CACHE_31_5 5
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_31_4);
      goto make_ks_identifier_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_ks_identifier_3)
DEFLABEL (make_ks_identifier_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 9
#define DEBUGGING_LABEL_32_2 8
#define OBJECT_32_0 7
#define EXECUTE_CACHE_32_5 5
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_32_4);
      goto make_ptr_identifier_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_ptr_identifier_3)
DEFLABEL (make_ptr_identifier_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 9
#define DEBUGGING_LABEL_33_2 8
#define OBJECT_33_0 7
#define EXECUTE_CACHE_33_5 5
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_33_4);
      goto make_value_identifier_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_value_identifier_3)
DEFLABEL (make_value_identifier_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 9
#define DEBUGGING_LABEL_34_2 8
#define OBJECT_34_0 7
#define EXECUTE_CACHE_34_5 5
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_34_4);
      goto make_loop_identifier_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_loop_identifier_3)
DEFLABEL (make_loop_identifier_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_6 5
#define LABEL_35_9 7
#define LABEL_35_5 9
#define LABEL_35_7 11
#define LABEL_35_8 13
#define LABEL_35_14 15
#define LABEL_35_15 17
#define LABEL_35_16 19
#define LABEL_35_17 21
#define LABEL_35_18 23
#define LABEL_35_12 25
#define LABEL_35_20 27
#define ENVIRONMENT_LABEL_35_3 50
#define DEBUGGING_LABEL_35_2 49
#define OBJECT_35_3 48
#define OBJECT_35_2 47
#define OBJECT_35_1 46
#define OBJECT_35_0 45
#define EXECUTE_CACHE_35_21 29
#define EXECUTE_CACHE_35_19 31
#define EXECUTE_CACHE_35_13 33
#define EXECUTE_CACHE_35_11 35
#define EXECUTE_CACHE_35_10 37
#define FREE_REFERENCE_35_2 40
#define FREE_REFERENCE_35_1 41
#define FREE_REFERENCE_35_0 42
#define FREE_ASSIGNMENT_35_0 44
#define FREE_REFERENCES_LABEL_35_0 28
#define NUMBER_OF_LINKER_SECTIONS_35_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_35_4);
      goto generate_identifier_12;

    case 1:
      current_block = (Rpc - LABEL_35_6);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_35_9);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_35_14);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_35_15);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_35_16);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_35_17);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_35_18);
      goto label_18;

    case 11:
      current_block = (Rpc - LABEL_35_12);
      goto continuation_0;

    case 12:
      current_block = (Rpc - LABEL_35_20);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_identifier_23)
DEFLABEL (generate_identifier_12)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_42;
  Wrd8 = Wrd12;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_40;
  Wrd20 = Wrd24;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_32;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_31)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_30;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = ((Wrd25.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd23.Lng)))
    goto label_30;
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));

DEFLABEL (label_29)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_28;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  ((Wrd29.pObj) [1]) = (Wrd20.Obj);

DEFLABEL (label_27)
  (Wrd27.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_19]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_12);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_25;
  Wrd5 = Wrd9;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_21]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_11]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_20])), (Wrd6.pObj));

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_28)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_18]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_18)
  goto label_27;

DEFLABEL (label_30)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_17)
  (Wrd20.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_1]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_38;
  Wrd38 = Wrd42;

DEFLABEL (label_37)
  (Wrd47.Obj) = (Rsp [4]);
  (Wrd48.Obj) = (current_block [OBJECT_35_0]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_35_0]));
  (Wrd60.Obj) = ((Wrd52.pObj) [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  ((Wrd52.pObj) [0]) = (Wrd49.Obj);

DEFLABEL (label_34)
  (Wrd65.Obj) = (current_block [OBJECT_35_1]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd65.Obj);
  goto label_26;

DEFLABEL (label_36)
  if ((Wrd60.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_35_15])), (Wrd52.pObj), (Wrd49.Obj));

DEFLABEL (label_20)
  goto label_34;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_14])), (Wrd39.pObj));

DEFLABEL (label_19)
  (Wrd38.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_9])), (Wrd21.pObj));

DEFLABEL (label_15)
  (Wrd20.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_6])), (Wrd9.pObj));

DEFLABEL (label_14)
  (Wrd8.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_8 7
#define LABEL_36_7 9
#define LABEL_36_10 11
#define ENVIRONMENT_LABEL_36_3 23
#define DEBUGGING_LABEL_36_2 22
#define EXECUTE_CACHE_36_11 13
#define EXECUTE_CACHE_36_9 15
#define EXECUTE_CACHE_36_6 17
#define FREE_REFERENCE_36_1 20
#define FREE_REFERENCE_36_0 21
#define FREE_REFERENCES_LABEL_36_0 12
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_36_4);
      goto internal_identifierP_3;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_36_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_36_10);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (internal_identifierP_8)
DEFLABEL (internal_identifierP_3)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_13;
  Wrd10 = Wrd14;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_11;
  Wrd7 = Wrd11;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_10])), (Wrd8.pObj));

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_8])), (Wrd11.pObj));

DEFLABEL (label_5)
  (Wrd10.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_6 5
#define LABEL_37_5 7
#define LABEL_37_8 9
#define LABEL_37_9 11
#define LABEL_37_11 13
#define LABEL_37_10 15
#define ENVIRONMENT_LABEL_37_3 26
#define DEBUGGING_LABEL_37_2 25
#define OBJECT_37_3 24
#define OBJECT_37_2 23
#define OBJECT_37_1 22
#define OBJECT_37_0 21
#define EXECUTE_CACHE_37_7 17
#define FREE_REFERENCE_37_0 20
#define FREE_REFERENCES_LABEL_37_0 16
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_37_4);
      goto bind_delayed_lambdas_9;

    case 1:
      current_block = (Rpc - LABEL_37_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_37_9);
      goto lambda_1;

    case 5:
      current_block = (Rpc - LABEL_37_11);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_37_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bind_delayed_lambdas_14)
DEFLABEL (bind_delayed_lambdas_9)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_17;
  Wrd9 = Wrd13;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_37_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_37_10);
  (Wrd9.Obj) = (current_block [OBJECT_37_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_37_3]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_6])), (Wrd10.pObj));

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_15)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_37_9);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_19;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_6 7
#define LABEL_38_8 9
#define ENVIRONMENT_LABEL_38_3 17
#define DEBUGGING_LABEL_38_2 16
#define OBJECT_38_2 15
#define OBJECT_38_1 14
#define OBJECT_38_0 13
#define EXECUTE_CACHE_38_7 11
#define FREE_REFERENCES_LABEL_38_0 10
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_38_4);
      goto make_delayed_lambda_8;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_38_6);
      goto lambda_0;

    case 3:
      current_block = (Rpc - LABEL_38_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_delayed_lambda_11)
DEFLABEL (make_delayed_lambda_8)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_8);
  (Wrd9.Obj) = (current_block [OBJECT_38_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_38_2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd27.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_12)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_38_6);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 5
#define DEBUGGING_LABEL_39_2 4
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto delay_call_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delay_call_3)
DEFLABEL (delay_call_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define ENVIRONMENT_LABEL_40_3 5
#define DEBUGGING_LABEL_40_2 4
#define FREE_REFERENCES_LABEL_40_0 4
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto delay_reference_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (delay_reference_3)
DEFLABEL (delay_reference_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define ENVIRONMENT_LABEL_41_3 10
#define DEBUGGING_LABEL_41_2 9
#define OBJECT_41_2 8
#define OBJECT_41_1 7
#define OBJECT_41_0 6
#define FREE_REFERENCES_LABEL_41_0 6
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_41_4);
      goto lambda_expressionP_2;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_expressionP_6)
DEFLABEL (lambda_expressionP_2)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if (! ((Wrd6.uLng) == 1))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_10)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_41_1])))
    goto label_8;
  Rvl = (current_block [OBJECT_41_2]);
  goto label_7;

DEFLABEL (label_11)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define LABEL_42_8 9
#define LABEL_42_9 11
#define LABEL_42_14 13
#define LABEL_42_15 15
#define LABEL_42_16 17
#define LABEL_42_17 19
#define LABEL_42_21 21
#define LABEL_42_24 23
#define LABEL_42_23 25
#define LABEL_42_19 27
#define LABEL_42_20 29
#define LABEL_42_10 31
#define LABEL_42_11 33
#define LABEL_42_12 35
#define LABEL_42_13 37
#define LABEL_42_30 39
#define LABEL_42_31 41
#define LABEL_42_32 43
#define LABEL_42_6 45
#define LABEL_42_34 47
#define LABEL_42_35 49
#define LABEL_42_29 51
#define LABEL_42_36 53
#define LABEL_42_37 55
#define LABEL_42_33 57
#define LABEL_42_40 59
#define LABEL_42_41 61
#define LABEL_42_39 63
#define LABEL_42_42 65
#define ENVIRONMENT_LABEL_42_3 92
#define DEBUGGING_LABEL_42_2 91
#define OBJECT_42_7 90
#define OBJECT_42_6 89
#define OBJECT_42_5 88
#define OBJECT_42_4 87
#define OBJECT_42_3 86
#define OBJECT_42_2 85
#define OBJECT_42_1 84
#define OBJECT_42_0 83
#define EXECUTE_CACHE_42_38 67
#define EXECUTE_CACHE_42_28 69
#define EXECUTE_CACHE_42_27 71
#define EXECUTE_CACHE_42_26 73
#define EXECUTE_CACHE_42_25 75
#define EXECUTE_CACHE_42_22 77
#define EXECUTE_CACHE_42_18 79
#define FREE_REFERENCE_42_0 82
#define FREE_REFERENCES_LABEL_42_0 66
#define NUMBER_OF_LINKER_SECTIONS_42_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd91;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd117;
  machine_word Wrd112;
  machine_word Wrd111;
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
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_42_4);
      goto optimize_by_substitution_41;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto label_43;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto label_50;

    case 3:
      current_block = (Rpc - LABEL_42_8);
      goto label_51;

    case 4:
      current_block = (Rpc - LABEL_42_9);
      goto label_52;

    case 5:
      current_block = (Rpc - LABEL_42_14);
      goto label_46;

    case 6:
      current_block = (Rpc - LABEL_42_15);
      goto label_47;

    case 7:
      current_block = (Rpc - LABEL_42_16);
      goto label_48;

    case 8:
      current_block = (Rpc - LABEL_42_17);
      goto label_49;

    case 9:
      current_block = (Rpc - LABEL_42_21);
      goto label_45;

    case 10:
      current_block = (Rpc - LABEL_42_24);
      goto label_44;

    case 11:
      current_block = (Rpc - LABEL_42_23);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_42_19);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_42_20);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_42_10);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_42_11);
      goto lambda_12;

    case 16:
      current_block = (Rpc - LABEL_42_12);
      goto continuation_31;

    case 17:
      current_block = (Rpc - LABEL_42_13);
      goto continuation_30;

    case 18:
      current_block = (Rpc - LABEL_42_30);
      goto label_53;

    case 19:
      current_block = (Rpc - LABEL_42_31);
      goto label_54;

    case 20:
      current_block = (Rpc - LABEL_42_32);
      goto label_55;

    case 21:
      current_block = (Rpc - LABEL_42_6);
      goto continuation_37;

    case 22:
      current_block = (Rpc - LABEL_42_34);
      goto label_56;

    case 23:
      current_block = (Rpc - LABEL_42_35);
      goto label_57;

    case 24:
      current_block = (Rpc - LABEL_42_29);
      goto continuation_25;

    case 25:
      current_block = (Rpc - LABEL_42_36);
      goto label_58;

    case 26:
      current_block = (Rpc - LABEL_42_37);
      goto label_59;

    case 27:
      current_block = (Rpc - LABEL_42_33);
      goto lambda_21;

    case 28:
      current_block = (Rpc - LABEL_42_40);
      goto label_60;

    case 29:
      current_block = (Rpc - LABEL_42_41);
      goto label_61;

    case 30:
      current_block = (Rpc - LABEL_42_39);
      goto continuation_19;

    case 31:
      current_block = (Rpc - LABEL_42_42);
      goto label_62;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimize_by_substitution_64)
DEFLABEL (optimize_by_substitution_41)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_67;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_67)
  if (! ((Wrd6.uLng) == 1))
    goto label_91;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_90)
  (Wrd18.Obj) = (Rsp [0]);
  if ((Wrd18.Obj) == (current_block [OBJECT_42_1]))
    goto label_84;
  if ((Wrd18.Obj) == (current_block [OBJECT_42_3]))
    goto label_74;
  if (! ((Wrd18.Obj) == (current_block [OBJECT_42_4])))
    goto label_68;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_68)
  if ((Wrd18.Obj) == (current_block [OBJECT_42_5]))
    goto label_71;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_23]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_70;
  Wrd30 = Wrd34;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_22]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_42_23);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_25]));

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_24])), (Wrd31.pObj));

DEFLABEL (label_44)
  (Wrd30.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_71)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_19]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_20]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_73;
  Wrd43 = Wrd47;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_42_20);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_27]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_42_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42_5]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_42_6]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_26]));

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_21])), (Wrd44.pObj));

DEFLABEL (label_45)
  (Wrd43.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_74)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_12]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_13]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd65.Obj) = (Rsp [5]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_83;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd62.Obj) = ((Wrd64.pObj) [1]);

DEFLABEL (label_82)
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_81;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd71.Obj) = ((Wrd72.pObj) [1]);

DEFLABEL (label_80)
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_79;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd78.Obj) = ((Wrd79.pObj) [1]);

DEFLABEL (label_78)
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_76;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);

DEFLABEL (label_75)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_18]));

DEFLABEL (label_76)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_17]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_49)
DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_79)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_16]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 1);

DEFLABEL (label_48)
  (Wrd78.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 1);

DEFLABEL (label_47)
  (Wrd71.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_14]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 1);

DEFLABEL (label_46)
  (Wrd62.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_84)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_6]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd98.Obj) = (Rsp [2]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_89;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd95.Obj) = ((Wrd97.pObj) [1]);

DEFLABEL (label_88)
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd106.uLng) == 1))
    goto label_87;
  (Wrd105.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd104.Obj) = ((Wrd105.pObj) [1]);

DEFLABEL (label_86)
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd113.uLng) == 1))
    goto label_85;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (* (--Rsp)) = (Wrd112.Obj);
  goto label_75;

DEFLABEL (label_85)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_52)
  goto label_77;

DEFLABEL (label_87)
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 1);

DEFLABEL (label_51)
  (Wrd104.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 1);

DEFLABEL (label_50)
  (Wrd95.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_42_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_101;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_100)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_99;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_98)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_97;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_96)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_33]))));
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_22]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_42_29);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [6]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_95;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_94)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_93;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_92)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_38]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_42_12);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_42_10);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_28]));

DEFLABEL (label_93)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_37]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_36]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 1);

DEFLABEL (label_58)
  (Wrd5.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_32]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_31]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 1);

DEFLABEL (label_54)
  (Wrd17.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_30]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 1);

DEFLABEL (label_53)
  (Wrd8.Obj) = Rvl;
  goto label_100;

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_42_6);
  (Wrd9.Obj) = (current_block [OBJECT_42_7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_105;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_104)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_103;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_102)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_42_1]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_103)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_35]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_57)
  (Wrd19.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_34]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 1);

DEFLABEL (label_56)
  (Wrd10.Obj) = Rvl;
  goto label_104;

DEFLABEL (lambda_65)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_42_11);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_42_7]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_42_3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_66)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_42_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_111;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_110)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_109;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_108)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_18]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_42_39);
  (Wrd9.Obj) = (current_block [OBJECT_42_7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_107;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_106)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_107)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_42]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_62)
  (Wrd10.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_41]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_40]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 1);

DEFLABEL (label_60)
  (Wrd8.Obj) = Rvl;
  goto label_110;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_6 7
#define LABEL_43_7 9
#define LABEL_43_9 11
#define LABEL_43_10 13
#define LABEL_43_11 15
#define LABEL_43_13 17
#define LABEL_43_14 19
#define LABEL_43_12 21
#define LABEL_43_16 23
#define TAG_43_17 10
#define LABEL_43_19 25
#define LABEL_43_18 27
#define LABEL_43_20 29
#define LABEL_43_21 31
#define ENVIRONMENT_LABEL_43_3 48
#define DEBUGGING_LABEL_43_2 47
#define OBJECT_43_1 46
#define OBJECT_43_0 45
#define EXECUTE_CACHE_43_24 33
#define EXECUTE_CACHE_43_23 35
#define EXECUTE_CACHE_43_22 37
#define EXECUTE_CACHE_43_15 39
#define EXECUTE_CACHE_43_8 41
#define FREE_REFERENCE_43_0 44
#define FREE_REFERENCES_LABEL_43_0 32
#define NUMBER_OF_LINKER_SECTIONS_43_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_43_4);
      goto substitute_let_expression_15;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_43_9);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_43_10);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_43_11);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_43_13);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_43_14);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_43_12);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_43_16);
      goto lambda_27;

    case 11:
      current_block = (Rpc - LABEL_43_19);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_43_18);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_43_20);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_43_21);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (substitute_let_expression_26)
DEFLABEL (substitute_let_expression_15)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_42;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_41)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_40;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_39)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_43_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_38;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_37)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_36;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_35)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_34;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_33)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_12]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_32;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_31)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_30;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_15]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_43_12);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_16])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_30)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_14]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_13]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 1);

DEFLABEL (label_22)
  (Wrd35.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 1);

DEFLABEL (label_20)
  (Wrd16.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 1);

DEFLABEL (label_19)
  (Wrd7.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_43_16);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_44;
  Wrd8 = Wrd12;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_20]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_21]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_43_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_43_20);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_43_18);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_23]));

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_19])), (Wrd9.pObj));

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_7 7
#define ENVIRONMENT_LABEL_44_3 17
#define DEBUGGING_LABEL_44_2 16
#define OBJECT_44_0 15
#define EXECUTE_CACHE_44_9 9
#define EXECUTE_CACHE_44_8 11
#define EXECUTE_CACHE_44_6 13
#define FREE_REFERENCES_LABEL_44_0 8
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_44_4);
      goto maybe_resubstitute_2;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (maybe_resubstitute_5)
DEFLABEL (maybe_resubstitute_2)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_7 7
#define LABEL_45_8 9
#define LABEL_45_9 11
#define LABEL_45_10 13
#define LABEL_45_11 15
#define LABEL_45_13 17
#define LABEL_45_14 19
#define LABEL_45_15 21
#define LABEL_45_16 23
#define LABEL_45_17 25
#define LABEL_45_20 27
#define LABEL_45_24 29
#define LABEL_45_25 31
#define LABEL_45_26 33
#define LABEL_45_28 35
#define LABEL_45_29 37
#define LABEL_45_30 39
#define LABEL_45_18 41
#define LABEL_45_31 43
#define LABEL_45_32 45
#define LABEL_45_33 47
#define LABEL_45_22 49
#define TAG_45_23 23
#define ENVIRONMENT_LABEL_45_3 68
#define DEBUGGING_LABEL_45_2 67
#define OBJECT_45_3 66
#define OBJECT_45_2 65
#define OBJECT_45_1 64
#define OBJECT_45_0 63
#define EXECUTE_CACHE_45_34 51
#define EXECUTE_CACHE_45_27 53
#define EXECUTE_CACHE_45_21 55
#define EXECUTE_CACHE_45_19 57
#define EXECUTE_CACHE_45_12 59
#define EXECUTE_CACHE_45_6 61
#define FREE_REFERENCES_LABEL_45_0 50
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd8;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd54;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd89;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto compute_substitutions_33;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_11;

    case 3:
      current_block = (Rpc - LABEL_45_8);
      goto label_46;

    case 4:
      current_block = (Rpc - LABEL_45_9);
      goto label_47;

    case 5:
      current_block = (Rpc - LABEL_45_10);
      goto label_48;

    case 6:
      current_block = (Rpc - LABEL_45_11);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_45_13);
      goto loop_31;

    case 8:
      current_block = (Rpc - LABEL_45_14);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_45_15);
      goto label_36;

    case 10:
      current_block = (Rpc - LABEL_45_16);
      goto label_37;

    case 11:
      current_block = (Rpc - LABEL_45_17);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_45_20);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_45_24);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_45_25);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_45_26);
      goto label_45;

    case 16:
      current_block = (Rpc - LABEL_45_28);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_45_29);
      goto label_43;

    case 18:
      current_block = (Rpc - LABEL_45_30);
      goto label_44;

    case 19:
      current_block = (Rpc - LABEL_45_18);
      goto continuation_12;

    case 20:
      current_block = (Rpc - LABEL_45_31);
      goto label_39;

    case 21:
      current_block = (Rpc - LABEL_45_32);
      goto label_40;

    case 22:
      current_block = (Rpc - LABEL_45_33);
      goto label_41;

    case 23:
      current_block = (Rpc - LABEL_45_22);
      goto lambda_52;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_substitutions_50)
DEFLABEL (compute_substitutions_33)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_31;

DEFLABEL (loop_51)
DEFLABEL (loop_31)
  INTERRUPT_CHECK (26, LABEL_45_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_53;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_21]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_45_20);
  (Rsp [6]) = Rvl;
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [7]) = (Wrd6.Obj);
  Rsp = (& (Rsp [6]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_22])));
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

DEFLABEL (label_53)
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_64;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_63)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_62;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_61)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_60;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_59)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_58;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if ((Wrd54.Lng) == 0)
    goto label_55;

DEFLABEL (label_56)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_18]))));
  (* (--Rsp)) = (Wrd47.Obj);
  goto label_54;

DEFLABEL (label_55)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_54)
DEFLABEL (label_57)
  (Wrd48.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_19]));

DEFLABEL (label_58)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_17]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_55;

DEFLABEL (label_60)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_16]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_15]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_45_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_34]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_45_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;

DEFLABEL (label_72)
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_71;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd54.Obj) = ((Wrd56.pObj) [1]);

DEFLABEL (label_70)
  (Rsp [3]) = (Wrd54.Obj);
  (Wrd66.Obj) = (Rsp [4]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_69;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [1]);

DEFLABEL (label_68)
  (Rsp [4]) = (Wrd63.Obj);
  (Wrd75.Obj) = (Rsp [5]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_67;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd72.Obj) = ((Wrd74.pObj) [1]);

DEFLABEL (label_66)
  (Rsp [5]) = (Wrd72.Obj);
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd84.Obj);
  (* (Rhp++)) = (Wrd85.Obj);
  (Wrd83.pObj) = (& (Rhp [-2]));
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd83.pObj)));
  (Wrd89.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd81.Obj);
  (* (Rhp++)) = (Wrd89.Obj);
  (Wrd88.pObj) = (& (Rhp [-2]));
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd88.pObj)));
  (Rsp [7]) = (Wrd86.Obj);

DEFLABEL (label_65)
  Rsp = (& (Rsp [3]));
  goto loop_31;

DEFLABEL (label_67)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_30]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_44)
  (Wrd72.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_29]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_43)
  (Wrd63.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_28]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_42)
  (Wrd54.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd91.Obj) = (Rsp [2]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 26))
    goto label_82;
  if (! ((Wrd91.Obj) == (current_block [OBJECT_45_3])))
    goto label_80;

DEFLABEL (label_81)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_24]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd102.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd103.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd103.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_27]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_45_24);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_72;

DEFLABEL (label_80)
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_79;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_78)
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_77;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_76)
  (Rsp [4]) = (Wrd20.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_75;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_74)
  (Rsp [5]) = (Wrd29.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_45_0]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd46.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd50.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Rsp [6]) = (Wrd47.Obj);
  goto label_65;

DEFLABEL (label_75)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_33]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_41)
  (Wrd29.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_32]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_40)
  (Wrd20.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_31]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_39)
  (Wrd11.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_82)
  (Wrd93.Obj) = (current_block [OBJECT_45_3]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_26]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_45)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  goto label_81;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_45_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_45_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_88;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [1]);

DEFLABEL (label_87)
  (Rsp [3]) = (Wrd63.Obj);
  (Wrd75.Obj) = (Rsp [4]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_86;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd72.Obj) = ((Wrd74.pObj) [1]);

DEFLABEL (label_85)
  (Rsp [4]) = (Wrd72.Obj);
  (Wrd84.Obj) = (Rsp [5]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_84;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd81.Obj) = ((Wrd83.pObj) [1]);

DEFLABEL (label_83)
  (Rsp [5]) = (Wrd81.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_31;

DEFLABEL (label_84)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_10]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_48)
  (Wrd81.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_47)
  (Wrd72.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_46)
  (Wrd63.Obj) = Rvl;
  goto label_87;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_45_22);

DEFLABEL (lambda_4)
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

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_6 7
#define LABEL_46_7 9
#define LABEL_46_21 11
#define LABEL_46_22 13
#define LABEL_46_17 15
#define LABEL_46_25 17
#define LABEL_46_18 19
#define TAG_46_19 8
#define LABEL_46_12 21
#define LABEL_46_28 23
#define LABEL_46_29 25
#define LABEL_46_30 27
#define LABEL_46_13 29
#define LABEL_46_33 31
#define LABEL_46_34 33
#define LABEL_46_35 35
#define LABEL_46_36 37
#define LABEL_46_14 39
#define TAG_46_15 18
#define LABEL_46_37 41
#define LABEL_46_38 43
#define LABEL_46_39 45
#define LABEL_46_40 47
#define LABEL_46_41 49
#define LABEL_46_42 51
#define LABEL_46_43 53
#define LABEL_46_8 55
#define LABEL_46_44 57
#define LABEL_46_45 59
#define LABEL_46_9 61
#define LABEL_46_46 63
#define LABEL_46_47 65
#define LABEL_46_48 67
#define LABEL_46_10 69
#define TAG_46_11 33
#define LABEL_46_49 71
#define LABEL_46_50 73
#define LABEL_46_51 75
#define LABEL_46_24 77
#define LABEL_46_53 79
#define LABEL_46_54 81
#define LABEL_46_55 83
#define LABEL_46_56 85
#define LABEL_46_57 87
#define LABEL_46_58 89
#define LABEL_46_59 91
#define LABEL_46_27 93
#define LABEL_46_60 95
#define LABEL_46_61 97
#define LABEL_46_31 99
#define TAG_46_32 48
#define LABEL_46_63 101
#define LABEL_46_64 103
#define LABEL_46_62 105
#define LABEL_46_65 107
#define ENVIRONMENT_LABEL_46_3 131
#define DEBUGGING_LABEL_46_2 130
#define OBJECT_46_10 129
#define OBJECT_46_9 128
#define OBJECT_46_8 127
#define OBJECT_46_7 126
#define OBJECT_46_6 125
#define OBJECT_46_5 124
#define OBJECT_46_4 123
#define OBJECT_46_3 122
#define OBJECT_46_2 121
#define OBJECT_46_1 120
#define OBJECT_46_0 119
#define EXECUTE_CACHE_46_52 109
#define EXECUTE_CACHE_46_26 111
#define EXECUTE_CACHE_46_23 113
#define EXECUTE_CACHE_46_20 115
#define EXECUTE_CACHE_46_16 117
#define FREE_REFERENCES_LABEL_46_0 108
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd71;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd27;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd29;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd43;
  machine_word Wrd12;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd9;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd100;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd95;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd46;
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
      current_block = (Rpc - LABEL_46_4);
      goto apply_substitutions_72;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_46_6);
      goto loop_70;

    case 3:
      current_block = (Rpc - LABEL_46_7);
      goto label_75;

    case 4:
      current_block = (Rpc - LABEL_46_21);
      goto label_74;

    case 5:
      current_block = (Rpc - LABEL_46_22);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_46_17);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_46_25);
      goto label_76;

    case 8:
      current_block = (Rpc - LABEL_46_18);
      goto lambda_116;

    case 9:
      current_block = (Rpc - LABEL_46_12);
      goto continuation_52;

    case 10:
      current_block = (Rpc - LABEL_46_28);
      goto label_77;

    case 11:
      current_block = (Rpc - LABEL_46_29);
      goto label_78;

    case 12:
      current_block = (Rpc - LABEL_46_30);
      goto label_79;

    case 13:
      current_block = (Rpc - LABEL_46_13);
      goto continuation_51;

    case 14:
      current_block = (Rpc - LABEL_46_33);
      goto label_80;

    case 15:
      current_block = (Rpc - LABEL_46_34);
      goto label_81;

    case 16:
      current_block = (Rpc - LABEL_46_35);
      goto label_82;

    case 17:
      current_block = (Rpc - LABEL_46_36);
      goto label_83;

    case 18:
      current_block = (Rpc - LABEL_46_14);
      goto lambda_115;

    case 19:
      current_block = (Rpc - LABEL_46_37);
      goto label_84;

    case 20:
      current_block = (Rpc - LABEL_46_38);
      goto label_85;

    case 21:
      current_block = (Rpc - LABEL_46_39);
      goto label_86;

    case 22:
      current_block = (Rpc - LABEL_46_40);
      goto label_87;

    case 23:
      current_block = (Rpc - LABEL_46_41);
      goto label_88;

    case 24:
      current_block = (Rpc - LABEL_46_42);
      goto label_89;

    case 25:
      current_block = (Rpc - LABEL_46_43);
      goto label_90;

    case 26:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_66;

    case 27:
      current_block = (Rpc - LABEL_46_44);
      goto label_91;

    case 28:
      current_block = (Rpc - LABEL_46_45);
      goto label_92;

    case 29:
      current_block = (Rpc - LABEL_46_9);
      goto continuation_65;

    case 30:
      current_block = (Rpc - LABEL_46_46);
      goto label_93;

    case 31:
      current_block = (Rpc - LABEL_46_47);
      goto label_94;

    case 32:
      current_block = (Rpc - LABEL_46_48);
      goto label_95;

    case 33:
      current_block = (Rpc - LABEL_46_10);
      goto lambda_114;

    case 34:
      current_block = (Rpc - LABEL_46_49);
      goto label_96;

    case 35:
      current_block = (Rpc - LABEL_46_50);
      goto label_97;

    case 36:
      current_block = (Rpc - LABEL_46_51);
      goto label_98;

    case 37:
      current_block = (Rpc - LABEL_46_24);
      goto continuation_15;

    case 38:
      current_block = (Rpc - LABEL_46_53);
      goto label_99;

    case 39:
      current_block = (Rpc - LABEL_46_54);
      goto label_100;

    case 40:
      current_block = (Rpc - LABEL_46_55);
      goto label_101;

    case 41:
      current_block = (Rpc - LABEL_46_56);
      goto label_102;

    case 42:
      current_block = (Rpc - LABEL_46_57);
      goto label_103;

    case 43:
      current_block = (Rpc - LABEL_46_58);
      goto label_104;

    case 44:
      current_block = (Rpc - LABEL_46_59);
      goto label_105;

    case 45:
      current_block = (Rpc - LABEL_46_27);
      goto continuation_37;

    case 46:
      current_block = (Rpc - LABEL_46_60);
      goto label_106;

    case 47:
      current_block = (Rpc - LABEL_46_61);
      goto label_107;

    case 48:
      current_block = (Rpc - LABEL_46_31);
      goto lambda_117;

    case 49:
      current_block = (Rpc - LABEL_46_63);
      goto label_108;

    case 50:
      current_block = (Rpc - LABEL_46_64);
      goto label_109;

    case 51:
      current_block = (Rpc - LABEL_46_62);
      goto continuation_31;

    case 52:
      current_block = (Rpc - LABEL_46_65);
      goto label_110;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_substitutions_112)
DEFLABEL (apply_substitutions_72)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_118;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_118)
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  goto loop_70;

DEFLABEL (loop_113)
DEFLABEL (loop_70)
  INTERRUPT_CHECK (26, LABEL_46_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_130;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_46_4]);
  (Wrd38.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd38.Lng))))
    goto label_129;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_128;

DEFLABEL (label_127)
  (Wrd15.Obj) = (current_block [OBJECT_46_6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng)))
    goto label_119;
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_5]), 2);

DEFLABEL (label_119)
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_121;
  (Wrd17.Obj) = (current_block [OBJECT_46_8]);
  goto label_120;

DEFLABEL (label_121)
  (Wrd17.Obj) = (current_block [OBJECT_46_7]);

DEFLABEL (label_120)
DEFLABEL (label_126)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd17.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_123;

DEFLABEL (label_122)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_123)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_22]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_23]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_46_22);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [3]));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_124;
  Rvl = (Rsp [1]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_124)
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_125;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_125)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_128)
  Rsp = (& (Rsp [2]));
  goto label_123;

DEFLABEL (label_129)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_21]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_5]), 2);

DEFLABEL (label_74)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_127;
  goto label_128;

DEFLABEL (label_130)
  if (! ((Wrd6.uLng) == 1))
    goto label_156;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_155)
  Rdl = (& (Rsp [3]));
  (Wrd54.Obj) = (Rsp [0]);
  if ((Wrd54.Obj) == (current_block [OBJECT_46_1]))
    goto label_154;
  if ((Wrd54.Obj) == (current_block [OBJECT_46_2]))
    goto label_152;
  if (! ((Wrd54.Obj) == (current_block [OBJECT_46_3])))
    goto label_131;
  Rvl = (Rsp [1]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_131)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_17]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd67.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_18])));
  Rhp += 1;
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd67.pObj)));
  Wrd68 = Wrd67;
  (Wrd69.Obj) = (Rsp [5]);
  ((Wrd68.pObj) [2]) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_20]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_46_17);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_151;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_150)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_26]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_46_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_133;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_149;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_148)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_147;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_146)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_145;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_144)
  if ((Wrd23.Obj) == (current_block [OBJECT_46_10]))
    goto label_134;

DEFLABEL (label_133)
  Rvl = (Rsp [0]);

DEFLABEL (label_132)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_134)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_143;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_142)
  if (! ((Wrd33.Obj) == (current_block [OBJECT_46_10])))
    goto label_133;
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_141;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [0]);

DEFLABEL (label_140)
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_139;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd52.Obj) = ((Wrd53.pObj) [1]);

DEFLABEL (label_138)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_137;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd59.Obj) = ((Wrd60.pObj) [1]);

DEFLABEL (label_136)
  (Rsp [0]) = (Wrd59.Obj);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd71.uLng) == 1)
    goto label_135;
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_135)
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  Rvl = ((Wrd68.pObj) [0]);
  goto label_132;

DEFLABEL (label_137)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_59]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_105)
  (Wrd59.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_58]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_104)
  (Wrd52.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_57]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_103)
  (Wrd43.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_56]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_102)
  (Wrd33.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_55]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_101)
  (Wrd23.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_54]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_100)
  (Wrd16.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_53]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_99)
  (Wrd7.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_25]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_76)
  (* (--Rsp)) = Rvl;
  goto label_150;

DEFLABEL (label_152)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_12]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_13]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd82.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_14])));
  Rhp += 1;
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd82.pObj)));
  Wrd83 = Wrd82;
  (Wrd84.Obj) = (Rsp [5]);
  ((Wrd83.pObj) [2]) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);

DEFLABEL (label_153)
  (Wrd100.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd100.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_16]));

DEFLABEL (label_154)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd97.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_10])));
  Rhp += 1;
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd97.pObj)));
  Wrd98 = Wrd97;
  (Wrd99.Obj) = (Rsp [5]);
  ((Wrd98.pObj) [2]) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  goto label_153;

DEFLABEL (label_156)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_7]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_155;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_46_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_122;
  goto label_123;

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_46_13);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_174;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_173)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_172;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_171)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_170;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd31.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_169)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_168;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_167)
  goto loop_70;

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_46_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_46_10]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_27]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_166;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_165)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_164;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_163)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_162;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_161)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd53.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_31])));
  Rhp += 1;
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd53.pObj)));
  Wrd54 = Wrd53;
  (Wrd55.Obj) = (Rsp [6]);
  ((Wrd54.pObj) [2]) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_20]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_46_27);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_160;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_159)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_158;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd25.Obj) = ((Wrd26.pObj) [0]);

DEFLABEL (label_157)
  (Wrd36.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_46_2]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_158)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_61]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_107)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_60]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_106)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd12.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_30]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_79)
  (Wrd44.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd44.Obj));
  (* (--Rsp)) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_29]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_78)
  (Wrd33.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_28]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_77)
  (Wrd22.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd17.Obj) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_36]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_83)
  (Wrd45.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd45.Obj));
  (* (--Rsp)) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_35]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_82)
  (Wrd34.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_34]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_81)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_33]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_80)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_173;

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_46_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_184;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_183)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_182;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_181)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_180;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_179)
  goto loop_70;

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_46_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_46_10]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_178;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_177)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_176;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd25.Obj) = ((Wrd26.pObj) [0]);

DEFLABEL (label_175)
  (Wrd36.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_46_1]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_176)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_45]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_92)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_44]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_91)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd12.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_48]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_95)
  (Wrd34.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd34.Obj));
  (* (--Rsp)) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_47]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_94)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_46]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_93)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_183;

DEFLABEL (lambda_116)
  CLOSURE_HEADER (LABEL_46_18);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  goto loop_70;

DEFLABEL (lambda_115)
  CLOSURE_HEADER (LABEL_46_14);

DEFLABEL (lambda_50)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_199;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_198)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_197;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_196)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_195;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_194)
  (Wrd36.Obj) = (* (Rsp++));
  if (! ((Wrd27.Obj) == (Wrd36.Obj)))
    goto label_185;
  Rvl = (current_block [OBJECT_46_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_185)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_193;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd37.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_192)
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_191;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd52.Obj) = ((Wrd53.pObj) [1]);

DEFLABEL (label_190)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_189;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_188)
  (Wrd69.Obj) = (Rsp [2]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_187;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd66.Obj) = ((Wrd68.pObj) [0]);

DEFLABEL (label_186)
  (Rsp [1]) = (Wrd66.Obj);
  (Wrd75.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_23]));

DEFLABEL (label_187)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_43]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_90)
  (Wrd66.Obj) = Rvl;
  goto label_186;

DEFLABEL (label_189)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_42]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_89)
  (* (--Rsp)) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_41]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_88)
  (Wrd52.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_40]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_87)
  (Wrd37.Obj) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_39]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_86)
  (Wrd27.Obj) = Rvl;
  goto label_194;

DEFLABEL (label_197)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_38]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_196;

DEFLABEL (label_199)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_37]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_84)
  (Wrd5.Obj) = Rvl;
  goto label_198;

DEFLABEL (lambda_114)
  CLOSURE_HEADER (LABEL_46_10);

DEFLABEL (lambda_64)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_205;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_204)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_203;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_202)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_201;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_200)
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd36.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_52]));

DEFLABEL (label_201)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_51]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_98)
  (Wrd27.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_50]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_97)
  (* (--Rsp)) = Rvl;
  goto label_202;

DEFLABEL (label_205)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_49]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_96)
  (Wrd5.Obj) = Rvl;
  goto label_204;

DEFLABEL (lambda_117)
  CLOSURE_HEADER (LABEL_46_31);

DEFLABEL (lambda_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_211;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_210)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_209;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_208)
  goto loop_70;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_46_62);
  (Wrd9.Obj) = (current_block [OBJECT_46_10]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_207;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_206)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_207)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_65]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_110)
  (Wrd10.Obj) = Rvl;
  goto label_206;

DEFLABEL (label_209)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_64]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_0]), 1);

DEFLABEL (label_109)
  (* (--Rsp)) = Rvl;
  goto label_208;

DEFLABEL (label_211)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_63]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_9]), 1);

DEFLABEL (label_108)
  (Wrd11.Obj) = Rvl;
  goto label_210;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_7 5
#define LABEL_47_5 7
#define LABEL_47_6 9
#define LABEL_47_9 11
#define LABEL_47_10 13
#define LABEL_47_12 15
#define LABEL_47_20 17
#define LABEL_47_16 19
#define LABEL_47_14 21
#define TAG_47_15 9
#define LABEL_47_18 23
#define LABEL_47_23 25
#define LABEL_47_19 27
#define LABEL_47_21 29
#define LABEL_47_24 31
#define LABEL_47_27 33
#define TAG_47_28 15
#define ENVIRONMENT_LABEL_47_3 55
#define DEBUGGING_LABEL_47_2 54
#define EXECUTE_CACHE_47_29 35
#define EXECUTE_CACHE_47_25 37
#define EXECUTE_CACHE_47_22 39
#define EXECUTE_CACHE_47_17 41
#define EXECUTE_CACHE_47_13 43
#define EXECUTE_CACHE_47_11 45
#define EXECUTE_CACHE_47_26 47
#define EXECUTE_CACHE_47_8 49
#define FREE_REFERENCE_47_1 52
#define FREE_REFERENCE_47_0 53
#define FREE_REFERENCES_LABEL_47_0 34
#define NUMBER_OF_LINKER_SECTIONS_47_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_47_4);
      goto discard_unused_loop_bindings_17;

    case 1:
      current_block = (Rpc - LABEL_47_7);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_47_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_47_9);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_47_10);
      goto lambda_8;

    case 6:
      current_block = (Rpc - LABEL_47_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_47_20);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_47_16);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_47_14);
      goto lambda_24;

    case 10:
      current_block = (Rpc - LABEL_47_18);
      goto lambda_4;

    case 11:
      current_block = (Rpc - LABEL_47_23);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_47_19);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_47_21);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_47_24);
      goto continuation_3;

    case 15:
      current_block = (Rpc - LABEL_47_27);
      goto lambda_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (discard_unused_loop_bindings_23)
DEFLABEL (discard_unused_loop_bindings_17)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_31;
  Wrd12 = Wrd16;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_6);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_47_12);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_18]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_29;
  Wrd11 = Wrd15;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_47_19);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_26]));

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_20])), (Wrd12.pObj));

DEFLABEL (label_20)
  (Wrd11.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_7])), (Wrd13.pObj));

DEFLABEL (label_19)
  (Wrd12.Obj) = Rvl;
  goto label_30;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_47_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_14])));
  Rhp += 3;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd19 = Wrd14;
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [4]) = (Wrd16.Obj);
  Rvl = (Wrd13.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_17]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_47_16);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_22]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_47_21);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_27])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_25)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_47_10);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_47_14);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_26)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_47_18);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_36;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd19.Lng) == 0)
    goto label_34;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_24]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_25]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_47_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_29]));

DEFLABEL (label_35)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_34;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_47_27);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define LABEL_48_7 9
#define LABEL_48_8 11
#define LABEL_48_9 13
#define LABEL_48_10 15
#define LABEL_48_13 17
#define LABEL_48_11 19
#define LABEL_48_15 21
#define TAG_48_16 9
#define LABEL_48_17 23
#define TAG_48_18 10
#define LABEL_48_19 25
#define ENVIRONMENT_LABEL_48_3 35
#define DEBUGGING_LABEL_48_2 34
#define OBJECT_48_2 33
#define OBJECT_48_1 32
#define OBJECT_48_0 31
#define EXECUTE_CACHE_48_14 27
#define EXECUTE_CACHE_48_12 29
#define FREE_REFERENCES_LABEL_48_0 26
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd44;
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
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_48_4);
      goto discard_parameters_from_operands_19;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto loop_17;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_48_7);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_48_8);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_48_9);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_48_10);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_48_13);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_48_11);
      goto continuation_15;

    case 9:
      current_block = (Rpc - LABEL_48_15);
      goto lambda_30;

    case 10:
      current_block = (Rpc - LABEL_48_17);
      goto lambda_31;

    case 11:
      current_block = (Rpc - LABEL_48_19);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (discard_parameters_from_operands_28)
DEFLABEL (discard_parameters_from_operands_19)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_48_0]);
  (Rsp [2]) = (Wrd7.Obj);
  goto loop_17;

DEFLABEL (loop_29)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_48_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_32;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_48_13);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_15])));
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

DEFLABEL (label_32)
  if (! ((Wrd6.uLng) == 1))
    goto label_42;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_41)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_40;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_39)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_38;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_37)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_36;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [0]);

DEFLABEL (label_35)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_34;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_33)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_48_11);
  (Rsp [3]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_17])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [4]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_34)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_24)
  (Wrd35.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 1);

DEFLABEL (label_22)
  (Wrd21.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 1);

DEFLABEL (label_21)
  (Wrd12.Obj) = Rvl;
  goto label_41;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_48_15);

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

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_48_17);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_48_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [4]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd21.Obj) = ((Wrd14.pObj) [2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd30.Obj) = ((Wrd14.pObj) [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_44;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd23.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_43)
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd38.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd38.Obj);
  goto loop_17;

DEFLABEL (label_44)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_19]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 1);

DEFLABEL (label_26)
  (Wrd23.Obj) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_9 7
#define LABEL_49_10 9
#define LABEL_49_11 11
#define LABEL_49_12 13
#define LABEL_49_13 15
#define LABEL_49_14 17
#define LABEL_49_15 19
#define LABEL_49_7 21
#define TAG_49_8 9
#define LABEL_49_17 23
#define LABEL_49_18 25
#define LABEL_49_20 27
#define LABEL_49_24 29
#define LABEL_49_22 31
#define TAG_49_23 14
#define LABEL_49_26 33
#define LABEL_49_28 35
#define TAG_49_29 16
#define ENVIRONMENT_LABEL_49_3 55
#define DEBUGGING_LABEL_49_2 54
#define OBJECT_49_4 53
#define OBJECT_49_3 52
#define OBJECT_49_2 51
#define OBJECT_49_1 50
#define OBJECT_49_0 49
#define EXECUTE_CACHE_49_27 37
#define EXECUTE_CACHE_49_25 39
#define EXECUTE_CACHE_49_21 41
#define EXECUTE_CACHE_49_19 43
#define EXECUTE_CACHE_49_16 45
#define EXECUTE_CACHE_49_6 47
#define FREE_REFERENCES_LABEL_49_0 36
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd39;
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
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd56;
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
      current_block = (Rpc - LABEL_49_4);
      goto discard_parameters_from_operand_24;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_49_9);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_49_10);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_49_11);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_49_12);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_49_13);
      goto label_30;

    case 7:
      current_block = (Rpc - LABEL_49_14);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_49_15);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_49_7);
      goto lambda_33;

    case 10:
      current_block = (Rpc - LABEL_49_17);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_49_18);
      goto lambda_11;

    case 12:
      current_block = (Rpc - LABEL_49_20);
      goto lambda_8;

    case 13:
      current_block = (Rpc - LABEL_49_24);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_49_22);
      goto lambda_34;

    case 15:
      current_block = (Rpc - LABEL_49_26);
      goto continuation_19;

    case 16:
      current_block = (Rpc - LABEL_49_28);
      goto lambda_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (discard_parameters_from_operand_32)
DEFLABEL (discard_parameters_from_operand_24)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_38;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd56.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_7])));
  Rhp += 2;
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd56.pObj)));
  Wrd59 = Wrd56;
  (Wrd60.Obj) = (Rsp [1]);
  ((Wrd59.pObj) [2]) = (Wrd60.Obj);
  (Wrd58.Obj) = (Rsp [0]);
  ((Wrd59.pObj) [3]) = (Wrd58.Obj);
  Rvl = (Wrd55.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_49;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_48)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_47;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_46)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_45;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_44)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_43;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_42)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_41;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_40)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_14]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_15]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_49_15);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_20]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_49_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_19]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_49_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  Rsp = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_22])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  Rvl = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_49_24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_49_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Rsp [4]) = (Wrd14.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_27]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_49_26);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_28])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_13]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 1);

DEFLABEL (label_29)
  (Wrd30.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 1);

DEFLABEL (label_27)
  (Wrd16.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 1);

DEFLABEL (label_26)
  (Wrd7.Obj) = Rvl;
  goto label_48;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_49_7);

DEFLABEL (lambda_1)
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

DEFLABEL (lambda_35)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_49_18);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_36)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_49_20);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_50;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_50)
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd9.Lng) == 0)
    goto label_52;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_51;

DEFLABEL (label_52)
  Rvl = (current_block [OBJECT_49_2]);

DEFLABEL (label_51)
DEFLABEL (label_53)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_49_22);

DEFLABEL (lambda_13)
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

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_49_28);

DEFLABEL (lambda_20)
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

#define LABEL_50_4 3
#define LABEL_50_7 5
#define LABEL_50_8 7
#define LABEL_50_9 9
#define LABEL_50_10 11
#define LABEL_50_11 13
#define LABEL_50_12 15
#define LABEL_50_5 17
#define TAG_50_6 7
#define LABEL_50_13 19
#define LABEL_50_17 21
#define LABEL_50_19 23
#define LABEL_50_21 25
#define LABEL_50_22 27
#define LABEL_50_24 29
#define LABEL_50_25 31
#define LABEL_50_26 33
#define LABEL_50_27 35
#define LABEL_50_28 37
#define LABEL_50_29 39
#define LABEL_50_31 41
#define LABEL_50_32 43
#define LABEL_50_33 45
#define LABEL_50_37 47
#define LABEL_50_38 49
#define LABEL_50_39 51
#define LABEL_50_30 53
#define LABEL_50_41 55
#define LABEL_50_42 57
#define LABEL_50_34 59
#define TAG_50_35 28
#define LABEL_50_44 61
#define LABEL_50_45 63
#define LABEL_50_20 65
#define LABEL_50_47 67
#define LABEL_50_48 69
#define LABEL_50_49 71
#define LABEL_50_14 73
#define TAG_50_15 35
#define LABEL_50_16 75
#define LABEL_50_43 77
#define LABEL_50_52 79
#define LABEL_50_46 81
#define LABEL_50_53 83
#define LABEL_50_54 85
#define LABEL_50_50 87
#define ENVIRONMENT_LABEL_50_3 107
#define DEBUGGING_LABEL_50_2 106
#define OBJECT_50_6 105
#define OBJECT_50_5 104
#define OBJECT_50_4 103
#define OBJECT_50_3 102
#define OBJECT_50_2 101
#define OBJECT_50_1 100
#define OBJECT_50_0 99
#define EXECUTE_CACHE_50_51 89
#define EXECUTE_CACHE_50_40 91
#define EXECUTE_CACHE_50_36 93
#define EXECUTE_CACHE_50_23 95
#define EXECUTE_CACHE_50_18 97
#define FREE_REFERENCES_LABEL_50_0 88
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd8;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd103;
  machine_word Wrd110;
  machine_word Wrd106;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd92;
  machine_word Wrd99;
  machine_word Wrd95;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd81;
  machine_word Wrd88;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd207;
  machine_word Wrd208;
  machine_word Wrd199;
  machine_word Wrd206;
  machine_word Wrd202;
  machine_word Wrd197;
  machine_word Wrd196;
  machine_word Wrd198;
  machine_word Wrd188;
  machine_word Wrd195;
  machine_word Wrd191;
  machine_word Wrd185;
  machine_word Wrd186;
  machine_word Wrd187;
  machine_word Wrd177;
  machine_word Wrd184;
  machine_word Wrd172;
  machine_word Wrd174;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd166;
  machine_word Wrd149;
  machine_word Wrd155;
  machine_word Wrd162;
  machine_word Wrd158;
  machine_word Wrd153;
  machine_word Wrd154;
  machine_word Wrd141;
  machine_word Wrd148;
  machine_word Wrd144;
  machine_word Wrd138;
  machine_word Wrd139;
  machine_word Wrd140;
  machine_word Wrd130;
  machine_word Wrd137;
  machine_word Wrd133;
  machine_word Wrd127;
  machine_word Wrd128;
  machine_word Wrd129;
  machine_word Wrd119;
  machine_word Wrd126;
  machine_word Wrd122;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd49;
  machine_word Wrd56;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd232;
  machine_word Wrd239;
  machine_word Wrd235;
  machine_word Wrd230;
  machine_word Wrd229;
  machine_word Wrd231;
  machine_word Wrd221;
  machine_word Wrd228;
  machine_word Wrd216;
  machine_word Wrd218;
  machine_word Wrd220;
  machine_word Wrd219;
  machine_word Wrd215;
  machine_word Wrd212;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd264;
  machine_word Wrd263;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd255;
  machine_word Wrd254;
  machine_word Wrd257;
  machine_word Wrd256;
  machine_word Wrd252;
  machine_word Wrd244;
  machine_word Wrd245;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd152;
  machine_word Wrd265;
  machine_word Wrd317;
  machine_word Wrd309;
  machine_word Wrd316;
  machine_word Wrd312;
  machine_word Wrd307;
  machine_word Wrd306;
  machine_word Wrd308;
  machine_word Wrd298;
  machine_word Wrd305;
  machine_word Wrd301;
  machine_word Wrd295;
  machine_word Wrd296;
  machine_word Wrd297;
  machine_word Wrd287;
  machine_word Wrd294;
  machine_word Wrd290;
  machine_word Wrd284;
  machine_word Wrd285;
  machine_word Wrd286;
  machine_word Wrd276;
  machine_word Wrd283;
  machine_word Wrd279;
  machine_word Wrd271;
  machine_word Wrd273;
  machine_word Wrd275;
  machine_word Wrd274;
  machine_word Wrd267;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_50_4);
      goto apply_discards_to_calls_60;

    case 1:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_26;

    case 2:
      current_block = (Rpc - LABEL_50_8);
      goto label_79;

    case 3:
      current_block = (Rpc - LABEL_50_9);
      goto label_80;

    case 4:
      current_block = (Rpc - LABEL_50_10);
      goto label_81;

    case 5:
      current_block = (Rpc - LABEL_50_11);
      goto label_82;

    case 6:
      current_block = (Rpc - LABEL_50_12);
      goto continuation_27;

    case 7:
      current_block = (Rpc - LABEL_50_5);
      goto loop_95;

    case 8:
      current_block = (Rpc - LABEL_50_13);
      goto label_62;

    case 9:
      current_block = (Rpc - LABEL_50_17);
      goto label_78;

    case 10:
      current_block = (Rpc - LABEL_50_19);
      goto label_63;

    case 11:
      current_block = (Rpc - LABEL_50_21);
      goto label_76;

    case 12:
      current_block = (Rpc - LABEL_50_22);
      goto label_77;

    case 13:
      current_block = (Rpc - LABEL_50_24);
      goto label_64;

    case 14:
      current_block = (Rpc - LABEL_50_25);
      goto label_65;

    case 15:
      current_block = (Rpc - LABEL_50_26);
      goto label_69;

    case 16:
      current_block = (Rpc - LABEL_50_27);
      goto label_70;

    case 17:
      current_block = (Rpc - LABEL_50_28);
      goto label_71;

    case 18:
      current_block = (Rpc - LABEL_50_29);
      goto label_72;

    case 19:
      current_block = (Rpc - LABEL_50_31);
      goto label_73;

    case 20:
      current_block = (Rpc - LABEL_50_32);
      goto label_74;

    case 21:
      current_block = (Rpc - LABEL_50_33);
      goto label_75;

    case 22:
      current_block = (Rpc - LABEL_50_37);
      goto label_66;

    case 23:
      current_block = (Rpc - LABEL_50_38);
      goto label_67;

    case 24:
      current_block = (Rpc - LABEL_50_39);
      goto label_68;

    case 25:
      current_block = (Rpc - LABEL_50_30);
      goto continuation_19;

    case 26:
      current_block = (Rpc - LABEL_50_41);
      goto label_83;

    case 27:
      current_block = (Rpc - LABEL_50_42);
      goto label_84;

    case 28:
      current_block = (Rpc - LABEL_50_34);
      goto lambda_97;

    case 29:
      current_block = (Rpc - LABEL_50_44);
      goto label_85;

    case 30:
      current_block = (Rpc - LABEL_50_45);
      goto label_86;

    case 31:
      current_block = (Rpc - LABEL_50_20);
      goto continuation_40;

    case 32:
      current_block = (Rpc - LABEL_50_47);
      goto label_87;

    case 33:
      current_block = (Rpc - LABEL_50_48);
      goto label_88;

    case 34:
      current_block = (Rpc - LABEL_50_49);
      goto label_89;

    case 35:
      current_block = (Rpc - LABEL_50_14);
      goto lambda_96;

    case 36:
      current_block = (Rpc - LABEL_50_16);
      goto continuation_57;

    case 37:
      current_block = (Rpc - LABEL_50_43);
      goto continuation_13;

    case 38:
      current_block = (Rpc - LABEL_50_52);
      goto label_90;

    case 39:
      current_block = (Rpc - LABEL_50_46);
      goto continuation_46;

    case 40:
      current_block = (Rpc - LABEL_50_53);
      goto label_91;

    case 41:
      current_block = (Rpc - LABEL_50_54);
      goto label_92;

    case 42:
      current_block = (Rpc - LABEL_50_50);
      goto continuation_53;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_discards_to_calls_94)
DEFLABEL (apply_discards_to_calls_60)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_5])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  Wrd12 = Wrd14;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_58;

DEFLABEL (loop_95)
  CLOSURE_HEADER (LABEL_50_5);

DEFLABEL (loop_58)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_98;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_98)
  if (! ((Wrd6.uLng) == 1))
    goto label_162;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_161)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [3]);
  if ((Wrd20.Obj) == (Wrd9.Obj))
    goto label_158;
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_157;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_156)
  Rdl = (& (Rsp [3]));
  (Wrd30.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == (current_block [OBJECT_50_2]))
    goto label_140;
  if ((Wrd30.Obj) == (current_block [OBJECT_50_3]))
    goto label_100;
  if ((Wrd30.Obj) == (current_block [OBJECT_50_5]))
    goto label_99;
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_36]));

DEFLABEL (label_99)
  Rvl = (Rsp [2]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_100)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd47.Obj) = (Rsp [4]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_139;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_138)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_137;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd57.Obj) = ((Wrd58.pObj) [0]);

DEFLABEL (label_136)
  (Wrd68.Obj) = (Rsp [3]);
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [3]);
  if ((Wrd70.Obj) == (Wrd57.Obj))
    goto label_120;
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd79.Obj) = (Rsp [6]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_135;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd76.Obj) = ((Wrd78.pObj) [1]);

DEFLABEL (label_134)
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_133;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd89.Obj) = ((Wrd90.pObj) [1]);

DEFLABEL (label_132)
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd102.uLng) == 1))
    goto label_131;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [0]);
  (* (--Rsp)) = (Wrd101.Obj);

DEFLABEL (label_130)
  (Wrd111.Obj) = (Rsp [6]);
  (Wrd112.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd113.Obj) = ((Wrd112.pObj) [3]);
  (* (--Rsp)) = (Wrd113.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_40]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (Wrd267.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd267.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_121;

DEFLABEL (label_120)
  (Wrd117.Obj) = (Rsp [4]);
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd118.uLng) == 1))
    goto label_119;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd114.Obj) = ((Wrd116.pObj) [1]);

DEFLABEL (label_118)
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd129.uLng) == 1))
    goto label_117;
  (Wrd128.pObj) = (OBJECT_ADDRESS (Wrd114.Obj));
  (Wrd127.Obj) = ((Wrd128.pObj) [1]);

DEFLABEL (label_116)
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if (! ((Wrd140.uLng) == 1))
    goto label_115;
  (Wrd139.pObj) = (OBJECT_ADDRESS (Wrd127.Obj));
  (Wrd138.Obj) = ((Wrd139.pObj) [1]);

DEFLABEL (label_114)
  (Wrd154.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if (! ((Wrd154.uLng) == 1))
    goto label_113;
  (Wrd153.pObj) = (OBJECT_ADDRESS (Wrd138.Obj));
  (Wrd152.Obj) = ((Wrd153.pObj) [0]);

DEFLABEL (label_112)
  Rsp = (& (Rsp [1]));
  (Wrd149.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd149.Obj));

DEFLABEL (label_111)
  (Wrd166.Obj) = (current_block [OBJECT_50_4]);
  (* (Rhp++)) = (Wrd152.Obj);
  (* (Rhp++)) = (Wrd166.Obj);
  (Wrd164.pObj) = (& (Rhp [-2]));
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd164.pObj)));
  (* (--Rsp)) = (Wrd165.Obj);
  (Wrd168.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd168.Obj);
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_30]))));
  (* (--Rsp)) = (Wrd171.Obj);
  (Wrd175.Obj) = (Rsp [5]);
  (Wrd176.uLng) = (OBJECT_TYPE (Wrd175.Obj));
  if (! ((Wrd176.uLng) == 1))
    goto label_110;
  (Wrd174.pObj) = (OBJECT_ADDRESS (Wrd175.Obj));
  (Wrd172.Obj) = ((Wrd174.pObj) [1]);

DEFLABEL (label_109)
  (Wrd187.uLng) = (OBJECT_TYPE (Wrd172.Obj));
  if (! ((Wrd187.uLng) == 1))
    goto label_108;
  (Wrd186.pObj) = (OBJECT_ADDRESS (Wrd172.Obj));
  (Wrd185.Obj) = ((Wrd186.pObj) [1]);

DEFLABEL (label_107)
  (Wrd198.uLng) = (OBJECT_TYPE (Wrd185.Obj));
  if (! ((Wrd198.uLng) == 1))
    goto label_106;
  (Wrd196.pObj) = (OBJECT_ADDRESS (Wrd185.Obj));
  (Wrd197.Obj) = ((Wrd196.pObj) [0]);
  (* (--Rsp)) = (Wrd197.Obj);

DEFLABEL (label_105)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd208.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_34])));
  Rhp += 1;
  (Wrd207.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd208.pObj)));
  Wrd209 = Wrd208;
  (Wrd210.Obj) = (Rsp [5]);
  ((Wrd209.pObj) [2]) = (Wrd210.Obj);
  (* (--Rsp)) = (Wrd207.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_36]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_50_30);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_104;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_103)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_102;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd25.Obj) = ((Wrd26.pObj) [0]);

DEFLABEL (label_101)
  (Wrd36.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_50_3]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_102)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_42]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_84)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_41]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_83)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd12.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd202.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd202.Obj);
  (Wrd206.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_33]))));
  (* (--Rsp)) = (Wrd206.Obj);
  (* (--Rsp)) = (Wrd185.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_75)
  (Wrd199.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd199.Obj));
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd191.Obj);
  (Wrd195.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_32]))));
  (* (--Rsp)) = (Wrd195.Obj);
  (* (--Rsp)) = (Wrd172.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_74)
  (Wrd188.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd188.Obj));
  (Wrd185.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (* (--Rsp)) = (Wrd168.Obj);
  (Wrd184.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_31]))));
  (* (--Rsp)) = (Wrd184.Obj);
  (* (--Rsp)) = (Wrd175.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_73)
  (Wrd177.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd177.Obj));
  (Wrd172.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_113)
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd158.Obj);
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_29]))));
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_72)
  (Wrd155.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd155.Obj));
  (Wrd152.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd144.Obj);
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_28]))));
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_71)
  (Wrd141.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd138.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd133.Obj);
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_27]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_70)
  (Wrd130.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd130.Obj));
  (Wrd127.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_26]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_69)
  (Wrd119.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd119.Obj));
  (Wrd114.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd274.Obj) = (Rsp [4]);
  (Wrd275.uLng) = (OBJECT_TYPE (Wrd274.Obj));
  if (! ((Wrd275.uLng) == 1))
    goto label_129;
  (Wrd273.pObj) = (OBJECT_ADDRESS (Wrd274.Obj));
  (Wrd271.Obj) = ((Wrd273.pObj) [1]);

DEFLABEL (label_128)
  (Wrd286.uLng) = (OBJECT_TYPE (Wrd271.Obj));
  if (! ((Wrd286.uLng) == 1))
    goto label_127;
  (Wrd285.pObj) = (OBJECT_ADDRESS (Wrd271.Obj));
  (Wrd284.Obj) = ((Wrd285.pObj) [1]);

DEFLABEL (label_126)
  (Wrd297.uLng) = (OBJECT_TYPE (Wrd284.Obj));
  if (! ((Wrd297.uLng) == 1))
    goto label_125;
  (Wrd296.pObj) = (OBJECT_ADDRESS (Wrd284.Obj));
  (Wrd295.Obj) = ((Wrd296.pObj) [1]);

DEFLABEL (label_124)
  (Wrd308.uLng) = (OBJECT_TYPE (Wrd295.Obj));
  if (! ((Wrd308.uLng) == 1))
    goto label_123;
  (Wrd306.pObj) = (OBJECT_ADDRESS (Wrd295.Obj));
  (Wrd307.Obj) = ((Wrd306.pObj) [0]);
  (* (--Rsp)) = (Wrd307.Obj);

DEFLABEL (label_122)
  (Wrd317.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd317.Obj);
  goto loop_58;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_50_12);
  (Wrd265.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd265.Obj));
  (Wrd152.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_123)
  (Wrd312.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd312.Obj);
  (Wrd316.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd316.Obj);
  (* (--Rsp)) = (Wrd295.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_82)
  (Wrd309.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd309.Obj));
  (* (--Rsp)) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  (Wrd301.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd301.Obj);
  (Wrd305.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_10]))));
  (* (--Rsp)) = (Wrd305.Obj);
  (* (--Rsp)) = (Wrd284.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_81)
  (Wrd298.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd298.Obj));
  (Wrd295.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  (Wrd290.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd290.Obj);
  (Wrd294.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd294.Obj);
  (* (--Rsp)) = (Wrd271.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_80)
  (Wrd287.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd287.Obj));
  (Wrd284.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  (Wrd279.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd279.Obj);
  (Wrd283.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd283.Obj);
  (* (--Rsp)) = (Wrd274.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_79)
  (Wrd276.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd276.Obj));
  (Wrd271.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd106.Obj);
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_39]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_68)
  (Wrd103.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd103.Obj));
  (* (--Rsp)) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_38]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_67)
  (Wrd92.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd89.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_37]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_66)
  (Wrd81.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd76.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_25]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_65)
  (Wrd60.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd57.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_24]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_64)
  (Wrd49.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd44.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_140)
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd212.Obj);
  (Wrd215.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_20]))));
  (* (--Rsp)) = (Wrd215.Obj);
  (Wrd219.Obj) = (Rsp [4]);
  (Wrd220.uLng) = (OBJECT_TYPE (Wrd219.Obj));
  if (! ((Wrd220.uLng) == 1))
    goto label_155;
  (Wrd218.pObj) = (OBJECT_ADDRESS (Wrd219.Obj));
  (Wrd216.Obj) = ((Wrd218.pObj) [1]);

DEFLABEL (label_154)
  (Wrd231.uLng) = (OBJECT_TYPE (Wrd216.Obj));
  if (! ((Wrd231.uLng) == 1))
    goto label_153;
  (Wrd229.pObj) = (OBJECT_ADDRESS (Wrd216.Obj));
  (Wrd230.Obj) = ((Wrd229.pObj) [0]);
  (* (--Rsp)) = (Wrd230.Obj);

DEFLABEL (label_152)
  (Wrd240.Obj) = (Rsp [4]);
  (Wrd241.pObj) = (OBJECT_ADDRESS (Wrd240.Obj));
  (Wrd242.Obj) = ((Wrd241.pObj) [3]);
  (* (--Rsp)) = (Wrd242.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_23]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_50_20);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_141;
  Rvl = (Rsp [2]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_141)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_46]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_151;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_150)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_149;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_148)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_147;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_146)
  (Wrd50.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd50.Obj);
  goto loop_58;

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_50_46);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_50_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_145;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_144)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_143;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd25.Obj) = ((Wrd26.pObj) [0]);

DEFLABEL (label_142)
  (Wrd36.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_50_2]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_143)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_54]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_92)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_145)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_53]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_91)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd12.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_49]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_89)
  (Wrd42.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd42.Obj));
  (* (--Rsp)) = Rvl;
  goto label_146;

DEFLABEL (label_149)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_48]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_88)
  (Wrd31.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_151)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_47]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_87)
  (Wrd20.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd15.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  (Wrd235.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd235.Obj);
  (Wrd239.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_22]))));
  (* (--Rsp)) = (Wrd239.Obj);
  (* (--Rsp)) = (Wrd216.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_77)
  (Wrd232.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd232.Obj));
  (* (--Rsp)) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  (* (--Rsp)) = (Wrd212.Obj);
  (Wrd228.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_21]))));
  (* (--Rsp)) = (Wrd228.Obj);
  (* (--Rsp)) = (Wrd219.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_76)
  (Wrd221.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd221.Obj));
  (Wrd216.Obj) = Rvl;
  goto label_154;

DEFLABEL (label_157)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_19]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_156;

DEFLABEL (label_158)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd245.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_14])));
  Rhp += 1;
  (Wrd244.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd245.pObj)));
  ((Wrd245.pObj) [2]) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd244.Obj);
  (Wrd252.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_16]))));
  (* (--Rsp)) = (Wrd252.Obj);
  (Wrd256.Obj) = (Rsp [3]);
  (Wrd257.uLng) = (OBJECT_TYPE (Wrd256.Obj));
  if (! ((Wrd257.uLng) == 1))
    goto label_160;
  (Wrd254.pObj) = (OBJECT_ADDRESS (Wrd256.Obj));
  (Wrd255.Obj) = ((Wrd254.pObj) [1]);
  (* (--Rsp)) = (Wrd255.Obj);

DEFLABEL (label_159)
  (Wrd262.Obj) = (Rsp [3]);
  (Wrd263.pObj) = (OBJECT_ADDRESS (Wrd262.Obj));
  (Wrd264.Obj) = ((Wrd263.pObj) [2]);
  (* (--Rsp)) = (Wrd264.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_18]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_50_16);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_160)
  (Wrd261.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_17]))));
  (* (--Rsp)) = (Wrd261.Obj);
  (* (--Rsp)) = (Wrd256.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_62)
  (Wrd9.Obj) = Rvl;
  goto label_161;

DEFLABEL (lambda_97)
  CLOSURE_HEADER (LABEL_50_34);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_168;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_167)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_166;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_165)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  goto loop_58;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_50_43);
  (Wrd9.Obj) = (current_block [OBJECT_50_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_164;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_163)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_164)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_52]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_90)
  (Wrd10.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_45]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 1);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_44]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 1);

DEFLABEL (label_85)
  (Wrd8.Obj) = Rvl;
  goto label_167;

DEFLABEL (lambda_96)
  CLOSURE_HEADER (LABEL_50_14);

DEFLABEL (lambda_55)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_169;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_169)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_50]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_50_4]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_51]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_50_50);
  (Wrd10.Obj) = (current_block [OBJECT_50_6]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_6 7
#define LABEL_51_7 9
#define LABEL_51_8 11
#define LABEL_51_9 13
#define LABEL_51_10 15
#define LABEL_51_12 17
#define LABEL_51_14 19
#define LABEL_51_11 21
#define LABEL_51_17 23
#define LABEL_51_18 25
#define LABEL_51_16 27
#define LABEL_51_19 29
#define TAG_51_20 13
#define ENVIRONMENT_LABEL_51_3 39
#define DEBUGGING_LABEL_51_2 38
#define OBJECT_51_2 37
#define OBJECT_51_1 36
#define OBJECT_51_0 35
#define EXECUTE_CACHE_51_15 31
#define EXECUTE_CACHE_51_13 33
#define FREE_REFERENCES_LABEL_51_0 30
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd72;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_51_4);
      goto apply_discards_to_operands_19;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto loop_17;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_51_7);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_51_8);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_51_9);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_51_10);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_51_12);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_51_14);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_51_11);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_51_17);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_51_18);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_51_16);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_51_19);
      goto lambda_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_discards_to_operands_30)
DEFLABEL (apply_discards_to_operands_19)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_51_0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  goto loop_17;

DEFLABEL (loop_31)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_51_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_33;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_51_14);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_51_16);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_19])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  if (! ((Wrd6.uLng) == 1))
    goto label_52;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;

DEFLABEL (label_44)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_43;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_42)
  (Rsp [0]) = (Wrd46.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_11]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_41;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_13]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_51_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd7.Obj) = (Rsp [3]);

DEFLABEL (label_36)
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_35;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_34)
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_17;

DEFLABEL (label_35)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_18]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_27)
  (Wrd8.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_39;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_38)
  (Wrd28.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  goto label_36;

DEFLABEL (label_39)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 1);

DEFLABEL (label_28)
  (Wrd17.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_12]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_10]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_24)
  (Wrd46.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_51;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_50)
  (Rsp [0]) = (Wrd15.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_49;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [0]);

DEFLABEL (label_48)
  (Wrd36.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Rsp [2]) = (Wrd33.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_47;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_46)
  (Rsp [1]) = (Wrd37.Obj);
  goto loop_17;

DEFLABEL (label_47)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_23)
  (Wrd37.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 1);

DEFLABEL (label_22)
  (Wrd24.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_21)
  (Wrd15.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 1);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_44;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_51_19);

DEFLABEL (lambda_4)
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

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_7 7
#define LABEL_52_8 9
#define LABEL_52_9 11
#define LABEL_52_10 13
#define LABEL_52_6 15
#define LABEL_52_12 17
#define ENVIRONMENT_LABEL_52_3 25
#define DEBUGGING_LABEL_52_2 24
#define OBJECT_52_2 23
#define OBJECT_52_1 22
#define OBJECT_52_0 21
#define EXECUTE_CACHE_52_11 19
#define FREE_REFERENCES_LABEL_52_0 18
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd57;
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
      current_block = (Rpc - LABEL_52_4);
      goto apply_discards_to_list_8;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_52_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_52_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_52_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_52_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_52_6);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_52_12);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_discards_to_list_17)
DEFLABEL (apply_discards_to_list_8)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_18;
  Rvl = (current_block [OBJECT_52_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  if (! ((Wrd6.uLng) == 1))
    goto label_29;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;

DEFLABEL (label_24)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_23;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_22)
  (Rsp [0]) = (Wrd34.Obj);
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_21;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_20)
  (Rsp [1]) = (Wrd43.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_11]));

DEFLABEL (label_21)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_10]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 1);

DEFLABEL (label_13)
  (Wrd43.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_9]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 1);

DEFLABEL (label_12)
  (Wrd34.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_28;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_27)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_26;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto label_19;

DEFLABEL (label_26)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_28)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_0]), 1);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_24;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_52_6);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_31;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_30)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_0]), 1);

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_5 3
#define LABEL_53_4 5
#define LABEL_53_6 7
#define LABEL_53_10 9
#define LABEL_53_11 11
#define LABEL_53_12 13
#define LABEL_53_13 15
#define LABEL_53_14 17
#define LABEL_53_15 19
#define LABEL_53_16 21
#define LABEL_53_17 23
#define LABEL_53_18 25
#define LABEL_53_19 27
#define LABEL_53_20 29
#define LABEL_53_21 31
#define LABEL_53_8 33
#define LABEL_53_23 35
#define LABEL_53_24 37
#define LABEL_53_25 39
#define LABEL_53_7 41
#define ENVIRONMENT_LABEL_53_3 61
#define DEBUGGING_LABEL_53_2 60
#define OBJECT_53_8 59
#define OBJECT_53_7 58
#define OBJECT_53_6 57
#define OBJECT_53_5 56
#define OBJECT_53_4 55
#define OBJECT_53_3 54
#define OBJECT_53_2 53
#define OBJECT_53_1 52
#define OBJECT_53_0 51
#define EXECUTE_CACHE_53_27 43
#define EXECUTE_CACHE_53_26 45
#define EXECUTE_CACHE_53_22 47
#define EXECUTE_CACHE_53_9 49
#define FREE_REFERENCES_LABEL_53_0 42
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd63;
  machine_word Wrd53;
  machine_word Wrd81;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd59;
  machine_word Wrd110;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd97;
  machine_word Wrd98;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd87;
  machine_word Wrd5;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd152;
  machine_word Wrd143;
  machine_word Wrd162;
  machine_word Wrd159;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd157;
  machine_word Wrd154;
  machine_word Wrd138;
  machine_word Wrd132;
  machine_word Wrd133;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd125;
  machine_word Wrd126;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd116;
  machine_word Wrd118;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd36;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd45;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd40;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_53_4);
      goto operand_copyableP_28;

    case 2:
      current_block = (Rpc - LABEL_53_6);
      goto label_30;

    case 3:
      current_block = (Rpc - LABEL_53_10);
      goto continuation_16;

    case 4:
      current_block = (Rpc - LABEL_53_11);
      goto label_38;

    case 5:
      current_block = (Rpc - LABEL_53_12);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_53_13);
      goto label_40;

    case 7:
      current_block = (Rpc - LABEL_53_14);
      goto label_41;

    case 8:
      current_block = (Rpc - LABEL_53_15);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_53_16);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_53_17);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_53_18);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_53_19);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_53_20);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_53_21);
      goto label_34;

    case 15:
      current_block = (Rpc - LABEL_53_8);
      goto continuation_3;

    case 16:
      current_block = (Rpc - LABEL_53_23);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_53_24);
      goto label_32;

    case 18:
      current_block = (Rpc - LABEL_53_25);
      goto label_33;

    case 19:
      current_block = (Rpc - LABEL_53_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operand_copyableP_43)
DEFLABEL (operand_copyableP_28)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_53_0]);
  (Wrd40.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd40.Lng))))
    goto label_62;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd37.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_61;

DEFLABEL (label_60)
  (Wrd13.Obj) = (current_block [OBJECT_53_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_44;
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_44)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_46;
  (Wrd15.Obj) = (current_block [OBJECT_53_4]);
  goto label_45;

DEFLABEL (label_46)
  (Wrd15.Obj) = (current_block [OBJECT_53_3]);

DEFLABEL (label_45)
DEFLABEL (label_59)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_58)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  Rvl = (Wrd24.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_53_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_54;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_53)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_52;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_51)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_50;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_49)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_20]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_48)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_26]));

DEFLABEL (label_50)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_25]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_6]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_24]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_5]), 1);

DEFLABEL (label_32)
  (Wrd23.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_23]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_5]), 1);

DEFLABEL (label_31)
  (Wrd14.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_57)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53_8]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_27]));

DEFLABEL (label_61)
  (Wrd36.Obj) = (current_block [OBJECT_53_3]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd36.Obj);
  goto label_58;

DEFLABEL (label_62)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_6]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  goto label_61;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_53_20);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;

DEFLABEL (label_64)
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_63)
  Rsp = (& (Rsp [3]));
  goto label_57;

DEFLABEL (label_65)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_19]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd73.Obj) = (current_block [OBJECT_53_0]);
  (Wrd76.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd76.Lng))))
    goto label_81;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd73.Obj));
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd50.Obj) == (Wrd52.Obj))
    goto label_80;

DEFLABEL (label_79)
  (Wrd53.Obj) = (current_block [OBJECT_53_2]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd63.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd63.Lng)))
    goto label_67;

DEFLABEL (label_66)
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_67)
  (Wrd56.uLng) = (OBJECT_DATUM (Wrd53.Obj));
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd56.Obj) == (Wrd58.Obj))
    goto label_69;
  (Wrd59.Obj) = (current_block [OBJECT_53_4]);
  goto label_68;

DEFLABEL (label_69)
  (Wrd59.Obj) = (current_block [OBJECT_53_3]);

DEFLABEL (label_68)
DEFLABEL (label_78)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_77)
  (Rsp [0]) = (Wrd59.Obj);
  if (! ((Wrd59.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_76;
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_15]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (current_block [OBJECT_53_7]);
  (* (--Rsp)) = (Wrd71.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_22]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_53_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd91.Obj) = (Rsp [2]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 1))
    goto label_74;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd88.Obj) = ((Wrd90.pObj) [1]);

DEFLABEL (label_73)
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd99.uLng) == 1))
    goto label_72;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd97.Obj) = ((Wrd98.pObj) [1]);

DEFLABEL (label_71)
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd106.uLng) == 1))
    goto label_70;
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd105.Obj) = ((Wrd104.pObj) [0]);
  (* (--Rsp)) = (Wrd105.Obj);
  goto label_48;

DEFLABEL (label_70)
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_18]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_6]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_72)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_17]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_5]), 1);

DEFLABEL (label_36)
  (Wrd97.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_16]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_5]), 1);

DEFLABEL (label_35)
  (Wrd88.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_75)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  goto label_63;

DEFLABEL (label_76)
  Wrd5 = Wrd59;
  goto label_63;

DEFLABEL (label_80)
  (Wrd59.Obj) = (current_block [OBJECT_53_3]);
  Rsp = (& (Rsp [2]));
  goto label_77;

DEFLABEL (label_81)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_21]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_79;
  goto label_80;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_53_7);
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_53_10);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_64;
  (Wrd119.Obj) = (Rsp [1]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if (! ((Wrd120.uLng) == 1))
    goto label_92;
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd119.Obj));
  (Wrd116.Obj) = ((Wrd118.pObj) [1]);

DEFLABEL (label_91)
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd127.uLng) == 1))
    goto label_90;
  (Wrd126.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd125.Obj) = ((Wrd126.pObj) [1]);

DEFLABEL (label_89)
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd134.uLng) == 1))
    goto label_88;
  (Wrd133.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd132.Obj) = ((Wrd133.pObj) [0]);

DEFLABEL (label_87)
  (Rsp [1]) = (Wrd132.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd154.Obj) = (current_block [OBJECT_53_0]);
  (Wrd157.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd157.Lng))))
    goto label_86;
  (Wrd140.uLng) = (OBJECT_DATUM (Wrd154.Obj));
  (Wrd141.Obj) = (Rsp [0]);
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if ((Wrd140.Obj) == (Wrd142.Obj))
    goto label_85;

DEFLABEL (label_84)
  (Wrd143.Obj) = (current_block [OBJECT_53_2]);
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd152.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd152.Lng))))
    goto label_66;
  (Wrd146.uLng) = (OBJECT_DATUM (Wrd143.Obj));
  (Wrd147.Obj) = (Rsp [1]);
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if ((Wrd146.Obj) == (Wrd148.Obj))
    goto label_83;
  (Wrd5.Obj) = (current_block [OBJECT_53_4]);
  goto label_82;

DEFLABEL (label_83)
  (Wrd5.Obj) = (current_block [OBJECT_53_3]);

DEFLABEL (label_82)
  goto label_63;

DEFLABEL (label_85)
  (Wrd5.Obj) = (current_block [OBJECT_53_3]);
  Rsp = (& (Rsp [2]));
  goto label_57;

DEFLABEL (label_86)
  (Wrd159.Obj) = (Rsp [0]);
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_14]))));
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_84;
  goto label_85;

DEFLABEL (label_88)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_13]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_6]), 1);

DEFLABEL (label_40)
  (Wrd132.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_12]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_5]), 1);

DEFLABEL (label_39)
  (Wrd125.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_11]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_5]), 1);

DEFLABEL (label_38)
  (Wrd116.Obj) = Rvl;
  goto label_91;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_53_19);
  (Wrd59.Obj) = Rvl;
  goto label_77;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_9 7
#define LABEL_54_7 9
#define ENVIRONMENT_LABEL_54_3 17
#define DEBUGGING_LABEL_54_2 16
#define OBJECT_54_0 15
#define EXECUTE_CACHE_54_8 11
#define EXECUTE_CACHE_54_6 13
#define FREE_REFERENCES_LABEL_54_0 10
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_54_4);
      goto operand_substitutableP_4;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_54_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_54_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operand_substitutableP_7)
DEFLABEL (operand_substitutableP_4)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_54_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_54_0]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define LABEL_55_7 7
#define ENVIRONMENT_LABEL_55_3 15
#define DEBUGGING_LABEL_55_2 14
#define OBJECT_55_0 13
#define EXECUTE_CACHE_55_8 9
#define EXECUTE_CACHE_55_6 11
#define FREE_REFERENCES_LABEL_55_0 8
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto operand_discardableP_3;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_55_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operand_discardableP_6)
DEFLABEL (operand_discardableP_3)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_55_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_55_0]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define LABEL_56_7 7
#define LABEL_56_6 9
#define LABEL_56_8 11
#define ENVIRONMENT_LABEL_56_3 17
#define DEBUGGING_LABEL_56_2 16
#define OBJECT_56_3 15
#define OBJECT_56_2 14
#define OBJECT_56_1 13
#define OBJECT_56_0 12
#define FREE_REFERENCES_LABEL_56_0 12
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_56_4);
      goto expression_may_have_side_effectsP_8;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_56_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_56_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_56_8);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_may_have_side_effectsP_13)
DEFLABEL (expression_may_have_side_effectsP_8)
  INTERRUPT_CHECK (26, LABEL_56_4);
  goto loop_6;

DEFLABEL (loop_14)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_56_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_18;
  if ((Wrd5.Obj) == (current_block [OBJECT_56_1]))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_15;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_56_2]);

DEFLABEL (label_15)
DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_23;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_22)
  goto loop_6;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_56_6);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [2]));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = Rvl;
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_19)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_21;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_20)
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  goto loop_6;

DEFLABEL (label_21)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_3]), 1);

DEFLABEL (label_11)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_0]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_6 7
#define LABEL_57_8 9
#define LABEL_57_9 11
#define LABEL_57_10 13
#define LABEL_57_11 15
#define LABEL_57_17 17
#define LABEL_57_18 19
#define LABEL_57_19 21
#define LABEL_57_25 23
#define LABEL_57_23 25
#define TAG_57_24 11
#define LABEL_57_16 27
#define LABEL_57_20 29
#define TAG_57_21 13
#define LABEL_57_32 31
#define LABEL_57_33 33
#define LABEL_57_12 35
#define LABEL_57_34 37
#define LABEL_57_35 39
#define LABEL_57_36 41
#define LABEL_57_13 43
#define TAG_57_14 20
#define LABEL_57_37 45
#define LABEL_57_38 47
#define LABEL_57_39 49
#define LABEL_57_27 51
#define LABEL_57_41 53
#define LABEL_57_42 55
#define LABEL_57_29 57
#define LABEL_57_43 59
#define LABEL_57_44 61
#define LABEL_57_45 63
#define LABEL_57_46 65
#define LABEL_57_30 67
#define TAG_57_31 32
#define LABEL_57_47 69
#define LABEL_57_48 71
#define LABEL_57_49 73
#define LABEL_57_50 75
#define LABEL_57_51 77
#define LABEL_57_52 79
#define LABEL_57_53 81
#define ENVIRONMENT_LABEL_57_3 107
#define DEBUGGING_LABEL_57_2 106
#define OBJECT_57_8 105
#define OBJECT_57_7 104
#define OBJECT_57_6 103
#define OBJECT_57_5 102
#define OBJECT_57_4 101
#define OBJECT_57_3 100
#define OBJECT_57_2 99
#define OBJECT_57_1 98
#define OBJECT_57_0 97
#define EXECUTE_CACHE_57_40 83
#define EXECUTE_CACHE_57_28 85
#define EXECUTE_CACHE_57_26 87
#define EXECUTE_CACHE_57_22 89
#define EXECUTE_CACHE_57_15 91
#define EXECUTE_CACHE_57_7 93
#define FREE_REFERENCE_57_0 96
#define FREE_REFERENCES_LABEL_57_0 82
#define NUMBER_OF_LINKER_SECTIONS_57_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_57_4);
      goto count_references_48;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_57_6);
      goto lambda_0;

    case 3:
      current_block = (Rpc - LABEL_57_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_57_9);
      goto label_50;

    case 5:
      current_block = (Rpc - LABEL_57_10);
      goto loop_45;

    case 6:
      current_block = (Rpc - LABEL_57_11);
      goto label_51;

    case 7:
      current_block = (Rpc - LABEL_57_17);
      goto label_52;

    case 8:
      current_block = (Rpc - LABEL_57_18);
      goto label_53;

    case 9:
      current_block = (Rpc - LABEL_57_19);
      goto label_54;

    case 10:
      current_block = (Rpc - LABEL_57_25);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_57_23);
      goto lambda_82;

    case 12:
      current_block = (Rpc - LABEL_57_16);
      goto continuation_21;

    case 13:
      current_block = (Rpc - LABEL_57_20);
      goto lambda_81;

    case 14:
      current_block = (Rpc - LABEL_57_32);
      goto label_55;

    case 15:
      current_block = (Rpc - LABEL_57_33);
      goto label_56;

    case 16:
      current_block = (Rpc - LABEL_57_12);
      goto continuation_43;

    case 17:
      current_block = (Rpc - LABEL_57_34);
      goto label_57;

    case 18:
      current_block = (Rpc - LABEL_57_35);
      goto label_58;

    case 19:
      current_block = (Rpc - LABEL_57_36);
      goto label_59;

    case 20:
      current_block = (Rpc - LABEL_57_13);
      goto lambda_80;

    case 21:
      current_block = (Rpc - LABEL_57_37);
      goto label_60;

    case 22:
      current_block = (Rpc - LABEL_57_38);
      goto label_61;

    case 23:
      current_block = (Rpc - LABEL_57_39);
      goto label_62;

    case 24:
      current_block = (Rpc - LABEL_57_27);
      goto continuation_6;

    case 25:
      current_block = (Rpc - LABEL_57_41);
      goto label_63;

    case 26:
      current_block = (Rpc - LABEL_57_42);
      goto label_64;

    case 27:
      current_block = (Rpc - LABEL_57_29);
      goto continuation_35;

    case 28:
      current_block = (Rpc - LABEL_57_43);
      goto label_65;

    case 29:
      current_block = (Rpc - LABEL_57_44);
      goto label_66;

    case 30:
      current_block = (Rpc - LABEL_57_45);
      goto label_67;

    case 31:
      current_block = (Rpc - LABEL_57_46);
      goto label_68;

    case 32:
      current_block = (Rpc - LABEL_57_30);
      goto lambda_83;

    case 33:
      current_block = (Rpc - LABEL_57_47);
      goto label_69;

    case 34:
      current_block = (Rpc - LABEL_57_48);
      goto label_70;

    case 35:
      current_block = (Rpc - LABEL_57_49);
      goto label_71;

    case 36:
      current_block = (Rpc - LABEL_57_50);
      goto label_72;

    case 37:
      current_block = (Rpc - LABEL_57_51);
      goto label_73;

    case 38:
      current_block = (Rpc - LABEL_57_52);
      goto label_74;

    case 39:
      current_block = (Rpc - LABEL_57_53);
      goto label_75;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (count_references_77)
DEFLABEL (count_references_48)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto loop_45;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_57_8);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_85;
  Wrd6 = Wrd10;

DEFLABEL (label_84)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_7]));

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_9])), (Wrd7.pObj));

DEFLABEL (label_50)
  (Wrd6.Obj) = Rvl;
  goto label_84;

DEFLABEL (lambda_78)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_57_6);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (current_block [OBJECT_57_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_79)
DEFLABEL (loop_45)
  INTERRUPT_CHECK (26, LABEL_57_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_93;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_26]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_57_25);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_86;
  Rvl = (current_block [OBJECT_57_6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_27]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_28]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_57_27);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_87;
  Rvl = (current_block [OBJECT_57_6]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_87)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_92;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_91)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_90;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd24.Lng) = ((Wrd25.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_90;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));

DEFLABEL (label_89)
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_88;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  ((Wrd28.pObj) [1]) = (Wrd22.Obj);
  Rvl = (current_block [OBJECT_57_6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_88)
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_7]), 2);

DEFLABEL (label_90)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_42]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_64)
  (Wrd22.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_41]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (label_63)
  (Wrd9.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_93)
  if (! ((Wrd6.uLng) == 1))
    goto label_118;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_117)
  (Wrd20.Obj) = (Rsp [0]);
  if (! ((Wrd20.Obj) == (current_block [OBJECT_57_2])))
    goto label_100;
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_12]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd69.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_13])));
  Rhp += 1;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd69.pObj)));
  Wrd70 = Wrd69;
  (Wrd71.Obj) = (Rsp [2]);
  ((Wrd70.pObj) [2]) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd72.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd72.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_15]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_57_12);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_99;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_98)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_97;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_96)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_95;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_94)
  (Rsp [1]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_45;

DEFLABEL (label_95)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_36]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_59)
  (Wrd22.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_35]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (label_58)
  (Wrd15.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_34]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (label_57)
  (Wrd6.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_100)
  if ((Wrd20.Obj) == (current_block [OBJECT_57_3]))
    goto label_102;
  if ((Wrd20.Obj) == (current_block [OBJECT_57_5]))
    goto label_101;
  (Wrd26.Obj) = (Rsp [1]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_23])));
  Rhp += 1;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  Wrd30 = Wrd29;
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  (Rsp [1]) = (Wrd28.Obj);
  (Rsp [2]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_22]));

DEFLABEL (label_101)
  Rvl = (current_block [OBJECT_57_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_102)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_16]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_116;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_115)
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_114;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd47.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_113)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_112;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_111)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd62.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_20])));
  Rhp += 1;
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd62.pObj)));
  Wrd63 = Wrd62;
  (Wrd64.Obj) = (Rsp [4]);
  ((Wrd63.pObj) [2]) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_22]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_57_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_30])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_15]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_57_29);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_110;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_109)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_108;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_107)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_106;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_105)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_104;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd29.Obj) = ((Wrd30.pObj) [0]);

DEFLABEL (label_103)
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_45;

DEFLABEL (label_104)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_46]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_68)
  (Wrd29.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_45]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (label_67)
  (Wrd22.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_44]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (label_66)
  (Wrd15.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_43]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (label_65)
  (Wrd6.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_19]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_54)
  (* (--Rsp)) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_18]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (label_53)
  (Wrd47.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_17]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (label_52)
  (Wrd38.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (lambda_82)
  CLOSURE_HEADER (LABEL_57_23);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  goto loop_45;

DEFLABEL (lambda_81)
  CLOSURE_HEADER (LABEL_57_20);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_122;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_121)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_120;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_119)
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd24.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd24.Obj);
  goto loop_45;

DEFLABEL (label_120)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_33]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_56)
  (Wrd17.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_32]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (label_55)
  (Wrd8.Obj) = Rvl;
  goto label_121;

DEFLABEL (lambda_80)
  CLOSURE_HEADER (LABEL_57_13);

DEFLABEL (lambda_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_128;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_127)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_126;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_125)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_124;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_123)
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd36.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_40]));

DEFLABEL (label_124)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_39]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_62)
  (Wrd27.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_38]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_37]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (label_60)
  (Wrd5.Obj) = Rvl;
  goto label_127;

DEFLABEL (lambda_83)
  CLOSURE_HEADER (LABEL_57_30);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_143;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_142)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_141;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_140)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_139;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_138)
  (Wrd36.Obj) = (* (Rsp++));
  if (! ((Wrd27.Obj) == (Wrd36.Obj)))
    goto label_129;
  Rvl = (current_block [OBJECT_57_8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_129)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_137;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd37.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_136)
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_135;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd52.Obj) = ((Wrd53.pObj) [1]);

DEFLABEL (label_134)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_133;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_132)
  (Wrd69.Obj) = (Rsp [2]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 1))
    goto label_131;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd66.Obj) = ((Wrd68.pObj) [0]);

DEFLABEL (label_130)
  (Rsp [1]) = (Wrd66.Obj);
  (Wrd75.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_28]));

DEFLABEL (label_131)
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_53]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_75)
  (Wrd66.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_52]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_74)
  (* (--Rsp)) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_51]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (label_73)
  (Wrd52.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_50]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (label_72)
  (Wrd37.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_49]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_71)
  (Wrd27.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_48]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_140;

DEFLABEL (label_143)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_47]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_4]), 1);

DEFLABEL (label_69)
  (Wrd5.Obj) = Rvl;
  goto label_142;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define ENVIRONMENT_LABEL_58_3 12
#define DEBUGGING_LABEL_58_2 11
#define EXECUTE_CACHE_58_7 7
#define EXECUTE_CACHE_58_6 9
#define FREE_REFERENCES_LABEL_58_0 6
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto optimize_pointer_usage_1;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimize_pointer_usage_4)
DEFLABEL (optimize_pointer_usage_1)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_9 5
#define LABEL_59_6 7
#define LABEL_59_11 9
#define LABEL_59_5 11
#define LABEL_59_20 13
#define LABEL_59_7 15
#define TAG_59_8 6
#define LABEL_59_21 17
#define LABEL_59_19 19
#define LABEL_59_17 21
#define LABEL_59_14 23
#define TAG_59_15 10
#define LABEL_59_12 25
#define TAG_59_13 11
#define LABEL_59_27 27
#define LABEL_59_23 29
#define LABEL_59_28 31
#define ENVIRONMENT_LABEL_59_3 56
#define DEBUGGING_LABEL_59_2 55
#define OBJECT_59_2 54
#define OBJECT_59_1 53
#define OBJECT_59_0 52
#define EXECUTE_CACHE_59_29 33
#define EXECUTE_CACHE_59_26 35
#define EXECUTE_CACHE_59_25 37
#define EXECUTE_CACHE_59_24 39
#define EXECUTE_CACHE_59_22 41
#define EXECUTE_CACHE_59_18 43
#define EXECUTE_CACHE_59_16 45
#define EXECUTE_CACHE_59_10 47
#define FREE_REFERENCE_59_1 50
#define FREE_REFERENCE_59_0 51
#define FREE_REFERENCES_LABEL_59_0 32
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_59_4);
      goto optimize_pointer_usage__17;

    case 1:
      current_block = (Rpc - LABEL_59_9);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_59_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_59_11);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_59_20);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_59_7);
      goto lambda_26;

    case 7:
      current_block = (Rpc - LABEL_59_21);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_59_19);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_59_17);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_59_14);
      goto lambda_28;

    case 11:
      current_block = (Rpc - LABEL_59_12);
      goto lambda_27;

    case 12:
      current_block = (Rpc - LABEL_59_27);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_59_23);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_59_28);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimize_pointer_usage__25)
DEFLABEL (optimize_pointer_usage__17)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_7])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_40;
  Wrd15 = Wrd19;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_59_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_31;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_30)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_59_19);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_23]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_59_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_28]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_59_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_29]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_59_28);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_26]));

DEFLABEL (label_31)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_33;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_14])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  Wrd31 = Wrd30;
  (Wrd32.Obj) = (Rsp [2]);
  ((Wrd31.pObj) [2]) = (Wrd32.Obj);
  (Rsp [1]) = (Wrd29.Obj);
  (Rsp [2]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_16]));

DEFLABEL (label_33)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_59_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_25]));

DEFLABEL (label_34)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_1]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_38;
  Wrd38 = Wrd42;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd38.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_12])));
  Rhp += 1;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  Wrd47 = Wrd46;
  (Wrd48.Obj) = (Rsp [3]);
  ((Wrd47.pObj) [2]) = (Wrd48.Obj);
  (Rsp [1]) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_10]));

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_11])), (Wrd39.pObj));

DEFLABEL (label_21)
  (Wrd38.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_9])), (Wrd16.pObj));

DEFLABEL (label_19)
  (Wrd15.Obj) = Rvl;
  goto label_39;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_59_5);
  goto label_35;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_59_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_42;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_41)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_22]));

DEFLABEL (label_42)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_21]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 1);

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_41;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_59_14);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_26]));

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_59_12);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_44;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_43)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_22]));

DEFLABEL (label_44)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_27]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 1);

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_6 5
#define LABEL_60_5 7
#define LABEL_60_8 9
#define LABEL_60_9 11
#define ENVIRONMENT_LABEL_60_3 22
#define DEBUGGING_LABEL_60_2 21
#define OBJECT_60_1 20
#define OBJECT_60_0 19
#define EXECUTE_CACHE_60_7 13
#define FREE_REFERENCE_60_0 16
#define FREE_ASSIGNMENT_60_0 18
#define FREE_REFERENCES_LABEL_60_0 12
#define NUMBER_OF_LINKER_SECTIONS_60_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_60_4);
      goto define_pointer_optimization_4;

    case 1:
      current_block = (Rpc - LABEL_60_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_60_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_60_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_pointer_optimization_10)
DEFLABEL (define_pointer_optimization_4)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_11;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [1]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_60_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_12)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_17;
  Wrd17 = Wrd21;

DEFLABEL (label_16)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_60_0]));
  (Wrd39.Obj) = ((Wrd31.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd31.pObj) [0]) = (Wrd28.Obj);

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_60_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  if ((Wrd39.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_60_9])), (Wrd31.pObj), (Wrd28.Obj));

DEFLABEL (label_8)
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_8])), (Wrd18.pObj));

DEFLABEL (label_7)
  (Wrd17.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_6])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_6 5
#define LABEL_61_5 7
#define LABEL_61_8 9
#define LABEL_61_9 11
#define ENVIRONMENT_LABEL_61_3 22
#define DEBUGGING_LABEL_61_2 21
#define OBJECT_61_1 20
#define OBJECT_61_0 19
#define EXECUTE_CACHE_61_7 13
#define FREE_REFERENCE_61_0 16
#define FREE_ASSIGNMENT_61_0 18
#define FREE_REFERENCES_LABEL_61_0 12
#define NUMBER_OF_LINKER_SECTIONS_61_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_61_4);
      goto define_default_pointer_optimization_4;

    case 1:
      current_block = (Rpc - LABEL_61_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_61_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_61_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_default_pointer_optimization_10)
DEFLABEL (define_default_pointer_optimization_4)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_19;
  Wrd8 = Wrd12;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_11;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [1]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_61_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_12)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_17;
  Wrd17 = Wrd21;

DEFLABEL (label_16)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_61_0]));
  (Wrd39.Obj) = ((Wrd31.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  ((Wrd31.pObj) [0]) = (Wrd28.Obj);

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_61_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  if ((Wrd39.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_61_9])), (Wrd31.pObj), (Wrd28.Obj));

DEFLABEL (label_8)
  goto label_13;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_8])), (Wrd18.pObj));

DEFLABEL (label_7)
  (Wrd17.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_6])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define ENVIRONMENT_LABEL_62_3 6
#define DEBUGGING_LABEL_62_2 5
#define OBJECT_62_0 4
#define FREE_REFERENCES_LABEL_62_0 4
#define NUMBER_OF_LINKER_SECTIONS_62_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
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
      goto make_empty_pointers_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_empty_pointers_3)
DEFLABEL (make_empty_pointers_0)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd9.Obj) = (current_block [OBJECT_62_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define ENVIRONMENT_LABEL_63_3 12
#define DEBUGGING_LABEL_63_2 11
#define EXECUTE_CACHE_63_7 7
#define EXECUTE_CACHE_63_6 9
#define FREE_REFERENCES_LABEL_63_0 6
#define NUMBER_OF_LINKER_SECTIONS_63_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_63_4);
      goto current_pointerP_1;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_pointerP_4)
DEFLABEL (current_pointerP_1)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define ENVIRONMENT_LABEL_64_3 12
#define DEBUGGING_LABEL_64_2 11
#define EXECUTE_CACHE_64_7 7
#define EXECUTE_CACHE_64_6 9
#define FREE_REFERENCES_LABEL_64_0 6
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_64_4);
      goto new_pointer_1;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (new_pointer_4)
DEFLABEL (new_pointer_1)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define ENVIRONMENT_LABEL_65_3 12
#define DEBUGGING_LABEL_65_2 11
#define EXECUTE_CACHE_65_7 7
#define EXECUTE_CACHE_65_6 9
#define FREE_REFERENCES_LABEL_65_0 6
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_65_4);
      goto no_pointer_1;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (no_pointer_4)
DEFLABEL (no_pointer_1)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define ENVIRONMENT_LABEL_66_3 12
#define DEBUGGING_LABEL_66_2 11
#define EXECUTE_CACHE_66_7 7
#define EXECUTE_CACHE_66_6 9
#define FREE_REFERENCES_LABEL_66_0 6
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_66_4);
      goto drop_pointer_refs_1;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (drop_pointer_refs_4)
DEFLABEL (drop_pointer_refs_1)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_7 7
#define ENVIRONMENT_LABEL_67_3 15
#define DEBUGGING_LABEL_67_2 14
#define OBJECT_67_0 13
#define EXECUTE_CACHE_67_8 9
#define EXECUTE_CACHE_67_6 11
#define FREE_REFERENCES_LABEL_67_0 8
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_67_4);
      goto canonicalize_pointer_ref_4;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_67_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_pointer_ref_7)
DEFLABEL (canonicalize_pointer_ref_4)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_8;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_67_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_9;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  Rvl = ((Wrd8.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_6 7
#define LABEL_68_10 9
#define LABEL_68_13 11
#define LABEL_68_8 13
#define LABEL_68_11 15
#define LABEL_68_16 17
#define LABEL_68_14 19
#define LABEL_68_18 21
#define LABEL_68_17 23
#define LABEL_68_20 25
#define ENVIRONMENT_LABEL_68_3 41
#define DEBUGGING_LABEL_68_2 40
#define OBJECT_68_2 39
#define OBJECT_68_1 38
#define OBJECT_68_0 37
#define EXECUTE_CACHE_68_19 27
#define EXECUTE_CACHE_68_15 29
#define EXECUTE_CACHE_68_12 31
#define EXECUTE_CACHE_68_9 33
#define EXECUTE_CACHE_68_7 35
#define FREE_REFERENCES_LABEL_68_0 26
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_68_4);
      goto Z__new_pointer_17;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_68_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_68_10);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_68_13);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_68_8);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_68_11);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_68_16);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_68_14);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_68_18);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_68_17);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_68_20);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__new_pointer_26)
DEFLABEL (Z__new_pointer_17)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_41;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;

DEFLABEL (label_32)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_9]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_68_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_68_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_31;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_30)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_19]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_68_17);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_29;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_28)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_0]), 1);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_68_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_36;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_35;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_34)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_68_2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 1);

DEFLABEL (label_20)
  (Wrd7.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_40;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_39)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_68_11);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_38;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_37)
  (Wrd13.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_0]), 1);

DEFLABEL (label_22)
  (Wrd6.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_0]), 1);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define LABEL_69_6 7
#define LABEL_69_7 9
#define LABEL_69_8 11
#define LABEL_69_10 13
#define LABEL_69_9 15
#define LABEL_69_12 17
#define ENVIRONMENT_LABEL_69_3 25
#define DEBUGGING_LABEL_69_2 24
#define OBJECT_69_2 23
#define OBJECT_69_1 22
#define OBJECT_69_0 21
#define EXECUTE_CACHE_69_11 19
#define FREE_REFERENCES_LABEL_69_0 18
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd60;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd74;
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
      current_block = (Rpc - LABEL_69_4);
      goto replace_item_11;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_69_6);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_69_7);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_69_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_69_10);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_69_9);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_69_12);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (replace_item_18)
DEFLABEL (replace_item_11)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [5]));
  goto loop_9;

DEFLABEL (loop_19)
DEFLABEL (loop_9)
  DLINK_INTERRUPT_CHECK (25, LABEL_69_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_29;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_69_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_69_5);
  (Wrd74.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd74.Obj));

DEFLABEL (label_29)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_28;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_27)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  if ((Wrd16.Obj) == (Wrd31.Obj))
    goto label_24;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_23;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_22)
  Rdl = (& (Rsp [2]));
  goto loop_9;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_69_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_21;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_20)
  (Wrd20.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_21)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_0]), 1);

DEFLABEL (label_16)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_10]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 1);

DEFLABEL (label_14)
  (Wrd46.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd46.Obj));
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_26;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_25)
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [1]);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd69.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd69.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_26)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_8]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 1);

DEFLABEL (label_15)
  (Wrd60.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd55.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_0]), 1);

DEFLABEL (label_13)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd16.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_6 7
#define ENVIRONMENT_LABEL_70_3 11
#define DEBUGGING_LABEL_70_2 10
#define OBJECT_70_1 9
#define OBJECT_70_0 8
#define FREE_REFERENCES_LABEL_70_0 8
#define NUMBER_OF_LINKER_SECTIONS_70_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd30;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_70_4);
      goto Z__no_pointer_2;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_70_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__no_pointer_7)
DEFLABEL (Z__no_pointer_2)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_13;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_10;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_9)
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 1);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  Rvl = (Rsp [0]);
  goto label_8;

DEFLABEL (label_13)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_0]), 1);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_6 5
#define LABEL_71_5 7
#define LABEL_71_7 9
#define TAG_71_8 3
#define LABEL_71_10 11
#define TAG_71_11 4
#define ENVIRONMENT_LABEL_71_3 21
#define DEBUGGING_LABEL_71_2 20
#define OBJECT_71_0 19
#define EXECUTE_CACHE_71_13 13
#define EXECUTE_CACHE_71_12 15
#define EXECUTE_CACHE_71_9 17
#define FREE_REFERENCES_LABEL_71_0 12
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_71_4);
      goto Z__drop_pointer_refs_4;

    case 1:
      current_block = (Rpc - LABEL_71_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_71_7);
      goto lambda_9;

    case 4:
      current_block = (Rpc - LABEL_71_10);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__drop_pointer_refs_8)
DEFLABEL (Z__drop_pointer_refs_4)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_12;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_11)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_71_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_71_7])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd19 = Wrd18;
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_71_5);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_71_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_71_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_71_10])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_12]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_71_10);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_13]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define LABEL_72_6 7
#define LABEL_72_7 9
#define TAG_72_8 3
#define LABEL_72_10 11
#define ENVIRONMENT_LABEL_72_3 21
#define DEBUGGING_LABEL_72_2 20
#define OBJECT_72_2 19
#define OBJECT_72_1 18
#define OBJECT_72_0 17
#define EXECUTE_CACHE_72_11 13
#define EXECUTE_CACHE_72_9 15
#define FREE_REFERENCES_LABEL_72_0 12
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd30;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_72_4);
      goto Z__current_pointers_4;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_72_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_72_7);
      goto lambda_11;

    case 4:
      current_block = (Rpc - LABEL_72_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__current_pointers_10)
DEFLABEL (Z__current_pointers_4)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_16;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_13;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_72_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_15;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_14)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_72_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_72_7])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd23 = Wrd22;
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_9]));

DEFLABEL (label_15)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_2]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_0]), 1);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_72_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_18;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_17)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_11]));

DEFLABEL (label_18)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_0]), 1);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_8 5
#define LABEL_73_5 7
#define LABEL_73_6 9
#define TAG_73_7 3
#define ENVIRONMENT_LABEL_73_3 18
#define DEBUGGING_LABEL_73_2 17
#define OBJECT_73_1 16
#define OBJECT_73_0 15
#define EXECUTE_CACHE_73_10 11
#define EXECUTE_CACHE_73_9 13
#define FREE_REFERENCES_LABEL_73_0 10
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_73_4);
      goto Z__id_pointers_4;

    case 1:
      current_block = (Rpc - LABEL_73_8);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_73_6);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__id_pointers_8)
DEFLABEL (Z__id_pointers_4)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_73_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_14;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_73_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = (Wrd6.Obj);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_73_1]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_73_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_10]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_6 7
#define LABEL_74_7 9
#define LABEL_74_8 11
#define LABEL_74_9 13
#define LABEL_74_10 15
#define LABEL_74_11 17
#define LABEL_74_12 19
#define LABEL_74_13 21
#define LABEL_74_15 23
#define LABEL_74_18 25
#define LABEL_74_21 27
#define LABEL_74_22 29
#define LABEL_74_20 31
#define ENVIRONMENT_LABEL_74_3 47
#define DEBUGGING_LABEL_74_2 46
#define OBJECT_74_4 45
#define OBJECT_74_3 44
#define OBJECT_74_2 43
#define OBJECT_74_1 42
#define OBJECT_74_0 41
#define EXECUTE_CACHE_74_19 33
#define EXECUTE_CACHE_74_17 35
#define EXECUTE_CACHE_74_16 37
#define EXECUTE_CACHE_74_14 39
#define FREE_REFERENCES_LABEL_74_0 32
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_74_4);
      goto lambda_21;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_74_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_74_7);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_74_8);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_74_9);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_74_10);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_74_11);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_74_12);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_74_13);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_74_15);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_74_18);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_74_21);
      goto label_31;

    case 13:
      current_block = (Rpc - LABEL_74_22);
      goto label_32;

    case 14:
      current_block = (Rpc - LABEL_74_20);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_34)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_55;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_54)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_53;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_52)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_51;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_50)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_49;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_48)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_47;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_46)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_45;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_44)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_43;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd53.Obj) = ((Wrd54.pObj) [1]);

DEFLABEL (label_42)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_41;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_40)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_13]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd71.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_74_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_17]));

DEFLABEL (label_35)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_16]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_74_15);
  (Wrd9.Obj) = (current_block [OBJECT_74_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_18]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_19]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_74_18);
  (Wrd9.Obj) = (current_block [OBJECT_74_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_39;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_38)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_37;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_74_20);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_74_3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_74_4]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_22]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_21]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 1);

DEFLABEL (label_31)
  (Wrd14.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_12]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_11]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 1);

DEFLABEL (label_29)
  (Wrd53.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_10]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 1);

DEFLABEL (label_28)
  (Wrd44.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 1);

DEFLABEL (label_26)
  (Wrd28.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 1);

DEFLABEL (label_24)
  (Wrd14.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 1);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_6 7
#define LABEL_75_7 9
#define LABEL_75_8 11
#define LABEL_75_9 13
#define LABEL_75_10 15
#define LABEL_75_11 17
#define LABEL_75_12 19
#define LABEL_75_13 21
#define LABEL_75_14 23
#define LABEL_75_15 25
#define LABEL_75_19 27
#define LABEL_75_20 29
#define LABEL_75_21 31
#define LABEL_75_17 33
#define LABEL_75_22 35
#define ENVIRONMENT_LABEL_75_3 48
#define DEBUGGING_LABEL_75_2 47
#define OBJECT_75_3 46
#define OBJECT_75_2 45
#define OBJECT_75_1 44
#define OBJECT_75_0 43
#define EXECUTE_CACHE_75_23 37
#define EXECUTE_CACHE_75_18 39
#define EXECUTE_CACHE_75_16 41
#define FREE_REFERENCES_LABEL_75_0 36
#define NUMBER_OF_LINKER_SECTIONS_75_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd44;
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
      current_block = (Rpc - LABEL_75_4);
      goto lambda_26;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_75_6);
      goto label_29;

    case 3:
      current_block = (Rpc - LABEL_75_7);
      goto label_30;

    case 4:
      current_block = (Rpc - LABEL_75_8);
      goto label_31;

    case 5:
      current_block = (Rpc - LABEL_75_9);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_75_10);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_75_11);
      goto label_34;

    case 8:
      current_block = (Rpc - LABEL_75_12);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_75_13);
      goto label_36;

    case 10:
      current_block = (Rpc - LABEL_75_14);
      goto label_37;

    case 11:
      current_block = (Rpc - LABEL_75_15);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_75_19);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_75_20);
      goto label_39;

    case 14:
      current_block = (Rpc - LABEL_75_21);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_75_17);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_75_22);
      goto label_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_42)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_73;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_72)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_71;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_70)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_69;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_68)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_67;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_66)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_65;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_64)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_63;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_62)
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_61;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [0]);

DEFLABEL (label_60)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_59;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd60.Obj) = ((Wrd61.pObj) [1]);

DEFLABEL (label_58)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_57;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd67.Obj) = ((Wrd68.pObj) [0]);

DEFLABEL (label_56)
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_55;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (* (--Rsp)) = (Wrd75.Obj);

DEFLABEL (label_54)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_15]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd84.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd86.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd86.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_75_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_75_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.Obj) = (current_block [OBJECT_75_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_75_19);
  (Wrd58.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd58.uLng) == 1))
    goto label_53;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd56.Obj) = ((Wrd57.pObj) [0]);

DEFLABEL (label_52)
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_51;
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if ((Wrd71.Lng) == 0)
    goto label_50;

DEFLABEL (label_49)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_48;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_47)
  (Wrd25.Obj) = (Rsp [0]);
  if ((Wrd25.Obj) == ((SCHEME_OBJECT) 0))
    goto label_44;
  Wrd28 = Wrd25;
  goto label_43;

DEFLABEL (label_44)
  (Wrd28.Obj) = (Rsp [3]);

DEFLABEL (label_43)
DEFLABEL (label_46)
  Rsp = (& (Rsp [1]));
  (Wrd32.Obj) = (current_block [OBJECT_75_2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd36.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd41.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd49.Obj) = (current_block [OBJECT_75_3]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));

DEFLABEL (label_45)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  Rvl = (Rsp [0]);
  goto label_45;

DEFLABEL (label_51)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_21]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  goto label_50;

DEFLABEL (label_53)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_20]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

DEFLABEL (label_39)
  (Wrd56.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_14]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_13]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

DEFLABEL (label_36)
  (Wrd67.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_12]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 1);

DEFLABEL (label_35)
  (Wrd60.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_11]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

DEFLABEL (label_34)
  (Wrd51.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_10]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 1);

DEFLABEL (label_32)
  (Wrd35.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 1);

DEFLABEL (label_30)
  (Wrd21.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 1);

DEFLABEL (label_29)
  (Wrd14.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

DEFLABEL (label_28)
  (Wrd5.Obj) = Rvl;
  goto label_72;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define ENVIRONMENT_LABEL_76_3 5
#define DEBUGGING_LABEL_76_2 4
#define FREE_REFERENCES_LABEL_76_0 4
#define NUMBER_OF_LINKER_SECTIONS_76_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_76_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_76_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_6 5
#define LABEL_77_7 7
#define LABEL_77_8 9
#define LABEL_77_9 11
#define LABEL_77_5 13
#define LABEL_77_12 15
#define LABEL_77_13 17
#define LABEL_77_14 19
#define LABEL_77_11 21
#define LABEL_77_16 23
#define LABEL_77_17 25
#define LABEL_77_15 27
#define ENVIRONMENT_LABEL_77_3 38
#define DEBUGGING_LABEL_77_2 37
#define OBJECT_77_3 36
#define OBJECT_77_2 35
#define OBJECT_77_1 34
#define OBJECT_77_0 33
#define EXECUTE_CACHE_77_18 29
#define EXECUTE_CACHE_77_10 31
#define FREE_REFERENCES_LABEL_77_0 28
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_77_4);
      goto lambda_15;

    case 1:
      current_block = (Rpc - LABEL_77_6);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_77_7);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_77_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_77_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_77_12);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_77_13);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_77_14);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_77_11);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_77_16);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_77_17);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_77_15);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_27)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_45;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_44)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_43;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_42)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_41;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd25.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_40)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_39;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_10]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_77_5);
  (Wrd9.Obj) = (current_block [OBJECT_77_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_37;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_36)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_35;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_34)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_33;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_77_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_31;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_30)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_29;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_77_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_77_3]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_17]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_16]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_24)
  (Wrd14.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_14]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_13]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_22)
  (Wrd23.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_21)
  (Wrd14.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_19)
  (Wrd25.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_18)
  (Wrd18.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_17)
  (Wrd9.Obj) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_6 5
#define LABEL_78_7 7
#define LABEL_78_8 9
#define LABEL_78_5 11
#define LABEL_78_11 13
#define LABEL_78_12 15
#define LABEL_78_10 17
#define ENVIRONMENT_LABEL_78_3 28
#define DEBUGGING_LABEL_78_2 27
#define OBJECT_78_3 26
#define OBJECT_78_2 25
#define OBJECT_78_1 24
#define OBJECT_78_0 23
#define EXECUTE_CACHE_78_13 19
#define EXECUTE_CACHE_78_9 21
#define FREE_REFERENCES_LABEL_78_0 18
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_78_4);
      goto lambda_9;

    case 1:
      current_block = (Rpc - LABEL_78_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_78_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_78_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_78_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_78_12);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_78_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_17)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_27;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_26)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_25;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_24)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_23;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_22)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_78_5);
  (Wrd9.Obj) = (current_block [OBJECT_78_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_21;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_20)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_19;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_78_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_78_3]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 1);

DEFLABEL (label_14)
  (Wrd14.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 1);

DEFLABEL (label_12)
  (Wrd18.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 1);

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define LABEL_79_7 7
#define LABEL_79_8 9
#define LABEL_79_6 11
#define LABEL_79_13 13
#define LABEL_79_14 15
#define LABEL_79_9 17
#define TAG_79_10 7
#define LABEL_79_12 19
#define ENVIRONMENT_LABEL_79_3 31
#define DEBUGGING_LABEL_79_2 30
#define OBJECT_79_2 29
#define OBJECT_79_1 28
#define OBJECT_79_0 27
#define EXECUTE_CACHE_79_16 21
#define EXECUTE_CACHE_79_15 23
#define EXECUTE_CACHE_79_11 25
#define FREE_REFERENCES_LABEL_79_0 20
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_79_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_79_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_79_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_79_6);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_79_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_79_14);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_79_9);
      goto lambda_19;

    case 8:
      current_block = (Rpc - LABEL_79_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_18)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_30;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_29)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_20;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_28;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_27)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_26;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_25)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_79_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_79_9])));
  Rhp += 1;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  Wrd38 = Wrd37;
  (Wrd39.Obj) = (Rsp [3]);
  ((Wrd38.pObj) [2]) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_79_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_23)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_22;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_79_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_79_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_15)
  (Wrd9.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_13)
  (Wrd20.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_79_9);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_16]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_7 7
#define LABEL_80_8 9
#define LABEL_80_6 11
#define LABEL_80_13 13
#define LABEL_80_14 15
#define LABEL_80_9 17
#define TAG_80_10 7
#define LABEL_80_12 19
#define ENVIRONMENT_LABEL_80_3 31
#define DEBUGGING_LABEL_80_2 30
#define OBJECT_80_2 29
#define OBJECT_80_1 28
#define OBJECT_80_0 27
#define EXECUTE_CACHE_80_16 21
#define EXECUTE_CACHE_80_15 23
#define EXECUTE_CACHE_80_11 25
#define FREE_REFERENCES_LABEL_80_0 20
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_80_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_80_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_80_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_80_6);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_80_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_80_14);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_80_9);
      goto lambda_19;

    case 8:
      current_block = (Rpc - LABEL_80_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_18)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_30;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_29)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_20;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_28;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_27)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_26;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_25)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_80_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_80_9])));
  Rhp += 1;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  Wrd38 = Wrd37;
  (Wrd39.Obj) = (Rsp [3]);
  ((Wrd38.pObj) [2]) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_80_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_23)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_22;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_80_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_80_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_13]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_15)
  (Wrd9.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_13)
  (Wrd20.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_80_9);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_16]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_6 5
#define LABEL_81_7 7
#define LABEL_81_8 9
#define LABEL_81_5 11
#define LABEL_81_10 13
#define LABEL_81_11 15
#define ENVIRONMENT_LABEL_81_3 24
#define DEBUGGING_LABEL_81_2 23
#define OBJECT_81_3 22
#define OBJECT_81_2 21
#define OBJECT_81_1 20
#define OBJECT_81_0 19
#define EXECUTE_CACHE_81_9 17
#define FREE_REFERENCES_LABEL_81_0 16
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_81_4);
      goto lambda_8;

    case 1:
      current_block = (Rpc - LABEL_81_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_81_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_81_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_81_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_81_11);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_16)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_25)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_24;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_23)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_22;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_81_5);
  (Wrd9.Obj) = (current_block [OBJECT_81_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_20;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_19)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_18;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_17)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_81_3]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 1);

DEFLABEL (label_14)
  (Wrd19.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_0]), 1);

DEFLABEL (label_13)
  (Wrd10.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_0]), 1);

DEFLABEL (label_11)
  (Wrd18.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_0]), 1);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define LABEL_82_6 7
#define LABEL_82_7 9
#define LABEL_82_8 11
#define LABEL_82_12 13
#define LABEL_82_9 15
#define LABEL_82_14 17
#define LABEL_82_15 19
#define LABEL_82_16 21
#define LABEL_82_10 23
#define LABEL_82_18 25
#define LABEL_82_22 27
#define LABEL_82_13 29
#define LABEL_82_19 31
#define TAG_82_20 14
#define ENVIRONMENT_LABEL_82_3 49
#define DEBUGGING_LABEL_82_2 48
#define OBJECT_82_4 47
#define OBJECT_82_3 46
#define OBJECT_82_2 45
#define OBJECT_82_1 44
#define OBJECT_82_0 43
#define EXECUTE_CACHE_82_24 33
#define EXECUTE_CACHE_82_23 35
#define EXECUTE_CACHE_82_21 37
#define EXECUTE_CACHE_82_17 39
#define EXECUTE_CACHE_82_11 41
#define FREE_REFERENCES_LABEL_82_0 32
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_82_4);
      goto lambda_19;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_82_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_82_7);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_82_8);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_82_12);
      goto continuation_16;

    case 6:
      current_block = (Rpc - LABEL_82_9);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_82_14);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_82_15);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_82_16);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_82_10);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_82_18);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_82_22);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_82_13);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_82_19);
      goto lambda_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_31)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_52;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_51)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_50;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_49)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_48;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_47)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_46;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_45)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_82_10);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_44;
  if (Rvl == (current_block [OBJECT_82_3]))
    goto label_41;

DEFLABEL (label_40)
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_82_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_82_19])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [6]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_82_9);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_39)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_38;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_37)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_36;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_35)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_34;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_82_13);
  (Wrd9.Obj) = (current_block [OBJECT_82_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_82_4]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd18.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_16]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_15]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_0]), 1);

DEFLABEL (label_26)
  (Wrd19.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_0]), 1);

DEFLABEL (label_25)
  (Wrd10.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_41)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_43;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_23]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_82_12);
  (Wrd38.Obj) = (current_block [OBJECT_82_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd35.Obj);
  goto label_39;

DEFLABEL (label_43)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_22]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  (Wrd27.Obj) = (current_block [OBJECT_82_3]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_18]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_41;

DEFLABEL (label_46)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_0]), 1);

DEFLABEL (label_23)
  (Wrd23.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_0]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_82_19);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_24]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_6 5
#define LABEL_83_7 7
#define LABEL_83_8 9
#define LABEL_83_9 11
#define LABEL_83_5 13
#define LABEL_83_12 15
#define LABEL_83_13 17
#define LABEL_83_14 19
#define LABEL_83_11 21
#define LABEL_83_18 23
#define LABEL_83_19 25
#define LABEL_83_15 27
#define TAG_83_16 12
#define LABEL_83_21 29
#define LABEL_83_22 31
#define LABEL_83_20 33
#define LABEL_83_23 35
#define ENVIRONMENT_LABEL_83_3 46
#define DEBUGGING_LABEL_83_2 45
#define OBJECT_83_3 44
#define OBJECT_83_2 43
#define OBJECT_83_1 42
#define OBJECT_83_0 41
#define EXECUTE_CACHE_83_17 37
#define EXECUTE_CACHE_83_10 39
#define FREE_REFERENCES_LABEL_83_0 36
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_83_4);
      goto lambda_20;

    case 1:
      current_block = (Rpc - LABEL_83_6);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_83_7);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_83_8);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_83_9);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_16;

    case 6:
      current_block = (Rpc - LABEL_83_12);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_83_13);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_83_14);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_83_11);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_83_18);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_83_19);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_83_15);
      goto lambda_36;

    case 13:
      current_block = (Rpc - LABEL_83_21);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_83_22);
      goto label_32;

    case 15:
      current_block = (Rpc - LABEL_83_20);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_83_23);
      goto label_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_35)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_54;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_53)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_52;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_51)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_50;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd25.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_49)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_48;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_10]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (Wrd9.Obj) = (current_block [OBJECT_83_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_46;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_45)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_44;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_43)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_42;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_41)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_83_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_83_15])));
  Rhp += 1;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  Wrd38 = Wrd37;
  (Wrd39.Obj) = (Rsp [4]);
  ((Wrd38.pObj) [2]) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_83_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_40;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_39)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_38;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_37)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_83_3]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_19]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 1);

DEFLABEL (label_30)
  (Wrd19.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_0]), 1);

DEFLABEL (label_29)
  (Wrd10.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_14]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_13]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_0]), 1);

DEFLABEL (label_27)
  (Wrd22.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_0]), 1);

DEFLABEL (label_26)
  (Wrd13.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_0]), 1);

DEFLABEL (label_24)
  (Wrd25.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_0]), 1);

DEFLABEL (label_23)
  (Wrd18.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_0]), 1);

DEFLABEL (label_22)
  (Wrd9.Obj) = Rvl;
  goto label_53;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_83_15);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_60;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_59)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_58;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_57)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_83_20);
  (Wrd9.Obj) = (current_block [OBJECT_83_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_56;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_55)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_23]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 1);

DEFLABEL (label_33)
  (Wrd10.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_22]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_21]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_0]), 1);

DEFLABEL (label_31)
  (Wrd11.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define LABEL_84_6 7
#define LABEL_84_8 9
#define LABEL_84_9 11
#define LABEL_84_11 13
#define LABEL_84_13 15
#define LABEL_84_14 17
#define LABEL_84_15 19
#define LABEL_84_18 21
#define LABEL_84_19 23
#define LABEL_84_20 25
#define LABEL_84_21 27
#define LABEL_84_23 29
#define LABEL_84_17 31
#define LABEL_84_25 33
#define LABEL_84_26 35
#define LABEL_84_27 37
#define LABEL_84_12 39
#define LABEL_84_29 41
#define LABEL_84_30 43
#define LABEL_84_31 45
#define LABEL_84_7 47
#define LABEL_84_32 49
#define LABEL_84_33 51
#define LABEL_84_34 53
#define LABEL_84_35 55
#define LABEL_84_37 57
#define LABEL_84_38 59
#define LABEL_84_39 61
#define LABEL_84_40 63
#define LABEL_84_41 65
#define LABEL_84_42 67
#define LABEL_84_24 69
#define LABEL_84_43 71
#define LABEL_84_44 73
#define LABEL_84_28 75
#define LABEL_84_46 77
#define LABEL_84_47 79
#define LABEL_84_36 81
#define LABEL_84_45 83
#define LABEL_84_50 85
#define LABEL_84_48 87
#define LABEL_84_51 89
#define ENVIRONMENT_LABEL_84_3 111
#define DEBUGGING_LABEL_84_2 110
#define OBJECT_84_5 109
#define OBJECT_84_4 108
#define OBJECT_84_3 107
#define OBJECT_84_2 106
#define OBJECT_84_1 105
#define OBJECT_84_0 104
#define EXECUTE_CACHE_84_52 91
#define EXECUTE_CACHE_84_49 93
#define EXECUTE_CACHE_84_22 95
#define EXECUTE_CACHE_84_16 97
#define EXECUTE_CACHE_84_10 99
#define FREE_REFERENCE_84_1 102
#define FREE_REFERENCE_84_0 103
#define FREE_REFERENCES_LABEL_84_0 90
#define NUMBER_OF_LINKER_SECTIONS_84_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd79;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd80;
  machine_word Wrd18;
  machine_word Wrd94;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd63;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd83;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd82;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd108;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd93;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_84_4);
      goto peephole_optimize_53;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto label_55;

    case 2:
      current_block = (Rpc - LABEL_84_6);
      goto loop_51;

    case 3:
      current_block = (Rpc - LABEL_84_8);
      goto label_65;

    case 4:
      current_block = (Rpc - LABEL_84_9);
      goto label_66;

    case 5:
      current_block = (Rpc - LABEL_84_11);
      goto label_56;

    case 6:
      current_block = (Rpc - LABEL_84_13);
      goto label_62;

    case 7:
      current_block = (Rpc - LABEL_84_14);
      goto label_63;

    case 8:
      current_block = (Rpc - LABEL_84_15);
      goto label_64;

    case 9:
      current_block = (Rpc - LABEL_84_18);
      goto label_58;

    case 10:
      current_block = (Rpc - LABEL_84_19);
      goto label_59;

    case 11:
      current_block = (Rpc - LABEL_84_20);
      goto label_60;

    case 12:
      current_block = (Rpc - LABEL_84_21);
      goto label_61;

    case 13:
      current_block = (Rpc - LABEL_84_23);
      goto label_57;

    case 14:
      current_block = (Rpc - LABEL_84_17);
      goto continuation_22;

    case 15:
      current_block = (Rpc - LABEL_84_25);
      goto label_67;

    case 16:
      current_block = (Rpc - LABEL_84_26);
      goto label_68;

    case 17:
      current_block = (Rpc - LABEL_84_27);
      goto label_69;

    case 18:
      current_block = (Rpc - LABEL_84_12);
      goto continuation_30;

    case 19:
      current_block = (Rpc - LABEL_84_29);
      goto label_70;

    case 20:
      current_block = (Rpc - LABEL_84_30);
      goto label_71;

    case 21:
      current_block = (Rpc - LABEL_84_31);
      goto continuation_39;

    case 22:
      current_block = (Rpc - LABEL_84_7);
      goto continuation_35;

    case 23:
      current_block = (Rpc - LABEL_84_32);
      goto label_81;

    case 24:
      current_block = (Rpc - LABEL_84_33);
      goto label_72;

    case 25:
      current_block = (Rpc - LABEL_84_34);
      goto label_73;

    case 26:
      current_block = (Rpc - LABEL_84_35);
      goto label_80;

    case 27:
      current_block = (Rpc - LABEL_84_37);
      goto label_74;

    case 28:
      current_block = (Rpc - LABEL_84_38);
      goto label_75;

    case 29:
      current_block = (Rpc - LABEL_84_39);
      goto label_76;

    case 30:
      current_block = (Rpc - LABEL_84_40);
      goto label_77;

    case 31:
      current_block = (Rpc - LABEL_84_41);
      goto label_78;

    case 32:
      current_block = (Rpc - LABEL_84_42);
      goto label_79;

    case 33:
      current_block = (Rpc - LABEL_84_24);
      goto continuation_17;

    case 34:
      current_block = (Rpc - LABEL_84_43);
      goto label_82;

    case 35:
      current_block = (Rpc - LABEL_84_44);
      goto label_83;

    case 36:
      current_block = (Rpc - LABEL_84_28);
      goto lambda_13;

    case 37:
      current_block = (Rpc - LABEL_84_46);
      goto label_84;

    case 38:
      current_block = (Rpc - LABEL_84_47);
      goto label_85;

    case 39:
      current_block = (Rpc - LABEL_84_36);
      goto continuation_44;

    case 40:
      current_block = (Rpc - LABEL_84_45);
      goto continuation_11;

    case 41:
      current_block = (Rpc - LABEL_84_50);
      goto label_86;

    case 42:
      current_block = (Rpc - LABEL_84_48);
      goto continuation_48;

    case 43:
      current_block = (Rpc - LABEL_84_51);
      goto continuation_49;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (peephole_optimize_88)
DEFLABEL (peephole_optimize_53)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_92;
  Wrd5 = Wrd9;

DEFLABEL (label_91)
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_51;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84_5])), (Wrd6.pObj));

DEFLABEL (label_55)
  (Wrd5.Obj) = Rvl;
  goto label_91;

DEFLABEL (loop_89)
DEFLABEL (loop_51)
  INTERRUPT_CHECK (26, LABEL_84_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_128;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_93;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_93)
  if (! ((Wrd8.uLng) == 1))
    goto label_127;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_126)
  (Rsp [0]) = (Wrd11.Obj);
  if ((Wrd11.Obj) == (current_block [OBJECT_84_1]))
    goto label_115;
  if ((Wrd11.Obj) == (current_block [OBJECT_84_3]))
    goto label_96;
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_95;
  Wrd25 = Wrd29;

DEFLABEL (label_94)
  (Rsp [0]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_16]));

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84_23])), (Wrd26.pObj));

DEFLABEL (label_57)
  (Wrd25.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_96)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_17]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_114;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_113)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_112;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd43.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_111)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_110;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd50.Obj) = ((Wrd51.pObj) [1]);

DEFLABEL (label_109)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_108;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_107)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_22]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_84_17);
  (Wrd9.Obj) = (current_block [OBJECT_84_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_24]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_106;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_105)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_104;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_103)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_102;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_101)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_28]))));
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_16]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_84_24);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_100;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_99)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_98;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_97)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_84_3]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_98)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_44]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_83)
  (Wrd19.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_43]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 1);

DEFLABEL (label_82)
  (Wrd10.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_27]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_26]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 1);

DEFLABEL (label_68)
  (Wrd22.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_25]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 1);

DEFLABEL (label_67)
  (Wrd13.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_21]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_20]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 1);

DEFLABEL (label_60)
  (Wrd50.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_19]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 1);

DEFLABEL (label_59)
  (Wrd43.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_18]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 1);

DEFLABEL (label_58)
  (Wrd34.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_115)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_12]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_125;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd67.Obj) = ((Wrd69.pObj) [1]);

DEFLABEL (label_124)
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd78.uLng) == 1))
    goto label_123;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [1]);
  (* (--Rsp)) = (Wrd77.Obj);

DEFLABEL (label_122)
  (Wrd84.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84_1]));
  (Wrd87.Obj) = ((Wrd84.pObj) [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd88.uLng) == 50)
    goto label_121;
  Wrd83 = Wrd87;

DEFLABEL (label_120)
  (* (--Rsp)) = (Wrd83.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_16]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_84_12);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_119;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_118)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_117;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_116)
  (Wrd21.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_84_1]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_117)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_30]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_71)
  (Wrd14.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_29]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 1);

DEFLABEL (label_70)
  (Wrd5.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84_15])), (Wrd84.pObj));

DEFLABEL (label_64)
  (Wrd83.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_14]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_13]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 1);

DEFLABEL (label_62)
  (Wrd67.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_56)
  (Wrd11.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_128)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_7]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd92.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd92.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_154;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd93.Obj) = ((Wrd95.pObj) [0]);

DEFLABEL (label_153)
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd104.uLng) == 1))
    goto label_152;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [0]);
  (* (--Rsp)) = (Wrd103.Obj);

DEFLABEL (label_151)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_10]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_84_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_148;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_147;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_146)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_145;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_144)
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_143;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_137;

DEFLABEL (label_136)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_31]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_135;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [0]);

DEFLABEL (label_134)
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_133;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd66.Obj) = ((Wrd67.pObj) [1]);

DEFLABEL (label_132)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_130;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_129)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_130)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_42]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_79)
DEFLABEL (label_131)
  (* (--Rsp)) = Rvl;
  goto label_129;

DEFLABEL (label_133)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_41]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 1);

DEFLABEL (label_78)
  (Wrd66.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_40]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_77)
  (Wrd57.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_36]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_142;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [0]);

DEFLABEL (label_141)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_140;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_139)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_138;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);
  goto label_129;

DEFLABEL (label_138)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_39]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 1);

DEFLABEL (label_76)
  goto label_131;

DEFLABEL (label_140)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_38]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 1);

DEFLABEL (label_75)
  (Wrd39.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_37]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_74)
  (Wrd30.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_143)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_35]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_80)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_137;
  goto label_136;

DEFLABEL (label_145)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_34]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 1);

DEFLABEL (label_73)
  (Wrd16.Obj) = Rvl;
  goto label_144;

DEFLABEL (label_147)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_33]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_72)
  (Wrd7.Obj) = Rvl;
  goto label_146;

DEFLABEL (label_148)
  (Wrd89.Obj) = (Rsp [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_150;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd86.Obj) = ((Wrd88.pObj) [1]);

DEFLABEL (label_149)
  (Rsp [0]) = (Wrd86.Obj);
  goto loop_51;

DEFLABEL (label_150)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_32]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 1);

DEFLABEL (label_81)
  (Wrd86.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_9]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_8]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_65)
  (Wrd93.Obj) = Rvl;
  goto label_153;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_84_31);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_148;
  goto label_137;

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_84_36);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_48]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_49]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_84_48);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_155;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_155)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_51]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_84_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_52]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_84_51);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_22]));

DEFLABEL (lambda_90)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_84_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_161;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_160)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_159;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_158)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_84_45);
  (Wrd9.Obj) = (current_block [OBJECT_84_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_157;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_156)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_157)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_50]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_86)
  (Wrd10.Obj) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_47]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_46]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_2]), 1);

DEFLABEL (label_84)
  (Wrd8.Obj) = Rvl;
  goto label_160;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_6 5
#define LABEL_85_5 7
#define LABEL_85_8 9
#define LABEL_85_9 11
#define ENVIRONMENT_LABEL_85_3 22
#define DEBUGGING_LABEL_85_2 21
#define OBJECT_85_1 20
#define OBJECT_85_0 19
#define EXECUTE_CACHE_85_7 13
#define FREE_REFERENCE_85_0 16
#define FREE_ASSIGNMENT_85_0 18
#define FREE_REFERENCES_LABEL_85_0 12
#define NUMBER_OF_LINKER_SECTIONS_85_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_85_4);
      goto define_peephole_optimizer_5;

    case 1:
      current_block = (Rpc - LABEL_85_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_85_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_85_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_85_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_peephole_optimizer_11)
DEFLABEL (define_peephole_optimizer_5)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_20;
  Wrd13 = Wrd17;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_85_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd8.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [1]) = (Wrd12.Obj);
  Rvl = (current_block [OBJECT_85_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

DEFLABEL (label_13)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_18;
  Wrd18 = Wrd22;

DEFLABEL (label_17)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_85_0]));
  (Wrd40.Obj) = ((Wrd32.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_16;

DEFLABEL (label_15)
  ((Wrd32.pObj) [0]) = (Wrd29.Obj);

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_85_0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_16)
  if ((Wrd40.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_15;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_85_9])), (Wrd32.pObj), (Wrd29.Obj));

DEFLABEL (label_9)
  goto label_14;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_8])), (Wrd19.pObj));

DEFLABEL (label_8)
  (Wrd18.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_6])), (Wrd14.pObj));

DEFLABEL (label_7)
  (Wrd13.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_6 7
#define LABEL_86_7 9
#define LABEL_86_8 11
#define LABEL_86_9 13
#define ENVIRONMENT_LABEL_86_3 19
#define DEBUGGING_LABEL_86_2 18
#define OBJECT_86_3 17
#define OBJECT_86_2 16
#define OBJECT_86_1 15
#define OBJECT_86_0 14
#define FREE_REFERENCES_LABEL_86_0 14
#define NUMBER_OF_LINKER_SECTIONS_86_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_86_4);
      goto predicate_not_or_7;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_86_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_86_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_86_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_86_9);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (predicate_not_or_15)
DEFLABEL (predicate_not_or_7)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_28;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_27)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_26;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_25)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_18;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_86_3]);

DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_24;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_23)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_22;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd33.Obj) = ((Wrd34.pObj) [0]);

DEFLABEL (label_21)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_20;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd40.Obj) = ((Wrd41.pObj) [0]);

DEFLABEL (label_19)
  if (! ((Wrd40.Obj) == (current_block [OBJECT_86_2])))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_16;

DEFLABEL (label_20)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_9]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 1);

DEFLABEL (label_13)
  (Wrd40.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_8]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 1);

DEFLABEL (label_12)
  (Wrd33.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_0]), 1);

DEFLABEL (label_11)
  (Wrd24.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 1);

DEFLABEL (label_10)
  (Wrd14.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_0]), 1);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define ENVIRONMENT_LABEL_87_3 9
#define DEBUGGING_LABEL_87_2 8
#define OBJECT_87_1 7
#define OBJECT_87_0 6
#define FREE_REFERENCES_LABEL_87_0 6
#define NUMBER_OF_LINKER_SECTIONS_87_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_87_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_8;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_6;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd16.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 1);

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_6 7
#define ENVIRONMENT_LABEL_88_3 13
#define DEBUGGING_LABEL_88_2 12
#define OBJECT_88_3 11
#define OBJECT_88_2 10
#define OBJECT_88_1 9
#define OBJECT_88_0 8
#define FREE_REFERENCES_LABEL_88_0 8
#define NUMBER_OF_LINKER_SECTIONS_88_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_88_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_88_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_12;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_11)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_10;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_9)
  (Wrd24.Obj) = (current_block [OBJECT_88_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_88_3]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 1);

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define LABEL_89_6 7
#define LABEL_89_7 9
#define ENVIRONMENT_LABEL_89_3 14
#define DEBUGGING_LABEL_89_2 13
#define OBJECT_89_2 12
#define OBJECT_89_1 11
#define OBJECT_89_0 10
#define FREE_REFERENCES_LABEL_89_0 10
#define NUMBER_OF_LINKER_SECTIONS_89_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_89_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_89_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_89_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_19;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_18)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_17;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_16)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_15;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_14)
  (Wrd28.Obj) = (current_block [OBJECT_89_2]);
  if ((Wrd21.Obj) == (Wrd28.Obj))
    goto label_12;
  Rvl = (Wrd28.Obj);
  goto label_11;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 1);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_0]), 1);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define LABEL_90_6 7
#define LABEL_90_7 9
#define LABEL_90_8 11
#define LABEL_90_9 13
#define ENVIRONMENT_LABEL_90_3 19
#define DEBUGGING_LABEL_90_2 18
#define OBJECT_90_3 17
#define OBJECT_90_2 16
#define OBJECT_90_1 15
#define OBJECT_90_0 14
#define FREE_REFERENCES_LABEL_90_0 14
#define NUMBER_OF_LINKER_SECTIONS_90_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_90_4);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_90_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_90_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_90_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_90_9);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_25;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_24)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_23;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_22)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_21;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_20)
  (Wrd31.Obj) = (current_block [OBJECT_90_2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_19;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_18)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_17;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd41.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_16)
  (Wrd48.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_90_3]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_9]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 1);

DEFLABEL (label_13)
  (Wrd41.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_12)
  (Wrd32.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 1);

DEFLABEL (label_11)
  (Wrd21.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_10)
  (Wrd14.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_0]), 1);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_5 5
#define LABEL_91_6 7
#define LABEL_91_7 9
#define LABEL_91_8 11
#define ENVIRONMENT_LABEL_91_3 16
#define DEBUGGING_LABEL_91_2 15
#define OBJECT_91_2 14
#define OBJECT_91_1 13
#define OBJECT_91_0 12
#define FREE_REFERENCES_LABEL_91_0 12
#define NUMBER_OF_LINKER_SECTIONS_91_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_91_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_91_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_91_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_91_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_91_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_12)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_23;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_22)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_21;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_20)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_19;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_18)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_17;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_16)
  (Wrd35.Obj) = (current_block [OBJECT_91_2]);
  if ((Wrd28.Obj) == (Wrd35.Obj))
    goto label_14;
  Rvl = (Wrd35.Obj);
  goto label_13;

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_13)
DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_1]), 1);

DEFLABEL (label_10)
  (Wrd28.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_0]), 1);

DEFLABEL (label_9)
  (Wrd21.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_0]), 1);

DEFLABEL (label_8)
  (Wrd14.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_0]), 1);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define LABEL_92_6 7
#define LABEL_92_7 9
#define LABEL_92_8 11
#define LABEL_92_9 13
#define LABEL_92_10 15
#define ENVIRONMENT_LABEL_92_3 22
#define DEBUGGING_LABEL_92_2 21
#define OBJECT_92_4 20
#define OBJECT_92_3 19
#define OBJECT_92_2 18
#define OBJECT_92_1 17
#define OBJECT_92_0 16
#define FREE_REFERENCES_LABEL_92_0 16
#define NUMBER_OF_LINKER_SECTIONS_92_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd55;
  machine_word Wrd57;
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
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_92_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_92_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_92_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_92_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_92_9);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_92_10);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_19)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_31;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_30)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_29;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_28)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_27;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_26)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_25;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_24)
  (Wrd38.Obj) = (current_block [OBJECT_92_2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_23;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_22)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_21;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd48.Obj) = ((Wrd49.pObj) [0]);

DEFLABEL (label_20)
  (Wrd58.Obj) = (current_block [OBJECT_92_2]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (Wrd62.Obj) = (current_block [OBJECT_92_3]);
  (* (Rhp++)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (Wrd63.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd59.Obj);
  (* (Rhp++)) = (Wrd63.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (Wrd71.Obj) = (current_block [OBJECT_92_4]);
  (* (Rhp++)) = (Wrd71.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd69.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd69.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_10]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 1);

DEFLABEL (label_17)
  (Wrd48.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_9]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_0]), 1);

DEFLABEL (label_16)
  (Wrd39.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 1);

DEFLABEL (label_15)
  (Wrd28.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_0]), 1);

DEFLABEL (label_14)
  (Wrd21.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_0]), 1);

DEFLABEL (label_13)
  (Wrd14.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_0]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_5 5
#define LABEL_93_6 7
#define LABEL_93_7 9
#define LABEL_93_8 11
#define LABEL_93_9 13
#define LABEL_93_10 15
#define LABEL_93_11 17
#define ENVIRONMENT_LABEL_93_3 24
#define DEBUGGING_LABEL_93_2 23
#define OBJECT_93_1 22
#define OBJECT_93_0 21
#define EXECUTE_CACHE_93_12 19
#define FREE_REFERENCES_LABEL_93_0 18
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd46;
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
      current_block = (Rpc - LABEL_93_4);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_93_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_93_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_93_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_93_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_93_9);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_93_10);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_93_11);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_17)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_31;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_30)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_29;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_28)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_27;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_26)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_25;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_24)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_23;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd37.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_22)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_21;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd44.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_20)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_19;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd51.Obj) = ((Wrd52.pObj) [0]);

DEFLABEL (label_18)
  (Rsp [1]) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_12]));

DEFLABEL (label_19)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_11]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 1);

DEFLABEL (label_15)
  (Wrd51.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_10]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_14)
  (Wrd44.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_13)
  (Wrd37.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_12)
  (Wrd28.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_10)
  (Wrd14.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_0]), 1);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define LABEL_94_6 7
#define LABEL_94_7 9
#define LABEL_94_8 11
#define LABEL_94_9 13
#define ENVIRONMENT_LABEL_94_3 19
#define DEBUGGING_LABEL_94_2 18
#define OBJECT_94_3 17
#define OBJECT_94_2 16
#define OBJECT_94_1 15
#define OBJECT_94_0 14
#define FREE_REFERENCES_LABEL_94_0 14
#define NUMBER_OF_LINKER_SECTIONS_94_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_94_4);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_94_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_94_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_94_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_94_9);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_25;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_24)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_23;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_22)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_21;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_20)
  (Wrd31.Obj) = (current_block [OBJECT_94_2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_19;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_18)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_17;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd41.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_16)
  (Wrd48.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_94_3]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_9]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_1]), 1);

DEFLABEL (label_13)
  (Wrd41.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (label_12)
  (Wrd32.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_1]), 1);

DEFLABEL (label_11)
  (Wrd21.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (label_10)
  (Wrd14.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 1);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define LABEL_95_6 7
#define LABEL_95_7 9
#define LABEL_95_8 11
#define LABEL_95_9 13
#define ENVIRONMENT_LABEL_95_3 19
#define DEBUGGING_LABEL_95_2 18
#define OBJECT_95_3 17
#define OBJECT_95_2 16
#define OBJECT_95_1 15
#define OBJECT_95_0 14
#define FREE_REFERENCES_LABEL_95_0 14
#define NUMBER_OF_LINKER_SECTIONS_95_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_95_4);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_95_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_95_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_95_8);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_95_9);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_25;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_24)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_23;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_22)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_21;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_20)
  (Wrd31.Obj) = (current_block [OBJECT_95_2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_19;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_18)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_17;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd41.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_16)
  (Wrd48.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_95_3]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_9]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_1]), 1);

DEFLABEL (label_13)
  (Wrd41.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_0]), 1);

DEFLABEL (label_12)
  (Wrd32.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_1]), 1);

DEFLABEL (label_11)
  (Wrd21.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_0]), 1);

DEFLABEL (label_10)
  (Wrd14.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_0]), 1);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_5 5
#define LABEL_96_6 7
#define LABEL_96_7 9
#define ENVIRONMENT_LABEL_96_3 17
#define DEBUGGING_LABEL_96_2 16
#define OBJECT_96_2 15
#define OBJECT_96_1 14
#define OBJECT_96_0 13
#define EXECUTE_CACHE_96_8 11
#define FREE_REFERENCES_LABEL_96_0 10
#define NUMBER_OF_LINKER_SECTIONS_96_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_96_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_96_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_96_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_96_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_17;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_16)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_15;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_14)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_13;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_12)
  if ((Wrd21.Obj) == (current_block [OBJECT_96_2]))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_8]));

DEFLABEL (label_13)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_1]), 1);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_0]), 1);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define LABEL_97_5 5
#define ENVIRONMENT_LABEL_97_3 9
#define DEBUGGING_LABEL_97_2 8
#define OBJECT_97_1 7
#define OBJECT_97_0 6
#define FREE_REFERENCES_LABEL_97_0 6
#define NUMBER_OF_LINKER_SECTIONS_97_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_97_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_97_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_8;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_6;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd16.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_1]), 1);

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define LABEL_98_5 5
#define LABEL_98_6 7
#define LABEL_98_7 9
#define LABEL_98_8 11
#define LABEL_98_9 13
#define LABEL_98_10 15
#define LABEL_98_11 17
#define LABEL_98_12 19
#define LABEL_98_13 21
#define LABEL_98_14 23
#define LABEL_98_15 25
#define ENVIRONMENT_LABEL_98_3 32
#define DEBUGGING_LABEL_98_2 31
#define OBJECT_98_1 30
#define OBJECT_98_0 29
#define EXECUTE_CACHE_98_16 27
#define FREE_REFERENCES_LABEL_98_0 26
#define NUMBER_OF_LINKER_SECTIONS_98_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd85;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd81;
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
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_98_4);
      goto lambda_11;

    case 1:
      current_block = (Rpc - LABEL_98_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_98_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_98_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_98_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_98_9);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_98_10);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_98_11);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_98_12);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_98_13);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_98_14);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_98_15);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_47;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_46)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_45;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_44)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_43;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_42)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_41;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_40)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_39;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd35.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_38)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_37;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_36)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_35;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_34)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_33;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_32)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_31;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd65.Obj) = ((Wrd66.pObj) [1]);

DEFLABEL (label_30)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_29;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd72.Obj) = ((Wrd73.pObj) [1]);

DEFLABEL (label_28)
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_27;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd79.Obj) = ((Wrd80.pObj) [0]);

DEFLABEL (label_26)
  (Rsp [1]) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_16]));

DEFLABEL (label_27)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_15]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_1]), 1);

DEFLABEL (label_23)
  (Wrd79.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_14]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_0]), 1);

DEFLABEL (label_22)
  (Wrd72.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_13]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_0]), 1);

DEFLABEL (label_21)
  (Wrd65.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_12]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_0]), 1);

DEFLABEL (label_20)
  (Wrd56.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_11]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_10]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_0]), 1);

DEFLABEL (label_18)
  (Wrd42.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_0]), 1);

DEFLABEL (label_17)
  (Wrd35.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_0]), 1);

DEFLABEL (label_16)
  (Wrd28.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_1]), 1);

DEFLABEL (label_15)
  (Wrd21.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_0]), 1);

DEFLABEL (label_14)
  (Wrd14.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_0]), 1);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define LABEL_99_5 5
#define LABEL_99_6 7
#define LABEL_99_7 9
#define LABEL_99_8 11
#define LABEL_99_9 13
#define LABEL_99_10 15
#define LABEL_99_11 17
#define LABEL_99_12 19
#define LABEL_99_13 21
#define LABEL_99_14 23
#define LABEL_99_15 25
#define LABEL_99_16 27
#define LABEL_99_17 29
#define LABEL_99_18 31
#define LABEL_99_19 33
#define LABEL_99_20 35
#define LABEL_99_21 37
#define ENVIRONMENT_LABEL_99_3 44
#define DEBUGGING_LABEL_99_2 43
#define OBJECT_99_4 42
#define OBJECT_99_3 41
#define OBJECT_99_2 40
#define OBJECT_99_1 39
#define OBJECT_99_0 38
#define FREE_REFERENCES_LABEL_99_0 38
#define NUMBER_OF_LINKER_SECTIONS_99_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd158;
  machine_word Wrd160;
  machine_word Wrd153;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd148;
  machine_word Wrd150;
  machine_word Wrd151;
  machine_word Wrd145;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd139;
  machine_word Wrd136;
  machine_word Wrd128;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd123;
  machine_word Wrd117;
  machine_word Wrd118;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd103;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_99_4);
      goto lambda_23;

    case 1:
      current_block = (Rpc - LABEL_99_5);
      goto label_25;

    case 2:
      current_block = (Rpc - LABEL_99_6);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_99_7);
      goto label_27;

    case 4:
      current_block = (Rpc - LABEL_99_8);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_99_9);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_99_10);
      goto label_30;

    case 7:
      current_block = (Rpc - LABEL_99_11);
      goto label_31;

    case 8:
      current_block = (Rpc - LABEL_99_12);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_99_13);
      goto label_33;

    case 10:
      current_block = (Rpc - LABEL_99_14);
      goto label_34;

    case 11:
      current_block = (Rpc - LABEL_99_15);
      goto label_35;

    case 12:
      current_block = (Rpc - LABEL_99_16);
      goto label_36;

    case 13:
      current_block = (Rpc - LABEL_99_17);
      goto label_37;

    case 14:
      current_block = (Rpc - LABEL_99_18);
      goto label_38;

    case 15:
      current_block = (Rpc - LABEL_99_19);
      goto label_39;

    case 16:
      current_block = (Rpc - LABEL_99_20);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_99_21);
      goto label_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_43)
DEFLABEL (lambda_23)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_77;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_76)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_75;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_74)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_73;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_72)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_71;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_70)
  (Wrd38.Obj) = (current_block [OBJECT_99_2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_69;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_68)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_67;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd48.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_66)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_65;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd55.Obj) = ((Wrd56.pObj) [0]);

DEFLABEL (label_64)
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_63;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd62.Obj) = ((Wrd63.pObj) [1]);

DEFLABEL (label_62)
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_61;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd69.Obj) = ((Wrd70.pObj) [1]);

DEFLABEL (label_60)
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd78.uLng) == 1))
    goto label_59;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd76.Obj) = ((Wrd77.pObj) [0]);

DEFLABEL (label_58)
  (Wrd83.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd83.Obj);
  (Wrd85.pObj) = (& (Rhp [-2]));
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd85.pObj)));
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd90.Obj) = (Rsp [1]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 1))
    goto label_57;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd87.Obj) = ((Wrd89.pObj) [1]);

DEFLABEL (label_56)
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd98.uLng) == 1))
    goto label_55;
  (Wrd97.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd96.Obj) = ((Wrd97.pObj) [1]);

DEFLABEL (label_54)
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd105.uLng) == 1))
    goto label_53;
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd103.Obj) = ((Wrd104.pObj) [0]);

DEFLABEL (label_52)
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd112.uLng) == 1))
    goto label_51;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd110.Obj) = ((Wrd111.pObj) [1]);

DEFLABEL (label_50)
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd119.uLng) == 1))
    goto label_49;
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd117.Obj) = ((Wrd118.pObj) [0]);

DEFLABEL (label_48)
  (Wrd127.Obj) = (current_block [OBJECT_99_2]);
  (* (Rhp++)) = (Wrd117.Obj);
  (* (Rhp++)) = (Wrd127.Obj);
  (Wrd125.pObj) = (& (Rhp [-2]));
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd125.pObj)));
  (* (--Rsp)) = (Wrd126.Obj);
  (Wrd131.Obj) = (Rsp [2]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd132.uLng) == 1))
    goto label_47;
  (Wrd130.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd128.Obj) = ((Wrd130.pObj) [1]);

DEFLABEL (label_46)
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd139.uLng) == 1))
    goto label_45;
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd137.Obj) = ((Wrd138.pObj) [0]);

DEFLABEL (label_44)
  (Wrd144.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd137.Obj);
  (* (Rhp++)) = (Wrd144.Obj);
  (Wrd147.pObj) = (& (Rhp [-2]));
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd147.pObj)));
  (Wrd151.Obj) = (current_block [OBJECT_99_3]);
  (* (Rhp++)) = (Wrd151.Obj);
  (* (Rhp++)) = (Wrd145.Obj);
  (Wrd150.pObj) = (& (Rhp [-2]));
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd150.pObj)));
  (Wrd152.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd148.Obj);
  (* (Rhp++)) = (Wrd152.Obj);
  (Wrd155.pObj) = (& (Rhp [-2]));
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd155.pObj)));
  (Wrd160.Obj) = (current_block [OBJECT_99_4]);
  (* (Rhp++)) = (Wrd160.Obj);
  (* (Rhp++)) = (Wrd153.Obj);
  (Wrd158.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd158.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_21]))));
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 1);

DEFLABEL (label_41)
  (Wrd137.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_20]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_40)
  (Wrd128.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_19]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 1);

DEFLABEL (label_39)
  (Wrd117.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_18]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_38)
  (Wrd110.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_17]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 1);

DEFLABEL (label_37)
  (Wrd103.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_16]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_36)
  (Wrd96.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_15]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_35)
  (Wrd87.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_14]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 1);

DEFLABEL (label_34)
  (Wrd76.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_13]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_33)
  (Wrd69.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_12]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_32)
  (Wrd62.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_11]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 1);

DEFLABEL (label_31)
  (Wrd55.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_10]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_30)
  (Wrd48.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_9]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_29)
  (Wrd39.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 1);

DEFLABEL (label_28)
  (Wrd28.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_27)
  (Wrd21.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_26)
  (Wrd14.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_25)
  (Wrd5.Obj) = Rvl;
  goto label_76;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define LABEL_100_5 5
#define LABEL_100_6 7
#define LABEL_100_7 9
#define LABEL_100_8 11
#define LABEL_100_9 13
#define LABEL_100_10 15
#define LABEL_100_11 17
#define LABEL_100_12 19
#define LABEL_100_13 21
#define LABEL_100_14 23
#define ENVIRONMENT_LABEL_100_3 30
#define DEBUGGING_LABEL_100_2 29
#define OBJECT_100_1 28
#define OBJECT_100_0 27
#define EXECUTE_CACHE_100_15 25
#define FREE_REFERENCES_LABEL_100_0 24
#define NUMBER_OF_LINKER_SECTIONS_100_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_100_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_100_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_100_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_100_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_100_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_100_9);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_100_10);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_100_11);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_100_12);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_100_13);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_100_14);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_23)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_43;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_42)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_41;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_40)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_39;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_38)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_37;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_36)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_35;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd35.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_34)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_33;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_32)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_31;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_30)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_29;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_28)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_27;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd65.Obj) = ((Wrd66.pObj) [1]);

DEFLABEL (label_26)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_25;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd72.Obj) = ((Wrd73.pObj) [0]);

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd72.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_15]));

DEFLABEL (label_25)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_14]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_1]), 1);

DEFLABEL (label_21)
  (Wrd72.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_13]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_0]), 1);

DEFLABEL (label_20)
  (Wrd65.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_12]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_0]), 1);

DEFLABEL (label_19)
  (Wrd56.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_11]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_10]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_0]), 1);

DEFLABEL (label_17)
  (Wrd42.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_0]), 1);

DEFLABEL (label_16)
  (Wrd35.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_1]), 1);

DEFLABEL (label_15)
  (Wrd28.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_0]), 1);

DEFLABEL (label_14)
  (Wrd21.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_0]), 1);

DEFLABEL (label_13)
  (Wrd14.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_0]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define LABEL_101_5 5
#define LABEL_101_6 7
#define LABEL_101_7 9
#define LABEL_101_8 11
#define LABEL_101_9 13
#define LABEL_101_10 15
#define LABEL_101_11 17
#define LABEL_101_12 19
#define LABEL_101_13 21
#define LABEL_101_14 23
#define LABEL_101_15 25
#define LABEL_101_16 27
#define LABEL_101_17 29
#define LABEL_101_18 31
#define LABEL_101_19 33
#define LABEL_101_20 35
#define LABEL_101_21 37
#define LABEL_101_22 39
#define LABEL_101_23 41
#define ENVIRONMENT_LABEL_101_3 48
#define DEBUGGING_LABEL_101_2 47
#define OBJECT_101_4 46
#define OBJECT_101_3 45
#define OBJECT_101_2 44
#define OBJECT_101_1 43
#define OBJECT_101_0 42
#define FREE_REFERENCES_LABEL_101_0 42
#define NUMBER_OF_LINKER_SECTIONS_101_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd172;
  machine_word Wrd174;
  machine_word Wrd167;
  machine_word Wrd169;
  machine_word Wrd166;
  machine_word Wrd162;
  machine_word Wrd164;
  machine_word Wrd165;
  machine_word Wrd159;
  machine_word Wrd161;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd151;
  machine_word Wrd152;
  machine_word Wrd153;
  machine_word Wrd150;
  machine_word Wrd142;
  machine_word Wrd144;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd141;
  machine_word Wrd137;
  machine_word Wrd131;
  machine_word Wrd132;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd124;
  machine_word Wrd125;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd117;
  machine_word Wrd118;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd103;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_101_4);
      goto lambda_25;

    case 1:
      current_block = (Rpc - LABEL_101_5);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_101_6);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_101_7);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_101_8);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_101_9);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_101_10);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_101_11);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_101_12);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_101_13);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_101_14);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_101_15);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_101_16);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_101_17);
      goto label_39;

    case 14:
      current_block = (Rpc - LABEL_101_18);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_101_19);
      goto label_41;

    case 16:
      current_block = (Rpc - LABEL_101_20);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_101_21);
      goto label_43;

    case 18:
      current_block = (Rpc - LABEL_101_22);
      goto label_44;

    case 19:
      current_block = (Rpc - LABEL_101_23);
      goto label_45;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_47)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_101_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_85;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_84)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_83;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_82)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_81;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_80)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_79;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_78)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_77;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd35.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_76)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_75;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_74)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_73;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd49.Obj) = ((Wrd50.pObj) [1]);

DEFLABEL (label_72)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_71;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd56.Obj) = ((Wrd57.pObj) [0]);

DEFLABEL (label_70)
  (Wrd66.Obj) = (current_block [OBJECT_101_2]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_69;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd67.Obj) = ((Wrd69.pObj) [1]);

DEFLABEL (label_68)
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd78.uLng) == 1))
    goto label_67;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd76.Obj) = ((Wrd77.pObj) [1]);

DEFLABEL (label_66)
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_65;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd83.Obj) = ((Wrd84.pObj) [0]);

DEFLABEL (label_64)
  (Wrd90.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd83.Obj);
  (* (Rhp++)) = (Wrd90.Obj);
  (Wrd92.pObj) = (& (Rhp [-2]));
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd92.pObj)));
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd97.Obj) = (Rsp [1]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 1))
    goto label_63;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd94.Obj) = ((Wrd96.pObj) [1]);

DEFLABEL (label_62)
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd105.uLng) == 1))
    goto label_61;
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd103.Obj) = ((Wrd104.pObj) [1]);

DEFLABEL (label_60)
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd112.uLng) == 1))
    goto label_59;
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd110.Obj) = ((Wrd111.pObj) [1]);

DEFLABEL (label_58)
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd119.uLng) == 1))
    goto label_57;
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd117.Obj) = ((Wrd118.pObj) [0]);

DEFLABEL (label_56)
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd126.uLng) == 1))
    goto label_55;
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd124.Obj) = ((Wrd125.pObj) [1]);

DEFLABEL (label_54)
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd133.uLng) == 1))
    goto label_53;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd124.Obj));
  (Wrd131.Obj) = ((Wrd132.pObj) [0]);

DEFLABEL (label_52)
  (Wrd141.Obj) = (current_block [OBJECT_101_2]);
  (* (Rhp++)) = (Wrd131.Obj);
  (* (Rhp++)) = (Wrd141.Obj);
  (Wrd139.pObj) = (& (Rhp [-2]));
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd139.pObj)));
  (* (--Rsp)) = (Wrd140.Obj);
  (Wrd145.Obj) = (Rsp [2]);
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if (! ((Wrd146.uLng) == 1))
    goto label_51;
  (Wrd144.pObj) = (OBJECT_ADDRESS (Wrd145.Obj));
  (Wrd142.Obj) = ((Wrd144.pObj) [1]);

DEFLABEL (label_50)
  (Wrd153.uLng) = (OBJECT_TYPE (Wrd142.Obj));
  if (! ((Wrd153.uLng) == 1))
    goto label_49;
  (Wrd152.pObj) = (OBJECT_ADDRESS (Wrd142.Obj));
  (Wrd151.Obj) = ((Wrd152.pObj) [0]);

DEFLABEL (label_48)
  (Wrd158.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd151.Obj);
  (* (Rhp++)) = (Wrd158.Obj);
  (Wrd161.pObj) = (& (Rhp [-2]));
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd161.pObj)));
  (Wrd165.Obj) = (current_block [OBJECT_101_3]);
  (* (Rhp++)) = (Wrd165.Obj);
  (* (Rhp++)) = (Wrd159.Obj);
  (Wrd164.pObj) = (& (Rhp [-2]));
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd164.pObj)));
  (Wrd166.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd162.Obj);
  (* (Rhp++)) = (Wrd166.Obj);
  (Wrd169.pObj) = (& (Rhp [-2]));
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd169.pObj)));
  (Wrd174.Obj) = (current_block [OBJECT_101_4]);
  (* (Rhp++)) = (Wrd174.Obj);
  (* (Rhp++)) = (Wrd167.Obj);
  (Wrd172.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd172.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_23]))));
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd142.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_1]), 1);

DEFLABEL (label_45)
  (Wrd151.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_22]))));
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 1);

DEFLABEL (label_44)
  (Wrd142.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_21]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_1]), 1);

DEFLABEL (label_43)
  (Wrd131.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_20]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 1);

DEFLABEL (label_42)
  (Wrd124.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_19]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_1]), 1);

DEFLABEL (label_41)
  (Wrd117.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_18]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 1);

DEFLABEL (label_40)
  (Wrd110.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_17]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 1);

DEFLABEL (label_39)
  (Wrd103.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_16]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 1);

DEFLABEL (label_38)
  (Wrd94.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_15]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_1]), 1);

DEFLABEL (label_37)
  (Wrd83.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_14]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 1);

DEFLABEL (label_36)
  (Wrd76.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_13]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 1);

DEFLABEL (label_35)
  (Wrd67.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_1]), 1);

DEFLABEL (label_34)
  (Wrd56.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_11]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 1);

DEFLABEL (label_33)
  (Wrd49.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_10]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 1);

DEFLABEL (label_32)
  (Wrd42.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 1);

DEFLABEL (label_31)
  (Wrd35.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_1]), 1);

DEFLABEL (label_30)
  (Wrd28.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 1);

DEFLABEL (label_29)
  (Wrd21.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 1);

DEFLABEL (label_28)
  (Wrd14.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_0]), 1);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_84;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define LABEL_102_6 5
#define LABEL_102_7 7
#define LABEL_102_8 9
#define LABEL_102_5 11
#define LABEL_102_10 13
#define LABEL_102_11 15
#define LABEL_102_13 17
#define LABEL_102_14 19
#define LABEL_102_15 21
#define LABEL_102_16 23
#define LABEL_102_17 25
#define LABEL_102_18 27
#define LABEL_102_19 29
#define LABEL_102_20 31
#define ENVIRONMENT_LABEL_102_3 43
#define DEBUGGING_LABEL_102_2 42
#define OBJECT_102_2 41
#define OBJECT_102_1 40
#define OBJECT_102_0 39
#define EXECUTE_CACHE_102_21 33
#define EXECUTE_CACHE_102_12 35
#define EXECUTE_CACHE_102_9 37
#define FREE_REFERENCES_LABEL_102_0 32
#define NUMBER_OF_LINKER_SECTIONS_102_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd66;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_102_4);
      goto lambda_15;

    case 1:
      current_block = (Rpc - LABEL_102_6);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_102_7);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_102_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_102_5);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_102_10);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_102_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_102_13);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_102_14);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_102_15);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_102_16);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_102_17);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_102_18);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_102_19);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_102_20);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_30)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_55;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_54)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_53;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_52)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_51;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_102_5);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_49;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_48)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_102_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_102_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_47;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_46)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_45;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_44)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_43;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_42)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_41;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_40)
  (Rsp [0]) = (Wrd30.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_39;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_38)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_37;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_36)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_35;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd53.Obj) = ((Wrd54.pObj) [1]);

DEFLABEL (label_34)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_33;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd60.Obj) = ((Wrd61.pObj) [0]);

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_21]));

DEFLABEL (label_33)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_20]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 1);

DEFLABEL (label_28)
  (Wrd60.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_19]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_0]), 1);

DEFLABEL (label_27)
  (Wrd53.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_18]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_0]), 1);

DEFLABEL (label_26)
  (Wrd46.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_17]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_0]), 1);

DEFLABEL (label_25)
  (Wrd37.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_16]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 1);

DEFLABEL (label_24)
  (Wrd30.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_0]), 1);

DEFLABEL (label_23)
  (Wrd23.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_0]), 1);

DEFLABEL (label_22)
  (Wrd16.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_0]), 1);

DEFLABEL (label_21)
  (Wrd7.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_0]), 1);

DEFLABEL (label_18)
  (Wrd17.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_0]), 1);

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_103_4 3
#define LABEL_103_6 5
#define LABEL_103_7 7
#define LABEL_103_8 9
#define LABEL_103_5 11
#define LABEL_103_10 13
#define LABEL_103_11 15
#define LABEL_103_12 17
#define LABEL_103_13 19
#define LABEL_103_14 21
#define LABEL_103_15 23
#define LABEL_103_16 25
#define LABEL_103_17 27
#define LABEL_103_19 29
#define LABEL_103_20 31
#define LABEL_103_22 33
#define LABEL_103_23 35
#define LABEL_103_24 37
#define LABEL_103_25 39
#define LABEL_103_18 41
#define LABEL_103_27 43
#define LABEL_103_28 45
#define LABEL_103_21 47
#define ENVIRONMENT_LABEL_103_3 62
#define DEBUGGING_LABEL_103_2 61
#define OBJECT_103_5 60
#define OBJECT_103_4 59
#define OBJECT_103_3 58
#define OBJECT_103_2 57
#define OBJECT_103_1 56
#define OBJECT_103_0 55
#define EXECUTE_CACHE_103_29 49
#define EXECUTE_CACHE_103_26 51
#define EXECUTE_CACHE_103_9 53
#define FREE_REFERENCES_LABEL_103_0 48
#define NUMBER_OF_LINKER_SECTIONS_103_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_103 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd129;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd116;
  machine_word Wrd117;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd109;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_103_4);
      goto lambda_31;

    case 1:
      current_block = (Rpc - LABEL_103_6);
      goto label_33;

    case 2:
      current_block = (Rpc - LABEL_103_7);
      goto label_34;

    case 3:
      current_block = (Rpc - LABEL_103_8);
      goto label_35;

    case 4:
      current_block = (Rpc - LABEL_103_5);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_103_10);
      goto label_36;

    case 6:
      current_block = (Rpc - LABEL_103_11);
      goto label_37;

    case 7:
      current_block = (Rpc - LABEL_103_12);
      goto label_38;

    case 8:
      current_block = (Rpc - LABEL_103_13);
      goto label_39;

    case 9:
      current_block = (Rpc - LABEL_103_14);
      goto label_40;

    case 10:
      current_block = (Rpc - LABEL_103_15);
      goto label_41;

    case 11:
      current_block = (Rpc - LABEL_103_16);
      goto label_42;

    case 12:
      current_block = (Rpc - LABEL_103_17);
      goto label_43;

    case 13:
      current_block = (Rpc - LABEL_103_19);
      goto label_44;

    case 14:
      current_block = (Rpc - LABEL_103_20);
      goto label_45;

    case 15:
      current_block = (Rpc - LABEL_103_22);
      goto label_46;

    case 16:
      current_block = (Rpc - LABEL_103_23);
      goto label_47;

    case 17:
      current_block = (Rpc - LABEL_103_24);
      goto label_48;

    case 18:
      current_block = (Rpc - LABEL_103_25);
      goto label_49;

    case 19:
      current_block = (Rpc - LABEL_103_18);
      goto continuation_15;

    case 20:
      current_block = (Rpc - LABEL_103_27);
      goto label_50;

    case 21:
      current_block = (Rpc - LABEL_103_28);
      goto label_51;

    case 22:
      current_block = (Rpc - LABEL_103_21);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_53)
DEFLABEL (lambda_31)
  INTERRUPT_CHECK (26, LABEL_103_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_91;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_90)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_89;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_88)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_87;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_86)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_103_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_103_5);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_85;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_84)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_83;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_82)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_81;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_80)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_79;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd29.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_78)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_77;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd36.Obj) = ((Wrd37.pObj) [0]);

DEFLABEL (label_76)
  (Wrd46.Obj) = (current_block [OBJECT_103_2]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_75;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_74)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_73;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_72)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_71;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd63.Obj) = ((Wrd64.pObj) [0]);

DEFLABEL (label_70)
  (Wrd70.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_18]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd80.Obj) = (Rsp [2]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_69;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd77.Obj) = ((Wrd79.pObj) [1]);

DEFLABEL (label_68)
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_67;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd86.Obj) = ((Wrd87.pObj) [0]);

DEFLABEL (label_66)
  (Wrd96.Obj) = (current_block [OBJECT_103_2]);
  (* (Rhp++)) = (Wrd86.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_21]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd103.Obj) = (Rsp [5]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 1))
    goto label_65;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd100.Obj) = ((Wrd102.pObj) [1]);

DEFLABEL (label_64)
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd111.uLng) == 1))
    goto label_63;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd109.Obj) = ((Wrd110.pObj) [1]);

DEFLABEL (label_62)
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd118.uLng) == 1))
    goto label_61;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd116.Obj) = ((Wrd117.pObj) [0]);

DEFLABEL (label_60)
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd125.uLng) == 1))
    goto label_59;
  (Wrd123.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd124.Obj) = ((Wrd123.pObj) [1]);
  (* (--Rsp)) = (Wrd124.Obj);

DEFLABEL (label_58)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_103_26]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_103_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_103_29]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_103_18);
  (Wrd9.Obj) = (current_block [OBJECT_103_3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_103_2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_57;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_56)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_55;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_54)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_103_4]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd38.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_103_5]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_28]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 1);

DEFLABEL (label_51)
  (Wrd23.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_27]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_0]), 1);

DEFLABEL (label_50)
  (Wrd14.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_25]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_0]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_24]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 1);

DEFLABEL (label_48)
  (Wrd116.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_23]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_0]), 1);

DEFLABEL (label_47)
  (Wrd109.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_22]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_0]), 1);

DEFLABEL (label_46)
  (Wrd100.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_20]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 1);

DEFLABEL (label_45)
  (Wrd86.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_19]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_0]), 1);

DEFLABEL (label_44)
  (Wrd77.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_17]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 1);

DEFLABEL (label_43)
  (Wrd63.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_16]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_0]), 1);

DEFLABEL (label_42)
  (Wrd56.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_15]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_0]), 1);

DEFLABEL (label_41)
  (Wrd47.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 1);

DEFLABEL (label_40)
  (Wrd36.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_13]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_0]), 1);

DEFLABEL (label_39)
  (Wrd29.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_0]), 1);

DEFLABEL (label_38)
  (Wrd22.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_0]), 1);

DEFLABEL (label_37)
  (Wrd13.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_0]), 1);

DEFLABEL (label_34)
  (Wrd17.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_0]), 1);

DEFLABEL (label_33)
  (Wrd8.Obj) = Rvl;
  goto label_90;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_104_4 3
#define LABEL_104_6 5
#define LABEL_104_7 7
#define LABEL_104_8 9
#define LABEL_104_9 11
#define LABEL_104_5 13
#define LABEL_104_11 15
#define LABEL_104_12 17
#define LABEL_104_14 19
#define LABEL_104_15 21
#define LABEL_104_16 23
#define LABEL_104_17 25
#define LABEL_104_18 27
#define LABEL_104_19 29
#define ENVIRONMENT_LABEL_104_3 41
#define DEBUGGING_LABEL_104_2 40
#define OBJECT_104_2 39
#define OBJECT_104_1 38
#define OBJECT_104_0 37
#define EXECUTE_CACHE_104_20 31
#define EXECUTE_CACHE_104_13 33
#define EXECUTE_CACHE_104_10 35
#define FREE_REFERENCES_LABEL_104_0 30
#define NUMBER_OF_LINKER_SECTIONS_104_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_104 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_104_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_104_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_104_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_104_8);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_104_9);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_104_5);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_104_11);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_104_12);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_104_14);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_104_15);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_104_16);
      goto label_23;

    case 11:
      current_block = (Rpc - LABEL_104_17);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_104_18);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_104_19);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_28)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_104_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_51;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_50)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_49;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_48)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_47;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_46)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_45;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_44)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_104_5);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_43;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_42)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_104_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_104_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_41;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_40)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_39;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_38)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_37;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_36)
  (Rsp [0]) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_35;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_34)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_33;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_32)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_31;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [0]);

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_20]));

DEFLABEL (label_31)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_19]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_1]), 1);

DEFLABEL (label_26)
  (Wrd46.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_18]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_0]), 1);

DEFLABEL (label_25)
  (Wrd39.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_17]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_0]), 1);

DEFLABEL (label_24)
  (Wrd30.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_16]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_1]), 1);

DEFLABEL (label_23)
  (Wrd23.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_0]), 1);

DEFLABEL (label_22)
  (Wrd16.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_0]), 1);

DEFLABEL (label_21)
  (Wrd7.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_9]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_0]), 1);

DEFLABEL (label_18)
  (Wrd24.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_0]), 1);

DEFLABEL (label_17)
  (Wrd17.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_0]), 1);

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_50;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_105_4 3
#define LABEL_105_6 5
#define LABEL_105_7 7
#define LABEL_105_8 9
#define LABEL_105_9 11
#define LABEL_105_5 13
#define LABEL_105_11 15
#define LABEL_105_12 17
#define LABEL_105_13 19
#define LABEL_105_14 21
#define LABEL_105_15 23
#define LABEL_105_16 25
#define LABEL_105_17 27
#define LABEL_105_18 29
#define LABEL_105_20 31
#define LABEL_105_21 33
#define LABEL_105_23 35
#define LABEL_105_24 37
#define LABEL_105_25 39
#define LABEL_105_26 41
#define LABEL_105_27 43
#define LABEL_105_19 45
#define LABEL_105_29 47
#define LABEL_105_30 49
#define LABEL_105_22 51
#define ENVIRONMENT_LABEL_105_3 66
#define DEBUGGING_LABEL_105_2 65
#define OBJECT_105_5 64
#define OBJECT_105_4 63
#define OBJECT_105_3 62
#define OBJECT_105_2 61
#define OBJECT_105_1 60
#define OBJECT_105_0 59
#define EXECUTE_CACHE_105_31 53
#define EXECUTE_CACHE_105_28 55
#define EXECUTE_CACHE_105_10 57
#define FREE_REFERENCES_LABEL_105_0 52
#define NUMBER_OF_LINKER_SECTIONS_105_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_105 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd136;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd123;
  machine_word Wrd124;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd116;
  machine_word Wrd117;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd109;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_105_4);
      goto lambda_33;

    case 1:
      current_block = (Rpc - LABEL_105_6);
      goto label_35;

    case 2:
      current_block = (Rpc - LABEL_105_7);
      goto label_36;

    case 3:
      current_block = (Rpc - LABEL_105_8);
      goto label_37;

    case 4:
      current_block = (Rpc - LABEL_105_9);
      goto label_38;

    case 5:
      current_block = (Rpc - LABEL_105_5);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_105_11);
      goto label_39;

    case 7:
      current_block = (Rpc - LABEL_105_12);
      goto label_40;

    case 8:
      current_block = (Rpc - LABEL_105_13);
      goto label_41;

    case 9:
      current_block = (Rpc - LABEL_105_14);
      goto label_42;

    case 10:
      current_block = (Rpc - LABEL_105_15);
      goto label_43;

    case 11:
      current_block = (Rpc - LABEL_105_16);
      goto label_44;

    case 12:
      current_block = (Rpc - LABEL_105_17);
      goto label_45;

    case 13:
      current_block = (Rpc - LABEL_105_18);
      goto label_46;

    case 14:
      current_block = (Rpc - LABEL_105_20);
      goto label_47;

    case 15:
      current_block = (Rpc - LABEL_105_21);
      goto label_48;

    case 16:
      current_block = (Rpc - LABEL_105_23);
      goto label_49;

    case 17:
      current_block = (Rpc - LABEL_105_24);
      goto label_50;

    case 18:
      current_block = (Rpc - LABEL_105_25);
      goto label_51;

    case 19:
      current_block = (Rpc - LABEL_105_26);
      goto label_52;

    case 20:
      current_block = (Rpc - LABEL_105_27);
      goto label_53;

    case 21:
      current_block = (Rpc - LABEL_105_19);
      goto continuation_17;

    case 22:
      current_block = (Rpc - LABEL_105_29);
      goto label_54;

    case 23:
      current_block = (Rpc - LABEL_105_30);
      goto label_55;

    case 24:
      current_block = (Rpc - LABEL_105_22);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_57)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_105_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_99;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_98)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_97;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_96)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_95;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_94)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_93;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_92)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_105_5);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_91;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_90)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_89;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_88)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_87;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_86)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_85;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd29.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_84)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_83;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd36.Obj) = ((Wrd37.pObj) [0]);

DEFLABEL (label_82)
  (Wrd46.Obj) = (current_block [OBJECT_105_2]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_81;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_80)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_79;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_78)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_77;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd63.Obj) = ((Wrd64.pObj) [0]);

DEFLABEL (label_76)
  (Wrd70.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_19]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd80.Obj) = (Rsp [2]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_75;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd77.Obj) = ((Wrd79.pObj) [1]);

DEFLABEL (label_74)
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_73;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd86.Obj) = ((Wrd87.pObj) [0]);

DEFLABEL (label_72)
  (Wrd96.Obj) = (current_block [OBJECT_105_2]);
  (* (Rhp++)) = (Wrd86.Obj);
  (* (Rhp++)) = (Wrd96.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_22]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd103.Obj) = (Rsp [5]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 1))
    goto label_71;
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd100.Obj) = ((Wrd102.pObj) [1]);

DEFLABEL (label_70)
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd111.uLng) == 1))
    goto label_69;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd109.Obj) = ((Wrd110.pObj) [1]);

DEFLABEL (label_68)
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd118.uLng) == 1))
    goto label_67;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd116.Obj) = ((Wrd117.pObj) [1]);

DEFLABEL (label_66)
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd125.uLng) == 1))
    goto label_65;
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd123.Obj) = ((Wrd124.pObj) [0]);

DEFLABEL (label_64)
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd132.uLng) == 1))
    goto label_63;
  (Wrd130.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd131.Obj) = ((Wrd130.pObj) [1]);
  (* (--Rsp)) = (Wrd131.Obj);

DEFLABEL (label_62)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_28]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_105_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_31]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_105_19);
  (Wrd9.Obj) = (current_block [OBJECT_105_3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_105_2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_61;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_60)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_59;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_58)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_105_4]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd38.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_105_5]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_30]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 1);

DEFLABEL (label_55)
  (Wrd23.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_29]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (label_54)
  (Wrd14.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_27]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_26]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 1);

DEFLABEL (label_52)
  (Wrd123.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_25]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (label_51)
  (Wrd116.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_24]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (label_50)
  (Wrd109.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_23]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (label_49)
  (Wrd100.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_21]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 1);

DEFLABEL (label_48)
  (Wrd86.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_20]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (label_47)
  (Wrd77.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_18]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 1);

DEFLABEL (label_46)
  (Wrd63.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_17]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (label_45)
  (Wrd56.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_16]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (label_44)
  (Wrd47.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_15]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 1);

DEFLABEL (label_43)
  (Wrd36.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_14]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (label_42)
  (Wrd29.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_13]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (label_41)
  (Wrd22.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (label_40)
  (Wrd13.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_9]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_1]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (label_37)
  (Wrd24.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (label_36)
  (Wrd17.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (label_35)
  (Wrd8.Obj) = Rvl;
  goto label_98;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_106_4 3
#define LABEL_106_6 5
#define LABEL_106_7 7
#define LABEL_106_8 9
#define LABEL_106_5 11
#define LABEL_106_10 13
#define LABEL_106_11 15
#define LABEL_106_12 17
#define LABEL_106_13 19
#define LABEL_106_14 21
#define ENVIRONMENT_LABEL_106_3 30
#define DEBUGGING_LABEL_106_2 29
#define OBJECT_106_1 28
#define OBJECT_106_0 27
#define EXECUTE_CACHE_106_15 23
#define EXECUTE_CACHE_106_9 25
#define FREE_REFERENCES_LABEL_106_0 22
#define NUMBER_OF_LINKER_SECTIONS_106_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_106 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_106_4);
      goto lambda_9;

    case 1:
      current_block = (Rpc - LABEL_106_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_106_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_106_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_106_5);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_106_10);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_106_11);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_106_12);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_106_13);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_106_14);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_20)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_106_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_36;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_35)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_34;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_33)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_32;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_106_5);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_30;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_28;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_27)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_26;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_25)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_24;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd29.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_23)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_22;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd36.Obj) = ((Wrd37.pObj) [0]);

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_15]));

DEFLABEL (label_22)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_1]), 1);

DEFLABEL (label_18)
  (Wrd36.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_13]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_0]), 1);

DEFLABEL (label_17)
  (Wrd29.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_0]), 1);

DEFLABEL (label_16)
  (Wrd22.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_0]), 1);

DEFLABEL (label_15)
  (Wrd13.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_1]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_1]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_0]), 1);

DEFLABEL (label_12)
  (Wrd17.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_0]), 1);

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_107_4 3
#define LABEL_107_5 5
#define LABEL_107_6 7
#define LABEL_107_7 9
#define LABEL_107_8 11
#define LABEL_107_10 13
#define LABEL_107_11 15
#define LABEL_107_12 17
#define LABEL_107_13 19
#define LABEL_107_9 21
#define LABEL_107_15 23
#define LABEL_107_16 25
#define ENVIRONMENT_LABEL_107_3 35
#define DEBUGGING_LABEL_107_2 34
#define OBJECT_107_4 33
#define OBJECT_107_3 32
#define OBJECT_107_2 31
#define OBJECT_107_1 30
#define OBJECT_107_0 29
#define EXECUTE_CACHE_107_14 27
#define FREE_REFERENCES_LABEL_107_0 26
#define NUMBER_OF_LINKER_SECTIONS_107_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_107 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd71;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_107_4);
      goto lambda_17;

    case 1:
      current_block = (Rpc - LABEL_107_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_107_6);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_107_7);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_107_8);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_107_10);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_107_11);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_107_12);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_107_13);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_107_9);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_107_15);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_107_16);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_30)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_107_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_50;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_49)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_48;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_47)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_46;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_45)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_44;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_43)
  (Wrd38.Obj) = (current_block [OBJECT_107_2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_42;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_41)
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_40;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd51.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_39)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_38;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd58.Obj) = ((Wrd59.pObj) [0]);

DEFLABEL (label_37)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_36;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [1]);
  (* (--Rsp)) = (Wrd66.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_107_9);
  (Wrd9.Obj) = (current_block [OBJECT_107_3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_107_2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_34;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_33)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_32;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_31)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_107_4]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd38.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_107_3]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_16]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_1]), 1);

DEFLABEL (label_28)
  (Wrd23.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_0]), 1);

DEFLABEL (label_27)
  (Wrd14.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_13]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_0]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_12]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_1]), 1);

DEFLABEL (label_25)
  (Wrd58.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_11]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_0]), 1);

DEFLABEL (label_24)
  (Wrd51.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_10]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_0]), 1);

DEFLABEL (label_23)
  (Wrd42.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_1]), 1);

DEFLABEL (label_22)
  (Wrd28.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_0]), 1);

DEFLABEL (label_21)
  (Wrd21.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_0]), 1);

DEFLABEL (label_20)
  (Wrd14.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_0]), 1);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_49;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_108_4 3
#define LABEL_108_5 5
#define LABEL_108_6 7
#define LABEL_108_7 9
#define LABEL_108_8 11
#define LABEL_108_9 13
#define LABEL_108_10 15
#define LABEL_108_11 17
#define LABEL_108_12 19
#define LABEL_108_13 21
#define LABEL_108_14 23
#define LABEL_108_15 25
#define LABEL_108_16 27
#define ENVIRONMENT_LABEL_108_3 32
#define DEBUGGING_LABEL_108_2 31
#define OBJECT_108_2 30
#define OBJECT_108_1 29
#define OBJECT_108_0 28
#define FREE_REFERENCES_LABEL_108_0 28
#define NUMBER_OF_LINKER_SECTIONS_108_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_108 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd103;
  machine_word Wrd101;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd88;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_108_4);
      goto lambda_15;

    case 1:
      current_block = (Rpc - LABEL_108_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_108_6);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_108_7);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_108_8);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_108_9);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_108_10);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_108_11);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_108_12);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_108_13);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_108_14);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_108_15);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_108_16);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_30)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_108_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_57;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_56)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_55;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_54)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_53;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_52)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_51;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_50)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_49;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_48)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_47;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_46)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_45;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd53.Obj) = ((Wrd54.pObj) [0]);

DEFLABEL (label_44)
  (Rsp [1]) = (Wrd53.Obj);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_43;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd60.Obj) = ((Wrd62.pObj) [1]);

DEFLABEL (label_42)
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_41;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd69.Obj) = ((Wrd70.pObj) [0]);

DEFLABEL (label_40)
  (Wrd76.Obj) = (Rsp [0]);
  if ((Wrd76.Obj) == (Wrd69.Obj))
    goto label_33;

DEFLABEL (label_32)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_31)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd82.Obj) = (Rsp [1]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_39;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd79.Obj) = ((Wrd81.pObj) [1]);

DEFLABEL (label_38)
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_37;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd88.Obj) = ((Wrd89.pObj) [1]);

DEFLABEL (label_36)
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_35;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd95.Obj) = ((Wrd96.pObj) [0]);

DEFLABEL (label_34)
  (Wrd103.Obj) = (Rsp [0]);
  if (! ((Wrd103.Obj) == (Wrd95.Obj)))
    goto label_32;
  Rvl = (current_block [OBJECT_108_2]);
  goto label_31;

DEFLABEL (label_35)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_16]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_0]), 1);

DEFLABEL (label_28)
  (Wrd95.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_15]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 1);

DEFLABEL (label_27)
  (Wrd88.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_14]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 1);

DEFLABEL (label_26)
  (Wrd79.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_13]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_0]), 1);

DEFLABEL (label_25)
  (Wrd69.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_12]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 1);

DEFLABEL (label_24)
  (Wrd60.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_11]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_0]), 1);

DEFLABEL (label_23)
  (Wrd53.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_10]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 1);

DEFLABEL (label_22)
  (Wrd46.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 1);

DEFLABEL (label_21)
  (Wrd37.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_0]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_0]), 1);

DEFLABEL (label_19)
  (Wrd23.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 1);

DEFLABEL (label_18)
  (Wrd14.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_0]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_56;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_109_4 3
#define LABEL_109_5 5
#define LABEL_109_6 7
#define LABEL_109_7 9
#define LABEL_109_8 11
#define LABEL_109_9 13
#define LABEL_109_10 15
#define LABEL_109_11 17
#define LABEL_109_12 19
#define LABEL_109_13 21
#define LABEL_109_14 23
#define ENVIRONMENT_LABEL_109_3 29
#define DEBUGGING_LABEL_109_2 28
#define OBJECT_109_3 27
#define OBJECT_109_2 26
#define OBJECT_109_1 25
#define OBJECT_109_0 24
#define FREE_REFERENCES_LABEL_109_0 24
#define NUMBER_OF_LINKER_SECTIONS_109_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_109 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd89;
  machine_word Wrd91;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_109_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_109_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_109_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_109_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_109_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_109_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_109_10);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_109_11);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_109_12);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_109_13);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_109_14);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_109_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_45;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_44)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_43;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_42)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_41;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_40)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_39;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_38)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_37;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd35.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_36)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_35;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd42.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_34)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_33;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd49.Obj) = ((Wrd50.pObj) [1]);

DEFLABEL (label_32)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_31;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd56.Obj) = ((Wrd57.pObj) [0]);

DEFLABEL (label_30)
  (Wrd66.Obj) = (current_block [OBJECT_109_2]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_29;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd67.Obj) = ((Wrd69.pObj) [1]);

DEFLABEL (label_28)
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd78.uLng) == 1))
    goto label_27;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd76.Obj) = ((Wrd77.pObj) [0]);

DEFLABEL (label_26)
  (Wrd83.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd83.Obj);
  (Wrd86.pObj) = (& (Rhp [-2]));
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd86.pObj)));
  (Wrd91.Obj) = (current_block [OBJECT_109_3]);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd89.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd89.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_14]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_0]), 1);

DEFLABEL (label_23)
  (Wrd76.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_13]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 1);

DEFLABEL (label_22)
  (Wrd67.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_0]), 1);

DEFLABEL (label_21)
  (Wrd56.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_11]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 1);

DEFLABEL (label_20)
  (Wrd49.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_10]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 1);

DEFLABEL (label_19)
  (Wrd42.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 1);

DEFLABEL (label_18)
  (Wrd35.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_0]), 1);

DEFLABEL (label_17)
  (Wrd28.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 1);

DEFLABEL (label_16)
  (Wrd21.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_1]), 1);

DEFLABEL (label_15)
  (Wrd14.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_0]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_110_4 3
#define LABEL_110_5 5
#define LABEL_110_6 7
#define LABEL_110_7 9
#define LABEL_110_8 11
#define LABEL_110_9 13
#define LABEL_110_10 15
#define LABEL_110_11 17
#define LABEL_110_12 19
#define LABEL_110_13 21
#define LABEL_110_14 23
#define LABEL_110_15 25
#define LABEL_110_16 27
#define ENVIRONMENT_LABEL_110_3 32
#define DEBUGGING_LABEL_110_2 31
#define OBJECT_110_2 30
#define OBJECT_110_1 29
#define OBJECT_110_0 28
#define FREE_REFERENCES_LABEL_110_0 28
#define NUMBER_OF_LINKER_SECTIONS_110_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_110 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd103;
  machine_word Wrd101;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd88;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_110_4);
      goto lambda_15;

    case 1:
      current_block = (Rpc - LABEL_110_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_110_6);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_110_7);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_110_8);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_110_9);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_110_10);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_110_11);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_110_12);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_110_13);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_110_14);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_110_15);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_110_16);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_30)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_110_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_57;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_56)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_55;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_54)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_53;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_52)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_51;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_50)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_49;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_48)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_47;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_46)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_45;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd53.Obj) = ((Wrd54.pObj) [0]);

DEFLABEL (label_44)
  (Rsp [1]) = (Wrd53.Obj);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_43;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd60.Obj) = ((Wrd62.pObj) [1]);

DEFLABEL (label_42)
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_41;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd69.Obj) = ((Wrd70.pObj) [0]);

DEFLABEL (label_40)
  (Wrd76.Obj) = (Rsp [0]);
  if ((Wrd76.Obj) == (Wrd69.Obj))
    goto label_33;

DEFLABEL (label_32)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_31)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd82.Obj) = (Rsp [1]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 1))
    goto label_39;
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd79.Obj) = ((Wrd81.pObj) [1]);

DEFLABEL (label_38)
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_37;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd88.Obj) = ((Wrd89.pObj) [1]);

DEFLABEL (label_36)
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_35;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd95.Obj) = ((Wrd96.pObj) [0]);

DEFLABEL (label_34)
  (Wrd103.Obj) = (Rsp [0]);
  if (! ((Wrd103.Obj) == (Wrd95.Obj)))
    goto label_32;
  Rvl = (current_block [OBJECT_110_2]);
  goto label_31;

DEFLABEL (label_35)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_16]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_0]), 1);

DEFLABEL (label_28)
  (Wrd95.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_15]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_1]), 1);

DEFLABEL (label_27)
  (Wrd88.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_14]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_1]), 1);

DEFLABEL (label_26)
  (Wrd79.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_13]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_0]), 1);

DEFLABEL (label_25)
  (Wrd69.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_12]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_1]), 1);

DEFLABEL (label_24)
  (Wrd60.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_11]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_0]), 1);

DEFLABEL (label_23)
  (Wrd53.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_10]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_1]), 1);

DEFLABEL (label_22)
  (Wrd46.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_1]), 1);

DEFLABEL (label_21)
  (Wrd37.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_0]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_0]), 1);

DEFLABEL (label_19)
  (Wrd23.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_1]), 1);

DEFLABEL (label_18)
  (Wrd14.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_0]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_56;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_111_4 3
#define LABEL_111_5 5
#define ENVIRONMENT_LABEL_111_3 9
#define DEBUGGING_LABEL_111_2 8
#define OBJECT_111_1 7
#define OBJECT_111_0 6
#define FREE_REFERENCES_LABEL_111_0 6
#define NUMBER_OF_LINKER_SECTIONS_111_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_111 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_111_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_111_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_111_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_8;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_6;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd16.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_111_1]), 1);

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_111_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_112_4 3
#define LABEL_112_6 5
#define LABEL_112_7 7
#define LABEL_112_8 9
#define LABEL_112_5 11
#define LABEL_112_10 13
#define LABEL_112_11 15
#define ENVIRONMENT_LABEL_112_3 24
#define DEBUGGING_LABEL_112_2 23
#define OBJECT_112_3 22
#define OBJECT_112_2 21
#define OBJECT_112_1 20
#define OBJECT_112_0 19
#define EXECUTE_CACHE_112_9 17
#define FREE_REFERENCES_LABEL_112_0 16
#define NUMBER_OF_LINKER_SECTIONS_112_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_112 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_112_4);
      goto lambda_8;

    case 1:
      current_block = (Rpc - LABEL_112_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_112_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_112_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_112_5);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_112_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_112_11);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_16)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_112_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_26;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_25)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_24;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_23)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_22;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_112_5);
  (Wrd9.Obj) = (current_block [OBJECT_112_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_20;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_19)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_18;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_17)
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_112_3]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_112_1]), 1);

DEFLABEL (label_14)
  (Wrd19.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_112_0]), 1);

DEFLABEL (label_13)
  (Wrd10.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_112_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_112_0]), 1);

DEFLABEL (label_11)
  (Wrd17.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_112_0]), 1);

DEFLABEL (label_10)
  (Wrd8.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_113_4 3
#define LABEL_113_5 5
#define LABEL_113_6 7
#define LABEL_113_7 9
#define LABEL_113_8 11
#define LABEL_113_9 13
#define LABEL_113_10 15
#define LABEL_113_11 17
#define ENVIRONMENT_LABEL_113_3 23
#define DEBUGGING_LABEL_113_2 22
#define OBJECT_113_3 21
#define OBJECT_113_2 20
#define OBJECT_113_1 19
#define OBJECT_113_0 18
#define FREE_REFERENCES_LABEL_113_0 18
#define NUMBER_OF_LINKER_SECTIONS_113_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_113 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_113_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_113_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_113_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_113_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_113_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_113_9);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_113_10);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_113_11);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_20)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_113_4);
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
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_31)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_30;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_29)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_28;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_27)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_26;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd35.Obj) = ((Wrd36.pObj) [0]);

DEFLABEL (label_25)
  (Wrd45.Obj) = (current_block [OBJECT_113_2]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_24;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_23)
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_22;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd55.Obj) = ((Wrd56.pObj) [0]);

DEFLABEL (label_21)
  (Wrd62.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (Wrd69.Obj) = (current_block [OBJECT_113_2]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Wrd74.Obj) = (current_block [OBJECT_113_3]);
  (* (Rhp++)) = (Wrd74.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113_11]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_113_1]), 1);

DEFLABEL (label_18)
  (Wrd55.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113_10]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_113_0]), 1);

DEFLABEL (label_17)
  (Wrd46.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_113_1]), 1);

DEFLABEL (label_16)
  (Wrd35.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_113_0]), 1);

DEFLABEL (label_15)
  (Wrd28.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_113_1]), 1);

DEFLABEL (label_14)
  (Wrd21.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_113_0]), 1);

DEFLABEL (label_13)
  (Wrd14.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_113_0]), 1);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_114_5 3
#define LABEL_114_4 5
#define LABEL_114_6 7
#define LABEL_114_7 9
#define LABEL_114_8 11
#define LABEL_114_9 13
#define LABEL_114_10 15
#define LABEL_114_11 17
#define LABEL_114_12 19
#define LABEL_114_13 21
#define LABEL_114_14 23
#define LABEL_114_15 25
#define LABEL_114_16 27
#define LABEL_114_17 29
#define LABEL_114_18 31
#define ENVIRONMENT_LABEL_114_3 41
#define DEBUGGING_LABEL_114_2 40
#define OBJECT_114_7 39
#define OBJECT_114_6 38
#define OBJECT_114_5 37
#define OBJECT_114_4 36
#define OBJECT_114_3 35
#define OBJECT_114_2 34
#define OBJECT_114_1 33
#define OBJECT_114_0 32
#define FREE_REFERENCES_LABEL_114_0 32
#define NUMBER_OF_LINKER_SECTIONS_114_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_114 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd131;
  machine_word Wrd120;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd137;
  machine_word Wrd134;
  machine_word Wrd115;
  machine_word Wrd109;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd102;
  machine_word Wrd103;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd95;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd79;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd146;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd150;
  machine_word Wrd147;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_114_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_114_4);
      goto lambda_19;

    case 2:
      current_block = (Rpc - LABEL_114_6);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_114_7);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_114_8);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_114_9);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_114_10);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_114_11);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_114_12);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_114_13);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_114_14);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_114_15);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_114_16);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_114_17);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_114_18);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_35)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_114_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_73;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_72)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_71;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_70)
  (Wrd147.Obj) = (current_block [OBJECT_114_2]);
  (Wrd150.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd150.Lng))))
    goto label_69;
  (Wrd25.uLng) = (OBJECT_DATUM (Wrd147.Obj));
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd25.Obj) == (Wrd27.Obj))
    goto label_68;

DEFLABEL (label_67)
  (Wrd28.Obj) = (current_block [OBJECT_114_4]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd38.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd38.Lng)))
    goto label_37;

DEFLABEL (label_36)
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_3]), 2);

DEFLABEL (label_37)
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd28.Obj));
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd32.Obj) == (Wrd34.Obj))
    goto label_39;
  (Wrd30.Obj) = (current_block [OBJECT_114_6]);
  goto label_38;

DEFLABEL (label_39)
  (Wrd30.Obj) = (current_block [OBJECT_114_5]);

DEFLABEL (label_38)
DEFLABEL (label_66)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_65)
  (Wrd39.Obj) = (Rsp [0]);
  if ((Wrd39.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;
  Rvl = (Wrd39.Obj);

DEFLABEL (label_40)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_64;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_63)
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_62;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd52.Obj) = ((Wrd53.pObj) [0]);

DEFLABEL (label_61)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd59.uLng) == 1)
    goto label_43;

DEFLABEL (label_42)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_40;

DEFLABEL (label_43)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_60;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd62.Obj) = ((Wrd64.pObj) [1]);

DEFLABEL (label_59)
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_58;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd71.Obj) = ((Wrd72.pObj) [0]);

DEFLABEL (label_57)
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_56;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd78.Obj) = ((Wrd79.pObj) [0]);

DEFLABEL (label_55)
  if (! ((Wrd78.Obj) == (current_block [OBJECT_114_7])))
    goto label_42;
  (Wrd89.Obj) = (Rsp [1]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 1))
    goto label_54;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd86.Obj) = ((Wrd88.pObj) [1]);

DEFLABEL (label_53)
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_52;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd95.Obj) = ((Wrd96.pObj) [0]);

DEFLABEL (label_51)
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd104.uLng) == 1))
    goto label_50;
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd102.Obj) = ((Wrd103.pObj) [1]);

DEFLABEL (label_49)
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd111.uLng) == 1))
    goto label_48;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd109.Obj) = ((Wrd110.pObj) [0]);

DEFLABEL (label_47)
  (Rsp [1]) = (Wrd109.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd134.Obj) = (current_block [OBJECT_114_2]);
  (Wrd137.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd137.Lng))))
    goto label_46;
  (Wrd117.uLng) = (OBJECT_DATUM (Wrd134.Obj));
  (Wrd118.Obj) = (Rsp [0]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd117.Obj) == (Wrd119.Obj)))
    goto label_45;

DEFLABEL (label_44)
  Rvl = (current_block [OBJECT_114_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd120.Obj) = (current_block [OBJECT_114_4]);
  (* (--Rsp)) = (Wrd120.Obj);
  (Wrd131.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd131.Lng))))
    goto label_36;
  (Wrd123.uLng) = (OBJECT_DATUM (Wrd120.Obj));
  (Wrd124.Obj) = (Rsp [1]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd123.Obj) == (Wrd125.Obj)))
    goto label_42;
  Rvl = (current_block [OBJECT_114_5]);
  goto label_40;

DEFLABEL (label_46)
  (Wrd139.Obj) = (Rsp [0]);
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_18]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_3]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_44;

DEFLABEL (label_48)
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_17]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_1]), 1);

DEFLABEL (label_31)
  (Wrd109.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_16]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_0]), 1);

DEFLABEL (label_30)
  (Wrd102.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_15]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_1]), 1);

DEFLABEL (label_29)
  (Wrd95.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_14]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_0]), 1);

DEFLABEL (label_28)
  (Wrd86.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_13]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_1]), 1);

DEFLABEL (label_27)
  (Wrd78.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_12]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_1]), 1);

DEFLABEL (label_26)
  (Wrd71.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_11]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_0]), 1);

DEFLABEL (label_25)
  (Wrd62.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_10]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_1]), 1);

DEFLABEL (label_24)
  (Wrd52.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_9]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_0]), 1);

DEFLABEL (label_23)
  (Wrd43.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_68)
  (Wrd146.Obj) = (current_block [OBJECT_114_5]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd146.Obj);
  goto label_65;

DEFLABEL (label_69)
  (Wrd152.Obj) = (Rsp [0]);
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_8]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_3]), 2);

DEFLABEL (label_33)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  goto label_68;

DEFLABEL (label_71)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_0]), 1);

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_72;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_114_5);
  (* (--Rsp)) = Rvl;
  goto label_65;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_115_4 3
#define LABEL_115_6 5
#define LABEL_115_7 7
#define LABEL_115_8 9
#define LABEL_115_9 11
#define LABEL_115_5 13
#define LABEL_115_10 15
#define TAG_115_11 6
#define LABEL_115_13 17
#define LABEL_115_14 19
#define ENVIRONMENT_LABEL_115_3 28
#define DEBUGGING_LABEL_115_2 27
#define OBJECT_115_3 26
#define OBJECT_115_2 25
#define OBJECT_115_1 24
#define OBJECT_115_0 23
#define EXECUTE_CACHE_115_12 21
#define FREE_REFERENCES_LABEL_115_0 20
#define NUMBER_OF_LINKER_SECTIONS_115_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_115 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_115_4);
      goto lambda_9;

    case 1:
      current_block = (Rpc - LABEL_115_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_115_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_115_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_115_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_115_5);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_115_10);
      goto lambda_19;

    case 7:
      current_block = (Rpc - LABEL_115_13);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_115_14);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_18)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_115_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_27;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_26)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_25;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_24)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_23;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_22)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_21;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_20)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_115_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_115_10])));
  Rhp += 1;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  Wrd40 = Wrd39;
  (Wrd41.Obj) = (Rsp [2]);
  ((Wrd40.pObj) [2]) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_115_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_115_5);
  (Wrd10.Obj) = (current_block [OBJECT_115_2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_9]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_115_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_115_1]), 1);

DEFLABEL (label_13)
  (Wrd24.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_115_0]), 1);

DEFLABEL (label_12)
  (Wrd17.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_115_0]), 1);

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_26;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_115_10);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_31;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_30)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_29;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_28)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (current_block [OBJECT_115_3]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_14]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_115_1]), 1);

DEFLABEL (label_16)
  (Wrd20.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_115_0]), 1);

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_116_4 3
#define LABEL_116_6 5
#define LABEL_116_7 7
#define LABEL_116_5 9
#define ENVIRONMENT_LABEL_116_3 18
#define DEBUGGING_LABEL_116_2 17
#define OBJECT_116_3 16
#define OBJECT_116_2 15
#define OBJECT_116_1 14
#define OBJECT_116_0 13
#define EXECUTE_CACHE_116_8 11
#define FREE_REFERENCES_LABEL_116_0 10
#define NUMBER_OF_LINKER_SECTIONS_116_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_116 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_116_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_116_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_116_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_116_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_116_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_13;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_12)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_11;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_116_5);
  (Wrd9.Obj) = (current_block [OBJECT_116_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_116_3]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_116_1]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_116_0]), 1);

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_117_4 3
#define ENVIRONMENT_LABEL_117_3 9
#define DEBUGGING_LABEL_117_2 8
#define OBJECT_117_0 7
#define EXECUTE_CACHE_117_5 5
#define FREE_REFERENCES_LABEL_117_0 4
#define NUMBER_OF_LINKER_SECTIONS_117_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_117 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_117_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_117_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_117_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_118_4 3
#define ENVIRONMENT_LABEL_118_3 9
#define DEBUGGING_LABEL_118_2 8
#define OBJECT_118_0 7
#define EXECUTE_CACHE_118_5 5
#define FREE_REFERENCES_LABEL_118_0 4
#define NUMBER_OF_LINKER_SECTIONS_118_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_118 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_118_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_118_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_118_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_118_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_119_4 3
#define ENVIRONMENT_LABEL_119_3 8
#define DEBUGGING_LABEL_119_2 7
#define EXECUTE_CACHE_119_5 5
#define FREE_REFERENCES_LABEL_119_0 4
#define NUMBER_OF_LINKER_SECTIONS_119_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_119 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_119_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_119_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_119_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_120_4 3
#define ENVIRONMENT_LABEL_120_3 9
#define DEBUGGING_LABEL_120_2 8
#define OBJECT_120_0 7
#define EXECUTE_CACHE_120_5 5
#define FREE_REFERENCES_LABEL_120_0 4
#define NUMBER_OF_LINKER_SECTIONS_120_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_120 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_120_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_120_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_120_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_121_4 3
#define LABEL_121_5 5
#define LABEL_121_8 7
#define LABEL_121_6 9
#define LABEL_121_10 11
#define ENVIRONMENT_LABEL_121_3 23
#define DEBUGGING_LABEL_121_2 22
#define OBJECT_121_0 21
#define EXECUTE_CACHE_121_11 13
#define EXECUTE_CACHE_121_9 15
#define EXECUTE_CACHE_121_7 17
#define FREE_REFERENCE_121_0 20
#define FREE_REFERENCES_LABEL_121_0 12
#define NUMBER_OF_LINKER_SECTIONS_121_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_121 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_121_4);
      goto optimize_group_expression_3;

    case 1:
      current_block = (Rpc - LABEL_121_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_121_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_121_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_121_10);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimize_group_expression_8)
DEFLABEL (optimize_group_expression_3)
  INTERRUPT_CHECK (26, LABEL_121_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_121_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_121_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_121_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_121_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_121_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_121_9]));

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_121_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_121_10])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_122_4 3
#define LABEL_122_5 5
#define LABEL_122_7 7
#define ENVIRONMENT_LABEL_122_3 14
#define DEBUGGING_LABEL_122_2 13
#define OBJECT_122_1 12
#define OBJECT_122_0 11
#define EXECUTE_CACHE_122_6 9
#define FREE_REFERENCES_LABEL_122_0 8
#define NUMBER_OF_LINKER_SECTIONS_122_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_122 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_122_4);
      goto optimize_group_expression_1_5;

    case 1:
      current_block = (Rpc - LABEL_122_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_122_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimize_group_expression_1_9)
DEFLABEL (optimize_group_expression_1_5)
  INTERRUPT_CHECK (26, LABEL_122_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_122_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_122_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_11;
  Rvl = (Rsp [3]);

DEFLABEL (label_10)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_11)
  if (! ((Wrd6.uLng) == 1))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_14)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd18.uLng) == 1)
    goto label_13;
  (Wrd19.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd19.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_12;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  Rvl = ((Wrd22.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_122_1]), 1);

DEFLABEL (label_13)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  goto label_10;

DEFLABEL (label_15)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_122_0]), 1);

DEFLABEL (label_7)
  (Wrd9.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_123_4 3
#define LABEL_123_5 5
#define LABEL_123_6 7
#define ENVIRONMENT_LABEL_123_3 14
#define DEBUGGING_LABEL_123_2 13
#define OBJECT_123_1 12
#define OBJECT_123_0 11
#define EXECUTE_CACHE_123_7 9
#define FREE_REFERENCES_LABEL_123_0 8
#define NUMBER_OF_LINKER_SECTIONS_123_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_123 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_123_4);
      goto flatten_subexpressions_2;

    case 1:
      current_block = (Rpc - LABEL_123_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_123_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flatten_subexpressions_7)
DEFLABEL (flatten_subexpressions_2)
  INTERRUPT_CHECK (26, LABEL_123_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_11;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_9;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_123_7]));

DEFLABEL (label_9)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_123_1]), 1);

DEFLABEL (label_5)
  (Wrd14.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_123_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_124_4 3
#define LABEL_124_5 5
#define LABEL_124_6 7
#define LABEL_124_7 9
#define LABEL_124_8 11
#define LABEL_124_10 13
#define LABEL_124_11 15
#define LABEL_124_12 17
#define LABEL_124_15 19
#define LABEL_124_14 21
#define LABEL_124_16 23
#define LABEL_124_9 25
#define ENVIRONMENT_LABEL_124_3 33
#define DEBUGGING_LABEL_124_2 32
#define OBJECT_124_2 31
#define OBJECT_124_1 30
#define OBJECT_124_0 29
#define EXECUTE_CACHE_124_13 27
#define FREE_REFERENCES_LABEL_124_0 26
#define NUMBER_OF_LINKER_SECTIONS_124_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_124 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd36;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd106;
  machine_word Wrd113;
  machine_word Wrd109;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd105;
  machine_word Wrd95;
  machine_word Wrd102;
  machine_word Wrd98;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd82;
  machine_word Wrd89;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd61;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd50;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_124_4);
      goto flatten_expressions_16;

    case 1:
      current_block = (Rpc - LABEL_124_5);
      goto loop_14;

    case 2:
      current_block = (Rpc - LABEL_124_6);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_124_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_124_8);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_124_10);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_124_11);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_124_12);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_124_15);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_124_14);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_124_16);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_124_9);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flatten_expressions_27)
DEFLABEL (flatten_expressions_16)
  INTERRUPT_CHECK (26, LABEL_124_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [4]));
  goto loop_14;

DEFLABEL (loop_28)
DEFLABEL (loop_14)
  DLINK_INTERRUPT_CHECK (25, LABEL_124_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_29;
  Rvl = (current_block [OBJECT_124_2]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_29)
  if (! ((Wrd6.uLng) == 1))
    goto label_47;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_46)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_35;

DEFLABEL (label_34)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_14]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_33;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_32)
  Rdl = (& (Rsp [2]));
  goto loop_14;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_124_14);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_31;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_30)
  (Wrd20.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_31)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_124_0]), 1);

DEFLABEL (label_25)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_15]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_124_1]), 1);

DEFLABEL (label_19)
  (Wrd36.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd36.Obj));
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_45;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [0]);

DEFLABEL (label_44)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_43;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd58.Obj) = ((Wrd59.pObj) [0]);

DEFLABEL (label_42)
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [1]);
  if (! ((Wrd58.Obj) == (Wrd71.Obj)))
    goto label_34;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_9]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd80.Obj) = (Rsp [2]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_41;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [1]);
  (* (--Rsp)) = (Wrd79.Obj);

DEFLABEL (label_40)
  (Wrd93.Obj) = (Rsp [3]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 1))
    goto label_39;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd90.Obj) = ((Wrd92.pObj) [0]);

DEFLABEL (label_38)
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd105.uLng) == 1))
    goto label_37;
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd104.Obj) = ((Wrd103.pObj) [1]);
  (* (--Rsp)) = (Wrd104.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_124_13]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_124_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [0]) = Rvl;
  goto loop_14;

DEFLABEL (label_37)
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_12]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_124_1]), 1);

DEFLABEL (label_24)
  (Wrd106.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd106.Obj));
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd98.Obj);
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_11]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_124_0]), 1);

DEFLABEL (label_23)
  (Wrd95.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd90.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_10]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_124_1]), 1);

DEFLABEL (label_22)
  (Wrd82.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd82.Obj));
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_8]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_124_0]), 1);

DEFLABEL (label_21)
  (Wrd61.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd58.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_7]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_124_0]), 1);

DEFLABEL (label_20)
  (Wrd50.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd45.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_124_0]), 1);

DEFLABEL (label_18)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd8.Obj) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_125_4 3
#define LABEL_125_5 5
#define LABEL_125_6 7
#define LABEL_125_8 9
#define LABEL_125_10 11
#define LABEL_125_12 13
#define LABEL_125_13 15
#define TAG_125_14 6
#define LABEL_125_16 17
#define LABEL_125_18 19
#define LABEL_125_20 21
#define LABEL_125_21 23
#define LABEL_125_23 25
#define ENVIRONMENT_LABEL_125_3 48
#define DEBUGGING_LABEL_125_2 47
#define OBJECT_125_3 46
#define OBJECT_125_2 45
#define OBJECT_125_1 44
#define OBJECT_125_0 43
#define EXECUTE_CACHE_125_22 27
#define EXECUTE_CACHE_125_19 29
#define EXECUTE_CACHE_125_17 31
#define EXECUTE_CACHE_125_15 33
#define EXECUTE_CACHE_125_11 35
#define EXECUTE_CACHE_125_9 37
#define EXECUTE_CACHE_125_7 39
#define FREE_REFERENCE_125_0 42
#define FREE_REFERENCES_LABEL_125_0 26
#define NUMBER_OF_LINKER_SECTIONS_125_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_125 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_125_4);
      goto trace_optimization_12;

    case 1:
      current_block = (Rpc - LABEL_125_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_125_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_125_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_125_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_125_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_125_13);
      goto lambda_17;

    case 7:
      current_block = (Rpc - LABEL_125_16);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_125_18);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_125_20);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_125_21);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_125_23);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trace_optimization_16)
DEFLABEL (trace_optimization_12)
  INTERRUPT_CHECK (26, LABEL_125_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_125_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_20;
  Wrd6 = Wrd10;

DEFLABEL (label_19)
  if ((Wrd6.Obj) == (current_block [OBJECT_125_0]))
    goto label_18;
  Rvl = (current_block [OBJECT_125_1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_125_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_125_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_125_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_125_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_125_13])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_125_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_125_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_125_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_125_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_125_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_125_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_125_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_125_23);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd5.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_22]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_125_5])), (Wrd7.pObj));

DEFLABEL (label_14)
  (Wrd6.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_125_13);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_125_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_126_5 3
#define LABEL_126_4 5
#define LABEL_126_6 7
#define LABEL_126_7 9
#define LABEL_126_9 11
#define LABEL_126_11 13
#define LABEL_126_13 15
#define LABEL_126_14 17
#define LABEL_126_15 19
#define LABEL_126_17 21
#define ENVIRONMENT_LABEL_126_3 40
#define DEBUGGING_LABEL_126_2 39
#define OBJECT_126_1 38
#define OBJECT_126_0 37
#define EXECUTE_CACHE_126_18 23
#define EXECUTE_CACHE_126_19 25
#define EXECUTE_CACHE_126_16 27
#define EXECUTE_CACHE_126_12 29
#define EXECUTE_CACHE_126_10 31
#define EXECUTE_CACHE_126_8 33
#define FREE_REFERENCE_126_0 36
#define FREE_REFERENCES_LABEL_126_0 22
#define NUMBER_OF_LINKER_SECTIONS_126_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
shared_so_code_126 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_126_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_126_4);
      goto trace_optimizer_tl_9;

    case 2:
      current_block = (Rpc - LABEL_126_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_126_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_126_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_126_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_126_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_126_14);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_126_15);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_126_17);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trace_optimizer_tl_13)
DEFLABEL (trace_optimizer_tl_9)
  INTERRUPT_CHECK (26, LABEL_126_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_126_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_17;
  Wrd5 = Wrd9;

DEFLABEL (label_16)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_15;

DEFLABEL (label_14)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_126_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_126_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_126_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_126_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_126_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_126_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_126_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_126_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_126_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_126_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_126_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_126_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_126_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_126_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_126_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_126_17);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_126_19]));

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_126_6])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_16;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_126_5);
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_15 13
#define LABEL_10 15
#define LABEL_13 17
#define LABEL_19 19
#define LABEL_14 21
#define LABEL_17 23
#define LABEL_23 25
#define LABEL_18 27
#define LABEL_21 29
#define LABEL_26 31
#define LABEL_22 33
#define LABEL_24 35
#define LABEL_25 37
#define LABEL_27 39
#define LABEL_28 41
#define LABEL_29 43
#define LABEL_30 45
#define LABEL_32 47
#define LABEL_35 49
#define LABEL_33 51
#define LABEL_34 53
#define LABEL_37 55
#define LABEL_38 57
#define LABEL_40 59
#define LABEL_41 61
#define LABEL_42 63
#define LABEL_43 65
#define LABEL_44 67
#define LABEL_45 69
#define LABEL_46 71
#define LABEL_48 73
#define LABEL_49 75
#define LABEL_50 77
#define LABEL_52 79
#define LABEL_51 81
#define LABEL_55 83
#define LABEL_54 85
#define LABEL_56 87
#define LABEL_57 89
#define LABEL_58 91
#define LABEL_59 93
#define LABEL_60 95
#define LABEL_61 97
#define LABEL_62 99
#define LABEL_63 101
#define LABEL_64 103
#define LABEL_65 105
#define LABEL_66 107
#define LABEL_67 109
#define LABEL_68 111
#define LABEL_69 113
#define LABEL_70 115
#define LABEL_71 117
#define LABEL_72 119
#define LABEL_73 121
#define LABEL_74 123
#define LABEL_75 125
#define LABEL_76 127
#define LABEL_77 129
#define LABEL_78 131
#define ENVIRONMENT_LABEL_3 257
#define DEBUGGING_LABEL_2 256
#define PURIFICATION_ROOT 255
#define OBJECT_96 254
#define OBJECT_95 253
#define OBJECT_94 252
#define OBJECT_93 251
#define OBJECT_92 250
#define OBJECT_91 249
#define OBJECT_90 248
#define OBJECT_89 247
#define OBJECT_88 246
#define OBJECT_87 245
#define OBJECT_86 244
#define OBJECT_85 243
#define OBJECT_84 242
#define OBJECT_83 241
#define OBJECT_82 240
#define OBJECT_81 239
#define OBJECT_80 238
#define OBJECT_79 237
#define OBJECT_78 236
#define OBJECT_77 235
#define OBJECT_76 234
#define OBJECT_75 233
#define OBJECT_74 232
#define OBJECT_73 231
#define OBJECT_72 230
#define OBJECT_71 229
#define OBJECT_70 228
#define OBJECT_69 227
#define OBJECT_68 226
#define OBJECT_67 225
#define OBJECT_66 224
#define OBJECT_65 223
#define OBJECT_64 222
#define OBJECT_63 221
#define OBJECT_62 220
#define OBJECT_61 219
#define OBJECT_60 218
#define OBJECT_59 217
#define OBJECT_58 216
#define OBJECT_57 215
#define OBJECT_56 214
#define OBJECT_55 213
#define OBJECT_54 212
#define OBJECT_53 211
#define OBJECT_52 210
#define OBJECT_51 209
#define OBJECT_50 208
#define OBJECT_49 207
#define OBJECT_48 206
#define OBJECT_47 205
#define OBJECT_46 204
#define OBJECT_45 203
#define OBJECT_44 202
#define OBJECT_43 201
#define OBJECT_42 200
#define OBJECT_41 199
#define OBJECT_40 198
#define OBJECT_39 197
#define OBJECT_38 196
#define OBJECT_37 195
#define OBJECT_36 194
#define OBJECT_35 193
#define OBJECT_34 192
#define OBJECT_33 191
#define OBJECT_32 190
#define OBJECT_31 189
#define OBJECT_30 188
#define OBJECT_29 187
#define OBJECT_28 186
#define OBJECT_27 185
#define OBJECT_26 184
#define OBJECT_25 183
#define OBJECT_24 182
#define OBJECT_23 181
#define OBJECT_22 180
#define OBJECT_21 179
#define OBJECT_20 178
#define OBJECT_19 177
#define OBJECT_18 176
#define OBJECT_17 175
#define OBJECT_16 174
#define OBJECT_15 173
#define OBJECT_14 172
#define OBJECT_13 171
#define OBJECT_12 170
#define OBJECT_11 169
#define OBJECT_10 168
#define OBJECT_9 167
#define OBJECT_8 166
#define OBJECT_7 165
#define OBJECT_6 164
#define OBJECT_5 163
#define OBJECT_4 162
#define OBJECT_3 161
#define OBJECT_2 160
#define OBJECT_1 159
#define OBJECT_0 158
#define EXECUTE_CACHE_53 133
#define EXECUTE_CACHE_47 135
#define EXECUTE_CACHE_39 137
#define EXECUTE_CACHE_36 139
#define EXECUTE_CACHE_31 141
#define EXECUTE_CACHE_20 143
#define EXECUTE_CACHE_16 145
#define EXECUTE_CACHE_12 147
#define EXECUTE_CACHE_8 149
#define FREE_REFERENCE_2 152
#define FREE_REFERENCE_1 153
#define FREE_REFERENCE_0 154
#define GLOBAL_EXECUTE_CACHE_5 156
#define FREE_REFERENCES_LABEL_0 132
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
shared_so_83a827aa6f07bb5c (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_56;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_15);
      goto label_57;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_19);
      goto label_58;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_23);
      goto label_59;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_26);
      goto label_60;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_11;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto continuation_13;

    case 19:
      current_block = (Rpc - LABEL_28);
      goto continuation_17;

    case 20:
      current_block = (Rpc - LABEL_29);
      goto continuation_16;

    case 21:
      current_block = (Rpc - LABEL_30);
      goto continuation_15;

    case 22:
      current_block = (Rpc - LABEL_32);
      goto continuation_18;

    case 23:
      current_block = (Rpc - LABEL_35);
      goto label_61;

    case 24:
      current_block = (Rpc - LABEL_33);
      goto continuation_14;

    case 25:
      current_block = (Rpc - LABEL_34);
      goto continuation_19;

    case 26:
      current_block = (Rpc - LABEL_37);
      goto continuation_20;

    case 27:
      current_block = (Rpc - LABEL_38);
      goto continuation_21;

    case 28:
      current_block = (Rpc - LABEL_40);
      goto continuation_22;

    case 29:
      current_block = (Rpc - LABEL_41);
      goto continuation_23;

    case 30:
      current_block = (Rpc - LABEL_42);
      goto continuation_24;

    case 31:
      current_block = (Rpc - LABEL_43);
      goto continuation_25;

    case 32:
      current_block = (Rpc - LABEL_44);
      goto continuation_26;

    case 33:
      current_block = (Rpc - LABEL_45);
      goto continuation_27;

    case 34:
      current_block = (Rpc - LABEL_46);
      goto continuation_28;

    case 35:
      current_block = (Rpc - LABEL_48);
      goto continuation_29;

    case 36:
      current_block = (Rpc - LABEL_49);
      goto continuation_30;

    case 37:
      current_block = (Rpc - LABEL_50);
      goto continuation_31;

    case 38:
      current_block = (Rpc - LABEL_52);
      goto label_62;

    case 39:
      current_block = (Rpc - LABEL_51);
      goto continuation_32;

    case 40:
      current_block = (Rpc - LABEL_55);
      goto label_63;

    case 41:
      current_block = (Rpc - LABEL_54);
      goto continuation_33;

    case 42:
      current_block = (Rpc - LABEL_56);
      goto continuation_34;

    case 43:
      current_block = (Rpc - LABEL_57);
      goto continuation_35;

    case 44:
      current_block = (Rpc - LABEL_58);
      goto continuation_36;

    case 45:
      current_block = (Rpc - LABEL_59);
      goto continuation_37;

    case 46:
      current_block = (Rpc - LABEL_60);
      goto continuation_38;

    case 47:
      current_block = (Rpc - LABEL_61);
      goto continuation_39;

    case 48:
      current_block = (Rpc - LABEL_62);
      goto continuation_40;

    case 49:
      current_block = (Rpc - LABEL_63);
      goto continuation_41;

    case 50:
      current_block = (Rpc - LABEL_64);
      goto continuation_42;

    case 51:
      current_block = (Rpc - LABEL_65);
      goto continuation_43;

    case 52:
      current_block = (Rpc - LABEL_66);
      goto continuation_44;

    case 53:
      current_block = (Rpc - LABEL_67);
      goto continuation_45;

    case 54:
      current_block = (Rpc - LABEL_68);
      goto continuation_46;

    case 55:
      current_block = (Rpc - LABEL_69);
      goto continuation_47;

    case 56:
      current_block = (Rpc - LABEL_70);
      goto continuation_48;

    case 57:
      current_block = (Rpc - LABEL_71);
      goto continuation_49;

    case 58:
      current_block = (Rpc - LABEL_72);
      goto continuation_50;

    case 59:
      current_block = (Rpc - LABEL_73);
      goto continuation_51;

    case 60:
      current_block = (Rpc - LABEL_74);
      goto continuation_52;

    case 61:
      current_block = (Rpc - LABEL_75);
      goto continuation_53;

    case 62:
      current_block = (Rpc - LABEL_76);
      goto label_66;

    case 63:
      current_block = (Rpc - LABEL_77);
      goto label_67;

    case 64:
      current_block = (Rpc - LABEL_78);
      goto expression_55;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_55)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_77])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_67)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_66)
  {
    static const short sections [] =
      {
	0,
	2,
	2,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	1,
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
	0,
	1,
	0,
	1,
	0,
	1,
	0,
	0,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	3,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	3,
	3,
	2,
	1,
	2,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	2,
	2,
	0,
	0,
	0,
	1,
	2,
	2,
	3,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	1,
	1,
	1,
	2,
	1,
	2,
	1,
	3,
	2,
	2,
	2,
	2,
	1,
	2,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 126)
      goto label_65;
    blocks = (current_block [OBJECT_96]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_76])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_65)
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
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_83;
  Wrd12 = Wrd16;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_81;
  Wrd11 = Wrd15;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_79;
  Wrd12 = Wrd16;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_77;
  Wrd12 = Wrd16;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_75;
  Wrd12 = Wrd16;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_73;
  Wrd8 = Wrd12;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_71;
  Wrd9 = Wrd13;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_69;
  Wrd9 = Wrd13;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd5.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_95]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55])), (Wrd10.pObj));

DEFLABEL (label_63)
  (Wrd9.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52])), (Wrd10.pObj));

DEFLABEL (label_62)
  (Wrd9.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd9.pObj));

DEFLABEL (label_61)
  (Wrd8.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd13.pObj));

DEFLABEL (label_60)
  (Wrd12.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd13.pObj));

DEFLABEL (label_59)
  (Wrd12.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd13.pObj));

DEFLABEL (label_58)
  (Wrd12.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd12.pObj));

DEFLABEL (label_57)
  (Wrd11.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd13.pObj));

DEFLABEL (label_56)
  (Wrd12.Obj) = Rvl;
  goto label_82;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_shared_so_83a827aa6f07bb5c [126] =
  {
    { "shared_so_code_1", 45, shared_so_code_1 },
    { "shared_so_code_2", 10, shared_so_code_2 },
    { "shared_so_code_3", 26, shared_so_code_3 },
    { "shared_so_code_4", 1, shared_so_code_4 },
    { "shared_so_code_5", 3, shared_so_code_5 },
    { "shared_so_code_6", 1, shared_so_code_6 },
    { "shared_so_code_7", 5, shared_so_code_7 },
    { "shared_so_code_8", 1, shared_so_code_8 },
    { "shared_so_code_9", 13, shared_so_code_9 },
    { "shared_so_code_10", 2, shared_so_code_10 },
    { "shared_so_code_11", 5, shared_so_code_11 },
    { "shared_so_code_12", 2, shared_so_code_12 },
    { "shared_so_code_13", 3, shared_so_code_13 },
    { "shared_so_code_14", 6, shared_so_code_14 },
    { "shared_so_code_15", 3, shared_so_code_15 },
    { "shared_so_code_16", 6, shared_so_code_16 },
    { "shared_so_code_17", 7, shared_so_code_17 },
    { "shared_so_code_18", 2, shared_so_code_18 },
    { "shared_so_code_19", 3, shared_so_code_19 },
    { "shared_so_code_20", 2, shared_so_code_20 },
    { "shared_so_code_21", 5, shared_so_code_21 },
    { "shared_so_code_22", 3, shared_so_code_22 },
    { "shared_so_code_23", 4, shared_so_code_23 },
    { "shared_so_code_24", 2, shared_so_code_24 },
    { "shared_so_code_25", 4, shared_so_code_25 },
    { "shared_so_code_26", 2, shared_so_code_26 },
    { "shared_so_code_27", 3, shared_so_code_27 },
    { "shared_so_code_28", 4, shared_so_code_28 },
    { "shared_so_code_29", 3, shared_so_code_29 },
    { "shared_so_code_30", 1, shared_so_code_30 },
    { "shared_so_code_31", 1, shared_so_code_31 },
    { "shared_so_code_32", 1, shared_so_code_32 },
    { "shared_so_code_33", 1, shared_so_code_33 },
    { "shared_so_code_34", 1, shared_so_code_34 },
    { "shared_so_code_35", 13, shared_so_code_35 },
    { "shared_so_code_36", 5, shared_so_code_36 },
    { "shared_so_code_37", 7, shared_so_code_37 },
    { "shared_so_code_38", 4, shared_so_code_38 },
    { "shared_so_code_39", 1, shared_so_code_39 },
    { "shared_so_code_40", 1, shared_so_code_40 },
    { "shared_so_code_41", 2, shared_so_code_41 },
    { "shared_so_code_42", 32, shared_so_code_42 },
    { "shared_so_code_43", 15, shared_so_code_43 },
    { "shared_so_code_44", 3, shared_so_code_44 },
    { "shared_so_code_45", 24, shared_so_code_45 },
    { "shared_so_code_46", 53, shared_so_code_46 },
    { "shared_so_code_47", 16, shared_so_code_47 },
    { "shared_so_code_48", 12, shared_so_code_48 },
    { "shared_so_code_49", 17, shared_so_code_49 },
    { "shared_so_code_50", 43, shared_so_code_50 },
    { "shared_so_code_51", 14, shared_so_code_51 },
    { "shared_so_code_52", 8, shared_so_code_52 },
    { "shared_so_code_53", 20, shared_so_code_53 },
    { "shared_so_code_54", 4, shared_so_code_54 },
    { "shared_so_code_55", 3, shared_so_code_55 },
    { "shared_so_code_56", 5, shared_so_code_56 },
    { "shared_so_code_57", 40, shared_so_code_57 },
    { "shared_so_code_58", 2, shared_so_code_58 },
    { "shared_so_code_59", 15, shared_so_code_59 },
    { "shared_so_code_60", 5, shared_so_code_60 },
    { "shared_so_code_61", 5, shared_so_code_61 },
    { "shared_so_code_62", 1, shared_so_code_62 },
    { "shared_so_code_63", 2, shared_so_code_63 },
    { "shared_so_code_64", 2, shared_so_code_64 },
    { "shared_so_code_65", 2, shared_so_code_65 },
    { "shared_so_code_66", 2, shared_so_code_66 },
    { "shared_so_code_67", 3, shared_so_code_67 },
    { "shared_so_code_68", 12, shared_so_code_68 },
    { "shared_so_code_69", 8, shared_so_code_69 },
    { "shared_so_code_70", 3, shared_so_code_70 },
    { "shared_so_code_71", 5, shared_so_code_71 },
    { "shared_so_code_72", 5, shared_so_code_72 },
    { "shared_so_code_73", 4, shared_so_code_73 },
    { "shared_so_code_74", 15, shared_so_code_74 },
    { "shared_so_code_75", 17, shared_so_code_75 },
    { "shared_so_code_76", 1, shared_so_code_76 },
    { "shared_so_code_77", 13, shared_so_code_77 },
    { "shared_so_code_78", 8, shared_so_code_78 },
    { "shared_so_code_79", 9, shared_so_code_79 },
    { "shared_so_code_80", 9, shared_so_code_80 },
    { "shared_so_code_81", 7, shared_so_code_81 },
    { "shared_so_code_82", 15, shared_so_code_82 },
    { "shared_so_code_83", 17, shared_so_code_83 },
    { "shared_so_code_84", 44, shared_so_code_84 },
    { "shared_so_code_85", 5, shared_so_code_85 },
    { "shared_so_code_86", 6, shared_so_code_86 },
    { "shared_so_code_87", 2, shared_so_code_87 },
    { "shared_so_code_88", 3, shared_so_code_88 },
    { "shared_so_code_89", 4, shared_so_code_89 },
    { "shared_so_code_90", 6, shared_so_code_90 },
    { "shared_so_code_91", 5, shared_so_code_91 },
    { "shared_so_code_92", 7, shared_so_code_92 },
    { "shared_so_code_93", 8, shared_so_code_93 },
    { "shared_so_code_94", 6, shared_so_code_94 },
    { "shared_so_code_95", 6, shared_so_code_95 },
    { "shared_so_code_96", 4, shared_so_code_96 },
    { "shared_so_code_97", 2, shared_so_code_97 },
    { "shared_so_code_98", 12, shared_so_code_98 },
    { "shared_so_code_99", 18, shared_so_code_99 },
    { "shared_so_code_100", 11, shared_so_code_100 },
    { "shared_so_code_101", 20, shared_so_code_101 },
    { "shared_so_code_102", 15, shared_so_code_102 },
    { "shared_so_code_103", 23, shared_so_code_103 },
    { "shared_so_code_104", 14, shared_so_code_104 },
    { "shared_so_code_105", 25, shared_so_code_105 },
    { "shared_so_code_106", 10, shared_so_code_106 },
    { "shared_so_code_107", 12, shared_so_code_107 },
    { "shared_so_code_108", 13, shared_so_code_108 },
    { "shared_so_code_109", 11, shared_so_code_109 },
    { "shared_so_code_110", 13, shared_so_code_110 },
    { "shared_so_code_111", 2, shared_so_code_111 },
    { "shared_so_code_112", 7, shared_so_code_112 },
    { "shared_so_code_113", 8, shared_so_code_113 },
    { "shared_so_code_114", 15, shared_so_code_114 },
    { "shared_so_code_115", 9, shared_so_code_115 },
    { "shared_so_code_116", 4, shared_so_code_116 },
    { "shared_so_code_117", 1, shared_so_code_117 },
    { "shared_so_code_118", 1, shared_so_code_118 },
    { "shared_so_code_119", 1, shared_so_code_119 },
    { "shared_so_code_120", 1, shared_so_code_120 },
    { "shared_so_code_121", 5, shared_so_code_121 },
    { "shared_so_code_122", 3, shared_so_code_122 },
    { "shared_so_code_123", 3, shared_so_code_123 },
    { "shared_so_code_124", 12, shared_so_code_124 },
    { "shared_so_code_125", 12, shared_so_code_125 },
    { "shared_so_code_126", 10, shared_so_code_126 }
  };

int
decl_shared_so_83a827aa6f07bb5c (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_shared_so_83a827aa6f07bb5c);
  return (0);
}

DECLARE_COMPILED_CODE ("shared.so", 65, decl_shared_so_83a827aa6f07bb5c, shared_so_83a827aa6f07bb5c)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_shared_so_data_83a827aa6f07bb5c [17667] =
  "\x82\x02\xe0\x01\xc4\x29\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\xb9"
  "\x0d\xba\xc1\xbb\x0d\xbc\x0d\x1d\x0d\x08\x0d\xbd\x0d\xbe\x0d\xbf"
  "\x0d\x1c\x25\xb5\xb6\xb7\x1b\x0d\x1c\x24\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x82\x88\x0c\x0c\x0c\x0c\x0d\x1c\x24\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x08\xb4\x0d\x1c\xb3"
  "\xb2\xb1\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\x80\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x85\x88\xb1\xb3\x81\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x82\x28\x1b\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x1d\xb3\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x28\x0d\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc2\x1c\xb1\xb3\x06\x07\x85\xc2\x1c\x02\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb7\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x0c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x24\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x0d\x1c\x1b\x25\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x0d\x1c\x1b\x25\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb2\x08\x0d\x1c\x0d\x1c\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb2\x08\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb2\x08\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x08\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x0d\x1c\x08\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x1c\x24\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08"
  "\x1b\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x08\x1b\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x08\xb6"
  "\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x1b"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x1b\x23\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x81\x82\xb5\x25\x0d"
  "\x1c\xb5\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb2\x08\xb1\xc2\x1c\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb2\x08\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88"
  "\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x07\xb2\xb1\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x1c\x08\x88\x0d\x1c"
  "\xb4\x1b\xb3\xb2\xb1\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb1\xb3\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x81\xb1\xb3\x08\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\xb3\x06\x07\x85\x1b\x02\xb4\x1b\xb2\xb1\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\xb1\x08\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb2\x08\x07\xb1\xb3\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\xb4\x08\x1b\xb2\xb1\xb3\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\xb1\x08\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\xb3\xb1\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x88\x0d\x1c\x1b"
  "\x08\x89\x1b\x1b\x08\x89\x0d\x1c\x0d\x1c\x08\x8a\x1b\x08\x8a\xb1"
  "\xb3\x06\x07\x85\x1b\x02\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x07\xb4\xb1\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x1b\x1d\xb4\xb3\x1b\xb2\xb1\x80\x1b\x24\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\xb1\xb3\x0d\x1c\x0d\x1c\x24\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x1b\x25\x1b\x24\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1d\x1b\x25\x1b\x24\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x08\xb3\xb1\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\xb1\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb3\xb1\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb3\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x08"
  "\xb1\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\xb3\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x08\xb1\xb3\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb2\x08\xb3\xb1\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x08\xb1\xb3\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x08\xb1\xb3\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\xb1\xb3\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\xb1\xb3\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x08\xb1\xb3"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x81\x08\xb1\xb3\x28\x0d"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x08\xb1\xb3\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x08\x1b\xb3\xb2\xb1\x0d\x1c\x1b\x24\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x1b\x25\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x1b\xb1\xb3\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb3\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\xb1\xb3\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\xb3\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x08\xb1\xb3\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\xb3\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\xb1"
  "\xb3\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb3\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x08\xb1\xb3\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\xb1\xb3"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\xb1\xb3\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb3\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb3\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x08\xb1\xb3\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\xb3\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x08\xb1\xb3\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x89\x1b\x1b\x1b\x08"
  "\x8b\xb1\xb3\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x1b\x08\xb1\xb3\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x08\x89\x1b\x1b\x1b\x08\x8b\xb1\xb3\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x08\xb1\xb3"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\xb3\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1b\x08\xb1\xb3\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\xb3\xb1\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x08\xb3\xb1\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\xb3\xb1\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb3\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb2\x08\xb1\xb3\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x08\xb1\xb3\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4"
  "\x06\x07\x85\x1b\x02\xb1\xb3\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x1b\xb1"
  "\xb3\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08"
  "\xb1\xb3\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x08\x88\x28\x0d\x1c\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1"
  "\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb3\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb3"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\xb3\xb1\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x1d\x0d\x0d\xbb\x24\x28"
  "\x0d\xb9\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\xb3\x24\x28\xb1\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9d\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x9d\x1b\x1b\x08\x89\x0d\x1c\x1b\x08\x8a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x1b\x08\x89\x0d\x1c\x1b\x08\x8a\x1b\x2a\x1b\x1b"
  "\x08\x89\x1b\x08\x89\x1b\x2a\x1b\x0d\x1c\x08\x89\x1b\x1b\x1b\x08"
  "\x89\x1b\x1b\x08\x8a\x08\x8a\x1b\x2a\x1b\x2a\x1b\x1b\x08\x89\x1b"
  "\x1b\x1b\x08\x89\x1b\x08\x89\x08\x8a\x1b\x2a\x1b\x2a\x1b\xb2\x08"
  "\x89\x1b\x08\x88\x1b\x1b\x08\x89\x1b\x1b\x08\x8a\x08\x8a\x1b\x08"
  "\x89\x1b\x2a\x1b\x2a\x1b\xb2\x08\x89\x1b\x08\x88\x1b\x1b\x08\x89"
  "\x1b\x1b\x1b\x08\x8b\x08\x8a\x1b\x08\x89\x1b\x2a\x1b\x2a\x1b\x1b"
  "\x08\x89\x1b\x1b\x1b\x08\x89\x1b\x1b\x08\x8a\x1b\x08\x8b\x1b\x2a"
  "\x1b\x2a\x1b\x1b\x08\x89\x1b\x1b\x1b\x1b\x08\x89\x1b\x1b\x08\x8a"
  "\x08\x8b\x1b\x2a\x1b\x2a\x1b\x1b\x08\x89\x1b\x1b\x1b\x08\x89\x1b"
  "\x1b\x08\x8a\x1b\x08\x8b\x1b\x2a\x1b\x2a\x1b\x1b\x08\x89\x1b\x1b"
  "\x1b\x1b\x08\x89\x1b\x1b\x1b\x08\x8b\x08\x8b\x1b\x2a\x1b\x2a\x1b"
  "\x1b\x08\x89\x1b\x1b\x1b\x08\x89\x1b\x1b\x1b\x08\x8b\x1b\x08\x8b"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x1b\x08\x89\x1b\x1b\x1b\x1b"
  "\x08\x89\x08\x8b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x1b\x08\x89\x1b\x06"
  "\x1b\x08\x8b\x1b\x2a\x1b\x2a\x1b\x1b\x08\x89\x1b\x1b\x06\x08\x8b"
  "\x1b\x2a\x1b\x2a\x1b\x1b\x08\x89\x1b\x06\x07\x08\x8b\x1b\x2a\x1b"
  "\x1b\x08\x89\x1b\x07\x06\x08\x8b\x1b\x2a\x1b\x1b\x0d\x1c\x1b\x9b"
  "\x1b\x2a\x08\x1b\x2a\x1b\x2a\x9b\x1b\x1b\x08\x89\x1b\x1b\x1b\x1b"
  "\x08\x89\x08\x89\x1b\x08\x8b\x1b\x2a\x1b\xb2\x08\x89\x1b\x1b\x08"
  "\x89\x1b\x08\x8a\x1b\x1b\x08\x8a\x1b\x2a\x1b\xb2\x08\x89\x1b\x1b"
  "\x08\x89\x1b\x08\x8a\x1b\x2a\x1b\x1b\x08\x89\x1b\x1b\x08\x8a\x1b"
  "\x2a\x1b\x1b\x08\x89\x1b\x1b\x08\x8a\x1b\x2a\x1b\x1b\x08\x89\x1b"
  "\x1b\x08\x8a\x1b\x2a\x1b\x1b\x08\x89\x1b\x1b\x1b\x08\x8b\x1b\x2a"
  "\x1b\xb4\x08\x89\x1b\x08\x89\x1b\x2a\x1b\xb2\x08\x89\x1b\x08\x88"
  "\x1b\x08\x8a\x1b\x1b\x08\x89\x1b\x08\x89\x08\x89\x1b\x2a\x1b\x1b"
  "\x08\x89\x1b\x1b\x08\x89\x1b\x1b\x08\x8a\x1b\x08\x8a\x1b\x2a\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1c\x1b\x0d"
  "\x1c\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x0d\xb5\x1b\x1b\x1b\x1b\x0d\x1b\x1b"
  "\x1b\x1b\xb4\x0d\x0d\x1b\x0d\x1b\x0d\x0d\x1b\x17\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x08\x1b\x2a\x08\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x0c\x0c\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x0d\x1b"
  "\x0d\x1b\x0d\x0d\x0d\x0d\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x2a\x1b"
  "\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b\xc3\x0d\x1c\x1b\x1b\x1b\x08"
  "\x8a\x0d\x0d\x1b\x1b\x0d\x0d\x0d\x1b\x1b\x0d\xb3\x1b\xb7\xb6\x1b"
  "\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x06\x06\x1e\x1e\x1e\x17\x28\x0d\x26\x1b\x1b"
  "\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x0b\x73\x68\x61\x72\x65"
  "\x64\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x63\x61\x72\x07"
  "\x6c\x61\x6d\x62\x64\x61\x04\x63\x64\x72\x08\x70\x72\x6f\x74\x65"
  "\x63\x74\x09\x62\x69\x6e\x64\x69\x6e\x67\x73\x02\x02\x62\x0e\x2a"
  "\x69\x64\x2d\x63\x6f\x75\x6e\x74\x65\x72\x73\x2a\x0e\x2a\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2a\x16\x2a\x63\x6c\x6f\x73"
  "\x69\x6e\x67\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2a"
  "\x0e\x2a\x62\x75\x66\x66\x65\x72\x2d\x6e\x61\x6d\x65\x2a\x09\x05"
  "\x09\x04\x63\x64\x72\x0a\x06\x03\x1e\x63\x61\x70\x74\x75\x72\x65"
  "\x2d\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69\x72"
  "\x6f\x6e\x6d\x65\x6e\x74\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d"
  "\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x0b\x03\x1a\x6d\x61\x6b"
  "\x65\x2d\x73\x79\x6e\x74\x68\x65\x74\x69\x63\x2d\x69\x64\x65\x6e"
  "\x74\x69\x66\x69\x65\x72\x04\x11\x63\x6f\x75\x6e\x74\x2d\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x73\x0c\x04\x04\x6d\x61\x70\x0d\x04"
  "\x07\x61\x70\x70\x65\x6e\x64\x0e\x04\x0f\x6d\x61\x79\x62\x65\x2d"
  "\x6d\x61\x6b\x65\x2d\x6c\x65\x74\x0f\x03\x1a\x73\x74\x72\x69\x70"
  "\x2d\x70\x72\x6f\x74\x65\x63\x74\x69\x6f\x6e\x2d\x77\x72\x61\x70"
  "\x70\x65\x72\x73\x10\x03\x0f\x72\x75\x6e\x2d\x6f\x70\x74\x69\x6d"
  "\x69\x7a\x65\x72\x73\x11\x0a\x6e\x5c\x81\x8f\x02\x6d\x5a\x81\x93"
  "\x02\x6c\x58\x81\x91\x02\x6b\x56\x81\x8d\x02\x6a\x54\x81\x8b\x02"
  "\x69\x52\x81\x89\x02\x68\x50\x81\x87\x02\x67\x4e\x81\x85\x02\x66"
  "\x4c\x81\x85\x02\x65\x4a\x81\x83\x02\x64\x48\x83\x04\x63\x46\x81"
  "\x8d\x02\x62\x44\x81\x85\x02\x61\x42\x81\x83\x02\x60\x40\x83\x04"
  "\x5f\x3e\x81\x91\x02\x5e\x3c\x81\x8f\x02\x5d\x3a\x81\x83\x02\x5c"
  "\x38\x81\x8f\x02\x5b\x36\x81\x8f\x02\x5a\x34\x81\x8f\x02\x59\x32"
  "\x81\x8f\x02\x58\x30\x81\x8b\x02\x57\x2e\x81\x83\x02\x56\x2c\x81"
  "\x85\x02\x55\x2a\x81\x83\x02\x54\x28\x81\x83\x02\x53\x26\x81\x85"
  "\x02\x52\x24\x81\x83\x02\x51\x22\x81\x8b\x02\x50\x20\x81\x89\x02"
  "\x4f\x1e\x81\x83\x02\x4e\x1c\x81\x83\x02\x4d\x1a\x81\x85\x02\x4c"
  "\x18\x81\x83\x02\x4b\x16\x81\x83\x02\x4a\x14\x81\x85\x02\x49\x12"
  "\x81\x83\x02\x48\x10\x81\x83\x02\x47\x0e\x81\x85\x02\x46\x0c\x81"
  "\x83\x02\x45\x0a\x81\x83\x02\x44\x08\x81\x83\x02\x43\x06\x81\x85"
  "\x02\x42\x04\x86\x0a\x5b\x84\x01\x12\x02\x13\x61\x66\x74\x65\x72"
  "\x20\x73\x75\x62\x73\x74\x69\x74\x75\x74\x69\x6f\x6e\x1b\x61\x66"
  "\x74\x65\x72\x20\x70\x6f\x69\x6e\x74\x65\x72\x20\x6f\x70\x74\x69"
  "\x6d\x69\x7a\x61\x74\x69\x6f\x6e\x18\x61\x66\x74\x65\x72\x20\x61"
  "\x6c\x6c\x20\x6f\x70\x74\x69\x6d\x69\x7a\x61\x74\x69\x6f\x6e\x73"
  "\x14\x62\x65\x66\x6f\x72\x65\x20\x6f\x70\x74\x69\x6d\x69\x7a\x61"
  "\x74\x69\x6f\x6e\x1a\x64\x65\x62\x75\x67\x3a\x64\x69\x73\x61\x62"
  "\x6c\x65\x2d\x6f\x70\x74\x69\x6d\x69\x7a\x65\x72\x73\x3f\x13\x02"
  "\x04\x13\x74\x72\x61\x63\x65\x2d\x6f\x70\x74\x69\x6d\x69\x7a\x65"
  "\x72\x2d\x74\x6c\x14\x04\x07\x65\x71\x75\x61\x6c\x3f\x15\x03\x12"
  "\x70\x65\x65\x70\x68\x6f\x6c\x65\x2d\x6f\x70\x74\x69\x6d\x69\x7a"
  "\x65\x16\x03\x17\x6f\x70\x74\x69\x6d\x69\x7a\x65\x2d\x70\x6f\x69"
  "\x6e\x74\x65\x72\x2d\x75\x73\x61\x67\x65\x17\x03\x19\x6f\x70\x74"
  "\x69\x6d\x69\x7a\x65\x2d\x62\x79\x2d\x73\x75\x62\x73\x74\x69\x74"
  "\x75\x74\x69\x6f\x6e\x18\x03\x11\x07\x78\x16\x81\x85\x02\x77\x14"
  "\x81\x8f\x02\x76\x12\x81\x8d\x02\x75\x10\x81\x8b\x02\x74\x0e\x81"
  "\x89\x02\x73\x0c\x81\x87\x02\x72\x0a\x81\x85\x02\x71\x08\x81\x83"
  "\x02\x70\x06\x81\x83\x02\x6f\x04\x83\x04\x15\x2b\x19\x02\x04\x6c"
  "\x65\x74\x1a\x10\x02\x03\x10\x04\x0d\x03\x92\x01\x36\x81\x85\x02"
  "\x91\x01\x34\x81\x83\x02\x90\x01\x32\x81\x85\x02\x8f\x01\x30\x81"
  "\x85\x02\x8e\x01\x2e\x83\x04\x8d\x01\x2c\x81\x87\x02\x8c\x01\x2a"
  "\x81\x87\x02\x8b\x01\x28\x81\x87\x02\x8a\x01\x26\x81\x87\x02\x89"
  "\x01\x24\x81\x87\x02\x88\x01\x22\x81\x85\x02\x87\x01\x20\x81\x89"
  "\x02\x86\x01\x1e\x81\x89\x02\x85\x01\x1c\x81\x89\x02\x84\x01\x1a"
  "\x81\x85\x02\x83\x01\x18\x81\x85\x02\x82\x01\x16\x81\x85\x02\x81"
  "\x01\x14\x81\x87\x02\x80\x01\x12\x81\x87\x02\x7f\x10\x81\x87\x02"
  "\x7e\x0e\x81\x87\x02\x7d\x0c\x81\x87\x02\x7c\x0a\x81\x87\x02\x7b"
  "\x08\x81\x87\x02\x7a\x06\x81\x83\x02\x79\x04\x83\x04\x35\x45\x1b"
  "\x02\x04\x0d\x63\x68\x65\x63\x6b\x2d\x6e\x2d\x61\x72\x67\x73\x1c"
  "\x02\x93\x01\x04\x83\x04\x03\x0a\x1d\x02\x05\x1c\x02\x96\x01\x08"
  "\x81\x85\x02\x95\x01\x06\x81\x85\x02\x94\x01\x04\x84\x04\x07\x10"
  "\x1e\x02\x05\x1c\x02\x97\x01\x04\x84\x04\x03\x0a\x1f\x02\x08\x02"
  "\x08\x03\x0e\x6c\x69\x73\x74\x3f\x2d\x3e\x6c\x65\x6e\x67\x74\x68"
  "\x03\x1c\x65\x72\x72\x6f\x72\x3a\x69\x6c\x6c\x2d\x66\x6f\x72\x6d"
  "\x65\x64\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x20\x04\x05"
  "\x65\x71\x76\x3f\x04\x9c\x01\x0c\x81\x8b\x02\x9b\x01\x0a\x81\x87"
  "\x02\x9a\x01\x08\x81\x87\x02\x99\x01\x06\x81\x8d\x02\x98\x01\x04"
  "\x85\x06\x0b\x18\x21\x02\x09\x17\x49\x6c\x6c\x2d\x66\x6f\x72\x6d"
  "\x65\x64\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3a\x04\x06"
  "\x65\x72\x72\x6f\x72\x02\x9d\x01\x04\x83\x04\x03\x0a\x22\x02\x0a"
  "\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x23\x0d\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x74\x79\x70\x65\x3f\x24\x1e\x04\x15\x02\x1b\x67\x65\x6e"
  "\x65\x72\x61\x74\x65\x2d\x75\x6e\x69\x6e\x74\x65\x72\x6e\x65\x64"
  "\x2d\x73\x79\x6d\x62\x6f\x6c\x03\xaa\x01\x1c\x81\x87\x02\xa9\x01"
  "\x1a\x81\x87\x02\xa8\x01\x18\x81\x87\x02\xa7\x01\x16\x81\x87\x02"
  "\xa6\x01\x14\x81\x87\x02\xa5\x01\x12\x81\x87\x02\xa4\x01\x10\x81"
  "\x89\x02\xa3\x01\x0e\x81\x89\x02\xa2\x01\x0c\x81\x87\x02\xa1\x01"
  "\x0a\x81\x85\x02\xa0\x01\x08\x81\x83\x02\x9f\x01\x06\x84\x06\x9e"
  "\x01\x04\x81\x85\x02\x1b\x2b\x25\x02\x0b\x02\x04\x0d\x63\x6c\x6f"
  "\x73\x65\x2d\x73\x79\x6e\x74\x61\x78\x02\xac\x01\x06\x81\x85\x02"
  "\xab\x01\x04\x83\x04\x05\x0d\x26\x02\x0c\x13\x6d\x61\x6b\x65\x2d"
  "\x70\x61\x72\x73\x65\x72\x2d\x6d\x61\x63\x72\x6f\x73\x27\x17\x2a"
  "\x67\x6c\x6f\x62\x61\x6c\x2d\x70\x61\x72\x73\x65\x72\x2d\x6d\x61"
  "\x63\x72\x6f\x73\x2a\x28\x02\x02\x1a\x6d\x61\x6b\x65\x2d\x73\x74"
  "\x72\x6f\x6e\x67\x2d\x65\x71\x2d\x68\x61\x73\x68\x2d\x74\x61\x62"
  "\x6c\x65\x29\x04\x18\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x70"
  "\x61\x72\x73\x65\x72\x2d\x6d\x61\x63\x72\x6f\x73\x2a\x05\x14\x25"
  "\x6d\x61\x6b\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x6d\x61\x63\x72"
  "\x6f\x73\x2b\x04\xb1\x01\x0c\x81\x87\x02\xb0\x01\x0a\x81\x87\x02"
  "\xaf\x01\x08\x81\x83\x02\xae\x01\x06\x83\x04\xad\x01\x04\x81\x83"
  "\x02\x0b\x18\x2c\x02\x0d\x02\x0e\x70\x61\x72\x73\x65\x72\x20\x6d"
  "\x61\x63\x72\x6f\x73\x03\x0f\x70\x61\x72\x73\x65\x72\x2d\x6d\x61"
  "\x63\x72\x6f\x73\x3f\x2d\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72"
  "\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e"
  "\x74\x03\xb3\x01\x06\x81\x85\x02\xb2\x01\x04\x84\x06\x05\x0f\x2e"
  "\x02\x0e\x10\x2a\x70\x61\x72\x73\x65\x72\x2d\x6d\x61\x63\x72\x6f"
  "\x73\x2a\x2f\x02\x03\x15\x6d\x61\x74\x63\x68\x65\x72\x2d\x6d\x61"
  "\x63\x72\x6f\x73\x2d\x74\x61\x62\x6c\x65\x30\x05\x10\x68\x61\x73"
  "\x68\x2d\x74\x61\x62\x6c\x65\x2f\x70\x75\x74\x21\x31\x03\xb6\x01"
  "\x08\x81\x85\x02\xb5\x01\x06\x81\x87\x02\xb4\x01\x04\x84\x06\x07"
  "\x11\x32\x02\x0f\x2f\x02\x03\x30\x03\x0e\x70\x61\x72\x65\x6e\x74"
  "\x2d\x6d\x61\x63\x72\x6f\x73\x33\x05\x0f\x68\x61\x73\x68\x2d\x74"
  "\x61\x62\x6c\x65\x2f\x67\x65\x74\x34\x04\xbc\x01\x0e\x81\x87\x02"
  "\xbb\x01\x0c\x81\x8b\x02\xba\x01\x0a\x81\x85\x02\xb9\x01\x08\x81"
  "\x85\x02\xb8\x01\x06\x81\x83\x02\xb7\x01\x04\x83\x04\x0d\x19\x35"
  "\x02\x10\x2f\x02\x03\x14\x70\x61\x72\x73\x65\x72\x2d\x6d\x61\x63"
  "\x72\x6f\x73\x2d\x74\x61\x62\x6c\x65\x36\x05\x31\x03\xbf\x01\x08"
  "\x81\x85\x02\xbe\x01\x06\x81\x87\x02\xbd\x01\x04\x84\x06\x07\x11"
  "\x31\x02\x11\x2f\x02\x03\x36\x03\x33\x05\x34\x04\xc5\x01\x0e\x81"
  "\x87\x02\xc4\x01\x0c\x81\x8b\x02\xc3\x01\x0a\x81\x85\x02\xc2\x01"
  "\x08\x81\x85\x02\xc1\x01\x06\x81\x83\x02\xc0\x01\x04\x83\x04\x0d"
  "\x19\x34\x02\x12\x02\x1b\x77\x69\x74\x68\x2d\x63\x75\x72\x72\x65"
  "\x6e\x74\x2d\x70\x61\x72\x73\x65\x72\x2d\x6d\x61\x63\x72\x6f\x73"
  "\x37\x2f\x02\x2f\x02\x04\x2a\x05\x0b\x03\xcc\x01\x10\x81\x83\x02"
  "\xcb\x01\x0e\x81\x85\x02\xca\x01\x0c\x81\x83\x02\xc9\x01\x0a\x81"
  "\x83\x02\xc8\x01\x08\x81\x83\x02\xc7\x01\x06\x81\x85\x02\xc6\x01"
  "\x04\x84\x06\x0f\x1d\x0b\x02\x13\x2f\x02\xce\x01\x06\x81\x81\x02"
  "\xcd\x01\x04\x82\x02\x05\x0a\x38\x02\x14\x02\x1b\x73\x65\x74\x2d"
  "\x63\x75\x72\x72\x65\x6e\x74\x2d\x70\x61\x72\x73\x65\x72\x2d\x6d"
  "\x61\x63\x72\x6f\x73\x21\x39\x2f\x02\x04\x2a\x02\xd1\x01\x08\x81"
  "\x83\x02\xd0\x01\x06\x81\x83\x02\xcf\x01\x04\x83\x04\x07\x11\x3a"
  "\x02\x15\x28\x02\xd3\x01\x06\x81\x81\x02\xd2\x01\x04\x82\x02\x05"
  "\x0a\x3b\x02\x16\x05\x63\x61\x64\x72\x3c\x04\x63\x61\x72\x3d\x03"
  "\x04\x0d\x02\xd8\x01\x0c\x81\x87\x02\xd7\x01\x0a\x81\x8b\x02\xd6"
  "\x01\x08\x81\x85\x02\xd5\x01\x06\x81\x89\x02\xd4\x01\x04\x84\x06"
  "\x0b\x16\x3e\x02\x17\x02\x16\x6d\x61\x6b\x65\x2d\x76\x61\x6c\x75"
  "\x65\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x3f\x02\xdb\x01"
  "\x08\x81\x87\x02\xda\x01\x06\x81\x85\x02\xd9\x01\x04\x84\x06\x07"
  "\x0f\x40\x02\x18\x02\x0e\x66\x65\x74\x63\x68\x2d\x70\x6f\x69\x6e"
  "\x74\x65\x72\x41\x02\x14\x6d\x61\x6b\x65\x2d\x70\x74\x72\x2d\x69"
  "\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x42\x03\xdf\x01\x0a\x81\x89"
  "\x02\xde\x01\x08\x81\x87\x02\xdd\x01\x06\x81\x85\x02\xdc\x01\x04"
  "\x84\x06\x09\x13\x43\x02\x19\x1a\x67\x65\x74\x2d\x70\x61\x72\x73"
  "\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x70\x6f\x69\x6e\x74\x65"
  "\x72\x44\x09\x02\xe1\x01\x06\x81\x81\x02\xe0\x01\x04\x82\x02\x05"
  "\x0c\x45\x02\x1a\x06\x62\x65\x67\x69\x6e\x46\x1b\x73\x65\x74\x2d"
  "\x70\x61\x72\x73\x65\x72\x2d\x62\x75\x66\x66\x65\x72\x2d\x70\x6f"
  "\x69\x6e\x74\x65\x72\x21\x47\x09\x02\x03\x0f\x6d\x61\x6b\x65\x2d"
  "\x6b\x66\x2d\x6c\x61\x6d\x62\x64\x61\x48\x02\xe5\x01\x0a\x81\x85"
  "\x02\xe4\x01\x08\x81\x83\x02\xe3\x01\x06\x81\x83\x02\xe2\x01\x04"
  "\x84\x06\x09\x14\x49\x02\x1b\x13\x6d\x61\x6b\x65\x2d\x6b\x66\x2d"
  "\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x4a\x02\x05\x14\x6d\x61"
  "\x6b\x65\x2d\x64\x65\x6c\x61\x79\x65\x64\x2d\x6c\x61\x6d\x62\x64"
  "\x61\x4b\x02\xe7\x01\x06\x81\x85\x02\xe6\x01\x04\x83\x04\x05\x0e"
  "\x4c\x02\x1c\x4a\x13\x6d\x61\x6b\x65\x2d\x6b\x73\x2d\x69\x64\x65"
  "\x6e\x74\x69\x66\x69\x65\x72\x4d\x03\x05\x4b\x02\xea\x01\x08\x81"
  "\x85\x02\xe9\x01\x06\x81\x83\x02\xe8\x01\x04\x83\x04\x07\x11\x4e"
  "\x02\x1d\x4a\x3f\x4d\x04\x05\x4b\x02\xee\x01\x0a\x81\x85\x02\xed"
  "\x01\x08\x81\x85\x02\xec\x01\x06\x81\x83\x02\xeb\x01\x04\x83\x04"
  "\x09\x14\x4f\x02\x1e\x02\x05\x17\x6d\x61\x6b\x65\x2d\x73\x79\x6e"
  "\x74\x61\x63\x74\x69\x63\x2d\x63\x6c\x6f\x73\x75\x72\x65\x02\xf1"
  "\x01\x08\x81\x85\x02\xf0\x01\x06\x81\x8b\x02\xef\x01\x04\x84\x06"
  "\x07\x11\x50\x02\x1f\x03\x6b\x66\x03\x14\x67\x65\x6e\x65\x72\x61"
  "\x74\x65\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x51\x02\xf2"
  "\x01\x04\x82\x02\x03\x0a\x52\x02\x20\x03\x6b\x73\x03\x51\x02\xf3"
  "\x01\x04\x82\x02\x03\x0a\x53\x02\x21\x02\x70\x03\x51\x02\xf4\x01"
  "\x04\x82\x02\x03\x0a\x54\x02\x22\x02\x76\x03\x51\x02\xf5\x01\x04"
  "\x82\x02\x03\x0a\x55\x02\x23\x02\x6c\x03\x51\x02\xf6\x01\x04\x82"
  "\x02\x03\x0a\x56\x02\x24\x23\x02\x1b\x69\x6e\x74\x65\x72\x6e\x61"
  "\x6c\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2d\x73\x75\x66"
  "\x66\x69\x78\x57\x1b\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x69\x64"
  "\x65\x6e\x74\x69\x66\x69\x65\x72\x2d\x70\x72\x65\x66\x69\x78\x58"
  "\x04\x04\x05\x61\x73\x73\x71\x59\x03\x1a\x73\x74\x72\x69\x6e\x67"
  "\x2d\x3e\x75\x6e\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d"
  "\x62\x6f\x6c\x03\x0c\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d\x65"
  "\x5a\x03\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e"
  "\x67\x06\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64"
  "\x06\x83\x02\x1c\x81\x8b\x02\x82\x02\x1a\x81\x89\x02\x81\x02\x18"
  "\x81\x8d\x02\x80\x02\x16\x81\x8d\x02\xff\x01\x14\x81\x8b\x02\xfe"
  "\x01\x12\x81\x8b\x02\xfd\x01\x10\x81\x8b\x02\xfc\x01\x0e\x81\x89"
  "\x02\xfb\x01\x0c\x81\x87\x02\xfa\x01\x0a\x81\x83\x02\xf9\x01\x08"
  "\x81\x8b\x02\xf8\x01\x06\x81\x85\x02\xf7\x01\x04\x83\x04\x1b\x33"
  "\x5b\x02\x25\x58\x57\x03\x03\x5a\x04\x0f\x73\x74\x72\x69\x6e\x67"
  "\x2d\x70\x72\x65\x66\x69\x78\x3f\x04\x0f\x73\x74\x72\x69\x6e\x67"
  "\x2d\x73\x75\x66\x66\x69\x78\x3f\x04\x88\x02\x0c\x81\x83\x02\x87"
  "\x02\x0a\x81\x83\x02\x86\x02\x08\x81\x87\x02\x85\x02\x06\x81\x83"
  "\x02\x84\x02\x04\x83\x04\x0b\x18\x5a\x02\x26\x06\x61\x70\x70\x6c"
  "\x79\x5c\x3c\x02\x04\x0d\x02\x8f\x02\x10\x81\x89\x02\x8e\x02\x0e"
  "\x81\x83\x02\x8d\x02\x0c\x83\x04\x8c\x02\x0a\x81\x87\x02\x8b\x02"
  "\x08\x81\x85\x02\x8a\x02\x06\x81\x89\x02\x89\x02\x04\xfe\x05\x0f"
  "\x1b\x5d\x02\x27\x5c\x04\x0d\x02\x93\x02\x0a\x81\x89\x02\x92\x02"
  "\x08\x83\x04\x91\x02\x06\x81\x87\x02\x90\x02\x04\x85\x08\x09\x12"
  "\x5c\x02\x28\x94\x02\x04\xfe\x05\x03\x5e\x02\x29\x95\x02\x04\x83"
  "\x04\x03\x5f\x02\x2a\x97\x02\x06\x81\x83\x02\x96\x02\x04\x83\x04"
  "\x05\x0b\x60\x02\x2b\x07\x76\x65\x63\x74\x6f\x72\x61\x0e\x76\x65"
  "\x63\x74\x6f\x72\x2d\x61\x70\x70\x65\x6e\x64\x62\x1a\x18\x02\x03"
  "\x18\x04\x0d\x03\x1a\x73\x75\x62\x73\x74\x69\x74\x75\x74\x65\x2d"
  "\x6c\x65\x74\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x63\x05"
  "\x1c\x6f\x70\x74\x69\x6d\x69\x7a\x65\x2d\x67\x72\x6f\x75\x70\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x31\x64\x03\x17\x66"
  "\x6c\x61\x74\x74\x65\x6e\x2d\x73\x75\x62\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x73\x65\x04\x13\x6d\x61\x79\x62\x65\x2d\x72\x65"
  "\x73\x75\x62\x73\x74\x69\x74\x75\x74\x65\x66\x05\x1d\x64\x69\x73"
  "\x63\x61\x72\x64\x2d\x75\x6e\x75\x73\x65\x64\x2d\x6c\x6f\x6f\x70"
  "\x2d\x62\x69\x6e\x64\x69\x6e\x67\x73\x67\x08\xb7\x02\x42\x81\x85"
  "\x02\xb6\x02\x40\x81\x83\x02\xb5\x02\x3e\x81\x85\x02\xb4\x02\x3c"
  "\x81\x85\x02\xb3\x02\x3a\x83\x04\xb2\x02\x38\x81\x8f\x02\xb1\x02"
  "\x36\x81\x8f\x02\xb0\x02\x34\x81\x8d\x02\xaf\x02\x32\x81\x87\x02"
  "\xae\x02\x30\x81\x87\x02\xad\x02\x2e\x81\x85\x02\xac\x02\x2c\x81"
  "\x8f\x02\xab\x02\x2a\x81\x8f\x02\xaa\x02\x28\x81\x8f\x02\xa9\x02"
  "\x26\x81\x8b\x02\xa8\x02\x24\x81\x89\x02\xa7\x02\x22\x85\x08\xa6"
  "\x02\x20\x81\x85\x02\xa5\x02\x1e\x81\x87\x02\xa4\x02\x1c\x81\x85"
  "\x02\xa3\x02\x1a\x81\x85\x02\xa2\x02\x18\x81\x89\x02\xa1\x02\x16"
  "\x81\x8b\x02\xa0\x02\x14\x81\x8d\x02\x9f\x02\x12\x81\x8d\x02\x9e"
  "\x02\x10\x81\x8d\x02\x9d\x02\x0e\x81\x8d\x02\x9c\x02\x0c\x81\x87"
  "\x02\x9b\x02\x0a\x81\x87\x02\x9a\x02\x08\x81\x87\x02\x99\x02\x06"
  "\x81\x83\x02\x98\x02\x04\x83\x04\x41\x5d\x68\x02\x2c\x0f\x02\x03"
  "\x13\x6c\x61\x6d\x62\x64\x61\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x3f\x69\x05\x16\x63\x6f\x6d\x70\x75\x74\x65\x2d\x73\x75"
  "\x62\x73\x74\x69\x74\x75\x74\x69\x6f\x6e\x73\x6a\x04\x14\x61\x70"
  "\x70\x6c\x79\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x69\x6f\x6e"
  "\x73\x6b\x04\x66\x04\x21\x64\x69\x73\x63\x61\x72\x64\x2d\x70\x61"
  "\x72\x61\x6d\x65\x74\x65\x72\x73\x2d\x66\x72\x6f\x6d\x2d\x6f\x70"
  "\x65\x72\x61\x6e\x64\x73\x6c\x06\xc6\x02\x20\x81\x8d\x02\xc5\x02"
  "\x1e\x81\x8b\x02\xc4\x02\x1c\x81\x87\x02\xc3\x02\x1a\x81\x89\x02"
  "\xc2\x02\x18\x81\x87\x02\xc1\x02\x16\x81\x89\x02\xc0\x02\x14\x81"
  "\x8f\x02\xbf\x02\x12\x81\x8f\x02\xbe\x02\x10\x81\x87\x02\xbd\x02"
  "\x0e\x81\x87\x02\xbc\x02\x0c\x81\x87\x02\xbb\x02\x0a\x81\x87\x02"
  "\xba\x02\x08\x81\x85\x02\xb9\x02\x06\x81\x83\x02\xb8\x02\x04\x83"
  "\x04\x1f\x31\x6d\x02\x2d\x0b\x73\x75\x62\x73\x74\x69\x74\x75\x74"
  "\x65\x04\x15\x05\x13\x74\x72\x61\x63\x65\x2d\x6f\x70\x74\x69\x6d"
  "\x69\x7a\x61\x74\x69\x6f\x6e\x6e\x03\x18\x04\xc9\x02\x08\x81\x85"
  "\x02\xc8\x02\x06\x81\x85\x02\xc7\x02\x04\x84\x06\x07\x12\x6f\x02"
  "\x2e\x04\x0c\x03\x15\x6f\x70\x65\x72\x61\x6e\x64\x2d\x64\x69\x73"
  "\x63\x61\x72\x64\x61\x62\x6c\x65\x3f\x70\x03\x15\x69\x6e\x74\x65"
  "\x72\x6e\x61\x6c\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x3f"
  "\x71\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x72\x04\x17\x6f\x70"
  "\x65\x72\x61\x6e\x64\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x61"
  "\x62\x6c\x65\x3f\x73\x03\x12\x6f\x70\x65\x72\x61\x6e\x64\x2d\x63"
  "\x6f\x70\x79\x61\x62\x6c\x65\x3f\x74\x07\xe1\x02\x32\x81\x85\x02"
  "\xe0\x02\x30\x81\x97\x02\xdf\x02\x2e\x81\x97\x02\xde\x02\x2c\x81"
  "\x97\x02\xdd\x02\x2a\x81\x97\x02\xdc\x02\x28\x81\x97\x02\xdb\x02"
  "\x26\x81\x97\x02\xda\x02\x24\x81\x97\x02\xd9\x02\x22\x81\x97\x02"
  "\xd8\x02\x20\x81\x97\x02\xd7\x02\x1e\x81\x97\x02\xd6\x02\x1c\x81"
  "\x91\x02\xd5\x02\x1a\x81\x97\x02\xd4\x02\x18\x81\x95\x02\xd3\x02"
  "\x16\x81\x93\x02\xd2\x02\x14\x81\x91\x02\xd1\x02\x12\x81\x91\x02"
  "\xd0\x02\x10\x81\x97\x02\xcf\x02\x0e\x81\x97\x02\xce\x02\x0c\x81"
  "\x97\x02\xcd\x02\x0a\x81\x97\x02\xcc\x02\x08\x81\x97\x02\xcb\x02"
  "\x06\x81\x8b\x02\xca\x02\x04\x85\x08\x31\x45\x75\x02\x2f\x24\x1e"
  "\x1a\x04\x16\x64\x65\x6c\x65\x74\x65\x2d\x6d\x61\x74\x63\x68\x69"
  "\x6e\x67\x2d\x69\x74\x65\x6d\x73\x76\x04\x0d\x04\x59\x03\x69\x04"
  "\x05\x6d\x65\x6d\x71\x77\x06\x96\x03\x6c\x81\x87\x02\x95\x03\x6a"
  "\x81\x85\x02\x94\x03\x68\x81\x89\x02\x93\x03\x66\x81\x89\x02\x92"
  "\x03\x64\x81\x85\x02\x91\x03\x62\xfd\xff\x03\x90\x03\x60\xfd\xff"
  "\x03\x8f\x03\x5e\xfd\xff\x03\x8e\x03\x5c\x81\x83\x02\x8d\x03\x5a"
  "\x81\x83\x02\x8c\x03\x58\x81\x83\x02\x8b\x03\x56\x81\x83\x02\x8a"
  "\x03\x54\x81\x83\x02\x89\x03\x52\x81\x83\x02\x88\x03\x50\x81\x83"
  "\x02\x87\x03\x4e\x81\x83\x02\x86\x03\x4c\x81\x87\x02\x85\x03\x4a"
  "\x81\x85\x02\x84\x03\x48\x81\x85\x02\x83\x03\x46\x81\x85\x02\x82"
  "\x03\x44\xfd\xff\x03\x81\x03\x42\xfd\xff\x03\x80\x03\x40\xfd\xff"
  "\x03\xff\x02\x3e\xfd\xff\x03\xfe\x02\x3c\xfd\xff\x03\xfd\x02\x3a"
  "\xfd\xff\x03\xfc\x02\x38\xfd\xff\x03\xfb\x02\x36\x81\x87\x02\xfa"
  "\x02\x34\x81\x85\x02\xf9\x02\x32\x81\x85\x02\xf8\x02\x30\x81\x85"
  "\x02\xf7\x02\x2e\x81\x87\x02\xf6\x02\x2c\x81\x85\x02\xf5\x02\x2a"
  "\x81\x85\x02\xf4\x02\x28\x81\x85\x02\xf3\x02\x26\xfd\xff\x03\xf2"
  "\x02\x24\xfd\xff\x03\xf1\x02\x22\xfd\xff\x03\xf0\x02\x20\xfd\xff"
  "\x03\xef\x02\x1e\xfd\xff\x03\xee\x02\x1c\xfd\xff\x03\xed\x02\x1a"
  "\xfd\xff\x03\xec\x02\x18\xfd\xff\x03\xeb\x02\x16\xfd\xff\x03\xea"
  "\x02\x14\x81\x85\x02\xe9\x02\x12\x81\x85\x02\xe8\x02\x10\xfd\xff"
  "\x03\xe7\x02\x0e\x81\x85\x02\xe6\x02\x0c\x81\x83\x02\xe5\x02\x0a"
  "\x81\x85\x02\xe4\x02\x08\x81\x85\x02\xe3\x02\x06\x81\x85\x02\xe2"
  "\x02\x04\x84\x06\x6b\x84\x01\x78\x02\x30\x3d\x3c\x03\x04\x0d\x06"
  "\x0d\x04\x0e\x74\x68\x65\x72\x65\x2d\x65\x78\x69\x73\x74\x73\x3f"
  "\x3d\x04\x0c\x04\x17\x61\x70\x70\x6c\x79\x2d\x64\x69\x73\x63\x61"
  "\x72\x64\x73\x2d\x74\x6f\x2d\x6c\x69\x73\x74\x3c\x05\x18\x61\x70"
  "\x70\x6c\x79\x2d\x64\x69\x73\x63\x61\x72\x64\x73\x2d\x74\x6f\x2d"
  "\x63\x61\x6c\x6c\x73\x79\x03\x71\x03\x70\x09\xa6\x03\x22\x81\x85"
  "\x02\xa5\x03\x20\x81\x87\x02\xa4\x03\x1e\x81\x89\x02\xa3\x03\x1c"
  "\x81\x89\x02\xa2\x03\x1a\x81\x87\x02\xa1\x03\x18\x85\x08\xa0\x03"
  "\x16\x81\x85\x02\x9f\x03\x14\x81\x89\x02\x9e\x03\x12\x81\x8d\x02"
  "\x9d\x03\x10\x81\x85\x02\x9c\x03\x0e\x83\x04\x9b\x03\x0c\x81\x89"
  "\x02\x9a\x03\x0a\x81\x89\x02\x99\x03\x08\x81\x87\x02\x98\x03\x06"
  "\x81\x8d\x02\x97\x03\x04\x85\x08\x21\x38\x7a\x02\x31\x05\x20\x64"
  "\x69\x73\x63\x61\x72\x64\x2d\x70\x61\x72\x61\x6d\x65\x74\x65\x72"
  "\x73\x2d\x66\x72\x6f\x6d\x2d\x6f\x70\x65\x72\x61\x6e\x64\x7b\x03"
  "\x72\x03\xb2\x03\x1a\x81\x89\x02\xb1\x03\x18\x81\x87\x02\xb0\x03"
  "\x16\x81\x85\x02\xaf\x03\x14\x81\x8b\x02\xae\x03\x12\x81\x89\x02"
  "\xad\x03\x10\x81\x89\x02\xac\x03\x0e\x81\x89\x02\xab\x03\x0c\x81"
  "\x87\x02\xaa\x03\x0a\x81\x87\x02\xa9\x03\x08\x81\x87\x02\xa8\x03"
  "\x06\x81\x87\x02\xa7\x03\x04\x84\x06\x19\x24\x7c\x02\x32\x03\x69"
  "\x04\x0c\x04\x3d\x04\x0d\x04\x3c\x05\x79\x07\xc3\x03\x24\x81\x85"
  "\x02\xc2\x03\x22\x81\x8d\x02\xc1\x03\x20\x81\x85\x02\xc0\x03\x1e"
  "\x81\x8d\x02\xbf\x03\x1c\x83\x04\xbe\x03\x1a\x83\x04\xbd\x03\x18"
  "\x81\x8d\x02\xbc\x03\x16\x81\x85\x02\xbb\x03\x14\x81\x8d\x02\xba"
  "\x03\x12\x81\x8b\x02\xb9\x03\x10\x81\x89\x02\xb8\x03\x0e\x81\x89"
  "\x02\xb7\x03\x0c\x81\x87\x02\xb6\x03\x0a\x81\x87\x02\xb5\x03\x08"
  "\x81\x87\x02\xb4\x03\x06\x81\x87\x02\xb3\x03\x04\x85\x08\x23\x38"
  "\x3d\x02\x33\x46\x1a\x04\x1b\x61\x70\x70\x6c\x79\x2d\x64\x69\x73"
  "\x63\x61\x72\x64\x73\x2d\x74\x6f\x2d\x6f\x70\x65\x72\x61\x6e\x64"
  "\x73\x7d\x04\x77\x04\x0d\x04\x59\x04\x0e\x06\xee\x03\x58\x81\x89"
  "\x02\xed\x03\x56\xfd\xff\x03\xec\x03\x54\xfd\xff\x03\xeb\x03\x52"
  "\xfd\xff\x03\xea\x03\x50\x81\x87\x02\xe9\x03\x4e\x81\x85\x02\xe8"
  "\x03\x4c\x81\x87\x02\xe7\x03\x4a\x81\x87\x02\xe6\x03\x48\xfd\xff"
  "\x03\xe5\x03\x46\xfd\xff\x03\xe4\x03\x44\xfd\xff\x03\xe3\x03\x42"
  "\xfd\xff\x03\xe2\x03\x40\x81\x87\x02\xe1\x03\x3e\x81\x87\x02\xe0"
  "\x03\x3c\x81\x85\x02\xdf\x03\x3a\xfd\xff\x03\xde\x03\x38\xfd\xff"
  "\x03\xdd\x03\x36\xfd\xff\x03\xdc\x03\x34\xfd\xff\x03\xdb\x03\x32"
  "\xfd\xff\x03\xda\x03\x30\xfd\xff\x03\xd9\x03\x2e\xfd\xff\x03\xd8"
  "\x03\x2c\xfd\xff\x03\xd7\x03\x2a\xfd\xff\x03\xd6\x03\x28\xfd\xff"
  "\x03\xd5\x03\x26\xfd\xff\x03\xd4\x03\x24\xfd\xff\x03\xd3\x03\x22"
  "\xfd\xff\x03\xd2\x03\x20\xfd\xff\x03\xd1\x03\x1e\xfd\xff\x03\xd0"
  "\x03\x1c\xfd\xff\x03\xcf\x03\x1a\xfd\xff\x03\xce\x03\x18\x81\x85"
  "\x02\xcd\x03\x16\x81\x89\x02\xcc\x03\x14\x81\x85\x02\xcb\x03\x12"
  "\x81\x85\x02\xca\x03\x10\xfd\xff\x03\xc9\x03\x0e\xfd\xff\x03\xc8"
  "\x03\x0c\xfd\xff\x03\xc7\x03\x0a\xfd\xff\x03\xc6\x03\x08\xfd\xff"
  "\x03\xc5\x03\x06\xfd\xff\x03\xc4\x03\x04\x85\x08\x57\x6c\x7e\x02"
  "\x34\x03\x70\x03\x72\x03\xfc\x03\x1e\x81\x85\x02\xfb\x03\x1c\x81"
  "\x89\x02\xfa\x03\x1a\x81\x89\x02\xf9\x03\x18\x81\x89\x02\xf8\x03"
  "\x16\x81\x89\x02\xf7\x03\x14\x81\x89\x02\xf6\x03\x12\x81\x8b\x02"
  "\xf5\x03\x10\x81\x89\x02\xf4\x03\x0e\x81\x89\x02\xf3\x03\x0c\x81"
  "\x89\x02\xf2\x03\x0a\x81\x89\x02\xf1\x03\x08\x81\x89\x02\xf0\x03"
  "\x06\x81\x89\x02\xef\x03\x04\x84\x06\x1d\x28\x72\x02\x35\x04\x3c"
  "\x02\x84\x04\x12\x81\x87\x02\x83\x04\x10\x81\x85\x02\x82\x04\x0e"
  "\x81\x85\x02\x81\x04\x0c\x81\x85\x02\x80\x04\x0a\x81\x89\x02\xff"
  "\x03\x08\x81\x87\x02\xfe\x03\x06\x81\x85\x02\xfd\x03\x04\x84\x06"
  "\x11\x1a\x7f\x02\x36\x61\x06\x71\x75\x6f\x74\x65\x80\x01\x46\x80"
  "\x01\x47\x0b\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x81\x01\x0b"
  "\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x82\x01\x81\x01\x24\x1e"
  "\x03\x69\x04\x0e\x73\x79\x6e\x74\x61\x78\x2d\x6d\x61\x74\x63\x68"
  "\x3f\x83\x01\x03\x09\x62\x6f\x6f\x6c\x65\x61\x6e\x3f\x04\x15\x05"
  "\x98\x04\x2a\x81\x85\x02\x97\x04\x28\x81\x87\x02\x96\x04\x26\x81"
  "\x87\x02\x95\x04\x24\x81\x87\x02\x94\x04\x22\x81\x87\x02\x93\x04"
  "\x20\x81\x83\x02\x92\x04\x1e\x81\x83\x02\x91\x04\x1c\x81\x85\x02"
  "\x90\x04\x1a\x81\x87\x02\x8f\x04\x18\x81\x87\x02\x8e\x04\x16\x81"
  "\x87\x02\x8d\x04\x14\x81\x85\x02\x8c\x04\x12\x81\x83\x02\x8b\x04"
  "\x10\x81\x85\x02\x8a\x04\x0e\x81\x85\x02\x89\x04\x0c\x81\x85\x02"
  "\x88\x04\x0a\x81\x85\x02\x87\x04\x08\x81\x83\x02\x86\x04\x06\x83"
  "\x04\x85\x04\x04\x81\x83\x02\x29\x3e\x84\x01\x02\x37\x03\x69\x03"
  "\x22\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x6d\x61\x79\x2d"
  "\x68\x61\x76\x65\x2d\x73\x69\x64\x65\x2d\x65\x66\x66\x65\x63\x74"
  "\x73\x3f\x85\x01\x03\x9c\x04\x0a\x81\x87\x02\x9b\x04\x08\x81\x87"
  "\x02\x9a\x04\x06\x81\x85\x02\x99\x04\x04\x84\x06\x09\x12\x86\x01"
  "\x02\x38\x03\x69\x03\x85\x01\x03\x9f\x04\x08\x81\x85\x02\x9e\x04"
  "\x06\x81\x83\x02\x9d\x04\x04\x83\x04\x07\x10\x87\x01\x02\x39\xa4"
  "\x04\x0c\xfd\xff\x03\xa3\x04\x0a\x81\x83\x02\xa2\x04\x08\x81\x85"
  "\x02\xa1\x04\x06\x81\x83\x02\xa0\x04\x04\x83\x04\x0b\x12\x88\x01"
  "\x02\x3a\x23\x02\x1a\x0a\x02\x04\x0d\x04\x76\x04\x09\x66\x6f\x72"
  "\x2d\x65\x61\x63\x68\x0a\x03\x0c\x69\x64\x65\x6e\x74\x69\x66\x69"
  "\x65\x72\x3f\x89\x01\x04\x59\x04\x77\x07\xcc\x04\x52\x81\x87\x02"
  "\xcb\x04\x50\x81\x85\x02\xca\x04\x4e\x81\x85\x02\xc9\x04\x4c\x81"
  "\x85\x02\xc8\x04\x4a\x81\x87\x02\xc7\x04\x48\x81\x85\x02\xc6\x04"
  "\x46\x81\x85\x02\xc5\x04\x44\x81\x85\x02\xc4\x04\x42\x81\x87\x02"
  "\xc3\x04\x40\x81\x87\x02\xc2\x04\x3e\x81\x87\x02\xc1\x04\x3c\x81"
  "\x87\x02\xc0\x04\x3a\x81\x87\x02\xbf\x04\x38\x81\x85\x02\xbe\x04"
  "\x36\x81\x85\x02\xbd\x04\x34\x81\x85\x02\xbc\x04\x32\x81\x87\x02"
  "\xbb\x04\x30\x81\x85\x02\xba\x04\x2e\x81\x85\x02\xb9\x04\x2c\x81"
  "\x85\x02\xb8\x04\x2a\x81\x87\x02\xb7\x04\x28\x81\x87\x02\xb6\x04"
  "\x26\x81\x87\x02\xb5\x04\x24\x81\x87\x02\xb4\x04\x22\x81\x87\x02"
  "\xb3\x04\x20\x81\x87\x02\xb2\x04\x1e\x81\x85\x02\xb1\x04\x1c\x81"
  "\x87\x02\xb0\x04\x1a\x81\x85\x02\xaf\x04\x18\x81\x85\x02\xae\x04"
  "\x16\x81\x89\x02\xad\x04\x14\x81\x89\x02\xac\x04\x12\x81\x89\x02"
  "\xab\x04\x10\x81\x85\x02\xaa\x04\x0e\x81\x85\x02\xa9\x04\x0c\x81"
  "\x87\x02\xa8\x04\x0a\x81\x87\x02\xa7\x04\x08\x83\x04\xa6\x04\x06"
  "\x81\x85\x02\xa5\x04\x04\x84\x06\x51\x6c\x59\x02\x3b\x02\x14\x6d"
  "\x61\x6b\x65\x2d\x65\x6d\x70\x74\x79\x2d\x70\x6f\x69\x6e\x74\x65"
  "\x72\x73\x8a\x01\x04\x18\x6f\x70\x74\x69\x6d\x69\x7a\x65\x2d\x70"
  "\x6f\x69\x6e\x74\x65\x72\x2d\x75\x73\x61\x67\x65\x2a\x8b\x01\x03"
  "\xce\x04\x06\x81\x85\x02\xcd\x04\x04\x83\x04\x05\x0d\x8c\x01\x02"
  "\x3c\x08\x70\x6f\x69\x6e\x74\x65\x72\x16\x70\x6f\x69\x6e\x74\x65"
  "\x72\x2d\x6f\x70\x74\x69\x6d\x69\x7a\x61\x74\x69\x6f\x6e\x73\x8d"
  "\x01\x1e\x64\x65\x66\x61\x75\x6c\x74\x2d\x70\x6f\x69\x6e\x74\x65"
  "\x72\x2d\x6f\x70\x74\x69\x6d\x69\x7a\x61\x74\x69\x6f\x6e\x73\x8e"
  "\x01\x03\x04\x13\x66\x69\x6e\x64\x2d\x6d\x61\x74\x63\x68\x69\x6e"
  "\x67\x2d\x69\x74\x65\x6d\x8f\x01\x04\x0d\x03\x89\x01\x04\x83\x01"
  "\x04\x15\x04\x19\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65"
  "\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d\x72\x65\x66\x89\x01\x04\x8b"
  "\x01\x06\x6e\x09\xdd\x04\x20\x81\x87\x02\xdc\x04\x1e\x81\x87\x02"
  "\xdb\x04\x1c\x81\x87\x02\xda\x04\x1a\x81\x85\x02\xd9\x04\x18\x81"
  "\x85\x02\xd8\x04\x16\x81\x87\x02\xd7\x04\x14\x81\x87\x02\xd6\x04"
  "\x12\x81\x87\x02\xd5\x04\x10\x81\x85\x02\xd4\x04\x0e\x81\x8d\x02"
  "\xd3\x04\x0c\x81\x85\x02\xd2\x04\x0a\x81\x83\x02\xd1\x04\x08\x81"
  "\x87\x02\xd0\x04\x06\x81\x8b\x02\xcf\x04\x04\x84\x06\x1f\x39\x90"
  "\x01\x02\x3d\x23\x02\x8d\x01\x02\x8d\x01\x02\x04\x06\x61\x73\x73"
  "\x6f\x63\x91\x01\x02\xe2\x04\x0c\x81\x87\x02\xe1\x04\x0a\x81\x87"
  "\x02\xe0\x04\x08\x81\x85\x02\xdf\x04\x06\x81\x87\x02\xde\x04\x04"
  "\x84\x06\x0b\x17\x92\x01\x02\x3e\x23\x02\x8e\x01\x02\x8e\x01\x02"
  "\x04\x91\x01\x02\xe7\x04\x0c\x81\x87\x02\xe6\x04\x0a\x81\x87\x02"
  "\xe5\x04\x08\x81\x85\x02\xe4\x04\x06\x81\x87\x02\xe3\x04\x04\x84"
  "\x06\x0b\x17\x93\x01\x02\x3f\xe8\x04\x04\x82\x02\x03\x94\x01\x02"
  "\x40\x03\x12\x25\x63\x75\x72\x72\x65\x6e\x74\x2d\x70\x6f\x69\x6e"
  "\x74\x65\x72\x73\x95\x01\x04\x77\x03\xea\x04\x06\x81\x85\x02\xe9"
  "\x04\x04\x84\x06\x05\x0d\x96\x01\x02\x41\x04\x0d\x25\x6e\x65\x77"
  "\x2d\x70\x6f\x69\x6e\x74\x65\x72\x97\x01\x04\x8b\x01\x03\xec\x04"
  "\x06\x81\x87\x02\xeb\x04\x04\x85\x08\x05\x0d\x98\x01\x02\x42\x03"
  "\x0c\x25\x6e\x6f\x2d\x70\x6f\x69\x6e\x74\x65\x72\x99\x01\x04\x8b"
  "\x01\x03\xee\x04\x06\x81\x85\x02\xed\x04\x04\x84\x06\x05\x0d\x9a"
  "\x01\x02\x43\x04\x13\x25\x64\x72\x6f\x70\x2d\x70\x6f\x69\x6e\x74"
  "\x65\x72\x2d\x72\x65\x66\x73\x9b\x01\x04\x8b\x01\x03\xf0\x04\x06"
  "\x81\x87\x02\xef\x04\x04\x85\x08\x05\x0d\x9c\x01\x02\x44\x04\x0d"
  "\x25\x69\x64\x2d\x70\x6f\x69\x6e\x74\x65\x72\x73\x9d\x01\x03\x0a"
  "\x6c\x61\x73\x74\x2d\x70\x61\x69\x72\x9e\x01\x03\xf3\x04\x08\x81"
  "\x87\x02\xf2\x04\x06\x81\x85\x02\xf1\x04\x04\x84\x06\x07\x10\x9f"
  "\x01\x02\x45\x04\x9d\x01\x03\x95\x01\x03\x9e\x01\x04\x77\x05\x0d"
  "\x72\x65\x70\x6c\x61\x63\x65\x2d\x69\x74\x65\x6d\xa0\x01\x06\xff"
  "\x04\x1a\x81\x89\x02\xfe\x04\x18\x81\x87\x02\xfd\x04\x16\x81\x89"
  "\x02\xfc\x04\x14\x81\x87\x02\xfb\x04\x12\x81\x89\x02\xfa\x04\x10"
  "\x81\x89\x02\xf9\x04\x0e\x81\x85\x02\xf8\x04\x0c\x81\x87\x02\xf7"
  "\x04\x0a\x81\x87\x02\xf6\x04\x08\x81\x85\x02\xf5\x04\x06\x81\x85"
  "\x02\xf4\x04\x04\x84\x06\x19\x2a\xa1\x01\x02\x46\xa0\x01\x04\x19"
  "\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d"
  "\x61\x72\x67\x75\x6d\x65\x6e\x74\x02\x87\x05\x12\xfd\xff\x03\x86"
  "\x05\x10\xfd\xff\x03\x85\x05\x0e\xfd\xff\x03\x84\x05\x0c\xfd\xff"
  "\x03\x83\x05\x0a\xfd\xff\x03\x82\x05\x08\xff\xff\x03\x81\x05\x06"
  "\xfd\xff\x03\x80\x05\x04\x85\x08\x11\x1a\xa2\x01\x02\x47\x8a\x05"
  "\x08\x81\x83\x02\x89\x05\x06\x81\x83\x02\x88\x05\x04\x83\x04\x07"
  "\x0c\xa3\x01\x02\x48\x04\x0d\x04\x76\x04\x77\x04\x8f\x05\x0c\x81"
  "\x85\x02\x8e\x05\x0a\x81\x85\x02\x8d\x05\x08\x81\x85\x02\x8c\x05"
  "\x06\x81\x87\x02\x8b\x05\x04\x84\x06\x0b\x16\x76\x02\x49\x04\x8f"
  "\x01\x04\x77\x03\x94\x05\x0c\x81\x85\x02\x93\x05\x0a\x81\x85\x02"
  "\x92\x05\x08\x81\x83\x02\x91\x05\x06\x81\x83\x02\x90\x05\x04\x83"
  "\x04\x0b\x16\xa4\x01\x02\x4a\x04\x8f\x01\x04\x77\x03\x98\x05\x0a"
  "\x81\x85\x02\x97\x05\x08\x81\x85\x02\x96\x05\x06\x81\x89\x02\x95"
  "\x05\x04\x84\x06\x09\x13\x8f\x01\x02\x4b\x46\x47\x04\x11\x63\x75"
  "\x72\x72\x65\x6e\x74\x2d\x70\x6f\x69\x6e\x74\x65\x72\x3f\x77\x05"
  "\x0c\x6e\x65\x77\x2d\x70\x6f\x69\x6e\x74\x65\x72\xa5\x01\x04\x8b"
  "\x01\x04\x89\x01\x05\xa7\x05\x20\x81\x8f\x02\xa6\x05\x1e\x81\x93"
  "\x02\xa5\x05\x1c\x81\x93\x02\xa4\x05\x1a\x81\x8d\x02\xa3\x05\x18"
  "\x81\x8b\x02\xa2\x05\x16\x81\x8b\x02\xa1\x05\x14\x81\x89\x02\xa0"
  "\x05\x12\x81\x89\x02\x9f\x05\x10\x81\x89\x02\x9e\x05\x0e\x81\x87"
  "\x02\x9d\x05\x0c\x81\x87\x02\x9c\x05\x0a\x81\x85\x02\x9b\x05\x08"
  "\x81\x85\x02\x9a\x05\x06\x81\x85\x02\x99\x05\x04\x84\x06\x1f\x30"
  "\xa6\x01\x02\x4c\x05\xa5\x01\x03\x71\x04\x0c\x04\xb8\x05\x24\x81"
  "\x8d\x02\xb7\x05\x22\x81\x8d\x02\xb6\x05\x20\x81\x8d\x02\xb5\x05"
  "\x1e\x81\x8d\x02\xb4\x05\x1c\x81\x8d\x02\xb3\x05\x1a\x81\x8b\x02"
  "\xb2\x05\x18\x81\x89\x02\xb1\x05\x16\x81\x89\x02\xb0\x05\x14\x81"
  "\x89\x02\xaf\x05\x12\x81\x89\x02\xae\x05\x10\x81\x87\x02\xad\x05"
  "\x0e\x81\x87\x02\xac\x05\x0c\x81\x85\x02\xab\x05\x0a\x81\x85\x02"
  "\xaa\x05\x08\x81\x85\x02\xa9\x05\x06\x81\x85\x02\xa8\x05\x04\x84"
  "\x06\x23\x31\xa7\x01\x02\x4d\xb9\x05\x04\x84\x06\x03\xa8\x01\x02"
  "\x4e\x03\x69\x66\xa9\x01\x04\x0b\x6e\x6f\x2d\x70\x6f\x69\x6e\x74"
  "\x65\x72\xaa\x01\x04\x8b\x01\x03\xc6\x05\x1c\x81\x87\x02\xc5\x05"
  "\x1a\x81\x8b\x02\xc4\x05\x18\x81\x8b\x02\xc3\x05\x16\x81\x87\x02"
  "\xc2\x05\x14\x81\x8b\x02\xc1\x05\x12\x81\x8b\x02\xc0\x05\x10\x81"
  "\x8b\x02\xbf\x05\x0e\x81\x85\x02\xbe\x05\x0c\x81\x89\x02\xbd\x05"
  "\x0a\x81\x89\x02\xbc\x05\x08\x81\x89\x02\xbb\x05\x06\x81\x89\x02"
  "\xba\x05\x04\x84\x06\x1b\x27\xab\x01\x02\x4f\xa9\x01\x04\xaa\x01"
  "\x04\x8b\x01\x03\xce\x05\x12\x81\x87\x02\xcd\x05\x10\x81\x8b\x02"
  "\xcc\x05\x0e\x81\x8b\x02\xcb\x05\x0c\x81\x85\x02\xca\x05\x0a\x81"
  "\x89\x02\xc9\x05\x08\x81\x89\x02\xc8\x05\x06\x81\x89\x02\xc7\x05"
  "\x04\x84\x06\x11\x1d\xac\x01\x02\x50\x04\x61\x6e\x64\xad\x01\x04"
  "\x0d\x04\x8b\x01\x04\xaa\x01\x04\xd7\x05\x14\x81\x87\x02\xd6\x05"
  "\x12\x81\x85\x02\xd5\x05\x10\x81\x8b\x02\xd4\x05\x0e\x81\x8b\x02"
  "\xd3\x05\x0c\x81\x85\x02\xd2\x05\x0a\x81\x87\x02\xd1\x05\x08\x81"
  "\x87\x02\xd0\x05\x06\x81\x85\x02\xcf\x05\x04\x84\x06\x13\x20\xae"
  "\x01\x02\x51\x03\x6f\x72\xaf\x01\x04\x0d\x04\x8b\x01\x04\xaa\x01"
  "\x04\xe0\x05\x14\x81\x87\x02\xdf\x05\x12\x81\x85\x02\xde\x05\x10"
  "\x81\x8b\x02\xdd\x05\x0e\x81\x8b\x02\xdc\x05\x0c\x81\x85\x02\xdb"
  "\x05\x0a\x81\x87\x02\xda\x05\x08\x81\x87\x02\xd9\x05\x06\x81\x85"
  "\x02\xd8\x05\x04\x84\x06\x13\x20\xb0\x01\x02\x52\x04\xaa\x01\x02"
  "\xe7\x05\x10\x81\x87\x02\xe6\x05\x0e\x81\x87\x02\xe5\x05\x0c\x81"
  "\x85\x02\xe4\x05\x0a\x81\x89\x02\xe3\x05\x08\x81\x89\x02\xe2\x05"
  "\x06\x81\x89\x02\xe1\x05\x04\x84\x06\x0f\x19\xb1\x01\x02\x53\x03"
  "\x07\x6c\x65\x6e\x67\x74\x68\x05\x12\x64\x72\x6f\x70\x2d\x70\x6f"
  "\x69\x6e\x74\x65\x72\x2d\x72\x65\x66\x73\xb2\x01\x04\x0d\x04\x8b"
  "\x01\x04\xaa\x01\x06\xf6\x05\x20\x81\x85\x02\xf5\x05\x1e\x81\x8d"
  "\x02\xf4\x05\x1c\x81\x91\x02\xf3\x05\x1a\x81\x8d\x02\xf2\x05\x18"
  "\x81\x8d\x02\xf1\x05\x16\x81\x93\x02\xf0\x05\x14\x81\x93\x02\xef"
  "\x05\x12\x81\x93\x02\xee\x05\x10\x81\x8b\x02\xed\x05\x0e\x81\x8d"
  "\x02\xec\x05\x0c\x81\x89\x02\xeb\x05\x0a\x81\x89\x02\xea\x05\x08"
  "\x81\x87\x02\xe9\x05\x06\x81\x85\x02\xe8\x05\x04\x84\x06\x1f\x32"
  "\xb3\x01\x02\x54\x1a\x04\xaa\x01\x04\x0d\x03\x87\x06\x24\x81\x87"
  "\x02\x86\x06\x22\x81\x85\x02\x85\x06\x20\x81\x89\x02\x84\x06\x1e"
  "\x81\x89\x02\x83\x06\x1c\x81\x85\x02\x82\x06\x1a\x81\x87\x02\x81"
  "\x06\x18\x81\x87\x02\x80\x06\x16\x81\x87\x02\xff\x05\x14\x81\x89"
  "\x02\xfe\x05\x12\x81\x89\x02\xfd\x05\x10\x81\x89\x02\xfc\x05\x0e"
  "\x81\x85\x02\xfb\x05\x0c\x81\x89\x02\xfa\x05\x0a\x81\x89\x02\xf9"
  "\x05\x08\x81\x89\x02\xf8\x05\x06\x81\x89\x02\xf7\x05\x04\x84\x06"
  "\x23\x2f\xb4\x01\x02\x55\x09\x70\x65\x65\x70\x68\x6f\x6c\x65\x1a"
  "\x1c\x70\x65\x65\x70\x68\x6f\x6c\x65\x2d\x6f\x70\x74\x69\x6d\x69"
  "\x7a\x65\x72\x2d\x70\x61\x74\x74\x65\x72\x6e\x73\xb5\x01\x16\x03"
  "\x04\x83\x01\x04\x0d\x03\x16\x04\x15\x05\x6e\x06\xb3\x06\x5a\x81"
  "\x85\x02\xb2\x06\x58\x81\x85\x02\xb1\x06\x56\x81\x85\x02\xb0\x06"
  "\x54\x81\x83\x02\xaf\x06\x52\x81\x85\x02\xae\x06\x50\x81\x85\x02"
  "\xad\x06\x4e\x81\x85\x02\xac\x06\x4c\x83\x04\xab\x06\x4a\x81\x87"
  "\x02\xaa\x06\x48\x81\x87\x02\xa9\x06\x46\x81\x87\x02\xa8\x06\x44"
  "\x81\x89\x02\xa7\x06\x42\x81\x89\x02\xa6\x06\x40\x81\x89\x02\xa5"
  "\x06\x3e\x81\x89\x02\xa4\x06\x3c\x81\x89\x02\xa3\x06\x3a\x81\x89"
  "\x02\xa2\x06\x38\x81\x85\x02\xa1\x06\x36\x81\x85\x02\xa0\x06\x34"
  "\x81\x85\x02\x9f\x06\x32\x81\x85\x02\x9e\x06\x30\x81\x85\x02\x9d"
  "\x06\x2e\x81\x85\x02\x9c\x06\x2c\x81\x87\x02\x9b\x06\x2a\x81\x87"
  "\x02\x9a\x06\x28\x81\x85\x02\x99\x06\x26\x81\x89\x02\x98\x06\x24"
  "\x81\x89\x02\x97\x06\x22\x81\x89\x02\x96\x06\x20\x81\x85\x02\x95"
  "\x06\x1e\x81\x85\x02\x94\x06\x1c\x81\x87\x02\x93\x06\x1a\x81\x87"
  "\x02\x92\x06\x18\x81\x87\x02\x91\x06\x16\x81\x87\x02\x90\x06\x14"
  "\x81\x89\x02\x8f\x06\x12\x81\x87\x02\x8e\x06\x10\x81\x87\x02\x8d"
  "\x06\x0e\x81\x85\x02\x8c\x06\x0c\x81\x89\x02\x8b\x06\x0a\x81\x89"
  "\x02\x8a\x06\x08\x81\x85\x02\x89\x06\x06\x81\x83\x02\x88\x06\x04"
  "\x83\x04\x59\x70\xb6\x01\x02\x56\x23\x02\xb5\x01\x02\xb5\x01\x02"
  "\x04\x91\x01\x02\xb8\x06\x0c\x81\x8b\x02\xb7\x06\x0a\x81\x8b\x02"
  "\xb6\x06\x08\x81\x89\x02\xb5\x06\x06\x81\x8b\x02\xb4\x06\x04\x85"
  "\x08\x0b\x17\x91\x01\x02\x57\xaf\x01\xbe\x06\x0e\x81\x83\x02\xbd"
  "\x06\x0c\x81\x83\x02\xbc\x06\x0a\x81\x83\x02\xbb\x06\x08\x81\x83"
  "\x02\xba\x06\x06\x81\x83\x02\xb9\x06\x04\x83\x04\x0d\x14\x23\x02"
  "\x58\xc0\x06\x06\x81\x83\x02\xbf\x06\x04\x83\x04\x05\x0a\xb7\x01"
  "\x02\x59\x04\x6e\x6f\x74\xb8\x01\xc3\x06\x08\x81\x83\x02\xc2\x06"
  "\x06\x81\x83\x02\xc1\x06\x04\x83\x04\x07\x0e\xb9\x01\x02\x5a\xc7"
  "\x06\x0a\x81\x83\x02\xc6\x06\x08\x81\x83\x02\xc5\x06\x06\x81\x83"
  "\x02\xc4\x06\x04\x83\x04\x09\x0f\xba\x01\x02\x5b\xad\x01\xcd\x06"
  "\x0e\x81\x85\x02\xcc\x06\x0c\x81\x85\x02\xcb\x06\x0a\x81\x83\x02"
  "\xca\x06\x08\x81\x83\x02\xc9\x06\x06\x81\x83\x02\xc8\x06\x04\x83"
  "\x04\x0d\x14\xbb\x01\x02\x5c\xd2\x06\x0c\x81\x83\x02\xd1\x06\x0a"
  "\x81\x83\x02\xd0\x06\x08\x81\x83\x02\xcf\x06\x06\x81\x83\x02\xce"
  "\x06\x04\x83\x04\x0b\x11\xbc\x01\x02\x5d\xad\x01\xb8\x01\xd9\x06"
  "\x10\x81\x85\x02\xd8\x06\x0e\x81\x85\x02\xd7\x06\x0c\x81\x83\x02"
  "\xd6\x06\x0a\x81\x83\x02\xd5\x06\x08\x81\x83\x02\xd4\x06\x06\x81"
  "\x83\x02\xd3\x06\x04\x83\x04\x0f\x17\xbd\x01\x02\x5e\x04\x15\x02"
  "\xe1\x06\x12\x81\x85\x02\xe0\x06\x10\x81\x85\x02\xdf\x06\x0e\x81"
  "\x85\x02\xde\x06\x0c\x81\x85\x02\xdd\x06\x0a\x81\x83\x02\xdc\x06"
  "\x08\x81\x83\x02\xdb\x06\x06\x81\x83\x02\xda\x06\x04\x83\x04\x11"
  "\x19\xbe\x01\x02\x5f\x46\xe7\x06\x0e\x81\x85\x02\xe6\x06\x0c\x81"
  "\x85\x02\xe5\x06\x0a\x81\x83\x02\xe4\x06\x08\x81\x83\x02\xe3\x06"
  "\x06\x81\x83\x02\xe2\x06\x04\x83\x04\x0d\x14\xbf\x01\x02\x60\xa9"
  "\x01\xed\x06\x0e\x81\x85\x02\xec\x06\x0c\x81\x85\x02\xeb\x06\x0a"
  "\x81\x83\x02\xea\x06\x08\x81\x83\x02\xe9\x06\x06\x81\x83\x02\xe8"
  "\x06\x04\x83\x04\x0d\x14\xc0\x01\x02\x61\x0b\x75\x6e\x73\x70\x65"
  "\x63\x69\x66\x69\x63\xc1\x01\x03\x11\x70\x72\x65\x64\x69\x63\x61"
  "\x74\x65\x2d\x6e\x6f\x74\x2d\x6f\x72\xc2\x01\x02\xf1\x06\x0a\x81"
  "\x83\x02\xf0\x06\x08\x81\x83\x02\xef\x06\x06\x81\x83\x02\xee\x06"
  "\x04\x83\x04\x09\x12\xc3\x01\x02\x62\xf3\x06\x06\x81\x83\x02\xf2"
  "\x06\x04\x83\x04\x05\x0a\xc4\x01\x02\x63\x04\x15\x02\xff\x06\x1a"
  "\x81\x85\x02\xfe\x06\x18\x81\x85\x02\xfd\x06\x16\x81\x85\x02\xfc"
  "\x06\x14\x81\x85\x02\xfb\x06\x12\x81\x83\x02\xfa\x06\x10\x81\x83"
  "\x02\xf9\x06\x0e\x81\x83\x02\xf8\x06\x0c\x81\x83\x02\xf7\x06\x0a"
  "\x81\x83\x02\xf6\x06\x08\x81\x83\x02\xf5\x06\x06\x81\x83\x02\xf4"
  "\x06\x04\x83\x04\x19\x21\xc5\x01\x02\x64\xa9\x01\xad\x01\x91\x07"
  "\x26\x81\x87\x02\x90\x07\x24\x81\x87\x02\x8f\x07\x22\x81\x85\x02"
  "\x8e\x07\x20\x81\x85\x02\x8d\x07\x1e\x81\x85\x02\x8c\x07\x1c\x81"
  "\x85\x02\x8b\x07\x1a\x81\x85\x02\x8a\x07\x18\x81\x85\x02\x89\x07"
  "\x16\x81\x85\x02\x88\x07\x14\x81\x85\x02\x87\x07\x12\x81\x85\x02"
  "\x86\x07\x10\x81\x85\x02\x85\x07\x0e\x81\x85\x02\x84\x07\x0c\x81"
  "\x83\x02\x83\x07\x0a\x81\x83\x02\x82\x07\x08\x81\x83\x02\x81\x07"
  "\x06\x81\x83\x02\x80\x07\x04\x83\x04\x25\x2d\xc6\x01\x02\x65\x04"
  "\x15\x02\x9c\x07\x18\x81\x85\x02\x9b\x07\x16\x81\x85\x02\x9a\x07"
  "\x14\x81\x85\x02\x99\x07\x12\x81\x83\x02\x98\x07\x10\x81\x83\x02"
  "\x97\x07\x0e\x81\x83\x02\x96\x07\x0c\x81\x83\x02\x95\x07\x0a\x81"
  "\x83\x02\x94\x07\x08\x81\x83\x02\x93\x07\x06\x81\x83\x02\x92\x07"
  "\x04\x83\x04\x17\x1f\xc7\x01\x02\x66\xa9\x01\xaf\x01\xb0\x07\x2a"
  "\x81\x87\x02\xaf\x07\x28\x81\x87\x02\xae\x07\x26\x81\x85\x02\xad"
  "\x07\x24\x81\x85\x02\xac\x07\x22\x81\x85\x02\xab\x07\x20\x81\x85"
  "\x02\xaa\x07\x1e\x81\x85\x02\xa9\x07\x1c\x81\x85\x02\xa8\x07\x1a"
  "\x81\x85\x02\xa7\x07\x18\x81\x85\x02\xa6\x07\x16\x81\x85\x02\xa5"
  "\x07\x14\x81\x83\x02\xa4\x07\x12\x81\x83\x02\xa3\x07\x10\x81\x83"
  "\x02\xa2\x07\x0e\x81\x83\x02\xa1\x07\x0c\x81\x83\x02\xa0\x07\x0a"
  "\x81\x83\x02\x9f\x07\x08\x81\x83\x02\x9e\x07\x06\x81\x83\x02\x9d"
  "\x07\x04\x83\x04\x29\x31\xc8\x01\x02\x67\x80\x01\xa9\x01\x81\x01"
  "\x81\x01\x81\x01\x03\x9e\x01\x04\x83\x01\x04\x15\x04\xbf\x07\x20"
  "\x81\x85\x02\xbe\x07\x1e\x81\x85\x02\xbd\x07\x1c\x81\x85\x02\xbc"
  "\x07\x1a\x81\x85\x02\xbb\x07\x18\x81\x85\x02\xba\x07\x16\x81\x85"
  "\x02\xb9\x07\x14\x81\x85\x02\xb8\x07\x12\x81\x85\x02\xb7\x07\x10"
  "\x81\x85\x02\xb6\x07\x0e\x81\x83\x02\xb5\x07\x0c\x81\x83\x02\xb4"
  "\x07\x0a\x81\x85\x02\xb3\x07\x08\x81\x85\x02\xb2\x07\x06\x81\x85"
  "\x02\xb1\x07\x04\x83\x04\x1f\x2c\xc9\x01\x02\x68\xa9\x01\xad\x01"
  "\x46\x03\x9e\x01\x03\x11\x65\x78\x63\x65\x70\x74\x2d\x6c\x61\x73"
  "\x74\x2d\x70\x61\x69\x72\xca\x01\x04\x0e\x04\xd6\x07\x30\x81\x8b"
  "\x02\xd5\x07\x2e\x81\x89\x02\xd4\x07\x2c\x81\x89\x02\xd3\x07\x2a"
  "\x81\x87\x02\xd2\x07\x28\x81\x8d\x02\xd1\x07\x26\x81\x8d\x02\xd0"
  "\x07\x24\x81\x8d\x02\xcf\x07\x22\x81\x8d\x02\xce\x07\x20\x81\x89"
  "\x02\xcd\x07\x1e\x81\x89\x02\xcc\x07\x1c\x81\x87\x02\xcb\x07\x1a"
  "\x81\x87\x02\xca\x07\x18\x81\x87\x02\xc9\x07\x16\x81\x85\x02\xc8"
  "\x07\x14\x81\x85\x02\xc7\x07\x12\x81\x85\x02\xc6\x07\x10\x81\x85"
  "\x02\xc5\x07\x0e\x81\x83\x02\xc4\x07\x0c\x81\x83\x02\xc3\x07\x0a"
  "\x81\x85\x02\xc2\x07\x08\x81\x85\x02\xc1\x07\x06\x81\x85\x02\xc0"
  "\x07\x04\x83\x04\x2f\x3f\xcb\x01\x02\x69\x80\x01\xa9\x01\x81\x01"
  "\x81\x01\x81\x01\x03\x9e\x01\x04\x83\x01\x04\x15\x04\xe4\x07\x1e"
  "\x81\x85\x02\xe3\x07\x1c\x81\x85\x02\xe2\x07\x1a\x81\x85\x02\xe1"
  "\x07\x18\x81\x85\x02\xe0\x07\x16\x81\x85\x02\xdf\x07\x14\x81\x85"
  "\x02\xde\x07\x12\x81\x85\x02\xdd\x07\x10\x81\x83\x02\xdc\x07\x0e"
  "\x81\x83\x02\xdb\x07\x0c\x81\x85\x02\xda\x07\x0a\x81\x85\x02\xd9"
  "\x07\x08\x81\x85\x02\xd8\x07\x06\x81\x85\x02\xd7\x07\x04\x83\x04"
  "\x1d\x2a\x83\x01\x02\x6a\xa9\x01\xaf\x01\x46\x03\x9e\x01\x03\xca"
  "\x01\x04\x0e\x04\xfd\x07\x34\x81\x8b\x02\xfc\x07\x32\x81\x89\x02"
  "\xfb\x07\x30\x81\x89\x02\xfa\x07\x2e\x81\x87\x02\xf9\x07\x2c\x81"
  "\x8d\x02\xf8\x07\x2a\x81\x8d\x02\xf7\x07\x28\x81\x8d\x02\xf6\x07"
  "\x26\x81\x8d\x02\xf5\x07\x24\x81\x8d\x02\xf4\x07\x22\x81\x89\x02"
  "\xf3\x07\x20\x81\x89\x02\xf2\x07\x1e\x81\x87\x02\xf1\x07\x1c\x81"
  "\x87\x02\xf0\x07\x1a\x81\x87\x02\xef\x07\x18\x81\x85\x02\xee\x07"
  "\x16\x81\x85\x02\xed\x07\x14\x81\x85\x02\xec\x07\x12\x81\x85\x02"
  "\xeb\x07\x10\x81\x83\x02\xea\x07\x0e\x81\x83\x02\xe9\x07\x0c\x81"
  "\x85\x02\xe8\x07\x0a\x81\x85\x02\xe7\x07\x08\x81\x85\x02\xe6\x07"
  "\x06\x81\x85\x02\xe5\x07\x04\x83\x04\x33\x43\xcc\x01\x02\x6b\x03"
  "\x9e\x01\x04\x15\x03\x87\x08\x16\x81\x85\x02\x86\x08\x14\x81\x85"
  "\x02\x85\x08\x12\x81\x85\x02\x84\x08\x10\x81\x85\x02\x83\x08\x0e"
  "\x81\x83\x02\x82\x08\x0c\x81\x83\x02\x81\x08\x0a\x81\x85\x02\x80"
  "\x08\x08\x81\x85\x02\xff\x07\x06\x81\x85\x02\xfe\x07\x04\x83\x04"
  "\x15\x1f\x9e\x01\x02\x6c\xad\x01\xaf\x01\x03\xca\x01\x02\x93\x08"
  "\x1a\x81\x87\x02\x92\x08\x18\x81\x87\x02\x91\x08\x16\x81\x85\x02"
  "\x90\x08\x14\x81\x87\x02\x8f\x08\x12\x81\x87\x02\x8e\x08\x10\x81"
  "\x87\x02\x8d\x08\x0e\x81\x87\x02\x8c\x08\x0c\x81\x83\x02\x8b\x08"
  "\x0a\x81\x83\x02\x8a\x08\x08\x81\x83\x02\x89\x08\x06\x81\x83\x02"
  "\x88\x08\x04\x83\x04\x19\x24\xca\x01\x02\x6d\xa0\x08\x1c\x81\x85"
  "\x02\x9f\x08\x1a\x81\x85\x02\x9e\x08\x18\x81\x85\x02\x9d\x08\x16"
  "\x81\x85\x02\x9c\x08\x14\x81\x85\x02\x9b\x08\x12\x81\x85\x02\x9a"
  "\x08\x10\x81\x85\x02\x99\x08\x0e\x81\x85\x02\x98\x08\x0c\x81\x83"
  "\x02\x97\x08\x0a\x81\x83\x02\x96\x08\x08\x81\x83\x02\x95\x08\x06"
  "\x81\x83\x02\x94\x08\x04\x83\x04\x1b\x21\x15\x02\x6e\xaf\x01\xab"
  "\x08\x18\x81\x85\x02\xaa\x08\x16\x81\x85\x02\xa9\x08\x14\x81\x83"
  "\x02\xa8\x08\x12\x81\x83\x02\xa7\x08\x10\x81\x83\x02\xa6\x08\x0e"
  "\x81\x83\x02\xa5\x08\x0c\x81\x83\x02\xa4\x08\x0a\x81\x83\x02\xa3"
  "\x08\x08\x81\x83\x02\xa2\x08\x06\x81\x83\x02\xa1\x08\x04\x83\x04"
  "\x17\x1e\xcd\x01\x02\x6f\xb8\x08\x1c\x81\x85\x02\xb7\x08\x1a\x81"
  "\x85\x02\xb6\x08\x18\x81\x85\x02\xb5\x08\x16\x81\x85\x02\xb4\x08"
  "\x14\x81\x85\x02\xb3\x08\x12\x81\x85\x02\xb2\x08\x10\x81\x85\x02"
  "\xb1\x08\x0e\x81\x85\x02\xb0\x08\x0c\x81\x83\x02\xaf\x08\x0a\x81"
  "\x83\x02\xae\x08\x08\x81\x83\x02\xad\x08\x06\x81\x83\x02\xac\x08"
  "\x04\x83\x04\x1b\x21\xce\x01\x02\x70\xba\x08\x06\x81\x83\x02\xb9"
  "\x08\x04\x83\x04\x05\x0a\xcf\x01\x02\x71\x03\x16\x02\xc1\x08\x10"
  "\x81\x85\x02\xc0\x08\x0e\x81\x85\x02\xbf\x08\x0c\x81\x83\x02\xbe"
  "\x08\x0a\x81\x85\x02\xbd\x08\x08\x81\x85\x02\xbc\x08\x06\x81\x85"
  "\x02\xbb\x08\x04\x83\x04\x0f\x19\xd0\x01\x02\x72\x61\xc9\x08\x12"
  "\x81\x85\x02\xc8\x08\x10\x81\x85\x02\xc7\x08\x0e\x81\x83\x02\xc6"
  "\x08\x0c\x81\x83\x02\xc5\x08\x0a\x81\x83\x02\xc4\x08\x08\x81\x83"
  "\x02\xc3\x08\x06\x81\x83\x02\xc2\x08\x04\x83\x04\x11\x18\xd1\x01"
  "\x02\x73\x24\x1e\xd8\x08\x20\x81\x83\x02\xd7\x08\x1e\x81\x85\x02"
  "\xd6\x08\x1c\x81\x85\x02\xd5\x08\x1a\x81\x85\x02\xd4\x08\x18\x81"
  "\x85\x02\xd3\x08\x16\x81\x85\x02\xd2\x08\x14\x81\x85\x02\xd1\x08"
  "\x12\x81\x85\x02\xd0\x08\x10\x81\x85\x02\xcf\x08\x0e\x81\x85\x02"
  "\xce\x08\x0c\x81\x83\x02\xcd\x08\x0a\x81\x85\x02\xcc\x08\x08\x81"
  "\x85\x02\xcb\x08\x06\x83\x04\xca\x08\x04\x81\x83\x02\x1f\x2a\x24"
  "\x02\x74\x61\x04\x0d\x02\xe1\x08\x14\x81\x85\x02\xe0\x08\x12\x81"
  "\x85\x02\xdf\x08\x10\x81\x85\x02\xde\x08\x0e\x81\x83\x02\xdd\x08"
  "\x0c\x81\x85\x02\xdc\x08\x0a\x81\x85\x02\xdb\x08\x08\x81\x85\x02"
  "\xda\x08\x06\x81\x85\x02\xd9\x08\x04\x83\x04\x13\x1d\xd2\x01\x02"
  "\x75\xb8\x01\x03\x16\x02\xe5\x08\x0a\x81\x83\x02\xe4\x08\x08\x81"
  "\x85\x02\xe3\x08\x06\x81\x85\x02\xe2\x08\x04\x83\x04\x09\x13\xd3"
  "\x01\x02\x76\x61\x04\x1a\x6f\x70\x74\x69\x6d\x69\x7a\x65\x2d\x67"
  "\x72\x6f\x75\x70\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\xd4"
  "\x01\x02\xe6\x08\x04\x83\x04\x03\x0a\xd5\x01\x02\x77\x04\xd4\x01"
  "\x02\xe7\x08\x04\x83\x04\x03\x0a\xd6\x01\x02\x78\x04\xd4\x01\x02"
  "\xe8\x08\x04\x83\x04\x03\xd7\x01\x02\x79\xc1\x01\x04\xd4\x01\x02"
  "\xe9\x08\x04\x83\x04\x03\x0a\xd8\x01\x02\x7a\x16\x02\x03\x65\x05"
  "\x64\x04\x0d\x04\xee\x08\x0c\x81\x89\x02\xed\x08\x0a\x81\x87\x02"
  "\xec\x08\x08\x81\x87\x02\xeb\x08\x06\x81\x85\x02\xea\x08\x04\x84"
  "\x06\x0b\x18\x0d\x02\x7b\x04\x07\x64\x65\x6c\x65\x74\x65\x02\xf1"
  "\x08\x08\x81\x89\x02\xf0\x08\x06\x81\x87\x02\xef\x08\x04\x85\x08"
  "\x07\x0f\xd9\x01\x02\x7c\x04\x14\x66\x6c\x61\x74\x74\x65\x6e\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x73\xda\x01\x02\xf4\x08"
  "\x08\x81\x85\x02\xf3\x08\x06\x81\x83\x02\xf2\x08\x04\x83\x04\x07"
  "\x0f\xdb\x01\x02\x7d\x04\x0e\x02\x80\x09\x1a\xfd\xff\x03\xff\x08"
  "\x18\xfd\xff\x03\xfe\x08\x16\xfd\xff\x03\xfd\x08\x14\xfd\xff\x03"
  "\xfc\x08\x12\xfd\xff\x03\xfb\x08\x10\xfd\xff\x03\xfa\x08\x0e\xfd"
  "\xff\x03\xf9\x08\x0c\xfd\xff\x03\xf8\x08\x0a\xfd\xff\x03\xf7\x08"
  "\x08\xfd\xff\x03\xf6\x08\x06\xff\xff\x03\xf5\x08\x04\x84\x06\x19"
  "\x22\x0e\x02\x7e\x04\x3d\x3d\x3e\x03\x3d\x3d\x02\x04\x61\x6c\x6c"
  "\x1a\x64\x65\x62\x75\x67\x3a\x74\x72\x61\x63\x65\x2d\x6f\x70\x74"
  "\x69\x6d\x69\x7a\x61\x74\x69\x6f\x6e\x3f\x02\x02\x12\x74\x72\x61"
  "\x63\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x03\x0b"
  "\x66\x72\x65\x73\x68\x2d\x6c\x69\x6e\x65\xdc\x01\x04\x03\x70\x70"
  "\xdd\x01\x04\x0a\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69"
  "\x6e\x67\x0a\x04\x06\x77\x72\x69\x74\x65\x03\x08\x6e\x65\x77\x6c"
  "\x69\x6e\x65\xde\x01\x08\x8c\x09\x1a\x81\x8b\x02\x8b\x09\x18\x81"
  "\x8b\x02\x8a\x09\x16\x81\x8b\x02\x89\x09\x14\x81\x8b\x02\x88\x09"
  "\x12\x81\x8b\x02\x87\x09\x10\x81\x85\x02\x86\x09\x0e\x81\x8b\x02"
  "\x85\x09\x0c\x81\x8b\x02\x84\x09\x0a\x81\x8b\x02\x83\x09\x08\x81"
  "\x89\x02\x82\x09\x06\x81\x89\x02\x81\x09\x04\xfc\x09\x19\x31\xdf"
  "\x01\x02\x7f\x02\x3a\x02\x3b\x02\x02\x03\xdc\x01\x04\x0a\x02\xde"
  "\x01\x03\xde\x01\x04\xdd\x01\x07\x96\x09\x16\x81\x83\x02\x95\x09"
  "\x14\x81\x83\x02\x94\x09\x12\x81\x83\x02\x93\x09\x10\x81\x83\x02"
  "\x92\x09\x0e\x81\x83\x02\x91\x09\x0c\x81\x83\x02\x90\x09\x0a\x81"
  "\x87\x02\x8f\x09\x08\x81\x85\x02\x8e\x09\x06\x84\x06\x8d\x09\x04"
  "\x81\x85\x02\x15\x29\xde\x01\x7f\xdd\x01\xdd\x01\xde\x01\x06\xdf"
  "\x01\x04\x0e\x04\xdb\x01\x04\xd9\x01\x04\x0d\x04\x14\x6e\xda\x01"
  "\x65\x64\xd4\x01\x80\x01\x46\x02\x2b\xdf\x01\x81\x01\xd8\x01\x04"
  "\xd7\x01\x04\xd6\x01\x04\x80\x01\x62\x02\x2a\xde\x01\x81\x01\xd5"
  "\x01\x04\x80\x01\xb8\x01\x81\x01\xd3\x01\x04\x80\x01\x0b\x76\x65"
  "\x63\x74\x6f\x72\x2d\x6d\x61\x70\xdd\x01\x81\x01\x80\x01\x61\xde"
  "\x01\x81\x01\x24\x06\xd2\x01\x04\x80\x01\xdd\x01\x81\x01\x80\x01"
  "\x61\x81\x01\xd1\x01\x04\xd0\x01\x04\x80\x01\x82\x01\x80\x01\xad"
  "\x01\x82\x01\x82\x01\x81\x01\xce\x01\x04\xcf\x01\x04\x80\x01\x82"
  "\x01\x80\x01\xa9\x01\x82\x01\x82\x01\x81\x01\x81\x01\x15\x04\xcd"
  "\x01\x04\x80\x01\xa9\x01\x81\x01\x80\x01\xaf\x01\xdf\x01\x81\x01"
  "\x81\x01\x9e\x01\x04\xca\x01\x04\x80\x01\xa9\x01\x81\x01\x81\x01"
  "\x80\x01\x46\xdf\x01\x81\x01\x83\x01\x04\xcc\x01\x04\x80\x01\xa9"
  "\x01\x81\x01\x80\x01\x46\xdf\x01\x81\x01\x81\x01\xc9\x01\x04\xcb"
  "\x01\x04\x80\x01\xa9\x01\x81\x01\x81\x01\x80\x01\xa9\x01\x81\x01"
  "\x81\x01\x81\x01\xc7\x01\x04\xc8\x01\x04\x80\x01\xa9\x01\x81\x01"
  "\x80\x01\xa9\x01\x81\x01\x81\x01\x81\x01\x81\x01\xc5\x01\x04\xc6"
  "\x01\x04\xc3\x01\x04\xc4\x01\x04\x80\x01\xa9\x01\x81\x01\x81\x01"
  "\x80\x01\xc1\x01\xc0\x01\x04\xbe\x01\x04\xbf\x01\x04\x80\x01\xa9"
  "\x01\x81\x01\x81\x01\xbc\x01\x04\xbd\x01\x04\x80\x01\xa9\x01\x81"
  "\x01\x81\x01\xba\x01\x04\xbb\x01\x04\x80\x01\xa9\x01\x81\x01\xb9"
  "\x01\x04\x80\x01\xa9\x01\x81\x01\xb7\x01\x04\xc2\x01\xb5\x01\x1a"
  "\x64\x65\x66\x69\x6e\x65\x2d\x70\x65\x65\x70\x68\x6f\x6c\x65\x2d"
  "\x6f\x70\x74\x69\x6d\x69\x7a\x65\x72\xdf\x01\x16\x23\x04\x91\x01"
  "\x04\xb6\x01\x04\x80\x01\x1a\x82\x01\xde\x01\x82\x01\x81\x01\x81"
  "\x01\xb4\x01\x04\x80\x01\xde\x01\x82\x01\x81\x01\xde\x01\x81\x01"
  "\xb3\x01\x04\x80\x01\xde\x01\x82\x01\x81\x01\xb1\x01\x04\x80\x01"
  "\xaf\x01\xde\x01\x81\x01\xb0\x01\x04\x80\x01\xad\x01\xde\x01\x81"
  "\x01\xae\x01\x04\x80\x01\xa9\x01\x81\x01\x81\x01\xac\x01\x04\x80"
  "\x01\xa9\x01\x81\x01\x81\x01\x81\x01\xab\x01\x04\x80\x01\x81\x01"
  "\xa8\x01\x04\x80\x01\x82\x01\x81\x01\x80\x01\x44\x81\x01\xa7\x01"
  "\x04\x80\x01\x46\x80\x01\x47\x81\x01\x82\x01\x81\x01\xa6\x01\x04"
  "\x9d\x01\x95\x01\x9b\x01\x99\x01\xa0\x01\x97\x01\x89\x01\xb2\x01"
  "\xaa\x01\xa5\x01\x77\x8a\x01\x8e\x01\x24\x64\x65\x66\x69\x6e\x65"
  "\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x70\x6f\x69\x6e\x74\x65\x72"
  "\x2d\x6f\x70\x74\x69\x6d\x69\x7a\x61\x74\x69\x6f\x6e\xde\x01\x8d"
  "\x01\x1c\x64\x65\x66\x69\x6e\x65\x2d\x70\x6f\x69\x6e\x74\x65\x72"
  "\x2d\x6f\x70\x74\x69\x6d\x69\x7a\x61\x74\x69\x6f\x6e\xdd\x01\x8b"
  "\x01\x17\x0c\x85\x01\x70\x73\x74\x3c\x7d\x79\x7b\x6c\x67\x6b\x6a"
  "\x66\x63\x18\x69\x10\x64\x65\x6c\x61\x79\x2d\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x0b\x64\x65\x6c\x61\x79\x2d\x63\x61\x6c\x6c\x4b"
  "\x15\x62\x69\x6e\x64\x2d\x64\x65\x6c\x61\x79\x65\x64\x2d\x6c\x61"
  "\x6d\x62\x64\x61\x73\x57\x58\x71\x51\x15\x6d\x61\x6b\x65\x2d\x6c"
  "\x6f\x6f\x70\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x3f\x42"
  "\x4d\x4a\x16\x6d\x61\x6b\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x6b"
  "\x73\x2d\x6c\x61\x6d\x62\x64\x61\x17\x6d\x61\x6b\x65\x2d\x6d\x61"
  "\x74\x63\x68\x65\x72\x2d\x6b\x73\x2d\x6c\x61\x6d\x62\x64\x61\x48"
  "\x10\x62\x61\x63\x6b\x74\x72\x61\x63\x6b\x69\x6e\x67\x2d\x6b\x66"
  "\x41\x12\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x70\x6f\x69\x6e"
  "\x74\x65\x72\x13\x77\x69\x74\x68\x2d\x76\x61\x6c\x75\x65\x2d\x62"
  "\x69\x6e\x64\x69\x6e\x67\x0f\x3b\x8f\x01\x04\xa4\x01\x04\x76\x04"
  "\xa3\x01\x04\xa2\x01\x04\xa1\x01\x04\x9f\x01\x04\x9c\x01\x04\x9a"
  "\x01\x04\x98\x01\x04\x96\x01\x04\x94\x01\x04\x93\x01\x04\x92\x01"
  "\x04\x90\x01\x04\x8c\x01\x04\x59\x04\x88\x01\x04\x87\x01\x04\x86"
  "\x01\x04\x84\x01\x06\x7f\x04\x72\x04\x7e\x04\x3d\x04\x7c\x04\x7a"
  "\x04\x78\x04\x75\x04\x6f\x04\x6d\x04\x68\x04\x60\x04\x5f\x04\x5e"
  "\x04\x5c\x04\x5d\x04\x02\x5d\x03\x23\x5b\x5a\x04\x5b\x04\x56\x04"
  "\x55\x04\x54\x04\x53\x04\x52\x04\x50\x04\x4f\x04\x4e\x04\x4c\x04"
  "\x49\x04\x45\x04\x43\x04\x40\x04\x3e\x04\x3b\x2f\x28\x15\x67\x6c"
  "\x6f\x62\x61\x6c\x2d\x70\x61\x72\x73\x65\x72\x2d\x6d\x61\x63\x72"
  "\x6f\x73\x39\x16\x63\x75\x72\x72\x65\x6e\x74\x2d\x70\x61\x72\x73"
  "\x65\x72\x2d\x6d\x61\x63\x72\x6f\x73\x37\x14\x6c\x6f\x6f\x6b\x75"
  "\x70\x2d\x70\x61\x72\x73\x65\x72\x2d\x6d\x61\x63\x72\x6f\x14\x64"
  "\x65\x66\x69\x6e\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x6d\x61\x63"
  "\x72\x6f\x15\x6c\x6f\x6f\x6b\x75\x70\x2d\x6d\x61\x74\x63\x68\x65"
  "\x72\x2d\x6d\x61\x63\x72\x6f\x15\x64\x65\x66\x69\x6e\x65\x2d\x6d"
  "\x61\x74\x63\x68\x65\x72\x2d\x6d\x61\x63\x72\x6f\x2a\x0a\x3b\x04"
  "\x3a\x04\x38\x04\x0b\x04\x34\x04\x31\x04\x35\x04\x32\x04\x2e\x04"
  "\x0a\x36\x27\x2c\x06\x30\x0d\x70\x61\x72\x73\x65\x72\x2d\x74\x61"
  "\x62\x6c\x65\xdc\x01\x33\x0e\x6d\x61\x74\x63\x68\x65\x72\x2d\x74"
  "\x61\x62\x6c\x65\xdb\x01\x2d\x07\x70\x61\x72\x65\x6e\x74\xda\x01"
  "\x2b\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x10\x3c\x70\x61\x72\x73\x65\x72\x2d\x6d\x61\x63\x72\x6f"
  "\x73\x3e\xd9\x01\xda\x01\xdb\x01\xdc\x01\x06\x63\x6c\x6f\x73\x65"
  "\x1a\x68\x61\x6e\x64\x6c\x65\x2d\x63\x6f\x6d\x70\x6c\x65\x78\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x20\x1c\x0d\x63\x68\x65"
  "\x63\x6b\x2d\x32\x2d\x61\x72\x67\x73\x0c\x63\x68\x65\x63\x6b\x2d"
  "\x31\x2d\x61\x72\x67\x0d\x63\x68\x65\x63\x6b\x2d\x30\x2d\x61\x72"
  "\x67\x73\x10\x11\x1c\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x65\x78"
  "\x74\x65\x72\x6e\x61\x6c\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x13\x09\x10\x26\x04\x25\x06\x22\x04\x21\x04\x1f\x04\x1e\x04\x1d"
  "\x04\x1b\x04\x19\x04\x12\x04\x10\x05\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\xd9\x01\x28\xc2\x01\x04"
  "\x04\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x04\x13\x72\x65\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73\x74"
  "\x72\x75\x63\x74\x6f\x72\x03\x11\x72\x65\x63\x6f\x72\x64\x2d\x70"
  "\x72\x65\x64\x69\x63\x61\x74\x65\x04\x10\x72\x65\x63\x6f\x72\x64"
  "\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x02\x29\x05\x2b\x04\xdd\x01"
  "\x04\xde\x01\x05\xdf\x01\x0a\x41\x84\x01\x80\x80\x04\x40\x82\x01"
  "\x81\x81\x02\x3f\x80\x01\x81\x81\x02\x3e\x7e\x81\x83\x02\x3d\x7c"
  "\x81\x83\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81\x83\x02\x3a\x76\x81"
  "\x83\x02\x39\x74\x81\x83\x02\x38\x72\x81\x83\x02\x37\x70\x81\x83"
  "\x02\x36\x6e\x81\x83\x02\x35\x6c\x81\x83\x02\x34\x6a\x81\x83\x02"
  "\x33\x68\x81\x83\x02\x32\x66\x81\x83\x02\x31\x64\x81\x83\x02\x30"
  "\x62\x81\x83\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d\x5c"
  "\x81\x83\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81\x83\x02\x2a\x56\x81"
  "\x83\x02\x29\x54\x81\x87\x02\x28\x52\x81\x83\x02\x27\x50\x81\x87"
  "\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x83\x02"
  "\x23\x48\x81\x83\x02\x22\x46\x81\x83\x02\x21\x44\x81\x83\x02\x20"
  "\x42\x81\x83\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x83\x02\x1d\x3c"
  "\x81\x83\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x83\x02\x1a\x36\x81"
  "\x83\x02\x19\x34\x81\x89\x02\x18\x32\x81\x85\x02\x17\x30\x81\x83"
  "\x02\x16\x2e\x81\x87\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x83\x02"
  "\x13\x28\x81\x83\x02\x12\x26\x81\x85\x02\x11\x24\x81\x83\x02\x10"
  "\x22\x81\x85\x02\x0f\x20\x81\x89\x02\x0e\x1e\x81\x83\x02\x0d\x1c"
  "\x81\x85\x02\x0c\x1a\x81\x89\x02\x0b\x18\x81\x83\x02\x0a\x16\x81"
  "\x85\x02\x09\x14\x81\x89\x02\x08\x12\x81\x83\x02\x07\x10\x81\x85"
  "\x02\x06\x0e\x81\x87\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x85\x02"
  "\x03\x08\x81\x89\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x83"
  "\x01\x82\x02";

SCHEME_OBJECT *
shared_so_data_83a827aa6f07bb5c (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_shared_so_data_83a827aa6f07bb5c [0]))), (sizeof (prog_shared_so_data_83a827aa6f07bb5c)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_78]));
}

DECLARE_COMPILED_DATA_NS ("shared.so", shared_so_data_83a827aa6f07bb5c)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("shared.so", "911e4f8b5ea3ce89")
