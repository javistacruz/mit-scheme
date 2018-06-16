/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:49-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_7 5
#define LABEL_1_8 7
#define LABEL_1_5 9
#define ENVIRONMENT_LABEL_1_3 20
#define DEBUGGING_LABEL_1_2 19
#define EXECUTE_CACHE_1_11 11
#define EXECUTE_CACHE_1_10 13
#define EXECUTE_CACHE_1_9 15
#define EXECUTE_CACHE_1_6 17
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
qsort_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_1_4);
      goto quick_sort_4;

    case 1:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (quick_sort_7)
DEFLABEL (quick_sort_4)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_8;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (label_8)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_5 3
#define LABEL_2_4 5
#define LABEL_2_7 7
#define LABEL_2_6 9
#define LABEL_2_9 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_13 17
#define LABEL_2_14 19
#define LABEL_2_16 21
#define LABEL_2_17 23
#define LABEL_2_18 25
#define LABEL_2_10 27
#define LABEL_2_19 29
#define LABEL_2_20 31
#define LABEL_2_21 33
#define LABEL_2_15 35
#define LABEL_2_22 37
#define LABEL_2_23 39
#define LABEL_2_24 41
#define LABEL_2_25 43
#define LABEL_2_26 45
#define LABEL_2_27 47
#define LABEL_2_28 49
#define LABEL_2_29 51
#define LABEL_2_30 53
#define LABEL_2_32 55
#define LABEL_2_33 57
#define LABEL_2_34 59
#define LABEL_2_35 61
#define LABEL_2_31 63
#define LABEL_2_36 65
#define ENVIRONMENT_LABEL_2_3 77
#define DEBUGGING_LABEL_2_2 76
#define OBJECT_2_6 75
#define OBJECT_2_5 74
#define OBJECT_2_4 73
#define OBJECT_2_3 72
#define OBJECT_2_2 71
#define OBJECT_2_1 70
#define OBJECT_2_0 69
#define EXECUTE_CACHE_2_8 67
#define FREE_REFERENCES_LABEL_2_0 66
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
qsort_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd114;
  machine_word Wrd97;
  machine_word Wrd145;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd123;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd127;
  machine_word Wrd125;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd84;
  machine_word Wrd231;
  machine_word Wrd230;
  machine_word Wrd229;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd221;
  machine_word Wrd217;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd233;
  machine_word Wrd245;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd241;
  machine_word Wrd239;
  machine_word Wrd247;
  machine_word Wrd216;
  machine_word Wrd215;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd276;
  machine_word Wrd272;
  machine_word Wrd269;
  machine_word Wrd271;
  machine_word Wrd270;
  machine_word Wrd254;
  machine_word Wrd249;
  machine_word Wrd264;
  machine_word Wrd263;
  machine_word Wrd262;
  machine_word Wrd258;
  machine_word Wrd256;
  machine_word Wrd255;
  machine_word Wrd268;
  machine_word Wrd267;
  machine_word Wrd266;
  machine_word Wrd265;
  machine_word Wrd212;
  machine_word Wrd209;
  machine_word Wrd206;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd184;
  machine_word Wrd191;
  machine_word Wrd186;
  machine_word Wrd201;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd195;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd205;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd173;
  machine_word Wrd183;
  machine_word Wrd176;
  machine_word Wrd180;
  machine_word Wrd177;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd152;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd160;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd150;
  machine_word Wrd147;
  machine_word Wrd89;
  machine_word Wrd87;
  machine_word Wrd85;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd113;
  machine_word Wrd124;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd68;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd13;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd27;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd63;
  machine_word Wrd66;
  machine_word Wrd12;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd17;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd88;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd98;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd57;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_2_4);
      goto quick_sortB_56;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_58;

    case 3:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto outer_loop_50;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_60;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_61;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto label_59;

    case 8:
      current_block = (Rpc - LABEL_2_14);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_2_16);
      goto continuation_19;

    case 10:
      current_block = (Rpc - LABEL_2_17);
      goto decrease_j_21;

    case 11:
      current_block = (Rpc - LABEL_2_18);
      goto label_62;

    case 12:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_45;

    case 13:
      current_block = (Rpc - LABEL_2_19);
      goto label_63;

    case 14:
      current_block = (Rpc - LABEL_2_20);
      goto label_64;

    case 15:
      current_block = (Rpc - LABEL_2_21);
      goto label_65;

    case 16:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_2_22);
      goto continuation_14;

    case 18:
      current_block = (Rpc - LABEL_2_23);
      goto increase_i_16;

    case 19:
      current_block = (Rpc - LABEL_2_24);
      goto label_66;

    case 20:
      current_block = (Rpc - LABEL_2_25);
      goto continuation_33;

    case 21:
      current_block = (Rpc - LABEL_2_26);
      goto continuation_25;

    case 22:
      current_block = (Rpc - LABEL_2_27);
      goto inner_loop_41;

    case 23:
      current_block = (Rpc - LABEL_2_28);
      goto label_70;

    case 24:
      current_block = (Rpc - LABEL_2_29);
      goto label_71;

    case 25:
      current_block = (Rpc - LABEL_2_30);
      goto label_72;

    case 26:
      current_block = (Rpc - LABEL_2_32);
      goto label_67;

    case 27:
      current_block = (Rpc - LABEL_2_33);
      goto label_68;

    case 28:
      current_block = (Rpc - LABEL_2_34);
      goto label_69;

    case 29:
      current_block = (Rpc - LABEL_2_35);
      goto continuation_30;

    case 30:
      current_block = (Rpc - LABEL_2_31);
      goto continuation_38;

    case 31:
      current_block = (Rpc - LABEL_2_36);
      goto continuation_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (quick_sortB_74)
DEFLABEL (quick_sortB_56)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_81;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);

DEFLABEL (label_81)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.pObj) = (& (Rsp [1]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_80;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd19.Obj) = (MAKE_OBJECT (26, (Wrd23.uLng)));

DEFLABEL (label_79)
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd31.Lng) = ((Wrd30.Lng) - 1L);
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd33.Obj);
  goto outer_loop_50;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_6);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_58)
  (Wrd19.Obj) = Rvl;
  goto label_79;

DEFLABEL (outer_loop_75)
DEFLABEL (outer_loop_50)
  INTERRUPT_CHECK (26, LABEL_2_9);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) > (Wrd8.Lng))
    goto label_82;
  Rvl = (current_block [OBJECT_2_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_82)
  (Wrd14.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  if ((Wrd5.Obj) == (Wrd11.Obj))
    goto label_85;
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_84;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_84;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) (Wrd8.Lng)) < ((unsigned long) (Wrd33.Lng))))
    goto label_84;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd7.Obj));
  (Wrd22.pObj) = (& ((Wrd31.pObj) [(Wrd17.Lng)]));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_83)
  Rdl = (& (Rsp [4]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.pObj) = (& (Rsp [2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd53.Obj);
  goto decrease_j_21;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_14);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.pObj) = (& (Rsp [3]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd16.Lng) + 1L);
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (* (--Rsp)) = (Wrd18.Obj);
  goto increase_i_16;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  goto inner_loop_41;

DEFLABEL (label_84)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [0]);
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_85)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd76.Obj) = (Rsp [3]);
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_99;
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd67.uLng) == 26))
    goto label_99;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) (Wrd8.Lng)) < ((unsigned long) (Wrd75.Lng))))
    goto label_99;
  (Wrd59.uLng) = (OBJECT_DATUM (Wrd7.Obj));
  (Wrd64.pObj) = (& ((Wrd73.pObj) [(Wrd59.Lng)]));
  (Wrd65.Obj) = ((Wrd64.pObj) [1]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_98)
  (Wrd105.Obj) = (Rsp [4]);
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd107.Obj) = ((Wrd106.pObj) [0]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd108.uLng) == 10))
    goto label_97;
  (Wrd95.Obj) = (Rsp [3]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if (! ((Wrd96.uLng) == 26))
    goto label_97;
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [0]);
  (Wrd104.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  if (! (((unsigned long) (Wrd98.Lng)) < ((unsigned long) (Wrd104.Lng))))
    goto label_97;
  (Wrd88.uLng) = (OBJECT_DATUM (Wrd95.Obj));
  (Wrd93.pObj) = (& ((Wrd102.pObj) [(Wrd88.Lng)]));
  (Wrd94.Obj) = ((Wrd93.pObj) [1]);
  (* (--Rsp)) = (Wrd94.Obj);

DEFLABEL (label_96)
  (Wrd116.Obj) = (Rsp [5]);
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [1]);
  (* (--Rsp)) = (Wrd118.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_2_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_87;

DEFLABEL (label_86)
  Rvl = (current_block [OBJECT_2_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_95;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_95;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_95;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd13.pObj) = (& ((Wrd22.pObj) [(Wrd8.Lng)]));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_94)
  Rdl = (& (Rsp [4]));
  (Wrd54.Obj) = (Rsp [3]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_93;
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_93;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd53.Lng))))
    goto label_93;
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd44.Obj));
  (Wrd43.pObj) = (& ((Wrd51.pObj) [(Wrd38.Lng)]));
  (Wrd36.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_92)
  (Wrd109.Obj) = (Rsp [3]);
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if (! ((Wrd112.uLng) == 10))
    goto label_91;
  (Wrd99.Obj) = (Rsp [1]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 26))
    goto label_91;
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd111.Obj));
  (Wrd107.Obj) = ((Wrd106.pObj) [0]);
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  if (! (((unsigned long) (Wrd102.Lng)) < ((unsigned long) (Wrd108.Lng))))
    goto label_91;
  (Wrd93.uLng) = (OBJECT_DATUM (Wrd99.Obj));
  (Wrd98.pObj) = (& ((Wrd106.pObj) [(Wrd93.Lng)]));
  ((Wrd98.pObj) [1]) = (Wrd36.Obj);

DEFLABEL (label_90)
  (Wrd69.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [5]);
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if ((Wrd91.uLng) == 10)
    goto label_89;

DEFLABEL (label_88)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 3);

DEFLABEL (label_89)
  (Wrd82.Obj) = (Rsp [1]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 26))
    goto label_88;
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) (Wrd85.Lng)) < ((unsigned long) (Wrd89.Lng))))
    goto label_88;
  (Wrd76.uLng) = (OBJECT_DATUM (Wrd82.Obj));
  (Wrd79.pObj) = (& ((Wrd87.pObj) [(Wrd76.Lng)]));
  (Wrd80.Obj) = (Rsp [2]);
  ((Wrd79.pObj) [1]) = (Wrd80.Obj);
  goto label_86;

DEFLABEL (label_91)
  (Wrd118.Obj) = (Rsp [3]);
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd117.Obj) = ((Wrd119.pObj) [0]);
  (Wrd120.Obj) = (Rsp [1]);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd116.Obj);
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_21]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 3);

DEFLABEL (label_65)
  (Wrd113.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd113.Obj));
  goto label_90;

DEFLABEL (label_93)
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd62.Obj) = ((Wrd64.pObj) [0]);
  (Wrd65.Obj) = (Rsp [2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_20]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_64)
  (Wrd58.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd36.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [0]);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd110.Obj) = (Rsp [4]);
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd109.Obj) = ((Wrd111.pObj) [0]);
  (Wrd112.Obj) = (Rsp [3]);
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd81.Obj) = (Rsp [3]);
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd80.Obj) = ((Wrd82.pObj) [0]);
  (Wrd83.Obj) = (Rsp [1]);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (decrease_j_76)
DEFLABEL (decrease_j_21)
  INTERRUPT_CHECK (26, LABEL_2_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd6.Lng) > (Wrd10.Lng))
    goto label_101;

DEFLABEL (label_100)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_101)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd40.Obj) = ((Wrd8.pObj) [3]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_103;
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_103;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_103;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd24.pObj) = (& ((Wrd35.pObj) [(Wrd17.Lng)]));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_102)
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd58.Obj) = ((Wrd54.pObj) [3]);
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [1]);
  (* (--Rsp)) = (Wrd60.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_2_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_100;
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  (Wrd66.Lng) = ((Wrd65.Lng) - 1L);
  (Wrd63.Obj) = (LONG_TO_FIXNUM (Wrd66.Lng));
  (Rsp [0]) = (Wrd63.Obj);
  goto decrease_j_21;

DEFLABEL (label_103)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [3]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd44.Obj) = ((Wrd48.pObj) [0]);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (increase_i_77)
DEFLABEL (increase_i_16)
  INTERRUPT_CHECK (26, LABEL_2_23);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if (! ((Wrd6.Lng) > (Wrd10.Lng)))
    goto label_105;

DEFLABEL (label_104)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_105)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd38.Obj) = ((Wrd8.pObj) [3]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_107;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_107;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd35.Lng))))
    goto label_107;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd22.pObj) = (& ((Wrd33.pObj) [(Wrd15.Lng)]));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_106)
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.Obj) = ((Wrd52.pObj) [3]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [1]);
  (* (--Rsp)) = (Wrd58.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_2_22);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_104;
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  (Wrd66.Lng) = ((Wrd65.Lng) + 1L);
  (Wrd63.Obj) = (LONG_TO_FIXNUM (Wrd66.Lng));
  (Rsp [0]) = (Wrd63.Obj);
  goto increase_i_16;

DEFLABEL (label_107)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [3]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd46.pObj) [0]);
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (inner_loop_78)
DEFLABEL (inner_loop_41)
  DLINK_INTERRUPT_CHECK (25, LABEL_2_27);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_119;
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd8.Lng) > (Wrd12.Lng))
    goto label_109;

DEFLABEL (label_108)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_35]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [7]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Lng) = ((Wrd24.Lng) + 1L);
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd26.Obj);
  goto outer_loop_50;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_2_35);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd12.Lng) - 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.pObj) = (& (Rsp [9]));
  {
    SCHEME_OBJECT * IPDLp1 = (((Wrd16.pObj) <= Rdl) ? (Wrd16.pObj) : Rdl);
    (* (--IPDLp1)) = (Rsp [2]);
    (* (--IPDLp1)) = (Rsp [1]);
    (* (--IPDLp1)) = (Rsp [0]);
    Rsp = IPDLp1;
  }
  goto outer_loop_50;

DEFLABEL (label_109)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_26]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd50.Obj) = (Rsp [7]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_118;
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_118;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) (Wrd8.Lng)) < ((unsigned long) (Wrd49.Lng))))
    goto label_118;
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd7.Obj));
  (Wrd38.pObj) = (& ((Wrd47.pObj) [(Wrd33.Lng)]));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_117)
  (Wrd83.Obj) = (Rsp [8]);
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 10))
    goto label_116;
  (Wrd73.Obj) = (Rsp [6]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 26))
    goto label_116;
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) (Wrd76.Lng)) < ((unsigned long) (Wrd82.Lng))))
    goto label_116;
  (Wrd67.uLng) = (OBJECT_DATUM (Wrd73.Obj));
  (Wrd72.pObj) = (& ((Wrd80.pObj) [(Wrd67.Lng)]));
  (Wrd65.Obj) = ((Wrd72.pObj) [1]);

DEFLABEL (label_115)
  (Wrd134.Obj) = (Rsp [8]);
  (Wrd135.pObj) = (OBJECT_ADDRESS (Wrd134.Obj));
  (Wrd136.Obj) = ((Wrd135.pObj) [0]);
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd136.Obj));
  if (! ((Wrd137.uLng) == 10))
    goto label_114;
  (Wrd124.Obj) = (Rsp [4]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd125.uLng) == 26))
    goto label_114;
  (Wrd127.Lng) = (FIXNUM_TO_LONG (Wrd124.Obj));
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd136.Obj));
  (Wrd132.Obj) = ((Wrd131.pObj) [0]);
  (Wrd133.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  if (! (((unsigned long) (Wrd127.Lng)) < ((unsigned long) (Wrd133.Lng))))
    goto label_114;
  (Wrd118.uLng) = (OBJECT_DATUM (Wrd124.Obj));
  (Wrd123.pObj) = (& ((Wrd131.pObj) [(Wrd118.Lng)]));
  ((Wrd123.pObj) [1]) = (Wrd65.Obj);

DEFLABEL (label_113)
  (Wrd94.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd95.Obj) = (Rsp [9]);
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd95.Obj));
  (Wrd97.Obj) = ((Wrd96.pObj) [0]);
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if ((Wrd116.uLng) == 10)
    goto label_111;

DEFLABEL (label_110)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 3);

DEFLABEL (label_111)
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd108.uLng) == 26))
    goto label_110;
  (Wrd110.Lng) = (FIXNUM_TO_LONG (Wrd94.Obj));
  (Wrd112.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd113.Obj) = ((Wrd112.pObj) [0]);
  (Wrd114.Lng) = (FIXNUM_TO_LONG (Wrd113.Obj));
  if (! (((unsigned long) (Wrd110.Lng)) < ((unsigned long) (Wrd114.Lng))))
    goto label_110;
  (Wrd102.uLng) = (OBJECT_DATUM (Wrd94.Obj));
  (Wrd105.pObj) = (& ((Wrd112.pObj) [(Wrd102.Lng)]));
  (Wrd106.Obj) = (Rsp [2]);
  ((Wrd105.pObj) [1]) = (Wrd106.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_112)
  (Wrd98.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd98.Obj));
  goto label_108;

DEFLABEL (label_114)
  (Wrd139.Obj) = (Rsp [8]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd138.Obj) = ((Wrd140.pObj) [0]);
  (Wrd141.Obj) = (Rsp [4]);
  (Wrd145.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_34]))));
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 3);

DEFLABEL (label_69)
  goto label_113;

DEFLABEL (label_116)
  (Wrd88.Obj) = (Rsp [8]);
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd87.Obj) = ((Wrd89.pObj) [0]);
  (Wrd90.Obj) = (Rsp [6]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_33]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_68)
  (Wrd65.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd59.Obj) = (Rsp [7]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [0]);
  (Wrd61.Obj) = (Rsp [3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_32]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_67)
  (Wrd54.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd54.Obj));
  (* (--Rsp)) = Rvl;
  goto label_117;

DEFLABEL (label_119)
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd147.Obj);
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd150.Obj);
  (Wrd169.Obj) = (Rsp [7]);
  (Wrd170.pObj) = (OBJECT_ADDRESS (Wrd169.Obj));
  (Wrd171.Obj) = ((Wrd170.pObj) [0]);
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd171.Obj));
  if (! ((Wrd172.uLng) == 10))
    goto label_126;
  (Wrd160.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd160.uLng) == 26))
    goto label_126;
  (Wrd166.pObj) = (OBJECT_ADDRESS (Wrd171.Obj));
  (Wrd167.Obj) = ((Wrd166.pObj) [0]);
  (Wrd168.Lng) = (FIXNUM_TO_LONG (Wrd167.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd168.Lng))))
    goto label_126;
  (Wrd152.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd157.pObj) = (& ((Wrd166.pObj) [(Wrd152.Lng)]));
  (Wrd158.Obj) = ((Wrd157.pObj) [1]);
  (* (--Rsp)) = (Wrd158.Obj);

DEFLABEL (label_125)
  (Wrd202.Obj) = (Rsp [8]);
  (Wrd203.pObj) = (OBJECT_ADDRESS (Wrd202.Obj));
  (Wrd204.Obj) = ((Wrd203.pObj) [0]);
  (Wrd205.uLng) = (OBJECT_TYPE (Wrd204.Obj));
  if (! ((Wrd205.uLng) == 10))
    goto label_124;
  (Wrd192.Obj) = (Rsp [4]);
  (Wrd193.uLng) = (OBJECT_TYPE (Wrd192.Obj));
  if (! ((Wrd193.uLng) == 26))
    goto label_124;
  (Wrd195.Lng) = (FIXNUM_TO_LONG (Wrd192.Obj));
  (Wrd199.pObj) = (OBJECT_ADDRESS (Wrd204.Obj));
  (Wrd200.Obj) = ((Wrd199.pObj) [0]);
  (Wrd201.Lng) = (FIXNUM_TO_LONG (Wrd200.Obj));
  if (! (((unsigned long) (Wrd195.Lng)) < ((unsigned long) (Wrd201.Lng))))
    goto label_124;
  (Wrd186.uLng) = (OBJECT_DATUM (Wrd192.Obj));
  (Wrd191.pObj) = (& ((Wrd199.pObj) [(Wrd186.Lng)]));
  (Wrd184.Obj) = ((Wrd191.pObj) [1]);

DEFLABEL (label_123)
  (Wrd265.Obj) = (Rsp [8]);
  (Wrd266.pObj) = (OBJECT_ADDRESS (Wrd265.Obj));
  (Wrd267.Obj) = ((Wrd266.pObj) [0]);
  (Wrd268.uLng) = (OBJECT_TYPE (Wrd267.Obj));
  if (! ((Wrd268.uLng) == 10))
    goto label_122;
  (Wrd255.Obj) = (Rsp [3]);
  (Wrd256.uLng) = (OBJECT_TYPE (Wrd255.Obj));
  if (! ((Wrd256.uLng) == 26))
    goto label_122;
  (Wrd258.Lng) = (FIXNUM_TO_LONG (Wrd255.Obj));
  (Wrd262.pObj) = (OBJECT_ADDRESS (Wrd267.Obj));
  (Wrd263.Obj) = ((Wrd262.pObj) [0]);
  (Wrd264.Lng) = (FIXNUM_TO_LONG (Wrd263.Obj));
  if (! (((unsigned long) (Wrd258.Lng)) < ((unsigned long) (Wrd264.Lng))))
    goto label_122;
  (Wrd249.uLng) = (OBJECT_DATUM (Wrd255.Obj));
  (Wrd254.pObj) = (& ((Wrd262.pObj) [(Wrd249.Lng)]));
  ((Wrd254.pObj) [1]) = (Wrd184.Obj);

DEFLABEL (label_121)
  (Wrd213.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd214.Obj) = (Rsp [9]);
  (Wrd215.pObj) = (OBJECT_ADDRESS (Wrd214.Obj));
  (Wrd216.Obj) = ((Wrd215.pObj) [0]);
  (* (--Rsp)) = (Wrd216.Obj);
  (Wrd247.uLng) = (OBJECT_TYPE (Wrd216.Obj));
  if (! ((Wrd247.uLng) == 10))
    goto label_110;
  (Wrd239.uLng) = (OBJECT_TYPE (Wrd213.Obj));
  if (! ((Wrd239.uLng) == 26))
    goto label_110;
  (Wrd241.Lng) = (FIXNUM_TO_LONG (Wrd213.Obj));
  (Wrd243.pObj) = (OBJECT_ADDRESS (Wrd216.Obj));
  (Wrd244.Obj) = ((Wrd243.pObj) [0]);
  (Wrd245.Lng) = (FIXNUM_TO_LONG (Wrd244.Obj));
  if (! (((unsigned long) (Wrd241.Lng)) < ((unsigned long) (Wrd245.Lng))))
    goto label_110;
  (Wrd233.uLng) = (OBJECT_DATUM (Wrd213.Obj));
  (Wrd236.pObj) = (& ((Wrd243.pObj) [(Wrd233.Lng)]));
  (Wrd237.Obj) = (Rsp [2]);
  ((Wrd236.pObj) [1]) = (Wrd237.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_120)
  (Wrd217.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd217.Obj));
  (Wrd221.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd221.Obj);
  (Wrd224.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_31]))));
  (* (--Rsp)) = (Wrd224.Obj);
  (Wrd225.pObj) = (& (Rsp [4]));
  (Wrd227.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd225.pObj)));
  (* (--Rsp)) = (Wrd227.Obj);
  (Wrd228.Obj) = (Rsp [3]);
  (Wrd229.Lng) = (FIXNUM_TO_LONG (Wrd228.Obj));
  (Wrd230.Lng) = ((Wrd229.Lng) + 1L);
  (Wrd231.Obj) = (LONG_TO_FIXNUM (Wrd230.Lng));
  (* (--Rsp)) = (Wrd231.Obj);
  goto increase_i_16;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_2_31);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_36]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.pObj) = (& (Rsp [4]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd17.Lng) - 1L);
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd19.Obj);
  goto decrease_j_21;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_2_36);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [1]) = Rvl;
  goto inner_loop_41;

DEFLABEL (label_122)
  (Wrd270.Obj) = (Rsp [8]);
  (Wrd271.pObj) = (OBJECT_ADDRESS (Wrd270.Obj));
  (Wrd269.Obj) = ((Wrd271.pObj) [0]);
  (Wrd272.Obj) = (Rsp [3]);
  (Wrd276.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_30]))));
  (* (--Rsp)) = (Wrd276.Obj);
  (* (--Rsp)) = (Wrd184.Obj);
  (* (--Rsp)) = (Wrd272.Obj);
  (* (--Rsp)) = (Wrd269.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_6]), 3);

DEFLABEL (label_72)
  goto label_121;

DEFLABEL (label_124)
  (Wrd207.Obj) = (Rsp [8]);
  (Wrd208.pObj) = (OBJECT_ADDRESS (Wrd207.Obj));
  (Wrd206.Obj) = ((Wrd208.pObj) [0]);
  (Wrd209.Obj) = (Rsp [4]);
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_29]))));
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd209.Obj);
  (* (--Rsp)) = (Wrd206.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_71)
  (Wrd184.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd178.Obj) = (Rsp [7]);
  (Wrd179.pObj) = (OBJECT_ADDRESS (Wrd178.Obj));
  (Wrd177.Obj) = ((Wrd179.pObj) [0]);
  (Wrd180.Obj) = (Rsp [2]);
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd176.Obj);
  (Wrd183.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_28]))));
  (* (--Rsp)) = (Wrd183.Obj);
  (* (--Rsp)) = (Wrd180.Obj);
  (* (--Rsp)) = (Wrd177.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

DEFLABEL (label_70)
  (Wrd173.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd173.Obj));
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_2_26);
  goto label_112;

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_2_25);
  goto label_120;

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
qsort_so_58caf443d41661cf (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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

static const struct liarc_code_S arr_decl_qsort_so_58caf443d41661cf [2] =
  {
    { "qsort_so_code_1", 4, qsort_so_code_1 },
    { "qsort_so_code_2", 32, qsort_so_code_2 }
  };

int
decl_qsort_so_58caf443d41661cf (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_qsort_so_58caf443d41661cf);
  return (0);
}

DECLARE_COMPILED_CODE ("qsort.so", 3, decl_qsort_so_58caf443d41661cf, qsort_so_58caf443d41661cf)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_qsort_so_data_58caf443d41661cf [605] =
  "\x52\x05\x88\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\xb9\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xba\x1d\xb0\x82\x88\xc3\x1d\xc2\x0c\xb1\x80\xc1\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xb8\x99\xbb\x88\xb3\xb0\x2a\xb2\x2a\x99\xb1\x0d\x99"
  "\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x54\x2f\x55\x73"
  "\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65"
  "\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e"
  "\x74\x69\x6d\x65\x2f\x2e\x2f\x71\x73\x6f\x72\x74\x2e\x69\x6e\x66"
  "\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d"
  "\x72\x6f\x6f\x74\x5d\x02\x03\x0c\x76\x65\x63\x74\x6f\x72\x2d\x63"
  "\x6f\x70\x79\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f"
  "\x72\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69\x73\x74\x04"
  "\x0c\x71\x75\x69\x63\x6b\x2d\x73\x6f\x72\x74\x21\x05\x07\x0a\x81"
  "\x85\x02\x06\x08\x81\x89\x02\x05\x06\x81\x85\x02\x04\x04\x84\x06"
  "\x09\x15\x02\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x02"
  "\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x07\x76\x65\x63\x74"
  "\x6f\x72\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79"
  "\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x02\x27\x42\xfd\xff"
  "\x03\x26\x40\xfd\xff\x03\x25\x3e\xfd\xff\x03\x24\x3c\x81\x83\x02"
  "\x23\x3a\x81\x83\x02\x22\x38\xfd\xff\x03\x21\x36\x81\x83\x02\x20"
  "\x34\x81\x83\x02\x1f\x32\xfd\xff\x03\x1e\x30\xff\xff\x03\x1d\x2e"
  "\xfd\xff\x03\x1c\x2c\xfd\xff\x03\x1b\x2a\x81\x87\x02\x1a\x28\x81"
  "\x85\x02\x19\x26\x81\x85\x02\x18\x24\xfd\xff\x03\x17\x22\xfd\xff"
  "\x03\x16\x20\xfd\xff\x03\x15\x1e\x81\x87\x02\x14\x1c\x81\x87\x02"
  "\x13\x1a\x81\x87\x02\x12\x18\x81\x85\x02\x11\x16\x81\x85\x02\x10"
  "\x14\xfd\xff\x03\x0f\x12\x81\x87\x02\x0e\x10\x81\x8b\x02\x0d\x0e"
  "\x81\x89\x02\x0c\x0c\x81\x87\x02\x0b\x0a\x81\x85\x02\x0a\x08\x81"
  "\x89\x02\x09\x06\x84\x06\x08\x04\x81\x85\x02\x41\x4e\x06\x04\x0b"
  "\x71\x75\x69\x63\x6b\x2d\x73\x6f\x72\x74\x05\x10\x64\x65\x66\x69"
  "\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80"
  "\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
qsort_so_data_58caf443d41661cf (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_qsort_so_data_58caf443d41661cf [0]))), (sizeof (prog_qsort_so_data_58caf443d41661cf)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("qsort.so", qsort_so_data_58caf443d41661cf)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("qsort.so", "2003ed90b1e6cca6")
