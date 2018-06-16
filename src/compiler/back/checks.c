/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:08-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 9
#define DEBUGGING_LABEL_1_2 8
#define OBJECT_1_0 7
#define EXECUTE_CACHE_1_5 5
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
checks_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto get_entry_interrupt_checks_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_entry_interrupt_checks_3)
DEFLABEL (get_entry_interrupt_checks_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_5]));

INVOKE_INTERFACE_TARGET_1
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
checks_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto get_exit_interrupt_checks_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_exit_interrupt_checks_3)
DEFLABEL (get_exit_interrupt_checks_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define ENVIRONMENT_LABEL_3_3 18
#define DEBUGGING_LABEL_3_2 17
#define OBJECT_3_1 16
#define OBJECT_3_0 15
#define EXECUTE_CACHE_3_8 9
#define EXECUTE_CACHE_3_6 11
#define FREE_REFERENCE_3_0 14
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
checks_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_3_4);
      goto expect_no_entry_interrupt_checks_2;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expect_no_entry_interrupt_checks_6)
DEFLABEL (expect_no_entry_interrupt_checks_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_7;
  Rvl = (current_block [OBJECT_3_1]);
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_9;
  Wrd8 = Wrd12;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_7])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define ENVIRONMENT_LABEL_4_3 18
#define DEBUGGING_LABEL_4_2 17
#define OBJECT_4_1 16
#define OBJECT_4_0 15
#define EXECUTE_CACHE_4_8 9
#define EXECUTE_CACHE_4_6 11
#define FREE_REFERENCE_4_0 14
#define FREE_REFERENCES_LABEL_4_0 8
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
checks_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_4_4);
      goto expect_no_exit_interrupt_checks_2;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expect_no_exit_interrupt_checks_6)
DEFLABEL (expect_no_exit_interrupt_checks_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_7;
  Rvl = (current_block [OBJECT_4_1]);
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_9;
  Wrd8 = Wrd12;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_7])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_5 7
#define ENVIRONMENT_LABEL_5_3 17
#define DEBUGGING_LABEL_5_2 16
#define OBJECT_5_0 15
#define EXECUTE_CACHE_5_8 9
#define EXECUTE_CACHE_5_7 11
#define FREE_REFERENCE_5_0 14
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
checks_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      goto get_interrupt_checks_2;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_interrupt_checks_6)
DEFLABEL (get_interrupt_checks_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;
  Wrd9 = Wrd13;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_6])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_12 5
#define LABEL_6_11 7
#define LABEL_6_15 9
#define LABEL_6_9 11
#define TAG_6_10 4
#define LABEL_6_7 13
#define TAG_6_8 5
#define LABEL_6_5 15
#define TAG_6_6 6
#define LABEL_6_13 17
#define LABEL_6_14 19
#define LABEL_6_16 21
#define TAG_6_17 9
#define LABEL_6_18 23
#define LABEL_6_20 25
#define LABEL_6_21 27
#define LABEL_6_23 29
#define LABEL_6_36 31
#define LABEL_6_24 33
#define LABEL_6_25 35
#define LABEL_6_27 37
#define TAG_6_28 17
#define LABEL_6_29 39
#define LABEL_6_49 41
#define LABEL_6_31 43
#define LABEL_6_34 45
#define LABEL_6_37 47
#define LABEL_6_38 49
#define LABEL_6_39 51
#define LABEL_6_44 53
#define LABEL_6_41 55
#define LABEL_6_42 57
#define LABEL_6_46 59
#define LABEL_6_61 61
#define LABEL_6_62 63
#define LABEL_6_47 65
#define LABEL_6_53 67
#define LABEL_6_55 69
#define LABEL_6_56 71
#define LABEL_6_57 73
#define LABEL_6_59 75
#define LABEL_6_65 77
#define LABEL_6_63 79
#define LABEL_6_64 81
#define LABEL_6_71 83
#define LABEL_6_72 85
#define LABEL_6_74 87
#define LABEL_6_50 89
#define LABEL_6_67 91
#define LABEL_6_68 93
#define LABEL_6_69 95
#define LABEL_6_70 97
#define LABEL_6_77 99
#define LABEL_6_78 101
#define LABEL_6_79 103
#define LABEL_6_84 105
#define LABEL_6_86 107
#define LABEL_6_87 109
#define LABEL_6_80 111
#define LABEL_6_81 113
#define LABEL_6_82 115
#define LABEL_6_83 117
#define LABEL_6_89 119
#define LABEL_6_91 121
#define LABEL_6_92 123
#define LABEL_6_90 125
#define LABEL_6_88 127
#define LABEL_6_93 129
#define LABEL_6_96 131
#define LABEL_6_95 133
#define LABEL_6_101 135
#define LABEL_6_99 137
#define LABEL_6_98 139
#define LABEL_6_102 141
#define LABEL_6_105 143
#define LABEL_6_104 145
#define LABEL_6_111 147
#define LABEL_6_112 149
#define LABEL_6_107 151
#define LABEL_6_109 153
#define LABEL_6_113 155
#define ENVIRONMENT_LABEL_6_3 233
#define DEBUGGING_LABEL_6_2 232
#define OBJECT_6_13 231
#define OBJECT_6_12 230
#define OBJECT_6_11 229
#define OBJECT_6_10 228
#define OBJECT_6_9 227
#define OBJECT_6_8 226
#define OBJECT_6_7 225
#define OBJECT_6_6 224
#define OBJECT_6_5 223
#define OBJECT_6_4 222
#define OBJECT_6_3 221
#define OBJECT_6_2 220
#define OBJECT_6_1 219
#define OBJECT_6_0 218
#define EXECUTE_CACHE_6_114 157
#define EXECUTE_CACHE_6_110 159
#define EXECUTE_CACHE_6_108 161
#define EXECUTE_CACHE_6_106 163
#define EXECUTE_CACHE_6_103 165
#define EXECUTE_CACHE_6_100 167
#define EXECUTE_CACHE_6_97 169
#define EXECUTE_CACHE_6_94 171
#define EXECUTE_CACHE_6_85 173
#define EXECUTE_CACHE_6_76 175
#define EXECUTE_CACHE_6_75 177
#define EXECUTE_CACHE_6_73 179
#define EXECUTE_CACHE_6_66 181
#define EXECUTE_CACHE_6_60 183
#define EXECUTE_CACHE_6_58 185
#define EXECUTE_CACHE_6_54 187
#define EXECUTE_CACHE_6_52 189
#define EXECUTE_CACHE_6_51 191
#define EXECUTE_CACHE_6_48 193
#define EXECUTE_CACHE_6_45 195
#define EXECUTE_CACHE_6_43 197
#define EXECUTE_CACHE_6_40 199
#define EXECUTE_CACHE_6_35 201
#define EXECUTE_CACHE_6_33 203
#define EXECUTE_CACHE_6_32 205
#define EXECUTE_CACHE_6_30 207
#define EXECUTE_CACHE_6_26 209
#define EXECUTE_CACHE_6_22 211
#define EXECUTE_CACHE_6_19 213
#define FREE_REFERENCE_6_1 216
#define FREE_REFERENCE_6_0 217
#define FREE_REFERENCES_LABEL_6_0 156
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
checks_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd52;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd38;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd8;
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
      goto determine_interrupt_checks_99;

    case 1:
      current_block = (Rpc - LABEL_6_12);
      goto label_101;

    case 2:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_6_15);
      goto propagator_47;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto explore_107;

    case 5:
      current_block = (Rpc - LABEL_6_7);
      goto propagate_entry_info_106;

    case 6:
      current_block = (Rpc - LABEL_6_5);
      goto propagate_exit_info_105;

    case 7:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_6_14);
      goto for_each_subsequent_node_36;

    case 9:
      current_block = (Rpc - LABEL_6_16);
      goto lambda_109;

    case 10:
      current_block = (Rpc - LABEL_6_18);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_6_20);
      goto continuation_50;

    case 12:
      current_block = (Rpc - LABEL_6_21);
      goto continuation_49;

    case 13:
      current_block = (Rpc - LABEL_6_23);
      goto continuation_59;

    case 14:
      current_block = (Rpc - LABEL_6_36);
      goto last_insn_91;

    case 15:
      current_block = (Rpc - LABEL_6_24);
      goto continuation_2;

    case 16:
      current_block = (Rpc - LABEL_6_25);
      goto continuation_30;

    case 17:
      current_block = (Rpc - LABEL_6_27);
      goto propagate_111;

    case 18:
      current_block = (Rpc - LABEL_6_29);
      goto continuation_7;

    case 19:
      current_block = (Rpc - LABEL_6_49);
      goto continuation_52;

    case 20:
      current_block = (Rpc - LABEL_6_31);
      goto continuation_51;

    case 21:
      current_block = (Rpc - LABEL_6_34);
      goto continuation_60;

    case 22:
      current_block = (Rpc - LABEL_6_37);
      goto continuation_90;

    case 23:
      current_block = (Rpc - LABEL_6_38);
      goto continuation_89;

    case 24:
      current_block = (Rpc - LABEL_6_39);
      goto continuation_3;

    case 25:
      current_block = (Rpc - LABEL_6_44);
      goto continuation_34;

    case 26:
      current_block = (Rpc - LABEL_6_41);
      goto continuation_32;

    case 27:
      current_block = (Rpc - LABEL_6_42);
      goto continuation_31;

    case 28:
      current_block = (Rpc - LABEL_6_46);
      goto continuation_38;

    case 29:
      current_block = (Rpc - LABEL_6_61);
      goto continuation_11;

    case 30:
      current_block = (Rpc - LABEL_6_62);
      goto continuation_12;

    case 31:
      current_block = (Rpc - LABEL_6_47);
      goto continuation_8;

    case 32:
      current_block = (Rpc - LABEL_6_53);
      goto setting_flag_48;

    case 33:
      current_block = (Rpc - LABEL_6_55);
      goto continuation_4;

    case 34:
      current_block = (Rpc - LABEL_6_56);
      goto continuation_35;

    case 35:
      current_block = (Rpc - LABEL_6_57);
      goto continuation_33;

    case 36:
      current_block = (Rpc - LABEL_6_59);
      goto continuation_40;

    case 37:
      current_block = (Rpc - LABEL_6_65);
      goto continuation_16;

    case 38:
      current_block = (Rpc - LABEL_6_63);
      goto continuation_10;

    case 39:
      current_block = (Rpc - LABEL_6_64);
      goto continuation_9;

    case 40:
      current_block = (Rpc - LABEL_6_71);
      goto continuation_56;

    case 41:
      current_block = (Rpc - LABEL_6_72);
      goto continuation_55;

    case 42:
      current_block = (Rpc - LABEL_6_74);
      goto continuation_54;

    case 43:
      current_block = (Rpc - LABEL_6_50);
      goto continuation_53;

    case 44:
      current_block = (Rpc - LABEL_6_67);
      goto continuation_5;

    case 45:
      current_block = (Rpc - LABEL_6_68);
      goto decide_entry_checks_88;

    case 46:
      current_block = (Rpc - LABEL_6_69);
      goto continuation_41;

    case 47:
      current_block = (Rpc - LABEL_6_70);
      goto continuation_17;

    case 48:
      current_block = (Rpc - LABEL_6_77);
      goto decide_exit_checks_96;

    case 49:
      current_block = (Rpc - LABEL_6_78);
      goto continuation_64;

    case 50:
      current_block = (Rpc - LABEL_6_79);
      goto continuation_63;

    case 51:
      current_block = (Rpc - LABEL_6_84);
      goto continuation_22;

    case 52:
      current_block = (Rpc - LABEL_6_86);
      goto continuation_21;

    case 53:
      current_block = (Rpc - LABEL_6_87);
      goto continuation_19;

    case 54:
      current_block = (Rpc - LABEL_6_80);
      goto continuation_18;

    case 55:
      current_block = (Rpc - LABEL_6_81);
      goto continuation_93;

    case 56:
      current_block = (Rpc - LABEL_6_82);
      goto continuation_92;

    case 57:
      current_block = (Rpc - LABEL_6_83);
      goto continuation_65;

    case 58:
      current_block = (Rpc - LABEL_6_89);
      goto continuation_94;

    case 59:
      current_block = (Rpc - LABEL_6_91);
      goto checksB_95;

    case 60:
      current_block = (Rpc - LABEL_6_92);
      goto checksB_76;

    case 61:
      current_block = (Rpc - LABEL_6_90);
      goto continuation_66;

    case 62:
      current_block = (Rpc - LABEL_6_88);
      goto continuation_20;

    case 63:
      current_block = (Rpc - LABEL_6_93);
      goto continuation_67;

    case 64:
      current_block = (Rpc - LABEL_6_96);
      goto continuation_74;

    case 65:
      current_block = (Rpc - LABEL_6_95);
      goto continuation_68;

    case 66:
      current_block = (Rpc - LABEL_6_101);
      goto decide_label_87;

    case 67:
      current_block = (Rpc - LABEL_6_99);
      goto continuation_73;

    case 68:
      current_block = (Rpc - LABEL_6_98);
      goto continuation_69;

    case 69:
      current_block = (Rpc - LABEL_6_102);
      goto continuation_77;

    case 70:
      current_block = (Rpc - LABEL_6_105);
      goto continuation_72;

    case 71:
      current_block = (Rpc - LABEL_6_104);
      goto continuation_70;

    case 72:
      current_block = (Rpc - LABEL_6_111);
      goto continuation_79;

    case 73:
      current_block = (Rpc - LABEL_6_112);
      goto label_102;

    case 74:
      current_block = (Rpc - LABEL_6_107);
      goto continuation_78;

    case 75:
      current_block = (Rpc - LABEL_6_109);
      goto continuation_71;

    case 76:
      current_block = (Rpc - LABEL_6_113);
      goto continuation_81;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (determine_interrupt_checks_104)
DEFLABEL (determine_interrupt_checks_99)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd20.pObj) = (& (Rhp [-1]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd50.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 1;
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd48.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_7])));
  Rhp += 1;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd46.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_9])));
  Rhp += 2;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd46.pObj)));
  (* (--Rsp)) = (Wrd47.Obj);
  Wrd38 = Wrd46;
  ((Wrd38.pObj) [2]) = (Wrd7.Obj);
  ((Wrd38.pObj) [3]) = (Wrd11.Obj);
  ((Wrd48.pObj) [2]) = (Wrd15.Obj);
  ((Wrd50.pObj) [2]) = (Wrd21.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_120;
  Wrd28 = Wrd32;

DEFLABEL (label_119)
  (* (--Rsp)) = (Wrd28.Obj);
  goto propagator_47;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd12.Obj);
  goto propagator_47;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_13);
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto explore_29;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_40]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_40]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_68]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_40]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_67);
  (Wrd6.Obj) = (Rsp [6]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  (Rsp [7]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_77]))));
  (Rsp [6]) = (Wrd8.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_40]));

DEFLABEL (label_120)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_12])), (Wrd29.pObj));

DEFLABEL (label_101)
  (Wrd28.Obj) = Rvl;
  goto label_119;

DEFLABEL (propagator_108)
DEFLABEL (propagator_47)
  INTERRUPT_CHECK (26, LABEL_6_15);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_16])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (explore_107)
  CLOSURE_HEADER (LABEL_6_9);

DEFLABEL (explore_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_18);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_121;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_121)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_29]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_30]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_48]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_47);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_128;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_61]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_63]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_64]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_6_64);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_33]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_6_63);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_32]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_6_61);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_127;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_62]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_6_7]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_30]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6_62);

DEFLABEL (label_127)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_65]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_66]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_6_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto for_each_subsequent_node_36;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_6_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_26]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_6_80);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_123;

DEFLABEL (label_122)
  Rvl = (current_block [OBJECT_6_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_123)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_87]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_45]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_6_87);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_125;

DEFLABEL (label_124)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Rsp [0]) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  ((Wrd29.pObj) [0]) = (Wrd22.Obj);
  Rvl = (Wrd30.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_125)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_86]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_88]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto last_insn_91;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_6_88);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_94]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_6_84);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_126;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_85]));

DEFLABEL (label_126)
  Rsp = (& (Rsp [3]));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_122;
  goto label_124;

DEFLABEL (label_128)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_62]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  ((Wrd17.pObj) [0]) = (Wrd12.Obj);
  Rsp = (& (Rsp [3]));
  goto label_127;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_6_86);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_122;
  goto label_124;

DEFLABEL (propagate_entry_info_106)
  CLOSURE_HEADER (LABEL_6_7);

DEFLABEL (propagate_entry_info_58)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_22]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_6_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_33]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_6_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_32]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_6_31);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_130;

DEFLABEL (label_129)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_53]))));
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_6_3]);
  (Rsp [3]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_130)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_49]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_52]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_6_49);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_129;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_50]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_51]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_6_50);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_132;

DEFLABEL (label_131)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_53]))));
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_6_8]);
  (Rsp [3]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_132)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_74]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_76]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_6_74);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_131;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_72]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_75]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_6_72);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_131;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_71]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_73]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_6_71);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_131;
  Rvl = (current_block [OBJECT_6_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (propagate_exit_info_105)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (propagate_exit_info_62)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto last_insn_91;

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_6_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_35]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_6_34);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_133;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_53]))));
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_6_5]);
  (Rsp [3]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_133)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_53]))));
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_6_4]);
  (Rsp [3]) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (for_each_subsequent_node_110)
DEFLABEL (for_each_subsequent_node_36)
  INTERRUPT_CHECK (26, LABEL_6_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_26]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_6_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_135;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_44]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_45]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_6_44);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_134;
  Rvl = (current_block [OBJECT_6_6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_134)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_56]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_45]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_6_56);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  goto pop_return;

DEFLABEL (label_135)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_41]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_42]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_43]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_6_42);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_6_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_58]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_6_57);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  goto pop_return;

DEFLABEL (lambda_109)
  CLOSURE_HEADER (LABEL_6_16);

DEFLABEL (lambda_46)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_27])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  Wrd13 = Wrd17;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd13.pObj) [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd18.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto propagate_44;

DEFLABEL (last_insn_112)
DEFLABEL (last_insn_91)
  INTERRUPT_CHECK (26, LABEL_6_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_38]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_22]));

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_6_38);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_54]));

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_6_37);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_33]));

DEFLABEL (propagate_111)
  CLOSURE_HEADER (LABEL_6_27);

DEFLABEL (propagate_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_6_46);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_60]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_6_59);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_136;
  Rvl = (current_block [OBJECT_6_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_136)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_69]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_30]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_6_69);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (setting_flag_113)
DEFLABEL (setting_flag_48)
  INTERRUPT_CHECK (26, LABEL_6_53);
  Rvl = (current_block [OBJECT_6_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (decide_entry_checks_114)
DEFLABEL (decide_entry_checks_88)
  INTERRUPT_CHECK (26, LABEL_6_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_79]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_22]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_6_79);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_33]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_6_78);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_32]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_6_83);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_137;
  (Wrd7.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [0]) = (Wrd7.Obj);
  goto checksB_76;

DEFLABEL (label_137)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_90]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_52]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_6_90);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_138;
  (Wrd7.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [0]) = (Wrd7.Obj);
  goto checksB_76;

DEFLABEL (label_138)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_93]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_51]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_6_93);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_139;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_96]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_97]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_6_96);
  (Rsp [0]) = Rvl;
  goto decide_label_87;

DEFLABEL (label_139)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_95]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_76]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_6_95);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_140;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_99]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_100]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_6_99);
  (Rsp [0]) = Rvl;
  goto decide_label_87;

DEFLABEL (label_140)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_98]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_75]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_6_98);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_141;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_105]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_106]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_6_105);
  (Rsp [0]) = Rvl;
  goto decide_label_87;

DEFLABEL (label_141)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_104]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_73]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_6_104);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_142;
  (Wrd11.Obj) = (current_block [OBJECT_6_9]);
  (Rsp [0]) = (Wrd11.Obj);
  goto checksB_76;

DEFLABEL (label_142)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_109]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_110]));

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_6_109);
  (Rsp [0]) = Rvl;
  goto decide_label_87;

DEFLABEL (decide_exit_checks_115)
DEFLABEL (decide_exit_checks_96)
  INTERRUPT_CHECK (26, LABEL_6_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_82]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto last_insn_91;

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_6_82);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_35]));

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_6_81);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_143;
  (Wrd12.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto checksB_95;

DEFLABEL (label_143)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_89]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_6_89);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_144;
  (Wrd7.Obj) = (current_block [OBJECT_6_9]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto checksB_95;

DEFLABEL (label_144)
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto checksB_95;

DEFLABEL (checksB_116)
DEFLABEL (checksB_95)
  INTERRUPT_CHECK (26, LABEL_6_91);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_6_10]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_30]));

DEFLABEL (checksB_117)
DEFLABEL (checksB_76)
  INTERRUPT_CHECK (26, LABEL_6_92);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_6_7]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_30]));

DEFLABEL (decide_label_118)
DEFLABEL (decide_label_87)
  INTERRUPT_CHECK (26, LABEL_6_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_103]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_6_102);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_107]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_108]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_6_107);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_148;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_111]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_114]));

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_6_111);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_149;

DEFLABEL (label_148)
  (Wrd11.Obj) = (current_block [OBJECT_6_0]);

DEFLABEL (label_147)
  (Rsp [0]) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_113]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_6_4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_6_113);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_146;

DEFLABEL (label_145)
  (Wrd10.Obj) = (current_block [OBJECT_6_12]);
  (Wrd11.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_6_13]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Rsp [0]) = (Wrd12.Obj);
  goto checksB_76;

DEFLABEL (label_146)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 1)
    goto label_145;
  (Wrd18.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [0]) = (Wrd18.Obj);
  goto checksB_76;

DEFLABEL (label_149)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_151;
  Wrd19 = Wrd23;

DEFLABEL (label_150)
  if ((Wrd19.Obj) == ((SCHEME_OBJECT) 0))
    goto label_148;
  (Wrd11.Obj) = (current_block [OBJECT_6_11]);
  goto label_147;

DEFLABEL (label_151)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_112])), (Wrd20.pObj));

DEFLABEL (label_102)
  (Wrd19.Obj) = Rvl;
  goto label_150;

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
checks_so_a39c431bd07d5cc4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	2,
	2,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 6)
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

static const struct liarc_code_S arr_decl_checks_so_a39c431bd07d5cc4 [6] =
  {
    { "checks_so_code_1", 1, checks_so_code_1 },
    { "checks_so_code_2", 1, checks_so_code_2 },
    { "checks_so_code_3", 3, checks_so_code_3 },
    { "checks_so_code_4", 3, checks_so_code_4 },
    { "checks_so_code_5", 3, checks_so_code_5 },
    { "checks_so_code_6", 77, checks_so_code_6 }
  };

int
decl_checks_so_a39c431bd07d5cc4 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_checks_so_a39c431bd07d5cc4);
  return (0);
}

DECLARE_COMPILED_CODE ("checks.so", 3, decl_checks_so_a39c431bd07d5cc4, checks_so_a39c431bd07d5cc4)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_checks_so_data_a39c431bd07d5cc4 [2162] =
  "\xf2\x01\x0d\x84\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0d\xb9\x28"
  "\x0d\xba\x23\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82\x88\x0d\xbc\x28"
  "\xb2\x23\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x83\x88\x1d\x0c\x0d\xbe"
  "\x24\x28\x0d\xbf\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x84\x88\x1d\x0c\xb6\x24\x28\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0c\xb6"
  "\x24\x28\x0d\xbe\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x86\x88\x0d\x0d\xb8\x0d\x08\x88\xb4\xb0\x08\x88\x0d"
  "\xb1\x1d\x0d\x0d\x0d\x07\x0d\x08\x0d\xbc\x0d\x24\x28\xb6\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\xb4\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbe\x9d\xbc\x88\xb4\xb6\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\xb5\x2a\xb3\x2a\x9d\x0d\xb2\x0d\x0d\x1b\xb7\x9d\x28\x0d\x26"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73"
  "\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65"
  "\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d"
  "\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x2f\x62\x61\x63\x6b\x2f\x63\x68\x65\x63\x6b\x73\x2e\x69"
  "\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x17\x65\x6e\x74\x72\x79\x2d\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x63\x68\x65\x63\x6b\x73\x03"
  "\x15\x67\x65\x74\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x63"
  "\x68\x65\x63\x6b\x73\x02\x04\x04\x82\x02\x03\x0a\x02\x16\x65\x78"
  "\x69\x74\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x63\x68\x65"
  "\x63\x6b\x73\x03\x02\x05\x04\x82\x02\x03\x0a\x02\x02\x28\x4e\x6f"
  "\x20\x65\x6e\x74\x72\x79\x20\x69\x6e\x74\x65\x72\x72\x75\x70\x74"
  "\x20\x63\x68\x65\x63\x6b\x73\x20\x65\x78\x70\x65\x63\x74\x65\x64"
  "\x20\x68\x65\x72\x65\x11\x2a\x63\x75\x72\x72\x65\x6e\x74\x2d\x62"
  "\x62\x6c\x6f\x63\x6b\x2a\x02\x02\x1b\x67\x65\x74\x2d\x65\x6e\x74"
  "\x72\x79\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x63\x68\x65"
  "\x63\x6b\x73\x04\x06\x65\x72\x72\x6f\x72\x09\x03\x08\x08\x81\x81"
  "\x02\x07\x06\x81\x81\x02\x06\x04\x82\x02\x07\x13\x0a\x02\x02\x27"
  "\x4e\x6f\x20\x65\x78\x69\x74\x20\x69\x6e\x74\x65\x72\x72\x75\x70"
  "\x74\x20\x63\x68\x65\x63\x6b\x73\x20\x65\x78\x70\x65\x63\x74\x65"
  "\x64\x20\x68\x65\x72\x65\x02\x02\x1a\x67\x65\x74\x2d\x65\x78\x69"
  "\x74\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x63\x68\x65\x63"
  "\x6b\x73\x0b\x04\x09\x03\x0b\x08\x81\x81\x02\x0a\x06\x81\x81\x02"
  "\x09\x04\x82\x02\x07\x13\x0c\x02\x22\x44\x45\x54\x45\x52\x4d\x49"
  "\x4e\x45\x2d\x49\x4e\x54\x45\x52\x52\x55\x50\x54\x2d\x43\x48\x45"
  "\x43\x4b\x53\x20\x66\x61\x69\x6c\x65\x64\x02\x04\x0d\x63\x66\x67"
  "\x2d\x6e\x6f\x64\x65\x2d\x67\x65\x74\x04\x09\x03\x0e\x08\x81\x83"
  "\x02\x0d\x06\x81\x87\x02\x0c\x04\x83\x04\x07\x12\x09\x02\x05\x68"
  "\x65\x61\x70\x0a\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x06\x73\x74"
  "\x61\x63\x6b\x17\x72\x65\x61\x63\x68\x65\x64\x2d\x66\x72\x6f\x6d"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x02\x13\x72\x65\x61\x63"
  "\x68\x65\x73\x2d\x70\x6f\x70\x2d\x72\x65\x74\x75\x72\x6e\x13\x72"
  "\x65\x61\x63\x68\x65\x73\x2d\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f"
  "\x6e\x1a\x72\x65\x61\x63\x68\x65\x64\x2d\x66\x72\x6f\x6d\x2d\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x18\x69\x6e\x74\x65"
  "\x72\x72\x75\x70\x74\x2d\x63\x68\x65\x63\x6b\x2d\x65\x78\x70\x6c"
  "\x6f\x72\x65\x17\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d\x70\x72\x65"
  "\x76\x69\x6f\x75\x73\x2d\x6e\x6f\x64\x65\x20\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x3a\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x73\x74\x61"
  "\x63\x6b\x2d\x63\x68\x65\x63\x6b\x73\x3f\x03\x04\x03\x14\x62\x62"
  "\x6c\x6f\x63\x6b\x2d\x69\x6e\x73\x74\x72\x75\x63\x74\x69\x6f\x6e"
  "\x73\x03\x07\x73\x6e\x6f\x64\x65\x3f\x05\x0e\x63\x66\x67\x2d\x6e"
  "\x6f\x64\x65\x2d\x70\x75\x74\x21\x03\x18\x72\x74\x6c\x3a\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x65\x6e\x74\x72\x79"
  "\x3f\x03\x0a\x72\x69\x6e\x73\x74\x2d\x72\x74\x6c\x03\x10\x72\x74"
  "\x6c\x3a\x70\x6f\x70\x2d\x72\x65\x74\x75\x72\x6e\x3f\x04\x09\x66"
  "\x6f\x72\x2d\x65\x61\x63\x68\x03\x11\x70\x6e\x6f\x64\x65\x2d\x63"
  "\x6f\x6e\x73\x65\x71\x75\x65\x6e\x74\x03\x0b\x73\x6e\x6f\x64\x65"
  "\x2d\x6e\x65\x78\x74\x03\x11\x6e\x6f\x64\x65\x2d\x70\x72\x65\x76"
  "\x69\x6f\x75\x73\x3d\x30\x3f\x03\x14\x72\x74\x6c\x3a\x63\x6c\x6f"
  "\x73\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72\x3f\x03\x19\x72\x74"
  "\x6c\x3a\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x68"
  "\x65\x61\x64\x65\x72\x3f\x03\x0b\x72\x69\x6e\x73\x74\x2d\x6c\x61"
  "\x73\x74\x03\x12\x70\x6e\x6f\x64\x65\x2d\x61\x6c\x74\x65\x72\x6e"
  "\x61\x74\x69\x76\x65\x04\x07\x65\x71\x75\x61\x6c\x3f\x04\x03\x16"
  "\x72\x74\x6c\x3a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68\x65"
  "\x61\x64\x65\x72\x3f\x03\x1b\x72\x74\x6c\x3a\x6f\x70\x65\x6e\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72"
  "\x3f\x03\x19\x72\x74\x6c\x3a\x69\x63\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72\x3f\x03\x1a\x72\x74\x6c"
  "\x3a\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x3f\x03\x22\x72\x74\x6c\x3a\x69\x6e\x76\x6f"
  "\x63\x61\x74\x69\x6f\x6e\x3a\x73\x70\x65\x63\x69\x61\x6c\x2d\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x3f\x03\x1d\x72\x74\x6c\x3a\x63"
  "\x6c\x6f\x73\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x03\x22\x72\x74\x6c\x3a\x69\x63\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68\x65\x61\x64\x65\x72"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x03\x0e\x6c\x61\x62\x65"
  "\x6c\x2d\x3e\x6f\x62\x6a\x65\x63\x74\x03\x24\x72\x74\x6c\x3a\x6f"
  "\x70\x65\x6e\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68\x65"
  "\x61\x64\x65\x72\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x03\x0f"
  "\x72\x74\x6c\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x03\x1f"
  "\x72\x74\x6c\x3a\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68\x65"
  "\x61\x64\x65\x72\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x03\x1a"
  "\x72\x74\x6c\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x73\x74"
  "\x61\x63\x6b\x2d\x6c\x65\x61\x66\x3f\x1e\x5b\x9c\x01\x81\x85\x02"
  "\x5a\x9a\x01\x81\x85\x02\x59\x98\x01\x81\x85\x02\x58\x96\x01\x81"
  "\x85\x02\x57\x94\x01\x81\x85\x02\x56\x92\x01\x81\x85\x02\x55\x90"
  "\x01\x81\x85\x02\x54\x8e\x01\x81\x85\x02\x53\x8c\x01\x81\x85\x02"
  "\x52\x8a\x01\x81\x85\x02\x51\x88\x01\x81\x85\x02\x50\x86\x01\x81"
  "\x85\x02\x4f\x84\x01\x81\x85\x02\x4e\x82\x01\x81\x85\x02\x4d\x80"
  "\x01\x81\x89\x02\x4c\x7e\x81\x85\x02\x4b\x7c\x81\x85\x02\x4a\x7a"
  "\x81\x85\x02\x49\x78\x81\x83\x02\x48\x76\x81\x85\x02\x47\x74\x81"
  "\x85\x02\x46\x72\x81\x83\x02\x45\x70\x81\x87\x02\x44\x6e\x81\x87"
  "\x02\x43\x6c\x81\x87\x02\x42\x6a\x81\x83\x02\x41\x68\x81\x85\x02"
  "\x40\x66\x81\x83\x02\x3f\x64\x83\x04\x3e\x62\x81\x87\x02\x3d\x60"
  "\x81\x87\x02\x3c\x5e\x83\x04\x3b\x5c\x81\x91\x02\x3a\x5a\x81\x87"
  "\x02\x39\x58\x81\x87\x02\x38\x56\x81\x87\x02\x37\x54\x81\x87\x02"
  "\x36\x52\x81\x8b\x02\x35\x50\x81\x89\x02\x34\x4e\x81\x87\x02\x33"
  "\x4c\x81\x87\x02\x32\x4a\x81\x85\x02\x31\x48\x81\x85\x02\x30\x46"
  "\x81\x91\x02\x2f\x44\x83\x04\x2e\x42\x81\x87\x02\x2d\x40\x81\x87"
  "\x02\x2c\x3e\x81\x87\x02\x2b\x3c\x81\x85\x02\x2a\x3a\x81\x87\x02"
  "\x29\x38\x81\x85\x02\x28\x36\x81\x85\x02\x27\x34\x81\x91\x02\x26"
  "\x32\x81\x85\x02\x25\x30\x81\x83\x02\x24\x2e\x81\x87\x02\x23\x2c"
  "\x81\x87\x02\x22\x2a\x81\x87\x02\x21\x28\x81\x87\x02\x20\x26\x81"
  "\x85\x02\x1f\x24\x81\x85\x02\x1e\x22\x81\x91\x02\x1d\x20\x81\x83"
  "\x02\x1c\x1e\x81\x85\x02\x1b\x1c\x81\x87\x02\x1a\x1a\x81\x85\x02"
  "\x19\x18\x81\x85\x02\x18\x16\x81\x89\x02\x17\x14\x84\x06\x16\x12"
  "\x81\x91\x02\x15\x10\x81\x85\x02\x14\x0e\x81\x85\x02\x13\x0c\x81"
  "\x85\x02\x12\x0a\x81\x83\x02\x11\x08\x81\x91\x02\x10\x06\x81\x93"
  "\x02\x0f\x04\x83\x04\x9b\x01\xea\x01\x04\x09\x04\x0c\x04\x0a\x04"
  "\x04\x04\x1b\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x2d\x69\x6e\x74"
  "\x65\x72\x72\x75\x70\x74\x2d\x63\x68\x65\x63\x6b\x73\x20\x65\x78"
  "\x70\x65\x63\x74\x2d\x6e\x6f\x2d\x65\x78\x69\x74\x2d\x69\x6e\x74"
  "\x65\x72\x72\x75\x70\x74\x2d\x63\x68\x65\x63\x6b\x73\x21\x65\x78"
  "\x70\x65\x63\x74\x2d\x6e\x6f\x2d\x65\x6e\x74\x72\x79\x2d\x69\x6e"
  "\x74\x65\x72\x72\x75\x70\x74\x2d\x63\x68\x65\x63\x6b\x73\x0b\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02"
  "\x07\x11";

SCHEME_OBJECT *
checks_so_data_a39c431bd07d5cc4 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_checks_so_data_a39c431bd07d5cc4 [0]))), (sizeof (prog_checks_so_data_a39c431bd07d5cc4)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("checks.so", checks_so_data_a39c431bd07d5cc4)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("checks.so", "583444fcd1c3d485")
