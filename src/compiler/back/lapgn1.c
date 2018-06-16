/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:08-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_11 11
#define TAG_1_12 4
#define LABEL_1_9 13
#define TAG_1_10 5
#define LABEL_1_17 15
#define LABEL_1_18 17
#define LABEL_1_19 19
#define LABEL_1_14 21
#define TAG_1_15 9
#define LABEL_1_21 23
#define LABEL_1_23 25
#define LABEL_1_24 27
#define LABEL_1_20 29
#define LABEL_1_25 31
#define LABEL_1_26 33
#define LABEL_1_32 35
#define LABEL_1_35 37
#define LABEL_1_30 39
#define LABEL_1_28 41
#define TAG_1_29 19
#define LABEL_1_42 43
#define LABEL_1_43 45
#define LABEL_1_44 47
#define LABEL_1_45 49
#define LABEL_1_46 51
#define LABEL_1_47 53
#define LABEL_1_27 55
#define LABEL_1_50 57
#define LABEL_1_33 59
#define LABEL_1_34 61
#define LABEL_1_36 63
#define LABEL_1_37 65
#define TAG_1_38 31
#define LABEL_1_40 67
#define LABEL_1_41 69
#define LABEL_1_57 71
#define LABEL_1_58 73
#define LABEL_1_60 75
#define LABEL_1_61 77
#define LABEL_1_62 79
#define LABEL_1_63 81
#define LABEL_1_64 83
#define LABEL_1_49 85
#define LABEL_1_66 87
#define LABEL_1_55 89
#define LABEL_1_59 91
#define LABEL_1_68 93
#define LABEL_1_67 95
#define ENVIRONMENT_LABEL_1_3 142
#define DEBUGGING_LABEL_1_2 141
#define OBJECT_1_9 140
#define OBJECT_1_8 139
#define OBJECT_1_7 138
#define OBJECT_1_6 137
#define OBJECT_1_5 136
#define OBJECT_1_4 135
#define OBJECT_1_3 134
#define OBJECT_1_2 133
#define OBJECT_1_1 132
#define OBJECT_1_0 131
#define EXECUTE_CACHE_1_65 97
#define EXECUTE_CACHE_1_56 99
#define EXECUTE_CACHE_1_54 101
#define EXECUTE_CACHE_1_53 103
#define EXECUTE_CACHE_1_52 105
#define EXECUTE_CACHE_1_51 107
#define EXECUTE_CACHE_1_48 109
#define EXECUTE_CACHE_1_39 111
#define EXECUTE_CACHE_1_31 113
#define EXECUTE_CACHE_1_22 115
#define EXECUTE_CACHE_1_16 117
#define EXECUTE_CACHE_1_13 119
#define EXECUTE_CACHE_1_6 121
#define FREE_REFERENCE_1_4 124
#define FREE_REFERENCE_1_3 125
#define FREE_REFERENCE_1_2 126
#define FREE_REFERENCE_1_1 127
#define FREE_REFERENCE_1_0 128
#define FREE_ASSIGNMENT_1_0 130
#define FREE_REFERENCES_LABEL_1_0 96
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn1_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd84;
  machine_word Wrd68;
  machine_word Wrd93;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd103;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd21;
  machine_word Wrd80;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd83;
  machine_word Wrd51;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd14;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_1_4);
      goto generate_lap_65;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_67;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_68;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto lambda_92;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto swapB_91;

    case 6:
      current_block = (Rpc - LABEL_1_17);
      goto label_69;

    case 7:
      current_block = (Rpc - LABEL_1_18);
      goto label_70;

    case 8:
      current_block = (Rpc - LABEL_1_19);
      goto label_71;

    case 9:
      current_block = (Rpc - LABEL_1_14);
      goto lambda_93;

    case 10:
      current_block = (Rpc - LABEL_1_21);
      goto label_72;

    case 11:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_1_24);
      goto continuation_23;

    case 13:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_2;

    case 14:
      current_block = (Rpc - LABEL_1_25);
      goto label_73;

    case 15:
      current_block = (Rpc - LABEL_1_26);
      goto label_74;

    case 16:
      current_block = (Rpc - LABEL_1_32);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_1_35);
      goto lambda_9;

    case 18:
      current_block = (Rpc - LABEL_1_30);
      goto continuation_53;

    case 19:
      current_block = (Rpc - LABEL_1_28);
      goto lambda_94;

    case 20:
      current_block = (Rpc - LABEL_1_42);
      goto label_75;

    case 21:
      current_block = (Rpc - LABEL_1_43);
      goto label_76;

    case 22:
      current_block = (Rpc - LABEL_1_44);
      goto label_77;

    case 23:
      current_block = (Rpc - LABEL_1_45);
      goto label_78;

    case 24:
      current_block = (Rpc - LABEL_1_46);
      goto label_79;

    case 25:
      current_block = (Rpc - LABEL_1_47);
      goto label_80;

    case 26:
      current_block = (Rpc - LABEL_1_27);
      goto lambda_22;

    case 27:
      current_block = (Rpc - LABEL_1_50);
      goto label_81;

    case 28:
      current_block = (Rpc - LABEL_1_33);
      goto continuation_13;

    case 29:
      current_block = (Rpc - LABEL_1_34);
      goto continuation_10;

    case 30:
      current_block = (Rpc - LABEL_1_36);
      goto continuation_8;

    case 31:
      current_block = (Rpc - LABEL_1_37);
      goto lambda_96;

    case 32:
      current_block = (Rpc - LABEL_1_40);
      goto continuation_50;

    case 33:
      current_block = (Rpc - LABEL_1_41);
      goto continuation_28;

    case 34:
      current_block = (Rpc - LABEL_1_57);
      goto continuation_36;

    case 35:
      current_block = (Rpc - LABEL_1_58);
      goto loop_42;

    case 36:
      current_block = (Rpc - LABEL_1_60);
      goto label_82;

    case 37:
      current_block = (Rpc - LABEL_1_61);
      goto label_83;

    case 38:
      current_block = (Rpc - LABEL_1_62);
      goto label_84;

    case 39:
      current_block = (Rpc - LABEL_1_63);
      goto label_85;

    case 40:
      current_block = (Rpc - LABEL_1_64);
      goto label_86;

    case 41:
      current_block = (Rpc - LABEL_1_49);
      goto continuation_20;

    case 42:
      current_block = (Rpc - LABEL_1_66);
      goto label_87;

    case 43:
      current_block = (Rpc - LABEL_1_55);
      goto continuation_27;

    case 44:
      current_block = (Rpc - LABEL_1_59);
      goto continuation_32;

    case 45:
      current_block = (Rpc - LABEL_1_68);
      goto label_88;

    case 46:
      current_block = (Rpc - LABEL_1_67);
      goto continuation_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_lap_90)
DEFLABEL (generate_lap_65)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_104;
  Wrd5 = Wrd9;

DEFLABEL (label_103)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_102;
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_101;
  Wrd12 = Wrd16;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_99)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_9])));
  Rhp += 1;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd34.pObj) = (& (Rhp [-1]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd34.pObj)));
  (Rsp [1]) = (Wrd35.Obj);
  ((Wrd37.pObj) [2]) = (Wrd35.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_11])));
  Rhp += 3;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd25 = Wrd20;
  (Wrd26.Obj) = (Rsp [4]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  ((Wrd25.pObj) [4]) = (Wrd22.Obj);
  (Rsp [3]) = (Wrd19.Obj);
  (Rsp [2]) = (Wrd38.Obj);
  (Rsp [4]) = (Wrd38.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd13.pObj));

DEFLABEL (label_68)
  (Wrd12.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_102)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_99;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd6.pObj));

DEFLABEL (label_67)
  (Wrd5.Obj) = Rvl;
  goto label_103;

DEFLABEL (lambda_92)
  CLOSURE_HEADER (LABEL_1_11);

DEFLABEL (lambda_56)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_14])));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (swapB_91)
  CLOSURE_HEADER (LABEL_1_9);

DEFLABEL (swapB_63)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_113;

DEFLABEL (label_112)
  Wrd5 = Wrd9;

DEFLABEL (label_111)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_110;

DEFLABEL (label_109)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_108)
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
    goto label_107;

DEFLABEL (label_106)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_105)
  Rvl = (current_block [OBJECT_1_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_107)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_106;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_19])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_71)
  goto label_105;

DEFLABEL (label_110)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_109;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_18])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_70)
  goto label_108;

DEFLABEL (label_113)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_112;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_17])), (Wrd6.pObj));

DEFLABEL (label_69)
  (Wrd5.Obj) = Rvl;
  goto label_111;

DEFLABEL (lambda_93)
  CLOSURE_HEADER (LABEL_1_14);

DEFLABEL (lambda_55)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_125;
  Wrd11 = Wrd15;

DEFLABEL (label_124)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_22]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_123;
  Wrd5 = Wrd9;

DEFLABEL (label_122)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_114;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  if ((Wrd14.Obj) == (current_block [OBJECT_1_1]))
    goto label_114;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_121;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_120)
  if ((Wrd16.Obj) == (current_block [OBJECT_1_1]))
    goto label_114;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.pObj) = (& (Rsp [1]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd38.Obj);
  goto lambda_9;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_1_32);
  (Wrd9.Obj) = (current_block [OBJECT_1_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.pObj) = (& (Rsp [3]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_1_4]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto lambda_9;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_51]));

DEFLABEL (label_114)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_119)
  (Wrd40.Obj) = (Rsp [0]);
  if (! ((Wrd40.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_118;
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [2]);
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [3]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_22]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_1_24);

DEFLABEL (label_118)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd44.Obj);
  if ((Wrd44.Obj) == ((SCHEME_OBJECT) 0))
    goto label_116;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd44.Obj);
  goto label_115;

DEFLABEL (label_116)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd55.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_28])));
  Rhp += 2;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd55.pObj)));
  Wrd58 = Wrd55;
  (Wrd61.Obj) = ((Wrd43.pObj) [3]);
  ((Wrd58.pObj) [2]) = (Wrd61.Obj);
  (Wrd57.Obj) = (Rsp [1]);
  ((Wrd58.pObj) [3]) = (Wrd57.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_115)
DEFLABEL (label_117)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_31]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_1_30);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_121)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_74)
  (Wrd16.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_25])), (Wrd6.pObj));

DEFLABEL (label_73)
  (Wrd5.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_21])), (Wrd12.pObj));

DEFLABEL (label_72)
  (Wrd11.Obj) = Rvl;
  goto label_124;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_33);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_52]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_23);
  (Wrd72.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd75.pObj) = (& (Rhp [-2]));
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd75.pObj)));
  (* (--Rsp)) = (Wrd76.Obj);
  goto label_119;

DEFLABEL (lambda_95)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_1_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_37])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd15 = Wrd14;
  (Wrd16.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_39]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_36);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_53]));

DEFLABEL (lambda_94)
  CLOSURE_HEADER (LABEL_1_28);

DEFLABEL (lambda_51)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  if (! ((Wrd13.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_129;
  (Wrd83.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd83.Obj);
  goto loop_42;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_1_41);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_127;
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_126;

DEFLABEL (label_127)
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_126)
DEFLABEL (label_128)
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_56]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_1_55);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_54]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_1_40);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_54]));

DEFLABEL (label_129)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_141;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_140)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_139;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_138)
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_137;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_136)
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [3]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_135;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd44.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_134)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_133;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_132)
  (Wrd71.Obj) = (Rsp [4]);
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [3]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_131;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_130)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_48]));

DEFLABEL (label_131)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_47]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 1);

DEFLABEL (label_80)
  (* (--Rsp)) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_46]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 1);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_45]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_78)
  (Wrd44.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_44]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 1);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_43]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_76)
  (Wrd30.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_75)
  (Wrd15.Obj) = Rvl;
  goto label_140;

DEFLABEL (lambda_97)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_1_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_145;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_145;
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_144)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_51]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_1_49);
  (Wrd5.Obj) = Rvl;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_143;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd15.Lng))))
    goto label_143;
  ((Wrd13.pObj) [1]) = Rvl;

DEFLABEL (label_142)
  Rvl = (current_block [OBJECT_1_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_143)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_1_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_66]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_9]), 3);

DEFLABEL (label_87)
  goto label_142;

DEFLABEL (label_145)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_1_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_50]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 2);

DEFLABEL (label_81)
  (* (--Rsp)) = Rvl;
  goto label_144;

DEFLABEL (lambda_96)
  CLOSURE_HEADER (LABEL_1_37);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd25.uLng) == 10)
    goto label_147;

DEFLABEL (label_146)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 2);

DEFLABEL (label_147)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_146;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_146;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  Rvl = ((Wrd14.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (loop_98)
DEFLABEL (loop_42)
  INTERRUPT_CHECK (26, LABEL_1_58);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_1_1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_148;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_148)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_59]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_162;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_161)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_57]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_160;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd30.Lng))))
    goto label_160;
  (Wrd24.Obj) = ((Wrd28.pObj) [3]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_159)
  (Wrd38.Obj) = (Rsp [0]);
  if ((Wrd38.Obj) == ((SCHEME_OBJECT) 0))
    goto label_156;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_155)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_154;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd50.Lng))))
    goto label_154;
  (Wrd44.Obj) = ((Wrd48.pObj) [2]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_153)
  (Wrd67.Obj) = (Rsp [2]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 10))
    goto label_152;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd66.Lng))))
    goto label_152;
  (Wrd60.Obj) = ((Wrd64.pObj) [1]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_151)
  (Wrd83.Obj) = (Rsp [3]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 10))
    goto label_150;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd82.Lng))))
    goto label_150;
  (Wrd74.Obj) = ((Wrd80.pObj) [4]);

DEFLABEL (label_149)
  (Rsp [3]) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_65]));

DEFLABEL (label_150)
  (Wrd85.Obj) = (Rsp [3]);
  (Wrd86.Obj) = (current_block [OBJECT_1_3]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_64]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 2);

DEFLABEL (label_86)
  (Wrd74.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  (Wrd69.Obj) = (Rsp [2]);
  (Wrd70.Obj) = (current_block [OBJECT_1_4]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_63]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 2);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (current_block [OBJECT_1_8]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_62]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 2);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  (Wrd90.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (current_block [OBJECT_1_8]);
  (Rsp [1]) = (Wrd91.Obj);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd103.uLng) == 10)
    goto label_158;

DEFLABEL (label_157)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 2);

DEFLABEL (label_158)
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd100.Obj) = ((Wrd99.pObj) [0]);
  (Wrd101.Lng) = (FIXNUM_TO_LONG (Wrd100.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd101.Lng))))
    goto label_157;
  (Wrd93.Obj) = ((Wrd99.pObj) [2]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd93.Obj);
  goto label_155;

DEFLABEL (label_160)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (current_block [OBJECT_1_7]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_61]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_6]), 2);

DEFLABEL (label_83)
  (* (--Rsp)) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_60]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 1);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_161;

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_1_57);
  (* (--Rsp)) = Rvl;
  goto label_155;

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_1_59);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_164;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_163)
  goto loop_42;

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_1_67);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_54]));

DEFLABEL (label_164)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_68]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_163;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_7 5
#define TAG_2_8 1
#define LABEL_2_11 7
#define LABEL_2_5 9
#define TAG_2_6 3
#define LABEL_2_15 11
#define LABEL_2_16 13
#define LABEL_2_17 15
#define LABEL_2_18 17
#define LABEL_2_19 19
#define LABEL_2_20 21
#define LABEL_2_10 23
#define LABEL_2_21 25
#define LABEL_2_12 27
#define TAG_2_13 12
#define LABEL_2_24 29
#define LABEL_2_23 31
#define ENVIRONMENT_LABEL_2_3 56
#define DEBUGGING_LABEL_2_2 55
#define OBJECT_2_5 54
#define OBJECT_2_4 53
#define OBJECT_2_3 52
#define OBJECT_2_2 51
#define OBJECT_2_1 50
#define OBJECT_2_0 49
#define EXECUTE_CACHE_2_26 33
#define EXECUTE_CACHE_2_25 35
#define EXECUTE_CACHE_2_22 37
#define EXECUTE_CACHE_2_14 39
#define EXECUTE_CACHE_2_9 41
#define FREE_REFERENCE_2_1 44
#define FREE_REFERENCE_2_0 45
#define FREE_ASSIGNMENT_2_1 47
#define FREE_ASSIGNMENT_2_0 48
#define FREE_REFERENCES_LABEL_2_0 32
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn1_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
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
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      goto cgen_rgraph_21;

    case 1:
      current_block = (Rpc - LABEL_2_7);
      goto lambda_35;

    case 2:
      current_block = (Rpc - LABEL_2_11);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_2_5);
      goto swapB_34;

    case 4:
      current_block = (Rpc - LABEL_2_15);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_2_16);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_2_17);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_2_18);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_2_19);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_2_20);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_2_21);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_2_12);
      goto lambda_36;

    case 13:
      current_block = (Rpc - LABEL_2_24);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cgen_rgraph_33)
DEFLABEL (cgen_rgraph_21)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_5])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  Wrd25 = Wrd27;
  ((Wrd25.pObj) [2]) = (Wrd7.Obj);
  ((Wrd25.pObj) [3]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_7])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  ((Wrd16.pObj) [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd28.Obj);
  (Rsp [2]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_2_7);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_41;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_41;
  (Wrd12.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_40)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_12])));
  Rhp += 1;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  Wrd34 = Wrd33;
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [2]);
  ((Wrd34.pObj) [2]) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_39;
  Wrd6 = Wrd10;

DEFLABEL (label_38)
  if ((Wrd6.Obj) == (current_block [OBJECT_2_0]))
    goto label_37;
  (Wrd13.Obj) = (current_block [OBJECT_2_4]);
  (Rsp [0]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_22]));

DEFLABEL (label_37)
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_21])), (Wrd7.pObj));

DEFLABEL (label_30)
  (Wrd6.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_2_1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (swapB_34)
  CLOSURE_HEADER (LABEL_2_5);

DEFLABEL (swapB_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  Wrd5 = Wrd9;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_54)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_51)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  Wrd57 = Wrd61;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_47;

DEFLABEL (label_46)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_45)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_42)
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_44)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_20])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_29)
  goto label_42;

DEFLABEL (label_47)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_46;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_19])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_28)
  goto label_45;

DEFLABEL (label_50)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_49;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_18])), (Wrd58.pObj));

DEFLABEL (label_27)
  (Wrd57.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_53)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_52;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_17])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_26)
  goto label_51;

DEFLABEL (label_56)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_55;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_16])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_25)
  goto label_54;

DEFLABEL (label_59)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_58;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_2_15])), (Wrd6.pObj));

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_2_12);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_62;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_62;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_25]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_60)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (label_62)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_2_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_61;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define LABEL_3_11 13
#define LABEL_3_14 15
#define LABEL_3_15 17
#define LABEL_3_16 19
#define LABEL_3_13 21
#define LABEL_3_19 23
#define LABEL_3_20 25
#define LABEL_3_21 27
#define LABEL_3_17 29
#define LABEL_3_22 31
#define LABEL_3_27 33
#define LABEL_3_28 35
#define LABEL_3_29 37
#define LABEL_3_31 39
#define LABEL_3_32 41
#define LABEL_3_35 43
#define LABEL_3_36 45
#define LABEL_3_39 47
#define LABEL_3_23 49
#define TAG_3_24 23
#define LABEL_3_42 51
#define LABEL_3_41 53
#define LABEL_3_44 55
#define LABEL_3_45 57
#define LABEL_3_46 59
#define LABEL_3_38 61
#define LABEL_3_47 63
#define LABEL_3_50 65
#define LABEL_3_30 67
#define LABEL_3_33 69
#define LABEL_3_34 71
#define LABEL_3_49 73
#define LABEL_3_55 75
#define LABEL_3_54 77
#define LABEL_3_56 79
#define LABEL_3_57 81
#define ENVIRONMENT_LABEL_3_3 132
#define DEBUGGING_LABEL_3_2 131
#define OBJECT_3_14 130
#define OBJECT_3_13 129
#define OBJECT_3_12 128
#define OBJECT_3_11 127
#define OBJECT_3_10 126
#define OBJECT_3_9 125
#define OBJECT_3_8 124
#define OBJECT_3_7 123
#define OBJECT_3_6 122
#define OBJECT_3_5 121
#define OBJECT_3_4 120
#define OBJECT_3_3 119
#define OBJECT_3_2 118
#define OBJECT_3_1 117
#define OBJECT_3_0 116
#define EXECUTE_CACHE_3_58 83
#define EXECUTE_CACHE_3_53 85
#define EXECUTE_CACHE_3_52 87
#define EXECUTE_CACHE_3_51 89
#define EXECUTE_CACHE_3_48 91
#define EXECUTE_CACHE_3_43 93
#define EXECUTE_CACHE_3_40 95
#define EXECUTE_CACHE_3_37 97
#define EXECUTE_CACHE_3_26 99
#define EXECUTE_CACHE_3_25 101
#define EXECUTE_CACHE_3_18 103
#define EXECUTE_CACHE_3_12 105
#define EXECUTE_CACHE_3_10 107
#define EXECUTE_CACHE_3_6 109
#define FREE_REFERENCE_3_1 112
#define FREE_REFERENCE_3_0 113
#define FREE_ASSIGNMENT_3_0 115
#define FREE_REFERENCES_LABEL_3_0 82
#define NUMBER_OF_LINKER_SECTIONS_3_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn1_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd70;
  machine_word Wrd40;
  machine_word Wrd67;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd52;
  machine_word Wrd37;
  machine_word Wrd43;
  machine_word Wrd140;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd127;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd111;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd89;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd78;
  machine_word Wrd86;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd69;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd147;
  machine_word Wrd155;
  machine_word Wrd150;
  machine_word Wrd152;
  machine_word Wrd60;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd146;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd50;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_3_4);
      goto cgen_entry_45;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_47;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto loop_8;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_3_14);
      goto label_49;

    case 7:
      current_block = (Rpc - LABEL_3_15);
      goto label_48;

    case 8:
      current_block = (Rpc - LABEL_3_16);
      goto cgen_right_44;

    case 9:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_3_19);
      goto label_50;

    case 11:
      current_block = (Rpc - LABEL_3_20);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_3_21);
      goto label_51;

    case 13:
      current_block = (Rpc - LABEL_3_17);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_3_22);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_3_27);
      goto label_52;

    case 16:
      current_block = (Rpc - LABEL_3_28);
      goto label_54;

    case 17:
      current_block = (Rpc - LABEL_3_29);
      goto label_59;

    case 18:
      current_block = (Rpc - LABEL_3_31);
      goto label_55;

    case 19:
      current_block = (Rpc - LABEL_3_32);
      goto label_56;

    case 20:
      current_block = (Rpc - LABEL_3_35);
      goto label_57;

    case 21:
      current_block = (Rpc - LABEL_3_36);
      goto label_58;

    case 22:
      current_block = (Rpc - LABEL_3_39);
      goto label_53;

    case 23:
      current_block = (Rpc - LABEL_3_23);
      goto lambda_71;

    case 24:
      current_block = (Rpc - LABEL_3_42);
      goto label_60;

    case 25:
      current_block = (Rpc - LABEL_3_41);
      goto continuation_41;

    case 26:
      current_block = (Rpc - LABEL_3_44);
      goto continuation_21;

    case 27:
      current_block = (Rpc - LABEL_3_45);
      goto label_64;

    case 28:
      current_block = (Rpc - LABEL_3_46);
      goto label_65;

    case 29:
      current_block = (Rpc - LABEL_3_38);
      goto continuation_19;

    case 30:
      current_block = (Rpc - LABEL_3_47);
      goto label_62;

    case 31:
      current_block = (Rpc - LABEL_3_50);
      goto label_61;

    case 32:
      current_block = (Rpc - LABEL_3_30);
      goto continuation_34;

    case 33:
      current_block = (Rpc - LABEL_3_33);
      goto continuation_39;

    case 34:
      current_block = (Rpc - LABEL_3_34);
      goto continuation_38;

    case 35:
      current_block = (Rpc - LABEL_3_49);
      goto continuation_27;

    case 36:
      current_block = (Rpc - LABEL_3_55);
      goto label_63;

    case 37:
      current_block = (Rpc - LABEL_3_54);
      goto continuation_29;

    case 38:
      current_block = (Rpc - LABEL_3_56);
      goto label_66;

    case 39:
      current_block = (Rpc - LABEL_3_57);
      goto continuation_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cgen_entry_68)
DEFLABEL (cgen_entry_45)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_73;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_73;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_72)
  Rdl = (& (Rsp [5]));
  goto loop_8;

DEFLABEL (label_73)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (loop_69)
DEFLABEL (loop_8)
  DLINK_INTERRUPT_CHECK (25, LABEL_3_8);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_75;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_75;
  (Wrd9.Obj) = ((Wrd15.pObj) [7]);

DEFLABEL (label_74)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto cgen_right_44;

DEFLABEL (label_75)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (current_block [OBJECT_3_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_48)
  (Wrd20.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd9.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_76)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_80;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd47.Lng))))
    goto label_80;
  (Wrd41.Obj) = ((Wrd45.pObj) [7]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_79)
  Rdl = (& (Rsp [2]));
  goto cgen_right_44;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_78;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd15.Lng))))
    goto label_78;
  (Wrd7.Obj) = ((Wrd13.pObj) [8]);

DEFLABEL (label_77)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto cgen_right_44;

DEFLABEL (label_78)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_3_3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_50)
  (Wrd18.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd54.Obj) = (Rsp [3]);
  (Wrd55.Obj) = (current_block [OBJECT_3_2]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_49)
  (Wrd50.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd50.Obj));
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (cgen_right_70)
DEFLABEL (cgen_right_44)
  DLINK_INTERRUPT_CHECK (25, LABEL_3_16);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_17);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_82;

DEFLABEL (label_81)
  Rvl = (current_block [OBJECT_3_5]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_82)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_20);
  (Wrd16.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd16.Obj));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_81;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_121;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd28.Lng))))
    goto label_121;
  (Wrd22.Obj) = ((Wrd26.pObj) [6]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_120)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_23])));
  Rhp += 1;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  Wrd47 = Wrd46;
  (Wrd48.Obj) = (Rsp [5]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  ((Wrd47.pObj) [2]) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_25]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_22);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_83;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_41]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_3_41);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_8;

DEFLABEL (label_83)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_119;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_118)
  if ((Wrd14.Obj) == (current_block [OBJECT_3_7]))
    goto label_105;

DEFLABEL (label_104)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_38]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd43.Obj) = ((Wrd36.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_103;
  Wrd35 = Wrd43;

DEFLABEL (label_102)
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_40]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_3_38);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  (Wrd12.Obj) = Rvl;

DEFLABEL (label_93)
  Rsp = (& (Rsp [1]));
  (Wrd70.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd70.Obj));
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_49]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_92;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_91)
  (Wrd31.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_51]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_3_49);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_3_7]))
    goto label_85;
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_84;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [1]) = (Wrd14.Obj);
  Rvl = (current_block [OBJECT_3_5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_84)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_14]), 2);

DEFLABEL (label_85)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_54]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd31.Obj) = ((Wrd24.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_90;
  Wrd23 = Wrd31;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_51]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_3_54);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd16.Obj) = ((Wrd8.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_88;

DEFLABEL (label_87)
  ((Wrd8.pObj) [0]) = Rvl;

DEFLABEL (label_86)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_57]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_58]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_3_57);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto loop_8;

DEFLABEL (label_88)
  if ((Wrd16.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_87;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_56])), (Wrd8.pObj), Rvl);

DEFLABEL (label_66)
  (Wrd20.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd20.Obj));
  goto label_86;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_55])), (Wrd24.pObj));

DEFLABEL (label_63)
  (Wrd25.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_50]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_61)
  (Wrd23.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd23.Obj));
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_44]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_101;
  Wrd35 = Wrd39;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd41.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_48]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_3_44);
  (Wrd46.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Rsp [0]) = (Wrd43.Obj);
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_99;
  Wrd48 = Wrd52;

DEFLABEL (label_98)
  (Wrd57.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd66.Obj) = ((Wrd58.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_97;

DEFLABEL (label_96)
  ((Wrd58.pObj) [0]) = (Wrd54.Obj);

DEFLABEL (label_95)
  (Wrd12.Obj) = (Rsp [0]);
  goto label_93;

DEFLABEL (label_97)
  if ((Wrd66.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_96;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_46])), (Wrd58.pObj), (Wrd54.Obj));

DEFLABEL (label_65)
  goto label_95;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_45])), (Wrd49.pObj));

DEFLABEL (label_64)
  (Wrd48.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_47])), (Wrd36.pObj));

DEFLABEL (label_62)
  (Wrd35.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_39])), (Wrd36.pObj));

DEFLABEL (label_53)
  (Wrd37.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_117;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [0]);

DEFLABEL (label_116)
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd146.uLng) == 10))
    goto label_115;
  (Wrd143.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd144.Obj) = ((Wrd143.pObj) [0]);
  (Wrd145.Lng) = (FIXNUM_TO_LONG (Wrd144.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd145.Lng))))
    goto label_115;
  (Wrd60.Obj) = ((Wrd143.pObj) [1]);
  if ((Wrd60.Obj) == ((SCHEME_OBJECT) 0))
    goto label_104;

DEFLABEL (label_114)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd76.Obj) = (Rsp [4]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 10))
    goto label_113;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd75.Lng))))
    goto label_113;
  (Wrd69.Obj) = ((Wrd73.pObj) [1]);
  (* (--Rsp)) = (Wrd69.Obj);

DEFLABEL (label_112)
  (Wrd96.Obj) = (Rsp [0]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 10))
    goto label_111;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd94.Obj) = ((Wrd93.pObj) [0]);
  (Wrd95.Lng) = (FIXNUM_TO_LONG (Wrd94.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd95.Lng))))
    goto label_111;
  (Wrd89.Obj) = ((Wrd93.pObj) [12]);
  (* (--Rsp)) = (Wrd89.Obj);

DEFLABEL (label_110)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (Wrd118.Obj) = (Rsp [7]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 10))
    goto label_109;
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [0]);
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd117.Lng))))
    goto label_109;
  (Wrd111.Obj) = ((Wrd115.pObj) [10]);
  (* (--Rsp)) = (Wrd111.Obj);

DEFLABEL (label_108)
  (Wrd134.Obj) = (Rsp [4]);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if (! ((Wrd135.uLng) == 10))
    goto label_107;
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd134.Obj));
  (Wrd132.Obj) = ((Wrd131.pObj) [0]);
  (Wrd133.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd133.Lng))))
    goto label_107;
  (Wrd127.Obj) = ((Wrd131.pObj) [11]);
  (* (--Rsp)) = (Wrd127.Obj);

DEFLABEL (label_106)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_37]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_3_34);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_53]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_3_33);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_52]));

DEFLABEL (label_107)
  (Wrd136.Obj) = (Rsp [4]);
  (Wrd137.Obj) = (current_block [OBJECT_3_12]);
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_36]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd136.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd120.Obj) = (Rsp [7]);
  (Wrd121.Obj) = (current_block [OBJECT_3_11]);
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_35]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd98.Obj) = (Rsp [0]);
  (Wrd99.Obj) = (current_block [OBJECT_3_10]);
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd82.Obj) = (Rsp [4]);
  (Wrd83.Obj) = (current_block [OBJECT_3_9]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_31]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_55)
  (Wrd78.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd78.Obj));
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd152.Obj) = (current_block [OBJECT_3_9]);
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd150.Obj);
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_29]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_59)
  (Wrd147.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd147.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_104;
  goto label_114;

DEFLABEL (label_117)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_8]), 1);

DEFLABEL (label_54)
  (Wrd51.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd46.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_52)
  (Wrd19.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd14.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_3_4]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_51)
  (Wrd31.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd31.Obj));
  (* (--Rsp)) = Rvl;
  goto label_120;

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_3_30);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_8;

DEFLABEL (lambda_71)
  CLOSURE_HEADER (LABEL_3_23);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_123;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_123;
  (Wrd5.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_122)
  (Wrd29.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd29.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_43]));

DEFLABEL (label_123)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd25.Obj) = (current_block [OBJECT_3_13]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_42]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_60)
  (Wrd5.Obj) = Rvl;
  goto label_122;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_9 7
#define TAG_4_10 2
#define LABEL_4_13 9
#define LABEL_4_7 11
#define TAG_4_8 4
#define LABEL_4_14 13
#define LABEL_4_15 15
#define LABEL_4_16 17
#define LABEL_4_17 19
#define LABEL_4_18 21
#define LABEL_4_19 23
#define LABEL_4_12 25
#define LABEL_4_20 27
#define LABEL_4_21 29
#define LABEL_4_22 31
#define LABEL_4_23 33
#define LABEL_4_24 35
#define LABEL_4_27 37
#define LABEL_4_26 39
#define ENVIRONMENT_LABEL_4_3 62
#define DEBUGGING_LABEL_4_2 61
#define OBJECT_4_5 60
#define OBJECT_4_4 59
#define OBJECT_4_3 58
#define OBJECT_4_2 57
#define OBJECT_4_1 56
#define OBJECT_4_0 55
#define EXECUTE_CACHE_4_28 41
#define EXECUTE_CACHE_4_25 43
#define EXECUTE_CACHE_4_11 45
#define EXECUTE_CACHE_4_6 47
#define FREE_REFERENCE_4_1 50
#define FREE_REFERENCE_4_0 51
#define FREE_ASSIGNMENT_4_1 53
#define FREE_ASSIGNMENT_4_0 54
#define FREE_REFERENCES_LABEL_4_0 40
#define NUMBER_OF_LINKER_SECTIONS_4_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn1_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd16;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
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
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_4_4);
      goto cgen_bblock_27;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_9);
      goto lambda_43;

    case 3:
      current_block = (Rpc - LABEL_4_13);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_4_7);
      goto swapB_42;

    case 5:
      current_block = (Rpc - LABEL_4_14);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_4_15);
      goto label_31;

    case 7:
      current_block = (Rpc - LABEL_4_16);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_4_17);
      goto label_33;

    case 9:
      current_block = (Rpc - LABEL_4_18);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_4_19);
      goto label_35;

    case 11:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_4_20);
      goto label_37;

    case 13:
      current_block = (Rpc - LABEL_4_21);
      goto label_36;

    case 14:
      current_block = (Rpc - LABEL_4_22);
      goto loop_9;

    case 15:
      current_block = (Rpc - LABEL_4_23);
      goto label_38;

    case 16:
      current_block = (Rpc - LABEL_4_24);
      goto continuation_5;

    case 17:
      current_block = (Rpc - LABEL_4_27);
      goto label_39;

    case 18:
      current_block = (Rpc - LABEL_4_26);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cgen_bblock_41)
DEFLABEL (cgen_bblock_27)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd8.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_7])));
  Rhp += 2;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  Wrd25 = Wrd27;
  ((Wrd25.pObj) [2]) = (Wrd7.Obj);
  ((Wrd25.pObj) [3]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_9])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  ((Wrd15.pObj) [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd14.Obj);
  (Rsp [4]) = (Wrd28.Obj);
  (Rsp [2]) = (Wrd28.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_4_9);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_52;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd20.Lng))))
    goto label_52;
  (Wrd12.Obj) = ((Wrd18.pObj) [9]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_51)
  goto loop_9;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_12);
  (Wrd5.Obj) = Rvl;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_50;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd41.Lng))))
    goto label_50;
  ((Wrd39.pObj) [9]) = Rvl;

DEFLABEL (label_49)
  (Wrd6.Obj) = (current_block [OBJECT_4_4]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_48;
  Wrd11 = Wrd15;

DEFLABEL (label_47)
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 10)
    goto label_46;

DEFLABEL (label_45)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 3);

DEFLABEL (label_46)
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd27.Lng))))
    goto label_45;
  ((Wrd25.pObj) [12]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_4_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_21])), (Wrd12.pObj));

DEFLABEL (label_36)
  (Wrd11.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [2]);
  (Wrd49.Obj) = (current_block [OBJECT_4_0]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 3);

DEFLABEL (label_37)
  goto label_49;

DEFLABEL (label_52)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_4_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (swapB_42)
  CLOSURE_HEADER (LABEL_4_7);

DEFLABEL (swapB_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_70;

DEFLABEL (label_69)
  Wrd5 = Wrd9;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_65)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_62)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  Wrd57 = Wrd61;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_58;

DEFLABEL (label_57)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_56)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_4_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_53)
  Rvl = (current_block [OBJECT_4_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_55)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_54;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_19])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_35)
  goto label_53;

DEFLABEL (label_58)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_57;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_18])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_34)
  goto label_56;

DEFLABEL (label_61)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_60;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_4_17])), (Wrd58.pObj));

DEFLABEL (label_33)
  (Wrd57.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_64)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_32)
  goto label_62;

DEFLABEL (label_67)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_4_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_31)
  goto label_65;

DEFLABEL (label_70)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_69;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_4_14])), (Wrd6.pObj));

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_68;

DEFLABEL (loop_44)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_4_22);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_73;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_73;
  (Wrd7.Obj) = ((Wrd16.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_71;

DEFLABEL (label_72)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_24]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_71)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_25]));

DEFLABEL (label_73)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_4_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  goto label_72;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_24);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_75;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_75;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_74)
  goto loop_9;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_26);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_28]));

DEFLABEL (label_75)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.Obj) = (current_block [OBJECT_4_5]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_39)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_74;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_11 11
#define LABEL_5_14 13
#define TAG_5_15 5
#define LABEL_5_12 15
#define TAG_5_13 6
#define LABEL_5_18 17
#define LABEL_5_19 19
#define LABEL_5_20 21
#define LABEL_5_21 23
#define LABEL_5_22 25
#define LABEL_5_23 27
#define LABEL_5_24 29
#define LABEL_5_25 31
#define LABEL_5_26 33
#define LABEL_5_27 35
#define LABEL_5_28 37
#define LABEL_5_29 39
#define LABEL_5_30 41
#define LABEL_5_31 43
#define LABEL_5_32 45
#define LABEL_5_9 47
#define LABEL_5_17 49
#define LABEL_5_33 51
#define LABEL_5_37 53
#define LABEL_5_35 55
#define LABEL_5_39 57
#define LABEL_5_36 59
#define LABEL_5_40 61
#define ENVIRONMENT_LABEL_5_3 95
#define DEBUGGING_LABEL_5_2 94
#define OBJECT_5_7 93
#define OBJECT_5_6 92
#define OBJECT_5_5 91
#define OBJECT_5_4 90
#define OBJECT_5_3 89
#define OBJECT_5_2 88
#define OBJECT_5_1 87
#define OBJECT_5_0 86
#define EXECUTE_CACHE_5_38 63
#define EXECUTE_CACHE_5_34 65
#define EXECUTE_CACHE_5_16 67
#define EXECUTE_CACHE_5_10 69
#define EXECUTE_CACHE_5_8 71
#define FREE_REFERENCE_5_5 74
#define FREE_REFERENCE_5_4 75
#define FREE_REFERENCE_5_3 76
#define FREE_REFERENCE_5_2 77
#define FREE_REFERENCE_5_1 78
#define FREE_REFERENCE_5_0 79
#define FREE_ASSIGNMENT_5_4 81
#define FREE_ASSIGNMENT_5_3 82
#define FREE_ASSIGNMENT_5_2 83
#define FREE_ASSIGNMENT_5_1 84
#define FREE_ASSIGNMENT_5_0 85
#define FREE_REFERENCES_LABEL_5_0 62
#define NUMBER_OF_LINKER_SECTIONS_5_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn1_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd31;
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
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_5_4);
      goto cgen_rinst_53;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_55;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto loop_50;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto label_56;

    case 5:
      current_block = (Rpc - LABEL_5_14);
      goto lambda_79;

    case 6:
      current_block = (Rpc - LABEL_5_12);
      goto swapB_78;

    case 7:
      current_block = (Rpc - LABEL_5_18);
      goto label_57;

    case 8:
      current_block = (Rpc - LABEL_5_19);
      goto label_58;

    case 9:
      current_block = (Rpc - LABEL_5_20);
      goto label_59;

    case 10:
      current_block = (Rpc - LABEL_5_21);
      goto label_60;

    case 11:
      current_block = (Rpc - LABEL_5_22);
      goto label_61;

    case 12:
      current_block = (Rpc - LABEL_5_23);
      goto label_62;

    case 13:
      current_block = (Rpc - LABEL_5_24);
      goto label_63;

    case 14:
      current_block = (Rpc - LABEL_5_25);
      goto label_64;

    case 15:
      current_block = (Rpc - LABEL_5_26);
      goto label_65;

    case 16:
      current_block = (Rpc - LABEL_5_27);
      goto label_66;

    case 17:
      current_block = (Rpc - LABEL_5_28);
      goto label_67;

    case 18:
      current_block = (Rpc - LABEL_5_29);
      goto label_68;

    case 19:
      current_block = (Rpc - LABEL_5_30);
      goto label_69;

    case 20:
      current_block = (Rpc - LABEL_5_31);
      goto label_70;

    case 21:
      current_block = (Rpc - LABEL_5_32);
      goto label_71;

    case 22:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_3;

    case 23:
      current_block = (Rpc - LABEL_5_17);
      goto continuation_5;

    case 24:
      current_block = (Rpc - LABEL_5_33);
      goto continuation_6;

    case 25:
      current_block = (Rpc - LABEL_5_37);
      goto label_72;

    case 26:
      current_block = (Rpc - LABEL_5_35);
      goto continuation_13;

    case 27:
      current_block = (Rpc - LABEL_5_39);
      goto label_73;

    case 28:
      current_block = (Rpc - LABEL_5_36);
      goto continuation_12;

    case 29:
      current_block = (Rpc - LABEL_5_40);
      goto label_74;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cgen_rinst_76)
DEFLABEL (cgen_rinst_53)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_81;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_81;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_80)
  goto loop_50;

DEFLABEL (label_81)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (loop_77)
DEFLABEL (loop_50)
  INTERRUPT_CHECK (26, LABEL_5_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_82;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd75.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_9);
  Rsp = (& (Rsp [1]));
  goto loop_50;

DEFLABEL (label_82)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_84;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_84;
  (Wrd9.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_83)
  (Wrd26.Obj) = (current_block [OBJECT_5_4]);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd28.pObj) = (& (Rhp [-1]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd32.pObj) = (& (Rhp [-1]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd36.pObj) = (& (Rhp [-1]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (Rsp [4]) = (Wrd26.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd69.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_12])));
  Rhp += 5;
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd69.pObj)));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd66.pObj) = (& (Rhp [-1]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd66.pObj)));
  (Rsp [5]) = (Wrd67.Obj);
  Wrd63 = Wrd69;
  ((Wrd63.pObj) [2]) = (Wrd67.Obj);
  ((Wrd63.pObj) [3]) = (Wrd25.Obj);
  ((Wrd63.pObj) [4]) = (Wrd29.Obj);
  ((Wrd63.pObj) [5]) = (Wrd33.Obj);
  ((Wrd63.pObj) [6]) = (Wrd37.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_14])));
  Rhp += 2;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  Wrd45 = Wrd42;
  (Wrd46.Obj) = (Rsp [7]);
  ((Wrd45.pObj) [2]) = (Wrd46.Obj);
  (Wrd44.Obj) = (Rsp [6]);
  ((Wrd45.pObj) [3]) = (Wrd44.Obj);
  (Rsp [7]) = (Wrd41.Obj);
  (Rsp [8]) = (Wrd70.Obj);
  (Rsp [6]) = (Wrd70.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (label_84)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_5_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (lambda_79)
  CLOSURE_HEADER (LABEL_5_14);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_34]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_93;
  Wrd11 = Wrd15;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_38]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_5_36);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_91;
  Wrd5 = Wrd9;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_38]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_5_35);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_5]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_89;
  Wrd5 = Wrd9;

DEFLABEL (label_88)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_86;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.Obj) = (current_block [OBJECT_5_4]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_5_6]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_5_7]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  goto label_85;

DEFLABEL (label_86)
  (Wrd31.Obj) = (current_block [OBJECT_5_4]);

DEFLABEL (label_85)
DEFLABEL (label_87)
  (Rsp [1]) = (Wrd31.Obj);
  (Wrd35.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_38]));

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_39])), (Wrd6.pObj));

DEFLABEL (label_73)
  (Wrd5.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_40])), (Wrd6.pObj));

DEFLABEL (label_74)
  (Wrd5.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_37])), (Wrd12.pObj));

DEFLABEL (label_72)
  (Wrd11.Obj) = Rvl;
  goto label_92;

DEFLABEL (swapB_78)
  CLOSURE_HEADER (LABEL_5_12);

DEFLABEL (swapB_46)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_138;

DEFLABEL (label_137)
  Wrd5 = Wrd9;

DEFLABEL (label_136)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_135;

DEFLABEL (label_134)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_133)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [6]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_132;

DEFLABEL (label_131)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_130)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_129;

DEFLABEL (label_128)
  Wrd57 = Wrd61;

DEFLABEL (label_127)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_126;

DEFLABEL (label_125)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_124)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [5]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_123;

DEFLABEL (label_122)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_121)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_120;

DEFLABEL (label_119)
  Wrd109 = Wrd113;

DEFLABEL (label_118)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_117;

DEFLABEL (label_116)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_115)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [4]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_114;

DEFLABEL (label_113)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_112)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_3]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_111;

DEFLABEL (label_110)
  Wrd161 = Wrd165;

DEFLABEL (label_109)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_108;

DEFLABEL (label_107)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_106)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [3]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_105;

DEFLABEL (label_104)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_103)
  (Wrd214.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_4]));
  (Wrd217.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if ((Wrd218.uLng) == 50)
    goto label_102;

DEFLABEL (label_101)
  Wrd213 = Wrd217;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd225.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_4]));
  (Wrd226.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd235.Obj) = ((Wrd225.pObj) [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if ((Wrd236.uLng) == 50)
    goto label_99;

DEFLABEL (label_98)
  ((Wrd225.pObj) [0]) = (Wrd226.Obj);

DEFLABEL (label_97)
  (Wrd240.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd243.Obj) = ((Wrd242.pObj) [2]);
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (* (--Rsp)) = (Wrd245.Obj);
  ((Wrd244.pObj) [0]) = (Wrd240.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd253.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_5_4]));
  (Wrd261.Obj) = ((Wrd253.pObj) [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd262.uLng) == 50)
    goto label_96;

DEFLABEL (label_95)
  ((Wrd253.pObj) [0]) = (Wrd245.Obj);

DEFLABEL (label_94)
  Rvl = (current_block [OBJECT_5_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_96)
  if ((Wrd261.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_95;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_32])), (Wrd253.pObj), (Wrd245.Obj));

DEFLABEL (label_71)
  goto label_94;

DEFLABEL (label_99)
  if ((Wrd235.Obj) == (Wrd226.Obj))
    goto label_98;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_31])), (Wrd225.pObj), (Wrd226.Obj));

DEFLABEL (label_70)
  goto label_97;

DEFLABEL (label_102)
  if ((Wrd217.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_101;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_5_30])), (Wrd214.pObj));

DEFLABEL (label_69)
  (Wrd213.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_105)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_104;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_29])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_68)
  goto label_103;

DEFLABEL (label_108)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_107;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_28])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_67)
  goto label_106;

DEFLABEL (label_111)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_110;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_5_27])), (Wrd162.pObj));

DEFLABEL (label_66)
  (Wrd161.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_114)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_113;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_26])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_65)
  goto label_112;

DEFLABEL (label_117)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_116;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_25])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_64)
  goto label_115;

DEFLABEL (label_120)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_119;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_5_24])), (Wrd110.pObj));

DEFLABEL (label_63)
  (Wrd109.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_123)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_122;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_23])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_62)
  goto label_121;

DEFLABEL (label_126)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_125;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_22])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_61)
  goto label_124;

DEFLABEL (label_129)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_128;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_5_21])), (Wrd58.pObj));

DEFLABEL (label_60)
  (Wrd57.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_132)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_131;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_20])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_59)
  goto label_130;

DEFLABEL (label_135)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_134;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_5_19])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_58)
  goto label_133;

DEFLABEL (label_138)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_137;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_5_18])), (Wrd6.pObj));

DEFLABEL (label_57)
  (Wrd5.Obj) = Rvl;
  goto label_136;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_6 5
#define LABEL_6_7 7
#define LABEL_6_5 9
#define LABEL_6_10 11
#define LABEL_6_9 13
#define LABEL_6_11 15
#define TAG_6_12 6
#define LABEL_6_16 17
#define LABEL_6_17 19
#define LABEL_6_14 21
#define LABEL_6_23 23
#define LABEL_6_19 25
#define LABEL_6_20 27
#define LABEL_6_21 29
#define LABEL_6_28 31
#define LABEL_6_29 33
#define LABEL_6_22 35
#define LABEL_6_25 37
#define TAG_6_26 17
#define LABEL_6_33 39
#define LABEL_6_34 41
#define LABEL_6_32 43
#define LABEL_6_36 45
#define LABEL_6_38 47
#define LABEL_6_41 49
#define LABEL_6_42 51
#define LABEL_6_40 53
#define LABEL_6_46 55
#define LABEL_6_44 57
#define TAG_6_45 27
#define LABEL_6_47 59
#define LABEL_6_48 61
#define ENVIRONMENT_LABEL_6_3 104
#define DEBUGGING_LABEL_6_2 103
#define OBJECT_6_8 102
#define OBJECT_6_7 101
#define OBJECT_6_6 100
#define OBJECT_6_5 99
#define OBJECT_6_4 98
#define OBJECT_6_3 97
#define OBJECT_6_2 96
#define OBJECT_6_1 95
#define OBJECT_6_0 94
#define EXECUTE_CACHE_6_50 63
#define EXECUTE_CACHE_6_49 65
#define EXECUTE_CACHE_6_43 67
#define EXECUTE_CACHE_6_39 69
#define EXECUTE_CACHE_6_37 71
#define EXECUTE_CACHE_6_35 73
#define EXECUTE_CACHE_6_31 75
#define EXECUTE_CACHE_6_30 77
#define EXECUTE_CACHE_6_27 79
#define EXECUTE_CACHE_6_18 81
#define EXECUTE_CACHE_6_15 83
#define EXECUTE_CACHE_6_24 85
#define EXECUTE_CACHE_6_13 87
#define EXECUTE_CACHE_6_8 89
#define FREE_REFERENCE_6_1 92
#define FREE_REFERENCE_6_0 93
#define FREE_REFERENCES_LABEL_6_0 62
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn1_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_6_4);
      goto adjust_maps_at_mergeB_36;

    case 1:
      current_block = (Rpc - LABEL_6_6);
      goto label_38;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto label_39;

    case 3:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto label_40;

    case 5:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_6_11);
      goto lambda_54;

    case 7:
      current_block = (Rpc - LABEL_6_16);
      goto label_41;

    case 8:
      current_block = (Rpc - LABEL_6_17);
      goto label_42;

    case 9:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_6_23);
      goto label_43;

    case 11:
      current_block = (Rpc - LABEL_6_19);
      goto continuation_32;

    case 12:
      current_block = (Rpc - LABEL_6_20);
      goto continuation_31;

    case 13:
      current_block = (Rpc - LABEL_6_21);
      goto lambda_30;

    case 14:
      current_block = (Rpc - LABEL_6_28);
      goto label_44;

    case 15:
      current_block = (Rpc - LABEL_6_29);
      goto label_45;

    case 16:
      current_block = (Rpc - LABEL_6_22);
      goto continuation_27;

    case 17:
      current_block = (Rpc - LABEL_6_25);
      goto lambda_55;

    case 18:
      current_block = (Rpc - LABEL_6_33);
      goto label_46;

    case 19:
      current_block = (Rpc - LABEL_6_34);
      goto label_47;

    case 20:
      current_block = (Rpc - LABEL_6_32);
      goto continuation_12;

    case 21:
      current_block = (Rpc - LABEL_6_36);
      goto continuation_14;

    case 22:
      current_block = (Rpc - LABEL_6_38);
      goto continuation_15;

    case 23:
      current_block = (Rpc - LABEL_6_41);
      goto label_48;

    case 24:
      current_block = (Rpc - LABEL_6_42);
      goto label_49;

    case 25:
      current_block = (Rpc - LABEL_6_40);
      goto continuation_18;

    case 26:
      current_block = (Rpc - LABEL_6_46);
      goto label_50;

    case 27:
      current_block = (Rpc - LABEL_6_44);
      goto lambda_57;

    case 28:
      current_block = (Rpc - LABEL_6_47);
      goto label_51;

    case 29:
      current_block = (Rpc - LABEL_6_48);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (adjust_maps_at_mergeB_53)
DEFLABEL (adjust_maps_at_mergeB_36)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_65;
  Wrd8 = Wrd12;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_63;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd22.Lng))))
    goto label_63;
  (Wrd16.Obj) = ((Wrd20.pObj) [6]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_62)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_61;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_61;
  (Wrd11.Obj) = ((Wrd15.pObj) [10]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_60)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_11])));
  Rhp += 1;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd29 = Wrd28;
  (Wrd30.Obj) = (Rsp [0]);
  ((Wrd29.pObj) [2]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_6_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_59;
  Wrd18 = Wrd22;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_24]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_6_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_31]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_6_20);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_25])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [2]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_27]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_6_19);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_23])), (Wrd19.pObj));

DEFLABEL (label_43)
  (Wrd18.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_6_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (current_block [OBJECT_6_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_6])), (Wrd9.pObj));

DEFLABEL (label_38)
  (Wrd8.Obj) = Rvl;
  goto label_64;

DEFLABEL (lambda_54)
  CLOSURE_HEADER (LABEL_6_11);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_69;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_69;
  (Wrd8.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_68)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_67;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd30.Lng))))
    goto label_67;
  (Wrd24.Obj) = ((Wrd28.pObj) [12]);

DEFLABEL (label_66)
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd37.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (label_67)
  (Wrd33.Obj) = (current_block [OBJECT_6_4]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_42)
  (Wrd24.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_6_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_41)
  (Wrd8.Obj) = Rvl;
  goto label_68;

DEFLABEL (lambda_56)
DEFLABEL (lambda_30)
  INTERRUPT_CHECK (26, LABEL_6_21);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_73;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_72)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_71;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_70)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_30]));

DEFLABEL (label_71)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_29]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 1);

DEFLABEL (label_45)
  (Wrd14.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 1);

DEFLABEL (label_44)
  (Wrd5.Obj) = Rvl;
  goto label_72;

DEFLABEL (lambda_55)
  CLOSURE_HEADER (LABEL_6_25);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_84;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_83)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_82;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_81)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_35]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6_32);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_6_7])))
    goto label_74;
  Rvl = (current_block [OBJECT_6_8]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_36]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_37]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_6_36);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_38]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_39]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_6_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_80;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_79)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_78;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_77)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_43]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_6_40);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_45);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_44])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_76;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_75)
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_27]));

DEFLABEL (label_76)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_46]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 1);

DEFLABEL (label_50)
  (Wrd10.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_42]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_6]), 1);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_41]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_6]), 1);

DEFLABEL (label_48)
  (Wrd9.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_34]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_5]), 1);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_33]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_6]), 1);

DEFLABEL (label_46)
  (Wrd11.Obj) = Rvl;
  goto label_83;

DEFLABEL (lambda_57)
  CLOSURE_HEADER (LABEL_6_44);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_86;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_85)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_48]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_49]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_6_48);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_50]));

DEFLABEL (label_86)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_47]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_6]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_85;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_5 7
#define LABEL_7_8 9
#define LABEL_7_10 11
#define LABEL_7_9 13
#define LABEL_7_11 15
#define LABEL_7_12 17
#define LABEL_7_13 19
#define LABEL_7_14 21
#define LABEL_7_15 23
#define LABEL_7_16 25
#define ENVIRONMENT_LABEL_7_3 36
#define DEBUGGING_LABEL_7_2 35
#define OBJECT_7_3 34
#define OBJECT_7_2 33
#define OBJECT_7_1 32
#define OBJECT_7_0 31
#define EXECUTE_CACHE_7_7 27
#define FREE_REFERENCE_7_0 30
#define FREE_REFERENCES_LABEL_7_0 26
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn1_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd47;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd73;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd64;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_7_4);
      goto equivalence_classes_18;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto loop_15;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_7_11);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_7_12);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_7_13);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_7_14);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_7_15);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_7_16);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (equivalence_classes_29)
DEFLABEL (equivalence_classes_18)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_32;
  Wrd8 = Wrd12;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_15;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_6])), (Wrd9.pObj));

DEFLABEL (label_20)
  (Wrd8.Obj) = Rvl;
  goto label_31;

DEFLABEL (loop_30)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_7_8);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_7_0])))
    goto label_33;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_49;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_48)
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_42;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_41)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_40;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_39)
  (Wrd25.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_38;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  ((Wrd40.pObj) [1]) = (Wrd26.Obj);

DEFLABEL (label_37)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_36;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_35)
  (Rsp [1]) = (Wrd29.Obj);

DEFLABEL (label_34)
  Rsp = (& (Rsp [1]));
  goto loop_15;

DEFLABEL (label_36)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_24)
  (Wrd29.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 2);

DEFLABEL (label_25)
  goto label_37;

DEFLABEL (label_40)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_23)
  (Wrd16.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 1))
    goto label_47;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [0]);

DEFLABEL (label_46)
  (Wrd60.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (Wrd64.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (Rsp [2]) = (Wrd61.Obj);
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_45;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd65.Obj) = ((Wrd67.pObj) [1]);

DEFLABEL (label_44)
  (Rsp [1]) = (Wrd65.Obj);
  goto label_34;

DEFLABEL (label_45)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_27)
  (Wrd65.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_26)
  (Wrd48.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_48;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_8 9
#define LABEL_8_12 11
#define LABEL_8_13 13
#define LABEL_8_15 15
#define LABEL_8_16 17
#define LABEL_8_17 19
#define LABEL_8_18 21
#define LABEL_8_19 23
#define LABEL_8_20 25
#define LABEL_8_21 27
#define LABEL_8_6 29
#define LABEL_8_22 31
#define LABEL_8_23 33
#define LABEL_8_24 35
#define LABEL_8_25 37
#define LABEL_8_26 39
#define LABEL_8_27 41
#define LABEL_8_11 43
#define LABEL_8_28 45
#define LABEL_8_29 47
#define LABEL_8_30 49
#define LABEL_8_31 51
#define LABEL_8_10 53
#define ENVIRONMENT_LABEL_8_3 73
#define DEBUGGING_LABEL_8_2 72
#define OBJECT_8_4 71
#define OBJECT_8_3 70
#define OBJECT_8_2 69
#define OBJECT_8_1 68
#define OBJECT_8_0 67
#define EXECUTE_CACHE_8_14 55
#define EXECUTE_CACHE_8_9 57
#define FREE_REFERENCE_8_2 60
#define FREE_REFERENCE_8_1 61
#define FREE_REFERENCE_8_0 62
#define FREE_ASSIGNMENT_8_2 64
#define FREE_ASSIGNMENT_8_1 65
#define FREE_ASSIGNMENT_8_0 66
#define FREE_REFERENCES_LABEL_8_0 54
#define NUMBER_OF_LINKER_SECTIONS_8_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn1_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd82;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd72;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
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
  machine_word Wrd100;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd147;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd141;
  machine_word Wrd143;
  machine_word Wrd144;
  machine_word Wrd140;
  machine_word Wrd132;
  machine_word Wrd134;
  machine_word Wrd136;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd192;
  machine_word Wrd189;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd185;
  machine_word Wrd187;
  machine_word Wrd180;
  machine_word Wrd182;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd179;
  machine_word Wrd173;
  machine_word Wrd174;
  machine_word Wrd175;
  machine_word Wrd172;
  machine_word Wrd166;
  machine_word Wrd167;
  machine_word Wrd168;
  machine_word Wrd165;
  machine_word Wrd157;
  machine_word Wrd159;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd151;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_8_4);
      goto add_statement_ruleB_29;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_31;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto label_34;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto label_35;

    case 4:
      current_block = (Rpc - LABEL_8_12);
      goto label_32;

    case 5:
      current_block = (Rpc - LABEL_8_13);
      goto label_33;

    case 6:
      current_block = (Rpc - LABEL_8_15);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_8_16);
      goto label_47;

    case 8:
      current_block = (Rpc - LABEL_8_17);
      goto label_48;

    case 9:
      current_block = (Rpc - LABEL_8_18);
      goto label_49;

    case 10:
      current_block = (Rpc - LABEL_8_19);
      goto label_50;

    case 11:
      current_block = (Rpc - LABEL_8_20);
      goto label_51;

    case 12:
      current_block = (Rpc - LABEL_8_21);
      goto label_46;

    case 13:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_8_22);
      goto label_42;

    case 15:
      current_block = (Rpc - LABEL_8_23);
      goto label_43;

    case 16:
      current_block = (Rpc - LABEL_8_24);
      goto label_44;

    case 17:
      current_block = (Rpc - LABEL_8_25);
      goto label_45;

    case 18:
      current_block = (Rpc - LABEL_8_26);
      goto label_40;

    case 19:
      current_block = (Rpc - LABEL_8_27);
      goto label_41;

    case 20:
      current_block = (Rpc - LABEL_8_11);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_8_28);
      goto label_37;

    case 22:
      current_block = (Rpc - LABEL_8_29);
      goto label_38;

    case 23:
      current_block = (Rpc - LABEL_8_30);
      goto label_39;

    case 24:
      current_block = (Rpc - LABEL_8_31);
      goto label_36;

    case 25:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_statement_ruleB_53)
DEFLABEL (add_statement_ruleB_29)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_104;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_103)
  if ((Wrd5.Obj) == (current_block [OBJECT_8_1]))
    goto label_72;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_71;
  Wrd21 = Wrd25;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_69;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_68)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_8_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  (* (--Rsp)) = Rvl;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_59;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_58)
  (Wrd22.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Rsp [1]) = (Wrd19.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 1)
    goto label_55;

DEFLABEL (label_54)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 2);

DEFLABEL (label_55)
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  ((Wrd25.pObj) [1]) = (Wrd19.Obj);

DEFLABEL (label_57)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_56)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_31]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_36)
  (Wrd10.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_67;
  Wrd29 = Wrd33;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_65;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [0]);

DEFLABEL (label_64)
  (Wrd47.Obj) = (Rsp [4]);
  (Wrd48.Obj) = (current_block [OBJECT_8_3]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd48.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd52.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_2]));
  (Wrd64.Obj) = ((Wrd56.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_63;

DEFLABEL (label_62)
  ((Wrd56.pObj) [0]) = (Wrd53.Obj);

DEFLABEL (label_61)
  Rsp = (& (Rsp [2]));
  goto label_56;

DEFLABEL (label_63)
  if ((Wrd64.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_62;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_30])), (Wrd56.pObj), (Wrd53.Obj));

DEFLABEL (label_39)
  goto label_61;

DEFLABEL (label_65)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_29]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_38)
  (Wrd35.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_28])), (Wrd30.pObj));

DEFLABEL (label_37)
  (Wrd29.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_12])), (Wrd22.pObj));

DEFLABEL (label_32)
  (Wrd21.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_102;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_101)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_100;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_99)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_77;
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_2]));
  (Wrd76.Obj) = ((Wrd73.pObj) [0]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if ((Wrd77.uLng) == 50)
    goto label_76;
  Wrd72 = Wrd76;

DEFLABEL (label_75)
  (Wrd81.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd81.Obj);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd80.pObj) = (& (Rhp [-2]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd80.pObj)));
  (Wrd82.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_1]));
  (Wrd90.Obj) = ((Wrd82.pObj) [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 50)
    goto label_74;

DEFLABEL (label_73)
  ((Wrd82.pObj) [0]) = (Wrd78.Obj);
  goto label_56;

DEFLABEL (label_74)
  if ((Wrd90.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_73;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_27])), (Wrd82.pObj), (Wrd78.Obj));

DEFLABEL (label_41)
  goto label_56;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_26])), (Wrd73.pObj));

DEFLABEL (label_40)
  (Wrd72.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_77)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (Wrd101.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd104.Obj) = ((Wrd101.pObj) [0]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if ((Wrd105.uLng) == 50)
    goto label_98;
  Wrd100 = Wrd104;

DEFLABEL (label_97)
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd109.Obj) = (Rsp [3]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 1))
    goto label_96;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd106.Obj) = ((Wrd108.pObj) [1]);

DEFLABEL (label_95)
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd117.uLng) == 1))
    goto label_94;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd115.Obj) = ((Wrd116.pObj) [0]);

DEFLABEL (label_93)
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if (! ((Wrd124.uLng) == 1))
    goto label_92;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [0]);
  (* (--Rsp)) = (Wrd123.Obj);

DEFLABEL (label_91)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_8_15);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;
  (* (--Rsp)) = Rvl;
  (Wrd136.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd136.uLng) == 1))
    goto label_79;
  (Wrd134.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd132.Obj) = ((Wrd134.pObj) [1]);

DEFLABEL (label_78)
  (Wrd144.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd144.Obj);
  (* (Rhp++)) = (Wrd132.Obj);
  (Wrd143.pObj) = (& (Rhp [-2]));
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd143.pObj)));
  (Rsp [1]) = (Wrd141.Obj);
  (Wrd149.Obj) = (Rsp [0]);
  (Wrd150.uLng) = (OBJECT_TYPE (Wrd149.Obj));
  if (! ((Wrd150.uLng) == 1))
    goto label_54;
  (Wrd147.pObj) = (OBJECT_ADDRESS (Wrd149.Obj));
  ((Wrd147.pObj) [1]) = (Wrd141.Obj);
  goto label_57;

DEFLABEL (label_79)
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_21]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_46)
  (Wrd132.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_80)
  (Wrd152.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd155.Obj) = ((Wrd152.pObj) [0]);
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd155.Obj));
  if ((Wrd156.uLng) == 50)
    goto label_90;
  Wrd151 = Wrd155;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd151.Obj);
  (Wrd160.Obj) = (Rsp [3]);
  (Wrd161.uLng) = (OBJECT_TYPE (Wrd160.Obj));
  if (! ((Wrd161.uLng) == 1))
    goto label_88;
  (Wrd159.pObj) = (OBJECT_ADDRESS (Wrd160.Obj));
  (Wrd157.Obj) = ((Wrd159.pObj) [1]);

DEFLABEL (label_87)
  (Wrd168.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if (! ((Wrd168.uLng) == 1))
    goto label_86;
  (Wrd167.pObj) = (OBJECT_ADDRESS (Wrd157.Obj));
  (Wrd166.Obj) = ((Wrd167.pObj) [0]);

DEFLABEL (label_85)
  (Wrd175.uLng) = (OBJECT_TYPE (Wrd166.Obj));
  if (! ((Wrd175.uLng) == 1))
    goto label_84;
  (Wrd174.pObj) = (OBJECT_ADDRESS (Wrd166.Obj));
  (Wrd173.Obj) = ((Wrd174.pObj) [0]);

DEFLABEL (label_83)
  (Wrd183.Obj) = (Rsp [4]);
  (Wrd184.Obj) = (current_block [OBJECT_8_3]);
  (* (Rhp++)) = (Wrd183.Obj);
  (* (Rhp++)) = (Wrd184.Obj);
  (Wrd182.pObj) = (& (Rhp [-2]));
  (Wrd180.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd182.pObj)));
  (* (Rhp++)) = (Wrd173.Obj);
  (* (Rhp++)) = (Wrd180.Obj);
  (Wrd187.pObj) = (& (Rhp [-2]));
  (Wrd185.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd187.pObj)));
  (Wrd188.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd185.Obj);
  (* (Rhp++)) = (Wrd188.Obj);
  (Wrd191.pObj) = (& (Rhp [-2]));
  (Wrd189.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd191.pObj)));
  (Wrd192.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_0]));
  (Wrd200.Obj) = ((Wrd192.pObj) [0]);
  (Wrd201.uLng) = (OBJECT_TYPE (Wrd200.Obj));
  if ((Wrd201.uLng) == 50)
    goto label_82;

DEFLABEL (label_81)
  ((Wrd192.pObj) [0]) = (Wrd189.Obj);
  goto label_61;

DEFLABEL (label_82)
  if ((Wrd200.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_81;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_20])), (Wrd192.pObj), (Wrd189.Obj));

DEFLABEL (label_51)
  goto label_61;

DEFLABEL (label_84)
  (Wrd179.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_19]))));
  (* (--Rsp)) = (Wrd179.Obj);
  (* (--Rsp)) = (Wrd166.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_50)
  (Wrd173.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd172.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd172.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_49)
  (Wrd166.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd165.Obj);
  (* (--Rsp)) = (Wrd160.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_48)
  (Wrd157.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_16])), (Wrd152.pObj));

DEFLABEL (label_47)
  (Wrd151.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_25]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_24]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_44)
  (Wrd115.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_23]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_43)
  (Wrd106.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_22])), (Wrd101.pObj));

DEFLABEL (label_42)
  (Wrd100.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_34)
  (Wrd39.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_103;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_8_10);
  goto label_56;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_8 7
#define LABEL_9_12 9
#define LABEL_9_16 11
#define LABEL_9_11 13
#define LABEL_9_17 15
#define LABEL_9_18 17
#define LABEL_9_13 19
#define LABEL_9_14 21
#define LABEL_9_7 23
#define LABEL_9_21 25
#define LABEL_9_9 27
#define ENVIRONMENT_LABEL_9_3 45
#define DEBUGGING_LABEL_9_2 44
#define OBJECT_9_0 43
#define EXECUTE_CACHE_9_20 29
#define EXECUTE_CACHE_9_19 31
#define EXECUTE_CACHE_9_15 33
#define EXECUTE_CACHE_9_10 35
#define EXECUTE_CACHE_9_6 37
#define FREE_REFERENCE_9_2 40
#define FREE_REFERENCE_9_1 41
#define FREE_REFERENCE_9_0 42
#define FREE_REFERENCES_LABEL_9_0 28
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn1_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_9_4);
      goto lap_generator_match_rtl_instruction_12;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_8);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_9_12);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_9_17);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_9_18);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_9_13);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_9_21);
      goto label_18;

    case 12:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lap_generator_match_rtl_instruction_20)
DEFLABEL (lap_generator_match_rtl_instruction_12)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_29;
  Wrd10 = Wrd14;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_20]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 1))
    goto label_22;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_19]));

DEFLABEL (label_22)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_23)
  (Wrd21.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd21.Obj);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rvl = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_2]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_26;
  Wrd27 = Wrd31;

DEFLABEL (label_25)
  (Rsp [0]) = (Wrd27.Obj);
  goto label_21;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_17])), (Wrd28.pObj));

DEFLABEL (label_17)
  (Wrd27.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_12])), (Wrd11.pObj));

DEFLABEL (label_14)
  (Wrd10.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_35;
  Wrd26 = Wrd30;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_33;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_32)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_19]));

DEFLABEL (label_33)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_18)
  (Wrd7.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_8])), (Wrd27.pObj));

DEFLABEL (label_15)
  (Wrd26.Obj) = Rvl;
  goto label_34;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_16);
  (Wrd21.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_5 7
#define ENVIRONMENT_LABEL_10_3 15
#define DEBUGGING_LABEL_10_2 14
#define OBJECT_10_0 13
#define EXECUTE_CACHE_10_7 9
#define FREE_REFERENCE_10_0 12
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn1_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_10_4);
      goto block_association_2;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_association_6)
DEFLABEL (block_association_2)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd13.uLng) == 1)
    goto label_7;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_7)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  Rvl = ((Wrd10.pObj) [1]);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define ENVIRONMENT_LABEL_11_3 14
#define DEBUGGING_LABEL_11_2 13
#define OBJECT_11_0 12
#define FREE_REFERENCE_11_0 9
#define FREE_ASSIGNMENT_11_0 11
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn1_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto block_associateB_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (block_associateB_7)
DEFLABEL (block_associateB_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
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
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd28.Obj) = ((Wrd20.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd20.pObj) [0]) = (Wrd17.Obj);

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_11_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd28.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_6])), (Wrd20.pObj), (Wrd17.Obj));

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_9 9
#define ENVIRONMENT_LABEL_12_3 18
#define DEBUGGING_LABEL_12_2 17
#define EXECUTE_CACHE_12_10 11
#define EXECUTE_CACHE_12_8 13
#define EXECUTE_CACHE_12_6 15
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn1_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_12_4);
      goto share_instruction_sequenceB_5;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (share_instruction_sequenceB_8)
DEFLABEL (share_instruction_sequenceB_5)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_9);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define ENVIRONMENT_LABEL_13_3 14
#define DEBUGGING_LABEL_13_2 13
#define EXECUTE_CACHE_13_8 9
#define EXECUTE_CACHE_13_6 11
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn1_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto make_new_sblock_3;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_new_sblock_6)
DEFLABEL (make_new_sblock_3)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_8 9
#define LABEL_14_7 11
#define LABEL_14_11 13
#define ENVIRONMENT_LABEL_14_3 30
#define DEBUGGING_LABEL_14_2 29
#define OBJECT_14_6 28
#define OBJECT_14_5 27
#define OBJECT_14_4 26
#define OBJECT_14_3 25
#define OBJECT_14_2 24
#define OBJECT_14_1 23
#define OBJECT_14_0 22
#define EXECUTE_CACHE_14_10 15
#define EXECUTE_CACHE_14_9 17
#define FREE_REFERENCE_14_1 20
#define FREE_REFERENCE_14_0 21
#define FREE_REFERENCES_LABEL_14_0 14
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn1_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd13;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
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
      current_block = (Rpc - LABEL_14_4);
      goto current_bblock_continueB_5;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_14_11);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_bblock_continueB_12)
DEFLABEL (current_bblock_continueB_5)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_23;
  Wrd5 = Wrd9;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_21;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd33.Lng))))
    goto label_21;
  (Wrd13.Obj) = ((Wrd31.pObj) [15]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;

DEFLABEL (label_13)
  (Wrd26.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_14_2]);
  (Rsp [0]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (label_14)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_20;
  Wrd19 = Wrd23;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_14_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_18;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd32.Lng))))
    goto label_18;
  ((Wrd30.pObj) [14]) = (Wrd5.Obj);

DEFLABEL (label_17)
  (Wrd10.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd24.uLng) == 10)
    goto label_16;

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_5]), 3);

DEFLABEL (label_16)
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd22.Lng))))
    goto label_15;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [15]) = (Wrd15.Obj);
  Rvl = (current_block [OBJECT_14_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_14_4]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_5]), 3);

DEFLABEL (label_10)
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_8])), (Wrd20.pObj));

DEFLABEL (label_8)
  (Wrd19.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (current_block [OBJECT_14_0]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_13;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd6.pObj));

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 12
#define DEBUGGING_LABEL_15_2 11
#define OBJECT_15_2 10
#define OBJECT_15_1 9
#define OBJECT_15_0 8
#define FREE_REFERENCE_15_0 7
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
lapgn1_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto lap_comment_4;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lap_comment_8)
DEFLABEL (lap_comment_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (current_block [OBJECT_15_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_15_1]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_15_2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_15_0]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_12;

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
lapgn1_so_2464177fd7a0b9c0 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	1,
	1,
	2,
	2,
	2,
	3,
	2,
	2,
	3,
	3,
	3,
	3,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 15)
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

static const struct liarc_code_S arr_decl_lapgn1_so_2464177fd7a0b9c0 [15] =
  {
    { "lapgn1_so_code_1", 47, lapgn1_so_code_1 },
    { "lapgn1_so_code_2", 15, lapgn1_so_code_2 },
    { "lapgn1_so_code_3", 40, lapgn1_so_code_3 },
    { "lapgn1_so_code_4", 19, lapgn1_so_code_4 },
    { "lapgn1_so_code_5", 30, lapgn1_so_code_5 },
    { "lapgn1_so_code_6", 30, lapgn1_so_code_6 },
    { "lapgn1_so_code_7", 12, lapgn1_so_code_7 },
    { "lapgn1_so_code_8", 26, lapgn1_so_code_8 },
    { "lapgn1_so_code_9", 13, lapgn1_so_code_9 },
    { "lapgn1_so_code_10", 3, lapgn1_so_code_10 },
    { "lapgn1_so_code_11", 3, lapgn1_so_code_11 },
    { "lapgn1_so_code_12", 4, lapgn1_so_code_12 },
    { "lapgn1_so_code_13", 3, lapgn1_so_code_13 },
    { "lapgn1_so_code_14", 6, lapgn1_so_code_14 },
    { "lapgn1_so_code_15", 2, lapgn1_so_code_15 }
  };

int
decl_lapgn1_so_2464177fd7a0b9c0 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_lapgn1_so_2464177fd7a0b9c0);
  return (0);
}

DECLARE_COMPILED_CODE ("lapgn1.so", 3, decl_lapgn1_so_2464177fd7a0b9c0, lapgn1_so_2464177fd7a0b9c0)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_lapgn1_so_data_2464177fd7a0b9c0 [4453] =
  "\x92\x01\x25\x95\x08\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc3\xb9\x81"
  "\x82\xc2\xba\xc1\xbb\x80\x83\xc1\xbc\x08\x1d\x0d\xbd\x25\x0d\xbe"
  "\x0d\xb5\x0d\xbf\x0d\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\x82\x0c\x1d\xb2\x81"
  "\x08\x0d\x1c\x0d\x1c\x25\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xc2\x1c\x81"
  "\x02\x02\x02\x80\xb3\x08\xb4\x1d\x85\x02\x86\xb2\x82\x1b\x25\x1b"
  "\x0d\x1c\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x82\x02\xb1\x1d"
  "\xb2\x02\x0d\x1c\x0d\x1c\x25\x1b\x1b\x24\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x85\x88\x0d\x1c\x0d\x1d\x08\x81\x0c\xb2\x80\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x25\x1b\x1b\x1b\x1b\x1b\xb5\x24\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1d\x08"
  "\xb3\xb4\x02\x80\x02\xb2\x85\x1b\x0d\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb4\xb3"
  "\x08\x0d\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\xb4\x0d\xb3\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x25\x1b\x1b\x1b\x24\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x1b\x1b\x24\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x0d\x1c\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b"
  "\x25\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x02"
  "\x88\x28\x0d\xbb\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\xb1\x02"
  "\x08\x0c\xb2\x02\x1b\x0d\x24\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x0d\x08\xb6\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88"
  "\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb4\x2a\x1b\x2a\x1e\x1b\x2a"
  "\x1b\x2a\x08\x08\x08\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1e\x1e\x1e\x17\x0d\x0d\x0d\x0d\x1b\xb3\x1b\x1b\x0d"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb7\x0d\xb5\x1b\x1b\x17\x28\x0d"
  "\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2f\x62\x61\x63\x6b\x2f\x6c\x61\x70\x67\x6e\x31\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0c\x76\x65\x63\x74\x6f\x72"
  "\x2d\x73\x65\x74\x21\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66"
  "\x04\x63\x61\x72\x04\x63\x64\x72\x02\x0e\x2a\x69\x6e\x73\x65\x72"
  "\x74\x2d\x72\x74\x6c\x3f\x2a\x02\x1d\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x3a\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x6c\x61\x70\x2d\x66"
  "\x69\x6c\x65\x73\x3f\x21\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x69"
  "\x6e\x74\x65\x72\x73\x70\x65\x72\x73\x65\x2d\x72\x74\x6c\x2d\x69"
  "\x6e\x2d\x6c\x61\x70\x3f\x0c\x63\x67\x65\x6e\x2d\x72\x67\x72\x61"
  "\x70\x68\x1d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63\x6f\x6d\x70"
  "\x72\x65\x73\x73\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x3f\x06"
  "\x03\x14\x70\x72\x65\x2d\x6c\x61\x70\x67\x65\x6e\x2d\x61\x6e\x61"
  "\x6c\x79\x73\x69\x73\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66"
  "\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x09\x03\x14\x77\x69\x74\x68"
  "\x2d\x6e\x65\x77\x2d\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x73\x04"
  "\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x0a\x02\x18\x70\x72\x65\x70"
  "\x61\x72\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x73\x2d\x62\x6c"
  "\x6f\x63\x6b\x04\x04\x6d\x61\x70\x0b\x05\x16\x67\x65\x6e\x65\x72"
  "\x61\x74\x65\x2f\x72\x65\x6d\x6f\x74\x65\x2d\x6c\x69\x6e\x6b\x73"
  "\x03\x10\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x3e\x6c\x61\x62\x65"
  "\x6c\x03\x07\x6c\x65\x6e\x67\x74\x68\x03\x0d\x6c\x69\x73\x74\x2d"
  "\x3e\x76\x65\x63\x74\x6f\x72\x04\x07\x61\x70\x70\x65\x6e\x64\x0c"
  "\x05\x1a\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x71\x75\x6f\x74\x61"
  "\x74\x69\x6f\x6e\x2d\x68\x65\x61\x64\x65\x72\x06\x15\x67\x65\x6e"
  "\x65\x72\x61\x74\x65\x2f\x72\x65\x6d\x6f\x74\x65\x2d\x6c\x69\x6e"
  "\x6b\x0e\x32\x60\x81\x85\x02\x31\x5e\x81\x87\x02\x30\x5c\x81\x83"
  "\x02\x2f\x5a\x81\x8f\x02\x2e\x58\x81\x83\x02\x2d\x56\x81\x83\x02"
  "\x2c\x54\x81\x89\x02\x2b\x52\x81\x87\x02\x2a\x50\x81\x85\x02\x29"
  "\x4e\x81\x85\x02\x28\x4c\x81\x85\x02\x27\x4a\x81\x83\x02\x26\x48"
  "\x81\x83\x02\x25\x46\x81\x8d\x02\x24\x44\x81\x8b\x02\x23\x42\x81"
  "\x85\x02\x22\x40\x81\x85\x02\x21\x3e\x81\x81\x02\x20\x3c\x81\x85"
  "\x02\x1f\x3a\x81\x85\x02\x1e\x38\x83\x04\x1d\x36\x81\x93\x02\x1c"
  "\x34\x81\x91\x02\x1b\x32\x81\x91\x02\x1a\x30\x81\x8f\x02\x19\x2e"
  "\x81\x8f\x02\x18\x2c\x81\x8f\x02\x17\x2a\x81\x8b\x02\x16\x28\x81"
  "\x87\x02\x15\x26\x81\x85\x02\x14\x24\x81\x83\x02\x13\x22\x81\x83"
  "\x02\x12\x20\x81\x83\x02\x11\x1e\x81\x83\x02\x10\x1c\x81\x85\x02"
  "\x0f\x1a\x81\x85\x02\x0e\x18\x81\x87\x02\x0d\x16\x81\x83\x02\x0c"
  "\x14\x81\x83\x02\x0b\x12\x81\x85\x02\x0a\x10\x81\x83\x02\x09\x0e"
  "\x81\x83\x02\x08\x0c\x81\x83\x02\x07\x0a\x81\x87\x02\x06\x08\x81"
  "\x87\x02\x05\x06\x81\x87\x02\x04\x04\x85\x08\x5f\x8f\x01\x0d\x02"
  "\x30\x43\x47\x45\x4e\x2d\x52\x47\x52\x41\x50\x48\x3a\x20\x70\x65"
  "\x6e\x64\x69\x6e\x67\x20\x62\x6c\x6f\x63\x6b\x73\x20\x6c\x65\x66"
  "\x74\x20\x61\x74\x20\x65\x6e\x64\x20\x6f\x66\x20\x70\x61\x73\x73"
  "\x02\x11\x2a\x63\x75\x72\x72\x65\x6e\x74\x2d\x72\x67\x72\x61\x70"
  "\x68\x2a\x0e\x12\x2a\x70\x65\x6e\x64\x69\x6e\x67\x2d\x62\x62\x6c"
  "\x6f\x63\x6b\x73\x2a\x0f\x03\x0e\x0f\x03\x05\x09\x04\x0a\x03\x06"
  "\x65\x72\x72\x6f\x72\x0e\x03\x0d\x6e\x6f\x64\x65\x2d\x6d\x61\x72"
  "\x6b\x65\x64\x3f\x10\x04\x0b\x63\x67\x65\x6e\x2d\x65\x6e\x74\x72"
  "\x79\x11\x06\x41\x20\x81\x85\x02\x40\x1e\x81\x87\x02\x3f\x1c\x81"
  "\x85\x02\x3e\x1a\x81\x83\x02\x3d\x18\x81\x83\x02\x3c\x16\x81\x83"
  "\x02\x3b\x14\x81\x85\x02\x3a\x12\x81\x83\x02\x39\x10\x81\x83\x02"
  "\x38\x0e\x81\x85\x02\x37\x0c\x81\x83\x02\x36\x0a\x81\x83\x02\x35"
  "\x08\x81\x85\x02\x34\x06\x81\x83\x02\x33\x04\x83\x04\x1f\x39\x12"
  "\x02\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x13\x0b\x0a\x0c\x02\x08"
  "\x0f\x02\x0f\x0f\x65\x64\x67\x65\x2d\x6c\x65\x66\x74\x2d\x6e\x6f"
  "\x64\x65\x14\x03\x02\x13\x65\x6d\x70\x74\x79\x2d\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x2d\x6d\x61\x70\x04\x0c\x63\x67\x65\x6e\x2d\x62"
  "\x62\x6c\x6f\x63\x6b\x15\x03\x08\x73\x62\x6c\x6f\x63\x6b\x3f\x03"
  "\x0f\x65\x64\x67\x65\x2d\x6e\x65\x78\x74\x2d\x6e\x6f\x64\x65\x04"
  "\x09\x66\x6f\x72\x2d\x61\x6c\x6c\x3f\x03\x10\x04\x12\x72\x65\x67"
  "\x73\x65\x74\x2d\x64\x69\x66\x66\x65\x72\x65\x6e\x63\x65\x04\x05"
  "\x61\x73\x73\x71\x10\x04\x05\x6d\x65\x6d\x71\x04\x18\x6c\x69\x73"
  "\x74\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x70\x6f\x73\x69"
  "\x74\x69\x76\x65\x16\x04\x06\x64\x65\x6c\x71\x21\x04\x18\x64\x65"
  "\x6c\x65\x74\x65\x2d\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x73\x03\x0d\x72\x65\x67\x73\x65\x74\x2d\x3e\x6c"
  "\x69\x73\x74\x03\x16\x61\x64\x6a\x75\x73\x74\x2d\x6d\x61\x70\x73"
  "\x2d\x61\x74\x2d\x6d\x65\x72\x67\x65\x21\x17\x0f\x69\x52\xfd\xff"
  "\x03\x68\x50\xfd\xff\x03\x67\x4e\xfd\xff\x03\x66\x4c\xfd\xff\x03"
  "\x65\x4a\xfd\xff\x03\x64\x48\x81\x87\x02\x63\x46\x81\x85\x02\x62"
  "\x44\xfd\xff\x03\x61\x42\xfd\xff\x03\x60\x40\xfd\xff\x03\x5f\x3e"
  "\xfd\xff\x03\x5e\x3c\xfd\xff\x03\x5d\x3a\xfd\xff\x03\x5c\x38\xfd"
  "\xff\x03\x5b\x36\xfd\xff\x03\x5a\x34\x81\x85\x02\x59\x32\x81\x85"
  "\x02\x58\x30\xfd\xff\x03\x57\x2e\x81\x8b\x02\x56\x2c\x81\x89\x02"
  "\x55\x2a\x81\x83\x02\x54\x28\xfd\xff\x03\x53\x26\xfd\xff\x03\x52"
  "\x24\xfd\xff\x03\x51\x22\xfd\xff\x03\x50\x20\xfd\xff\x03\x4f\x1e"
  "\xfd\xff\x03\x4e\x1c\xfd\xff\x03\x4d\x1a\xfd\xff\x03\x4c\x18\xfd"
  "\xff\x03\x4b\x16\xfd\xff\x03\x4a\x14\xff\xff\x03\x49\x12\xfd\xff"
  "\x03\x48\x10\xfd\xff\x03\x47\x0e\xfd\xff\x03\x46\x0c\xfd\xff\x03"
  "\x45\x0a\xff\xff\x03\x44\x08\x81\x89\x02\x43\x06\x81\x87\x02\x42"
  "\x04\x84\x06\x51\x85\x01\x18\x02\x0c\x02\x09\x11\x2a\x63\x75\x72"
  "\x72\x65\x6e\x74\x2d\x62\x62\x6c\x6f\x63\x6b\x2a\x19\x0f\x2a\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x2a\x1a\x03\x19\x1a"
  "\x03\x03\x0b\x6e\x6f\x64\x65\x2d\x6d\x61\x72\x6b\x21\x1a\x05\x09"
  "\x03\x0b\x63\x67\x65\x6e\x2d\x72\x69\x6e\x73\x74\x1b\x04\x0c\x05"
  "\x7c\x28\xfd\xff\x03\x7b\x26\xfd\xff\x03\x7a\x24\x81\x83\x02\x79"
  "\x22\x81\x83\x02\x78\x20\x81\x83\x02\x77\x1e\x81\x87\x02\x76\x1c"
  "\x81\x83\x02\x75\x1a\x81\x83\x02\x74\x18\x81\x83\x02\x73\x16\x81"
  "\x85\x02\x72\x14\x81\x83\x02\x71\x12\x81\x83\x02\x70\x10\x81\x85"
  "\x02\x6f\x0e\x81\x83\x02\x6e\x0c\x81\x83\x02\x6d\x0a\x81\x85\x02"
  "\x6c\x08\x81\x83\x02\x6b\x06\x81\x85\x02\x6a\x04\x84\x06\x27\x3f"
  "\x1c\x02\x08\x63\x6f\x6d\x6d\x65\x6e\x74\x1d\x04\x72\x74\x6c\x02"
  "\x1e\x43\x47\x45\x4e\x2d\x52\x49\x4e\x53\x54\x3a\x20\x4e\x6f\x20"
  "\x6d\x61\x74\x63\x68\x69\x6e\x67\x20\x72\x75\x6c\x65\x73\x11\x2a"
  "\x64\x65\x61\x64\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x2a\x1e"
  "\x16\x2a\x72\x65\x67\x69\x73\x74\x65\x72\x73\x2d\x74\x6f\x2d\x64"
  "\x65\x6c\x65\x74\x65\x2a\x1f\x16\x2a\x70\x72\x65\x66\x69\x78\x2d"
  "\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x73\x2a\x20\x16\x2a"
  "\x73\x75\x66\x66\x69\x78\x2d\x69\x6e\x73\x74\x72\x75\x63\x74\x69"
  "\x6f\x6e\x73\x2a\x21\x13\x2a\x6e\x65\x65\x64\x65\x64\x2d\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x73\x2a\x22\x06\x1e\x1f\x20\x21\x22\x07"
  "\x03\x24\x6c\x61\x70\x2d\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x2f"
  "\x6d\x61\x74\x63\x68\x2d\x72\x74\x6c\x2d\x69\x6e\x73\x74\x72\x75"
  "\x63\x74\x69\x6f\x6e\x22\x04\x0e\x05\x09\x02\x17\x64\x65\x6c\x65"
  "\x74\x65\x2d\x64\x65\x61\x64\x2d\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x73\x21\x04\x0c\x06\x9a\x01\x3e\x81\x89\x02\x99\x01\x3c\x81\x87"
  "\x02\x98\x01\x3a\x81\x87\x02\x97\x01\x38\x81\x85\x02\x96\x01\x36"
  "\x81\x89\x02\x95\x01\x34\x81\x85\x02\x94\x01\x32\x81\x83\x02\x93"
  "\x01\x30\x81\x87\x02\x92\x01\x2e\x81\x83\x02\x91\x01\x2c\x81\x85"
  "\x02\x90\x01\x2a\x81\x83\x02\x8f\x01\x28\x81\x83\x02\x8e\x01\x26"
  "\x81\x85\x02\x8d\x01\x24\x81\x83\x02\x8c\x01\x22\x81\x83\x02\x8b"
  "\x01\x20\x81\x85\x02\x8a\x01\x1e\x81\x83\x02\x89\x01\x1c\x81\x83"
  "\x02\x88\x01\x1a\x81\x85\x02\x87\x01\x18\x81\x83\x02\x86\x01\x16"
  "\x81\x83\x02\x85\x01\x14\x81\x85\x02\x84\x01\x12\x81\x83\x02\x83"
  "\x01\x10\x81\x83\x02\x82\x01\x0e\x81\x83\x02\x81\x01\x0c\x81\x87"
  "\x02\x80\x01\x0a\x81\x85\x02\x7f\x08\x81\x85\x02\x7e\x06\x81\x83"
  "\x02\x7d\x04\x83\x04\x3d\x60\x21\x02\x02\x0c\x0a\x14\x05\x63\x6f"
  "\x6e\x73\x03\x04\x16\x04\x0b\x05\x0b\x04\x14\x6d\x65\x72\x67\x65"
  "\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x73\x04\x1f"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x3a\x6b\x65\x65"
  "\x70\x2d\x6c\x69\x76\x65\x2d\x65\x6e\x74\x72\x69\x65\x73\x04\x0a"
  "\x04\x0b\x6d\x61\x70\x2d\x65\x71\x75\x61\x6c\x3f\x04\x14\x65\x71"
  "\x75\x69\x76\x61\x6c\x65\x6e\x63\x65\x2d\x63\x6c\x61\x73\x73\x65"
  "\x73\x20\x04\x18\x63\x6f\x65\x72\x63\x65\x2d\x6d\x61\x70\x2d\x69"
  "\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x73\x03\x0c\x6d\x61\x6b"
  "\x65\x2d\x73\x62\x6c\x6f\x63\x6b\x1f\x03\x1a\x04\x13\x65\x64\x67"
  "\x65\x2d\x69\x6e\x73\x65\x72\x74\x2d\x73\x6e\x6f\x64\x65\x21\x03"
  "\x17\x65\x64\x67\x65\x2d\x64\x69\x73\x63\x6f\x6e\x6e\x65\x63\x74"
  "\x2d\x72\x69\x67\x68\x74\x21\x04\x14\x65\x64\x67\x65\x2d\x63\x6f"
  "\x6e\x6e\x65\x63\x74\x2d\x72\x69\x67\x68\x74\x21\x0f\xb8\x01\x3e"
  "\x81\x87\x02\xb7\x01\x3c\x81\x85\x02\xb6\x01\x3a\x81\x85\x02\xb5"
  "\x01\x38\x81\x87\x02\xb4\x01\x36\x81\x87\x02\xb3\x01\x34\x81\x8b"
  "\x02\xb2\x01\x32\x81\x8b\x02\xb1\x01\x30\x81\x87\x02\xb0\x01\x2e"
  "\x81\x87\x02\xaf\x01\x2c\x81\x85\x02\xae\x01\x2a\x81\x89\x02\xad"
  "\x01\x28\x81\x89\x02\xac\x01\x26\x81\x85\x02\xab\x01\x24\x81\x8f"
  "\x02\xaa\x01\x22\x81\x85\x02\xa9\x01\x20\x81\x85\x02\xa8\x01\x1e"
  "\x84\x06\xa7\x01\x1c\x81\x8b\x02\xa6\x01\x1a\x81\x89\x02\xa5\x01"
  "\x18\x81\x95\x02\xa4\x01\x16\x81\x87\x02\xa3\x01\x14\x81\x87\x02"
  "\xa2\x01\x12\x81\x87\x02\xa1\x01\x10\x81\x85\x02\xa0\x01\x0e\x81"
  "\x85\x02\x9f\x01\x0c\x81\x89\x02\x9e\x01\x0a\x81\x83\x02\x9d\x01"
  "\x08\x81\x87\x02\x9c\x01\x06\x81\x85\x02\x9b\x01\x04\x83\x04\x3d"
  "\x69\x1e\x02\x08\x13\x04\x63\x61\x72\x02\x04\x16\x61\x73\x73\x6f"
  "\x63\x69\x61\x74\x69\x6f\x6e\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x02\xc4\x01\x1a\x81\x8d\x02\xc3\x01\x18\x81\x8d\x02\xc2\x01"
  "\x16\x81\x8f\x02\xc1\x01\x14\x81\x8d\x02\xc0\x01\x12\x81\x8d\x02"
  "\xbf\x01\x10\x81\x8d\x02\xbe\x01\x0e\x81\x8b\x02\xbd\x01\x0c\x81"
  "\x8f\x02\xbc\x01\x0a\x81\x8b\x02\xbb\x01\x08\x81\x85\x02\xba\x01"
  "\x06\x81\x87\x02\xb9\x01\x04\x84\x06\x19\x25\x16\x02\x09\x13\x07"
  "\x61\x73\x73\x69\x67\x6e\x0f\x2a\x61\x73\x73\x69\x67\x6e\x2d\x72"
  "\x75\x6c\x65\x73\x2a\x14\x18\x2a\x61\x73\x73\x69\x67\x6e\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x2d\x72\x75\x6c\x65\x73\x2a\x13\x0d"
  "\x2a\x63\x67\x65\x6e\x2d\x72\x75\x6c\x65\x73\x2a\x0c\x04\x0c\x14"
  "\x13\x04\x03\x12\x70\x61\x74\x74\x65\x72\x6e\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x3f\x04\x10\x03\xde\x01\x36\x81\x85\x02\xdd\x01"
  "\x34\x81\x85\x02\xdc\x01\x32\x81\x83\x02\xdb\x01\x30\x81\x85\x02"
  "\xda\x01\x2e\x81\x83\x02\xd9\x01\x2c\x81\x87\x02\xd8\x01\x2a\x81"
  "\x85\x02\xd7\x01\x28\x81\x85\x02\xd6\x01\x26\x81\x8b\x02\xd5\x01"
  "\x24\x81\x8b\x02\xd4\x01\x22\x81\x8b\x02\xd3\x01\x20\x81\x89\x02"
  "\xd2\x01\x1e\x81\x85\x02\xd1\x01\x1c\x81\x85\x02\xd0\x01\x1a\x81"
  "\x83\x02\xcf\x01\x18\x81\x85\x02\xce\x01\x16\x81\x85\x02\xcd\x01"
  "\x14\x81\x85\x02\xcc\x01\x12\x81\x83\x02\xcb\x01\x10\x81\x87\x02"
  "\xca\x01\x0e\x81\x8b\x02\xc9\x01\x0c\x81\x89\x02\xc8\x01\x0a\x81"
  "\x87\x02\xc7\x01\x08\x81\x87\x02\xc6\x01\x06\x81\x85\x02\xc5\x01"
  "\x04\x84\x06\x35\x4a\x0b\x02\x0a\x0c\x14\x13\x04\x03\x0c\x72\x74"
  "\x6c\x3a\x61\x73\x73\x69\x67\x6e\x3f\x03\x14\x72\x74\x6c\x3a\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x74\x79\x70\x65\x03\x13"
  "\x72\x74\x6c\x3a\x61\x73\x73\x69\x67\x6e\x2d\x61\x64\x64\x72\x65"
  "\x73\x73\x04\x0f\x70\x61\x74\x74\x65\x72\x6e\x2d\x6c\x6f\x6f\x6b"
  "\x75\x70\x04\x10\x06\xeb\x01\x1c\x81\x87\x02\xea\x01\x1a\x81\x85"
  "\x02\xe9\x01\x18\x81\x83\x02\xe8\x01\x16\x81\x89\x02\xe7\x01\x14"
  "\x81\x87\x02\xe6\x01\x12\x81\x89\x02\xe5\x01\x10\x81\x85\x02\xe4"
  "\x01\x0e\x81\x83\x02\xe3\x01\x0c\x81\x85\x02\xe2\x01\x0a\x81\x85"
  "\x02\xe1\x01\x08\x81\x85\x02\xe0\x01\x06\x81\x83\x02\xdf\x01\x04"
  "\x83\x04\x1b\x2e\x0a\x02\x0b\x15\x2a\x62\x6c\x6f\x63\x6b\x2d\x61"
  "\x73\x73\x6f\x63\x69\x61\x74\x69\x6f\x6e\x73\x2a\x09\x02\x04\x10"
  "\x02\xee\x01\x08\x81\x83\x02\xed\x01\x06\x81\x85\x02\xec\x01\x04"
  "\x83\x04\x07\x10\x10\x02\x0c\x02\x09\x02\x09\x02\xf1\x01\x08\x81"
  "\x85\x02\xf0\x01\x06\x81\x85\x02\xef\x01\x04\x84\x06\x07\x0f\x02"
  "\x0d\x03\x12\x62\x6c\x6f\x63\x6b\x2d\x61\x73\x73\x6f\x63\x69\x61"
  "\x74\x69\x6f\x6e\x03\x0f\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x6c"
  "\x61\x62\x65\x6c\x04\x11\x62\x6c\x6f\x63\x6b\x2d\x61\x73\x73\x6f"
  "\x63\x69\x61\x74\x65\x21\x23\x04\xf5\x01\x0a\x81\x89\x02\xf4\x01"
  "\x08\x81\x89\x02\xf3\x01\x06\x81\x87\x02\xf2\x01\x04\x85\x08\x09"
  "\x13\x24\x02\x0e\x03\x1f\x03\x1a\x03\xf8\x01\x08\x81\x83\x02\xf7"
  "\x01\x06\x81\x83\x02\xf6\x01\x04\x83\x04\x07\x0f\x1f\x02\x0f\x02"
  "\x0e\x3b\x63\x75\x72\x72\x65\x6e\x74\x2d\x62\x62\x6c\x6f\x63\x6b"
  "\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x65\x21\x20\x62\x62\x6c\x6f\x63"
  "\x6b\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x68\x61\x73\x20\x61\x20"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x0f\x19\x15\x73"
  "\x65\x74\x2d\x73\x6e\x6f\x64\x65\x2d\x6e\x65\x78\x74\x2d\x65\x64"
  "\x67\x65\x21\x03\x05\x0d\x63\x72\x65\x61\x74\x65\x2d\x65\x64\x67"
  "\x65\x21\x04\x0e\x03\xfe\x01\x0e\x81\x85\x02\xfd\x01\x0c\x81\x85"
  "\x02\xfc\x01\x0a\x81\x89\x02\xfb\x01\x08\x81\x85\x02\xfa\x01\x06"
  "\x81\x83\x02\xf9\x01\x04\x83\x04\x0d\x1f\x1a\x02\x10\x1d\x04\x6c"
  "\x61\x70\x02\x80\x02\x06\x81\x83\x02\xff\x01\x04\x83\x04\x05\x0d"
  "\x1d\x10\x0e\x0e\x1d\x04\x1a\x04\x1f\x04\x24\x04\x04\x10\x04\x0a"
  "\x04\x0b\x04\x16\x04\x1e\x04\x21\x04\x1c\x04\x18\x04\x12\x04\x0d"
  "\x04\x17\x0c\x6c\x61\x70\x3a\x63\x6f\x6d\x6d\x65\x6e\x74\x19\x63"
  "\x75\x72\x72\x65\x6e\x74\x2d\x62\x62\x6c\x6f\x63\x6b\x2d\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x65\x21\x10\x6d\x61\x6b\x65\x2d\x6e\x65\x77"
  "\x2d\x73\x62\x6c\x6f\x63\x6b\x1c\x73\x68\x61\x72\x65\x2d\x69\x6e"
  "\x73\x74\x72\x75\x63\x74\x69\x6f\x6e\x2d\x73\x65\x71\x75\x65\x6e"
  "\x63\x65\x21\x23\x09\x22\x14\x61\x64\x64\x2d\x73\x74\x61\x74\x65"
  "\x6d\x65\x6e\x74\x2d\x72\x75\x6c\x65\x21\x13\x14\x0c\x20\x17\x1b"
  "\x15\x11\x0d\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x6c\x61\x70\x0f"
  "\x19\x17\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04"
  "\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
lapgn1_so_data_2464177fd7a0b9c0 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_lapgn1_so_data_2464177fd7a0b9c0 [0]))), (sizeof (prog_lapgn1_so_data_2464177fd7a0b9c0)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("lapgn1.so", lapgn1_so_data_2464177fd7a0b9c0)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("lapgn1.so", "a58c7fcc8491058a")
