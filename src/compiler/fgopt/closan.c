/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:15-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_5 7
#define LABEL_1_9 9
#define LABEL_1_8 11
#define LABEL_1_11 13
#define LABEL_1_12 15
#define LABEL_1_14 17
#define LABEL_1_15 19
#define LABEL_1_18 21
#define LABEL_1_19 23
#define LABEL_1_16 25
#define LABEL_1_30 27
#define LABEL_1_17 29
#define LABEL_1_32 31
#define LABEL_1_34 33
#define LABEL_1_36 35
#define LABEL_1_20 37
#define TAG_1_21 17
#define LABEL_1_38 39
#define LABEL_1_39 41
#define LABEL_1_40 43
#define LABEL_1_22 45
#define LABEL_1_24 47
#define LABEL_1_27 49
#define TAG_1_28 23
#define LABEL_1_25 51
#define TAG_1_26 24
#define LABEL_1_46 53
#define LABEL_1_47 55
#define LABEL_1_48 57
#define LABEL_1_31 59
#define LABEL_1_50 61
#define LABEL_1_37 63
#define LABEL_1_33 65
#define LABEL_1_55 67
#define LABEL_1_56 69
#define LABEL_1_42 71
#define LABEL_1_58 73
#define LABEL_1_43 75
#define TAG_1_44 36
#define LABEL_1_59 77
#define LABEL_1_49 79
#define LABEL_1_52 81
#define LABEL_1_54 83
#define LABEL_1_60 85
#define TAG_1_61 41
#define LABEL_1_64 87
#define LABEL_1_65 89
#define LABEL_1_66 91
#define LABEL_1_67 93
#define ENVIRONMENT_LABEL_1_3 153
#define DEBUGGING_LABEL_1_2 152
#define OBJECT_1_16 151
#define OBJECT_1_15 150
#define OBJECT_1_14 149
#define OBJECT_1_13 148
#define OBJECT_1_12 147
#define OBJECT_1_11 146
#define OBJECT_1_10 145
#define OBJECT_1_9 144
#define OBJECT_1_8 143
#define OBJECT_1_7 142
#define OBJECT_1_6 141
#define OBJECT_1_5 140
#define OBJECT_1_4 139
#define OBJECT_1_3 138
#define OBJECT_1_2 137
#define OBJECT_1_1 136
#define OBJECT_1_0 135
#define EXECUTE_CACHE_1_69 95
#define EXECUTE_CACHE_1_68 97
#define EXECUTE_CACHE_1_63 99
#define EXECUTE_CACHE_1_62 101
#define EXECUTE_CACHE_1_57 103
#define EXECUTE_CACHE_1_53 105
#define EXECUTE_CACHE_1_51 107
#define EXECUTE_CACHE_1_45 109
#define EXECUTE_CACHE_1_41 111
#define EXECUTE_CACHE_1_35 113
#define EXECUTE_CACHE_1_29 115
#define EXECUTE_CACHE_1_23 117
#define EXECUTE_CACHE_1_13 119
#define EXECUTE_CACHE_1_10 121
#define EXECUTE_CACHE_1_7 123
#define FREE_REFERENCE_1_6 126
#define FREE_REFERENCE_1_5 127
#define FREE_REFERENCE_1_4 128
#define FREE_REFERENCE_1_3 129
#define FREE_REFERENCE_1_2 130
#define FREE_REFERENCE_1_1 131
#define FREE_REFERENCE_1_0 132
#define FREE_ASSIGNMENT_1_0 134
#define FREE_REFERENCES_LABEL_1_0 94
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd34;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd28;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_1_4);
      goto identify_closure_limitsB_49;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_51;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto label_52;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_1_12);
      goto lambda_2;

    case 7:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_1_15);
      goto lambda_12;

    case 9:
      current_block = (Rpc - LABEL_1_18);
      goto label_53;

    case 10:
      current_block = (Rpc - LABEL_1_19);
      goto label_54;

    case 11:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_30;

    case 12:
      current_block = (Rpc - LABEL_1_30);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_1_17);
      goto lambda_29;

    case 14:
      current_block = (Rpc - LABEL_1_32);
      goto label_55;

    case 15:
      current_block = (Rpc - LABEL_1_34);
      goto label_57;

    case 16:
      current_block = (Rpc - LABEL_1_36);
      goto label_56;

    case 17:
      current_block = (Rpc - LABEL_1_20);
      goto lambda_76;

    case 18:
      current_block = (Rpc - LABEL_1_38);
      goto label_58;

    case 19:
      current_block = (Rpc - LABEL_1_39);
      goto label_59;

    case 20:
      current_block = (Rpc - LABEL_1_40);
      goto label_60;

    case 21:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_11;

    case 22:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_31;

    case 23:
      current_block = (Rpc - LABEL_1_27);
      goto lambda_78;

    case 24:
      current_block = (Rpc - LABEL_1_25);
      goto swapB_77;

    case 25:
      current_block = (Rpc - LABEL_1_46);
      goto label_61;

    case 26:
      current_block = (Rpc - LABEL_1_47);
      goto label_62;

    case 27:
      current_block = (Rpc - LABEL_1_48);
      goto label_63;

    case 28:
      current_block = (Rpc - LABEL_1_31);
      goto continuation_22;

    case 29:
      current_block = (Rpc - LABEL_1_50);
      goto label_64;

    case 30:
      current_block = (Rpc - LABEL_1_37);
      goto lambda_25;

    case 31:
      current_block = (Rpc - LABEL_1_33);
      goto continuation_18;

    case 32:
      current_block = (Rpc - LABEL_1_55);
      goto label_65;

    case 33:
      current_block = (Rpc - LABEL_1_56);
      goto label_66;

    case 34:
      current_block = (Rpc - LABEL_1_42);
      goto continuation_38;

    case 35:
      current_block = (Rpc - LABEL_1_58);
      goto label_67;

    case 36:
      current_block = (Rpc - LABEL_1_43);
      goto lambda_80;

    case 37:
      current_block = (Rpc - LABEL_1_59);
      goto label_68;

    case 38:
      current_block = (Rpc - LABEL_1_49);
      goto continuation_28;

    case 39:
      current_block = (Rpc - LABEL_1_52);
      goto continuation_24;

    case 40:
      current_block = (Rpc - LABEL_1_54);
      goto continuation_20;

    case 41:
      current_block = (Rpc - LABEL_1_60);
      goto lambda_82;

    case 42:
      current_block = (Rpc - LABEL_1_64);
      goto lambda_35;

    case 43:
      current_block = (Rpc - LABEL_1_65);
      goto label_71;

    case 44:
      current_block = (Rpc - LABEL_1_66);
      goto label_69;

    case 45:
      current_block = (Rpc - LABEL_1_67);
      goto label_70;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (identify_closure_limitsB_73)
DEFLABEL (identify_closure_limitsB_49)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_87;
  Wrd8 = Wrd12;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_85;
  Wrd8 = Wrd12;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_25])));
  Rhp += 1;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  ((Wrd24.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (Rsp [2]) = (Wrd25.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_27])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd20.Obj) = (Rsp [5]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd9.pObj));

DEFLABEL (label_52)
  (Wrd8.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd9.pObj));

DEFLABEL (label_51)
  (Wrd8.Obj) = Rvl;
  goto label_86;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_24);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_41]));

DEFLABEL (lambda_74)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_1_12);
  (Wrd5.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_1_1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_89;

DEFLABEL (label_88)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 3);

DEFLABEL (label_89)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 28L) < ((unsigned long) (Wrd18.Lng))))
    goto label_88;
  ((Wrd16.pObj) [29]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_75)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_1_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_94;
  Wrd5 = Wrd9;

DEFLABEL (label_93)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_92;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_92;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_91)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_90;
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_90)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_20])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd32 = Wrd31;
  (Wrd33.Obj) = (Rsp [0]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_23]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (label_92)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_1_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_54)
  (Wrd11.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_18])), (Wrd6.pObj));

DEFLABEL (label_53)
  (Wrd5.Obj) = Rvl;
  goto label_93;

DEFLABEL (lambda_79)
DEFLABEL (lambda_29)
  INTERRUPT_CHECK (26, LABEL_1_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_106;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd19.Lng))))
    goto label_106;
  (Wrd13.Obj) = ((Wrd17.pObj) [11]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_105)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 1)
    goto label_98;
  (Wrd30.Obj) = (current_block [OBJECT_1_1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_97)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_96;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd41.Lng))))
    goto label_96;
  (Wrd35.Obj) = (Rsp [0]);
  ((Wrd39.pObj) [14]) = (Wrd35.Obj);

DEFLABEL (label_95)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_37]))));
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (label_96)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.Obj) = (current_block [OBJECT_1_8]);
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 3);

DEFLABEL (label_56)
  goto label_95;

DEFLABEL (label_98)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd52.Obj);
  if (! ((Wrd28.uLng) == 1))
    goto label_104;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_103)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_35]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_1_33);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_102;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_101)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_100;
  Wrd17 = Wrd21;

DEFLABEL (label_99)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_57]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_1_54);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_63]));

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_56])), (Wrd18.pObj));

DEFLABEL (label_66)
  (Wrd17.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_55]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_11]), 1);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_7]), 1);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_1_6]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_1_30);
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_1_31);
  (Wrd5.Obj) = (current_block [OBJECT_1_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_49]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_110;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd18.Lng))))
    goto label_110;
  (Wrd12.Obj) = ((Wrd16.pObj) [10]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_109)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_51]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_49);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_108;

DEFLABEL (label_107)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 3);

DEFLABEL (label_108)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd16.Lng))))
    goto label_107;
  ((Wrd14.pObj) [16]) = Rvl;
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_110)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_1_10]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_50]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_109;

DEFLABEL (lambda_76)
  CLOSURE_HEADER (LABEL_1_20);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_119;
  Wrd5 = Wrd9;

DEFLABEL (label_118)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_117;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_117;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_116)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_111;
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_111)
  (Wrd30.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_115;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 28L) < ((unsigned long) (Wrd39.Lng))))
    goto label_115;
  (Wrd31.Obj) = ((Wrd37.pObj) [29]);

DEFLABEL (label_114)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [2]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Rsp [2]) = (Wrd47.Obj);
  (Wrd53.Obj) = (current_block [OBJECT_1_0]);
  (Rsp [1]) = (Wrd53.Obj);
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 10)
    goto label_113;

DEFLABEL (label_112)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 3);

DEFLABEL (label_113)
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 28L) < ((unsigned long) (Wrd64.Lng))))
    goto label_112;
  ((Wrd62.pObj) [29]) = (Wrd47.Obj);
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_115)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Obj) = (current_block [OBJECT_1_0]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_40]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_60)
  (Wrd31.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_1_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_39]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_59)
  (Wrd11.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_38])), (Wrd6.pObj));

DEFLABEL (label_58)
  (Wrd5.Obj) = Rvl;
  goto label_118;

DEFLABEL (lambda_78)
  CLOSURE_HEADER (LABEL_1_27);

DEFLABEL (lambda_39)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_44);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_43])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_45]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_1_42);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_121;
  Wrd6 = Wrd10;

DEFLABEL (label_120)
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_121)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_58])), (Wrd7.pObj));

DEFLABEL (label_67)
  (Wrd6.Obj) = Rvl;
  goto label_120;

DEFLABEL (swapB_77)
  CLOSURE_HEADER (LABEL_1_25);

DEFLABEL (swapB_46)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_130;

DEFLABEL (label_129)
  Wrd5 = Wrd9;

DEFLABEL (label_128)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_127;

DEFLABEL (label_126)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_125)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_124;

DEFLABEL (label_123)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_122)
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_124)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_123;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_48])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_63)
  goto label_122;

DEFLABEL (label_127)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_126;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_47])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_62)
  goto label_125;

DEFLABEL (label_130)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_129;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_46])), (Wrd6.pObj));

DEFLABEL (label_61)
  (Wrd5.Obj) = Rvl;
  goto label_128;

DEFLABEL (lambda_81)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_1_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_53]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_1_52);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_131;
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_131)
  (Wrd7.Obj) = (current_block [OBJECT_1_12]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_13]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd22.uLng) == 10)
    goto label_133;

DEFLABEL (label_132)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 3);

DEFLABEL (label_133)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd20.Lng))))
    goto label_132;
  ((Wrd18.pObj) [27]) = (Wrd9.Obj);
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_80)
  CLOSURE_HEADER (LABEL_1_43);

DEFLABEL (lambda_37)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_6]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_135;
  Wrd5 = Wrd9;

DEFLABEL (label_134)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_61);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_60])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [2]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_62]));

DEFLABEL (label_135)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_59])), (Wrd6.pObj));

DEFLABEL (label_68)
  (Wrd5.Obj) = Rvl;
  goto label_134;

DEFLABEL (lambda_82)
  CLOSURE_HEADER (LABEL_1_60);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_64]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (lambda_83)
DEFLABEL (lambda_35)
  INTERRUPT_CHECK (26, LABEL_1_64);
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_142;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd47.Lng))))
    goto label_142;
  (Wrd7.Obj) = ((Wrd45.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_137;

DEFLABEL (label_136)
  (Wrd39.Obj) = (current_block [OBJECT_1_16]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_69]));

DEFLABEL (label_137)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_141;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_141;
  (Wrd10.Obj) = ((Wrd16.pObj) [4]);

DEFLABEL (label_140)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_139;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd32.Lng))))
    goto label_139;
  (Wrd26.Obj) = ((Wrd30.pObj) [4]);

DEFLABEL (label_138)
  (Rsp [1]) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_68]));

DEFLABEL (label_139)
  (Wrd35.Obj) = (current_block [OBJECT_1_15]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_67]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_70)
  (Wrd26.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_1_15]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_66]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_69)
  (Wrd10.Obj) = Rvl;
  goto label_140;

DEFLABEL (label_142)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.Obj) = (current_block [OBJECT_1_14]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_65]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_71)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_137;
  goto label_136;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define TAG_2_7 2
#define LABEL_2_9 9
#define LABEL_2_10 11
#define LABEL_2_11 13
#define ENVIRONMENT_LABEL_2_3 29
#define DEBUGGING_LABEL_2_2 28
#define OBJECT_2_6 27
#define OBJECT_2_5 26
#define OBJECT_2_4 25
#define OBJECT_2_3 24
#define OBJECT_2_2 23
#define OBJECT_2_1 22
#define OBJECT_2_0 21
#define EXECUTE_CACHE_2_13 15
#define EXECUTE_CACHE_2_12 17
#define EXECUTE_CACHE_2_8 19
#define FREE_REFERENCES_LABEL_2_0 14
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd9;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_2_4);
      goto analyze_procedure_5;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_procedure_11)
DEFLABEL (analyze_procedure_5)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 28L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd5.Obj) = ((Wrd11.pObj) [29]);

DEFLABEL (label_13)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_6])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd26 = Wrd23;
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  (Rsp [0]) = (Wrd22.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_13;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_2_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [3]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_19;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd45.Lng))))
    goto label_19;
  (Wrd9.Obj) = ((Wrd43.pObj) [19]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_2_6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_18;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd19.Lng))))
    goto label_18;
  (Wrd13.Obj) = ((Wrd17.pObj) [15]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_17)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [5]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (label_18)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_2_3]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [3]);
  (Wrd53.Obj) = (current_block [OBJECT_2_2]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_8 9
#define LABEL_3_10 11
#define LABEL_3_12 13
#define LABEL_3_15 15
#define LABEL_3_16 17
#define LABEL_3_17 19
#define LABEL_3_19 21
#define LABEL_3_13 23
#define LABEL_3_21 25
#define LABEL_3_24 27
#define LABEL_3_25 29
#define LABEL_3_22 31
#define ENVIRONMENT_LABEL_3_3 64
#define DEBUGGING_LABEL_3_2 63
#define OBJECT_3_13 62
#define OBJECT_3_12 61
#define OBJECT_3_11 60
#define OBJECT_3_10 59
#define OBJECT_3_9 58
#define OBJECT_3_8 57
#define OBJECT_3_7 56
#define OBJECT_3_6 55
#define OBJECT_3_5 54
#define OBJECT_3_4 53
#define OBJECT_3_3 52
#define OBJECT_3_2 51
#define OBJECT_3_1 50
#define OBJECT_3_0 49
#define EXECUTE_CACHE_3_23 33
#define EXECUTE_CACHE_3_20 35
#define EXECUTE_CACHE_3_18 37
#define EXECUTE_CACHE_3_14 39
#define EXECUTE_CACHE_3_11 41
#define EXECUTE_CACHE_3_9 43
#define EXECUTE_CACHE_3_7 45
#define FREE_REFERENCE_3_0 48
#define FREE_REFERENCES_LABEL_3_0 32
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd41;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd19;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd8;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_3_4);
      goto analyze_combination_22;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_3_15);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_3_16);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_3_17);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_3_19);
      goto continuation_18;

    case 10:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_3_21);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_3_24);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_3_25);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_3_22);
      goto lambda_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_combination_31)
DEFLABEL (analyze_combination_22)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_53;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_53;
  (Wrd7.Obj) = ((Wrd11.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_52)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_3_19);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_3_7]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_20]));

DEFLABEL (label_33)
  (Wrd11.Obj) = (Rsp [0]);
  if (! ((Wrd11.Obj) == (current_block [OBJECT_3_2])))
    goto label_35;

DEFLABEL (label_34)
  Rvl = (current_block [OBJECT_3_6]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd13.Obj) = (Rsp [1]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_42;
  Wrd15 = Wrd19;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_40;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_40;
  (Wrd21.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_39)
  (Wrd37.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd37.Obj))
    goto label_37;

DEFLABEL (label_36)
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (label_37)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_38;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd50.Lng))))
    goto label_38;
  (Wrd41.Obj) = ((Wrd48.pObj) [19]);
  if ((Wrd41.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_36;

DEFLABEL (label_38)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (current_block [OBJECT_3_5]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_36;

DEFLABEL (label_40)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_3_4]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_26)
  (Wrd21.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_15])), (Wrd16.pObj));

DEFLABEL (label_25)
  (Wrd15.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_51;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_50)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd71.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_3_7]))
    goto label_45;
  (Wrd7.Obj) = (Rsp [1]);
  goto label_44;

DEFLABEL (label_45)
  (Wrd7.Obj) = (current_block [OBJECT_3_8]);

DEFLABEL (label_44)
DEFLABEL (label_49)
  (Wrd31.Obj) = (Rsp [5]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_48;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd30.Lng))))
    goto label_48;
  ((Wrd28.pObj) [16]) = (Wrd7.Obj);

DEFLABEL (label_47)
  (Wrd8.Obj) = (Rsp [0]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_3_11])))
    goto label_46;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (Rsp [4]) = (Wrd19.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd21.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (label_46)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_25);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_20]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_3_24);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (label_48)
  (Wrd33.Obj) = (Rsp [5]);
  (Wrd34.Obj) = (current_block [OBJECT_3_9]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_10]), 3);

DEFLABEL (label_29)
  goto label_47;

DEFLABEL (label_51)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (lambda_32)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_3_22);
  (Wrd5.Obj) = (current_block [OBJECT_3_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_3_13]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_55;

DEFLABEL (label_54)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_10]), 3);

DEFLABEL (label_55)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd18.Lng))))
    goto label_54;
  ((Wrd16.pObj) [27]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_3_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_6 5
#define LABEL_4_5 7
#define LABEL_4_8 9
#define LABEL_4_9 11
#define LABEL_4_10 13
#define LABEL_4_11 15
#define TAG_4_12 6
#define LABEL_4_17 17
#define LABEL_4_13 19
#define LABEL_4_20 21
#define LABEL_4_18 23
#define LABEL_4_15 25
#define TAG_4_16 11
#define LABEL_4_22 27
#define LABEL_4_23 29
#define TAG_4_24 13
#define LABEL_4_26 31
#define LABEL_4_27 33
#define LABEL_4_28 35
#define LABEL_4_25 37
#define LABEL_4_30 39
#define LABEL_4_29 41
#define LABEL_4_31 43
#define LABEL_4_32 45
#define ENVIRONMENT_LABEL_4_3 65
#define DEBUGGING_LABEL_4_2 64
#define OBJECT_4_6 63
#define OBJECT_4_5 62
#define OBJECT_4_4 61
#define OBJECT_4_3 60
#define OBJECT_4_2 59
#define OBJECT_4_1 58
#define OBJECT_4_0 57
#define EXECUTE_CACHE_4_21 47
#define EXECUTE_CACHE_4_19 49
#define EXECUTE_CACHE_4_14 51
#define EXECUTE_CACHE_4_7 53
#define FREE_REFERENCE_4_0 56
#define FREE_REFERENCES_LABEL_4_0 46
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd34;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd42;
  machine_word Wrd29;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_4_4);
      goto compatibility_class_29;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto label_31;

    case 2:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_32;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_4_10);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_4_11);
      goto lambda_44;

    case 7:
      current_block = (Rpc - LABEL_4_17);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_26;

    case 9:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_4_15);
      goto loop_23;

    case 12:
      current_block = (Rpc - LABEL_4_22);
      goto label_36;

    case 13:
      current_block = (Rpc - LABEL_4_23);
      goto lambda_46;

    case 14:
      current_block = (Rpc - LABEL_4_26);
      goto label_37;

    case 15:
      current_block = (Rpc - LABEL_4_27);
      goto label_38;

    case 16:
      current_block = (Rpc - LABEL_4_28);
      goto label_39;

    case 17:
      current_block = (Rpc - LABEL_4_25);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_4_30);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_4_29);
      goto continuation_14;

    case 20:
      current_block = (Rpc - LABEL_4_31);
      goto label_40;

    case 21:
      current_block = (Rpc - LABEL_4_32);
      goto label_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compatibility_class_43)
DEFLABEL (compatibility_class_29)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_55;
  Wrd8 = Wrd12;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_47;
  Rvl = (current_block [OBJECT_4_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_53;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_52)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_51;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd24.Lng))))
    goto label_51;
  (Wrd16.Obj) = ((Wrd22.pObj) [4]);

DEFLABEL (label_50)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_49;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd38.Lng))))
    goto label_49;
  (Wrd33.Obj) = ((Wrd36.pObj) [4]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_48)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd47.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_11])));
  Rhp += 3;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd47.pObj)));
  Wrd52 = Wrd47;
  (Wrd53.Obj) = (Rsp [2]);
  ((Wrd52.pObj) [2]) = (Wrd53.Obj);
  (Wrd51.Obj) = (Rsp [1]);
  ((Wrd52.pObj) [3]) = (Wrd51.Obj);
  (Wrd49.Obj) = (Rsp [0]);
  ((Wrd52.pObj) [4]) = (Wrd49.Obj);
  (Rsp [2]) = (Wrd46.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_49)
  (Wrd41.Obj) = (current_block [OBJECT_4_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_4_2]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 2);

DEFLABEL (label_33)
  (Wrd16.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_6])), (Wrd9.pObj));

DEFLABEL (label_31)
  (Wrd8.Obj) = Rvl;
  goto label_54;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_4_11);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_15])));
  Rhp += 3;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  Wrd35 = Wrd39;
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [4]);
  ((Wrd35.pObj) [2]) = (Wrd38.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  ((Wrd35.pObj) [3]) = (Wrd33.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  ((Wrd35.pObj) [4]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_61;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_60)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_58;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;

DEFLABEL (label_58)
  (Wrd7.Obj) = (current_block [OBJECT_4_6]);
  goto label_56;

DEFLABEL (label_57)
  (Wrd7.Obj) = (current_block [OBJECT_4_5]);

DEFLABEL (label_56)
DEFLABEL (label_59)
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd8.Obj);
  goto loop_23;

DEFLABEL (label_61)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 1);

DEFLABEL (label_35)
  (Wrd7.Obj) = Rvl;
  goto label_60;

DEFLABEL (loop_45)
DEFLABEL (loop_23)
  INTERRUPT_CHECK (26, LABEL_4_15);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_62;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_62)
  if (! ((Wrd6.uLng) == 1))
    goto label_64;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_63)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 10));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_23])));
  Rhp += 7;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd37 = Wrd20;
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [2]);
  ((Wrd37.pObj) [2]) = (Wrd40.Obj);
  (Wrd36.Obj) = ((Wrd39.pObj) [3]);
  ((Wrd37.pObj) [3]) = (Wrd36.Obj);
  (Wrd32.Obj) = ((Wrd39.pObj) [4]);
  ((Wrd37.pObj) [4]) = (Wrd32.Obj);
  ((Wrd37.pObj) [5]) = (Wrd38.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  ((Wrd37.pObj) [6]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  ((Wrd37.pObj) [7]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd37.pObj) [8]) = (Wrd22.Obj);
  (Rsp [3]) = (Wrd19.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_4_25);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_64)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_4_23);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_78;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_78;
  if ((Wrd7.Obj) == (Wrd9.Obj))
    goto label_66;

DEFLABEL (label_65)
  Rvl = (current_block [OBJECT_4_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_77;
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_77;
  if (! ((Wrd23.Obj) == (Wrd25.Obj)))
    goto label_65;

DEFLABEL (label_76)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [7]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_75;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd35.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_74)
  (Rsp [1]) = (Wrd35.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_29]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [8]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_4_29);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_69;

DEFLABEL (label_68)
  (Wrd7.Obj) = (current_block [OBJECT_4_6]);

DEFLABEL (label_67)
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [5]);
  (Rsp [0]) = (Wrd8.Obj);
  goto loop_23;

DEFLABEL (label_69)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [8]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_73;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd23.Lng))))
    goto label_73;
  (Wrd11.Obj) = ((Wrd21.pObj) [4]);

DEFLABEL (label_72)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_71;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd41.Lng))))
    goto label_71;
  (Wrd35.Obj) = ((Wrd39.pObj) [4]);

DEFLABEL (label_70)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [2]);
  if (! ((Wrd35.Obj) == (Wrd50.Obj)))
    goto label_68;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.Obj) = ((Wrd49.pObj) [8]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_21]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_4_30);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_68;
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd7.Obj) = ((Wrd60.pObj) [6]);
  goto label_67;

DEFLABEL (label_71)
  (Wrd44.Obj) = (current_block [OBJECT_4_2]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_32]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 2);

DEFLABEL (label_41)
  (Wrd35.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [8]);
  (Wrd31.Obj) = (current_block [OBJECT_4_2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_31]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 2);

DEFLABEL (label_40)
  (Wrd11.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_28]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 1);

DEFLABEL (label_39)
  (Wrd35.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [3]);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  goto label_76;

DEFLABEL (label_78)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [4]);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  goto label_66;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_9 9
#define ENVIRONMENT_LABEL_5_3 22
#define DEBUGGING_LABEL_5_2 21
#define OBJECT_5_3 20
#define OBJECT_5_2 19
#define OBJECT_5_1 18
#define OBJECT_5_0 17
#define EXECUTE_CACHE_5_10 11
#define EXECUTE_CACHE_5_8 13
#define EXECUTE_CACHE_5_6 15
#define FREE_REFERENCES_LABEL_5_0 10
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_5_4);
      goto close_combination_argumentsB_3;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_combination_argumentsB_7)
DEFLABEL (close_combination_argumentsB_3)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (current_block [OBJECT_5_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Wrd5.Obj) = (current_block [OBJECT_5_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_10;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd14.Lng))))
    goto label_10;
  (Wrd8.Obj) = ((Wrd12.pObj) [14]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (label_10)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_5_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_3]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_8 7
#define ENVIRONMENT_LABEL_6_3 17
#define DEBUGGING_LABEL_6_2 16
#define OBJECT_6_0 15
#define EXECUTE_CACHE_6_10 9
#define EXECUTE_CACHE_6_9 11
#define EXECUTE_CACHE_6_7 13
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto close_valuesB_2;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_valuesB_5)
DEFLABEL (close_valuesB_2)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_6_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_10 9
#define LABEL_7_11 11
#define LABEL_7_12 13
#define LABEL_7_8 15
#define LABEL_7_14 17
#define LABEL_7_16 19
#define ENVIRONMENT_LABEL_7_3 39
#define DEBUGGING_LABEL_7_2 38
#define OBJECT_7_6 37
#define OBJECT_7_5 36
#define OBJECT_7_4 35
#define OBJECT_7_3 34
#define OBJECT_7_2 33
#define OBJECT_7_1 32
#define OBJECT_7_0 31
#define EXECUTE_CACHE_7_17 21
#define EXECUTE_CACHE_7_15 23
#define EXECUTE_CACHE_7_13 25
#define EXECUTE_CACHE_7_9 27
#define EXECUTE_CACHE_7_7 29
#define FREE_REFERENCES_LABEL_7_0 20
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_7_4);
      goto close_if_unreachableB_10;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_10);
      goto close_8;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_7_12);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_7_16);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_if_unreachableB_17)
DEFLABEL (close_if_unreachableB_10)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_27;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_27;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_26)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  Rvl = (current_block [OBJECT_7_4]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;

DEFLABEL (label_20)
  goto close_8;

DEFLABEL (label_21)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_23;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd17.Lng))))
    goto label_23;
  (Wrd9.Obj) = ((Wrd15.pObj) [19]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_20;

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (label_23)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_7_5]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_6]), 2);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_20;

DEFLABEL (label_25)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (Wrd8.Obj))
    goto label_24;
  goto close_8;

DEFLABEL (label_27)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_7_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (close_18)
DEFLABEL (close_8)
  INTERRUPT_CHECK (26, LABEL_7_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_31;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_31;
  (Wrd6.Obj) = ((Wrd12.pObj) [3]);

DEFLABEL (label_30)
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_29;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd30.Lng))))
    goto label_29;
  (Wrd22.Obj) = ((Wrd28.pObj) [4]);

DEFLABEL (label_28)
  (Rsp [3]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (label_29)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.Obj) = (current_block [OBJECT_7_3]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_14)
  (Wrd22.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (current_block [OBJECT_7_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_13)
  (Wrd6.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_8 9
#define LABEL_8_10 11
#define LABEL_8_11 13
#define LABEL_8_12 15
#define LABEL_8_13 17
#define LABEL_8_14 19
#define LABEL_8_18 21
#define LABEL_8_16 23
#define LABEL_8_21 25
#define LABEL_8_19 27
#define LABEL_8_23 29
#define LABEL_8_25 31
#define ENVIRONMENT_LABEL_8_3 62
#define DEBUGGING_LABEL_8_2 61
#define OBJECT_8_9 60
#define OBJECT_8_8 59
#define OBJECT_8_7 58
#define OBJECT_8_6 57
#define OBJECT_8_5 56
#define OBJECT_8_4 55
#define OBJECT_8_3 54
#define OBJECT_8_2 53
#define OBJECT_8_1 52
#define OBJECT_8_0 51
#define EXECUTE_CACHE_8_27 33
#define EXECUTE_CACHE_8_26 35
#define EXECUTE_CACHE_8_24 37
#define EXECUTE_CACHE_8_22 39
#define EXECUTE_CACHE_8_20 41
#define EXECUTE_CACHE_8_17 43
#define EXECUTE_CACHE_8_15 45
#define EXECUTE_CACHE_8_9 47
#define EXECUTE_CACHE_8_6 49
#define FREE_REFERENCES_LABEL_8_0 32
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd63;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_8_4);
      goto close_procedureB_15;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_8_11);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_8_12);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_8_13);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_8_14);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_8_18);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_8_16);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_8_21);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_8_19);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_8_23);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_8_25);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_procedureB_24)
DEFLABEL (close_procedureB_15)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_38;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd23.Lng))))
    goto label_38;
  (Wrd7.Obj) = ((Wrd21.pObj) [19]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;

DEFLABEL (label_25)
  Rvl = (current_block [OBJECT_8_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_8);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_36)
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_35;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd69.Lng))))
    goto label_35;
  (Wrd63.Obj) = (current_block [OBJECT_8_6]);
  ((Wrd67.pObj) [19]) = (Wrd63.Obj);

DEFLABEL (label_34)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_33;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd52.Lng))))
    goto label_33;
  (Wrd23.Obj) = ((Wrd50.pObj) [27]);
  if (! ((Wrd23.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_31;

DEFLABEL (label_30)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_17]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_19]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_8_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_24]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_8_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_26]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_8_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_27]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_8_18);

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_28;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd15.Lng))))
    goto label_28;
  (Wrd7.Obj) = ((Wrd13.pObj) [16]);

DEFLABEL (label_27)
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_22]));

DEFLABEL (label_28)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_8_9]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_21]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_22)
  (Wrd7.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_31)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_32;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd38.Lng))))
    goto label_32;
  ((Wrd36.pObj) [27]) = ((SCHEME_OBJECT) 0);
  goto label_30;

DEFLABEL (label_32)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.Obj) = (current_block [OBJECT_8_8]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 3);

DEFLABEL (label_19)
  goto label_30;

DEFLABEL (label_33)
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.Obj) = (current_block [OBJECT_8_8]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_31;

DEFLABEL (label_35)
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.Obj) = (current_block [OBJECT_8_0]);
  (Wrd74.Obj) = (current_block [OBJECT_8_6]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_7]), 3);

DEFLABEL (label_21)
  goto label_34;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_8_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (current_block [OBJECT_8_0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define LABEL_9_7 7
#define TAG_9_8 2
#define LABEL_9_12 9
#define LABEL_9_14 11
#define LABEL_9_15 13
#define LABEL_9_17 15
#define LABEL_9_18 17
#define LABEL_9_10 19
#define TAG_9_11 8
#define LABEL_9_20 21
#define LABEL_9_22 23
#define LABEL_9_23 25
#define LABEL_9_25 27
#define ENVIRONMENT_LABEL_9_3 50
#define DEBUGGING_LABEL_9_2 49
#define OBJECT_9_5 48
#define OBJECT_9_4 47
#define OBJECT_9_3 46
#define OBJECT_9_2 45
#define OBJECT_9_1 44
#define OBJECT_9_0 43
#define EXECUTE_CACHE_9_24 29
#define EXECUTE_CACHE_9_21 31
#define EXECUTE_CACHE_9_19 33
#define EXECUTE_CACHE_9_16 35
#define EXECUTE_CACHE_9_13 37
#define EXECUTE_CACHE_9_9 39
#define FREE_REFERENCE_9_0 42
#define FREE_REFERENCES_LABEL_9_0 28
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd49;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto undrift_disowned_childrenB_15;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto loop_24;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto lambda_25;

    case 3:
      current_block = (Rpc - LABEL_9_12);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_9_15);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_9_17);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_9_18);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_9_10);
      goto lambda_26;

    case 9:
      current_block = (Rpc - LABEL_9_20);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_9_22);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_9_23);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_9_25);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (undrift_disowned_childrenB_23)
DEFLABEL (undrift_disowned_childrenB_15)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  Wrd13 = Wrd15;
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_13;

DEFLABEL (loop_24)
  CLOSURE_HEADER (LABEL_9_5);

DEFLABEL (loop_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_7])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  ((Wrd14.pObj) [4]) = (Wrd15.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd18.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_9_7);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_10])));
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
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_28;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd28.Lng))))
    goto label_28;
  (Wrd20.Obj) = ((Wrd26.pObj) [6]);

DEFLABEL (label_27)
  (Rsp [1]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (label_28)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.Obj) = (current_block [OBJECT_9_0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_17)
  (Wrd20.Obj) = Rvl;
  goto label_27;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_9_10);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_38;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_37)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_36;
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (current_block [OBJECT_9_3]);
  (* (--Rsp)) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_21]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_17);

DEFLABEL (label_36)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_35;
  Wrd23 = Wrd27;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_33;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd37.Lng))))
    goto label_33;
  (Wrd29.Obj) = ((Wrd35.pObj) [3]);

DEFLABEL (label_32)
  (Wrd45.Obj) = (* (Rsp++));
  if (! ((Wrd29.Obj) == (Wrd45.Obj)))
    goto label_31;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_24]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (Rsp [2]);
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd82.Obj) = ((Wrd81.pObj) [3]);
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd83.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd83.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [2]);
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [2]);
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd94.Obj) = ((Wrd90.pObj) [3]);
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd95.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd95.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_14);

DEFLABEL (label_31)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [4]);
  (Rsp [1]) = (Wrd46.Obj);
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_30;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd57.Lng))))
    goto label_30;
  (Wrd49.Obj) = ((Wrd55.pObj) [5]);

DEFLABEL (label_29)
  (Rsp [2]) = (Wrd49.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (label_30)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.Obj) = (current_block [OBJECT_9_5]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_25]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_21)
  (Wrd49.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_33)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_9_4]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_23]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_20)
  (Wrd29.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_22])), (Wrd24.pObj));

DEFLABEL (label_19)
  (Wrd23.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_9_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_7 5
#define LABEL_10_5 7
#define TAG_10_6 2
#define LABEL_10_9 9
#define LABEL_10_12 11
#define LABEL_10_11 13
#define LABEL_10_10 15
#define LABEL_10_15 17
#define LABEL_10_16 19
#define TAG_10_17 8
#define LABEL_10_18 21
#define LABEL_10_20 23
#define ENVIRONMENT_LABEL_10_3 45
#define DEBUGGING_LABEL_10_2 44
#define OBJECT_10_6 43
#define OBJECT_10_5 42
#define OBJECT_10_4 41
#define OBJECT_10_3 40
#define OBJECT_10_2 39
#define OBJECT_10_1 38
#define OBJECT_10_0 37
#define EXECUTE_CACHE_10_22 25
#define EXECUTE_CACHE_10_21 27
#define EXECUTE_CACHE_10_19 29
#define EXECUTE_CACHE_10_14 31
#define EXECUTE_CACHE_10_13 33
#define EXECUTE_CACHE_10_8 35
#define FREE_REFERENCES_LABEL_10_0 24
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_10_4);
      goto undrift_free_callersB_14;

    case 1:
      current_block = (Rpc - LABEL_10_7);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_22;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_10_12);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_10_15);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_10_16);
      goto lambda_23;

    case 9:
      current_block = (Rpc - LABEL_10_18);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_10_20);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (undrift_free_callersB_21)
DEFLABEL (undrift_free_callersB_14)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
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
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_25;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 25L) < ((unsigned long) (Wrd22.Lng))))
    goto label_25;
  (Wrd14.Obj) = ((Wrd20.pObj) [26]);

DEFLABEL (label_24)
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (label_25)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (current_block [OBJECT_10_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_16)
  (Wrd14.Obj) = Rvl;
  goto label_24;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_33;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_33;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_32)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_31;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd35.Lng))))
    goto label_31;
  (Wrd29.Obj) = ((Wrd33.pObj) [25]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_30)
  (Wrd43.Obj) = (Rsp [4]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [4]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_10_4]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [6]);
  (Rsp [2]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_14]));

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_29)
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 1))
    goto label_28;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd6.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_27)
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_16])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd22 = Wrd15;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd24.pObj) [3]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [4]) = (Wrd17.Obj);
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (label_28)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_5]), 1);

DEFLABEL (label_19)
  (Wrd6.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_31)
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.Obj) = (current_block [OBJECT_10_3]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_10_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (Wrd5.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_10_16);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_19]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_34;

DEFLABEL (label_35)
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_34)
DEFLABEL (label_37)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_21]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  Rvl = (current_block [OBJECT_10_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd11.pObj) [4]);
  (Rsp [0]) = (Wrd13.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_22]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_5 3
#define LABEL_11_4 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define LABEL_11_8 11
#define LABEL_11_9 13
#define LABEL_11_12 15
#define LABEL_11_10 17
#define TAG_11_11 7
#define LABEL_11_16 19
#define LABEL_11_14 21
#define LABEL_11_17 23
#define LABEL_11_18 25
#define LABEL_11_19 27
#define LABEL_11_21 29
#define LABEL_11_22 31
#define ENVIRONMENT_LABEL_11_3 54
#define DEBUGGING_LABEL_11_2 53
#define OBJECT_11_7 52
#define OBJECT_11_6 51
#define OBJECT_11_5 50
#define OBJECT_11_4 49
#define OBJECT_11_3 48
#define OBJECT_11_2 47
#define OBJECT_11_1 46
#define OBJECT_11_0 45
#define EXECUTE_CACHE_11_24 33
#define EXECUTE_CACHE_11_23 35
#define EXECUTE_CACHE_11_20 37
#define EXECUTE_CACHE_11_15 39
#define EXECUTE_CACHE_11_13 41
#define FREE_REFERENCE_11_0 44
#define FREE_REFERENCES_LABEL_11_0 32
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd74;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd94;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd104;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd48;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_11_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_11_4);
      goto guarantee_access_to_free_variablesB_19;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_11_8);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_11_9);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_11_12);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_11_10);
      goto lambda_32;

    case 8:
      current_block = (Rpc - LABEL_11_16);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_11_17);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_11_18);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_11_19);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_11_21);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_11_22);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_access_to_free_variablesB_31)
DEFLABEL (guarantee_access_to_free_variablesB_19)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_47;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_47;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_46)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_45;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd32.Lng))))
    goto label_45;
  (Wrd26.Obj) = ((Wrd30.pObj) [8]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_44)
  (Wrd40.Obj) = (Rsp [0]);
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_43;
  Wrd42 = Wrd46;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_41;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd56.Lng))))
    goto label_41;
  (Wrd48.Obj) = ((Wrd54.pObj) [1]);

DEFLABEL (label_40)
  (Wrd64.Obj) = (* (Rsp++));
  if ((Wrd48.Obj) == (Wrd64.Obj))
    goto label_37;

DEFLABEL (label_36)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_35)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd69.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_10])));
  Rhp += 2;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd69.pObj)));
  Wrd72 = Wrd69;
  (Wrd73.Obj) = (Rsp [3]);
  ((Wrd72.pObj) [2]) = (Wrd73.Obj);
  (Wrd71.Obj) = (Rsp [0]);
  ((Wrd72.pObj) [3]) = (Wrd71.Obj);
  (Rsp [2]) = (Wrd68.Obj);
  (Wrd83.Obj) = (Rsp [1]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 10))
    goto label_34;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd82.Lng))))
    goto label_34;
  (Wrd74.Obj) = ((Wrd80.pObj) [10]);

DEFLABEL (label_33)
  (Rsp [3]) = (Wrd74.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_13]));

DEFLABEL (label_34)
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.Obj) = (current_block [OBJECT_11_5]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_25)
  (Wrd74.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_37)
  (Wrd91.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd92.Obj) = (current_block [OBJECT_11_4]);
  (Rsp [1]) = (Wrd92.Obj);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if ((Wrd104.uLng) == 10)
    goto label_39;

DEFLABEL (label_38)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_39)
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [0]);
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd101.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd102.Lng))))
    goto label_38;
  (Wrd94.Obj) = ((Wrd100.pObj) [23]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd94.Obj);
  goto label_35;

DEFLABEL (label_41)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.Obj) = (current_block [OBJECT_11_3]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_24)
  (Wrd48.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_8])), (Wrd43.pObj));

DEFLABEL (label_23)
  (Wrd42.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_11_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_11_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_11_10);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;

DEFLABEL (label_48)
  Rvl = (current_block [OBJECT_11_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_60;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd20.Lng))))
    goto label_60;
  (Wrd14.Obj) = ((Wrd18.pObj) [10]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_59)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_58;
  Wrd30 = Wrd34;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_56;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd44.Lng))))
    goto label_56;
  (Wrd36.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_55)
  (Wrd52.Obj) = (* (Rsp++));
  if (! ((Wrd36.Obj) == (Wrd52.Obj)))
    goto label_50;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_20]));

DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_54)
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_53;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd62.Lng))))
    goto label_53;
  (Wrd56.Obj) = ((Wrd60.pObj) [15]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_52)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (Rsp [3]);
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [3]);
  (* (--Rsp)) = (Wrd76.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  Rvl = (current_block [OBJECT_11_7]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd11.pObj) [3]);
  (Rsp [0]) = (Wrd13.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_24]));

DEFLABEL (label_53)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.Obj) = (current_block [OBJECT_11_6]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_21]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_56)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (current_block [OBJECT_11_3]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_28)
  (Wrd36.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_18])), (Wrd31.pObj));

DEFLABEL (label_27)
  (Wrd30.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_11_5]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;
  goto label_48;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define TAG_12_6 1
#define LABEL_12_8 7
#define LABEL_12_9 9
#define ENVIRONMENT_LABEL_12_3 20
#define DEBUGGING_LABEL_12_2 19
#define OBJECT_12_1 18
#define OBJECT_12_0 17
#define EXECUTE_CACHE_12_11 11
#define EXECUTE_CACHE_12_10 13
#define EXECUTE_CACHE_12_7 15
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_12_4);
      goto close_non_descendant_calleesB_3;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_12_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_non_descendant_calleesB_7)
DEFLABEL (close_non_descendant_calleesB_3)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_12_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_9)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_11]));

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_12_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define TAG_13_6 1
#define LABEL_13_8 7
#define LABEL_13_7 9
#define LABEL_13_13 11
#define LABEL_13_9 13
#define TAG_13_10 5
#define LABEL_13_15 15
#define LABEL_13_12 17
#define LABEL_13_17 19
#define LABEL_13_14 21
#define LABEL_13_18 23
#define TAG_13_19 10
#define LABEL_13_20 25
#define LABEL_13_22 27
#define LABEL_13_23 29
#define ENVIRONMENT_LABEL_13_3 48
#define DEBUGGING_LABEL_13_2 47
#define OBJECT_13_9 46
#define OBJECT_13_8 45
#define OBJECT_13_7 44
#define OBJECT_13_6 43
#define OBJECT_13_5 42
#define OBJECT_13_4 41
#define OBJECT_13_3 40
#define OBJECT_13_2 39
#define OBJECT_13_1 38
#define OBJECT_13_0 37
#define EXECUTE_CACHE_13_21 31
#define EXECUTE_CACHE_13_16 33
#define EXECUTE_CACHE_13_11 35
#define FREE_REFERENCES_LABEL_13_0 30
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_13_4);
      goto for_each_calleeB_18;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto loop_28;

    case 2:
      current_block = (Rpc - LABEL_13_8);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_13_13);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_13_9);
      goto lambda_29;

    case 6:
      current_block = (Rpc - LABEL_13_15);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_13_12);
      goto continuation_13;

    case 8:
      current_block = (Rpc - LABEL_13_17);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_13_14);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_13_18);
      goto lambda_30;

    case 11:
      current_block = (Rpc - LABEL_13_20);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_13_22);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_13_23);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_each_calleeB_27)
DEFLABEL (for_each_calleeB_18)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (Wrd9.Obj) = (current_block [OBJECT_13_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_5])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  Wrd19 = Wrd21;
  (Wrd20.Obj) = (Rsp [4]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  ((Wrd19.pObj) [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd13.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_15;

DEFLABEL (loop_28)
  CLOSURE_HEADER (LABEL_13_5);

DEFLABEL (loop_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_36;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd16.Lng))))
    goto label_36;
  (Wrd10.Obj) = ((Wrd14.pObj) [13]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_35)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_9])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd30 = Wrd25;
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  ((Wrd30.pObj) [2]) = (Wrd33.Obj);
  (Wrd29.Obj) = ((Wrd32.pObj) [3]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_34;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_34;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_33)
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_13_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_32;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd14.Lng))))
    goto label_32;
  (Wrd6.Obj) = ((Wrd12.pObj) [6]);

DEFLABEL (label_31)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (label_32)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_13_6]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_23)
  (Wrd6.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_13_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_13_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_13_9);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_38;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_38;
  (Wrd10.Obj) = ((Wrd14.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13_14);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_18])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (label_38)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_13_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_13_18);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_21]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;

DEFLABEL (label_39)
  Rvl = (current_block [OBJECT_13_8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_44;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd15.Lng))))
    goto label_44;
  (Wrd7.Obj) = ((Wrd13.pObj) [22]);

DEFLABEL (label_43)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  if ((Wrd7.Obj) == (Wrd25.Obj))
    goto label_39;
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_42;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 21L) < ((unsigned long) (Wrd39.Lng))))
    goto label_42;
  ((Wrd37.pObj) [22]) = (Wrd25.Obj);

DEFLABEL (label_41)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Rsp [0]) = (Wrd26.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_42)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (current_block [OBJECT_13_7]);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [3]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_23]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_9]), 3);

DEFLABEL (label_25)
  goto label_41;

DEFLABEL (label_44)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_13_7]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_22]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_24)
  (Wrd7.Obj) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_7 5
#define LABEL_14_8 7
#define LABEL_14_5 9
#define LABEL_14_9 11
#define LABEL_14_10 13
#define LABEL_14_13 15
#define LABEL_14_14 17
#define LABEL_14_15 19
#define LABEL_14_16 21
#define LABEL_14_19 23
#define LABEL_14_20 25
#define LABEL_14_21 27
#define LABEL_14_22 29
#define LABEL_14_23 31
#define LABEL_14_24 33
#define LABEL_14_25 35
#define LABEL_14_26 37
#define LABEL_14_17 39
#define ENVIRONMENT_LABEL_14_3 68
#define DEBUGGING_LABEL_14_2 67
#define OBJECT_14_11 66
#define OBJECT_14_10 65
#define OBJECT_14_9 64
#define OBJECT_14_8 63
#define OBJECT_14_7 62
#define OBJECT_14_6 61
#define OBJECT_14_5 60
#define OBJECT_14_4 59
#define OBJECT_14_3 58
#define OBJECT_14_2 57
#define OBJECT_14_1 56
#define OBJECT_14_0 55
#define EXECUTE_CACHE_14_28 41
#define EXECUTE_CACHE_14_27 43
#define EXECUTE_CACHE_14_18 45
#define EXECUTE_CACHE_14_12 47
#define EXECUTE_CACHE_14_11 49
#define EXECUTE_CACHE_14_6 51
#define FREE_REFERENCE_14_0 54
#define FREE_REFERENCES_LABEL_14_0 40
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd74;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd88;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd107;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd117;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd150;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd147;
  machine_word Wrd137;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd122;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd121;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd33;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd57;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
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
      goto undrifting_constraintB_28;

    case 1:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_14_9);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_14_10);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_14_13);
      goto continuation_24;

    case 7:
      current_block = (Rpc - LABEL_14_14);
      goto continuation_17;

    case 8:
      current_block = (Rpc - LABEL_14_15);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_14_16);
      goto label_39;

    case 10:
      current_block = (Rpc - LABEL_14_19);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_14_20);
      goto loop_19;

    case 12:
      current_block = (Rpc - LABEL_14_21);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_14_22);
      goto label_33;

    case 14:
      current_block = (Rpc - LABEL_14_23);
      goto label_34;

    case 15:
      current_block = (Rpc - LABEL_14_24);
      goto label_35;

    case 16:
      current_block = (Rpc - LABEL_14_25);
      goto label_37;

    case 17:
      current_block = (Rpc - LABEL_14_26);
      goto label_36;

    case 18:
      current_block = (Rpc - LABEL_14_17);
      goto continuation_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (undrifting_constraintB_41)
DEFLABEL (undrifting_constraintB_28)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_14_5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_8);

DEFLABEL (label_50)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_49;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_49;
  (Wrd15.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_48)
  (Wrd29.Obj) = (Rsp [0]);
  if (! ((Wrd29.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_44;

DEFLABEL (label_43)
  Rsp = (& (Rsp [1]));
  (Wrd57.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd57.Obj);
  goto loop_19;

DEFLABEL (label_44)
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_47;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd47.Lng))))
    goto label_47;
  (Wrd33.Obj) = ((Wrd45.pObj) [19]);
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_46;

DEFLABEL (label_45)
  Rsp = (& (Rsp [1]));
  Rvl = (current_block [OBJECT_14_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_45;

DEFLABEL (label_47)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.Obj) = (current_block [OBJECT_14_2]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  goto label_45;

DEFLABEL (label_49)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_14_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (loop_42)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_14_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_77;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_77;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_76)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_75;
  Wrd26 = Wrd30;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_73;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd40.Lng))))
    goto label_73;
  (Wrd32.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_72)
  (Wrd48.Obj) = (* (Rsp++));
  if ((Wrd32.Obj) == (Wrd48.Obj))
    goto label_69;

DEFLABEL (label_68)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_67)
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_66;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd59.Lng))))
    goto label_66;
  (Wrd51.Obj) = ((Wrd57.pObj) [4]);

DEFLABEL (label_65)
  (Wrd67.Obj) = (* (Rsp++));
  if ((Wrd51.Obj) == (Wrd67.Obj))
    goto label_53;
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd81.Obj) = (Rsp [2]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 10))
    goto label_64;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd80.Lng))))
    goto label_64;
  (Wrd74.Obj) = ((Wrd78.pObj) [4]);
  (* (--Rsp)) = (Wrd74.Obj);

DEFLABEL (label_63)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_27]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_14_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;

DEFLABEL (label_53)
  (Wrd97.Obj) = (Rsp [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 10))
    goto label_52;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd96.Lng))))
    goto label_52;
  (Wrd88.Obj) = ((Wrd94.pObj) [4]);

DEFLABEL (label_51)
  (Rsp [0]) = (Wrd88.Obj);
  goto loop_19;

DEFLABEL (label_52)
  (Wrd99.Obj) = (Rsp [0]);
  (Wrd100.Obj) = (current_block [OBJECT_14_11]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_25]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_37)
  (Wrd88.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd121.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd131.Obj) = (Rsp [3]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd132.uLng) == 62))
    goto label_62;
  (Wrd128.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd129.Obj) = ((Wrd128.pObj) [0]);
  (Wrd130.Lng) = (FIXNUM_TO_LONG (Wrd129.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd130.Lng))))
    goto label_62;
  (Wrd122.Obj) = ((Wrd128.pObj) [3]);

DEFLABEL (label_61)
  if ((Wrd122.Obj) == (current_block [OBJECT_14_7]))
    goto label_57;

DEFLABEL (label_56)
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (Wrd142.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd142.Obj);
  (Wrd143.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd144.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd144.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_18]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_14_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_28]));

DEFLABEL (label_55)
  Rvl = (current_block [OBJECT_14_4]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd147.Obj);
  (Wrd157.Obj) = (Rsp [1]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if (! ((Wrd158.uLng) == 10))
    goto label_60;
  (Wrd154.pObj) = (OBJECT_ADDRESS (Wrd157.Obj));
  (Wrd155.Obj) = ((Wrd154.pObj) [0]);
  (Wrd156.Lng) = (FIXNUM_TO_LONG (Wrd155.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd156.Lng))))
    goto label_60;
  (Wrd150.Obj) = ((Wrd154.pObj) [8]);
  (* (--Rsp)) = (Wrd150.Obj);

DEFLABEL (label_59)
  (Wrd164.Obj) = (Rsp [0]);
  if ((Wrd164.Obj) == ((SCHEME_OBJECT) 0))
    goto label_58;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (label_58)
  Rsp = (& (Rsp [2]));
  goto label_56;

DEFLABEL (label_60)
  (Wrd159.Obj) = (Rsp [1]);
  (Wrd160.Obj) = (current_block [OBJECT_14_8]);
  (Wrd163.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_16]))));
  (* (--Rsp)) = (Wrd163.Obj);
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd159.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd133.Obj) = (Rsp [3]);
  (Wrd134.Obj) = (current_block [OBJECT_14_6]);
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_38)
  (Wrd122.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd83.Obj) = (Rsp [2]);
  (Wrd84.Obj) = (current_block [OBJECT_14_11]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_26]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.Obj) = (current_block [OBJECT_14_11]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_24]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_35)
  (Wrd51.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_69)
  (Wrd104.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd104.Obj);
  (Wrd105.Obj) = (current_block [OBJECT_14_10]);
  (Rsp [1]) = (Wrd105.Obj);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd117.uLng) == 10)
    goto label_71;

DEFLABEL (label_70)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_71)
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd114.Obj) = ((Wrd113.pObj) [0]);
  (Wrd115.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd115.Lng))))
    goto label_70;
  (Wrd107.Obj) = ((Wrd113.pObj) [23]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd107.Obj);
  goto label_67;

DEFLABEL (label_73)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_14_9]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_23]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_34)
  (Wrd32.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_22])), (Wrd27.pObj));

DEFLABEL (label_33)
  (Wrd26.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_14_8]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_21]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_14_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  Rvl = (current_block [OBJECT_14_4]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_14_19);
  (* (--Rsp)) = Rvl;
  goto label_67;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_5 3
#define LABEL_15_8 5
#define LABEL_15_9 7
#define LABEL_15_10 9
#define LABEL_15_11 11
#define LABEL_15_4 13
#define LABEL_15_12 15
#define LABEL_15_13 17
#define LABEL_15_14 19
#define LABEL_15_16 21
#define LABEL_15_6 23
#define LABEL_15_19 25
#define LABEL_15_21 27
#define ENVIRONMENT_LABEL_15_3 49
#define DEBUGGING_LABEL_15_2 48
#define OBJECT_15_4 47
#define OBJECT_15_3 46
#define OBJECT_15_2 45
#define OBJECT_15_1 44
#define OBJECT_15_0 43
#define EXECUTE_CACHE_15_22 29
#define EXECUTE_CACHE_15_20 31
#define EXECUTE_CACHE_15_18 33
#define EXECUTE_CACHE_15_17 35
#define EXECUTE_CACHE_15_15 37
#define EXECUTE_CACHE_15_7 39
#define FREE_REFERENCE_15_0 42
#define FREE_REFERENCES_LABEL_15_0 28
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd88;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
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
  machine_word Wrd87;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd66;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
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
      goto continuation_8;

    case 1:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_15_10);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_15_11);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_15_4);
      goto update_callers_and_calleesB_13;

    case 6:
      current_block = (Rpc - LABEL_15_12);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_15_13);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_15_14);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_15_16);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_15_19);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_15_21);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (update_callers_and_calleesB_22)
DEFLABEL (update_callers_and_calleesB_13)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_38;
  (Wrd7.Obj) = ((Wrd11.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_37)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_32;

DEFLABEL (label_31)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_16]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_15_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15_8);

DEFLABEL (label_30)
  (Wrd58.Obj) = (Rsp [0]);
  if (! ((Wrd58.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_24;

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_15_2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_29;
  Wrd60 = Wrd64;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd60.Obj);
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 10))
    goto label_27;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd74.Lng))))
    goto label_27;
  (Wrd66.Obj) = ((Wrd72.pObj) [1]);

DEFLABEL (label_26)
  (Wrd82.Obj) = (* (Rsp++));
  if (! ((Wrd66.Obj) == (Wrd82.Obj)))
    goto label_23;
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd87.Obj);

DEFLABEL (label_25)
  (Wrd88.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd88.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_15]));

DEFLABEL (label_27)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.Obj) = (current_block [OBJECT_15_0]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_19)
  (Wrd66.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_10])), (Wrd61.pObj));

DEFLABEL (label_18)
  (Wrd60.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_32)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_36;
  Wrd23 = Wrd27;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_34;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_34;
  (Wrd29.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_33)
  (Wrd45.Obj) = (* (Rsp++));
  if (! ((Wrd29.Obj) == (Wrd45.Obj)))
    goto label_31;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd54.Obj);
  goto label_25;

DEFLABEL (label_34)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_15_0]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_17)
  (Wrd29.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_13])), (Wrd24.pObj));

DEFLABEL (label_16)
  (Wrd23.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_15_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd94.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd95.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd96.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd96.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15_19);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_40;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd13.Lng))))
    goto label_40;
  (Wrd5.Obj) = ((Wrd11.pObj) [16]);

DEFLABEL (label_39)
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_22]));

DEFLABEL (label_40)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_15_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_39;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_10 9
#define LABEL_16_8 11
#define TAG_16_9 4
#define LABEL_16_15 13
#define LABEL_16_12 15
#define LABEL_16_17 17
#define LABEL_16_13 19
#define TAG_16_14 8
#define LABEL_16_19 21
#define ENVIRONMENT_LABEL_16_3 41
#define DEBUGGING_LABEL_16_2 40
#define OBJECT_16_4 39
#define OBJECT_16_3 38
#define OBJECT_16_2 37
#define OBJECT_16_1 36
#define OBJECT_16_0 35
#define EXECUTE_CACHE_16_20 23
#define EXECUTE_CACHE_16_18 25
#define EXECUTE_CACHE_16_16 27
#define EXECUTE_CACHE_16_11 29
#define EXECUTE_CACHE_16_6 31
#define FREE_REFERENCE_16_0 34
#define FREE_REFERENCES_LABEL_16_0 22
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto cancel_dependent_undrifting_constraintsB_10;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_16_10);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_16_8);
      goto lambda_19;

    case 5:
      current_block = (Rpc - LABEL_16_15);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_16_12);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_16_17);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_16_13);
      goto lambda_20;

    case 9:
      current_block = (Rpc - LABEL_16_19);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cancel_dependent_undrifting_constraintsB_18)
DEFLABEL (cancel_dependent_undrifting_constraintsB_10)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_23)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_8])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd26 = Wrd23;
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd22.Obj);
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_22;
  Wrd30 = Wrd34;

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_10])), (Wrd31.pObj));

DEFLABEL (label_13)
  (Wrd30.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_16_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_16_8);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_13])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_29;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  Rvl = (current_block [OBJECT_16_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_27;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_26)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [2]);
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (Rsp [1]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (label_27)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_16_13);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_31;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_20]));

DEFLABEL (label_31)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_19]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 1);

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_7 7
#define LABEL_17_9 9
#define LABEL_17_8 11
#define LABEL_17_11 13
#define LABEL_17_12 15
#define LABEL_17_14 17
#define LABEL_17_13 19
#define LABEL_17_15 21
#define LABEL_17_16 23
#define LABEL_17_17 25
#define LABEL_17_18 27
#define ENVIRONMENT_LABEL_17_3 44
#define DEBUGGING_LABEL_17_2 43
#define OBJECT_17_5 42
#define OBJECT_17_4 41
#define OBJECT_17_3 40
#define OBJECT_17_2 39
#define OBJECT_17_1 38
#define OBJECT_17_0 37
#define EXECUTE_CACHE_17_10 29
#define EXECUTE_CACHE_17_6 31
#define FREE_REFERENCE_17_0 34
#define FREE_ASSIGNMENT_17_0 36
#define FREE_REFERENCES_LABEL_17_0 28
#define NUMBER_OF_LINKER_SECTIONS_17_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd64;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd11;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_17_4);
      goto add_constraint_20;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_17_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_17_11);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_17_12);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_17_14);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_17_13);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_17_15);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_17_16);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_17_17);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_17_18);
      goto label_28;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_constraint_32)
DEFLABEL (add_constraint_20)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_58;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd26.Lng))))
    goto label_58;
  (Wrd7.Obj) = ((Wrd24.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_35)
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto label_33;

DEFLABEL (label_34)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_33)
DEFLABEL (label_57)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_56;
  Wrd13 = Wrd17;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_48;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_47)
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_42;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_41)
  (Wrd19.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_40;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  ((Wrd27.pObj) [1]) = (Wrd16.Obj);

DEFLABEL (label_39)
  (Wrd20.Obj) = (Rsp [0]);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_36;

DEFLABEL (label_37)
  Rvl = (current_block [OBJECT_17_3]);

DEFLABEL (label_36)
DEFLABEL (label_38)
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_18]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_5]), 2);

DEFLABEL (label_28)
  goto label_39;

DEFLABEL (label_42)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_4]), 1);

DEFLABEL (label_27)
  (Wrd7.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_46;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_45)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.Obj) = (current_block [OBJECT_17_2]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd52.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_44;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  ((Wrd57.pObj) [1]) = (Wrd53.Obj);
  goto label_39;

DEFLABEL (label_44)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_16]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_5]), 2);

DEFLABEL (label_30)
  goto label_39;

DEFLABEL (label_46)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_4]), 1);

DEFLABEL (label_29)
  (Wrd35.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_4]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_54;
  Wrd21 = Wrd25;

DEFLABEL (label_53)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (current_block [OBJECT_17_2]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd35.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd43.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_0]));
  (Wrd55.Obj) = ((Wrd47.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  ((Wrd47.pObj) [0]) = (Wrd44.Obj);

DEFLABEL (label_50)
  Rvl = (current_block [OBJECT_17_3]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_52)
  if ((Wrd55.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_51;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_12])), (Wrd47.pObj), (Wrd44.Obj));

DEFLABEL (label_26)
  goto label_50;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_11])), (Wrd22.pObj));

DEFLABEL (label_25)
  (Wrd21.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_9])), (Wrd14.pObj));

DEFLABEL (label_22)
  (Wrd13.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.Obj) = (current_block [OBJECT_17_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define LABEL_18_7 9
#define LABEL_18_8 11
#define LABEL_18_9 13
#define ENVIRONMENT_LABEL_18_3 27
#define DEBUGGING_LABEL_18_2 26
#define OBJECT_18_6 25
#define OBJECT_18_5 24
#define OBJECT_18_4 23
#define OBJECT_18_3 22
#define OBJECT_18_2 21
#define OBJECT_18_1 20
#define OBJECT_18_0 19
#define EXECUTE_CACHE_18_10 15
#define FREE_REFERENCE_18_0 18
#define FREE_REFERENCES_LABEL_18_0 14
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd99;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd95;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd68;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd48;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_18_4);
      goto debug_add_constraint_10;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_18_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_18_9);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debug_add_constraint_18)
DEFLABEL (debug_add_constraint_10)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_29;
  Wrd5 = Wrd9;

DEFLABEL (label_28)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rvl = (current_block [OBJECT_18_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_27;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd20.Lng))))
    goto label_27;
  (Wrd14.Obj) = ((Wrd18.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_26)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_25;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd36.Lng))))
    goto label_25;
  (Wrd28.Obj) = ((Wrd34.pObj) [4]);

DEFLABEL (label_24)
  (Wrd44.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_23;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd56.Lng))))
    goto label_23;
  (Wrd48.Obj) = ((Wrd54.pObj) [3]);

DEFLABEL (label_22)
  (Wrd64.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd77.Obj) = (Rsp [3]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 62))
    goto label_21;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd76.Lng))))
    goto label_21;
  (Wrd68.Obj) = ((Wrd74.pObj) [2]);

DEFLABEL (label_20)
  (Wrd84.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd87.pObj) = (& (Rhp [-2]));
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd87.pObj)));
  (Wrd91.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd85.Obj);
  (Wrd90.pObj) = (& (Rhp [-2]));
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd90.pObj)));
  (Wrd95.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd95.Obj);
  (* (Rhp++)) = (Wrd88.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  (Wrd99.Obj) = (current_block [OBJECT_18_6]);
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (Rsp [2]) = (Wrd96.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (label_21)
  (Wrd79.Obj) = (Rsp [3]);
  (Wrd80.Obj) = (current_block [OBJECT_18_5]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (label_16)
  (Wrd68.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.Obj) = (current_block [OBJECT_18_4]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (label_15)
  (Wrd48.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.Obj) = (current_block [OBJECT_18_3]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (label_14)
  (Wrd28.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_18_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_5])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_6 5
#define LABEL_19_5 7
#define LABEL_19_8 9
#define ENVIRONMENT_LABEL_19_3 19
#define DEBUGGING_LABEL_19_2 18
#define OBJECT_19_0 17
#define EXECUTE_CACHE_19_7 11
#define FREE_REFERENCE_19_0 14
#define FREE_ASSIGNMENT_19_0 16
#define FREE_REFERENCES_LABEL_19_0 10
#define NUMBER_OF_LINKER_SECTIONS_19_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_19_4);
      goto remove_condition_1;

    case 1:
      current_block = (Rpc - LABEL_19_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (remove_condition_6)
DEFLABEL (remove_condition_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_19_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define TAG_20_6 1
#define LABEL_20_11 7
#define LABEL_20_8 9
#define LABEL_20_12 11
#define LABEL_20_9 13
#define TAG_20_10 5
#define LABEL_20_16 15
#define LABEL_20_13 17
#define LABEL_20_17 19
#define LABEL_20_18 21
#define LABEL_20_14 23
#define TAG_20_15 10
#define LABEL_20_19 25
#define LABEL_20_21 27
#define LABEL_20_22 29
#define LABEL_20_24 31
#define LABEL_20_20 33
#define ENVIRONMENT_LABEL_20_3 50
#define DEBUGGING_LABEL_20_2 49
#define OBJECT_20_7 48
#define OBJECT_20_6 47
#define OBJECT_20_5 46
#define OBJECT_20_4 45
#define OBJECT_20_3 44
#define OBJECT_20_2 43
#define OBJECT_20_1 42
#define OBJECT_20_0 41
#define EXECUTE_CACHE_20_25 35
#define EXECUTE_CACHE_20_23 37
#define EXECUTE_CACHE_20_7 39
#define FREE_REFERENCES_LABEL_20_0 34
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd81;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd66;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_20_4);
      goto remove_condition_1_18;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto lambda_30;

    case 2:
      current_block = (Rpc - LABEL_20_11);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_14;

    case 4:
      current_block = (Rpc - LABEL_20_12);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_20_9);
      goto lambda_31;

    case 6:
      current_block = (Rpc - LABEL_20_16);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_20_13);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_20_17);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_20_18);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_20_14);
      goto lambda_32;

    case 11:
      current_block = (Rpc - LABEL_20_19);
      goto label_24;

    case 12:
      current_block = (Rpc - LABEL_20_21);
      goto label_26;

    case 13:
      current_block = (Rpc - LABEL_20_22);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_20_24);
      goto label_25;

    case 15:
      current_block = (Rpc - LABEL_20_20);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (remove_condition_1_29)
DEFLABEL (remove_condition_1_18)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_20_5);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_9])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_39;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_20_8);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  ((Wrd11.pObj) [1]) = Rvl;

DEFLABEL (label_36)
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == (current_block [OBJECT_20_2]))
    goto label_34;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_33;

DEFLABEL (label_34)
  Rvl = (current_block [OBJECT_20_3]);

DEFLABEL (label_33)
DEFLABEL (label_35)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_21)
  goto label_36;

DEFLABEL (label_39)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_20_9);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_14])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd16 = Wrd9;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_46;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_20_13);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_44;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  ((Wrd11.pObj) [1]) = Rvl;

DEFLABEL (label_43)
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == (current_block [OBJECT_20_2]))
    goto label_41;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_40;

DEFLABEL (label_41)
  Rvl = (current_block [OBJECT_20_3]);

DEFLABEL (label_40)
DEFLABEL (label_42)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_23)
  goto label_43;

DEFLABEL (label_46)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_20_14);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_48;

DEFLABEL (label_47)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_57;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_57;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_56)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  if ((Wrd25.Obj) == (Wrd7.Obj))
    goto label_53;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_18]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_55;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd37.Lng))))
    goto label_55;
  (Wrd31.Obj) = ((Wrd35.pObj) [5]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_54)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [2]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_25]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_20_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;

DEFLABEL (label_53)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_20]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [4]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_52;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_51)
  (Wrd72.Obj) = (Rsp [3]);
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [3]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_50;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (* (--Rsp)) = (Wrd71.Obj);

DEFLABEL (label_49)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20_20);
  Rvl = (current_block [OBJECT_20_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_22]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_6]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_21]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_6]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_55)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (current_block [OBJECT_20_7]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_24]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_20_4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 2);

DEFLABEL (label_24)
  (Wrd7.Obj) = Rvl;
  goto label_56;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define LABEL_21_8 11
#define LABEL_21_9 13
#define ENVIRONMENT_LABEL_21_3 27
#define DEBUGGING_LABEL_21_2 26
#define OBJECT_21_6 25
#define OBJECT_21_5 24
#define OBJECT_21_4 23
#define OBJECT_21_3 22
#define OBJECT_21_2 21
#define OBJECT_21_1 20
#define OBJECT_21_0 19
#define EXECUTE_CACHE_21_10 15
#define FREE_REFERENCE_21_0 18
#define FREE_REFERENCES_LABEL_21_0 14
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd99;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd95;
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd85;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd68;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd48;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_21_4);
      goto debug_remove_condition_10;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_21_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_21_9);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (debug_remove_condition_18)
DEFLABEL (debug_remove_condition_10)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_29;
  Wrd5 = Wrd9;

DEFLABEL (label_28)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rvl = (current_block [OBJECT_21_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_27;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd20.Lng))))
    goto label_27;
  (Wrd14.Obj) = ((Wrd18.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_26)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_25;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd36.Lng))))
    goto label_25;
  (Wrd28.Obj) = ((Wrd34.pObj) [4]);

DEFLABEL (label_24)
  (Wrd44.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_23;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd56.Lng))))
    goto label_23;
  (Wrd48.Obj) = ((Wrd54.pObj) [3]);

DEFLABEL (label_22)
  (Wrd64.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd77.Obj) = (Rsp [3]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd78.uLng) == 62))
    goto label_21;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [0]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd76.Lng))))
    goto label_21;
  (Wrd68.Obj) = ((Wrd74.pObj) [2]);

DEFLABEL (label_20)
  (Wrd84.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd87.pObj) = (& (Rhp [-2]));
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd87.pObj)));
  (Wrd91.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd91.Obj);
  (* (Rhp++)) = (Wrd85.Obj);
  (Wrd90.pObj) = (& (Rhp [-2]));
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd90.pObj)));
  (Wrd95.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd95.Obj);
  (* (Rhp++)) = (Wrd88.Obj);
  (Wrd94.pObj) = (& (Rhp [-2]));
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd94.pObj)));
  (Wrd99.Obj) = (current_block [OBJECT_21_6]);
  (* (Rhp++)) = (Wrd99.Obj);
  (* (Rhp++)) = (Wrd92.Obj);
  (Wrd98.pObj) = (& (Rhp [-2]));
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd98.pObj)));
  (Rsp [2]) = (Wrd96.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (label_21)
  (Wrd79.Obj) = (Rsp [3]);
  (Wrd80.Obj) = (current_block [OBJECT_21_5]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (label_16)
  (Wrd68.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.Obj) = (current_block [OBJECT_21_4]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (label_15)
  (Wrd48.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.Obj) = (current_block [OBJECT_21_3]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (label_14)
  (Wrd28.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_21_1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_6 5
#define LABEL_22_7 7
#define LABEL_22_5 9
#define LABEL_22_9 11
#define LABEL_22_10 13
#define ENVIRONMENT_LABEL_22_3 26
#define DEBUGGING_LABEL_22_2 25
#define OBJECT_22_2 24
#define OBJECT_22_1 23
#define OBJECT_22_0 22
#define EXECUTE_CACHE_22_11 15
#define EXECUTE_CACHE_22_8 17
#define FREE_REFERENCE_22_1 20
#define FREE_REFERENCE_22_0 21
#define FREE_REFERENCES_LABEL_22_0 14
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_22_4);
      goto pending_undriftingP_4;

    case 1:
      current_block = (Rpc - LABEL_22_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_22_9);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_22_10);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pending_undriftingP_11)
DEFLABEL (pending_undriftingP_4)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_20;
  Wrd8 = Wrd12;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_18;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd22.Lng))))
    goto label_18;
  (Wrd16.Obj) = ((Wrd20.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_16;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_15)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_14;
  Wrd18 = Wrd22;

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_10])), (Wrd19.pObj));

DEFLABEL (label_9)
  (Wrd18.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_22_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_6])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define LABEL_23_8 9
#define LABEL_23_11 11
#define LABEL_23_13 13
#define LABEL_23_14 15
#define LABEL_23_15 17
#define LABEL_23_10 19
#define LABEL_23_17 21
#define LABEL_23_18 23
#define LABEL_23_9 25
#define LABEL_23_20 27
#define ENVIRONMENT_LABEL_23_3 43
#define DEBUGGING_LABEL_23_2 42
#define OBJECT_23_4 41
#define OBJECT_23_3 40
#define OBJECT_23_2 39
#define OBJECT_23_1 38
#define OBJECT_23_0 37
#define EXECUTE_CACHE_23_19 29
#define EXECUTE_CACHE_23_16 31
#define EXECUTE_CACHE_23_12 33
#define EXECUTE_CACHE_23_6 35
#define FREE_REFERENCES_LABEL_23_0 28
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_23_4);
      goto undrift_proceduresB_18;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto lambda_17;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto loop_11;

    case 4:
      current_block = (Rpc - LABEL_23_11);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_23_13);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_23_14);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_23_15);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_23_10);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_23_17);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_23_18);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_23_20);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (undrift_proceduresB_29)
DEFLABEL (undrift_proceduresB_18)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (lambda_30)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_23_5);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_33;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_32)
  goto loop_11;

DEFLABEL (label_33)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (loop_31)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_23_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_41;
  (Wrd8.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd8.Obj);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_34;
  Rvl = (current_block [OBJECT_23_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_40;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_39)
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_38;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_37)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_36;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd36.Lng))))
    goto label_36;
  (Wrd30.Obj) = ((Wrd34.pObj) [4]);

DEFLABEL (label_35)
  (Rsp [2]) = (Wrd30.Obj);
  (Wrd43.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_16]));

DEFLABEL (label_36)
  (Wrd39.Obj) = (current_block [OBJECT_23_3]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_15]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_4]), 2);

DEFLABEL (label_23)
  (Wrd30.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 1);

DEFLABEL (label_22)
  (Wrd21.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_10]))));
  (* (--Rsp)) = (Wrd51.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_52;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_23_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_49;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_48)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_47;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_46)
  (Wrd33.Obj) = (Rsp [3]);
  if ((Wrd33.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_19]));

DEFLABEL (label_42)
  (Wrd5.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_45)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_44;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_43)
  (Rsp [0]) = (Wrd6.Obj);
  goto loop_11;

DEFLABEL (label_44)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_20]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_25)
  (Wrd6.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_47)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_18]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 1);

DEFLABEL (label_26)
  (Wrd17.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd5.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  goto label_45;

DEFLABEL (label_52)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_11]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_23_9);
  (Wrd5.Obj) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_8 7
#define LABEL_24_6 9
#define LABEL_24_9 11
#define LABEL_24_10 13
#define ENVIRONMENT_LABEL_24_3 26
#define DEBUGGING_LABEL_24_2 25
#define OBJECT_24_5 24
#define OBJECT_24_4 23
#define OBJECT_24_3 22
#define OBJECT_24_2 21
#define OBJECT_24_1 20
#define OBJECT_24_0 19
#define EXECUTE_CACHE_24_11 15
#define EXECUTE_CACHE_24_7 17
#define FREE_REFERENCES_LABEL_24_0 14
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_24_4);
      goto valid_constraint_conditionsP_6;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_24_6);
      goto lambda_5;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_24_10);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (valid_constraint_conditionsP_12)
DEFLABEL (valid_constraint_conditionsP_6)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_15;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (lambda_13)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_24_6);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_22;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_22;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_21)
  if ((Wrd7.Obj) == (current_block [OBJECT_24_3]))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_24_5]);

DEFLABEL (label_16)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_20;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd37.Lng))))
    goto label_20;
  (Wrd31.Obj) = ((Wrd35.pObj) [4]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_16;

DEFLABEL (label_20)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_24_4]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_24_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 2);

DEFLABEL (label_9)
  (Wrd7.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 7
#define DEBUGGING_LABEL_25_2 6
#define OBJECT_25_1 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto condition_procedure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_procedure_3)
DEFLABEL (condition_procedure_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

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

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 7
#define DEBUGGING_LABEL_26_2 6
#define OBJECT_26_1 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto condition_keyword_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_keyword_3)
DEFLABEL (condition_keyword_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

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

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 7
#define DEBUGGING_LABEL_27_2 6
#define OBJECT_27_1 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto condition_argument_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_argument_3)
DEFLABEL (condition_argument_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

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

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 7
#define DEBUGGING_LABEL_28_2 6
#define OBJECT_28_1 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto condition_dependencies_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_dependencies_3)
DEFLABEL (condition_dependencies_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

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

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define LABEL_29_7 9
#define ENVIRONMENT_LABEL_29_3 17
#define DEBUGGING_LABEL_29_2 16
#define OBJECT_29_3 15
#define OBJECT_29_2 14
#define OBJECT_29_1 13
#define OBJECT_29_0 12
#define FREE_REFERENCE_29_0 11
#define FREE_REFERENCES_LABEL_29_0 10
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto conditionP_4;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_29_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (conditionP_10)
DEFLABEL (conditionP_4)
  INTERRUPT_CHECK (26, LABEL_29_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
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
  Rvl = (current_block [OBJECT_29_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_29_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_5 3
#define LABEL_30_4 5
#define LABEL_30_6 7
#define LABEL_30_7 9
#define LABEL_30_8 11
#define LABEL_30_9 13
#define LABEL_30_10 15
#define LABEL_30_11 17
#define ENVIRONMENT_LABEL_30_3 27
#define DEBUGGING_LABEL_30_2 26
#define OBJECT_30_4 25
#define OBJECT_30_3 24
#define OBJECT_30_2 23
#define OBJECT_30_1 22
#define OBJECT_30_0 21
#define EXECUTE_CACHE_30_12 19
#define FREE_REFERENCES_LABEL_30_0 18
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd46;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd78;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd64;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd27;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_30_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_30_4);
      goto condition_new_procedure_6;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_30_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_30_9);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_30_10);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_30_11);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_new_procedure_15)
DEFLABEL (condition_new_procedure_6)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_29;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_28)
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd104.Obj) = (Rsp [3]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 62))
    goto label_27;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd103.Lng))))
    goto label_27;
  (Wrd27.Obj) = ((Wrd101.pObj) [2]);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;

DEFLABEL (label_24)
  (Wrd71.Obj) = (Rsp [3]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_23;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd70.Lng))))
    goto label_23;
  (Wrd64.Obj) = ((Wrd68.pObj) [5]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_22)
  (Wrd87.Obj) = (Rsp [4]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 62))
    goto label_21;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [0]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd86.Lng))))
    goto label_21;
  (Wrd78.Obj) = ((Wrd84.pObj) [2]);

DEFLABEL (label_20)
  (Wrd94.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd94.Obj);
  (Wrd97.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd97.pObj)));

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_18)
  (Rsp [3]) = (Wrd30.Obj);
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_17;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd54.Lng))))
    goto label_17;
  (Wrd46.Obj) = ((Wrd52.pObj) [4]);

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (label_17)
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.Obj) = (current_block [OBJECT_30_4]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_10)
  (Wrd46.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_21)
  (Wrd89.Obj) = (Rsp [4]);
  (Wrd90.Obj) = (current_block [OBJECT_30_2]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_12)
  (Wrd78.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd73.Obj) = (Rsp [3]);
  (Wrd74.Obj) = (current_block [OBJECT_30_3]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_26;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd38.Lng))))
    goto label_26;
  (Wrd30.Obj) = ((Wrd36.pObj) [5]);
  goto label_19;

DEFLABEL (label_26)
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.Obj) = (current_block [OBJECT_30_3]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_9)
  (Wrd30.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_27)
  (Wrd106.Obj) = (Rsp [3]);
  (Wrd107.Obj) = (current_block [OBJECT_30_2]);
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_24;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_30_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd30.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_5 3
#define LABEL_31_4 5
#define LABEL_31_6 7
#define LABEL_31_7 9
#define LABEL_31_8 11
#define LABEL_31_9 13
#define LABEL_31_10 15
#define LABEL_31_11 17
#define LABEL_31_12 19
#define LABEL_31_13 21
#define ENVIRONMENT_LABEL_31_3 31
#define DEBUGGING_LABEL_31_2 30
#define OBJECT_31_5 29
#define OBJECT_31_4 28
#define OBJECT_31_3 27
#define OBJECT_31_2 26
#define OBJECT_31_1 25
#define OBJECT_31_0 24
#define FREE_REFERENCE_31_0 23
#define FREE_REFERENCES_LABEL_31_0 22
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd36;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd54;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_31_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_31_4);
      goto original_block_ancestorP_14;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_31_7);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_31_8);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_31_10);
      goto loop_12;

    case 7:
      current_block = (Rpc - LABEL_31_11);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_31_12);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_31_13);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (original_block_ancestorP_23)
DEFLABEL (original_block_ancestorP_14)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_35;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_35;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_34)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_33;
  Wrd26 = Wrd30;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_31;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd40.Lng))))
    goto label_31;
  (Wrd32.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_30)
  (Wrd48.Obj) = (* (Rsp++));
  if ((Wrd32.Obj) == (Wrd48.Obj))
    goto label_27;

DEFLABEL (label_26)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_25)
  goto loop_12;

DEFLABEL (label_27)
  (Wrd51.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (current_block [OBJECT_31_3]);
  (Rsp [1]) = (Wrd52.Obj);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd64.uLng) == 10)
    goto label_29;

DEFLABEL (label_28)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_29)
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd62.Lng))))
    goto label_28;
  (Wrd54.Obj) = ((Wrd60.pObj) [23]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd54.Obj);
  goto label_25;

DEFLABEL (label_31)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_31_2]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_18)
  (Wrd32.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_7])), (Wrd27.pObj));

DEFLABEL (label_17)
  (Wrd26.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_31_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (loop_24)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_31_10);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_47;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_46;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd20.Lng))))
    goto label_46;
  (Wrd14.Obj) = ((Wrd18.pObj) [8]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_45)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_44;
  Wrd30 = Wrd34;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_42;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd44.Lng))))
    goto label_42;
  (Wrd36.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_41)
  (Wrd52.Obj) = (* (Rsp++));
  if ((Wrd36.Obj) == (Wrd52.Obj))
    goto label_38;

DEFLABEL (label_37)
  (Wrd54.Obj) = (current_block [OBJECT_31_5]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_36)
  (Rsp [0]) = (Wrd54.Obj);
  goto loop_12;

DEFLABEL (label_38)
  (Wrd55.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_31_3]);
  (Rsp [1]) = (Wrd56.Obj);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd67.uLng) == 10)
    goto label_40;

DEFLABEL (label_39)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_40)
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 22L) < ((unsigned long) (Wrd65.Lng))))
    goto label_39;
  (Wrd54.Obj) = ((Wrd63.pObj) [23]);
  Rsp = (& (Rsp [3]));
  goto label_36;

DEFLABEL (label_42)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (current_block [OBJECT_31_2]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_21)
  (Wrd36.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_12])), (Wrd31.pObj));

DEFLABEL (label_20)
  (Wrd30.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (current_block [OBJECT_31_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  Rvl = (current_block [OBJECT_31_4]);

DEFLABEL (label_48)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_49)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_48;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_31_9);
  (Wrd54.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_5 3
#define LABEL_32_4 5
#define LABEL_32_6 7
#define ENVIRONMENT_LABEL_32_3 15
#define DEBUGGING_LABEL_32_2 14
#define OBJECT_32_0 13
#define EXECUTE_CACHE_32_8 9
#define EXECUTE_CACHE_32_7 11
#define FREE_REFERENCES_LABEL_32_0 8
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
closan_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_32_4);
      goto original_block_nearest_ancestor_3;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (original_block_nearest_ancestor_6)
DEFLABEL (original_block_nearest_ancestor_3)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_8;

DEFLABEL (label_7)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

INVOKE_INTERFACE_TARGET_1
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
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_19 25
#define LABEL_20 27
#define LABEL_21 29
#define ENVIRONMENT_LABEL_3 55
#define DEBUGGING_LABEL_2 54
#define PURIFICATION_ROOT 53
#define OBJECT_13 52
#define OBJECT_12 51
#define OBJECT_11 50
#define OBJECT_10 49
#define OBJECT_9 48
#define OBJECT_8 47
#define OBJECT_7 46
#define OBJECT_6 45
#define OBJECT_5 44
#define OBJECT_4 43
#define OBJECT_3 42
#define OBJECT_2 41
#define OBJECT_1 40
#define OBJECT_0 39
#define FREE_REFERENCE_0 31
#define GLOBAL_EXECUTE_CACHE_12 33
#define GLOBAL_EXECUTE_CACHE_8 35
#define GLOBAL_EXECUTE_CACHE_5 37
#define FREE_REFERENCES_LABEL_0 30
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
closan_so_f738b7e057c02552 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
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
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto make_condition_20;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto label_23;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto expression_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_16)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_20])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_23)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_22)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	1,
	1,
	2,
	2,
	1,
	3,
	2,
	3,
	2,
	2,
	2,
	1,
	1,
	2,
	1,
	2,
	1,
	1,
	1,
	1,
	2,
	2,
	1,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 32)
      goto label_21;
    blocks = (current_block [OBJECT_13]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_19])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_21)
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
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_27;
  Wrd11 = Wrd15;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_25;
  Wrd11 = Wrd15;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_11]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_18)
  (Wrd11.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_17)
  (Wrd11.Obj) = Rvl;
  goto label_26;

DEFLABEL (make_condition_20)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (make_condition_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_closan_so_f738b7e057c02552 [32] =
  {
    { "closan_so_code_1", 46, closan_so_code_1 },
    { "closan_so_code_2", 6, closan_so_code_2 },
    { "closan_so_code_3", 15, closan_so_code_3 },
    { "closan_so_code_4", 22, closan_so_code_4 },
    { "closan_so_code_5", 4, closan_so_code_5 },
    { "closan_so_code_6", 3, closan_so_code_6 },
    { "closan_so_code_7", 9, closan_so_code_7 },
    { "closan_so_code_8", 15, closan_so_code_8 },
    { "closan_so_code_9", 13, closan_so_code_9 },
    { "closan_so_code_10", 11, closan_so_code_10 },
    { "closan_so_code_11", 15, closan_so_code_11 },
    { "closan_so_code_12", 4, closan_so_code_12 },
    { "closan_so_code_13", 14, closan_so_code_13 },
    { "closan_so_code_14", 19, closan_so_code_14 },
    { "closan_so_code_15", 13, closan_so_code_15 },
    { "closan_so_code_16", 10, closan_so_code_16 },
    { "closan_so_code_17", 13, closan_so_code_17 },
    { "closan_so_code_18", 6, closan_so_code_18 },
    { "closan_so_code_19", 4, closan_so_code_19 },
    { "closan_so_code_20", 16, closan_so_code_20 },
    { "closan_so_code_21", 6, closan_so_code_21 },
    { "closan_so_code_22", 6, closan_so_code_22 },
    { "closan_so_code_23", 13, closan_so_code_23 },
    { "closan_so_code_24", 6, closan_so_code_24 },
    { "closan_so_code_25", 1, closan_so_code_25 },
    { "closan_so_code_26", 1, closan_so_code_26 },
    { "closan_so_code_27", 1, closan_so_code_27 },
    { "closan_so_code_28", 1, closan_so_code_28 },
    { "closan_so_code_29", 4, closan_so_code_29 },
    { "closan_so_code_30", 8, closan_so_code_30 },
    { "closan_so_code_31", 10, closan_so_code_31 },
    { "closan_so_code_32", 3, closan_so_code_32 }
  };

int
decl_closan_so_f738b7e057c02552 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_closan_so_f738b7e057c02552);
  return (0);
}

DECLARE_COMPILED_CODE ("closan.so", 14, decl_closan_so_f738b7e057c02552, closan_so_f738b7e057c02552)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_closan_so_data_f738b7e057c02552 [5974] =
  "\x9d\x01\x42\xb2\x0c\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x83\x81"
  "\x07\x02\xc1\xb9\x02\x02\x02\xc1\xba\x02\xc2\xbb\x80\xc3\xbc\x1d"
  "\x08\x02\x0d\xbd\x25\x0d\x0d\x0d\x0d\xbe\xb5\x0d\xbf\x0d\x1c\x24"
  "\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\xb7\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x1d\x0d\x08\x02\x02\xb3\x02"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x07\x02\x0d"
  "\x1c\xb4\x02\x06\x0d\x1c\x1d\x02\x80\xb2\x08\xb3\x02\xb6\x24\x28"
  "\x1b\x28\xb7\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x84\x88\x0d\x1b\xb1\xb3\x83\xb2\x1b\x0d\x24"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xb3\x02"
  "\x0d\x1c\x1d\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1d\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x02\x1d\x83\x82\xc2\x1c\x81\x28\x0d\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x02\x02\xb4\x07\x83\x1d\x0d\x1c\x08\xb3\x02\x28\x0d\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x82\x0c\x02\xb3"
  "\x85\x0d\x24\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\xb1\x0c\x02\x83\xb3\x02\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x02\x02\x02\x80\x02\xb3\x83\xb6"
  "\x24\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x83\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1d\x02"
  "\x85\x02\x84\xb3\x02\x08\x0d\x28\x1b\x28\xb7\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x83\x02\x80\x02\x1b\x82\x0c\x1d\xb3\x02\x1b\x81\xb6\x24"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\xbf\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02\x88\x02\x02\x1d"
  "\xb3\x80\xb6\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb2\x1d\xb1\xb3\x83\xb5\x24\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x1c\xb1\x07\x08\x1b\x81\xb5\x25\xb5\x24\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x81\x82\x83\x1b\x84\x1d\x0d\x1c\x24"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xb5\x25\xb5\x24\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x84\xb2\x1b\x81\x07\x08\x1b\xb1\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x81\x82\x83\x1b\x84\x1d"
  "\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb3\x83\xb5\x0d\x1c\x24"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x83\x1d\xb2\xb1\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xba\x1d\xb0\x02\x88\x07\x83\x1b\x1b\x82\xb1"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x83\x22\x29\x21\x9e\x2b\xb9\x1d\xb0\x02\x88\x1b\x84\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\xc1\x0e\x1c\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x83\x84\x81\x1b\x82\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x06\x07\x02\x80\xb3\x02\xb6\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe"
  "\x1d\xb0\x02\x88\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x17\xbb\x88\xb3\x1b\x1b\x2a\xb6\x2a\x1b\x2a\x1b"
  "\x2a\x9b\x1b\x1b\x1b\x0d\x9b\x1b\x0d\x0d\x0d\x0d\x9b\x1b\x2a\xb1"
  "\x2a\x1b\x2a\x1b\x2a\x9b\xc3\x0d\x1c\x0c\x0d\x0d\x1b\x0d\x08\x8b"
  "\x08\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb5\x1b\xb7\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x17\x1b\x2a\xb2\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x06\x1e\x1b\x2a"
  "\x1b\x2a\xb4\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x28"
  "\x0d\x28\x0d\x28\x0d\x26\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x5a\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x2f\x66\x67\x6f\x70\x74\x2f\x63\x6c\x6f\x73\x61\x6e\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x0b\x70\x61\x73\x73\x65\x64\x2d\x6f"
  "\x75\x74\x1b\x04\x63\x64\x72\x0a\x10\x0e\x04\x63\x61\x72\x0b\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0c\x76\x65\x63\x74\x6f"
  "\x72\x2d\x73\x65\x74\x21\x02\x1d\x19\x2a\x75\x6e\x64\x72\x69\x66"
  "\x74\x69\x6e\x67\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x73"
  "\x2a\x02\x19\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2f\x63"
  "\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x3f\x18\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69"
  "\x6f\x6e\x3f\x0d\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x74\x61\x67"
  "\x0e\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x74\x61\x67\x0e\x72"
  "\x76\x61\x6c\x75\x65\x2d\x76\x61\x6c\x75\x65\x73\x14\x61\x6e\x61"
  "\x6c\x79\x7a\x65\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e"
  "\x09\x08\x04\x14\x6b\x65\x65\x70\x2d\x6d\x61\x74\x63\x68\x69\x6e"
  "\x67\x2d\x69\x74\x65\x6d\x73\x04\x16\x64\x65\x6c\x65\x74\x65\x2d"
  "\x6d\x61\x74\x63\x68\x69\x6e\x67\x2d\x69\x74\x65\x6d\x73\x04\x09"
  "\x66\x6f\x72\x2d\x65\x61\x63\x68\x0a\x03\x0e\x6c\x76\x61\x6c\x75"
  "\x65\x2d\x76\x61\x6c\x75\x65\x73\x05\x13\x73\x68\x61\x6c\x6c\x6f"
  "\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x03\x03\x14\x75"
  "\x6e\x64\x72\x69\x66\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x73\x21\x0b\x03\x14\x77\x69\x74\x68\x2d\x6e\x65\x77\x2d\x6e\x6f"
  "\x64\x65\x2d\x6d\x61\x72\x6b\x73\x03\x13\x72\x76\x61\x6c\x75\x65"
  "\x2d\x6b\x6e\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65\x0c\x03\x17\x72"
  "\x76\x61\x6c\x75\x65\x2f\x74\x72\x75\x65\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x3f\x0d\x04\x04\x6d\x61\x70\x05\x13\x74\x72\x61"
  "\x6e\x73\x69\x74\x69\x76\x65\x2d\x63\x6c\x6f\x73\x75\x72\x65\x04"
  "\x0e\x65\x71\x2d\x73\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x2a\x04\x12"
  "\x61\x6e\x61\x6c\x79\x7a\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x0e\x05\x11\x63\x6c\x6f\x73\x65\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x21\x0f\x10\x3c\x5e\x81\x85\x02\x3b\x5c\x81\x85\x02"
  "\x3a\x5a\x81\x83\x02\x39\x58\x83\x04\x38\x56\x81\x83\x02\x37\x54"
  "\x81\x85\x02\x36\x52\x81\x83\x02\x35\x50\x81\x87\x02\x34\x4e\x81"
  "\x83\x02\x33\x4c\x81\x83\x02\x32\x4a\x81\x83\x02\x31\x48\x81\x83"
  "\x02\x30\x46\x81\x89\x02\x2f\x44\x81\x87\x02\x2e\x42\x81\x83\x02"
  "\x2d\x40\x83\x04\x2c\x3e\x81\x89\x02\x2b\x3c\x81\x83\x02\x2a\x3a"
  "\x81\x83\x02\x29\x38\x81\x85\x02\x28\x36\x81\x83\x02\x27\x34\x81"
  "\x83\x02\x26\x32\x81\x83\x02\x25\x30\x81\x8b\x02\x24\x2e\x81\x85"
  "\x02\x23\x2c\x81\x87\x02\x22\x2a\x81\x87\x02\x21\x28\x81\x85\x02"
  "\x20\x26\x81\x85\x02\x1f\x24\x81\x83\x02\x1e\x22\x81\x85\x02\x1d"
  "\x20\x81\x87\x02\x1c\x1e\x83\x04\x1b\x1c\x81\x85\x02\x1a\x1a\x81"
  "\x8b\x02\x19\x18\x81\x85\x02\x18\x16\x81\x83\x02\x17\x14\x83\x04"
  "\x16\x12\x81\x8b\x02\x15\x10\x83\x04\x14\x0e\x81\x8b\x02\x13\x0c"
  "\x81\x89\x02\x12\x0a\x81\x8b\x02\x11\x08\x81\x87\x02\x10\x06\x81"
  "\x89\x02\x0f\x04\x85\x08\x5d\x9a\x01\x10\x02\x02\x09\x65\x78\x70"
  "\x6f\x72\x74\x65\x64\x0f\x13\x1d\x04\x0a\x06\x0f\x6d\x61\x6b\x65"
  "\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x11\x05\x16\x63\x6c\x6f"
  "\x73\x65\x2d\x69\x66\x2d\x75\x6e\x72\x65\x61\x63\x68\x61\x62\x6c"
  "\x65\x21\x12\x04\x42\x0e\x81\x87\x02\x41\x0c\x81\x85\x02\x40\x0a"
  "\x81\x85\x02\x3f\x08\x81\x85\x02\x3e\x06\x81\x85\x02\x3d\x04\x84"
  "\x06\x0d\x1e\x13\x02\x1b\x0a\x70\x6f\x74\x65\x6e\x74\x69\x61\x6c"
  "\x14\x10\x14\x61\x70\x70\x6c\x79\x2d\x63\x6f\x6d\x70\x61\x74\x69"
  "\x62\x69\x6c\x69\x74\x79\x15\x02\x13\x0a\x02\x03\x0c\x03\x03\x12"
  "\x72\x76\x61\x6c\x75\x65\x2d\x70\x61\x73\x73\x65\x64\x2d\x69\x6e"
  "\x3f\x03\x14\x63\x6f\x6d\x70\x61\x74\x69\x62\x69\x6c\x69\x74\x79"
  "\x2d\x63\x6c\x61\x73\x73\x0c\x03\x1d\x63\x6c\x6f\x73\x65\x2d\x63"
  "\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x61\x72\x67\x75\x6d"
  "\x65\x6e\x74\x73\x21\x16\x05\x0e\x63\x6c\x6f\x73\x65\x2d\x76\x61"
  "\x6c\x75\x65\x73\x21\x17\x04\x0a\x08\x51\x20\x83\x04\x50\x1e\x81"
  "\x93\x02\x4f\x1c\x81\x8d\x02\x4e\x1a\x81\x8d\x02\x4d\x18\x81\x8b"
  "\x02\x4c\x16\x81\x89\x02\x4b\x14\x81\x89\x02\x4a\x12\x81\x8b\x02"
  "\x49\x10\x81\x89\x02\x48\x0e\x81\x89\x02\x47\x0c\x81\x89\x02\x46"
  "\x0a\x81\x87\x02\x45\x08\x81\x85\x02\x44\x06\x81\x83\x02\x43\x04"
  "\x83\x04\x1f\x41\x18\x02\x0e\x63\x6f\x6d\x70\x61\x74\x69\x62\x69"
  "\x6c\x69\x74\x79\x14\x15\x12\x72\x76\x61\x6c\x75\x65\x2f\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x3f\x02\x04\x09\x66\x6f\x72\x2d\x61"
  "\x6c\x6c\x3f\x03\x19\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61"
  "\x72\x69\x74\x79\x2d\x65\x6e\x63\x6f\x64\x69\x6e\x67\x03\x13\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x63\x6c\x6f\x73\x75\x72\x65"
  "\x3f\x03\x14\x70\x65\x6e\x64\x69\x6e\x67\x2d\x75\x6e\x64\x72\x69"
  "\x66\x74\x69\x6e\x67\x3f\x15\x05\x67\x2e\x81\x87\x02\x66\x2c\x81"
  "\x87\x02\x65\x2a\x81\x87\x02\x64\x28\x81\x87\x02\x63\x26\x81\x89"
  "\x02\x62\x24\x81\x87\x02\x61\x22\x81\x87\x02\x60\x20\x81\x87\x02"
  "\x5f\x1e\x81\x87\x02\x5e\x1c\x81\x87\x02\x5d\x1a\x81\x87\x02\x5c"
  "\x18\x81\x89\x02\x5b\x16\x81\x89\x02\x5a\x14\x81\x87\x02\x59\x12"
  "\x81\x89\x02\x58\x10\x81\x87\x02\x57\x0e\x81\x85\x02\x56\x0c\x81"
  "\x85\x02\x55\x0a\x81\x83\x02\x54\x08\x81\x83\x02\x53\x06\x81\x85"
  "\x02\x52\x04\x83\x04\x2d\x42\x14\x02\x0e\x09\x61\x72\x67\x75\x6d"
  "\x65\x6e\x74\x19\x02\x03\x0d\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b"
  "\x65\x64\x3f\x03\x0b\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x21\x05"
  "\x17\x04\x6b\x0a\x81\x85\x02\x6a\x08\x81\x83\x02\x69\x06\x81\x83"
  "\x02\x68\x04\x83\x04\x09\x17\x1a\x02\x02\x04\x0a\x03\x0d\x05\x0f"
  "\x04\x6e\x08\x81\x85\x02\x6d\x06\x81\x85\x02\x6c\x04\x85\x08\x07"
  "\x12\x1b\x02\x08\x13\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72"
  "\x65\x66\x1c\x03\x0a\x69\x63\x2d\x62\x6c\x6f\x63\x6b\x3f\x04\x18"
  "\x62\x6c\x6f\x63\x6b\x2d\x61\x6e\x63\x65\x73\x74\x6f\x72\x2d\x6f"
  "\x72\x2d\x73\x65\x6c\x66\x3f\x1d\x05\x0f\x04\x19\x6f\x72\x69\x67"
  "\x69\x6e\x61\x6c\x2d\x62\x6c\x6f\x63\x6b\x2d\x61\x6e\x63\x65\x73"
  "\x74\x6f\x72\x3f\x1e\x05\x17\x75\x6e\x64\x72\x69\x66\x74\x69\x6e"
  "\x67\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x21\x1f\x06\x77"
  "\x14\x81\x89\x02\x76\x12\x81\x89\x02\x75\x10\x81\x89\x02\x74\x0e"
  "\x81\x89\x02\x73\x0c\x81\x89\x02\x72\x0a\x81\x89\x02\x71\x08\x81"
  "\x89\x02\x70\x06\x81\x87\x02\x6f\x04\x85\x08\x13\x28\x20\x02\x09"
  "\x10\x1b\x02\x0a\x63\x6f\x6e\x74\x61\x67\x69\x6f\x6e\x21\x13\x05"
  "\x14\x61\x64\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x72\x65\x61"
  "\x73\x6f\x6e\x21\x06\x11\x04\x29\x63\x61\x6e\x63\x65\x6c\x2d\x64"
  "\x65\x70\x65\x6e\x64\x65\x6e\x74\x2d\x75\x6e\x64\x72\x69\x66\x74"
  "\x69\x6e\x67\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x73\x21"
  "\x22\x03\x1b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x72\x69"
  "\x76\x69\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x3f\x23\x05\x1b"
  "\x75\x6e\x64\x72\x69\x66\x74\x2d\x64\x69\x73\x6f\x77\x6e\x65\x64"
  "\x2d\x63\x68\x69\x6c\x64\x72\x65\x6e\x21\x24\x03\x0f\x65\x6e\x71"
  "\x75\x65\x75\x65\x2d\x6e\x6f\x64\x65\x73\x21\x25\x05\x16\x75\x6e"
  "\x64\x72\x69\x66\x74\x2d\x66\x72\x65\x65\x2d\x63\x61\x6c\x6c\x65"
  "\x72\x73\x21\x26\x04\x24\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d"
  "\x61\x63\x63\x65\x73\x73\x2d\x74\x6f\x2d\x66\x72\x65\x65\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x73\x21\x27\x05\x1e\x63\x6c\x6f\x73"
  "\x65\x2d\x6e\x6f\x6e\x2d\x64\x65\x73\x63\x65\x6e\x64\x61\x6e\x74"
  "\x2d\x63\x61\x6c\x6c\x65\x65\x73\x21\x28\x0a\x86\x01\x20\x81\x8b"
  "\x02\x85\x01\x1e\x81\x8b\x02\x84\x01\x1c\x81\x8b\x02\x83\x01\x1a"
  "\x81\x8b\x02\x82\x01\x18\x81\x8b\x02\x81\x01\x16\x81\x8b\x02\x80"
  "\x01\x14\x81\x8b\x02\x7f\x12\x81\x8b\x02\x7e\x10\x81\x8b\x02\x7d"
  "\x0e\x81\x8b\x02\x7c\x0c\x81\x89\x02\x7b\x0a\x81\x87\x02\x7a\x08"
  "\x81\x87\x02\x79\x06\x81\x87\x02\x78\x04\x85\x08\x1f\x3f\x29\x02"
  "\x0a\x15\x4e\x6f\x6e\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x20"
  "\x62\x6c\x6f\x63\x6b\x3a\x08\x1c\x63\x6f\x6e\x74\x69\x6e\x75\x61"
  "\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x02\x04\x1b\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d\x62"
  "\x6c\x6f\x63\x6b\x2d\x64\x65\x73\x63\x65\x6e\x64\x61\x6e\x74\x21"
  "\x04\x0a\x05\x1f\x04\x10\x62\x6c\x6f\x63\x6b\x2d\x61\x6e\x63\x65"
  "\x73\x74\x6f\x72\x3f\x2a\x04\x06\x65\x72\x72\x6f\x72\x2b\x03\x23"
  "\x07\x93\x01\x1c\x81\x87\x02\x92\x01\x1a\x81\x89\x02\x91\x01\x18"
  "\x81\x87\x02\x90\x01\x16\x81\x85\x02\x8f\x01\x14\x81\x85\x02\x8e"
  "\x01\x12\x81\x87\x02\x8d\x01\x10\x81\x87\x02\x8c\x01\x0e\x81\x87"
  "\x02\x8b\x01\x0c\x81\x87\x02\x8a\x01\x0a\x81\x85\x02\x89\x01\x08"
  "\x81\x85\x02\x88\x01\x06\x81\x85\x02\x87\x01\x04\x85\x08\x1b\x33"
  "\x2c\x02\x0b\x02\x15\x4d\x69\x73\x73\x69\x6e\x67\x20\x66\x72\x65"
  "\x65\x20\x63\x61\x6c\x6c\x65\x65\x3a\x19\x1a\x04\x0a\x04\x05\x61"
  "\x73\x73\x71\x2d\x05\x2b\x04\x1e\x04\x1d\x05\x1f\x07\x9e\x01\x18"
  "\x81\x87\x02\x9d\x01\x16\x81\x85\x02\x9c\x01\x14\x81\x85\x02\x9b"
  "\x01\x12\x81\x87\x02\x9a\x01\x10\x81\x87\x02\x99\x01\x0e\x81\x89"
  "\x02\x98\x01\x0c\x81\x8b\x02\x97\x01\x0a\x81\x85\x02\x96\x01\x08"
  "\x81\x85\x02\x95\x01\x06\x81\x87\x02\x94\x01\x04\x85\x08\x17\x2e"
  "\x2e\x02\x0c\x02\x0f\x0a\x17\x08\x02\x04\x0a\x03\x13\x6c\x76\x61"
  "\x6c\x75\x65\x2d\x69\x6e\x74\x65\x67\x72\x61\x74\x65\x64\x3f\x03"
  "\x1e\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x72\x69\x76\x69"
  "\x61\x6c\x2d\x6f\x72\x2d\x76\x69\x72\x74\x75\x61\x6c\x3f\x04\x1d"
  "\x05\x1f\x06\xad\x01\x20\x81\x87\x02\xac\x01\x1e\x81\x85\x02\xab"
  "\x01\x1c\x81\x85\x02\xaa\x01\x1a\x81\x83\x02\xa9\x01\x18\x81\x87"
  "\x02\xa8\x01\x16\x81\x85\x02\xa7\x01\x14\x81\x85\x02\xa6\x01\x12"
  "\x81\x85\x02\xa5\x01\x10\x81\x89\x02\xa4\x01\x0e\x81\x85\x02\xa3"
  "\x01\x0c\x81\x83\x02\xa2\x01\x0a\x81\x89\x02\xa1\x01\x08\x81\x85"
  "\x02\xa0\x01\x06\x84\x06\x9f\x01\x04\x81\x87\x02\x1f\x37\x2f\x02"
  "\x0d\x04\x11\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d\x63\x61\x6c\x6c"
  "\x65\x65\x21\x30\x04\x18\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d"
  "\x6e\x65\x77\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x31\x05\x12"
  "\x04\xb1\x01\x0a\x81\x87\x02\xb0\x01\x08\x81\x85\x02\xaf\x01\x06"
  "\x81\x85\x02\xae\x01\x04\x85\x08\x09\x15\x32\x02\x0e\x02\x16\x0a"
  "\x0d\x05\x6d\x61\x72\x6b\x04\x0a\x03\x03\x0d\x04\xbf\x01\x1e\x81"
  "\x85\x02\xbe\x01\x1c\x81\x85\x02\xbd\x01\x1a\x81\x85\x02\xbc\x01"
  "\x18\x81\x85\x02\xbb\x01\x16\x81\x85\x02\xba\x01\x14\x81\x85\x02"
  "\xb9\x01\x12\x81\x85\x02\xb8\x01\x10\x81\x87\x02\xb7\x01\x0e\x81"
  "\x85\x02\xb6\x01\x0c\x81\x87\x02\xb5\x01\x0a\x81\x85\x02\xb4\x01"
  "\x08\x81\x87\x02\xb3\x01\x06\x81\x85\x02\xb2\x01\x04\x84\x06\x1d"
  "\x31\x0d\x02\x0f\x17\x08\x21\x2c\x41\x74\x74\x65\x6d\x70\x74\x20"
  "\x74\x6f\x20\x75\x6e\x64\x72\x69\x66\x74\x20\x62\x6c\x6f\x63\x6b"
  "\x20\x62\x65\x6c\x6f\x77\x20\x61\x6e\x20\x61\x6e\x63\x65\x73\x74"
  "\x6f\x72\x3a\x02\x13\x1c\x02\x04\x2a\x03\x23\x05\x2b\x05\x0f\x61"
  "\x64\x64\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x2a\x04\x1e"
  "\x05\x1c\x75\x70\x64\x61\x74\x65\x2d\x63\x61\x6c\x6c\x65\x72\x73"
  "\x2d\x61\x6e\x64\x2d\x63\x61\x6c\x6c\x65\x65\x73\x21\x07\xd2\x01"
  "\x28\x81\x89\x02\xd1\x01\x26\x81\x8d\x02\xd0\x01\x24\x81\x89\x02"
  "\xcf\x01\x22\x81\x8b\x02\xce\x01\x20\x81\x85\x02\xcd\x01\x1e\x81"
  "\x83\x02\xcc\x01\x1c\x81\x8b\x02\xcb\x01\x1a\x81\x89\x02\xca\x01"
  "\x18\x81\x89\x02\xc9\x01\x16\x81\x8b\x02\xc8\x01\x14\x81\x89\x02"
  "\xc7\x01\x12\x81\x89\x02\xc6\x01\x10\x81\x89\x02\xc5\x01\x0e\x81"
  "\x89\x02\xc4\x01\x0c\x81\x87\x02\xc3\x01\x0a\x81\x87\x02\xc2\x01"
  "\x08\x81\x87\x02\xc1\x01\x06\x81\x89\x02\xc0\x01\x04\x85\x08\x27"
  "\x45\x02\x10\x10\x08\x02\x02\x05\x26\x03\x23\x05\x24\x05\x28\x04"
  "\x0e\x03\x25\x07\xdf\x01\x1c\x81\x89\x02\xde\x01\x1a\x81\x89\x02"
  "\xdd\x01\x18\x81\x89\x02\xdc\x01\x16\x81\x89\x02\xdb\x01\x14\x81"
  "\x8b\x02\xda\x01\x12\x81\x89\x02\xd9\x01\x10\x81\x87\x02\xd8\x01"
  "\x0e\x85\x08\xd7\x01\x0c\x81\x8b\x02\xd6\x01\x0a\x81\x89\x02\xd5"
  "\x01\x08\x81\x89\x02\xd4\x01\x06\x81\x89\x02\xd3\x01\x04\x81\x89"
  "\x02\x1b\x32\x25\x02\x11\x02\x02\x03\x11\x72\x65\x6d\x6f\x76\x65"
  "\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x33\x04\x0a\x04\x0e\x74"
  "\x68\x65\x72\x65\x2d\x65\x78\x69\x73\x74\x73\x3f\x34\x05\x28\x04"
  "\x1d\x06\xe9\x01\x16\x81\x87\x02\xe8\x01\x14\x81\x85\x02\xe7\x01"
  "\x12\x81\x85\x02\xe6\x01\x10\x81\x85\x02\xe5\x01\x0e\x81\x89\x02"
  "\xe4\x01\x0c\x81\x85\x02\xe3\x01\x0a\x81\x85\x02\xe2\x01\x08\x81"
  "\x85\x02\xe1\x01\x06\x81\x85\x02\xe0\x01\x04\x84\x06\x15\x2a\x1d"
  "\x02\x12\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x35\x1c\x02\x02\x05"
  "\x15\x64\x65\x62\x75\x67\x3a\x61\x64\x64\x2d\x63\x6f\x6e\x73\x74"
  "\x72\x61\x69\x6e\x74\x36\x04\x2d\x03\xf6\x01\x1c\x81\x8d\x02\xf5"
  "\x01\x1a\x81\x8d\x02\xf4\x01\x18\x81\x8d\x02\xf3\x01\x16\x81\x8d"
  "\x02\xf2\x01\x14\x81\x8b\x02\xf1\x01\x12\x81\x8d\x02\xf0\x01\x10"
  "\x81\x8b\x02\xef\x01\x0e\x81\x8b\x02\xee\x01\x0c\x81\x89\x02\xed"
  "\x01\x0a\x81\x8b\x02\xec\x01\x08\x81\x87\x02\xeb\x01\x06\x81\x87"
  "\x02\xea\x01\x04\x85\x08\x1b\x2d\x37\x02\x13\x04\x61\x64\x64\x1c"
  "\x02\x19\x64\x65\x62\x75\x67\x3a\x74\x72\x61\x63\x65\x2d\x63\x6f"
  "\x6e\x73\x74\x72\x61\x69\x6e\x74\x73\x3f\x38\x02\x03\x0b\x77\x72"
  "\x69\x74\x65\x2d\x6c\x69\x6e\x65\x39\x02\xfc\x01\x0e\x81\x89\x02"
  "\xfb\x01\x0c\x81\x89\x02\xfa\x01\x0a\x81\x89\x02\xf9\x01\x08\x81"
  "\x87\x02\xf8\x01\x06\x81\x87\x02\xf7\x01\x04\x85\x08\x0d\x1c\x3a"
  "\x02\x14\x02\x02\x02\x04\x13\x72\x65\x6d\x6f\x76\x65\x2d\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x31\x3b\x02\x80\x02\x0a\x81\x83"
  "\x02\xff\x01\x08\x81\x83\x02\xfe\x01\x06\x81\x85\x02\xfd\x01\x04"
  "\x83\x04\x09\x14\x3c\x02\x15\x1c\x35\x04\x17\x64\x65\x6c\x65\x74"
  "\x65\x2d\x6d\x61\x74\x63\x68\x69\x6e\x67\x2d\x69\x74\x65\x6d\x73"
  "\x21\x05\x17\x64\x65\x62\x75\x67\x3a\x72\x65\x6d\x6f\x76\x65\x2d"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x35\x04\x05\x6d\x65\x6d\x71"
  "\x04\x90\x02\x22\x81\x85\x02\x8f\x02\x20\x81\x87\x02\x8e\x02\x1e"
  "\x81\x8b\x02\x8d\x02\x1c\x81\x89\x02\x8c\x02\x1a\x81\x85\x02\x8b"
  "\x02\x18\x81\x85\x02\x8a\x02\x16\x81\x85\x02\x89\x02\x14\x81\x87"
  "\x02\x88\x02\x12\x81\x85\x02\x87\x02\x10\x81\x89\x02\x86\x02\x0e"
  "\x81\x85\x02\x85\x02\x0c\x81\x87\x02\x84\x02\x0a\x81\x85\x02\x83"
  "\x02\x08\x81\x89\x02\x82\x02\x06\x81\x85\x02\x81\x02\x04\x84\x06"
  "\x21\x33\x3d\x02\x16\x07\x72\x65\x6d\x6f\x76\x65\x1c\x02\x38\x02"
  "\x03\x39\x02\x96\x02\x0e\x81\x89\x02\x95\x02\x0c\x81\x89\x02\x94"
  "\x02\x0a\x81\x89\x02\x93\x02\x08\x81\x87\x02\x92\x02\x06\x81\x87"
  "\x02\x91\x02\x04\x85\x08\x0d\x1c\x39\x02\x17\x1d\x76\x61\x6c\x69"
  "\x64\x2d\x63\x6f\x6e\x73\x74\x72\x61\x69\x6e\x74\x2d\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x73\x3f\x3e\x03\x04\x2d\x04\x34\x03\x9c"
  "\x02\x0e\x81\x85\x02\x9b\x02\x0c\x81\x83\x02\x9a\x02\x0a\x81\x83"
  "\x02\x99\x02\x08\x81\x87\x02\x98\x02\x06\x81\x85\x02\x97\x02\x04"
  "\x83\x04\x0d\x1b\x2d\x02\x18\x02\x04\x0a\x03\x3e\x05\x16\x74\x72"
  "\x61\x6e\x73\x66\x65\x72\x2d\x62\x6c\x6f\x63\x6b\x2d\x63\x68\x69"
  "\x6c\x64\x21\x04\x20\x6f\x72\x69\x67\x69\x6e\x61\x6c\x2d\x62\x6c"
  "\x6f\x63\x6b\x2d\x6e\x65\x61\x72\x65\x73\x74\x2d\x61\x6e\x63\x65"
  "\x73\x74\x6f\x72\x0a\x05\xa9\x02\x1c\x81\x87\x02\xa8\x02\x1a\x81"
  "\x87\x02\xa7\x02\x18\x81\x89\x02\xa6\x02\x16\x81\x89\x02\xa5\x02"
  "\x14\x81\x89\x02\xa4\x02\x12\x81\x89\x02\xa3\x02\x10\x81\x89\x02"
  "\xa2\x02\x0e\x81\x85\x02\xa1\x02\x0c\x81\x8b\x02\xa0\x02\x0a\x81"
  "\x87\x02\x9f\x02\x08\x81\x85\x02\x9e\x02\x06\x83\x04\x9d\x02\x04"
  "\x83\x04\x1b\x2c\x02\x19\x21\x1c\x04\x34\x03\x23\x03\xaf\x02\x0e"
  "\x81\x85\x02\xae\x02\x0c\x81\x83\x02\xad\x02\x0a\x83\x04\xac\x02"
  "\x08\x81\x83\x02\xab\x02\x06\x81\x83\x02\xaa\x02\x04\x83\x04\x0d"
  "\x1b\x34\x02\x1a\x1c\xb0\x02\x04\x83\x04\x03\x23\x02\x1b\x1c\xb1"
  "\x02\x04\x83\x04\x03\x21\x02\x1c\x1c\xb2\x02\x04\x83\x04\x03\x02"
  "\x1d\x1c\xb3\x02\x04\x83\x04\x03\x3f\x02\x1e\x1c\x0f\x25\x72\x65"
  "\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67"
  "\x2e\x31\x40\x02\xb7\x02\x0a\x81\x85\x02\xb6\x02\x08\x81\x83\x02"
  "\xb5\x02\x06\x81\x83\x02\xb4\x02\x04\x83\x04\x09\x12\x41\x02\x1f"
  "\x1c\x06\x11\x02\xbf\x02\x12\x81\x89\x02\xbe\x02\x10\x81\x8d\x02"
  "\xbd\x02\x0e\x81\x8b\x02\xbc\x02\x0c\x81\x8b\x02\xbb\x02\x0a\x81"
  "\x8b\x02\xba\x02\x08\x81\x85\x02\xb9\x02\x06\x84\x06\xb8\x02\x04"
  "\x81\x89\x02\x11\x1c\x1c\x02\x20\x17\x08\x02\xc9\x02\x16\x81\x85"
  "\x02\xc8\x02\x14\x81\x83\x02\xc7\x02\x12\x81\x89\x02\xc6\x02\x10"
  "\x81\x87\x02\xc5\x02\x0e\x81\x87\x02\xc4\x02\x0c\x81\x85\x02\xc3"
  "\x02\x0a\x81\x83\x02\xc2\x02\x08\x81\x87\x02\xc1\x02\x06\x84\x06"
  "\xc0\x02\x04\x81\x85\x02\x15\x20\x02\x21\x12\x55\x6e\x72\x65\x6c"
  "\x61\x74\x65\x64\x20\x62\x6c\x6f\x63\x6b\x73\x3a\x04\x1e\x05\x2b"
  "\x03\xcc\x02\x08\x81\x85\x02\xcb\x02\x06\x84\x06\xca\x02\x04\x81"
  "\x85\x02\x07\x10\x2b\x21\x40\x2b\x06\x06\x1c\x06\x41\x04\x0a\x1e"
  "\x31\x0b\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x3f\x11\x17\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x64\x65\x70\x65\x6e\x64\x65\x6e"
  "\x63\x69\x65\x73\x13\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x61"
  "\x72\x67\x75\x6d\x65\x6e\x74\x12\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x6b\x65\x79\x77\x6f\x72\x64\x14\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x04\x04"
  "\x21\x04\x23\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x0e\x72\x74\x64\x3a\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x41\x0a\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x0a\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x08\x6b\x65\x79\x77\x6f\x72\x64"
  "\x19\x0d\x64\x65\x70\x65\x6e\x64\x65\x6e\x63\x69\x65\x73\x3e\x0b"
  "\x15\x35\x3b\x33\x36\x2a\x38\x22\x1f\x30\x28\x27\x26\x24\x0f\x12"
  "\x17\x16\x0c\x09\x0e\x19\x69\x64\x65\x6e\x74\x69\x66\x79\x2d\x63"
  "\x6c\x6f\x73\x75\x72\x65\x2d\x6c\x69\x6d\x69\x74\x73\x21\x1b\x34"
  "\x04\x04\x2d\x04\x39\x04\x3d\x04\x3c\x04\x3a\x04\x37\x04\x1d\x04"
  "\x25\x0e\x04\x0d\x04\x32\x04\x2f\x06\x2e\x04\x2c\x04\x29\x04\x20"
  "\x04\x1b\x04\x1a\x04\x14\x04\x18\x04\x13\x04\x10\x04\x1b\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x06"
  "\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64"
  "\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04\x41\x02\x0e\x1e"
  "\x80\x80\x04\x0d\x1c\x81\x81\x02\x0c\x1a\x81\x81\x02\x0b\x18\x81"
  "\x85\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x8b\x02\x08\x12\x81\x87"
  "\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83\x02"
  "\x04\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81\x83\x02\x01"
  "\x04\x81\x83\x02\x1d\x38";

SCHEME_OBJECT *
closan_so_data_f738b7e057c02552 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_closan_so_data_f738b7e057c02552 [0]))), (sizeof (prog_closan_so_data_f738b7e057c02552)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_21]));
}

DECLARE_COMPILED_DATA_NS ("closan.so", closan_so_data_f738b7e057c02552)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("closan.so", "d7b96e2cafb8672d")
