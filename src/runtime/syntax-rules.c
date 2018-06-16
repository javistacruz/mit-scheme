/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:56-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_9 11
#define LABEL_1_10 13
#define LABEL_1_11 15
#define LABEL_1_12 17
#define LABEL_1_14 19
#define LABEL_1_15 21
#define LABEL_1_16 23
#define LABEL_1_18 25
#define LABEL_1_19 27
#define LABEL_1_20 29
#define LABEL_1_21 31
#define LABEL_1_23 33
#define LABEL_1_24 35
#define LABEL_1_25 37
#define LABEL_1_22 39
#define LABEL_1_28 41
#define LABEL_1_26 43
#define LABEL_1_32 45
#define LABEL_1_29 47
#define LABEL_1_30 49
#define LABEL_1_31 51
#define LABEL_1_35 53
#define LABEL_1_36 55
#define LABEL_1_37 57
#define LABEL_1_33 59
#define LABEL_1_34 61
#define LABEL_1_39 63
#define LABEL_1_41 65
#define ENVIRONMENT_LABEL_1_3 95
#define DEBUGGING_LABEL_1_2 94
#define OBJECT_1_14 93
#define OBJECT_1_13 92
#define OBJECT_1_12 91
#define OBJECT_1_11 90
#define OBJECT_1_10 89
#define OBJECT_1_9 88
#define OBJECT_1_8 87
#define OBJECT_1_7 86
#define OBJECT_1_6 85
#define OBJECT_1_5 84
#define OBJECT_1_4 83
#define OBJECT_1_3 82
#define OBJECT_1_2 81
#define OBJECT_1_1 80
#define OBJECT_1_0 79
#define EXECUTE_CACHE_1_40 67
#define EXECUTE_CACHE_1_38 69
#define EXECUTE_CACHE_1_27 71
#define EXECUTE_CACHE_1_17 73
#define EXECUTE_CACHE_1_13 75
#define EXECUTE_CACHE_1_6 77
#define FREE_REFERENCES_LABEL_1_0 66
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_rules_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd19;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_62;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_64;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_65;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_66;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_67;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto label_70;

    case 8:
      current_block = (Rpc - LABEL_1_14);
      goto loop_13;

    case 9:
      current_block = (Rpc - LABEL_1_15);
      goto label_68;

    case 10:
      current_block = (Rpc - LABEL_1_16);
      goto label_69;

    case 11:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_17;

    case 12:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_16;

    case 13:
      current_block = (Rpc - LABEL_1_20);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_1_21);
      goto continuation_29;

    case 15:
      current_block = (Rpc - LABEL_1_23);
      goto loop_53;

    case 16:
      current_block = (Rpc - LABEL_1_24);
      goto label_71;

    case 17:
      current_block = (Rpc - LABEL_1_25);
      goto label_72;

    case 18:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_23;

    case 19:
      current_block = (Rpc - LABEL_1_28);
      goto continuation_33;

    case 20:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_39;

    case 21:
      current_block = (Rpc - LABEL_1_32);
      goto label_73;

    case 22:
      current_block = (Rpc - LABEL_1_29);
      goto continuation_19;

    case 23:
      current_block = (Rpc - LABEL_1_30);
      goto continuation_32;

    case 24:
      current_block = (Rpc - LABEL_1_31);
      goto continuation_47;

    case 25:
      current_block = (Rpc - LABEL_1_35);
      goto label_74;

    case 26:
      current_block = (Rpc - LABEL_1_36);
      goto label_75;

    case 27:
      current_block = (Rpc - LABEL_1_37);
      goto label_76;

    case 28:
      current_block = (Rpc - LABEL_1_33);
      goto continuation_18;

    case 29:
      current_block = (Rpc - LABEL_1_34);
      goto continuation_45;

    case 30:
      current_block = (Rpc - LABEL_1_39);
      goto continuation_41;

    case 31:
      current_block = (Rpc - LABEL_1_41);
      goto continuation_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_78)
DEFLABEL (lambda_62)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
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
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_85)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_84;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_83)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_82;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_81)
  (Wrd37.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  goto loop_13;

DEFLABEL (label_82)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_66)
  (Wrd21.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_64)
  (Wrd5.Obj) = Rvl;
  goto label_87;

DEFLABEL (loop_79)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_1_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_90;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_89)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_1_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_1_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto loop_53;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_1_21);
  (Wrd9.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_1_8]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_1_10]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd26.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd42.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_29]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_1_11]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd50.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_1_29);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_33]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_1_13]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_1_33);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_90)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_97;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_96)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_95;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_94)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  Rsp = (& (Rsp [2]));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_89;
  (Wrd39.Obj) = (current_block [OBJECT_1_3]);
  (Rsp [3]) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd40.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (label_91)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_93;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_92)
  (Rsp [1]) = (Wrd42.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_13;

DEFLABEL (label_93)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_70)
  (Wrd42.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (loop_80)
DEFLABEL (loop_53)
  INTERRUPT_CHECK (26, LABEL_1_23);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_98;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1_9]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_1_28);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_1_12]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd26.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_1_30);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_98)
  if (! ((Wrd6.uLng) == 1))
    goto label_110;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_109)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_108;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_107)
  Rdl = (& (Rsp [3]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = ((Wrd36.pObj) [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = ((Wrd36.pObj) [7]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd47.Obj) = ((Wrd36.pObj) [6]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_106;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_105)
  goto loop_53;

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_1_31);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_1_7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_104;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_103)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_102;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd30.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_101)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_100;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_99)
  (Wrd52.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [8]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [1]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd58.Obj) = ((Wrd54.pObj) [7]);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd61.Obj) = ((Wrd54.pObj) [6]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_38]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_1_34);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_39]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = ((Wrd18.pObj) [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = ((Wrd18.pObj) [7]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd18.pObj) [6]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_40]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_1_39);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_41]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_1_14]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [7]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_1_41);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_100)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_37]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_76)
  (Wrd44.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd44.Obj));
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_36]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_75)
  (Wrd33.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_35]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_74)
  (Wrd22.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd17.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_73)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_71)
  (Wrd14.Obj) = Rvl;
  goto label_109;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_10 9
#define LABEL_2_14 11
#define LABEL_2_8 13
#define LABEL_2_16 15
#define LABEL_2_17 17
#define LABEL_2_12 19
#define LABEL_2_21 21
#define LABEL_2_22 23
#define LABEL_2_24 25
#define LABEL_2_18 27
#define LABEL_2_19 29
#define LABEL_2_23 31
#define LABEL_2_26 33
#define LABEL_2_25 35
#define LABEL_2_27 37
#define ENVIRONMENT_LABEL_2_3 58
#define DEBUGGING_LABEL_2_2 57
#define OBJECT_2_5 56
#define OBJECT_2_4 55
#define OBJECT_2_3 54
#define OBJECT_2_2 53
#define OBJECT_2_1 52
#define OBJECT_2_0 51
#define EXECUTE_CACHE_2_20 39
#define EXECUTE_CACHE_2_15 41
#define EXECUTE_CACHE_2_13 43
#define EXECUTE_CACHE_2_11 45
#define EXECUTE_CACHE_2_9 47
#define EXECUTE_CACHE_2_7 49
#define FREE_REFERENCES_LABEL_2_0 38
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_rules_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd7;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd67;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd80;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_2_4);
      goto parse_pattern_26;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto loop_24;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_22;

    case 4:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_2_16);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_2_17);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_2_12);
      goto continuation_23;

    case 9:
      current_block = (Rpc - LABEL_2_21);
      goto continuation_16;

    case 10:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_2_24);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_17;

    case 13:
      current_block = (Rpc - LABEL_2_19);
      goto continuation_18;

    case 14:
      current_block = (Rpc - LABEL_2_23);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_2_26);
      goto label_31;

    case 16:
      current_block = (Rpc - LABEL_2_25);
      goto continuation_20;

    case 17:
      current_block = (Rpc - LABEL_2_27);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_pattern_34)
DEFLABEL (parse_pattern_26)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  Rdl = (& (Rsp [10]));
  goto loop_24;

DEFLABEL (loop_35)
DEFLABEL (loop_24)
  DLINK_INTERRUPT_CHECK (25, LABEL_2_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  Rvl = (Rsp [2]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_36)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_2_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_37)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_50;
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [6]);
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd75.Obj) = ((Wrd74.pObj) [1]);
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd78.Obj) = ((Wrd74.pObj) [0]);
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (Wrd80.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd80.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;

DEFLABEL (label_50)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_49;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_48)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_47;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_46)
  if (! ((Wrd22.Obj) == (current_block [OBJECT_2_0])))
    goto label_40;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_2_19);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_2_25);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_39;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_38)
  (Wrd22.pObj) = (& (Rsp [11]));
  {
    SCHEME_OBJECT * IPDLp1 = (((Wrd22.pObj) <= Rdl) ? (Wrd22.pObj) : Rdl);
    {
      SCHEME_OBJECT * MFUp1 = (& (Rsp [5]));
      SCHEME_OBJECT * MFUp2 = IPDLp1;
      while (MFUp1 > Rsp)
	{
	  (* (--MFUp2)) = (* (--MFUp1));
	}
      Rsp = MFUp2;
    }
  }
  goto loop_24;

DEFLABEL (label_39)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_27]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_32)
  (Wrd14.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd14.Obj));
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 1)
    goto label_41;
  Rvl = (Rsp [2]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_41)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [6]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.Obj) = ((Wrd43.pObj) [0]);
  (* (--Rsp)) = (Wrd56.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_22);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = (Rsp [6]);
  (Wrd11.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_45;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_44)
  Rdl = (& (Rsp [5]));
  goto loop_24;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_2_21);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_23]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_23);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (current_block [OBJECT_2_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_43;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_42)
  (Rsp [0]) = (Wrd16.Obj);
  goto loop_24;

DEFLABEL (label_43)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 1);

DEFLABEL (label_31)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd16.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_30)
  (Wrd21.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd21.Obj));
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_29)
  (Wrd25.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_28)
  (Wrd14.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd9.Obj) = Rvl;
  goto label_48;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define TAG_3_6 1
#define LABEL_3_7 7
#define TAG_3_8 2
#define LABEL_3_9 9
#define TAG_3_10 3
#define LABEL_3_11 11
#define LABEL_3_12 13
#define LABEL_3_13 15
#define LABEL_3_15 17
#define LABEL_3_18 19
#define LABEL_3_16 21
#define LABEL_3_22 23
#define LABEL_3_23 25
#define LABEL_3_24 27
#define LABEL_3_20 29
#define LABEL_3_21 31
#define LABEL_3_25 33
#define LABEL_3_32 35
#define LABEL_3_33 37
#define LABEL_3_35 39
#define LABEL_3_27 41
#define LABEL_3_28 43
#define LABEL_3_29 45
#define LABEL_3_30 47
#define LABEL_3_38 49
#define LABEL_3_37 51
#define LABEL_3_36 53
#define LABEL_3_34 55
#define LABEL_3_39 57
#define LABEL_3_40 59
#define LABEL_3_41 61
#define LABEL_3_42 63
#define LABEL_3_43 65
#define LABEL_3_44 67
#define LABEL_3_49 69
#define LABEL_3_45 71
#define LABEL_3_46 73
#define LABEL_3_47 75
#define LABEL_3_48 77
#define LABEL_3_50 79
#define LABEL_3_51 81
#define LABEL_3_52 83
#define LABEL_3_60 85
#define LABEL_3_53 87
#define LABEL_3_54 89
#define LABEL_3_55 91
#define LABEL_3_56 93
#define LABEL_3_57 95
#define LABEL_3_58 97
#define LABEL_3_59 99
#define LABEL_3_62 101
#define LABEL_3_61 103
#define ENVIRONMENT_LABEL_3_3 133
#define DEBUGGING_LABEL_3_2 132
#define OBJECT_3_16 131
#define OBJECT_3_15 130
#define OBJECT_3_14 129
#define OBJECT_3_13 128
#define OBJECT_3_12 127
#define OBJECT_3_11 126
#define OBJECT_3_10 125
#define OBJECT_3_9 124
#define OBJECT_3_8 123
#define OBJECT_3_7 122
#define OBJECT_3_6 121
#define OBJECT_3_5 120
#define OBJECT_3_4 119
#define OBJECT_3_3 118
#define OBJECT_3_2 117
#define OBJECT_3_1 116
#define OBJECT_3_0 115
#define EXECUTE_CACHE_3_31 105
#define EXECUTE_CACHE_3_26 107
#define EXECUTE_CACHE_3_19 109
#define EXECUTE_CACHE_3_17 111
#define EXECUTE_CACHE_3_14 113
#define FREE_REFERENCES_LABEL_3_0 104
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_rules_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd20;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_3_4);
      goto generate_match_130;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto lambda_142;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto lambda_143;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto lambda_144;

    case 4:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_122;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_81;

    case 6:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_80;

    case 8:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_55;

    case 9:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_3_22);
      goto label_132;

    case 11:
      current_block = (Rpc - LABEL_3_23);
      goto label_133;

    case 12:
      current_block = (Rpc - LABEL_3_24);
      goto label_134;

    case 13:
      current_block = (Rpc - LABEL_3_20);
      goto continuation_79;

    case 14:
      current_block = (Rpc - LABEL_3_21);
      goto continuation_56;

    case 15:
      current_block = (Rpc - LABEL_3_25);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_3_32);
      goto label_135;

    case 17:
      current_block = (Rpc - LABEL_3_33);
      goto label_136;

    case 18:
      current_block = (Rpc - LABEL_3_35);
      goto label_137;

    case 19:
      current_block = (Rpc - LABEL_3_27);
      goto continuation_101;

    case 20:
      current_block = (Rpc - LABEL_3_28);
      goto continuation_100;

    case 21:
      current_block = (Rpc - LABEL_3_29);
      goto continuation_95;

    case 22:
      current_block = (Rpc - LABEL_3_30);
      goto continuation_63;

    case 23:
      current_block = (Rpc - LABEL_3_38);
      goto continuation_12;

    case 24:
      current_block = (Rpc - LABEL_3_37);
      goto continuation_17;

    case 25:
      current_block = (Rpc - LABEL_3_36);
      goto continuation_34;

    case 26:
      current_block = (Rpc - LABEL_3_34);
      goto continuation_50;

    case 27:
      current_block = (Rpc - LABEL_3_39);
      goto continuation_85;

    case 28:
      current_block = (Rpc - LABEL_3_40);
      goto continuation_88;

    case 29:
      current_block = (Rpc - LABEL_3_41);
      goto continuation_94;

    case 30:
      current_block = (Rpc - LABEL_3_42);
      goto continuation_91;

    case 31:
      current_block = (Rpc - LABEL_3_43);
      goto continuation_60;

    case 32:
      current_block = (Rpc - LABEL_3_44);
      goto continuation_11;

    case 33:
      current_block = (Rpc - LABEL_3_49);
      goto lambda_33;

    case 34:
      current_block = (Rpc - LABEL_3_45);
      goto continuation_35;

    case 35:
      current_block = (Rpc - LABEL_3_46);
      goto continuation_46;

    case 36:
      current_block = (Rpc - LABEL_3_47);
      goto continuation_84;

    case 37:
      current_block = (Rpc - LABEL_3_48);
      goto continuation_59;

    case 38:
      current_block = (Rpc - LABEL_3_50);
      goto continuation_32;

    case 39:
      current_block = (Rpc - LABEL_3_51);
      goto continuation_31;

    case 40:
      current_block = (Rpc - LABEL_3_52);
      goto continuation_28;

    case 41:
      current_block = (Rpc - LABEL_3_60);
      goto label_138;

    case 42:
      current_block = (Rpc - LABEL_3_53);
      goto continuation_38;

    case 43:
      current_block = (Rpc - LABEL_3_54);
      goto continuation_45;

    case 44:
      current_block = (Rpc - LABEL_3_55);
      goto continuation_82;

    case 45:
      current_block = (Rpc - LABEL_3_56);
      goto continuation_57;

    case 46:
      current_block = (Rpc - LABEL_3_57);
      goto continuation_19;

    case 47:
      current_block = (Rpc - LABEL_3_58);
      goto continuation_26;

    case 48:
      current_block = (Rpc - LABEL_3_59);
      goto continuation_23;

    case 49:
      current_block = (Rpc - LABEL_3_62);
      goto label_139;

    case 50:
      current_block = (Rpc - LABEL_3_61);
      goto continuation_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_match_141)
DEFLABEL (generate_match_130)
  INTERRUPT_CHECK (26, LABEL_3_4);
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
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_5])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd25 = Wrd24;
  (Wrd26.Obj) = (Rsp [3]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 3;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd33 = Wrd28;
  ((Wrd33.pObj) [2]) = (Wrd26.Obj);
  ((Wrd33.pObj) [3]) = (Wrd7.Obj);
  ((Wrd33.pObj) [4]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 11));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_9])));
  Rhp += 8;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd51 = Wrd36;
  (Wrd52.Obj) = (Rsp [9]);
  ((Wrd51.pObj) [2]) = (Wrd52.Obj);
  (Wrd50.Obj) = (Rsp [8]);
  ((Wrd51.pObj) [3]) = (Wrd50.Obj);
  (Wrd48.Obj) = (Rsp [7]);
  ((Wrd51.pObj) [4]) = (Wrd48.Obj);
  (Wrd46.Obj) = (Rsp [6]);
  ((Wrd51.pObj) [5]) = (Wrd46.Obj);
  ((Wrd51.pObj) [6]) = (Wrd26.Obj);
  ((Wrd51.pObj) [7]) = (Wrd7.Obj);
  ((Wrd51.pObj) [8]) = (Wrd13.Obj);
  ((Wrd51.pObj) [9]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  ((Wrd18.pObj) [0]) = (Wrd35.Obj);
  ((Wrd12.pObj) [0]) = (Wrd27.Obj);
  ((Wrd6.pObj) [0]) = (Wrd23.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd63.Obj) = ((Wrd65.pObj) [0]);
  (Rsp [7]) = (Wrd63.Obj);
  Rsp = (& (Rsp [7]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_142)
  CLOSURE_HEADER (LABEL_3_5);

DEFLABEL (lambda_126)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_148;
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_146;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (Wrd9.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_146)
  Rvl = (Wrd5.Obj);

DEFLABEL (label_147)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_148)
  Rvl = (Rsp [2]);
  goto label_147;

DEFLABEL (lambda_143)
  CLOSURE_HEADER (LABEL_3_7);

DEFLABEL (lambda_119)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_3_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_3_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_29]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3_9]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [7]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_3_29);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_3_3]);
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
  (Wrd21.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_41]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_42]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_3_13]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [9]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_3_42);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [9]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [4]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_3_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_3_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_3_40);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_3_27);
  (Wrd9.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_39]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3_10]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_3_39);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_47]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_3_47);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd25.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_55]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_3_16]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [6]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_3_55);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (lambda_144)
  CLOSURE_HEADER (LABEL_3_9);

DEFLABEL (lambda_78)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_150;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_3_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_149;
  Rvl = (current_block [OBJECT_3_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_149)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_3_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_3_21);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [4]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_31]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_3_30);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd31.Obj) = ((Wrd16.pObj) [2]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_43]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_3_14]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.Obj) = ((Wrd16.pObj) [6]);
  (* (--Rsp)) = (Wrd48.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_3_43);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd16.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_48]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [6]);
  (* (--Rsp)) = (Wrd28.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_3_48);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_56]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [6]);
  (* (--Rsp)) = (Wrd32.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_3_56);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_150)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd18.pObj) [6]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_165;

DEFLABEL (label_164)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [5]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = ((Wrd28.pObj) [6]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_156;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_163;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_162)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_161;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_160)
  if ((Wrd16.Obj) == (current_block [OBJECT_3_3]))
    goto label_157;

DEFLABEL (label_156)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_152;
  Rdl = (& (Rsp [3]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_36]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_3_36);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_151;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_33;

DEFLABEL (label_151)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_45]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_3_45);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_53]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.pObj) = (& (Rsp [3]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [2]));
  goto lambda_33;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_3_53);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd15.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_61]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [6]);
  (* (--Rsp)) = (Wrd28.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_3_61);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_152)
  if ((Wrd24.Obj) == (current_block [OBJECT_3_3]))
    goto label_154;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_38]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_3_11]);
  (* (--Rsp)) = (Wrd31.Obj);
  goto label_153;

DEFLABEL (label_154)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_37]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_3_10]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_153)
DEFLABEL (label_155)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [6]);
  (* (--Rsp)) = (Wrd41.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_157)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd56.Obj) = (Rsp [3]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 1))
    goto label_159;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_158)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [8]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (* (--Rsp)) = (Wrd66.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_3_34);
  (Wrd9.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_46]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3_10]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_3_46);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_54]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [6]);
  (* (--Rsp)) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_3_54);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_159)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_35]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_8]), 1);

DEFLABEL (label_137)
  (* (--Rsp)) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_7]), 1);

DEFLABEL (label_136)
  (Wrd16.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_163)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_7]), 1);

DEFLABEL (label_135)
  (Wrd7.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_165)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_171;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_170)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_169;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_168)
  if (! ((Wrd16.Obj) == (current_block [OBJECT_3_3])))
    goto label_164;
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [8]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd38.pObj) [0]);
  (Rsp [0]) = (Wrd34.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_167;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [0]);

DEFLABEL (label_166)
  (Rsp [1]) = (Wrd39.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_167)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_8]), 1);

DEFLABEL (label_134)
  (Wrd39.Obj) = Rvl;
  goto label_166;

DEFLABEL (label_169)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_7]), 1);

DEFLABEL (label_133)
  (Wrd16.Obj) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_7]), 1);

DEFLABEL (label_132)
  (Wrd7.Obj) = Rvl;
  goto label_170;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_38);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_3_3]);
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
  (Wrd21.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_44]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_3_15]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [6]);
  (* (--Rsp)) = (Wrd28.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_44);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_3_37);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_3_3]);
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

DEFLABEL (lambda_145)
DEFLABEL (lambda_33)
  DLINK_INTERRUPT_CHECK (25, LABEL_3_49);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_50]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_51]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_52]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_3_9]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [8]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [6]);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_3_52);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_175;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_174)
  (Wrd35.Obj) = (Rsp [7]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [9]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (* (--Rsp)) = (Wrd41.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_3_51);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_58]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_59]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3_13]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [9]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [6]);
  (* (--Rsp)) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_3_59);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_173;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_172)
  (Wrd35.Obj) = (Rsp [8]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [9]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (* (--Rsp)) = (Wrd41.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_3_58);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [7]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_3_50);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_57]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3_12]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_3_57);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (current_block [OBJECT_3_3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [7]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_173)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_62]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_8]), 1);

DEFLABEL (label_139)
  (Wrd25.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd25.Obj));
  (* (--Rsp)) = Rvl;
  goto label_172;

DEFLABEL (label_175)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_60]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_7]), 1);

DEFLABEL (label_138)
  (Wrd25.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd25.Obj));
  (* (--Rsp)) = Rvl;
  goto label_174;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_11 9
#define LABEL_4_12 11
#define LABEL_4_13 13
#define LABEL_4_14 15
#define LABEL_4_10 17
#define LABEL_4_20 19
#define LABEL_4_22 21
#define LABEL_4_8 23
#define LABEL_4_26 25
#define LABEL_4_27 27
#define LABEL_4_18 29
#define LABEL_4_16 31
#define LABEL_4_25 33
#define LABEL_4_29 35
#define LABEL_4_30 37
#define LABEL_4_34 39
#define LABEL_4_23 41
#define LABEL_4_21 43
#define LABEL_4_36 45
#define LABEL_4_33 47
#define LABEL_4_35 49
#define ENVIRONMENT_LABEL_4_3 78
#define DEBUGGING_LABEL_4_2 77
#define OBJECT_4_3 76
#define OBJECT_4_2 75
#define OBJECT_4_1 74
#define OBJECT_4_0 73
#define EXECUTE_CACHE_4_38 51
#define EXECUTE_CACHE_4_37 53
#define EXECUTE_CACHE_4_32 55
#define EXECUTE_CACHE_4_31 57
#define EXECUTE_CACHE_4_28 59
#define EXECUTE_CACHE_4_24 61
#define EXECUTE_CACHE_4_19 63
#define EXECUTE_CACHE_4_17 65
#define EXECUTE_CACHE_4_15 67
#define EXECUTE_CACHE_4_9 69
#define EXECUTE_CACHE_4_7 71
#define FREE_REFERENCES_LABEL_4_0 50
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_rules_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd86;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd93;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd41;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_4_4);
      goto generate_output_35;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto loop_33;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_24;

    case 4:
      current_block = (Rpc - LABEL_4_12);
      goto label_40;

    case 5:
      current_block = (Rpc - LABEL_4_13);
      goto loop_27;

    case 6:
      current_block = (Rpc - LABEL_4_14);
      goto label_37;

    case 7:
      current_block = (Rpc - LABEL_4_10);
      goto continuation_20;

    case 8:
      current_block = (Rpc - LABEL_4_20);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_4_22);
      goto label_41;

    case 10:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_4_26);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_4_27);
      goto label_39;

    case 13:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_31;

    case 14:
      current_block = (Rpc - LABEL_4_16);
      goto continuation_29;

    case 15:
      current_block = (Rpc - LABEL_4_25);
      goto continuation_19;

    case 16:
      current_block = (Rpc - LABEL_4_29);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_4_30);
      goto continuation_11;

    case 18:
      current_block = (Rpc - LABEL_4_34);
      goto label_42;

    case 19:
      current_block = (Rpc - LABEL_4_23);
      goto continuation_5;

    case 20:
      current_block = (Rpc - LABEL_4_21);
      goto continuation_10;

    case 21:
      current_block = (Rpc - LABEL_4_36);
      goto label_43;

    case 22:
      current_block = (Rpc - LABEL_4_33);
      goto continuation_15;

    case 23:
      current_block = (Rpc - LABEL_4_35);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_output_45)
DEFLABEL (generate_output_35)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  Rdl = (& (Rsp [8]));
  goto loop_33;

DEFLABEL (loop_46)
DEFLABEL (loop_33)
  DLINK_INTERRUPT_CHECK (25, LABEL_4_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_27;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_4_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_49)
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_4_18);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_28]));

DEFLABEL (label_48)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_4_16);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_50)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_56;
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [4]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [1]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd54.Obj) = ((Wrd50.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_20);
  (Wrd56.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd56.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;

DEFLABEL (label_56)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_55;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_54)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_52;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_51)
  Rdl = (& (Rsp [3]));
  goto loop_33;

DEFLABEL (label_52)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_27]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_39)
DEFLABEL (label_53)
  (Wrd86.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd86.Obj));
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_26]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_38)
  (Wrd24.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd19.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd61.uLng) == 1)
    goto label_58;
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (Rsp [5]);
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (* (--Rsp)) = (Wrd70.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_23);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Obj) = (current_block [OBJECT_4_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_58)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (Rsp [4]);
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd77.pObj)));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd80.Obj);
  if (! ((Wrd61.uLng) == 1))
    goto label_59;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [1]);
  (* (--Rsp)) = (Wrd83.Obj);
  goto label_51;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_41)
  goto label_53;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_4_25);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_29]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_30]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_31]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4_30);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [7]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_33]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd22.Obj) = (Rsp [9]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (Rsp [9]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_61;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_60)
  Rdl = (& (Rsp [3]));
  goto loop_33;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_4_33);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_37]));

DEFLABEL (label_61)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_34]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_21);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_35]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_63;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_62)
  Rdl = (& (Rsp [3]));
  goto loop_33;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_35);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [4]));
    SCHEME_OBJECT * MFUp2 = Rdl;
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_38]));

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_36]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_43)
  (Wrd22.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd22.Obj));
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_4_29);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [4]));
    SCHEME_OBJECT * MFUp2 = Rdl;
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_32]));

DEFLABEL (loop_47)
DEFLABEL (loop_27)
  INTERRUPT_CHECK (26, LABEL_4_13);
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 1)
    goto label_64;
  Rsp = (& (Rsp [2]));
  (Wrd24.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd24.Obj));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_49;

DEFLABEL (label_64)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd30.Obj);
  if (! ((Wrd23.uLng) == 1))
    goto label_70;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_69)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Wrd41.Obj) = (Rsp [3]);
  if (Rvl == (Wrd41.Obj))
    goto label_67;
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_66;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_65)
  (Rsp [0]) = (Wrd42.Obj);
  goto loop_27;

DEFLABEL (label_66)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_40)
  (Wrd42.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_67)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 1)
    goto label_68;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_68)
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd54.Obj) = ((Wrd56.pObj) [0]);
  Rsp = (& (Rsp [2]));
  (Wrd51.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd51.Obj));
  (* (--Rsp)) = (Wrd54.Obj);
  goto label_49;

DEFLABEL (label_70)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_69;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_10 9
#define LABEL_5_13 11
#define LABEL_5_14 13
#define LABEL_5_16 15
#define LABEL_5_8 17
#define LABEL_5_18 19
#define LABEL_5_9 21
#define ENVIRONMENT_LABEL_5_3 41
#define DEBUGGING_LABEL_5_2 40
#define OBJECT_5_4 39
#define OBJECT_5_3 38
#define OBJECT_5_2 37
#define OBJECT_5_1 36
#define OBJECT_5_0 35
#define EXECUTE_CACHE_5_19 23
#define EXECUTE_CACHE_5_17 25
#define EXECUTE_CACHE_5_15 27
#define EXECUTE_CACHE_5_12 29
#define EXECUTE_CACHE_5_11 31
#define EXECUTE_CACHE_5_7 33
#define FREE_REFERENCES_LABEL_5_0 22
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_rules_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd16;
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
      goto add_controlB_16;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto loop_14;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_10);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_5_14);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_5_16);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_5_18);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_5_9);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_controlB_23)
DEFLABEL (add_controlB_16)
  INTERRUPT_CHECK (26, LABEL_5_4);
  goto loop_14;

DEFLABEL (loop_24)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_5_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_25;
  Rvl = (current_block [OBJECT_5_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_29;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_5_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_8);

DEFLABEL (label_28)
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_27;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_14;

DEFLABEL (label_27)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_19)
  (Wrd6.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  if (! ((Wrd8.uLng) == 1))
    goto label_37;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_32;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_31)
  (Wrd27.Obj) = (Rsp [2]);
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_30;
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_5_3]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_17]));

DEFLABEL (label_30)
  Rsp = (& (Rsp [2]));
  goto label_28;

DEFLABEL (label_32)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_20)
  (Wrd18.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_33)
  (Wrd34.Obj) = (Rsp [4]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_35;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_34)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Rsp [1]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (label_35)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_8 7
#define LABEL_6_7 9
#define LABEL_6_12 11
#define LABEL_6_11 13
#define LABEL_6_14 15
#define LABEL_6_15 17
#define LABEL_6_16 19
#define LABEL_6_17 21
#define LABEL_6_18 23
#define LABEL_6_19 25
#define LABEL_6_20 27
#define LABEL_6_21 29
#define LABEL_6_24 31
#define LABEL_6_23 33
#define LABEL_6_27 35
#define LABEL_6_22 37
#define LABEL_6_26 39
#define LABEL_6_28 41
#define LABEL_6_29 43
#define ENVIRONMENT_LABEL_6_3 65
#define DEBUGGING_LABEL_6_2 64
#define OBJECT_6_5 63
#define OBJECT_6_4 62
#define OBJECT_6_3 61
#define OBJECT_6_2 60
#define OBJECT_6_1 59
#define OBJECT_6_0 58
#define EXECUTE_CACHE_6_25 45
#define EXECUTE_CACHE_6_13 47
#define EXECUTE_CACHE_6_10 49
#define EXECUTE_CACHE_6_9 51
#define EXECUTE_CACHE_6_6 53
#define FREE_REFERENCE_6_1 56
#define FREE_REFERENCE_6_0 57
#define FREE_REFERENCES_LABEL_6_0 44
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_rules_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd89;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd79;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_6_4);
      goto generate_ellipsis_34;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto label_36;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_6_12);
      goto label_37;

    case 5:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_6_14);
      goto label_38;

    case 7:
      current_block = (Rpc - LABEL_6_15);
      goto label_39;

    case 8:
      current_block = (Rpc - LABEL_6_16);
      goto label_41;

    case 9:
      current_block = (Rpc - LABEL_6_17);
      goto label_42;

    case 10:
      current_block = (Rpc - LABEL_6_18);
      goto label_43;

    case 11:
      current_block = (Rpc - LABEL_6_19);
      goto label_44;

    case 12:
      current_block = (Rpc - LABEL_6_20);
      goto label_45;

    case 13:
      current_block = (Rpc - LABEL_6_21);
      goto label_46;

    case 14:
      current_block = (Rpc - LABEL_6_24);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_6_23);
      goto continuation_26;

    case 16:
      current_block = (Rpc - LABEL_6_27);
      goto label_47;

    case 17:
      current_block = (Rpc - LABEL_6_22);
      goto continuation_28;

    case 18:
      current_block = (Rpc - LABEL_6_26);
      goto continuation_22;

    case 19:
      current_block = (Rpc - LABEL_6_28);
      goto continuation_21;

    case 20:
      current_block = (Rpc - LABEL_6_29);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_ellipsis_49)
DEFLABEL (generate_ellipsis_34)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_50;
  (Wrd7.Obj) = (current_block [OBJECT_6_1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (label_50)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_78;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_77)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_76;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_75)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_74;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_73)
  if ((Wrd5.Obj) == (current_block [OBJECT_6_3]))
    goto label_72;

DEFLABEL (label_71)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_70;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_69)
  if ((Wrd15.Obj) == (current_block [OBJECT_6_3]))
    goto label_56;

DEFLABEL (label_55)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_54;
  Wrd29 = Wrd33;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_25]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_6_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_52;
  Wrd9 = Wrd13;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_25]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_6_26);
  (Wrd8.Obj) = (Rsp [6]);
  (Wrd9.Obj) = (current_block [OBJECT_6_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_6_5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_6_28);
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
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_29]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_6_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_6_29);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_27])), (Wrd10.pObj));

DEFLABEL (label_47)
  (Wrd9.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_24])), (Wrd30.pObj));

DEFLABEL (label_40)
  (Wrd29.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd35.Obj) = (Rsp [5]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_55;
  if (! ((Wrd36.uLng) == 1))
    goto label_68;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_67)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_55;
  (Wrd50.Obj) = (Rsp [5]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_66;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_65)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_64;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd56.Obj) = ((Wrd57.pObj) [0]);

DEFLABEL (label_63)
  (Wrd63.Obj) = (Rsp [0]);
  if (! ((Wrd56.Obj) == (Wrd63.Obj)))
    goto label_55;
  (Wrd67.Obj) = (Rsp [5]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_62;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd64.Obj) = ((Wrd66.pObj) [1]);

DEFLABEL (label_61)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_60;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd73.Obj) = ((Wrd74.pObj) [1]);

DEFLABEL (label_59)
  if (! ((Wrd73.Obj) == (current_block [OBJECT_6_3])))
    goto label_55;
  (Wrd84.Obj) = (Rsp [5]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_58;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd81.Obj) = ((Wrd83.pObj) [0]);

DEFLABEL (label_57)
  (Wrd93.Obj) = (Rsp [1]);
  (Wrd94.Obj) = (current_block [OBJECT_6_3]);
  (* (Rhp++)) = (Wrd93.Obj);
  (* (Rhp++)) = (Wrd94.Obj);
  (Wrd92.pObj) = (& (Rhp [-2]));
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd92.pObj)));
  (* (Rhp++)) = (Wrd81.Obj);
  (* (Rhp++)) = (Wrd90.Obj);
  (Wrd96.pObj) = (& (Rhp [-2]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd96.pObj)));
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd101.Obj) = (current_block [OBJECT_6_4]);
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd102.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd102.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_6_22);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_46)
  (Wrd81.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_45)
  (Wrd73.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_44)
  (Wrd64.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_43)
  (Wrd56.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_42)
  (Wrd47.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_41)
  (Wrd37.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_39)
  (Wrd15.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd103.Obj) = (Rsp [5]);
  (Wrd104.Obj) = (Rsp [0]);
  if (! ((Wrd103.Obj) == (Wrd104.Obj)))
    goto label_71;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_38)
  (Wrd5.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_77;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_7 7
#define LABEL_7_8 9
#define LABEL_7_6 11
#define LABEL_7_10 13
#define LABEL_7_11 15
#define LABEL_7_12 17
#define ENVIRONMENT_LABEL_7_3 25
#define DEBUGGING_LABEL_7_2 24
#define OBJECT_7_2 23
#define OBJECT_7_1 22
#define OBJECT_7_0 21
#define EXECUTE_CACHE_7_9 19
#define FREE_REFERENCES_LABEL_7_0 18
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_rules_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_7_4);
      goto zero_or_moreP_9;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_7_10);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_7_11);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_7_12);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (zero_or_moreP_17)
DEFLABEL (zero_or_moreP_9)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_19;

DEFLABEL (label_18)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  if (! ((Wrd6.uLng) == 1))
    goto label_30;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_29)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_18;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_28;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_27)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_26;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7_10);
  (Rsp [3]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_24;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_23)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_22;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_21)
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd22.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_22)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_15)
  (Wrd15.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_14)
  (Wrd6.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_12)
  (Wrd22.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 5
#define DEBUGGING_LABEL_8_2 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_rules_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto at_least_oneP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (at_least_oneP_3)
DEFLABEL (at_least_oneP_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_8 9
#define LABEL_9_10 11
#define LABEL_9_11 13
#define ENVIRONMENT_LABEL_9_3 26
#define DEBUGGING_LABEL_9_2 25
#define OBJECT_9_3 24
#define OBJECT_9_2 23
#define OBJECT_9_1 22
#define OBJECT_9_0 21
#define EXECUTE_CACHE_9_12 15
#define EXECUTE_CACHE_9_9 17
#define EXECUTE_CACHE_9_7 19
#define FREE_REFERENCES_LABEL_9_0 14
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_rules_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_9_4);
      goto syntax_quote_6;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto lambda_3;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_9_11);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntax_quote_11)
DEFLABEL (syntax_quote_6)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_9_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_12)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_9_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_16;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_15)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_14;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (label_14)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_9)
  (Wrd14.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 1);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_5 3
#define LABEL_10_6 5
#define LABEL_10_7 7
#define LABEL_10_8 9
#define LABEL_10_9 11
#define LABEL_10_10 13
#define LABEL_10_11 15
#define LABEL_10_12 17
#define LABEL_10_13 19
#define LABEL_10_15 21
#define LABEL_10_16 23
#define LABEL_10_4 25
#define LABEL_10_20 27
#define LABEL_10_19 29
#define LABEL_10_21 31
#define LABEL_10_18 33
#define LABEL_10_22 35
#define LABEL_10_14 37
#define ENVIRONMENT_LABEL_10_3 48
#define DEBUGGING_LABEL_10_2 47
#define OBJECT_10_5 46
#define OBJECT_10_4 45
#define OBJECT_10_3 44
#define OBJECT_10_2 43
#define OBJECT_10_1 42
#define OBJECT_10_0 41
#define EXECUTE_CACHE_10_17 39
#define FREE_REFERENCES_LABEL_10_0 38
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_rules_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd88;
  machine_word Wrd82;
  machine_word Wrd83;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd76;
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
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd100;
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
      current_block = (Rpc - LABEL_10_5);
      goto continuation_17;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_36;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto label_37;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_10_9);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_10_10);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_10_11);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_10_12);
      goto label_33;

    case 8:
      current_block = (Rpc - LABEL_10_13);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_10_15);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_10_16);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_10_4);
      goto optimized_cons_26;

    case 12:
      current_block = (Rpc - LABEL_10_20);
      goto continuation_18;

    case 13:
      current_block = (Rpc - LABEL_10_19);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_10_21);
      goto label_29;

    case 15:
      current_block = (Rpc - LABEL_10_18);
      goto continuation_2;

    case 16:
      current_block = (Rpc - LABEL_10_22);
      goto label_35;

    case 17:
      current_block = (Rpc - LABEL_10_14);
      goto continuation_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimized_cons_39)
DEFLABEL (optimized_cons_26)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_45;

DEFLABEL (label_44)
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_42;

DEFLABEL (label_41)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_10_5]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_40)
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_42)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_43)
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_45)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_10_4]);
  (* (--Rsp)) = (Wrd28.Obj);
  goto label_43;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_10_20);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_10_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_10_19);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_53;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_52)
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_10_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_51;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [1]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_10_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd100.Obj) = (Rsp [3]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 1))
    goto label_49;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd97.Obj) = ((Wrd99.pObj) [1]);

DEFLABEL (label_48)
  (Wrd109.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd109.Obj);
  (* (Rhp++)) = (Wrd97.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (* (--Rsp)) = (Wrd108.Obj);
  (Wrd113.Obj) = (Rsp [4]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 1))
    goto label_47;
  (Wrd112.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd110.Obj) = ((Wrd112.pObj) [0]);

DEFLABEL (label_46)
  (Wrd119.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd110.Obj);
  (* (Rhp++)) = (Wrd119.Obj);
  (Wrd122.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd122.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_37)
  (Wrd110.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_36)
  (Wrd97.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_16]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_18);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_65;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_64)
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_63;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_62)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_44;
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_61;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [1]);

DEFLABEL (label_60)
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_59;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd65.Obj) = ((Wrd66.pObj) [0]);

DEFLABEL (label_58)
  if (! ((Wrd65.Obj) == (current_block [OBJECT_10_2])))
    goto label_44;
  (Wrd76.Obj) = (Rsp [3]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_57;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd73.Obj) = ((Wrd75.pObj) [1]);

DEFLABEL (label_56)
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd84.uLng) == 1))
    goto label_55;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd82.Obj) = ((Wrd83.pObj) [1]);

DEFLABEL (label_54)
  if (! ((Wrd82.Obj) == (current_block [OBJECT_10_2])))
    goto label_44;
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd93.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd93.Obj);
  goto label_40;

DEFLABEL (label_55)
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_34)
  (Wrd82.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_33)
  (Wrd73.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_32)
  (Wrd65.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_31)
  (Wrd56.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_30)
  (Wrd46.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_10_14);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_10_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_5 3
#define LABEL_11_6 5
#define LABEL_11_7 7
#define LABEL_11_8 9
#define LABEL_11_9 11
#define LABEL_11_10 13
#define LABEL_11_4 15
#define LABEL_11_12 17
#define LABEL_11_11 19
#define LABEL_11_13 21
#define ENVIRONMENT_LABEL_11_3 28
#define DEBUGGING_LABEL_11_2 27
#define OBJECT_11_4 26
#define OBJECT_11_3 25
#define OBJECT_11_2 24
#define OBJECT_11_1 23
#define OBJECT_11_0 22
#define FREE_REFERENCES_LABEL_11_0 22
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_rules_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_11_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_11_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_11_10);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_11_4);
      goto optimized_append_15;

    case 7:
      current_block = (Rpc - LABEL_11_12);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_11_13);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (optimized_append_24)
DEFLABEL (optimized_append_15)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_26;

DEFLABEL (label_25)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_11_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_12);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_11_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_38;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_37)
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_36;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_35)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_25;
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_34;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_33)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_32;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd41.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_31)
  if (! ((Wrd41.Obj) == (current_block [OBJECT_11_2])))
    goto label_25;
  (Wrd52.Obj) = (Rsp [3]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_30;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [1]);

DEFLABEL (label_29)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_28;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd58.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_27)
  if (! ((Wrd58.Obj) == (current_block [OBJECT_11_2])))
    goto label_25;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_21)
  (Wrd58.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_20)
  (Wrd49.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_19)
  (Wrd41.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_18)
  (Wrd32.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_17)
  (Wrd22.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_37;

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
#define LABEL_23 31
#define LABEL_19 33
#define LABEL_21 35
#define LABEL_27 37
#define LABEL_22 39
#define LABEL_25 41
#define LABEL_31 43
#define LABEL_26 45
#define LABEL_29 47
#define LABEL_35 49
#define LABEL_30 51
#define LABEL_33 53
#define LABEL_38 55
#define LABEL_34 57
#define LABEL_36 59
#define LABEL_41 61
#define LABEL_37 63
#define LABEL_39 65
#define LABEL_44 67
#define LABEL_40 69
#define LABEL_42 71
#define LABEL_43 73
#define LABEL_46 75
#define LABEL_50 77
#define LABEL_47 79
#define LABEL_48 81
#define LABEL_53 83
#define LABEL_49 85
#define LABEL_51 87
#define LABEL_56 89
#define LABEL_52 91
#define LABEL_54 93
#define LABEL_58 95
#define LABEL_55 97
#define LABEL_57 99
#define LABEL_59 101
#define LABEL_60 103
#define LABEL_61 105
#define ENVIRONMENT_LABEL_3 173
#define DEBUGGING_LABEL_2 172
#define PURIFICATION_ROOT 171
#define OBJECT_47 170
#define OBJECT_46 169
#define OBJECT_45 168
#define OBJECT_44 167
#define OBJECT_43 166
#define OBJECT_42 165
#define OBJECT_41 164
#define OBJECT_40 163
#define OBJECT_39 162
#define OBJECT_38 161
#define OBJECT_37 160
#define OBJECT_36 159
#define OBJECT_35 158
#define OBJECT_34 157
#define OBJECT_33 156
#define OBJECT_32 155
#define OBJECT_31 154
#define OBJECT_30 153
#define OBJECT_29 152
#define OBJECT_28 151
#define OBJECT_27 150
#define OBJECT_26 149
#define OBJECT_25 148
#define OBJECT_24 147
#define OBJECT_23 146
#define OBJECT_22 145
#define OBJECT_21 144
#define OBJECT_20 143
#define OBJECT_19 142
#define OBJECT_18 141
#define OBJECT_17 140
#define OBJECT_16 139
#define OBJECT_15 138
#define OBJECT_14 137
#define OBJECT_13 136
#define OBJECT_12 135
#define OBJECT_11 134
#define OBJECT_10 133
#define OBJECT_9 132
#define OBJECT_8 131
#define OBJECT_7 130
#define OBJECT_6 129
#define OBJECT_5 128
#define OBJECT_4 127
#define OBJECT_3 126
#define OBJECT_2 125
#define OBJECT_1 124
#define OBJECT_0 123
#define EXECUTE_CACHE_45 107
#define EXECUTE_CACHE_32 109
#define EXECUTE_CACHE_28 111
#define EXECUTE_CACHE_24 113
#define EXECUTE_CACHE_20 115
#define FREE_REFERENCE_1 118
#define FREE_REFERENCE_0 119
#define GLOBAL_EXECUTE_CACHE_7 121
#define FREE_REFERENCES_LABEL_0 106
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
syntax_rules_so_07f86d61f46510fc (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_13);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_19);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_17;

    case 17:
      current_block = (Rpc - LABEL_27);
      goto label_42;

    case 18:
      current_block = (Rpc - LABEL_22);
      goto continuation_16;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_31);
      goto label_43;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto continuation_18;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto continuation_21;

    case 23:
      current_block = (Rpc - LABEL_35);
      goto label_44;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto continuation_20;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto continuation_23;

    case 26:
      current_block = (Rpc - LABEL_38);
      goto label_45;

    case 27:
      current_block = (Rpc - LABEL_34);
      goto continuation_22;

    case 28:
      current_block = (Rpc - LABEL_36);
      goto continuation_25;

    case 29:
      current_block = (Rpc - LABEL_41);
      goto label_46;

    case 30:
      current_block = (Rpc - LABEL_37);
      goto continuation_24;

    case 31:
      current_block = (Rpc - LABEL_39);
      goto continuation_27;

    case 32:
      current_block = (Rpc - LABEL_44);
      goto label_47;

    case 33:
      current_block = (Rpc - LABEL_40);
      goto continuation_26;

    case 34:
      current_block = (Rpc - LABEL_42);
      goto continuation_29;

    case 35:
      current_block = (Rpc - LABEL_43);
      goto continuation_28;

    case 36:
      current_block = (Rpc - LABEL_46);
      goto continuation_31;

    case 37:
      current_block = (Rpc - LABEL_50);
      goto label_48;

    case 38:
      current_block = (Rpc - LABEL_47);
      goto continuation_30;

    case 39:
      current_block = (Rpc - LABEL_48);
      goto continuation_33;

    case 40:
      current_block = (Rpc - LABEL_53);
      goto label_49;

    case 41:
      current_block = (Rpc - LABEL_49);
      goto continuation_32;

    case 42:
      current_block = (Rpc - LABEL_51);
      goto continuation_35;

    case 43:
      current_block = (Rpc - LABEL_56);
      goto label_50;

    case 44:
      current_block = (Rpc - LABEL_52);
      goto continuation_34;

    case 45:
      current_block = (Rpc - LABEL_54);
      goto continuation_37;

    case 46:
      current_block = (Rpc - LABEL_58);
      goto label_51;

    case 47:
      current_block = (Rpc - LABEL_55);
      goto continuation_36;

    case 48:
      current_block = (Rpc - LABEL_57);
      goto continuation_38;

    case 49:
      current_block = (Rpc - LABEL_59);
      goto label_54;

    case 50:
      current_block = (Rpc - LABEL_60);
      goto label_55;

    case 51:
      current_block = (Rpc - LABEL_61);
      goto expression_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_40)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_60])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_55)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_54)
  {
    static const short sections [] =
      {
	0,
	0,
	1,
	1,
	0,
	1,
	2,
	1,
	1,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 11)
      goto label_53;
    blocks = (current_block [OBJECT_47]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_59])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_53)
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
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_77;
  Wrd12 = Wrd16;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_75;
  Wrd11 = Wrd15;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_73;
  Wrd12 = Wrd16;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_71;
  Wrd12 = Wrd16;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_69;
  Wrd12 = Wrd16;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_37);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_67;
  Wrd12 = Wrd16;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_65;
  Wrd12 = Wrd16;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_43);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_47);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_63;
  Wrd12 = Wrd16;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_49);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_61;
  Wrd11 = Wrd15;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_59;
  Wrd12 = Wrd16;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_55);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd5.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_57;
  Wrd11 = Wrd15;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_57);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58])), (Wrd12.pObj));

DEFLABEL (label_51)
  (Wrd11.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56])), (Wrd13.pObj));

DEFLABEL (label_50)
  (Wrd12.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53])), (Wrd12.pObj));

DEFLABEL (label_49)
  (Wrd11.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50])), (Wrd13.pObj));

DEFLABEL (label_48)
  (Wrd12.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44])), (Wrd13.pObj));

DEFLABEL (label_47)
  (Wrd12.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd13.pObj));

DEFLABEL (label_46)
  (Wrd12.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38])), (Wrd13.pObj));

DEFLABEL (label_45)
  (Wrd12.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd13.pObj));

DEFLABEL (label_44)
  (Wrd12.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd13.pObj));

DEFLABEL (label_43)
  (Wrd12.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd12.pObj));

DEFLABEL (label_42)
  (Wrd11.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd13.pObj));

DEFLABEL (label_41)
  (Wrd12.Obj) = Rvl;
  goto label_76;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_syntax_rules_so_07f86d61f46510fc [11] =
  {
    { "syntax_rules_so_code_1", 32, syntax_rules_so_code_1 },
    { "syntax_rules_so_code_2", 18, syntax_rules_so_code_2 },
    { "syntax_rules_so_code_3", 51, syntax_rules_so_code_3 },
    { "syntax_rules_so_code_4", 24, syntax_rules_so_code_4 },
    { "syntax_rules_so_code_5", 10, syntax_rules_so_code_5 },
    { "syntax_rules_so_code_6", 21, syntax_rules_so_code_6 },
    { "syntax_rules_so_code_7", 8, syntax_rules_so_code_7 },
    { "syntax_rules_so_code_8", 1, syntax_rules_so_code_8 },
    { "syntax_rules_so_code_9", 6, syntax_rules_so_code_9 },
    { "syntax_rules_so_code_10", 18, syntax_rules_so_code_10 },
    { "syntax_rules_so_code_11", 10, syntax_rules_so_code_11 }
  };

int
decl_syntax_rules_so_07f86d61f46510fc (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_syntax_rules_so_07f86d61f46510fc);
  return (0);
}

DECLARE_COMPILED_CODE ("syntax-rules.so", 52, decl_syntax_rules_so_07f86d61f46510fc, syntax_rules_so_07f86d61f46510fc)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_syntax_rules_so_data_07f86d61f46510fc [3603] =
  "\xae\x01\x23\x92\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x0d"
  "\x0d\x0d\xba\x0d\x0d\x0d\x08\x0d\x0d\x0d\x0c\xc1\xbb\xc1\xbc\x0d"
  "\xbd\x0d\xbe\x0d\xbf\x08\x89\xb6\xb7\x0d\xbf\x88\x0d\xbe\x08\x89"
  "\x08\x8b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88\xb3\x0d\x1c"
  "\x0d\x1c\x0d\x1c\xb4\x08\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x83\x88\x0d\x0d\x1b\x1b\x0d\x0d\x1c\x0d\x1b\xb3\xb4\x0d\x0d"
  "\x0d\x08\xb2\xb1\x07\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x84\x88\x1b"
  "\xb4\xb3\x08\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xb4\x0c\x0c\xb3\x1d\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xb2\x0d\xba\x08\xb4\x0c"
  "\xb3\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\xb2\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0d\xb3\xb4\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22"
  "\x29\x21\x9c\x2b\xba\x1d\xb0\x02\x88\xb3\xb4\xb5\xb7\x08\x89\x08"
  "\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1b\x0d\x08\xb3"
  "\xb4\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x02\x88"
  "\x0d\x1b\x08\xb3\xb4\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xbd\x88"
  "\xb5\x1b\x1b\x0d\x0d\x1c\x1b\x0d\x0d\x1c\x1b\x08\x88\x0d\x1b\x0d"
  "\x1c\x1b\x1b\x1b\xb6\x0d\x0d\x1c\x1b\x1b\xb6\x1b\x08\x8a\x0d\x1c"
  "\x1b\xb6\x1b\x1b\x08\x8b\x1b\x1b\x2a\x1b\xb7\x2a\x1b\x1b\x2a\x1b"
  "\xb2\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\xb1"
  "\x2a\xc2\x02\x02\x0d\xc3\x1b\x1b\x2a\x1b\x2a\x28\x0d\x26\x1b\x1b"
  "\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x5b\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f"
  "\x2e\x2f\x73\x79\x6e\x74\x61\x78\x2d\x72\x75\x6c\x65\x73\x2e\x69"
  "\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x03\x69\x66\x15\x65\x72\x2d\x6d"
  "\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72"
  "\x06\x62\x65\x67\x69\x6e\x07\x6c\x61\x6d\x62\x64\x61\x0a\x69\x67"
  "\x6e\x6f\x72\x61\x62\x6c\x65\x12\x69\x6c\x6c\x2d\x66\x6f\x72\x6d"
  "\x65\x64\x2d\x73\x79\x6e\x74\x61\x78\x08\x64\x65\x63\x6c\x61\x72"
  "\x65\x05\x66\x6f\x72\x6d\x07\x72\x65\x6e\x61\x6d\x65\x08\x63\x6f"
  "\x6d\x70\x61\x72\x65\x23\x4b\x65\x79\x77\x6f\x72\x64\x73\x20\x6c"
  "\x69\x73\x74\x20\x63\x6f\x6e\x74\x61\x69\x6e\x73\x20\x64\x75\x70"
  "\x6c\x69\x63\x61\x74\x65\x73\x3a\x04\x63\x61\x72\x04\x63\x64\x72"
  "\x08\x6b\x65\x79\x77\x6f\x72\x64\x02\x2a\x0b\x69\x64\x65\x6e\x74"
  "\x69\x66\x69\x65\x72\x06\x64\x61\x74\x75\x6d\x0b\x65\x78\x70\x72"
  "\x65\x73\x73\x69\x6f\x6e\x04\x0d\x73\x79\x6e\x74\x61\x78\x2d\x63"
  "\x68\x65\x63\x6b\x09\x04\x0d\x73\x79\x6e\x74\x61\x78\x2d\x65\x72"
  "\x72\x6f\x72\x0a\x04\x05\x6d\x65\x6d\x71\x0b\x07\x0e\x70\x61\x72"
  "\x73\x65\x2d\x70\x61\x74\x74\x65\x72\x6e\x0c\x07\x10\x67\x65\x6e"
  "\x65\x72\x61\x74\x65\x2d\x6f\x75\x74\x70\x75\x74\x0d\x09\x0f\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2d\x6d\x61\x74\x63\x68\x0e\x07\x54"
  "\x42\xfd\xff\x03\x53\x40\xfd\xff\x03\x52\x3e\xfd\xff\x03\x51\x3c"
  "\x81\x93\x02\x50\x3a\xfd\xff\x03\x4f\x38\xfd\xff\x03\x4e\x36\xfd"
  "\xff\x03\x4d\x34\xfd\xff\x03\x4c\x32\x81\x87\x02\x4b\x30\x81\x93"
  "\x02\x4a\x2e\xfd\xff\x03\x49\x2c\xfd\xff\x03\x48\x2a\x81\x85\x02"
  "\x47\x28\x81\x93\x02\x46\x26\x81\x85\x02\x45\x24\x81\x85\x02\x44"
  "\x22\x81\x85\x02\x43\x20\x81\x91\x02\x42\x1e\x81\x8f\x02\x41\x1c"
  "\x81\x8d\x02\x40\x1a\x81\x8b\x02\x3f\x18\x81\x91\x02\x3e\x16\x81"
  "\x8f\x02\x3d\x14\x81\x8d\x02\x3c\x12\x81\x8f\x02\x3b\x10\x81\x8d"
  "\x02\x3a\x0e\x81\x89\x02\x39\x0c\x81\x89\x02\x38\x0a\x81\x87\x02"
  "\x37\x08\x81\x87\x02\x36\x06\x81\x87\x02\x35\x04\x85\x08\x41\x60"
  "\x0f\x02\x04\x63\x61\x72\x10\x04\x63\x64\x72\x11\x08\x63\x6f\x6e"
  "\x74\x72\x6f\x6c\x12\x03\x0c\x69\x64\x65\x6e\x74\x69\x66\x69\x65"
  "\x72\x3f\x13\x05\x0e\x7a\x65\x72\x6f\x2d\x6f\x72\x2d\x6d\x6f\x72"
  "\x65\x3f\x14\x04\x0b\x05\x09\x6d\x61\x6b\x65\x2d\x73\x69\x64\x15"
  "\x05\x0e\x61\x74\x2d\x6c\x65\x61\x73\x74\x2d\x6f\x6e\x65\x3f\x16"
  "\x02\x14\x6d\x61\x6b\x65\x2d\x6e\x61\x6d\x65\x2d\x67\x65\x6e\x65"
  "\x72\x61\x74\x6f\x72\x07\x66\x26\xfd\xff\x03\x65\x24\xfd\xff\x03"
  "\x64\x22\xfd\xff\x03\x63\x20\xfd\xff\x03\x62\x1e\xfd\xff\x03\x61"
  "\x1c\xfd\xff\x03\x60\x1a\xfd\xff\x03\x5f\x18\xfd\xff\x03\x5e\x16"
  "\xfd\xff\x03\x5d\x14\xfd\xff\x03\x5c\x12\xfd\xff\x03\x5b\x10\xfd"
  "\xff\x03\x5a\x0e\xfd\xff\x03\x59\x0c\xfd\xff\x03\x58\x0a\xfd\xff"
  "\x03\x57\x08\xfd\xff\x03\x56\x06\xff\xff\x03\x55\x04\x87\x0c\x25"
  "\x3b\x17\x02\x07\x64\x65\x66\x69\x6e\x65\x07\x65\x71\x75\x61\x6c"
  "\x3f\x13\x10\x06\x70\x61\x69\x72\x3f\x06\x71\x75\x6f\x74\x65\x10"
  "\x06\x6e\x75\x6c\x6c\x3f\x11\x05\x74\x65\x6d\x70\x05\x6c\x6f\x6f"
  "\x70\x02\x6c\x03\x13\x05\x14\x04\x0b\x05\x16\x03\x0d\x73\x79\x6e"
  "\x74\x61\x78\x2d\x71\x75\x6f\x74\x65\x11\x06\x99\x01\x68\xfd\xff"
  "\x03\x98\x01\x66\xfd\xff\x03\x97\x01\x64\xfd\xff\x03\x96\x01\x62"
  "\xfd\xff\x03\x95\x01\x60\xfd\xff\x03\x94\x01\x5e\xfd\xff\x03\x93"
  "\x01\x5c\x81\x8f\x02\x92\x01\x5a\x81\x89\x02\x91\x01\x58\xfd\xff"
  "\x03\x90\x01\x56\xfd\xff\x03\x8f\x01\x54\xfd\xff\x03\x8e\x01\x52"
  "\xfd\xff\x03\x8d\x01\x50\xfd\xff\x03\x8c\x01\x4e\xfd\xff\x03\x8b"
  "\x01\x4c\x81\x8f\x02\x8a\x01\x4a\x81\x89\x02\x89\x01\x48\xfd\xff"
  "\x03\x88\x01\x46\xff\xff\x03\x87\x01\x44\x81\x89\x02\x86\x01\x42"
  "\xfd\xff\x03\x85\x01\x40\x81\x95\x02\x84\x01\x3e\x81\x93\x02\x83"
  "\x01\x3c\x81\x91\x02\x82\x01\x3a\x81\x8f\x02\x81\x01\x38\x81\x87"
  "\x02\x80\x01\x36\xfd\xff\x03\x7f\x34\x81\x87\x02\x7e\x32\x81\x87"
  "\x02\x7d\x30\xfd\xff\x03\x7c\x2e\x81\x91\x02\x7b\x2c\x81\x8f\x02"
  "\x7a\x2a\x81\x8d\x02\x79\x28\x81\x8b\x02\x78\x26\x81\x87\x02\x77"
  "\x24\x81\x87\x02\x76\x22\x81\x87\x02\x75\x20\x81\x87\x02\x74\x1e"
  "\x81\x8b\x02\x73\x1c\x81\x87\x02\x72\x1a\x81\x87\x02\x71\x18\x81"
  "\x87\x02\x70\x16\x81\x87\x02\x6f\x14\x81\x87\x02\x6e\x12\x81\x89"
  "\x02\x6d\x10\x81\x87\x02\x6c\x0e\x81\x87\x02\x6b\x0c\x81\x87\x02"
  "\x6a\x0a\x81\x87\x02\x69\x08\x81\x87\x02\x68\x06\x81\x87\x02\x67"
  "\x04\x89\x10\x67\x86\x01\x02\x10\x03\x13\x05\x14\x03\x09\x73\x69"
  "\x64\x2d\x6e\x61\x6d\x65\x18\x03\x11\x04\x0d\x61\x64\x64\x2d\x63"
  "\x6f\x6e\x74\x72\x6f\x6c\x21\x19\x05\x16\x03\x0f\x73\x69\x64\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x1a\x03\x0e\x6d\x61\x6b"
  "\x65\x2d\x65\x6c\x6c\x69\x70\x73\x69\x73\x1b\x06\x11\x6f\x70\x74"
  "\x69\x6d\x69\x7a\x65\x64\x2d\x61\x70\x70\x65\x6e\x64\x1c\x05\x12"
  "\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x65\x6c\x6c\x69\x70\x73\x69"
  "\x73\x1d\x06\x0f\x6f\x70\x74\x69\x6d\x69\x7a\x65\x64\x2d\x63\x6f"
  "\x6e\x73\x1e\x0c\xb1\x01\x32\xfd\xff\x03\xb0\x01\x30\x81\x87\x02"
  "\xaf\x01\x2e\xfd\xff\x03\xae\x01\x2c\xfd\xff\x03\xad\x01\x2a\xfd"
  "\xff\x03\xac\x01\x28\x81\x8d\x02\xab\x01\x26\xfd\xff\x03\xaa\x01"
  "\x24\xfd\xff\x03\xa9\x01\x22\xfd\xff\x03\xa8\x01\x20\xfd\xff\x03"
  "\xa7\x01\x1e\xfd\xff\x03\xa6\x01\x1c\xfd\xff\x03\xa5\x01\x1a\xfd"
  "\xff\x03\xa4\x01\x18\xfd\xff\x03\xa3\x01\x16\xfd\xff\x03\xa2\x01"
  "\x14\xfd\xff\x03\xa1\x01\x12\xfd\xff\x03\xa0\x01\x10\x81\x85\x02"
  "\x9f\x01\x0e\x81\x83\x02\x9e\x01\x0c\x81\x83\x02\x9d\x01\x0a\x81"
  "\x83\x02\x9c\x01\x08\xfd\xff\x03\x9b\x01\x06\xff\xff\x03\x9a\x01"
  "\x04\x87\x0c\x31\x4f\x1f\x02\x25\x69\x6c\x6c\x65\x67\x61\x6c\x20"
  "\x63\x6f\x6e\x74\x72\x6f\x6c\x2f\x65\x6c\x6c\x69\x70\x73\x69\x73"
  "\x20\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x1f\x4d\x69\x73"
  "\x73\x69\x6e\x67\x20\x65\x6c\x6c\x69\x70\x73\x69\x73\x20\x69\x6e"
  "\x20\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x2e\x02\x03\x0c\x73\x69"
  "\x64\x2d\x63\x6f\x6e\x74\x72\x6f\x6c\x20\x03\x0e\x65\x6c\x6c\x69"
  "\x70\x73\x69\x73\x2d\x73\x69\x64\x73\x21\x04\x0a\x04\x13\x73\x65"
  "\x74\x2d\x65\x6c\x6c\x69\x70\x73\x69\x73\x2d\x73\x69\x64\x73\x21"
  "\x22\x05\x06\x65\x72\x72\x6f\x72\x04\x0b\x07\xbb\x01\x16\x81\x89"
  "\x02\xba\x01\x14\x81\x87\x02\xb9\x01\x12\x81\x87\x02\xb8\x01\x10"
  "\x81\x83\x02\xb7\x01\x0e\x81\x83\x02\xb6\x01\x0c\x81\x83\x02\xb5"
  "\x01\x0a\x81\x8b\x02\xb4\x01\x08\x81\x85\x02\xb3\x01\x06\x81\x85"
  "\x02\xb2\x01\x04\x84\x06\x15\x2a\x0b\x02\x04\x6d\x61\x70\x1f\x4d"
  "\x69\x73\x73\x69\x6e\x67\x20\x65\x6c\x6c\x69\x70\x73\x69\x73\x20"
  "\x69\x6e\x20\x65\x78\x70\x61\x6e\x73\x69\x6f\x6e\x2e\x1a\x18\x03"
  "\x03\x21\x03\x1a\x04\x0a\x03\x18\x04\x06\xd0\x01\x2c\x81\x8f\x02"
  "\xcf\x01\x2a\x81\x91\x02\xce\x01\x28\x81\x8f\x02\xcd\x01\x26\x81"
  "\x8f\x02\xcc\x01\x24\x81\x93\x02\xcb\x01\x22\x81\x8d\x02\xca\x01"
  "\x20\x81\x91\x02\xc9\x01\x1e\x81\x8d\x02\xc8\x01\x1c\x81\x8d\x02"
  "\xc7\x01\x1a\x81\x8d\x02\xc6\x01\x18\x81\x8d\x02\xc5\x01\x16\x81"
  "\x8d\x02\xc4\x01\x14\x81\x8d\x02\xc3\x01\x12\x81\x8d\x02\xc2\x01"
  "\x10\x81\x8d\x02\xc1\x01\x0e\x81\x8b\x02\xc0\x01\x0c\x81\x8d\x02"
  "\xbf\x01\x0a\x81\x89\x02\xbe\x01\x08\x81\x8b\x02\xbd\x01\x06\x81"
  "\x87\x02\xbc\x01\x04\x85\x08\x2b\x42\x0a\x02\x08\x04\x2e\x2e\x2e"
  "\x03\x13\x02\xd8\x01\x12\x81\x89\x02\xd7\x01\x10\x81\x89\x02\xd6"
  "\x01\x0e\x81\x89\x02\xd5\x01\x0c\x81\x87\x02\xd4\x01\x0a\x81\x89"
  "\x02\xd3\x01\x08\x81\x89\x02\xd2\x01\x06\x81\x87\x02\xd1\x01\x04"
  "\x85\x08\x11\x1a\x13\x02\x09\xd9\x01\x04\x85\x08\x03\x02\x0a\x03"
  "\x12\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x3e\x6b\x65\x79\x77\x6f"
  "\x72\x64\x04\x09\x03\x10\x6f\x75\x74\x70\x75\x74\x2f\x63\x6f\x6e"
  "\x73\x74\x61\x6e\x74\x04\xdf\x01\x0e\x81\x85\x02\xde\x01\x0c\x81"
  "\x85\x02\xdd\x01\x0a\x81\x85\x02\xdc\x01\x08\x84\x06\xdb\x01\x06"
  "\x81\x83\x02\xda\x01\x04\x83\x04\x0d\x1b\x09\x02\x0b\x05\x63\x6f"
  "\x6e\x73\x10\x05\x6c\x69\x73\x74\x03\x06\x6c\x69\x73\x74\x3f\x02"
  "\xf1\x01\x26\x81\x89\x02\xf0\x01\x24\x81\x8d\x02\xef\x01\x22\x81"
  "\x8b\x02\xee\x01\x20\x81\x8d\x02\xed\x01\x1e\x81\x8b\x02\xec\x01"
  "\x1c\x81\x89\x02\xeb\x01\x1a\x86\x0a\xea\x01\x18\x81\x8b\x02\xe9"
  "\x01\x16\x81\x89\x02\xe8\x01\x14\x81\x89\x02\xe7\x01\x12\x81\x89"
  "\x02\xe6\x01\x10\x81\x89\x02\xe5\x01\x0e\x81\x89\x02\xe4\x01\x0c"
  "\x81\x89\x02\xe3\x01\x0a\x81\x89\x02\xe2\x01\x08\x81\x8b\x02\xe1"
  "\x01\x06\x81\x89\x02\xe0\x01\x04\x81\x89\x02\x25\x31\x02\x0c\x07"
  "\x61\x70\x70\x65\x6e\x64\x10\xfb\x01\x16\x81\x8d\x02\xfa\x01\x14"
  "\x81\x8b\x02\xf9\x01\x12\x81\x89\x02\xf8\x01\x10\x86\x0a\xf7\x01"
  "\x0e\x81\x89\x02\xf6\x01\x0c\x81\x89\x02\xf5\x01\x0a\x81\x89\x02"
  "\xf4\x01\x08\x81\x89\x02\xf3\x01\x06\x81\x89\x02\xf2\x01\x04\x81"
  "\x89\x02\x15\x1d\x10\x0c\x21\x22\x0a\x65\x6c\x6c\x69\x70\x73\x69"
  "\x73\x3f\x05\x73\x69\x64\x73\x22\x1b\x1b\x73\x65\x74\x2d\x73\x69"
  "\x64\x2d\x6f\x75\x74\x70\x75\x74\x2d\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x21\x0b\x3c\x65\x6c\x6c\x69\x70\x73\x69\x73\x3e\x21"
  "\x22\x16\x73\x69\x64\x2d\x6f\x75\x74\x70\x75\x74\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x20\x12\x6f\x75\x74\x70\x75\x74\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x22\x1a\x12\x18\x05\x73"
  "\x69\x64\x3f\x05\x6e\x61\x6d\x65\x20\x15\x20\x12\x06\x3c\x73\x69"
  "\x64\x3e\x1b\x20\x12\x22\x1c\x10\x10\x1e\x1a\x11\x09\x04\x16\x04"
  "\x14\x13\x04\x1d\x0a\x04\x19\x0b\x04\x0d\x1f\x04\x0e\x04\x1a\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x73\x65\x74\x2d\x74\x79\x70\x65\x33\x10\x0d\x73\x79\x6e\x74\x61"
  "\x78\x2d\x72\x75\x6c\x65\x73\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0c\x17\x04\x0f\x04\x04\x1f\x65"
  "\x72\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72"
  "\x6d\x65\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x02\x1b\x21"
  "\x03\x04\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x04\x13\x72\x65\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73"
  "\x74\x72\x75\x63\x74\x6f\x72\x03\x11\x72\x65\x63\x6f\x72\x64\x2d"
  "\x70\x72\x65\x64\x69\x63\x61\x74\x65\x04\x10\x72\x65\x63\x6f\x72"
  "\x64\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x04\x10\x72\x65\x63\x6f"
  "\x72\x64\x2d\x6d\x6f\x64\x69\x66\x69\x65\x72\x06\x34\x6a\x80\x80"
  "\x04\x33\x68\x81\x81\x02\x32\x66\x81\x81\x02\x31\x64\x81\x87\x02"
  "\x30\x62\x81\x85\x02\x2f\x60\x81\x8b\x02\x2e\x5e\x81\x83\x02\x2d"
  "\x5c\x81\x85\x02\x2c\x5a\x81\x89\x02\x2b\x58\x81\x83\x02\x2a\x56"
  "\x81\x85\x02\x29\x54\x81\x87\x02\x28\x52\x81\x83\x02\x27\x50\x81"
  "\x85\x02\x26\x4e\x81\x89\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x85"
  "\x02\x23\x48\x81\x83\x02\x22\x46\x81\x85\x02\x21\x44\x81\x89\x02"
  "\x20\x42\x81\x83\x02\x1f\x40\x81\x85\x02\x1e\x3e\x81\x89\x02\x1d"
  "\x3c\x81\x83\x02\x1c\x3a\x81\x85\x02\x1b\x38\x81\x89\x02\x1a\x36"
  "\x81\x83\x02\x19\x34\x81\x85\x02\x18\x32\x81\x89\x02\x17\x30\x81"
  "\x83\x02\x16\x2e\x81\x85\x02\x15\x2c\x81\x89\x02\x14\x2a\x81\x83"
  "\x02\x13\x28\x81\x85\x02\x12\x26\x81\x87\x02\x11\x24\x81\x83\x02"
  "\x10\x22\x81\x85\x02\x0f\x20\x81\x89\x02\x0e\x1e\x81\x83\x02\x0d"
  "\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16"
  "\x81\x83\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81"
  "\x83\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x83"
  "\x02\x03\x08\x81\x87\x02\x02\x06\x81\x85\x02\x01\x04\x81\x83\x02"
  "\x69\xae\x01";

SCHEME_OBJECT *
syntax_rules_so_data_07f86d61f46510fc (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_syntax_rules_so_data_07f86d61f46510fc [0]))), (sizeof (prog_syntax_rules_so_data_07f86d61f46510fc)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_61]));
}

DECLARE_COMPILED_DATA_NS ("syntax-rules.so", syntax_rules_so_data_07f86d61f46510fc)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("syntax-rules.so", "d06fb4facfd09dfa")
