/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:23-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_7 5
#define LABEL_1_5 7
#define LABEL_1_6 9
#define LABEL_1_10 11
#define LABEL_1_13 13
#define LABEL_1_15 15
#define LABEL_1_12 17
#define LABEL_1_21 19
#define LABEL_1_24 21
#define LABEL_1_26 23
#define LABEL_1_22 25
#define LABEL_1_23 27
#define LABEL_1_30 29
#define LABEL_1_19 31
#define LABEL_1_16 33
#define LABEL_1_34 35
#define LABEL_1_17 37
#define LABEL_1_35 39
#define LABEL_1_36 41
#define LABEL_1_39 43
#define LABEL_1_44 45
#define LABEL_1_32 47
#define LABEL_1_46 49
#define LABEL_1_48 51
#define LABEL_1_49 53
#define LABEL_1_50 55
#define LABEL_1_51 57
#define LABEL_1_52 59
#define LABEL_1_59 61
#define LABEL_1_62 63
#define LABEL_1_37 65
#define LABEL_1_38 67
#define LABEL_1_40 69
#define TAG_1_41 33
#define LABEL_1_65 71
#define LABEL_1_42 73
#define LABEL_1_63 75
#define LABEL_1_60 77
#define LABEL_1_69 79
#define LABEL_1_61 81
#define LABEL_1_53 83
#define LABEL_1_70 85
#define LABEL_1_54 87
#define LABEL_1_55 89
#define LABEL_1_71 91
#define LABEL_1_57 93
#define LABEL_1_72 95
#define LABEL_1_58 97
#define LABEL_1_64 99
#define LABEL_1_75 101
#define LABEL_1_77 103
#define LABEL_1_80 105
#define LABEL_1_81 107
#define LABEL_1_82 109
#define LABEL_1_67 111
#define TAG_1_68 54
#define LABEL_1_85 113
#define LABEL_1_76 115
#define LABEL_1_78 117
#define LABEL_1_79 119
#define LABEL_1_73 121
#define LABEL_1_88 123
#define LABEL_1_74 125
#define LABEL_1_83 127
#define LABEL_1_89 129
#define LABEL_1_84 131
#define LABEL_1_86 133
#define ENVIRONMENT_LABEL_1_3 187
#define DEBUGGING_LABEL_1_2 186
#define OBJECT_1_12 185
#define OBJECT_1_11 184
#define OBJECT_1_10 183
#define OBJECT_1_9 182
#define OBJECT_1_8 181
#define OBJECT_1_7 180
#define OBJECT_1_6 179
#define OBJECT_1_5 178
#define OBJECT_1_4 177
#define OBJECT_1_3 176
#define OBJECT_1_2 175
#define OBJECT_1_1 174
#define OBJECT_1_0 173
#define EXECUTE_CACHE_1_87 135
#define EXECUTE_CACHE_1_66 137
#define EXECUTE_CACHE_1_56 139
#define EXECUTE_CACHE_1_47 141
#define EXECUTE_CACHE_1_45 143
#define EXECUTE_CACHE_1_43 145
#define EXECUTE_CACHE_1_33 147
#define EXECUTE_CACHE_1_31 149
#define EXECUTE_CACHE_1_29 151
#define EXECUTE_CACHE_1_28 153
#define EXECUTE_CACHE_1_27 155
#define EXECUTE_CACHE_1_25 157
#define EXECUTE_CACHE_1_20 159
#define EXECUTE_CACHE_1_18 161
#define EXECUTE_CACHE_1_14 163
#define EXECUTE_CACHE_1_11 165
#define EXECUTE_CACHE_1_9 167
#define EXECUTE_CACHE_1_8 169
#define FREE_REFERENCE_1_0 172
#define FREE_REFERENCES_LABEL_1_0 134
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgproc_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd127;
  machine_word Wrd121;
  machine_word Wrd123;
  machine_word Wrd117;
  machine_word Wrd120;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd111;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd102;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd13;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd149;
  machine_word Wrd142;
  machine_word Wrd144;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd145;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd126;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd108;
  machine_word Wrd151;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd82;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd75;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd51;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd44;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd9;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_1_4);
      goto generate_procedure_header_86;

    case 1:
      current_block = (Rpc - LABEL_1_7);
      goto label_88;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_1_13);
      goto label_89;

    case 6:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_78;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_1_21);
      goto label_90;

    case 9:
      current_block = (Rpc - LABEL_1_24);
      goto label_91;

    case 10:
      current_block = (Rpc - LABEL_1_26);
      goto continuation_84;

    case 11:
      current_block = (Rpc - LABEL_1_22);
      goto continuation_83;

    case 12:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_82;

    case 13:
      current_block = (Rpc - LABEL_1_30);
      goto continuation_76;

    case 14:
      current_block = (Rpc - LABEL_1_19);
      goto continuation_75;

    case 15:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_6;

    case 16:
      current_block = (Rpc - LABEL_1_34);
      goto continuation_37;

    case 17:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_7;

    case 18:
      current_block = (Rpc - LABEL_1_35);
      goto label_95;

    case 19:
      current_block = (Rpc - LABEL_1_36);
      goto label_93;

    case 20:
      current_block = (Rpc - LABEL_1_39);
      goto label_94;

    case 21:
      current_block = (Rpc - LABEL_1_44);
      goto label_92;

    case 22:
      current_block = (Rpc - LABEL_1_32);
      goto continuation_77;

    case 23:
      current_block = (Rpc - LABEL_1_46);
      goto continuation_39;

    case 24:
      current_block = (Rpc - LABEL_1_48);
      goto label_97;

    case 25:
      current_block = (Rpc - LABEL_1_49);
      goto label_98;

    case 26:
      current_block = (Rpc - LABEL_1_50);
      goto label_99;

    case 27:
      current_block = (Rpc - LABEL_1_51);
      goto label_100;

    case 28:
      current_block = (Rpc - LABEL_1_52);
      goto label_101;

    case 29:
      current_block = (Rpc - LABEL_1_59);
      goto label_102;

    case 30:
      current_block = (Rpc - LABEL_1_62);
      goto label_96;

    case 31:
      current_block = (Rpc - LABEL_1_37);
      goto continuation_13;

    case 32:
      current_block = (Rpc - LABEL_1_38);
      goto continuation_12;

    case 33:
      current_block = (Rpc - LABEL_1_40);
      goto lambda_118;

    case 34:
      current_block = (Rpc - LABEL_1_65);
      goto label_103;

    case 35:
      current_block = (Rpc - LABEL_1_42);
      goto continuation_35;

    case 36:
      current_block = (Rpc - LABEL_1_63);
      goto continuation_53;

    case 37:
      current_block = (Rpc - LABEL_1_60);
      goto continuation_44;

    case 38:
      current_block = (Rpc - LABEL_1_69);
      goto label_104;

    case 39:
      current_block = (Rpc - LABEL_1_61);
      goto continuation_43;

    case 40:
      current_block = (Rpc - LABEL_1_53);
      goto continuation_66;

    case 41:
      current_block = (Rpc - LABEL_1_70);
      goto label_105;

    case 42:
      current_block = (Rpc - LABEL_1_54);
      goto continuation_65;

    case 43:
      current_block = (Rpc - LABEL_1_55);
      goto continuation_60;

    case 44:
      current_block = (Rpc - LABEL_1_71);
      goto label_106;

    case 45:
      current_block = (Rpc - LABEL_1_57);
      goto continuation_71;

    case 46:
      current_block = (Rpc - LABEL_1_72);
      goto label_107;

    case 47:
      current_block = (Rpc - LABEL_1_58);
      goto continuation_70;

    case 48:
      current_block = (Rpc - LABEL_1_64);
      goto continuation_15;

    case 49:
      current_block = (Rpc - LABEL_1_75);
      goto label_112;

    case 50:
      current_block = (Rpc - LABEL_1_77);
      goto label_108;

    case 51:
      current_block = (Rpc - LABEL_1_80);
      goto label_109;

    case 52:
      current_block = (Rpc - LABEL_1_81);
      goto label_110;

    case 53:
      current_block = (Rpc - LABEL_1_82);
      goto label_111;

    case 54:
      current_block = (Rpc - LABEL_1_67);
      goto lambda_119;

    case 55:
      current_block = (Rpc - LABEL_1_85);
      goto label_113;

    case 56:
      current_block = (Rpc - LABEL_1_76);
      goto continuation_32;

    case 57:
      current_block = (Rpc - LABEL_1_78);
      goto continuation_31;

    case 58:
      current_block = (Rpc - LABEL_1_79);
      goto continuation_30;

    case 59:
      current_block = (Rpc - LABEL_1_73);
      goto continuation_22;

    case 60:
      current_block = (Rpc - LABEL_1_88);
      goto label_114;

    case 61:
      current_block = (Rpc - LABEL_1_74);
      goto continuation_21;

    case 62:
      current_block = (Rpc - LABEL_1_83);
      goto continuation_51;

    case 63:
      current_block = (Rpc - LABEL_1_89);
      goto label_115;

    case 64:
      current_block = (Rpc - LABEL_1_84);
      goto continuation_50;

    case 65:
      current_block = (Rpc - LABEL_1_86);
      goto continuation_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_procedure_header_117)
DEFLABEL (generate_procedure_header_86)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_167;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_167;
  (Wrd14.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_166)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_165;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_165;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_164)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_126;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_121;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_120)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_26]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_27]));

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_1_26);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_121)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_125;
  Wrd19 = Wrd23;

DEFLABEL (label_124)
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_22]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd40.Obj) = (Rsp [7]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_123;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd39.Lng))))
    goto label_123;
  (Wrd31.Obj) = ((Wrd37.pObj) [15]);

DEFLABEL (label_122)
  (Wrd50.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (Wrd54.Obj) = (current_block [OBJECT_1_5]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_1_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_1_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (* (--Rsp)) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd42.Obj) = (Rsp [7]);
  (Wrd43.Obj) = (current_block [OBJECT_1_3]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_24]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_91)
  (Wrd31.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_21])), (Wrd20.pObj));

DEFLABEL (label_90)
  (Wrd19.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_126)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [6]);
  if ((Wrd58.Obj) == ((SCHEME_OBJECT) 0))
    goto label_129;
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_1_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_128;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_30]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_31]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_1_30);

DEFLABEL (label_128)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_127)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_33]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_1_32);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (label_129)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_156;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_34]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_155;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd18.Lng))))
    goto label_155;
  (Wrd12.Obj) = ((Wrd16.pObj) [8]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_154)
  (Wrd26.Obj) = (Rsp [0]);
  if (! ((Wrd26.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_130;
  (Wrd34.Obj) = (Rsp [6]);
  (Rsp [0]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_45]));

DEFLABEL (label_130)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_153)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_46]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_47]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_1_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_135;
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_131;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_63]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_43]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_1_63);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_68);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_67])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [6]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_131)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_60]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_61]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd28.Obj) = (Rsp [7]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_134;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd27.Lng))))
    goto label_134;
  (Wrd19.Obj) = ((Wrd25.pObj) [15]);

DEFLABEL (label_133)
  (Wrd38.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd38.Obj);

DEFLABEL (label_132)
  (Wrd144.pObj) = (& (Rhp [-2]));
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd144.pObj)));
  (Wrd149.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd149.Obj);
  (* (Rhp++)) = (Wrd142.Obj);
  (Wrd147.pObj) = (& (Rhp [-2]));
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd147.pObj)));
  (* (--Rsp)) = (Wrd148.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (label_134)
  (Wrd30.Obj) = (Rsp [7]);
  (Wrd31.Obj) = (current_block [OBJECT_1_3]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_62]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_96)
  (Wrd19.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_135)
  (Wrd52.Obj) = (Rsp [5]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_152;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd51.Lng))))
    goto label_152;
  (Wrd43.Obj) = ((Wrd49.pObj) [4]);

DEFLABEL (label_151)
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd66.uLng) == 10))
    goto label_150;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd65.Lng))))
    goto label_150;
  (Wrd60.Obj) = ((Wrd63.pObj) [4]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_149)
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 10))
    goto label_148;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd80.Lng))))
    goto label_148;
  (Wrd72.Obj) = ((Wrd78.pObj) [17]);

DEFLABEL (label_147)
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd95.uLng) == 10))
    goto label_146;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [0]);
  (Wrd94.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd94.Lng))))
    goto label_146;
  (Wrd89.Obj) = ((Wrd92.pObj) [18]);
  (* (--Rsp)) = (Wrd89.Obj);

DEFLABEL (label_145)
  (Wrd101.Obj) = (Rsp [2]);
  if ((Wrd101.Obj) == ((SCHEME_OBJECT) 0))
    goto label_141;
  (Wrd103.Obj) = (Rsp [0]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 26))
    goto label_144;
  (Wrd151.Lng) = (FIXNUM_TO_LONG (Wrd103.Obj));
  if ((Wrd151.Lng) == 0)
    goto label_141;

DEFLABEL (label_140)
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_53]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (Wrd115.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_54]))));
  (* (--Rsp)) = (Wrd115.Obj);
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_55]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (Wrd119.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd119.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_56]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_1_55);
  (Wrd9.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.Obj) = (Rsp [10]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_139;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd22.Lng))))
    goto label_139;
  (Wrd14.Obj) = ((Wrd20.pObj) [15]);

DEFLABEL (label_138)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_1_11]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_1_54);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_1_53);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_137;
  Wrd7 = Wrd11;

DEFLABEL (label_136)
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (label_137)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_70])), (Wrd8.pObj));

DEFLABEL (label_105)
  (Wrd7.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (Wrd25.Obj) = (Rsp [10]);
  (Wrd26.Obj) = (current_block [OBJECT_1_3]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_71]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_106)
  (Wrd14.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_57]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_58]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (Wrd135.Obj) = (Rsp [9]);
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd135.Obj));
  if (! ((Wrd136.uLng) == 10))
    goto label_143;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd135.Obj));
  (Wrd133.Obj) = ((Wrd132.pObj) [0]);
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd133.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd134.Lng))))
    goto label_143;
  (Wrd126.Obj) = ((Wrd132.pObj) [15]);

DEFLABEL (label_142)
  (Wrd145.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd126.Obj);
  (* (Rhp++)) = (Wrd145.Obj);
  goto label_132;

DEFLABEL (label_143)
  (Wrd137.Obj) = (Rsp [9]);
  (Wrd138.Obj) = (current_block [OBJECT_1_3]);
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_59]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_102)
  (Wrd126.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_144)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_52]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_101)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_140;
  goto label_141;

DEFLABEL (label_146)
  (Wrd97.Obj) = (current_block [OBJECT_1_10]);
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_51]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_100)
  (* (--Rsp)) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.Obj) = (current_block [OBJECT_1_9]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_50]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_99)
  (Wrd72.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd68.Obj) = (current_block [OBJECT_1_0]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_49]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_98)
  (* (--Rsp)) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  (Wrd54.Obj) = (Rsp [5]);
  (Wrd55.Obj) = (current_block [OBJECT_1_0]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_48]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_97)
  (Wrd43.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_155)
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.Obj) = (current_block [OBJECT_1_7]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_44]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_92)
  (* (--Rsp)) = Rvl;
  goto label_154;

DEFLABEL (label_156)
  (Wrd89.Obj) = (Rsp [4]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 10))
    goto label_163;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd88.Lng))))
    goto label_163;
  (Wrd37.Obj) = ((Wrd86.pObj) [8]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_158;

DEFLABEL (label_157)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd76.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_41);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_40])));
  Rhp += 1;
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd76.pObj)));
  Wrd77 = Wrd76;
  (Wrd78.Obj) = (Rsp [4]);
  ((Wrd77.pObj) [2]) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_42]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_43]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_1_42);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (* (--Rsp)) = Rvl;
  goto label_127;

DEFLABEL (label_158)
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_162;
  Wrd39 = Wrd43;

DEFLABEL (label_161)
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_37]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_38]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd60.Obj) = (Rsp [7]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_160;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd59.Lng))))
    goto label_160;
  (Wrd51.Obj) = ((Wrd57.pObj) [15]);

DEFLABEL (label_159)
  (Wrd70.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd69.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd69.pObj)));
  (Wrd74.Obj) = (current_block [OBJECT_1_8]);
  (* (Rhp++)) = (Wrd74.Obj);
  (* (Rhp++)) = (Wrd67.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_38);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_37);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (label_160)
  (Wrd62.Obj) = (Rsp [7]);
  (Wrd63.Obj) = (current_block [OBJECT_1_3]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_39]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_94)
  (Wrd51.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_36])), (Wrd40.pObj));

DEFLABEL (label_93)
  (Wrd39.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_163)
  (Wrd91.Obj) = (Rsp [4]);
  (Wrd92.Obj) = (current_block [OBJECT_1_7]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_35]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_95)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_158;
  goto label_157;

DEFLABEL (label_165)
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (current_block [OBJECT_1_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_89)
  (* (--Rsp)) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (current_block [OBJECT_1_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_166;

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_1_61);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_1_60);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_169;
  Wrd6 = Wrd10;

DEFLABEL (label_168)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (label_169)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_69])), (Wrd7.pObj));

DEFLABEL (label_104)
  (Wrd6.Obj) = Rvl;
  goto label_168;

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_1_58);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_1_57);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_171;
  Wrd7 = Wrd11;

DEFLABEL (label_170)
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (label_171)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_72])), (Wrd8.pObj));

DEFLABEL (label_107)
  (Wrd7.Obj) = Rvl;
  goto label_170;

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_1_34);
  (* (--Rsp)) = Rvl;
  goto label_153;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (lambda_118)
  CLOSURE_HEADER (LABEL_1_40);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_185;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_185;
  (Wrd12.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_184)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_66]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_1_64);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_181;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_76]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_180;
  Wrd10 = Wrd14;

DEFLABEL (label_179)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_78]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_79]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_178;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_178;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));

DEFLABEL (label_177)
  (Wrd35.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd41.Obj) = (Rsp [6]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_176;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = ((Wrd45.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd43.Lng)))
    goto label_176;
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));

DEFLABEL (label_175)
  (Wrd46.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd63.Obj) = (Rsp [5]);
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [2]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 10))
    goto label_174;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd62.Lng))))
    goto label_174;
  (Wrd50.Obj) = ((Wrd60.pObj) [15]);

DEFLABEL (label_173)
  (Wrd74.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (Wrd81.Obj) = (current_block [OBJECT_1_12]);
  (* (Rhp++)) = (Wrd81.Obj);
  (* (Rhp++)) = (Wrd75.Obj);

DEFLABEL (label_172)
  (Wrd125.pObj) = (& (Rhp [-2]));
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd125.pObj)));
  (* (--Rsp)) = (Wrd126.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (label_174)
  (Wrd68.Obj) = (Rsp [5]);
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd67.Obj) = ((Wrd69.pObj) [2]);
  (Wrd70.Obj) = (current_block [OBJECT_1_3]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_82]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_111)
  (Wrd50.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd36.Obj) = (Rsp [6]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_81]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_110)
  (Wrd40.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_80]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_109)
  (Wrd26.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_77])), (Wrd11.pObj));

DEFLABEL (label_108)
  (Wrd10.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_181)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_73]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_74]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd101.Obj) = (Rsp [2]);
  (Wrd102.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd103.Obj) = ((Wrd102.pObj) [2]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 10))
    goto label_183;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd100.Lng))))
    goto label_183;
  (Wrd88.Obj) = ((Wrd98.pObj) [15]);

DEFLABEL (label_182)
  (Wrd115.Obj) = (Rsp [4]);
  (Wrd116.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd115.Obj);
  (* (Rhp++)) = (Wrd116.Obj);
  (Wrd114.pObj) = (& (Rhp [-2]));
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd114.pObj)));
  (Wrd120.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd120.Obj);
  (* (Rhp++)) = (Wrd112.Obj);
  (Wrd119.pObj) = (& (Rhp [-2]));
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd119.pObj)));
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd117.Obj);
  (Wrd123.pObj) = (& (Rhp [-2]));
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd123.pObj)));
  (Wrd127.Obj) = (current_block [OBJECT_1_12]);
  (* (Rhp++)) = (Wrd127.Obj);
  (* (Rhp++)) = (Wrd121.Obj);
  goto label_172;

DEFLABEL (label_183)
  (Wrd106.Obj) = (Rsp [2]);
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd105.Obj) = ((Wrd107.pObj) [2]);
  (Wrd108.Obj) = (current_block [OBJECT_1_3]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_75]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_112)
  (Wrd88.Obj) = Rvl;
  goto label_182;

DEFLABEL (label_185)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [2]);
  (Wrd28.Obj) = (current_block [OBJECT_1_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_65]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_103)
  (* (--Rsp)) = Rvl;
  goto label_184;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_1_79);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_1_78);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_1_76);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_86]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_87]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_1_86);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_1_74);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_1_73);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_187;
  Wrd7 = Wrd11;

DEFLABEL (label_186)
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (label_187)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_88])), (Wrd8.pObj));

DEFLABEL (label_114)
  (Wrd7.Obj) = Rvl;
  goto label_186;

DEFLABEL (lambda_119)
  CLOSURE_HEADER (LABEL_1_67);

DEFLABEL (lambda_52)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_84]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_191;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng))))
    goto label_191;
  (Wrd11.Obj) = ((Wrd21.pObj) [15]);

DEFLABEL (label_190)
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd43.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd50.Obj) = (current_block [OBJECT_1_12]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_25]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_1_84);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_29]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_1_83);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_189;
  Wrd7 = Wrd11;

DEFLABEL (label_188)
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

DEFLABEL (label_189)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_89])), (Wrd8.pObj));

DEFLABEL (label_115)
  (Wrd7.Obj) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Wrd31.Obj) = (current_block [OBJECT_1_3]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_85]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_113)
  (Wrd11.Obj) = Rvl;
  goto label_190;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_5 11
#define LABEL_2_9 13
#define TAG_2_10 5
#define LABEL_2_15 15
#define LABEL_2_13 17
#define TAG_2_14 7
#define LABEL_2_17 19
#define LABEL_2_18 21
#define TAG_2_19 9
#define LABEL_2_21 23
#define TAG_2_22 10
#define LABEL_2_25 25
#define LABEL_2_24 27
#define ENVIRONMENT_LABEL_2_3 54
#define DEBUGGING_LABEL_2_2 53
#define OBJECT_2_7 52
#define OBJECT_2_6 51
#define OBJECT_2_5 50
#define OBJECT_2_4 49
#define OBJECT_2_3 48
#define OBJECT_2_2 47
#define OBJECT_2_1 46
#define OBJECT_2_0 45
#define EXECUTE_CACHE_2_27 29
#define EXECUTE_CACHE_2_26 31
#define EXECUTE_CACHE_2_23 33
#define EXECUTE_CACHE_2_20 35
#define EXECUTE_CACHE_2_16 37
#define EXECUTE_CACHE_2_12 39
#define EXECUTE_CACHE_2_11 41
#define FREE_REFERENCE_2_0 44
#define FREE_REFERENCES_LABEL_2_0 28
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgproc_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
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
      current_block = (Rpc - LABEL_2_4);
      goto setup_ic_frame_14;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_2_9);
      goto lambda_24;

    case 6:
      current_block = (Rpc - LABEL_2_15);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto lambda_25;

    case 8:
      current_block = (Rpc - LABEL_2_17);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_2_18);
      goto lambda_26;

    case 10:
      current_block = (Rpc - LABEL_2_21);
      goto lambda_27;

    case 11:
      current_block = (Rpc - LABEL_2_25);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_2_24);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_ic_frame_23)
DEFLABEL (setup_ic_frame_14)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_33;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_33;
  (Wrd10.Obj) = ((Wrd14.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_32)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_31;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd32.Lng))))
    goto label_31;
  (Wrd26.Obj) = ((Wrd30.pObj) [9]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_30)
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_29;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd48.Lng))))
    goto label_29;
  (Wrd42.Obj) = ((Wrd46.pObj) [4]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_28)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd59.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_9])));
  Rhp += 2;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd59.pObj)));
  Wrd62 = Wrd59;
  (Wrd63.Obj) = (Rsp [5]);
  ((Wrd62.pObj) [2]) = (Wrd63.Obj);
  (Wrd61.Obj) = (Rsp [0]);
  ((Wrd62.pObj) [3]) = (Wrd61.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (label_29)
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.Obj) = (current_block [OBJECT_2_3]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_2_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_2_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_2_9);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_13])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd13 = Wrd6;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [4]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_35;
  Wrd18 = Wrd22;

DEFLABEL (label_34)
  (Rsp [2]) = (Wrd18.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd25.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_15])), (Wrd19.pObj));

DEFLABEL (label_19)
  (Wrd18.Obj) = Rvl;
  goto label_34;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_2_13);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_37;
  Wrd5 = Wrd9;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_18])));
  Rhp += 3;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd22 = Wrd13;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd24.pObj) [3]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd24.pObj) [4]);
  ((Wrd22.pObj) [4]) = (Wrd17.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd26.Obj);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_17])), (Wrd6.pObj));

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_36;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_2_18);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_2_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_2_21])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = ((Wrd16.pObj) [2]);
  (Rsp [0]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_23]));

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_2_21);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (current_block [OBJECT_2_4]);
  (Wrd9.Obj) = (current_block [OBJECT_2_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_2_6]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [4]);
  (Rsp [3]) = (Wrd15.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd36.Obj) = ((Wrd17.pObj) [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_39;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd33.Lng))))
    goto label_39;
  (Wrd25.Obj) = ((Wrd31.pObj) [16]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_38)
  (Wrd45.Obj) = (Rsp [4]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [2]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_26]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_24);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_27]));

DEFLABEL (label_39)
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [3]);
  (Wrd41.Obj) = (current_block [OBJECT_2_7]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_25]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_8 7
#define LABEL_3_9 9
#define LABEL_3_15 11
#define LABEL_3_10 13
#define LABEL_3_16 15
#define LABEL_3_18 17
#define LABEL_3_11 19
#define LABEL_3_12 21
#define TAG_3_13 9
#define LABEL_3_21 23
#define LABEL_3_6 25
#define TAG_3_7 11
#define LABEL_3_22 27
#define LABEL_3_23 29
#define LABEL_3_17 31
#define LABEL_3_29 33
#define LABEL_3_30 35
#define LABEL_3_31 37
#define LABEL_3_25 39
#define LABEL_3_24 41
#define LABEL_3_28 43
#define LABEL_3_32 45
#define LABEL_3_34 47
#define LABEL_3_37 49
#define ENVIRONMENT_LABEL_3_3 88
#define DEBUGGING_LABEL_3_2 87
#define OBJECT_3_13 86
#define OBJECT_3_12 85
#define OBJECT_3_11 84
#define OBJECT_3_10 83
#define OBJECT_3_9 82
#define OBJECT_3_8 81
#define OBJECT_3_7 80
#define OBJECT_3_6 79
#define OBJECT_3_5 78
#define OBJECT_3_4 77
#define OBJECT_3_3 76
#define OBJECT_3_2 75
#define OBJECT_3_1 74
#define OBJECT_3_0 73
#define EXECUTE_CACHE_3_40 51
#define EXECUTE_CACHE_3_39 53
#define EXECUTE_CACHE_3_38 55
#define EXECUTE_CACHE_3_36 57
#define EXECUTE_CACHE_3_35 59
#define EXECUTE_CACHE_3_27 61
#define EXECUTE_CACHE_3_26 63
#define EXECUTE_CACHE_3_20 65
#define EXECUTE_CACHE_3_19 67
#define EXECUTE_CACHE_3_33 69
#define EXECUTE_CACHE_3_14 71
#define FREE_REFERENCES_LABEL_3_0 50
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgproc_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd10;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd51;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd67;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd72;
  machine_word Wrd71;
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
      goto setup_stack_frame_35;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_37;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto label_38;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto label_39;

    case 4:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_3_16);
      goto label_40;

    case 7:
      current_block = (Rpc - LABEL_3_18);
      goto label_41;

    case 8:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_3_12);
      goto lambda_49;

    case 10:
      current_block = (Rpc - LABEL_3_21);
      goto continuation_20;

    case 11:
      current_block = (Rpc - LABEL_3_6);
      goto cellify_variable_48;

    case 12:
      current_block = (Rpc - LABEL_3_22);
      goto label_43;

    case 13:
      current_block = (Rpc - LABEL_3_23);
      goto label_42;

    case 14:
      current_block = (Rpc - LABEL_3_17);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_3_29);
      goto label_44;

    case 16:
      current_block = (Rpc - LABEL_3_30);
      goto label_45;

    case 17:
      current_block = (Rpc - LABEL_3_31);
      goto cellify_variables_17;

    case 18:
      current_block = (Rpc - LABEL_3_25);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_3_24);
      goto continuation_22;

    case 20:
      current_block = (Rpc - LABEL_3_28);
      goto continuation_6;

    case 21:
      current_block = (Rpc - LABEL_3_32);
      goto continuation_16;

    case 22:
      current_block = (Rpc - LABEL_3_34);
      goto continuation_25;

    case 23:
      current_block = (Rpc - LABEL_3_37);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_stack_frame_47)
DEFLABEL (setup_stack_frame_35)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_66;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_66;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_65)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd71.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_6])));
  Rhp += 2;
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd71.pObj)));
  (* (--Rsp)) = (Wrd72.Obj);
  Wrd69 = Wrd71;
  (Wrd70.Obj) = (Rsp [2]);
  ((Wrd69.pObj) [2]) = (Wrd70.Obj);
  (Wrd67.Obj) = (Rsp [1]);
  ((Wrd69.pObj) [3]) = (Wrd67.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_64;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd29.Lng))))
    goto label_64;
  (Wrd23.Obj) = ((Wrd27.pObj) [10]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_63)
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_62;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd45.Lng))))
    goto label_62;
  (Wrd39.Obj) = ((Wrd43.pObj) [9]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_61)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd62.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_12])));
  Rhp += 1;
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd62.pObj)));
  Wrd63 = Wrd62;
  (Wrd64.Obj) = (Rsp [9]);
  ((Wrd63.pObj) [2]) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_60;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_60;
  (Wrd11.Obj) = ((Wrd15.pObj) [8]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_59)
  (Wrd25.Obj) = (Rsp [0]);
  if ((Wrd25.Obj) == ((SCHEME_OBJECT) 0))
    goto label_51;
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto cellify_variable_33;

DEFLABEL (label_51)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_58)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.pObj) = (& (Rsp [4]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd45.Obj) = (Rsp [7]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_57;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd44.Lng))))
    goto label_57;
  (Wrd38.Obj) = ((Wrd42.pObj) [7]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_56)
  goto cellify_variables_17;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_17);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.pObj) = (& (Rsp [4]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_55;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd20.Lng))))
    goto label_55;
  (Wrd12.Obj) = ((Wrd18.pObj) [6]);

DEFLABEL (label_54)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_53;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_52)
  goto cellify_variables_17;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_28);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_37]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_38]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_37);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_40]));

DEFLABEL (label_53)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_9]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd23.Obj) = (Rsp [7]);
  (Wrd24.Obj) = (current_block [OBJECT_3_8]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_29]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_44)
  (Wrd12.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd47.Obj) = (Rsp [7]);
  (Wrd48.Obj) = (current_block [OBJECT_3_5]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_60)
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.Obj) = (current_block [OBJECT_3_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.Obj) = (current_block [OBJECT_3_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_3_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (* (--Rsp)) = Rvl;
  goto label_58;

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_3_12);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_20]));

DEFLABEL (cellify_variable_48)
  CLOSURE_HEADER (LABEL_3_6);

DEFLABEL (cellify_variable_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_74;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd47.Lng))))
    goto label_74;
  (Wrd7.Obj) = ((Wrd45.pObj) [18]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_68;

DEFLABEL (label_67)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_73;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 24L) < ((unsigned long) (Wrd33.Lng))))
    goto label_73;
  (Wrd13.Obj) = ((Wrd31.pObj) [25]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_71;

DEFLABEL (label_72)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_21]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_27]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_3_21);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_67;

DEFLABEL (label_71)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_25]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_26]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_3_25);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_69;
  (Wrd31.Obj) = (current_block [OBJECT_3_10]);
  (Wrd32.Obj) = (current_block [OBJECT_3_11]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_3_12]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [5]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [3]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_35]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_3_34);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_39]));

DEFLABEL (label_69)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_70)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_3_11]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_3_12]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (current_block [OBJECT_3_13]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Rsp [1]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_36]));

DEFLABEL (label_73)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_3_7]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_23]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  goto label_72;

DEFLABEL (label_74)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.Obj) = (current_block [OBJECT_3_6]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_43)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  goto label_68;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_3_24);
  (Wrd5.Obj) = Rvl;
  goto label_70;

DEFLABEL (cellify_variables_50)
DEFLABEL (cellify_variables_17)
  INTERRUPT_CHECK (26, LABEL_3_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_33]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_3_32);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_9 5
#define LABEL_4_10 7
#define LABEL_4_6 9
#define LABEL_4_12 11
#define LABEL_4_13 13
#define LABEL_4_7 15
#define TAG_4_8 6
#define LABEL_4_17 17
#define LABEL_4_15 19
#define LABEL_4_16 21
#define ENVIRONMENT_LABEL_4_3 37
#define DEBUGGING_LABEL_4_2 36
#define OBJECT_4_2 35
#define OBJECT_4_1 34
#define OBJECT_4_0 33
#define EXECUTE_CACHE_4_19 23
#define EXECUTE_CACHE_4_18 25
#define EXECUTE_CACHE_4_14 27
#define EXECUTE_CACHE_4_11 29
#define EXECUTE_CACHE_4_5 31
#define FREE_REFERENCES_LABEL_4_0 22
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgproc_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd23;
  machine_word Wrd6;
  machine_word Wrd8;
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
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_4_4);
      goto setup_bindings_10;

    case 1:
      current_block = (Rpc - LABEL_4_9);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_4_10);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_4_6);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_4_12);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_4_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_4_7);
      goto lambda_19;

    case 7:
      current_block = (Rpc - LABEL_4_17);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_4_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_4_16);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (setup_bindings_18)
DEFLABEL (setup_bindings_10)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_4_0])))
    goto label_20;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_5]));

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_7])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  ((Wrd14.pObj) [3]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_28;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_27)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_26;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_4_6);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_24;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_22;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (label_22)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_15)
  (Wrd15.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_14)
  (Wrd6.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_4_7);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_30;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_15);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 14
#define DEBUGGING_LABEL_5_2 13
#define OBJECT_5_3 12
#define OBJECT_5_2 11
#define OBJECT_5_1 10
#define OBJECT_5_0 9
#define EXECUTE_CACHE_5_6 7
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgproc_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd7;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_5_4);
      goto make_auxiliary_push_3;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_auxiliary_push_7)
DEFLABEL (make_auxiliary_push_3)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_12;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd24.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd22.pObj) [18]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_10)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Obj) = (current_block [OBJECT_5_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd18.Obj) = (current_block [OBJECT_5_3]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  goto label_8;

DEFLABEL (label_9)
  (Wrd9.Obj) = (Rsp [1]);

DEFLABEL (label_8)
DEFLABEL (label_11)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (label_12)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_5_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_10 7
#define LABEL_6_9 9
#define LABEL_6_7 11
#define LABEL_6_14 13
#define LABEL_6_12 15
#define LABEL_6_20 17
#define LABEL_6_16 19
#define LABEL_6_23 21
#define LABEL_6_24 23
#define LABEL_6_26 25
#define LABEL_6_28 27
#define LABEL_6_29 29
#define LABEL_6_30 31
#define LABEL_6_31 33
#define LABEL_6_32 35
#define LABEL_6_33 37
#define LABEL_6_19 39
#define LABEL_6_21 41
#define LABEL_6_44 43
#define LABEL_6_45 45
#define LABEL_6_46 47
#define LABEL_6_39 49
#define LABEL_6_37 51
#define LABEL_6_25 53
#define LABEL_6_34 55
#define LABEL_6_41 57
#define LABEL_6_42 59
#define ENVIRONMENT_LABEL_6_3 112
#define DEBUGGING_LABEL_6_2 111
#define OBJECT_6_21 110
#define OBJECT_6_20 109
#define OBJECT_6_19 108
#define OBJECT_6_18 107
#define OBJECT_6_17 106
#define OBJECT_6_16 105
#define OBJECT_6_15 104
#define OBJECT_6_14 103
#define OBJECT_6_13 102
#define OBJECT_6_12 101
#define OBJECT_6_11 100
#define OBJECT_6_10 99
#define OBJECT_6_9 98
#define OBJECT_6_8 97
#define OBJECT_6_7 96
#define OBJECT_6_6 95
#define OBJECT_6_5 94
#define OBJECT_6_4 93
#define OBJECT_6_3 92
#define OBJECT_6_2 91
#define OBJECT_6_1 90
#define OBJECT_6_0 89
#define EXECUTE_CACHE_6_43 61
#define EXECUTE_CACHE_6_40 63
#define EXECUTE_CACHE_6_38 65
#define EXECUTE_CACHE_6_36 67
#define EXECUTE_CACHE_6_35 69
#define EXECUTE_CACHE_6_27 71
#define EXECUTE_CACHE_6_22 73
#define EXECUTE_CACHE_6_18 75
#define EXECUTE_CACHE_6_17 77
#define EXECUTE_CACHE_6_15 79
#define EXECUTE_CACHE_6_13 81
#define EXECUTE_CACHE_6_11 83
#define EXECUTE_CACHE_6_8 85
#define EXECUTE_CACHE_6_6 87
#define FREE_REFERENCES_LABEL_6_0 60
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgproc_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd106;
  machine_word Wrd154;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd167;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd148;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd141;
  machine_word Wrd132;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd139;
  machine_word Wrd131;
  machine_word Wrd123;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd109;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd104;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd82;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd170;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd63;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd47;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd28;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd30;
  machine_word Wrd29;
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
      goto letrec_value_39;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_10);
      goto label_41;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_38;

    case 4:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_6_20);
      goto label_42;

    case 8:
      current_block = (Rpc - LABEL_6_16);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_6_23);
      goto label_43;

    case 10:
      current_block = (Rpc - LABEL_6_24);
      goto label_44;

    case 11:
      current_block = (Rpc - LABEL_6_26);
      goto label_45;

    case 12:
      current_block = (Rpc - LABEL_6_28);
      goto label_46;

    case 13:
      current_block = (Rpc - LABEL_6_29);
      goto label_47;

    case 14:
      current_block = (Rpc - LABEL_6_30);
      goto label_48;

    case 15:
      current_block = (Rpc - LABEL_6_31);
      goto label_49;

    case 16:
      current_block = (Rpc - LABEL_6_32);
      goto label_50;

    case 17:
      current_block = (Rpc - LABEL_6_33);
      goto label_51;

    case 18:
      current_block = (Rpc - LABEL_6_19);
      goto continuation_8;

    case 19:
      current_block = (Rpc - LABEL_6_21);
      goto lambda_6;

    case 20:
      current_block = (Rpc - LABEL_6_44);
      goto label_52;

    case 21:
      current_block = (Rpc - LABEL_6_45);
      goto label_53;

    case 22:
      current_block = (Rpc - LABEL_6_46);
      goto label_54;

    case 23:
      current_block = (Rpc - LABEL_6_39);
      goto continuation_18;

    case 24:
      current_block = (Rpc - LABEL_6_37);
      goto continuation_19;

    case 25:
      current_block = (Rpc - LABEL_6_25);
      goto continuation_24;

    case 26:
      current_block = (Rpc - LABEL_6_34);
      goto continuation_33;

    case 27:
      current_block = (Rpc - LABEL_6_41);
      goto continuation_10;

    case 28:
      current_block = (Rpc - LABEL_6_42);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (letrec_value_56)
DEFLABEL (letrec_value_39)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_90;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_86;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_6_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6_16);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_6_4]))
    goto label_63;
  if (! (Rvl == (current_block [OBJECT_6_13])))
    goto label_58;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_37]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_6_14]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_38]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_6_37);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_58)
  if (! (Rvl == (current_block [OBJECT_6_15])))
    goto label_59;
  (Wrd21.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_39]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_40]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_6_39);
  (Rsp [3]) = Rvl;
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_59)
  if (Rvl == (current_block [OBJECT_6_16]))
    goto label_61;
  if (Rvl == (current_block [OBJECT_6_17]))
    goto label_61;
  (Wrd15.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_6_19]);
  (Rsp [2]) = (Wrd16.Obj);
  goto label_60;

DEFLABEL (label_61)
  (Wrd18.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_6_18]);
  (Rsp [2]) = (Wrd19.Obj);

DEFLABEL (label_60)
DEFLABEL (label_62)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (label_63)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_85;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd39.Lng))))
    goto label_85;
  (Wrd31.Obj) = ((Wrd37.pObj) [4]);

DEFLABEL (label_84)
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_83;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd53.Lng))))
    goto label_83;
  (Wrd47.Obj) = ((Wrd51.pObj) [4]);

DEFLABEL (label_82)
  (Rsp [0]) = (Wrd47.Obj);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_81;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd71.Lng))))
    goto label_81;
  (Wrd63.Obj) = ((Wrd69.pObj) [17]);

DEFLABEL (label_80)
  (Wrd79.Obj) = (Rsp [1]);
  if (! ((Wrd79.Obj) == (Wrd63.Obj)))
    goto label_64;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd170.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd170.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_27]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_6_25);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_64)
  (Wrd89.Obj) = (Rsp [3]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 10))
    goto label_79;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd88.Lng))))
    goto label_79;
  (Wrd82.Obj) = ((Wrd86.pObj) [18]);
  (* (--Rsp)) = (Wrd82.Obj);

DEFLABEL (label_78)
  (Wrd99.Obj) = (Rsp [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 1))
    goto label_77;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd96.Obj) = ((Wrd98.pObj) [0]);

DEFLABEL (label_76)
  if ((Wrd96.Obj) == (current_block [OBJECT_6_9]))
    goto label_66;

DEFLABEL (label_65)
  (Wrd106.Obj) = (Rsp [4]);
  (Rsp [0]) = (Wrd106.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_36]));

DEFLABEL (label_66)
  (Wrd116.Obj) = (Rsp [3]);
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd116.Obj));
  if (! ((Wrd117.uLng) == 10))
    goto label_75;
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd116.Obj));
  (Wrd114.Obj) = ((Wrd113.pObj) [0]);
  (Wrd115.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd115.Lng))))
    goto label_75;
  (Wrd109.Obj) = ((Wrd113.pObj) [15]);
  (* (--Rsp)) = (Wrd109.Obj);

DEFLABEL (label_74)
  (Wrd126.Obj) = (Rsp [1]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 1))
    goto label_73;
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd123.Obj) = ((Wrd125.pObj) [1]);

DEFLABEL (label_72)
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd123.Obj));
  if (! ((Wrd139.uLng) == 10))
    goto label_71;
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd137.Obj) = ((Wrd136.pObj) [0]);
  (Wrd138.Lng) = (FIXNUM_TO_LONG (Wrd137.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd138.Lng))))
    goto label_71;
  (Wrd132.Obj) = ((Wrd136.pObj) [15]);

DEFLABEL (label_70)
  (Wrd145.Obj) = (* (Rsp++));
  if (! ((Wrd132.Obj) == (Wrd145.Obj)))
    goto label_65;
  (Wrd161.Obj) = (Rsp [3]);
  (Wrd162.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd162.uLng) == 10))
    goto label_69;
  (Wrd158.pObj) = (OBJECT_ADDRESS (Wrd161.Obj));
  (Wrd159.Obj) = ((Wrd158.pObj) [0]);
  (Wrd160.Lng) = (FIXNUM_TO_LONG (Wrd159.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd160.Lng))))
    goto label_69;
  (Wrd148.Obj) = ((Wrd158.pObj) [18]);
  if (! ((Wrd148.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_68;

DEFLABEL (label_67)
  (Wrd150.Obj) = (current_block [OBJECT_6_12]);
  (* (--Rsp)) = (Wrd150.Obj);
  (Wrd151.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd151.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (label_68)
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_34]))));
  (* (--Rsp)) = (Wrd154.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_35]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_6_34);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (label_69)
  (Wrd163.Obj) = (Rsp [3]);
  (Wrd164.Obj) = (current_block [OBJECT_6_7]);
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_33]))));
  (* (--Rsp)) = (Wrd167.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  goto label_68;

DEFLABEL (label_71)
  (Wrd141.Obj) = (current_block [OBJECT_6_10]);
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_32]))));
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_50)
  (Wrd132.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_11]), 1);

DEFLABEL (label_49)
  (Wrd123.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd118.Obj) = (Rsp [3]);
  (Wrd119.Obj) = (current_block [OBJECT_6_10]);
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_30]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_29]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_8]), 1);

DEFLABEL (label_47)
  (Wrd96.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd91.Obj) = (Rsp [3]);
  (Wrd92.Obj) = (current_block [OBJECT_6_7]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.Obj) = (current_block [OBJECT_6_6]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_26]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_45)
  (Wrd63.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd56.Obj) = (current_block [OBJECT_6_5]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_44)
  (Wrd47.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Obj) = (current_block [OBJECT_6_5]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_43)
  (Wrd31.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_86)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_87;
  (Wrd28.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_6_2]);
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_18]));

DEFLABEL (label_87)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_89;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd18.Lng))))
    goto label_89;
  (Wrd12.Obj) = ((Wrd16.pObj) [19]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_88)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_19);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_41]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_42]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_43]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_6_42);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_27]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_6_41);
  (Rsp [2]) = Rvl;
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_89)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_6_3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_90)
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_92;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_92;
  (Wrd13.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_91)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (Rsp [2]) = Rvl;
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_92)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_6_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (lambda_57)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_6_21);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_98;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_98;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_97)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_96;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_95)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_94;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd34.Lng))))
    goto label_94;
  (Wrd28.Obj) = ((Wrd32.pObj) [8]);

DEFLABEL (label_93)
  (Rsp [0]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (label_94)
  (Wrd37.Obj) = (current_block [OBJECT_6_21]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_46]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_54)
  (Wrd28.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_45]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_8]), 1);

DEFLABEL (label_53)
  (Wrd21.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_6_20]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_44]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_52)
  (Wrd5.Obj) = Rvl;
  goto label_97;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_9 7
#define LABEL_7_12 9
#define LABEL_7_13 11
#define LABEL_7_14 13
#define LABEL_7_15 15
#define LABEL_7_16 17
#define LABEL_7_17 19
#define LABEL_7_18 21
#define LABEL_7_19 23
#define LABEL_7_20 25
#define LABEL_7_21 27
#define LABEL_7_7 29
#define LABEL_7_23 31
#define TAG_7_24 14
#define LABEL_7_25 33
#define LABEL_7_26 35
#define LABEL_7_29 37
#define ENVIRONMENT_LABEL_7_3 69
#define DEBUGGING_LABEL_7_2 68
#define OBJECT_7_10 67
#define OBJECT_7_9 66
#define OBJECT_7_8 65
#define OBJECT_7_7 64
#define OBJECT_7_6 63
#define OBJECT_7_5 62
#define OBJECT_7_4 61
#define OBJECT_7_3 60
#define OBJECT_7_2 59
#define OBJECT_7_1 58
#define OBJECT_7_0 57
#define EXECUTE_CACHE_7_31 39
#define EXECUTE_CACHE_7_30 41
#define EXECUTE_CACHE_7_28 43
#define EXECUTE_CACHE_7_27 45
#define EXECUTE_CACHE_7_22 47
#define EXECUTE_CACHE_7_11 49
#define EXECUTE_CACHE_7_10 51
#define EXECUTE_CACHE_7_8 53
#define EXECUTE_CACHE_7_6 55
#define FREE_REFERENCES_LABEL_7_0 38
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgproc_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd143;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd137;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd132;
  machine_word Wrd157;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd130;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd114;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd121;
  machine_word Wrd113;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd104;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd91;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd85;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd44;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto close_binding_22;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_21;

    case 3:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_7_13);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_7_14);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_7_15);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_7_16);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_7_17);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_7_18);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_7_19);
      goto label_30;

    case 11:
      current_block = (Rpc - LABEL_7_20);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_7_21);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_1;

    case 14:
      current_block = (Rpc - LABEL_7_23);
      goto lambda_35;

    case 15:
      current_block = (Rpc - LABEL_7_25);
      goto lambda_17;

    case 16:
      current_block = (Rpc - LABEL_7_26);
      goto lambda_18;

    case 17:
      current_block = (Rpc - LABEL_7_29);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_binding_34)
DEFLABEL (close_binding_22)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (label_38)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;

DEFLABEL (label_39)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_28]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_62;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd23.Lng))))
    goto label_62;
  (Wrd15.Obj) = ((Wrd21.pObj) [4]);

DEFLABEL (label_61)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_60;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd37.Lng))))
    goto label_60;
  (Wrd32.Obj) = ((Wrd35.pObj) [4]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_59)
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_58;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd52.Lng))))
    goto label_58;
  (Wrd44.Obj) = ((Wrd50.pObj) [17]);

DEFLABEL (label_57)
  (Wrd60.Obj) = (Rsp [0]);
  if (! ((Wrd60.Obj) == (Wrd44.Obj)))
    goto label_41;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (label_41)
  (Wrd70.Obj) = (Rsp [3]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_56;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd69.Lng))))
    goto label_56;
  (Wrd61.Obj) = ((Wrd67.pObj) [18]);

DEFLABEL (label_55)
  (Rsp [0]) = (Wrd61.Obj);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_54;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd77.Obj) = ((Wrd79.pObj) [0]);

DEFLABEL (label_53)
  if ((Wrd77.Obj) == (current_block [OBJECT_7_5]))
    goto label_43;

DEFLABEL (label_42)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd98.Obj) = (Rsp [2]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 10))
    goto label_52;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd96.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd97.Lng))))
    goto label_52;
  (Wrd91.Obj) = ((Wrd95.pObj) [15]);
  (* (--Rsp)) = (Wrd91.Obj);

DEFLABEL (label_51)
  (Wrd108.Obj) = (Rsp [1]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if (! ((Wrd109.uLng) == 1))
    goto label_50;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd105.Obj) = ((Wrd107.pObj) [1]);

DEFLABEL (label_49)
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if (! ((Wrd121.uLng) == 10))
    goto label_48;
  (Wrd118.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd119.Obj) = ((Wrd118.pObj) [0]);
  (Wrd120.Lng) = (FIXNUM_TO_LONG (Wrd119.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd120.Lng))))
    goto label_48;
  (Wrd114.Obj) = ((Wrd118.pObj) [15]);

DEFLABEL (label_47)
  (Wrd127.Obj) = (* (Rsp++));
  if (! ((Wrd114.Obj) == (Wrd127.Obj)))
    goto label_42;
  (Wrd151.Obj) = (Rsp [2]);
  (Wrd152.uLng) = (OBJECT_TYPE (Wrd151.Obj));
  if (! ((Wrd152.uLng) == 10))
    goto label_46;
  (Wrd148.pObj) = (OBJECT_ADDRESS (Wrd151.Obj));
  (Wrd149.Obj) = ((Wrd148.pObj) [0]);
  (Wrd150.Lng) = (FIXNUM_TO_LONG (Wrd149.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd150.Lng))))
    goto label_46;
  (Wrd130.Obj) = ((Wrd148.pObj) [18]);
  if ((Wrd130.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;

DEFLABEL (label_44)
  (Wrd134.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd134.Obj);
  (Wrd135.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd135.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd138.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_23])));
  Rhp += 1;
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd138.pObj)));
  Wrd139 = Wrd138;
  (Wrd140.Obj) = (Rsp [4]);
  ((Wrd139.pObj) [2]) = (Wrd140.Obj);
  (Rsp [2]) = (Wrd137.Obj);
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_25]))));
  (Rsp [3]) = (Wrd141.Obj);
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_26]))));
  (Rsp [4]) = (Wrd143.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_27]));

DEFLABEL (label_45)
  (Wrd132.Obj) = (current_block [OBJECT_7_8]);
  (Rsp [2]) = (Wrd132.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_22]));

DEFLABEL (label_46)
  (Wrd153.Obj) = (Rsp [2]);
  (Wrd154.Obj) = (current_block [OBJECT_7_3]);
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd153.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_44;

DEFLABEL (label_48)
  (Wrd123.Obj) = (current_block [OBJECT_7_6]);
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_31)
  (Wrd114.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_19]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_7]), 1);

DEFLABEL (label_30)
  (Wrd105.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd100.Obj) = (Rsp [2]);
  (Wrd101.Obj) = (current_block [OBJECT_7_6]);
  (Wrd104.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 1);

DEFLABEL (label_28)
  (Wrd77.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd72.Obj) = (Rsp [3]);
  (Wrd73.Obj) = (current_block [OBJECT_7_3]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_27)
  (Wrd61.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.Obj) = (current_block [OBJECT_7_2]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_26)
  (Wrd44.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd40.Obj) = (current_block [OBJECT_7_0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (current_block [OBJECT_7_0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_24)
  (Wrd15.Obj) = Rvl;
  goto label_61;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_7_23);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_30]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_7_29);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_31]));

DEFLABEL (lambda_36)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_7_25);
  (Wrd5.Obj) = (current_block [OBJECT_7_9]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_22]));

DEFLABEL (lambda_37)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_7_26);
  (Wrd5.Obj) = (current_block [OBJECT_7_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_22]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 13
#define DEBUGGING_LABEL_8_2 12
#define OBJECT_8_0 11
#define EXECUTE_CACHE_8_7 7
#define EXECUTE_CACHE_8_6 9
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rgproc_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_8_4);
      goto letrec_close_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (letrec_close_4)
DEFLABEL (letrec_close_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

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
rgproc_so_0fbd0e55a17b8d7d (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 8)
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

static const struct liarc_code_S arr_decl_rgproc_so_0fbd0e55a17b8d7d [8] =
  {
    { "rgproc_so_code_1", 66, rgproc_so_code_1 },
    { "rgproc_so_code_2", 13, rgproc_so_code_2 },
    { "rgproc_so_code_3", 24, rgproc_so_code_3 },
    { "rgproc_so_code_4", 10, rgproc_so_code_4 },
    { "rgproc_so_code_5", 2, rgproc_so_code_5 },
    { "rgproc_so_code_6", 29, rgproc_so_code_6 },
    { "rgproc_so_code_7", 18, rgproc_so_code_7 },
    { "rgproc_so_code_8", 2, rgproc_so_code_8 }
  };

int
decl_rgproc_so_0fbd0e55a17b8d7d (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rgproc_so_0fbd0e55a17b8d7d);
  return (0);
}

DECLARE_COMPILED_CODE ("rgproc.so", 3, decl_rgproc_so_0fbd0e55a17b8d7d, rgproc_so_0fbd0e55a17b8d7d)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rgproc_so_data_0fbd0e55a17b8d7d [3528] =
  "\xbf\x01\x17\xa9\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\x0d\x02"
  "\x02\x0d\x02\x0c\x0d\x08\x02\x80\xc2\xb9\x83\x0d\x24\x28\x0d\x28"
  "\x0d\xba\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xbb\x28"
  "\x0d\x28\x0d\x28\x0d\xbc\x28\x0d\xbd\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0"
  "\x82\x88\x02\x0d\xbf\x08\x0d\x83\x02\xb1\x02\xb2\x24\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88"
  "\x0d\x1c\xb7\x08\x0d\xc1\xbf\x85\x02\x02\x86\x02\x02\x02\xb1\x83"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x84\x88\xb7\xc1\x1c\x08\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x85\x88\x1b"
  "\x08\xb1\x02\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x86\x88\x02\x84\x0c\x0c\x0d\x0d\x0d\x0d\x0d\x0c\xb7\x02\x0d\x1c"
  "\x1b\x02\x02\x83\x0d\x02\x0c\xb1\x82\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x28\xb4\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\xb7\x02"
  "\x1b\x1b\x02\x02\xb1\x83\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\xb4\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x9f\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\xb2\x2a\x1b\x2a\x1b\x2a\xb6\x2a\x9f\x1b\x1b\x1b\x1b\x1b\xb5\xb3"
  "\x0d\x9f\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5b\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74\x6c\x67\x65\x6e\x2f\x72"
  "\x67\x70\x72\x6f\x63\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x11"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72"
  "\x0f\x63\x6c\x6f\x73\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72\x12"
  "\x11\x16\x6f\x70\x65\x6e\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x68\x65\x61\x64\x65\x72\x08\x19\x49\x6e\x6c\x69\x6e\x69\x6e"
  "\x67\x20\x61\x20\x72\x65\x61\x6c\x20\x63\x6c\x6f\x73\x75\x72\x65"
  "\x21\x14\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68"
  "\x65\x61\x64\x65\x72\x0f\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65"
  "\x66\x15\x73\x65\x74\x2d\x73\x6e\x6f\x64\x65\x2d\x6e\x65\x78\x74"
  "\x2d\x65\x64\x67\x65\x21\x02\x03\x17\x6d\x61\x6b\x65\x2d\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x04"
  "\x11\x73\x63\x66\x67\x2a\x73\x63\x66\x67\x2d\x3e\x73\x63\x66\x67"
  "\x21\x04\x1e\x73\x65\x74\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x6f\x66\x66\x73\x65\x74\x21"
  "\x03\x0a\x69\x63\x2d\x62\x6c\x6f\x63\x6b\x3f\x03\x13\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2f\x63\x6c\x6f\x73\x75\x72\x65\x3f\x03"
  "\x1a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x76\x69\x72\x74\x75"
  "\x61\x6c\x6c\x79\x2d\x6f\x70\x65\x6e\x3f\x03\x15\x6d\x61\x6b\x65"
  "\x2d\x72\x74\x6c\x2d\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e"
  "\x04\x0f\x73\x65\x74\x75\x70\x2d\x69\x63\x2d\x66\x72\x61\x6d\x65"
  "\x04\x0b\x6e\x6f\x64\x65\x2d\x3e\x73\x63\x66\x67\x03\x0c\x6d\x61"
  "\x6b\x65\x2d\x73\x62\x6c\x6f\x63\x6b\x04\x06\x65\x72\x72\x6f\x72"
  "\x04\x12\x73\x65\x74\x75\x70\x2d\x73\x74\x61\x63\x6b\x2d\x66\x72"
  "\x61\x6d\x65\x03\x19\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61"
  "\x72\x69\x74\x79\x2d\x65\x6e\x63\x6f\x64\x69\x6e\x67\x03\x2d\x63"
  "\x6c\x6f\x73\x75\x72\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x6e\x65\x65\x64\x73\x2d\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d"
  "\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x3f\x03\x1b\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2f\x74\x72\x69\x76\x69\x61\x6c\x2d\x63"
  "\x6c\x6f\x73\x75\x72\x65\x3f\x03\x1b\x63\x6c\x6f\x73\x75\x72\x65"
  "\x2d\x62\x6c\x6f\x63\x6b\x2d\x65\x6e\x74\x72\x79\x2d\x6e\x75\x6d"
  "\x62\x65\x72\x03\x1a\x73\x74\x61\x63\x6b\x2d\x62\x6c\x6f\x63\x6b"
  "\x2f\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b\x3f\x02\x12"
  "\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x6f\x70\x2d\x6c\x69\x6e"
  "\x6b\x13\x45\x86\x01\x81\x87\x02\x44\x84\x01\x81\x89\x02\x43\x82"
  "\x01\x81\x87\x02\x42\x80\x01\x81\x87\x02\x41\x7e\x81\x89\x02\x40"
  "\x7c\x81\x87\x02\x3f\x7a\x81\x87\x02\x3e\x78\x81\x8d\x02\x3d\x76"
  "\x81\x8b\x02\x3c\x74\x81\x87\x02\x3b\x72\x81\x8b\x02\x3a\x70\x81"
  "\x87\x02\x39\x6e\x81\x91\x02\x38\x6c\x81\x91\x02\x37\x6a\x81\x8f"
  "\x02\x36\x68\x81\x89\x02\x35\x66\x81\x8b\x02\x34\x64\x81\x87\x02"
  "\x33\x62\x81\x89\x02\x32\x60\x81\x87\x02\x31\x5e\x81\x87\x02\x30"
  "\x5c\x81\x8d\x02\x2f\x5a\x81\x8b\x02\x2e\x58\x81\x89\x02\x2d\x56"
  "\x81\x87\x02\x2c\x54\x81\x87\x02\x2b\x52\x81\x85\x02\x2a\x50\x81"
  "\x85\x02\x29\x4e\x81\x83\x02\x28\x4c\x81\x83\x02\x27\x4a\x81\x87"
  "\x02\x26\x48\x81\x89\x02\x25\x46\x81\x87\x02\x24\x44\x81\x89\x02"
  "\x23\x42\x81\x87\x02\x22\x40\x81\x87\x02\x21\x3e\x81\x8b\x02\x20"
  "\x3c\x81\x87\x02\x1f\x3a\x81\x85\x02\x1e\x38\x81\x85\x02\x1d\x36"
  "\x81\x83\x02\x1c\x34\x81\x83\x02\x1b\x32\x81\x83\x02\x1a\x30\x81"
  "\x85\x02\x19\x2e\x81\x87\x02\x18\x2c\x81\x8b\x02\x17\x2a\x81\x85"
  "\x02\x16\x28\x81\x85\x02\x15\x26\x81\x85\x02\x14\x24\x81\x85\x02"
  "\x13\x22\x81\x83\x02\x12\x20\x81\x85\x02\x11\x1e\x81\x85\x02\x10"
  "\x1c\x81\x89\x02\x0f\x1a\x81\x87\x02\x0e\x18\x81\x85\x02\x0d\x16"
  "\x81\x8b\x02\x0c\x14\x81\x85\x02\x0b\x12\x81\x83\x02\x0a\x10\x81"
  "\x83\x02\x09\x0e\x81\x85\x02\x08\x0c\x81\x83\x02\x07\x0a\x81\x8b"
  "\x02\x06\x08\x81\x89\x02\x05\x06\x81\x8d\x02\x04\x04\x85\x08\x85"
  "\x01\xbc\x01\x02\x10\x06\x66\x65\x74\x63\x68\x0c\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x09\x0a\x02\x05\x04\x6d\x61\x70\x09"
  "\x03\x0d\x73\x63\x66\x67\x2a\x2d\x3e\x73\x63\x66\x67\x21\x0a\x05"
  "\x10\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x72\x76\x61\x6c\x75\x65"
  "\x05\x18\x6c\x6f\x61\x64\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79"
  "\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x04\x1d\x77\x72\x61\x70\x2d"
  "\x77\x69\x74\x68\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f"
  "\x6e\x2d\x65\x6e\x74\x72\x79\x04\x17\x69\x6e\x74\x65\x72\x6e\x2d"
  "\x73\x63\x6f\x64\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x21\x06"
  "\x1f\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x69\x6e\x74\x65\x72\x70"
  "\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x3a\x73\x65\x74\x21\x08"
  "\x52\x1c\x81\x89\x02\x51\x1a\x81\x8b\x02\x50\x18\x81\x85\x02\x4f"
  "\x16\x81\x85\x02\x4e\x14\x81\x85\x02\x4d\x12\x81\x85\x02\x4c\x10"
  "\x81\x89\x02\x4b\x0e\x81\x87\x02\x4a\x0c\x81\x85\x02\x49\x0a\x81"
  "\x8b\x02\x48\x08\x81\x89\x02\x47\x06\x81\x87\x02\x46\x04\x84\x06"
  "\x1b\x37\x0b\x02\x0a\x63\x65\x6c\x6c\x2d\x63\x6f\x6e\x73\x0c\x0e"
  "\x73\x74\x61\x63\x6b\x2d\x70\x6f\x69\x6e\x74\x65\x72\x04\x63\x64"
  "\x72\x19\x12\x08\x09\x0a\x05\x09\x04\x09\x03\x0a\x05\x0e\x63\x6c"
  "\x6f\x73\x65\x2d\x62\x69\x6e\x64\x69\x6e\x67\x09\x03\x12\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x2f\x72\x65\x67\x69\x73\x74\x65\x72\x03"
  "\x17\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x69\x6e\x6c\x69\x6e"
  "\x65\x2d\x63\x6f\x64\x65\x3f\x04\x10\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x2d\x6f\x66\x66\x73\x65\x74\x04\x14\x72\x74\x6c\x3a\x6d\x61"
  "\x6b\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0d\x05\x0f"
  "\x73\x65\x74\x75\x70\x2d\x62\x69\x6e\x64\x69\x6e\x67\x73\x0e\x04"
  "\x1b\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x6f\x66\x66\x73\x65\x74\x07\x0d\x73\x63\x66"
  "\x67\x2d\x61\x70\x70\x65\x6e\x64\x21\x0c\x6a\x32\x81\x8f\x02\x69"
  "\x30\x81\x85\x02\x68\x2e\x81\x85\x02\x67\x2c\x81\x8f\x02\x66\x2a"
  "\x81\x85\x02\x65\x28\x81\x87\x02\x64\x26\x81\x85\x02\x63\x24\x81"
  "\x93\x02\x62\x22\x81\x93\x02\x61\x20\x81\x8f\x02\x60\x1e\x81\x85"
  "\x02\x5f\x1c\x81\x85\x02\x5e\x1a\x81\x85\x02\x5d\x18\x81\x85\x02"
  "\x5c\x16\x81\x87\x02\x5b\x14\x81\x8f\x02\x5a\x12\x81\x93\x02\x59"
  "\x10\x81\x8f\x02\x58\x0e\x81\x8d\x02\x57\x0c\x81\x8d\x02\x56\x0a"
  "\x81\x8b\x02\x55\x08\x81\x89\x02\x54\x06\x81\x85\x02\x53\x04\x84"
  "\x06\x31\x59\x0f\x02\x04\x63\x61\x72\x10\x03\x0a\x05\x0d\x6c\x65"
  "\x74\x72\x65\x63\x2d\x76\x61\x6c\x75\x65\x0a\x05\x0e\x04\x14\x6d"
  "\x61\x6b\x65\x2d\x61\x75\x78\x69\x6c\x69\x61\x72\x79\x2d\x70\x75"
  "\x73\x68\x11\x04\x06\x74\x16\x81\x89\x02\x73\x14\x81\x87\x02\x72"
  "\x12\x81\x8d\x02\x71\x10\x81\x87\x02\x70\x0e\x81\x87\x02\x6f\x0c"
  "\x81\x87\x02\x6e\x0a\x81\x87\x02\x6d\x08\x81\x8d\x02\x6c\x06\x81"
  "\x8b\x02\x6b\x04\x85\x08\x15\x26\x02\x0c\x12\x03\x0e\x72\x74\x6c"
  "\x3a\x6d\x61\x6b\x65\x2d\x70\x75\x73\x68\x02\x76\x06\x81\x85\x02"
  "\x75\x04\x84\x06\x05\x0f\x0c\x02\x08\x17\x55\x6e\x6b\x6e\x6f\x77"
  "\x6e\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x20\x74\x79\x70\x65"
  "\x1f\x4c\x65\x74\x72\x65\x63\x20\x76\x61\x6c\x75\x65\x20\x69\x73"
  "\x20\x6f\x70\x65\x6e\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x0e"
  "\x6f\x70\x65\x6e\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x0e\x6f\x70"
  "\x65\x6e\x2d\x65\x78\x74\x65\x72\x6e\x61\x6c\x10\x74\x72\x69\x76"
  "\x69\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x08\x75\x73\x65\x2d"
  "\x65\x6e\x76\x03\x69\x63\x2d\x6c\x65\x74\x72\x65\x63\x2d\x76\x61"
  "\x6c\x75\x65\x3a\x20\x4e\x6f\x6e\x2d\x69\x6e\x64\x69\x72\x65\x63"
  "\x74\x65\x64\x20\x73\x68\x61\x72\x65\x64\x20\x73\x69\x62\x6c\x69"
  "\x6e\x67\x21\x0f\x0b\x69\x6e\x64\x69\x72\x65\x63\x74\x65\x64\x12"
  "\x10\x12\x11\x08\x63\x6c\x6f\x73\x75\x72\x65\x13\x1d\x55\x6e\x6b"
  "\x6e\x6f\x77\x6e\x20\x6c\x65\x74\x72\x65\x63\x20\x62\x69\x6e\x64"
  "\x69\x6e\x67\x20\x76\x61\x6c\x75\x65\x03\x0a\x63\x6f\x6e\x73\x74"
  "\x61\x6e\x74\x3f\x03\x0b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f"
  "\x13\x03\x12\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x73"
  "\x74\x61\x6e\x74\x03\x07\x62\x6c\x6f\x63\x6b\x3f\x14\x03\x13\x65"
  "\x6e\x71\x75\x65\x75\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x21\x03\x0f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x79\x70"
  "\x65\x04\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x04\x1e\x6d\x61"
  "\x6b\x65\x2d\x6e\x6f\x6e\x2d\x74\x72\x69\x76\x69\x61\x6c\x2d\x63"
  "\x6c\x6f\x73\x75\x72\x65\x2d\x63\x6f\x6e\x73\x02\x1f\x6d\x61\x6b"
  "\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x03\x1e\x6d\x61\x6b"
  "\x65\x2d\x63\x6f\x6e\x73\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x72"
  "\x65\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x04\x0d\x6d\x61\x6b\x65"
  "\x2d\x69\x63\x2d\x63\x6f\x6e\x73\x03\x1a\x6d\x61\x6b\x65\x2d\x74"
  "\x72\x69\x76\x69\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63"
  "\x6f\x6e\x73\x03\x1c\x69\x6e\x64\x69\x72\x65\x63\x74\x69\x6f\x6e"
  "\x2d\x62\x6c\x6f\x63\x6b\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x15\x0f\x93\x01\x3c\x81\x8b\x02\x92\x01\x3a\x81\x87\x02\x91\x01"
  "\x38\x81\x83\x02\x90\x01\x36\x81\x89\x02\x8f\x01\x34\x81\x89\x02"
  "\x8e\x01\x32\x81\x89\x02\x8d\x01\x30\x81\x83\x02\x8c\x01\x2e\x81"
  "\x83\x02\x8b\x01\x2c\x81\x83\x02\x8a\x01\x2a\x83\x04\x89\x01\x28"
  "\x81\x87\x02\x88\x01\x26\x81\x83\x02\x87\x01\x24\x81\x85\x02\x86"
  "\x01\x22\x81\x85\x02\x85\x01\x20\x81\x83\x02\x84\x01\x1e\x81\x83"
  "\x02\x83\x01\x1c\x81\x8b\x02\x82\x01\x1a\x81\x8b\x02\x81\x01\x18"
  "\x81\x89\x02\x80\x01\x16\x81\x89\x02\x7f\x14\x81\x87\x02\x7e\x12"
  "\x81\x89\x02\x7d\x10\x81\x87\x02\x7c\x0e\x81\x87\x02\x7b\x0c\x81"
  "\x87\x02\x7a\x0a\x81\x87\x02\x79\x08\x81\x89\x02\x78\x06\x81\x87"
  "\x02\x77\x04\x85\x08\x3b\x71\x16\x02\x08\x22\x63\x6c\x6f\x73\x65"
  "\x2d\x62\x69\x6e\x64\x69\x6e\x67\x3a\x20\x63\x61\x63\x68\x65\x64"
  "\x20\x6c\x65\x74\x72\x65\x63\x20\x6e\x61\x6d\x65\x1e\x63\x6c\x6f"
  "\x73\x65\x2d\x62\x69\x6e\x64\x69\x6e\x67\x3a\x20\x49\x43\x20\x6c"
  "\x65\x74\x72\x65\x63\x20\x6e\x61\x6d\x65\x2e\x63\x6c\x6f\x73\x65"
  "\x2d\x62\x69\x6e\x64\x69\x6e\x67\x3a\x20\x4e\x6f\x6e\x2d\x69\x6e"
  "\x64\x69\x72\x65\x63\x74\x65\x64\x20\x73\x68\x61\x72\x65\x64\x20"
  "\x73\x69\x62\x6c\x69\x6e\x67\x21\x0f\x12\x10\x12\x11\x03\x14\x03"
  "\x13\x03\x15\x05\x0d\x6c\x65\x74\x72\x65\x63\x2d\x63\x6c\x6f\x73"
  "\x65\x15\x04\x07\x17\x66\x69\x6e\x64\x2d\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x2f\x6c\x6f\x63\x61\x74\x69\x76\x65\x03\x1e\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2f\x74\x72\x69\x76\x69\x61\x6c\x2d\x6f"
  "\x72\x2d\x76\x69\x72\x74\x75\x61\x6c\x3f\x03\x1e\x6d\x61\x6b\x65"
  "\x2d\x63\x6f\x6e\x73\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x69\x6e"
  "\x64\x69\x72\x65\x63\x74\x69\x6f\x6e\x04\x0d\x0a\xa5\x01\x26\x81"
  "\x85\x02\xa4\x01\x24\x83\x04\xa3\x01\x22\x84\x06\xa2\x01\x20\x81"
  "\x85\x02\xa1\x01\x1e\x81\x87\x02\xa0\x01\x1c\x81\x89\x02\x9f\x01"
  "\x1a\x81\x8b\x02\x9e\x01\x18\x81\x8b\x02\x9d\x01\x16\x81\x89\x02"
  "\x9c\x01\x14\x81\x89\x02\x9b\x01\x12\x81\x89\x02\x9a\x01\x10\x81"
  "\x89\x02\x99\x01\x0e\x81\x87\x02\x98\x01\x0c\x81\x87\x02\x97\x01"
  "\x0a\x81\x87\x02\x96\x01\x08\x81\x87\x02\x95\x01\x06\x81\x87\x02"
  "\x94\x01\x04\x85\x08\x25\x46\x14\x02\x09\x27\x6c\x65\x74\x72\x65"
  "\x63\x2d\x63\x6c\x6f\x73\x65\x3a\x20\x4d\x69\x73\x73\x69\x6e\x67"
  "\x20\x63\x6c\x6f\x73\x75\x72\x65\x20\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x05\x1b\x66\x69\x6e\x64\x2d\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x2f\x76\x61\x6c\x75\x65\x2f\x73\x69\x6d\x70\x6c\x65\x05\x19\x6c"
  "\x6f\x61\x64\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x03\xa7\x01\x06\x81\x87\x02\xa6\x01"
  "\x04\x85\x08\x05\x0e\x13\x12\x12\x13\x04\x14\x04\x16\x04\x0c\x04"
  "\x04\x0f\x04\x0b\x04\x04\x15\x09\x0a\x11\x0e\x1a\x67\x65\x6e\x65"
  "\x72\x61\x74\x65\x2f\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68"
  "\x65\x61\x64\x65\x72\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75"
  "\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81"
  "\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
rgproc_so_data_0fbd0e55a17b8d7d (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rgproc_so_data_0fbd0e55a17b8d7d [0]))), (sizeof (prog_rgproc_so_data_0fbd0e55a17b8d7d)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("rgproc.so", rgproc_so_data_0fbd0e55a17b8d7d)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rgproc.so", "c56b8cda4ee61c0d")
