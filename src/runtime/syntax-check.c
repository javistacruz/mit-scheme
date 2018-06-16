/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:56-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_7 7
#define LABEL_1_5 9
#define ENVIRONMENT_LABEL_1_3 18
#define DEBUGGING_LABEL_1_2 17
#define OBJECT_1_1 16
#define OBJECT_1_0 15
#define EXECUTE_CACHE_1_9 11
#define EXECUTE_CACHE_1_8 13
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_check_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_1_4);
      goto syntax_check_3;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntax_check_8)
DEFLABEL (syntax_check_3)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_13;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_12)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_11;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = (current_block [OBJECT_1_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_11)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 9
#define DEBUGGING_LABEL_2_2 8
#define OBJECT_2_0 7
#define EXECUTE_CACHE_2_5 5
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_check_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto ill_formed_syntax_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ill_formed_syntax_3)
DEFLABEL (ill_formed_syntax_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_7 5
#define LABEL_3_8 7
#define LABEL_3_9 9
#define LABEL_3_10 11
#define LABEL_3_11 13
#define LABEL_3_12 15
#define LABEL_3_5 17
#define LABEL_3_13 19
#define LABEL_3_14 21
#define LABEL_3_15 23
#define LABEL_3_16 25
#define LABEL_3_17 27
#define LABEL_3_18 29
#define LABEL_3_19 31
#define LABEL_3_20 33
#define LABEL_3_21 35
#define LABEL_3_22 37
#define LABEL_3_23 39
#define LABEL_3_24 41
#define LABEL_3_26 43
#define LABEL_3_27 45
#define LABEL_3_28 47
#define LABEL_3_29 49
#define LABEL_3_30 51
#define LABEL_3_31 53
#define LABEL_3_32 55
#define LABEL_3_33 57
#define LABEL_3_34 59
#define LABEL_3_35 61
#define LABEL_3_36 63
#define LABEL_3_37 65
#define LABEL_3_39 67
#define LABEL_3_40 69
#define LABEL_3_43 71
#define LABEL_3_38 73
#define LABEL_3_49 75
#define LABEL_3_50 77
#define LABEL_3_51 79
#define LABEL_3_25 81
#define LABEL_3_53 83
#define LABEL_3_54 85
#define LABEL_3_55 87
#define LABEL_3_56 89
#define LABEL_3_57 91
#define LABEL_3_58 93
#define LABEL_3_59 95
#define LABEL_3_60 97
#define LABEL_3_61 99
#define LABEL_3_62 101
#define LABEL_3_63 103
#define ENVIRONMENT_LABEL_3_3 148
#define DEBUGGING_LABEL_3_2 147
#define OBJECT_3_23 146
#define OBJECT_3_22 145
#define OBJECT_3_21 144
#define OBJECT_3_20 143
#define OBJECT_3_19 142
#define OBJECT_3_18 141
#define OBJECT_3_17 140
#define OBJECT_3_16 139
#define OBJECT_3_15 138
#define OBJECT_3_14 137
#define OBJECT_3_13 136
#define OBJECT_3_12 135
#define OBJECT_3_11 134
#define OBJECT_3_10 133
#define OBJECT_3_9 132
#define OBJECT_3_8 131
#define OBJECT_3_7 130
#define OBJECT_3_6 129
#define OBJECT_3_5 128
#define OBJECT_3_4 127
#define OBJECT_3_3 126
#define OBJECT_3_2 125
#define OBJECT_3_1 124
#define OBJECT_3_0 123
#define EXECUTE_CACHE_3_52 105
#define EXECUTE_CACHE_3_48 107
#define EXECUTE_CACHE_3_47 109
#define EXECUTE_CACHE_3_46 111
#define EXECUTE_CACHE_3_45 113
#define EXECUTE_CACHE_3_44 115
#define EXECUTE_CACHE_3_42 117
#define EXECUTE_CACHE_3_41 119
#define EXECUTE_CACHE_3_6 121
#define FREE_REFERENCES_LABEL_3_0 104
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_check_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd68;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd6;
  machine_word Wrd44;
  machine_word Wrd59;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd313;
  machine_word Wrd317;
  machine_word Wrd316;
  machine_word Wrd322;
  machine_word Wrd321;
  machine_word Wrd339;
  machine_word Wrd338;
  machine_word Wrd337;
  machine_word Wrd345;
  machine_word Wrd334;
  machine_word Wrd356;
  machine_word Wrd353;
  machine_word Wrd333;
  machine_word Wrd332;
  machine_word Wrd331;
  machine_word Wrd351;
  machine_word Wrd348;
  machine_word Wrd290;
  machine_word Wrd70;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd114;
  machine_word Wrd108;
  machine_word Wrd109;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd97;
  machine_word Wrd91;
  machine_word Wrd92;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd153;
  machine_word Wrd147;
  machine_word Wrd148;
  machine_word Wrd149;
  machine_word Wrd146;
  machine_word Wrd138;
  machine_word Wrd140;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd182;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd178;
  machine_word Wrd175;
  machine_word Wrd167;
  machine_word Wrd169;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd166;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd157;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd116;
  machine_word Wrd118;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd235;
  machine_word Wrd234;
  machine_word Wrd232;
  machine_word Wrd227;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd219;
  machine_word Wrd220;
  machine_word Wrd221;
  machine_word Wrd218;
  machine_word Wrd210;
  machine_word Wrd212;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd209;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd205;
  machine_word Wrd202;
  machine_word Wrd194;
  machine_word Wrd196;
  machine_word Wrd198;
  machine_word Wrd197;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd183;
  machine_word Wrd185;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd288;
  machine_word Wrd287;
  machine_word Wrd285;
  machine_word Wrd279;
  machine_word Wrd280;
  machine_word Wrd281;
  machine_word Wrd278;
  machine_word Wrd270;
  machine_word Wrd272;
  machine_word Wrd274;
  machine_word Wrd273;
  machine_word Wrd269;
  machine_word Wrd264;
  machine_word Wrd263;
  machine_word Wrd265;
  machine_word Wrd262;
  machine_word Wrd254;
  machine_word Wrd256;
  machine_word Wrd258;
  machine_word Wrd257;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd243;
  machine_word Wrd245;
  machine_word Wrd247;
  machine_word Wrd246;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd368;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd363;
  machine_word Wrd360;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd398;
  machine_word Wrd393;
  machine_word Wrd392;
  machine_word Wrd394;
  machine_word Wrd391;
  machine_word Wrd383;
  machine_word Wrd385;
  machine_word Wrd387;
  machine_word Wrd386;
  machine_word Wrd382;
  machine_word Wrd376;
  machine_word Wrd375;
  machine_word Wrd378;
  machine_word Wrd377;
  machine_word Wrd133;
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
      current_block = (Rpc - LABEL_3_4);
      goto syntax_matchP_90;

    case 1:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_31;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto label_121;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto label_122;

    case 4:
      current_block = (Rpc - LABEL_3_10);
      goto label_123;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_27;

    case 6:
      current_block = (Rpc - LABEL_3_12);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_3_13);
      goto label_118;

    case 9:
      current_block = (Rpc - LABEL_3_14);
      goto label_92;

    case 10:
      current_block = (Rpc - LABEL_3_15);
      goto label_112;

    case 11:
      current_block = (Rpc - LABEL_3_16);
      goto label_113;

    case 12:
      current_block = (Rpc - LABEL_3_17);
      goto label_114;

    case 13:
      current_block = (Rpc - LABEL_3_18);
      goto label_115;

    case 14:
      current_block = (Rpc - LABEL_3_19);
      goto label_116;

    case 15:
      current_block = (Rpc - LABEL_3_20);
      goto label_106;

    case 16:
      current_block = (Rpc - LABEL_3_21);
      goto label_107;

    case 17:
      current_block = (Rpc - LABEL_3_22);
      goto label_108;

    case 18:
      current_block = (Rpc - LABEL_3_23);
      goto label_109;

    case 19:
      current_block = (Rpc - LABEL_3_24);
      goto label_110;

    case 20:
      current_block = (Rpc - LABEL_3_26);
      goto label_111;

    case 21:
      current_block = (Rpc - LABEL_3_27);
      goto label_100;

    case 22:
      current_block = (Rpc - LABEL_3_28);
      goto label_103;

    case 23:
      current_block = (Rpc - LABEL_3_29);
      goto label_104;

    case 24:
      current_block = (Rpc - LABEL_3_30);
      goto label_105;

    case 25:
      current_block = (Rpc - LABEL_3_31);
      goto label_101;

    case 26:
      current_block = (Rpc - LABEL_3_32);
      goto label_102;

    case 27:
      current_block = (Rpc - LABEL_3_33);
      goto label_95;

    case 28:
      current_block = (Rpc - LABEL_3_34);
      goto label_96;

    case 29:
      current_block = (Rpc - LABEL_3_35);
      goto label_97;

    case 30:
      current_block = (Rpc - LABEL_3_36);
      goto label_98;

    case 31:
      current_block = (Rpc - LABEL_3_37);
      goto label_99;

    case 32:
      current_block = (Rpc - LABEL_3_39);
      goto label_93;

    case 33:
      current_block = (Rpc - LABEL_3_40);
      goto label_94;

    case 34:
      current_block = (Rpc - LABEL_3_43);
      goto label_117;

    case 35:
      current_block = (Rpc - LABEL_3_38);
      goto continuation_14;

    case 36:
      current_block = (Rpc - LABEL_3_49);
      goto label_119;

    case 37:
      current_block = (Rpc - LABEL_3_50);
      goto label_120;

    case 38:
      current_block = (Rpc - LABEL_3_51);
      goto lambda_0;

    case 39:
      current_block = (Rpc - LABEL_3_25);
      goto continuation_46;

    case 40:
      current_block = (Rpc - LABEL_3_53);
      goto label_124;

    case 41:
      current_block = (Rpc - LABEL_3_54);
      goto continuation_68;

    case 42:
      current_block = (Rpc - LABEL_3_55);
      goto label_127;

    case 43:
      current_block = (Rpc - LABEL_3_56);
      goto continuation_66;

    case 44:
      current_block = (Rpc - LABEL_3_57);
      goto loop_71;

    case 45:
      current_block = (Rpc - LABEL_3_58);
      goto label_125;

    case 46:
      current_block = (Rpc - LABEL_3_59);
      goto continuation_52;

    case 47:
      current_block = (Rpc - LABEL_3_60);
      goto label_128;

    case 48:
      current_block = (Rpc - LABEL_3_61);
      goto continuation_50;

    case 49:
      current_block = (Rpc - LABEL_3_62);
      goto loop_55;

    case 50:
      current_block = (Rpc - LABEL_3_63);
      goto label_126;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntax_matchP_130)
DEFLABEL (syntax_matchP_90)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_134;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_134)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd360.Obj) = (current_block [OBJECT_3_1]);
  (Wrd363.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd363.Lng))))
    goto label_225;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd360.Obj));
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd12.Obj) == (Wrd14.Obj))
    goto label_224;

DEFLABEL (label_223)
  (Wrd15.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng)))
    goto label_136;

DEFLABEL (label_135)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_136)
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_138;
  (Wrd17.Obj) = (current_block [OBJECT_3_5]);
  goto label_137;

DEFLABEL (label_138)
  (Wrd17.Obj) = (current_block [OBJECT_3_4]);

DEFLABEL (label_137)
DEFLABEL (label_222)
  Rsp = (& (Rsp [3]));
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_156;

DEFLABEL (label_155)
  (Wrd290.Obj) = (Rsp [0]);
  if ((Wrd290.Obj) == (current_block [OBJECT_3_12]))
    goto label_151;
  if (! ((Wrd290.Obj) == (current_block [OBJECT_3_13])))
    goto label_139;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_44]));

DEFLABEL (label_139)
  if ((Wrd290.Obj) == (current_block [OBJECT_3_14]))
    goto label_147;
  if ((Wrd290.Obj) == (current_block [OBJECT_3_15]))
    goto label_147;
  if ((Wrd290.Obj) == (current_block [OBJECT_3_16]))
    goto label_147;
  if (! ((Wrd290.Obj) == (current_block [OBJECT_3_17])))
    goto label_140;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_45]));

DEFLABEL (label_140)
  if (! ((Wrd290.Obj) == (current_block [OBJECT_3_18])))
    goto label_141;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_46]));

DEFLABEL (label_141)
  if ((Wrd290.Obj) == (current_block [OBJECT_3_19]))
    goto label_150;
  if ((Wrd290.Obj) == (current_block [OBJECT_3_20]))
    goto label_145;
  if (! ((Wrd290.Obj) == (current_block [OBJECT_3_21])))
    goto label_142;
  (Wrd313.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd313.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_47]));

DEFLABEL (label_142)
  if ((Wrd290.Obj) == (current_block [OBJECT_3_22]))
    goto label_144;

DEFLABEL (label_143)
  goto lambda_0;

DEFLABEL (label_144)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_48]));

DEFLABEL (label_145)
  (Wrd316.Obj) = (Rsp [1]);
  (Wrd317.uLng) = (OBJECT_TYPE (Wrd316.Obj));
  if ((Wrd317.uLng) == 2)
    goto label_147;

DEFLABEL (label_148)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_146;

DEFLABEL (label_147)
  Rvl = (current_block [OBJECT_3_4]);

DEFLABEL (label_146)
DEFLABEL (label_149)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_150)
  (Wrd321.Obj) = (Rsp [1]);
  (Wrd322.uLng) = (OBJECT_TYPE (Wrd321.Obj));
  if ((Wrd322.uLng) == 30)
    goto label_147;
  goto label_148;

DEFLABEL (label_151)
  Rsp = (& (Rsp [1]));
  (Wrd348.Obj) = (current_block [OBJECT_3_1]);
  (Wrd351.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd351.Lng))))
    goto label_154;
  (Wrd331.uLng) = (OBJECT_DATUM (Wrd348.Obj));
  (Wrd332.Obj) = (Rsp [0]);
  (Wrd333.uLng) = (OBJECT_TYPE (Wrd332.Obj));
  if (! ((Wrd331.Obj) == (Wrd333.Obj)))
    goto label_153;

DEFLABEL (label_152)
  Rvl = (current_block [OBJECT_3_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_153)
  (Wrd334.Obj) = (current_block [OBJECT_3_3]);
  (* (--Rsp)) = (Wrd334.Obj);
  (Wrd345.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd345.Lng))))
    goto label_135;
  (Wrd337.uLng) = (OBJECT_DATUM (Wrd334.Obj));
  (Wrd338.Obj) = (Rsp [1]);
  (Wrd339.uLng) = (OBJECT_TYPE (Wrd338.Obj));
  if ((Wrd337.Obj) == (Wrd339.Obj))
    goto label_147;
  goto label_148;

DEFLABEL (label_154)
  (Wrd353.Obj) = (Rsp [0]);
  (Wrd356.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_43]))));
  (* (--Rsp)) = (Wrd356.Obj);
  (* (--Rsp)) = (Wrd353.Obj);
  (* (--Rsp)) = (Wrd348.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_117)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_153;
  goto label_152;

DEFLABEL (label_156)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 1)
    goto label_158;

DEFLABEL (label_157)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_42]));

DEFLABEL (label_158)
  if (! ((Wrd28.uLng) == 1))
    goto label_221;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_220)
  (Wrd38.Obj) = (Rsp [0]);
  if ((Wrd38.Obj) == (current_block [OBJECT_3_7]))
    goto label_209;
  if ((Wrd38.Obj) == (current_block [OBJECT_3_8]))
    goto label_195;
  if ((Wrd38.Obj) == (current_block [OBJECT_3_9]))
    goto label_179;
  if ((Wrd38.Obj) == (current_block [OBJECT_3_10]))
    goto label_166;
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 1)
    goto label_160;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_159)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_160)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_38]))));
  (* (--Rsp)) = (Wrd52.Obj);
  if (! ((Wrd47.uLng) == 1))
    goto label_165;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_164)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_162;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_161)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_41]));

DEFLABEL (label_162)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_40]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_94)
DEFLABEL (label_163)
  (* (--Rsp)) = Rvl;
  goto label_161;

DEFLABEL (label_165)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_39]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_164;

DEFLABEL (label_166)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_178;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [1]);

DEFLABEL (label_177)
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd80.uLng) == 1)
    goto label_168;

DEFLABEL (label_167)
  Rsp = (& (Rsp [1]));
  goto label_143;

DEFLABEL (label_168)
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 1))
    goto label_176;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd82.Obj) = ((Wrd84.pObj) [1]);

DEFLABEL (label_175)
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd93.uLng) == 1))
    goto label_174;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd91.Obj) = ((Wrd92.pObj) [1]);

DEFLABEL (label_173)
  if (! ((Wrd91.Obj) == (current_block [OBJECT_3_11])))
    goto label_167;
  (Wrd102.Obj) = (Rsp [1]);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd103.uLng) == 1))
    goto label_172;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd102.Obj));
  (Wrd99.Obj) = ((Wrd101.pObj) [1]);

DEFLABEL (label_171)
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd110.uLng) == 1))
    goto label_170;
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd108.Obj) = ((Wrd109.pObj) [0]);

DEFLABEL (label_169)
  (Rsp [1]) = (Wrd108.Obj);
  Rsp = (& (Rsp [1]));
  goto label_157;

DEFLABEL (label_170)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_37]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_99)
  (Wrd108.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_36]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_98)
  (Wrd99.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_35]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_97)
  (Wrd91.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_96)
  (Wrd82.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_95)
  (Wrd71.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_179)
  (Wrd119.Obj) = (Rsp [1]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if (! ((Wrd120.uLng) == 1))
    goto label_194;
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd119.Obj));
  (Wrd116.Obj) = ((Wrd118.pObj) [1]);

DEFLABEL (label_193)
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd125.uLng) == 1))
    goto label_167;
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (Wrd130.Obj) = (Rsp [3]);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if ((Wrd131.uLng) == 1)
    goto label_187;
  (Wrd133.Obj) = (current_block [OBJECT_3_5]);

DEFLABEL (label_186)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_185)
  (Rsp [0]) = (Wrd133.Obj);
  if ((Wrd133.Obj) == ((SCHEME_OBJECT) 0))
    goto label_180;
  Rvl = (Wrd133.Obj);
  goto label_159;

DEFLABEL (label_180)
  (Wrd141.Obj) = (Rsp [1]);
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd142.uLng) == 1))
    goto label_184;
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd138.Obj) = ((Wrd140.pObj) [1]);

DEFLABEL (label_183)
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd138.Obj));
  if (! ((Wrd149.uLng) == 1))
    goto label_182;
  (Wrd148.pObj) = (OBJECT_ADDRESS (Wrd138.Obj));
  (Wrd147.Obj) = ((Wrd148.pObj) [1]);

DEFLABEL (label_181)
  (Rsp [1]) = (Wrd147.Obj);
  Rsp = (& (Rsp [1]));
  goto label_161;

DEFLABEL (label_182)
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd153.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_102)
  (Wrd147.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_31]))));
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_101)
  (Wrd138.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_187)
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd157.Obj);
  if (! ((Wrd131.uLng) == 1))
    goto label_192;
  (Wrd159.pObj) = (OBJECT_ADDRESS (Wrd130.Obj));
  (Wrd160.Obj) = ((Wrd159.pObj) [0]);
  (* (--Rsp)) = (Wrd160.Obj);

DEFLABEL (label_191)
  (Wrd170.Obj) = (Rsp [4]);
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd170.Obj));
  if (! ((Wrd171.uLng) == 1))
    goto label_190;
  (Wrd169.pObj) = (OBJECT_ADDRESS (Wrd170.Obj));
  (Wrd167.Obj) = ((Wrd169.pObj) [1]);

DEFLABEL (label_189)
  (Wrd178.uLng) = (OBJECT_TYPE (Wrd167.Obj));
  if (! ((Wrd178.uLng) == 1))
    goto label_188;
  (Wrd176.pObj) = (OBJECT_ADDRESS (Wrd167.Obj));
  (Wrd177.Obj) = ((Wrd176.pObj) [0]);
  (* (--Rsp)) = (Wrd177.Obj);
  goto label_161;

DEFLABEL (label_188)
  (Wrd182.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd182.Obj);
  (* (--Rsp)) = (Wrd167.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_105)
  goto label_163;

DEFLABEL (label_190)
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_29]))));
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd170.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_104)
  (Wrd167.Obj) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_103)
  (* (--Rsp)) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_27]))));
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_100)
  (Wrd116.Obj) = Rvl;
  goto label_193;

DEFLABEL (label_195)
  (Wrd186.Obj) = (Rsp [1]);
  (Wrd187.uLng) = (OBJECT_TYPE (Wrd186.Obj));
  if (! ((Wrd187.uLng) == 1))
    goto label_208;
  (Wrd185.pObj) = (OBJECT_ADDRESS (Wrd186.Obj));
  (Wrd183.Obj) = ((Wrd185.pObj) [1]);

DEFLABEL (label_207)
  (Wrd192.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if (! ((Wrd192.uLng) == 1))
    goto label_167;
  (Wrd197.Obj) = (Rsp [1]);
  (Wrd198.uLng) = (OBJECT_TYPE (Wrd197.Obj));
  if (! ((Wrd198.uLng) == 1))
    goto label_206;
  (Wrd196.pObj) = (OBJECT_ADDRESS (Wrd197.Obj));
  (Wrd194.Obj) = ((Wrd196.pObj) [1]);

DEFLABEL (label_205)
  (Wrd205.uLng) = (OBJECT_TYPE (Wrd194.Obj));
  if (! ((Wrd205.uLng) == 1))
    goto label_204;
  (Wrd203.pObj) = (OBJECT_ADDRESS (Wrd194.Obj));
  (Wrd204.Obj) = ((Wrd203.pObj) [0]);
  (* (--Rsp)) = (Wrd204.Obj);

DEFLABEL (label_203)
  (Wrd213.Obj) = (Rsp [2]);
  (Wrd214.uLng) = (OBJECT_TYPE (Wrd213.Obj));
  if (! ((Wrd214.uLng) == 1))
    goto label_202;
  (Wrd212.pObj) = (OBJECT_ADDRESS (Wrd213.Obj));
  (Wrd210.Obj) = ((Wrd212.pObj) [1]);

DEFLABEL (label_201)
  (Wrd221.uLng) = (OBJECT_TYPE (Wrd210.Obj));
  if (! ((Wrd221.uLng) == 1))
    goto label_200;
  (Wrd220.pObj) = (OBJECT_ADDRESS (Wrd210.Obj));
  (Wrd219.Obj) = ((Wrd220.pObj) [1]);

DEFLABEL (label_199)
  (Rsp [1]) = (Wrd219.Obj);
  (Wrd226.Obj) = (Rsp [3]);
  (Wrd227.uLng) = (OBJECT_TYPE (Wrd226.Obj));
  if ((Wrd227.uLng) == 1)
    goto label_196;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_196)
  (Wrd232.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd232.Obj);
  if (! ((Wrd227.uLng) == 1))
    goto label_198;
  (Wrd234.pObj) = (OBJECT_ADDRESS (Wrd226.Obj));
  (Wrd235.Obj) = ((Wrd234.pObj) [0]);
  (* (--Rsp)) = (Wrd235.Obj);

DEFLABEL (label_197)
  (Wrd242.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd242.Obj);
  goto label_161;

DEFLABEL (label_198)
  (Wrd241.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd241.Obj);
  (* (--Rsp)) = (Wrd226.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_111)
  (* (--Rsp)) = Rvl;
  goto label_197;

DEFLABEL (label_200)
  (Wrd225.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd225.Obj);
  (* (--Rsp)) = (Wrd210.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_110)
  (Wrd219.Obj) = Rvl;
  goto label_199;

DEFLABEL (label_202)
  (Wrd218.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd218.Obj);
  (* (--Rsp)) = (Wrd213.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_109)
  (Wrd210.Obj) = Rvl;
  goto label_201;

DEFLABEL (label_204)
  (Wrd209.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd209.Obj);
  (* (--Rsp)) = (Wrd194.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_108)
  (* (--Rsp)) = Rvl;
  goto label_203;

DEFLABEL (label_206)
  (Wrd202.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd202.Obj);
  (* (--Rsp)) = (Wrd197.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_107)
  (Wrd194.Obj) = Rvl;
  goto label_205;

DEFLABEL (label_208)
  (Wrd191.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd191.Obj);
  (* (--Rsp)) = (Wrd186.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_106)
  (Wrd183.Obj) = Rvl;
  goto label_207;

DEFLABEL (label_209)
  (Wrd246.Obj) = (Rsp [1]);
  (Wrd247.uLng) = (OBJECT_TYPE (Wrd246.Obj));
  if (! ((Wrd247.uLng) == 1))
    goto label_219;
  (Wrd245.pObj) = (OBJECT_ADDRESS (Wrd246.Obj));
  (Wrd243.Obj) = ((Wrd245.pObj) [1]);

DEFLABEL (label_218)
  (Wrd252.uLng) = (OBJECT_TYPE (Wrd243.Obj));
  if (! ((Wrd252.uLng) == 1))
    goto label_167;
  (Wrd257.Obj) = (Rsp [1]);
  (Wrd258.uLng) = (OBJECT_TYPE (Wrd257.Obj));
  if (! ((Wrd258.uLng) == 1))
    goto label_217;
  (Wrd256.pObj) = (OBJECT_ADDRESS (Wrd257.Obj));
  (Wrd254.Obj) = ((Wrd256.pObj) [1]);

DEFLABEL (label_216)
  (Wrd265.uLng) = (OBJECT_TYPE (Wrd254.Obj));
  if (! ((Wrd265.uLng) == 1))
    goto label_215;
  (Wrd263.pObj) = (OBJECT_ADDRESS (Wrd254.Obj));
  (Wrd264.Obj) = ((Wrd263.pObj) [0]);
  (* (--Rsp)) = (Wrd264.Obj);

DEFLABEL (label_214)
  (Wrd273.Obj) = (Rsp [2]);
  (Wrd274.uLng) = (OBJECT_TYPE (Wrd273.Obj));
  if (! ((Wrd274.uLng) == 1))
    goto label_213;
  (Wrd272.pObj) = (OBJECT_ADDRESS (Wrd273.Obj));
  (Wrd270.Obj) = ((Wrd272.pObj) [1]);

DEFLABEL (label_212)
  (Wrd281.uLng) = (OBJECT_TYPE (Wrd270.Obj));
  if (! ((Wrd281.uLng) == 1))
    goto label_211;
  (Wrd280.pObj) = (OBJECT_ADDRESS (Wrd270.Obj));
  (Wrd279.Obj) = ((Wrd280.pObj) [1]);

DEFLABEL (label_210)
  (Rsp [1]) = (Wrd279.Obj);
  (Wrd287.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd287.Obj);
  (Wrd288.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd288.Obj);
  Rdl = (& (Rsp [6]));
  goto loop_71;

DEFLABEL (label_211)
  (Wrd285.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd285.Obj);
  (* (--Rsp)) = (Wrd270.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_116)
  (Wrd279.Obj) = Rvl;
  goto label_210;

DEFLABEL (label_213)
  (Wrd278.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd278.Obj);
  (* (--Rsp)) = (Wrd273.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_115)
  (Wrd270.Obj) = Rvl;
  goto label_212;

DEFLABEL (label_215)
  (Wrd269.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd269.Obj);
  (* (--Rsp)) = (Wrd254.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_114)
  (* (--Rsp)) = Rvl;
  goto label_214;

DEFLABEL (label_217)
  (Wrd262.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd262.Obj);
  (* (--Rsp)) = (Wrd257.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_113)
  (Wrd254.Obj) = Rvl;
  goto label_216;

DEFLABEL (label_219)
  (Wrd251.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd251.Obj);
  (* (--Rsp)) = (Wrd246.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_112)
  (Wrd243.Obj) = Rvl;
  goto label_218;

DEFLABEL (label_221)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_92)
  (* (--Rsp)) = Rvl;
  goto label_220;

DEFLABEL (label_224)
  Rsp = (& (Rsp [2]));
  goto label_155;

DEFLABEL (label_225)
  (Wrd368.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd368.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd360.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_118)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_223;
  goto label_224;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_38);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_226;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_226)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_230;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_229)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_228;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_227)
  (Rsp [2]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_41]));

DEFLABEL (label_228)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_50]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_120)
  (Wrd16.Obj) = Rvl;
  goto label_227;

DEFLABEL (label_230)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_49]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_119)
  (Wrd7.Obj) = Rvl;
  goto label_229;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_3_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_236;
  (Wrd377.Obj) = (Rsp [3]);
  (Wrd378.uLng) = (OBJECT_TYPE (Wrd377.Obj));
  if (! ((Wrd378.uLng) == 1))
    goto label_235;
  (Wrd375.pObj) = (OBJECT_ADDRESS (Wrd377.Obj));
  (Wrd376.Obj) = ((Wrd375.pObj) [1]);
  (* (--Rsp)) = (Wrd376.Obj);

DEFLABEL (label_234)
  (Wrd386.Obj) = (Rsp [3]);
  (Wrd387.uLng) = (OBJECT_TYPE (Wrd386.Obj));
  if (! ((Wrd387.uLng) == 1))
    goto label_233;
  (Wrd385.pObj) = (OBJECT_ADDRESS (Wrd386.Obj));
  (Wrd383.Obj) = ((Wrd385.pObj) [1]);

DEFLABEL (label_232)
  (Wrd394.uLng) = (OBJECT_TYPE (Wrd383.Obj));
  if (! ((Wrd394.uLng) == 1))
    goto label_231;
  (Wrd392.pObj) = (OBJECT_ADDRESS (Wrd383.Obj));
  (Wrd393.Obj) = ((Wrd392.pObj) [1]);
  (* (--Rsp)) = (Wrd393.Obj);
  goto label_161;

DEFLABEL (label_231)
  (Wrd398.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd398.Obj);
  (* (--Rsp)) = (Wrd383.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_123)
  goto label_163;

DEFLABEL (label_233)
  (Wrd391.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd391.Obj);
  (* (--Rsp)) = (Wrd386.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_122)
  (Wrd383.Obj) = Rvl;
  goto label_232;

DEFLABEL (label_235)
  (Wrd382.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd382.Obj);
  (* (--Rsp)) = (Wrd377.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_121)
  (* (--Rsp)) = Rvl;
  goto label_234;

DEFLABEL (label_236)
  (Wrd133.Obj) = ((SCHEME_OBJECT) 0);
  goto label_186;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (Wrd133.Obj) = Rvl;
  goto label_185;

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_3_25);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_237;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_237)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_239;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_238)
  Rdl = (& (Rsp [6]));
  goto loop_55;

DEFLABEL (label_239)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_53]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_124)
  (* (--Rsp)) = Rvl;
  goto label_238;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_156;
  goto label_155;

DEFLABEL (lambda_131)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_3_51);
  (Wrd5.Obj) = (current_block [OBJECT_3_23]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_52]));

DEFLABEL (loop_132)
DEFLABEL (loop_71)
  DLINK_INTERRUPT_CHECK (25, LABEL_3_57);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_56]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 1)
    goto label_243;

DEFLABEL (label_242)
  Rsp = (& (Rsp [1]));
  (Wrd68.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd68.Obj));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_241)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_240;
  Rvl = (Wrd16.Obj);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_240)
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_41]));

DEFLABEL (label_243)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_54]))));
  (* (--Rsp)) = (Wrd27.Obj);
  if (! ((Wrd11.uLng) == 1))
    goto label_247;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_246)
  (Wrd41.Obj) = (Rsp [6]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_41]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_3_54);
  (Wrd46.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd46.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_242;
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd51.pObj)));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_245;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [1]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_244)
  Rdl = (& (Rsp [2]));
  goto loop_71;

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_3_56);
  (Wrd44.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd44.Obj));
  (* (--Rsp)) = Rvl;
  goto label_241;

DEFLABEL (label_245)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_55]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_127)
  (Wrd59.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd59.Obj));
  (* (--Rsp)) = Rvl;
  goto label_244;

DEFLABEL (label_247)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_58]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_125)
  (Wrd33.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd33.Obj));
  (* (--Rsp)) = Rvl;
  goto label_246;

DEFLABEL (loop_133)
DEFLABEL (loop_55)
  DLINK_INTERRUPT_CHECK (25, LABEL_3_62);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_61]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 1)
    goto label_251;

DEFLABEL (label_250)
  Rsp = (& (Rsp [1]));
  (Wrd68.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd68.Obj));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_249)
  (Wrd16.Obj) = (Rsp [0]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_248;
  Rvl = (Wrd16.Obj);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_248)
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_41]));

DEFLABEL (label_251)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_59]))));
  (* (--Rsp)) = (Wrd27.Obj);
  if (! ((Wrd11.uLng) == 1))
    goto label_255;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_254)
  (Wrd41.Obj) = (Rsp [6]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_41]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_3_59);
  (Wrd46.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd46.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_250;
  (Wrd50.Obj) = (Rsp [3]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd51.pObj)));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_253;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [1]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_252)
  Rdl = (& (Rsp [2]));
  goto loop_55;

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_3_61);
  (Wrd44.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd44.Obj));
  (* (--Rsp)) = Rvl;
  goto label_249;

DEFLABEL (label_253)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_60]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_128)
  (Wrd59.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd59.Obj));
  (* (--Rsp)) = Rvl;
  goto label_252;

DEFLABEL (label_255)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_63]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_126)
  (Wrd33.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd33.Obj));
  (* (--Rsp)) = Rvl;
  goto label_254;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define TAG_4_6 1
#define ENVIRONMENT_LABEL_4_3 12
#define DEBUGGING_LABEL_4_2 11
#define EXECUTE_CACHE_4_8 7
#define EXECUTE_CACHE_4_7 9
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_check_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_4_4);
      goto syntax_matchP__1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntax_matchP__4)
DEFLABEL (syntax_matchP__1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_4_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

INVOKE_INTERFACE_TARGET_0
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
syntax_check_so_be4adda26b4b0fb0 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 4)
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

static const struct liarc_code_S arr_decl_syntax_check_so_be4adda26b4b0fb0 [4] =
  {
    { "syntax_check_so_code_1", 4, syntax_check_so_code_1 },
    { "syntax_check_so_code_2", 1, syntax_check_so_code_2 },
    { "syntax_check_so_code_3", 51, syntax_check_so_code_3 },
    { "syntax_check_so_code_4", 2, syntax_check_so_code_4 }
  };

int
decl_syntax_check_so_be4adda26b4b0fb0 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_syntax_check_so_be4adda26b4b0fb0);
  return (0);
}

DECLARE_COMPILED_CODE ("syntax-check.so", 3, decl_syntax_check_so_be4adda26b4b0fb0, syntax_check_so_be4adda26b4b0fb0)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_syntax_check_so_data_be4adda26b4b0fb0 [1054] =
  "\x9a\x01\x08\xf4\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\xc1\xb9"
  "\x28\x0d\xba\x28\x0d\xbb\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbc\x1d\xb0\x82\x88\x0c\x28\x0d\x23\x22\x29\x21\x17\x2b"
  "\xbd\x1d\xb0\x83\x88\xb2\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x08\x0d\x0d\x0d\x0d\xc1\x06\x07\x85\xc2\x02\xb1\x28\x0d\x28"
  "\xb2\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x84\x88\x28\x0d"
  "\x28\xb2\x23\x22\x29\x22\x29\x21\x17\x2b\xb8\x9b\xbe\x88\xb6\xb0"
  "\x2a\xb1\x2a\xb5\x2a\xb4\x2a\x9b\x0d\xb2\xb3\x0d\x9b\x28\x0d\x26"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5b\x2f\x55\x73\x65\x72\x73"
  "\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65"
  "\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d"
  "\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d"
  "\x65\x2f\x2e\x2f\x73\x79\x6e\x74\x61\x78\x2d\x63\x68\x65\x63\x6b"
  "\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x04\x63\x64\x72\x04"
  "\x0e\x73\x79\x6e\x74\x61\x78\x2d\x6d\x61\x74\x63\x68\x3f\x03\x12"
  "\x69\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x2d\x73\x79\x6e\x74\x61"
  "\x78\x03\x07\x0a\x81\x85\x02\x06\x08\x81\x89\x02\x05\x06\x81\x87"
  "\x02\x04\x04\x84\x06\x09\x13\x02\x19\x49\x6c\x6c\x2d\x66\x6f\x72"
  "\x6d\x65\x64\x20\x73\x70\x65\x63\x69\x61\x6c\x20\x66\x6f\x72\x6d"
  "\x3a\x04\x0d\x73\x79\x6e\x74\x61\x78\x2d\x65\x72\x72\x6f\x72\x02"
  "\x08\x04\x83\x04\x03\x0a\x02\x06\x69\x6e\x64\x65\x78\x04\x75\x72"
  "\x69\x05\x63\x68\x61\x72\x07\x73\x74\x72\x69\x6e\x67\x08\x6d\x69"
  "\x74\x2d\x62\x76\x6c\x09\x72\x34\x72\x73\x2d\x62\x76\x6c\x05\x66"
  "\x6f\x72\x6d\x0b\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x06\x64"
  "\x61\x74\x75\x6d\x0b\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x07"
  "\x73\x79\x6d\x62\x6f\x6c\x06\x71\x75\x6f\x74\x65\x02\x3f\x02\x2b"
  "\x02\x2a\x04\x63\x61\x72\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79"
  "\x70\x65\x3f\x1e\x03\x0b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f"
  "\x04\x04\x05\x65\x71\x76\x3f\x03\x0c\x69\x64\x65\x6e\x74\x69\x66"
  "\x69\x65\x72\x3f\x03\x12\x72\x34\x72\x73\x2d\x6c\x61\x6d\x62\x64"
  "\x61\x2d\x6c\x69\x73\x74\x3f\x03\x11\x6d\x69\x74\x2d\x6c\x61\x6d"
  "\x62\x64\x61\x2d\x6c\x69\x73\x74\x3f\x04\x06\x2d\x3e\x75\x72\x69"
  "\x03\x1b\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e\x6e\x65\x67\x61\x74"
  "\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x3f\x04\x19\x65\x72"
  "\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72"
  "\x67\x75\x6d\x65\x6e\x74\x0a\x3b\x68\xfd\xff\x03\x3a\x66\xff\xff"
  "\x03\x39\x64\xfd\xff\x03\x38\x62\xfd\xff\x03\x37\x60\xfd\xff\x03"
  "\x36\x5e\xfd\xff\x03\x35\x5c\xff\xff\x03\x34\x5a\xfd\xff\x03\x33"
  "\x58\xfd\xff\x03\x32\x56\xfd\xff\x03\x31\x54\x81\x8b\x02\x30\x52"
  "\x81\x89\x02\x2f\x50\x81\x85\x02\x2e\x4e\x81\x87\x02\x2d\x4c\x81"
  "\x87\x02\x2c\x4a\x81\x87\x02\x2b\x48\x81\x83\x02\x2a\x46\x81\x8b"
  "\x02\x29\x44\x81\x89\x02\x28\x42\x81\x87\x02\x27\x40\x81\x87\x02"
  "\x26\x3e\x81\x87\x02\x25\x3c\x81\x87\x02\x24\x3a\x81\x87\x02\x23"
  "\x38\x81\x87\x02\x22\x36\x81\x87\x02\x21\x34\x81\x8d\x02\x20\x32"
  "\x81\x8d\x02\x1f\x30\x81\x8b\x02\x1e\x2e\x81\x87\x02\x1d\x2c\x81"
  "\x8b\x02\x1c\x2a\x81\x89\x02\x1b\x28\x81\x89\x02\x1a\x26\x81\x87"
  "\x02\x19\x24\x81\x87\x02\x18\x22\x81\x87\x02\x17\x20\x81\x89\x02"
  "\x16\x1e\x81\x89\x02\x15\x1c\x81\x87\x02\x14\x1a\x81\x87\x02\x13"
  "\x18\x81\x87\x02\x12\x16\x81\x85\x02\x11\x14\x81\x83\x02\x10\x12"
  "\x81\x85\x02\x0f\x10\x81\x85\x02\x0e\x0e\x81\x87\x02\x0d\x0c\x81"
  "\x8b\x02\x0c\x0a\x81\x8b\x02\x0b\x08\x81\x89\x02\x0a\x06\x81\x89"
  "\x02\x09\x04\x84\x06\x67\x95\x01\x02\x04\x04\x61\x6e\x79\x04\x03"
  "\x3d\x06\x81\x85\x02\x3c\x04\x84\x06\x05\x0d\x04\x04\x04\x04\x0f"
  "\x73\x79\x6e\x74\x61\x78\x2d\x6d\x61\x74\x63\x68\x3f\x2a\x0d\x73"
  "\x79\x6e\x74\x61\x78\x2d\x63\x68\x65\x63\x6b\x05\x10\x64\x65\x66"
  "\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80"
  "\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
syntax_check_so_data_be4adda26b4b0fb0 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_syntax_check_so_data_be4adda26b4b0fb0 [0]))), (sizeof (prog_syntax_check_so_data_be4adda26b4b0fb0)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("syntax-check.so", syntax_check_so_data_be4adda26b4b0fb0)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("syntax-check.so", "3f360fc5487eab04")
