/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:16-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_8 7
#define LABEL_1_10 9
#define LABEL_1_11 11
#define LABEL_1_12 13
#define LABEL_1_13 15
#define ENVIRONMENT_LABEL_1_3 32
#define DEBUGGING_LABEL_1_2 31
#define OBJECT_1_5 30
#define OBJECT_1_4 29
#define OBJECT_1_3 28
#define OBJECT_1_2 27
#define OBJECT_1_1 26
#define OBJECT_1_0 25
#define EXECUTE_CACHE_1_14 17
#define EXECUTE_CACHE_1_9 19
#define EXECUTE_CACHE_1_7 21
#define FREE_REFERENCE_1_0 24
#define FREE_REFERENCES_LABEL_1_0 16
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
varind_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd47;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_variable_indirectionsB_8;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_16;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto lambda_6;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_1_12);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_variable_indirectionsB_15)
DEFLABEL (initialize_variable_indirectionsB_8)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (lambda_17)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_1_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_27;
  Wrd5 = Wrd9;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_25;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_25;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_24)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_19;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_1_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_23;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd38.Lng))))
    goto label_23;
  (Wrd30.Obj) = ((Wrd36.pObj) [16]);

DEFLABEL (label_22)
  if ((Wrd30.Obj) == (current_block [OBJECT_1_3]))
    goto label_18;
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_21;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd55.Lng))))
    goto label_21;
  (Wrd47.Obj) = ((Wrd53.pObj) [16]);

DEFLABEL (label_20)
  if ((Wrd47.Obj) == (current_block [OBJECT_1_4]))
    goto label_18;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (label_21)
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.Obj) = (current_block [OBJECT_1_2]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_13)
  (Wrd47.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_1_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_12)
  (Wrd30.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_1_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_11)
  (Wrd11.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_10])), (Wrd6.pObj));

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_10 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_13 17
#define LABEL_2_14 19
#define LABEL_2_18 21
#define LABEL_2_19 23
#define LABEL_2_20 25
#define LABEL_2_22 27
#define LABEL_2_24 29
#define LABEL_2_16 31
#define LABEL_2_25 33
#define LABEL_2_26 35
#define LABEL_2_27 37
#define LABEL_2_28 39
#define LABEL_2_29 41
#define LABEL_2_30 43
#define LABEL_2_31 45
#define LABEL_2_32 47
#define LABEL_2_33 49
#define LABEL_2_35 51
#define LABEL_2_36 53
#define LABEL_2_34 55
#define LABEL_2_38 57
#define LABEL_2_39 59
#define LABEL_2_40 61
#define LABEL_2_41 63
#define LABEL_2_42 65
#define LABEL_2_43 67
#define ENVIRONMENT_LABEL_2_3 101
#define DEBUGGING_LABEL_2_2 100
#define OBJECT_2_14 99
#define OBJECT_2_13 98
#define OBJECT_2_12 97
#define OBJECT_2_11 96
#define OBJECT_2_10 95
#define OBJECT_2_9 94
#define OBJECT_2_8 93
#define OBJECT_2_7 92
#define OBJECT_2_6 91
#define OBJECT_2_5 90
#define OBJECT_2_4 89
#define OBJECT_2_3 88
#define OBJECT_2_2 87
#define OBJECT_2_1 86
#define OBJECT_2_0 85
#define EXECUTE_CACHE_2_37 69
#define EXECUTE_CACHE_2_23 71
#define EXECUTE_CACHE_2_21 73
#define EXECUTE_CACHE_2_17 75
#define EXECUTE_CACHE_2_15 77
#define EXECUTE_CACHE_2_9 79
#define EXECUTE_CACHE_2_6 81
#define FREE_REFERENCE_2_0 84
#define FREE_REFERENCES_LABEL_2_0 68
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
varind_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd85;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd82;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd106;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd79;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd149;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd146;
  machine_word Wrd179;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd142;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd123;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd44;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd182;
  machine_word Wrd184;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd196;
  machine_word Wrd218;
  machine_word Wrd220;
  machine_word Wrd221;
  machine_word Wrd213;
  machine_word Wrd212;
  machine_word Wrd209;
  machine_word Wrd208;
  machine_word Wrd199;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd46;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd11;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_2_4);
      goto initialize_variable_indirectionB_53;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_55;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto label_56;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_59;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_57;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto label_58;

    case 8:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_2_18);
      goto continuation_26;

    case 10:
      current_block = (Rpc - LABEL_2_19);
      goto label_72;

    case 11:
      current_block = (Rpc - LABEL_2_20);
      goto continuation_24;

    case 12:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_23;

    case 13:
      current_block = (Rpc - LABEL_2_24);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_2_25);
      goto label_60;

    case 16:
      current_block = (Rpc - LABEL_2_26);
      goto label_61;

    case 17:
      current_block = (Rpc - LABEL_2_27);
      goto label_62;

    case 18:
      current_block = (Rpc - LABEL_2_28);
      goto label_63;

    case 19:
      current_block = (Rpc - LABEL_2_29);
      goto label_67;

    case 20:
      current_block = (Rpc - LABEL_2_30);
      goto label_69;

    case 21:
      current_block = (Rpc - LABEL_2_31);
      goto label_68;

    case 22:
      current_block = (Rpc - LABEL_2_32);
      goto label_64;

    case 23:
      current_block = (Rpc - LABEL_2_33);
      goto label_66;

    case 24:
      current_block = (Rpc - LABEL_2_35);
      goto label_65;

    case 25:
      current_block = (Rpc - LABEL_2_36);
      goto continuation_34;

    case 26:
      current_block = (Rpc - LABEL_2_34);
      goto continuation_33;

    case 27:
      current_block = (Rpc - LABEL_2_38);
      goto label_70;

    case 28:
      current_block = (Rpc - LABEL_2_39);
      goto loop_47;

    case 29:
      current_block = (Rpc - LABEL_2_40);
      goto label_71;

    case 30:
      current_block = (Rpc - LABEL_2_41);
      goto continuation_40;

    case 31:
      current_block = (Rpc - LABEL_2_42);
      goto label_74;

    case 32:
      current_block = (Rpc - LABEL_2_43);
      goto label_73;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_variable_indirectionB_76)
DEFLABEL (initialize_variable_indirectionB_53)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_79;

DEFLABEL (label_78)
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_79)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_127;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd22.Lng))))
    goto label_127;
  (Wrd11.Obj) = ((Wrd20.pObj) [24]);
  if (! ((Wrd11.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_78;

DEFLABEL (label_126)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_125;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd13.Lng))))
    goto label_125;
  (Wrd7.Obj) = ((Wrd11.pObj) [15]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_124)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_123;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd71.Lng))))
    goto label_123;
  (Wrd23.Obj) = ((Wrd69.pObj) [10]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_81;

DEFLABEL (label_80)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_81)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_122;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd33.Lng))))
    goto label_122;
  (Wrd25.Obj) = ((Wrd31.pObj) [17]);

DEFLABEL (label_121)
  if (! ((Wrd25.Obj) == (current_block [OBJECT_2_6])))
    goto label_80;
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_120;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd57.Lng))))
    goto label_120;
  (Wrd46.Obj) = ((Wrd55.pObj) [21]);
  if (! ((Wrd46.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_80;

DEFLABEL (label_119)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_2_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_83;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_83)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_118;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd20.Lng))))
    goto label_118;
  (Wrd14.Obj) = ((Wrd18.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_117)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (current_block [OBJECT_2_6]))
    goto label_112;
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_116;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_115)
  if ((Wrd30.Obj) == (current_block [OBJECT_2_6]))
    goto label_113;

DEFLABEL (label_112)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_111)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == ((SCHEME_OBJECT) 0))
    goto label_98;
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd48.Obj) = ((Wrd45.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_110;
  Wrd44 = Wrd48;

DEFLABEL (label_109)
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 10))
    goto label_108;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd58.Lng))))
    goto label_108;
  (Wrd50.Obj) = ((Wrd56.pObj) [1]);

DEFLABEL (label_107)
  (Wrd66.Obj) = (* (Rsp++));
  if ((Wrd50.Obj) == (Wrd66.Obj))
    goto label_99;

DEFLABEL (label_98)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_97)
  (Wrd69.Obj) = (Rsp [0]);
  if (! ((Wrd69.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_84;
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_84)
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_96;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (* (--Rsp)) = (Wrd73.Obj);

DEFLABEL (label_95)
  (Wrd113.Obj) = (Rsp [3]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 10))
    goto label_94;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd112.Lng))))
    goto label_94;
  (Wrd106.Obj) = (Rsp [1]);
  ((Wrd110.pObj) [24]) = (Wrd106.Obj);

DEFLABEL (label_93)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_34]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (Wrd92.Obj) = (Rsp [3]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 10))
    goto label_92;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd91.Lng))))
    goto label_92;
  (Wrd85.Obj) = ((Wrd89.pObj) [11]);
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_91)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_36]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd102.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd103.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd103.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_37]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_2_36);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_88;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_87)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_86;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd13.Lng))))
    goto label_86;
  (Wrd7.Obj) = ((Wrd11.pObj) [15]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_85)
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto loop_47;

DEFLABEL (label_86)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_38]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd25.Obj) = (current_block [OBJECT_2_13]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Rsp [2]) = (Wrd27.Obj);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd43.uLng) == 10)
    goto label_90;

DEFLABEL (label_89)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_12]), 3);

DEFLABEL (label_90)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd41.Lng))))
    goto label_89;
  ((Wrd39.pObj) [11]) = (Wrd27.Obj);
  Rsp = (& (Rsp [4]));
  goto label_87;

DEFLABEL (label_92)
  (Wrd94.Obj) = (Rsp [3]);
  (Wrd95.Obj) = (current_block [OBJECT_2_13]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_35]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd115.Obj) = (Rsp [3]);
  (Wrd116.Obj) = (current_block [OBJECT_2_0]);
  (Wrd117.Obj) = (Rsp [1]);
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_33]))));
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_12]), 3);

DEFLABEL (label_66)
  goto label_93;

DEFLABEL (label_96)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_10]), 1);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_99)
  (Wrd132.Obj) = (Rsp [0]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if (! ((Wrd133.uLng) == 10))
    goto label_106;
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd132.Obj));
  (Wrd130.Obj) = ((Wrd129.pObj) [0]);
  (Wrd131.Lng) = (FIXNUM_TO_LONG (Wrd130.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd131.Lng))))
    goto label_106;
  (Wrd123.Obj) = ((Wrd129.pObj) [17]);

DEFLABEL (label_105)
  if (! ((Wrd123.Obj) == (current_block [OBJECT_2_6])))
    goto label_98;
  (Wrd173.Obj) = (Rsp [0]);
  (Wrd174.uLng) = (OBJECT_TYPE (Wrd173.Obj));
  if (! ((Wrd174.uLng) == 10))
    goto label_104;
  (Wrd170.pObj) = (OBJECT_ADDRESS (Wrd173.Obj));
  (Wrd171.Obj) = ((Wrd170.pObj) [0]);
  (Wrd172.Lng) = (FIXNUM_TO_LONG (Wrd171.Obj));
  if (! (((unsigned long) 20L) < ((unsigned long) (Wrd172.Lng))))
    goto label_104;
  (Wrd142.Obj) = ((Wrd170.pObj) [21]);
  if (! ((Wrd142.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_98;

DEFLABEL (label_103)
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd146.Obj);
  (Wrd156.Obj) = (Rsp [1]);
  (Wrd157.uLng) = (OBJECT_TYPE (Wrd156.Obj));
  if (! ((Wrd157.uLng) == 10))
    goto label_102;
  (Wrd153.pObj) = (OBJECT_ADDRESS (Wrd156.Obj));
  (Wrd154.Obj) = ((Wrd153.pObj) [0]);
  (Wrd155.Lng) = (FIXNUM_TO_LONG (Wrd154.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd155.Lng))))
    goto label_102;
  (Wrd149.Obj) = ((Wrd153.pObj) [15]);
  (* (--Rsp)) = (Wrd149.Obj);

DEFLABEL (label_101)
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd165.Obj);
  (Wrd166.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd166.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_17]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_2_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_100;
  (Wrd196.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd196.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_21]));

DEFLABEL (label_100)
  Rsp = (& (Rsp [2]));
  goto label_98;

DEFLABEL (label_102)
  (Wrd158.Obj) = (Rsp [1]);
  (Wrd159.Obj) = (current_block [OBJECT_2_3]);
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_31]))));
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd159.Obj);
  (* (--Rsp)) = (Wrd158.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd175.Obj) = (Rsp [0]);
  (Wrd176.Obj) = (current_block [OBJECT_2_7]);
  (Wrd179.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd179.Obj);
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd175.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_69)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_103;
  goto label_98;

DEFLABEL (label_106)
  (Wrd134.Obj) = (Rsp [0]);
  (Wrd135.Obj) = (current_block [OBJECT_2_5]);
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_67)
  (Wrd123.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (current_block [OBJECT_2_11]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_63)
  (Wrd50.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_27])), (Wrd45.pObj));

DEFLABEL (label_62)
  (Wrd44.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_113)
  (Wrd185.Obj) = (Rsp [0]);
  (Wrd186.uLng) = (OBJECT_TYPE (Wrd185.Obj));
  if ((Wrd186.uLng) == 1)
    goto label_114;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_10]), 1);

DEFLABEL (label_114)
  (Wrd184.pObj) = (OBJECT_ADDRESS (Wrd185.Obj));
  (Wrd182.Obj) = ((Wrd184.pObj) [0]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd182.Obj);
  goto label_111;

DEFLABEL (label_116)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_9]), 1);

DEFLABEL (label_61)
  (Wrd30.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_2_8]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.Obj) = (current_block [OBJECT_2_7]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_58)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_119;
  goto label_80;

DEFLABEL (label_122)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_2_5]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_57)
  (Wrd25.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_123)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.Obj) = (current_block [OBJECT_2_4]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_59)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_81;
  goto label_80;

DEFLABEL (label_125)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (current_block [OBJECT_2_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_55)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_126;
  goto label_78;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_2_34);
  goto label_87;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_2_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_98;
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd191.Obj);
  (Wrd192.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd192.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_2_18);
  (Wrd206.Obj) = (Rsp [0]);
  (Wrd207.uLng) = (OBJECT_TYPE (Wrd206.Obj));
  if (! ((Wrd207.uLng) == 10))
    goto label_131;
  (Wrd203.pObj) = (OBJECT_ADDRESS (Wrd206.Obj));
  (Wrd204.Obj) = ((Wrd203.pObj) [0]);
  (Wrd205.Lng) = (FIXNUM_TO_LONG (Wrd204.Obj));
  if (! (((unsigned long) 23L) < ((unsigned long) (Wrd205.Lng))))
    goto label_131;
  (Wrd199.Obj) = ((Wrd203.pObj) [24]);
  (* (--Rsp)) = (Wrd199.Obj);

DEFLABEL (label_130)
  (Wrd213.Obj) = (Rsp [0]);
  if ((Wrd213.Obj) == ((SCHEME_OBJECT) 0))
    goto label_129;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd213.Obj);
  goto label_128;

DEFLABEL (label_129)
  (Wrd221.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd221.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd220.pObj) = (& (Rhp [-2]));
  (Wrd218.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd220.pObj)));
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd218.Obj);

DEFLABEL (label_128)
  goto label_97;

DEFLABEL (label_131)
  (Wrd208.Obj) = (Rsp [0]);
  (Wrd209.Obj) = (current_block [OBJECT_2_0]);
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd209.Obj);
  (* (--Rsp)) = (Wrd208.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_130;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_24);
  (* (--Rsp)) = Rvl;
  goto label_111;

DEFLABEL (loop_77)
DEFLABEL (loop_47)
  INTERRUPT_CHECK (26, LABEL_2_39);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_139;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd13.Lng))))
    goto label_139;
  (Wrd7.Obj) = ((Wrd11.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_138)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_41]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_37]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_2_41);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_132;
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_132)
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_137;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd42.Lng))))
    goto label_137;
  ((Wrd40.pObj) [10]) = (Wrd9.Obj);

DEFLABEL (label_136)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_135;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd22.Lng))))
    goto label_135;
  (Wrd14.Obj) = ((Wrd20.pObj) [4]);

DEFLABEL (label_134)
  (Rsp [1]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (Rsp [1]);
  if ((Wrd30.Obj) == (Wrd31.Obj))
    goto label_133;
  goto loop_47;

DEFLABEL (label_133)
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_135)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_2_14]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_43]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_73)
  (Wrd14.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_137)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.Obj) = (current_block [OBJECT_2_4]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_42]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_12]), 3);

DEFLABEL (label_74)
  goto label_136;

DEFLABEL (label_139)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_40]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_138;

INVOKE_INTERFACE_TARGET_1
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
varind_so_3dc7a8316536d629 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2
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

static const struct liarc_code_S arr_decl_varind_so_3dc7a8316536d629 [2] =
  {
    { "varind_so_code_1", 7, varind_so_code_1 },
    { "varind_so_code_2", 33, varind_so_code_2 }
  };

int
decl_varind_so_3dc7a8316536d629 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_varind_so_3dc7a8316536d629);
  return (0);
}

DECLARE_COMPILED_CODE ("varind.so", 3, decl_varind_so_3dc7a8316536d629, varind_so_3dc7a8316536d629)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_varind_so_data_3dc7a8316536d629 [801] =
  "\x6a\x06\xae\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x0d\x0d\x02"
  "\xc2\xb9\x80\x0d\xba\x24\x28\x0d\x28\x0d\x28\x0d\xbb\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc"
  "\x1d\xb0\x82\x88\x83\x02\xc3\x80\xc1\xc1\x84\x02\x08\x02\x02\x02"
  "\x1d\xb1\x02\xb2\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\xb3\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x99\xb9\x88\xb1\xb2\x2a"
  "\xb4\x2a\x99\xb3\x0d\x99\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x5a\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x66\x67\x6f\x70"
  "\x74\x2f\x76\x61\x72\x69\x6e\x64\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x02\x09\x23\x5b\x76\x61\x6c\x75\x65\x5d\x10\x23\x5b\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x5d\x10\x0b\x76\x65"
  "\x63\x74\x6f\x72\x2d\x72\x65\x66\x0d\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x2d\x74\x61\x67\x02\x03\x16\x77\x69\x74\x68\x2d\x6e\x65\x77"
  "\x2d\x6c\x76\x61\x6c\x75\x65\x2d\x6d\x61\x72\x6b\x73\x04\x09\x66"
  "\x6f\x72\x2d\x65\x61\x63\x68\x03\x21\x69\x6e\x69\x74\x69\x61\x6c"
  "\x69\x7a\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x69\x6e\x64"
  "\x69\x72\x65\x63\x74\x69\x6f\x6e\x21\x04\x0a\x10\x81\x83\x02\x09"
  "\x0e\x81\x83\x02\x08\x0c\x81\x85\x02\x07\x0a\x81\x83\x02\x06\x08"
  "\x83\x04\x05\x06\x81\x83\x02\x04\x04\x83\x04\x0f\x21\x02\x0b\x0c"
  "\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x04\x63\x61\x72\x04"
  "\x63\x64\x72\x15\x11\x0a\x0f\x02\x18\x02\x03\x0f\x6c\x76\x61\x6c"
  "\x75\x65\x2d\x6d\x61\x72\x6b\x65\x64\x3f\x03\x0d\x6c\x76\x61\x6c"
  "\x75\x65\x2d\x6d\x61\x72\x6b\x21\x03\x0f\x6c\x76\x61\x6c\x75\x65"
  "\x2f\x73\x6f\x75\x72\x63\x65\x3f\x03\x12\x62\x6c\x6f\x63\x6b\x2d"
  "\x70\x61\x73\x73\x65\x64\x2d\x6f\x75\x74\x3f\x04\x10\x62\x6c\x6f"
  "\x63\x6b\x2d\x61\x6e\x63\x65\x73\x74\x6f\x72\x3f\x03\x04\x05\x6d"
  "\x65\x6d\x71\x08\x2b\x44\x81\x8f\x02\x2a\x42\x81\x8f\x02\x29\x40"
  "\x81\x8f\x02\x28\x3e\x81\x8d\x02\x27\x3c\x81\x8d\x02\x26\x3a\x81"
  "\x89\x02\x25\x38\x81\x89\x02\x24\x36\x81\x83\x02\x23\x34\x81\x8b"
  "\x02\x22\x32\x81\x89\x02\x21\x30\x81\x87\x02\x20\x2e\x81\x89\x02"
  "\x1f\x2c\x81\x87\x02\x1e\x2a\x81\x87\x02\x1d\x28\x81\x89\x02\x1c"
  "\x26\x81\x87\x02\x1b\x24\x81\x83\x02\x1a\x22\x81\x87\x02\x19\x20"
  "\x81\x85\x02\x18\x1e\x81\x85\x02\x17\x1c\x81\x87\x02\x16\x1a\x81"
  "\x83\x02\x15\x18\x81\x87\x02\x14\x16\x81\x87\x02\x13\x14\x81\x85"
  "\x02\x12\x12\x81\x85\x02\x11\x10\x81\x85\x02\x10\x0e\x81\x85\x02"
  "\x0f\x0c\x81\x83\x02\x0e\x0a\x81\x83\x02\x0d\x08\x81\x83\x02\x0c"
  "\x06\x81\x83\x02\x0b\x04\x83\x04\x43\x66\x04\x04\x22\x69\x6e\x69"
  "\x74\x69\x61\x6c\x69\x7a\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x2d\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x73\x21\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02"
  "\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07"
  "\x11";

SCHEME_OBJECT *
varind_so_data_3dc7a8316536d629 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_varind_so_data_3dc7a8316536d629 [0]))), (sizeof (prog_varind_so_data_3dc7a8316536d629)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("varind.so", varind_so_data_3dc7a8316536d629)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("varind.so", "fcca25f699bb3365")
