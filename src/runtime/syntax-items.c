/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:56-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_9 9
#define ENVIRONMENT_LABEL_1_3 20
#define DEBUGGING_LABEL_1_2 19
#define EXECUTE_CACHE_1_11 11
#define EXECUTE_CACHE_1_10 13
#define EXECUTE_CACHE_1_8 15
#define EXECUTE_CACHE_1_6 17
#define FREE_REFERENCES_LABEL_1_0 10
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_items_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_1_4);
      goto keyword_itemP_6;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (keyword_itemP_9)
DEFLABEL (keyword_itemP_6)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 12
#define DEBUGGING_LABEL_2_2 11
#define EXECUTE_CACHE_2_6 7
#define FREE_REFERENCE_2_0 10
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_items_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto flatten_body_items_0;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (flatten_body_items_4)
DEFLABEL (flatten_body_items_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_7 7
#define ENVIRONMENT_LABEL_3_3 17
#define DEBUGGING_LABEL_3_2 16
#define OBJECT_3_0 15
#define EXECUTE_CACHE_3_9 9
#define EXECUTE_CACHE_3_8 11
#define EXECUTE_CACHE_3_6 13
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_items_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_3_4);
      goto item__list_2;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (item__list_5)
DEFLABEL (item__list_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (current_block [OBJECT_3_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 10
#define DEBUGGING_LABEL_4_2 9
#define EXECUTE_CACHE_4_6 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_items_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto declaration_item_text_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (declaration_item_text_4)
DEFLABEL (declaration_item_text_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_5 7
#define LABEL_7 9
#define LABEL_13 11
#define LABEL_8 13
#define LABEL_11 15
#define LABEL_12 17
#define LABEL_15 19
#define LABEL_19 21
#define LABEL_16 23
#define LABEL_17 25
#define LABEL_22 27
#define LABEL_18 29
#define LABEL_20 31
#define LABEL_25 33
#define LABEL_21 35
#define LABEL_23 37
#define LABEL_24 39
#define LABEL_27 41
#define LABEL_31 43
#define LABEL_28 45
#define LABEL_29 47
#define LABEL_34 49
#define LABEL_30 51
#define LABEL_32 53
#define LABEL_37 55
#define LABEL_33 57
#define LABEL_35 59
#define LABEL_36 61
#define LABEL_38 63
#define LABEL_42 65
#define LABEL_39 67
#define LABEL_40 69
#define LABEL_45 71
#define LABEL_41 73
#define LABEL_43 75
#define LABEL_48 77
#define LABEL_44 79
#define LABEL_46 81
#define LABEL_47 83
#define LABEL_49 85
#define LABEL_53 87
#define LABEL_50 89
#define LABEL_51 91
#define LABEL_56 93
#define LABEL_52 95
#define LABEL_54 97
#define LABEL_59 99
#define LABEL_55 101
#define LABEL_57 103
#define LABEL_62 105
#define LABEL_58 107
#define LABEL_60 109
#define LABEL_61 111
#define LABEL_63 113
#define LABEL_64 115
#define LABEL_68 117
#define LABEL_65 119
#define LABEL_66 121
#define LABEL_71 123
#define LABEL_67 125
#define LABEL_69 127
#define LABEL_74 129
#define LABEL_70 131
#define LABEL_72 133
#define LABEL_73 135
#define LABEL_75 137
#define LABEL_79 139
#define LABEL_76 141
#define LABEL_77 143
#define LABEL_82 145
#define LABEL_78 147
#define LABEL_80 149
#define LABEL_85 151
#define LABEL_81 153
#define LABEL_83 155
#define LABEL_84 157
#define LABEL_86 159
#define LABEL_90 161
#define LABEL_87 163
#define LABEL_88 165
#define LABEL_93 167
#define LABEL_89 169
#define LABEL_91 171
#define LABEL_96 173
#define LABEL_92 175
#define LABEL_94 177
#define LABEL_95 179
#define LABEL_97 181
#define LABEL_99 183
#define LABEL_103 185
#define LABEL_100 187
#define LABEL_101 189
#define LABEL_106 191
#define LABEL_102 193
#define LABEL_104 195
#define LABEL_109 197
#define LABEL_105 199
#define LABEL_107 201
#define LABEL_108 203
#define LABEL_110 205
#define LABEL_111 207
#define LABEL_115 209
#define LABEL_112 211
#define LABEL_113 213
#define LABEL_118 215
#define LABEL_114 217
#define LABEL_116 219
#define LABEL_121 221
#define LABEL_117 223
#define LABEL_119 225
#define LABEL_124 227
#define LABEL_120 229
#define LABEL_122 231
#define LABEL_123 233
#define LABEL_125 235
#define LABEL_129 237
#define LABEL_126 239
#define LABEL_127 241
#define LABEL_131 243
#define LABEL_128 245
#define LABEL_130 247
#define LABEL_132 249
#define LABEL_133 251
#define LABEL_134 253
#define ENVIRONMENT_LABEL_3 350
#define DEBUGGING_LABEL_2 349
#define PURIFICATION_ROOT 348
#define OBJECT_69 347
#define OBJECT_68 346
#define OBJECT_67 345
#define OBJECT_66 344
#define OBJECT_65 343
#define OBJECT_64 342
#define OBJECT_63 341
#define OBJECT_62 340
#define OBJECT_61 339
#define OBJECT_60 338
#define OBJECT_59 337
#define OBJECT_58 336
#define OBJECT_57 335
#define OBJECT_56 334
#define OBJECT_55 333
#define OBJECT_54 332
#define OBJECT_53 331
#define OBJECT_52 330
#define OBJECT_51 329
#define OBJECT_50 328
#define OBJECT_49 327
#define OBJECT_48 326
#define OBJECT_47 325
#define OBJECT_46 324
#define OBJECT_45 323
#define OBJECT_44 322
#define OBJECT_43 321
#define OBJECT_42 320
#define OBJECT_41 319
#define OBJECT_40 318
#define OBJECT_39 317
#define OBJECT_38 316
#define OBJECT_37 315
#define OBJECT_36 314
#define OBJECT_35 313
#define OBJECT_34 312
#define OBJECT_33 311
#define OBJECT_32 310
#define OBJECT_31 309
#define OBJECT_30 308
#define OBJECT_29 307
#define OBJECT_28 306
#define OBJECT_27 305
#define OBJECT_26 304
#define OBJECT_25 303
#define OBJECT_24 302
#define OBJECT_23 301
#define OBJECT_22 300
#define OBJECT_21 299
#define OBJECT_20 298
#define OBJECT_19 297
#define OBJECT_18 296
#define OBJECT_17 295
#define OBJECT_16 294
#define OBJECT_15 293
#define OBJECT_14 292
#define OBJECT_13 291
#define OBJECT_12 290
#define OBJECT_11 289
#define OBJECT_10 288
#define OBJECT_9 287
#define OBJECT_8 286
#define OBJECT_7 285
#define OBJECT_6 284
#define OBJECT_5 283
#define OBJECT_4 282
#define OBJECT_3 281
#define OBJECT_2 280
#define OBJECT_1 279
#define OBJECT_0 278
#define EXECUTE_CACHE_26 255
#define EXECUTE_CACHE_14 257
#define EXECUTE_CACHE_10 259
#define EXECUTE_CACHE_6 261
#define FREE_REFERENCE_10 264
#define FREE_REFERENCE_9 265
#define FREE_REFERENCE_8 266
#define FREE_REFERENCE_7 267
#define FREE_REFERENCE_6 268
#define FREE_REFERENCE_5 269
#define FREE_REFERENCE_4 270
#define FREE_REFERENCE_3 271
#define FREE_REFERENCE_2 272
#define FREE_REFERENCE_1 273
#define FREE_REFERENCE_0 274
#define GLOBAL_EXECUTE_CACHE_98 276
#define FREE_REFERENCES_LABEL_0 254
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
syntax_items_so_b05f07ab8dee4f34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_92;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_13);
      goto label_93;

    case 5:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_12);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_19);
      goto label_94;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_22);
      goto label_95;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_25);
      goto label_96;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto continuation_13;

    case 18:
      current_block = (Rpc - LABEL_24);
      goto continuation_12;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_15;

    case 20:
      current_block = (Rpc - LABEL_31);
      goto label_97;

    case 21:
      current_block = (Rpc - LABEL_28);
      goto continuation_14;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto continuation_17;

    case 23:
      current_block = (Rpc - LABEL_34);
      goto label_98;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto continuation_16;

    case 25:
      current_block = (Rpc - LABEL_32);
      goto continuation_19;

    case 26:
      current_block = (Rpc - LABEL_37);
      goto label_99;

    case 27:
      current_block = (Rpc - LABEL_33);
      goto continuation_18;

    case 28:
      current_block = (Rpc - LABEL_35);
      goto continuation_21;

    case 29:
      current_block = (Rpc - LABEL_36);
      goto continuation_20;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto continuation_23;

    case 31:
      current_block = (Rpc - LABEL_42);
      goto label_100;

    case 32:
      current_block = (Rpc - LABEL_39);
      goto continuation_22;

    case 33:
      current_block = (Rpc - LABEL_40);
      goto continuation_25;

    case 34:
      current_block = (Rpc - LABEL_45);
      goto label_101;

    case 35:
      current_block = (Rpc - LABEL_41);
      goto continuation_24;

    case 36:
      current_block = (Rpc - LABEL_43);
      goto continuation_27;

    case 37:
      current_block = (Rpc - LABEL_48);
      goto label_102;

    case 38:
      current_block = (Rpc - LABEL_44);
      goto continuation_26;

    case 39:
      current_block = (Rpc - LABEL_46);
      goto continuation_29;

    case 40:
      current_block = (Rpc - LABEL_47);
      goto continuation_28;

    case 41:
      current_block = (Rpc - LABEL_49);
      goto continuation_31;

    case 42:
      current_block = (Rpc - LABEL_53);
      goto label_103;

    case 43:
      current_block = (Rpc - LABEL_50);
      goto continuation_30;

    case 44:
      current_block = (Rpc - LABEL_51);
      goto continuation_33;

    case 45:
      current_block = (Rpc - LABEL_56);
      goto label_104;

    case 46:
      current_block = (Rpc - LABEL_52);
      goto continuation_32;

    case 47:
      current_block = (Rpc - LABEL_54);
      goto continuation_35;

    case 48:
      current_block = (Rpc - LABEL_59);
      goto label_105;

    case 49:
      current_block = (Rpc - LABEL_55);
      goto continuation_34;

    case 50:
      current_block = (Rpc - LABEL_57);
      goto continuation_37;

    case 51:
      current_block = (Rpc - LABEL_62);
      goto label_106;

    case 52:
      current_block = (Rpc - LABEL_58);
      goto continuation_36;

    case 53:
      current_block = (Rpc - LABEL_60);
      goto continuation_39;

    case 54:
      current_block = (Rpc - LABEL_61);
      goto continuation_38;

    case 55:
      current_block = (Rpc - LABEL_63);
      goto continuation_40;

    case 56:
      current_block = (Rpc - LABEL_64);
      goto continuation_42;

    case 57:
      current_block = (Rpc - LABEL_68);
      goto label_107;

    case 58:
      current_block = (Rpc - LABEL_65);
      goto continuation_41;

    case 59:
      current_block = (Rpc - LABEL_66);
      goto continuation_44;

    case 60:
      current_block = (Rpc - LABEL_71);
      goto label_108;

    case 61:
      current_block = (Rpc - LABEL_67);
      goto continuation_43;

    case 62:
      current_block = (Rpc - LABEL_69);
      goto continuation_46;

    case 63:
      current_block = (Rpc - LABEL_74);
      goto label_109;

    case 64:
      current_block = (Rpc - LABEL_70);
      goto continuation_45;

    case 65:
      current_block = (Rpc - LABEL_72);
      goto continuation_48;

    case 66:
      current_block = (Rpc - LABEL_73);
      goto continuation_47;

    case 67:
      current_block = (Rpc - LABEL_75);
      goto continuation_50;

    case 68:
      current_block = (Rpc - LABEL_79);
      goto label_110;

    case 69:
      current_block = (Rpc - LABEL_76);
      goto continuation_49;

    case 70:
      current_block = (Rpc - LABEL_77);
      goto continuation_52;

    case 71:
      current_block = (Rpc - LABEL_82);
      goto label_111;

    case 72:
      current_block = (Rpc - LABEL_78);
      goto continuation_51;

    case 73:
      current_block = (Rpc - LABEL_80);
      goto continuation_54;

    case 74:
      current_block = (Rpc - LABEL_85);
      goto label_112;

    case 75:
      current_block = (Rpc - LABEL_81);
      goto continuation_53;

    case 76:
      current_block = (Rpc - LABEL_83);
      goto continuation_56;

    case 77:
      current_block = (Rpc - LABEL_84);
      goto continuation_55;

    case 78:
      current_block = (Rpc - LABEL_86);
      goto continuation_58;

    case 79:
      current_block = (Rpc - LABEL_90);
      goto label_113;

    case 80:
      current_block = (Rpc - LABEL_87);
      goto continuation_57;

    case 81:
      current_block = (Rpc - LABEL_88);
      goto continuation_60;

    case 82:
      current_block = (Rpc - LABEL_93);
      goto label_114;

    case 83:
      current_block = (Rpc - LABEL_89);
      goto continuation_59;

    case 84:
      current_block = (Rpc - LABEL_91);
      goto continuation_62;

    case 85:
      current_block = (Rpc - LABEL_96);
      goto label_115;

    case 86:
      current_block = (Rpc - LABEL_92);
      goto continuation_61;

    case 87:
      current_block = (Rpc - LABEL_94);
      goto continuation_64;

    case 88:
      current_block = (Rpc - LABEL_95);
      goto continuation_63;

    case 89:
      current_block = (Rpc - LABEL_97);
      goto continuation_65;

    case 90:
      current_block = (Rpc - LABEL_99);
      goto continuation_67;

    case 91:
      current_block = (Rpc - LABEL_103);
      goto label_116;

    case 92:
      current_block = (Rpc - LABEL_100);
      goto continuation_66;

    case 93:
      current_block = (Rpc - LABEL_101);
      goto continuation_69;

    case 94:
      current_block = (Rpc - LABEL_106);
      goto label_117;

    case 95:
      current_block = (Rpc - LABEL_102);
      goto continuation_68;

    case 96:
      current_block = (Rpc - LABEL_104);
      goto continuation_71;

    case 97:
      current_block = (Rpc - LABEL_109);
      goto label_118;

    case 98:
      current_block = (Rpc - LABEL_105);
      goto continuation_70;

    case 99:
      current_block = (Rpc - LABEL_107);
      goto continuation_73;

    case 100:
      current_block = (Rpc - LABEL_108);
      goto continuation_72;

    case 101:
      current_block = (Rpc - LABEL_110);
      goto continuation_74;

    case 102:
      current_block = (Rpc - LABEL_111);
      goto continuation_76;

    case 103:
      current_block = (Rpc - LABEL_115);
      goto label_119;

    case 104:
      current_block = (Rpc - LABEL_112);
      goto continuation_75;

    case 105:
      current_block = (Rpc - LABEL_113);
      goto continuation_78;

    case 106:
      current_block = (Rpc - LABEL_118);
      goto label_120;

    case 107:
      current_block = (Rpc - LABEL_114);
      goto continuation_77;

    case 108:
      current_block = (Rpc - LABEL_116);
      goto continuation_80;

    case 109:
      current_block = (Rpc - LABEL_121);
      goto label_121;

    case 110:
      current_block = (Rpc - LABEL_117);
      goto continuation_79;

    case 111:
      current_block = (Rpc - LABEL_119);
      goto continuation_82;

    case 112:
      current_block = (Rpc - LABEL_124);
      goto label_122;

    case 113:
      current_block = (Rpc - LABEL_120);
      goto continuation_81;

    case 114:
      current_block = (Rpc - LABEL_122);
      goto continuation_84;

    case 115:
      current_block = (Rpc - LABEL_123);
      goto continuation_83;

    case 116:
      current_block = (Rpc - LABEL_125);
      goto continuation_86;

    case 117:
      current_block = (Rpc - LABEL_129);
      goto label_123;

    case 118:
      current_block = (Rpc - LABEL_126);
      goto continuation_85;

    case 119:
      current_block = (Rpc - LABEL_127);
      goto continuation_88;

    case 120:
      current_block = (Rpc - LABEL_131);
      goto label_124;

    case 121:
      current_block = (Rpc - LABEL_128);
      goto continuation_87;

    case 122:
      current_block = (Rpc - LABEL_130);
      goto continuation_89;

    case 123:
      current_block = (Rpc - LABEL_132);
      goto label_127;

    case 124:
      current_block = (Rpc - LABEL_133);
      goto label_128;

    case 125:
      current_block = (Rpc - LABEL_134);
      goto expression_91;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_91)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_133])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_128)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_127)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 4)
      goto label_126;
    blocks = (current_block [OBJECT_69]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_132])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_126)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_194;
  Wrd12 = Wrd16;

DEFLABEL (label_193)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_192;
  Wrd11 = Wrd15;

DEFLABEL (label_191)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_190;
  Wrd12 = Wrd16;

DEFLABEL (label_189)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_188;
  Wrd11 = Wrd15;

DEFLABEL (label_187)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_186;
  Wrd12 = Wrd16;

DEFLABEL (label_185)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_184;
  Wrd12 = Wrd16;

DEFLABEL (label_183)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_182;
  Wrd11 = Wrd15;

DEFLABEL (label_181)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_180;
  Wrd12 = Wrd16;

DEFLABEL (label_179)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_178;
  Wrd12 = Wrd16;

DEFLABEL (label_177)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_176;
  Wrd11 = Wrd15;

DEFLABEL (label_175)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_174;
  Wrd12 = Wrd16;

DEFLABEL (label_173)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_47);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_50);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_172;
  Wrd12 = Wrd16;

DEFLABEL (label_171)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_170;
  Wrd11 = Wrd15;

DEFLABEL (label_169)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_55);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_168;
  Wrd12 = Wrd16;

DEFLABEL (label_167)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_58);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_166;
  Wrd12 = Wrd16;

DEFLABEL (label_165)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_61);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_65);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_164;
  Wrd12 = Wrd16;

DEFLABEL (label_163)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_67);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_162;
  Wrd11 = Wrd15;

DEFLABEL (label_161)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_70);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_160;
  Wrd12 = Wrd16;

DEFLABEL (label_159)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_73);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_76);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_158;
  Wrd12 = Wrd16;

DEFLABEL (label_157)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_78);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_156;
  Wrd11 = Wrd15;

DEFLABEL (label_155)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_81);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_154;
  Wrd12 = Wrd16;

DEFLABEL (label_153)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_84);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_87);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_152;
  Wrd12 = Wrd16;

DEFLABEL (label_151)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_89);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_150;
  Wrd11 = Wrd15;

DEFLABEL (label_149)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_92);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_148;
  Wrd12 = Wrd16;

DEFLABEL (label_147)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_95);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_98]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_100);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_146;
  Wrd12 = Wrd16;

DEFLABEL (label_145)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_102);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_144;
  Wrd11 = Wrd15;

DEFLABEL (label_143)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_105);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_142;
  Wrd12 = Wrd16;

DEFLABEL (label_141)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_108);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_112);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_140;
  Wrd12 = Wrd16;

DEFLABEL (label_139)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_114);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_138;
  Wrd11 = Wrd15;

DEFLABEL (label_137)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_117);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_136;
  Wrd12 = Wrd16;

DEFLABEL (label_135)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_120);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_119);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_134;
  Wrd12 = Wrd16;

DEFLABEL (label_133)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_123);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_126);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_125);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_132;
  Wrd12 = Wrd16;

DEFLABEL (label_131)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_128);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_127);
  (Wrd5.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_130;
  Wrd10 = Wrd14;

DEFLABEL (label_129)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_130);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (label_130)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_131])), (Wrd11.pObj));

DEFLABEL (label_124)
  (Wrd10.Obj) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_129])), (Wrd13.pObj));

DEFLABEL (label_123)
  (Wrd12.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_124])), (Wrd13.pObj));

DEFLABEL (label_122)
  (Wrd12.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_121])), (Wrd13.pObj));

DEFLABEL (label_121)
  (Wrd12.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_118])), (Wrd12.pObj));

DEFLABEL (label_120)
  (Wrd11.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_115])), (Wrd13.pObj));

DEFLABEL (label_119)
  (Wrd12.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_109])), (Wrd13.pObj));

DEFLABEL (label_118)
  (Wrd12.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_106])), (Wrd12.pObj));

DEFLABEL (label_117)
  (Wrd11.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_103])), (Wrd13.pObj));

DEFLABEL (label_116)
  (Wrd12.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96])), (Wrd13.pObj));

DEFLABEL (label_115)
  (Wrd12.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93])), (Wrd12.pObj));

DEFLABEL (label_114)
  (Wrd11.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90])), (Wrd13.pObj));

DEFLABEL (label_113)
  (Wrd12.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85])), (Wrd13.pObj));

DEFLABEL (label_112)
  (Wrd12.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82])), (Wrd12.pObj));

DEFLABEL (label_111)
  (Wrd11.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79])), (Wrd13.pObj));

DEFLABEL (label_110)
  (Wrd12.Obj) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74])), (Wrd13.pObj));

DEFLABEL (label_109)
  (Wrd12.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71])), (Wrd12.pObj));

DEFLABEL (label_108)
  (Wrd11.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68])), (Wrd13.pObj));

DEFLABEL (label_107)
  (Wrd12.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62])), (Wrd13.pObj));

DEFLABEL (label_106)
  (Wrd12.Obj) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59])), (Wrd13.pObj));

DEFLABEL (label_105)
  (Wrd12.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56])), (Wrd12.pObj));

DEFLABEL (label_104)
  (Wrd11.Obj) = Rvl;
  goto label_169;

DEFLABEL (label_172)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53])), (Wrd13.pObj));

DEFLABEL (label_103)
  (Wrd12.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48])), (Wrd13.pObj));

DEFLABEL (label_102)
  (Wrd12.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45])), (Wrd12.pObj));

DEFLABEL (label_101)
  (Wrd11.Obj) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd13.pObj));

DEFLABEL (label_100)
  (Wrd12.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_180)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd13.pObj));

DEFLABEL (label_99)
  (Wrd12.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34])), (Wrd12.pObj));

DEFLABEL (label_98)
  (Wrd11.Obj) = Rvl;
  goto label_181;

DEFLABEL (label_184)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd13.pObj));

DEFLABEL (label_97)
  (Wrd12.Obj) = Rvl;
  goto label_183;

DEFLABEL (label_186)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd13.pObj));

DEFLABEL (label_96)
  (Wrd12.Obj) = Rvl;
  goto label_185;

DEFLABEL (label_188)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd12.pObj));

DEFLABEL (label_95)
  (Wrd11.Obj) = Rvl;
  goto label_187;

DEFLABEL (label_190)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd13.pObj));

DEFLABEL (label_94)
  (Wrd12.Obj) = Rvl;
  goto label_189;

DEFLABEL (label_192)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd12.pObj));

DEFLABEL (label_93)
  (Wrd11.Obj) = Rvl;
  goto label_191;

DEFLABEL (label_194)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd13.pObj));

DEFLABEL (label_92)
  (Wrd12.Obj) = Rvl;
  goto label_193;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_syntax_items_so_b05f07ab8dee4f34 [4] =
  {
    { "syntax_items_so_code_1", 4, syntax_items_so_code_1 },
    { "syntax_items_so_code_2", 2, syntax_items_so_code_2 },
    { "syntax_items_so_code_3", 3, syntax_items_so_code_3 },
    { "syntax_items_so_code_4", 2, syntax_items_so_code_4 }
  };

int
decl_syntax_items_so_b05f07ab8dee4f34 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_syntax_items_so_b05f07ab8dee4f34);
  return (0);
}

DECLARE_COMPILED_CODE ("syntax-items.so", 126, decl_syntax_items_so_b05f07ab8dee4f34, syntax_items_so_b05f07ab8dee4f34)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_syntax_items_so_data_b05f07ab8dee4f34 [2561] =
  "\xdf\x02\x12\xea\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9"
  "\x28\x0d\xba\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x82\x88\x0d\xbe\x24\x28\x0d\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x83\x88\x08\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\x28\x0d\xb8\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x9b\x1c\x88\x1b\x0d\x0d\x0d\x0d\x1c\x0d\x0d\x1c\x0d\x0d\x0d"
  "\x1c\x0d\x1c\x1b\x08\x89\xb0\x0d\x1b\x2a\x0d\x0d\x1c\x0d\x0d\x1c"
  "\x1b\x08\x88\x1b\xb6\x1b\x99\x1b\x2a\xb7\x2a\x99\x1b\x0d\x1c\x0d"
  "\x0d\x0d\x1c\x1b\x08\x88\x0d\x0d\x0d\x0d\x1c\x0d\x1b\x0d\x0d\x1c"
  "\x1b\x08\x88\x0d\x0d\xb5\x2a\x0d\x0d\x1c\xb4\x0d\x1c\x0d\x0d\x0d"
  "\x1c\x1b\x1b\x08\x89\xb3\x0d\x1c\x0d\x0d\x0d\x1c\x1b\x08\x88\xb2"
  "\x0d\x1c\x0d\x0d\x0d\xbf\x1b\x08\x88\xb1\x0d\x1c\x0d\x0d\x0d\xbe"
  "\x1b\x08\x88\x0d\xc3\x0d\x1c\x08\x28\x0d\x26\x1b\xb6\xb7\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5b"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x73\x79\x6e\x74\x61\x78"
  "\x2d\x69\x74\x65\x6d\x73\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x03\x11\x63\x6c\x61\x73\x73\x69\x66\x69\x65\x72\x2d\x69\x74\x65"
  "\x6d\x3f\x03\x0f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69\x74\x65"
  "\x6d\x3f\x03\x0f\x65\x78\x70\x61\x6e\x64\x65\x72\x2d\x69\x74\x65"
  "\x6d\x3f\x03\x14\x6b\x65\x79\x77\x6f\x72\x64\x2d\x76\x61\x6c\x75"
  "\x65\x2d\x69\x74\x65\x6d\x3f\x05\x82\x01\x0a\x81\x85\x02\x81\x01"
  "\x08\x81\x85\x02\x80\x01\x06\x81\x83\x02\x7f\x04\x83\x04\x09\x15"
  "\x02\x0b\x69\x74\x65\x6d\x2d\x3e\x6c\x69\x73\x74\x02\x04\x0b\x61"
  "\x70\x70\x65\x6e\x64\x2d\x6d\x61\x70\x02\x84\x01\x06\x81\x83\x02"
  "\x83\x01\x04\x83\x04\x05\x0d\x02\x03\x0b\x62\x6f\x64\x79\x2d\x69"
  "\x74\x65\x6d\x3f\x09\x03\x15\x62\x6f\x64\x79\x2d\x69\x74\x65\x6d"
  "\x2f\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x0a\x03\x13\x66\x6c"
  "\x61\x74\x74\x65\x6e\x2d\x62\x6f\x64\x79\x2d\x69\x74\x65\x6d\x73"
  "\x0b\x04\x87\x01\x08\x81\x83\x02\x86\x01\x06\x81\x83\x02\x85\x01"
  "\x04\x83\x04\x07\x12\x0c\x02\x03\x1a\x64\x65\x63\x6c\x61\x72\x61"
  "\x74\x69\x6f\x6e\x2d\x69\x74\x65\x6d\x2f\x67\x65\x74\x2d\x74\x65"
  "\x78\x74\x02\x89\x01\x06\x81\x83\x02\x88\x01\x04\x83\x04\x05\x0b"
  "\x0d\x0e\x0e\x17\x6d\x61\x6b\x65\x2d\x6e\x75\x6c\x6c\x2d\x62\x69"
  "\x6e\x64\x69\x6e\x67\x2d\x69\x74\x65\x6d\x13\x6e\x75\x6c\x6c\x2d"
  "\x62\x69\x6e\x64\x69\x6e\x67\x2d\x69\x74\x65\x6d\x3f\x13\x62\x69"
  "\x6e\x64\x69\x6e\x67\x2d\x69\x74\x65\x6d\x2f\x76\x61\x6c\x75\x65"
  "\x14\x3c\x6e\x75\x6c\x6c\x2d\x62\x69\x6e\x64\x69\x6e\x67\x2d\x69"
  "\x74\x65\x6d\x3e\x0e\x12\x62\x69\x6e\x64\x69\x6e\x67\x2d\x69\x74"
  "\x65\x6d\x2f\x6e\x61\x6d\x65\x06\x76\x61\x6c\x75\x65\x0f\x0e\x62"
  "\x69\x6e\x64\x69\x6e\x67\x2d\x69\x74\x65\x6d\x3f\x12\x6d\x61\x6b"
  "\x65\x2d\x62\x69\x6e\x64\x69\x6e\x67\x2d\x69\x74\x65\x6d\x0f\x3c"
  "\x62\x69\x6e\x64\x69\x6e\x67\x2d\x69\x74\x65\x6d\x3e\x10\x05\x6e"
  "\x61\x6d\x65\x11\x0f\x16\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f"
  "\x6e\x2d\x69\x74\x65\x6d\x2f\x74\x65\x78\x74\x0d\x04\x12\x64\x65"
  "\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d\x69\x74\x65\x6d\x3f\x09"
  "\x67\x65\x74\x2d\x74\x65\x78\x74\x0f\x16\x6d\x61\x6b\x65\x2d\x64"
  "\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d\x69\x74\x65\x6d\x13"
  "\x3c\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d\x69\x74\x65"
  "\x6d\x3e\x0d\x0f\x0a\x0b\x0c\x04\x04\x09\x0b\x63\x6f\x6d\x70\x6f"
  "\x6e\x65\x6e\x74\x73\x0f\x0f\x6d\x61\x6b\x65\x2d\x62\x6f\x64\x79"
  "\x2d\x69\x74\x65\x6d\x19\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x2d\x69\x74\x65\x6d\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x0c\x3c"
  "\x62\x6f\x64\x79\x2d\x69\x74\x65\x6d\x3e\x0c\x0f\x11\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x2d\x69\x74\x65\x6d\x3f\x15\x6d\x61"
  "\x6b\x65\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x69\x74"
  "\x65\x6d\x13\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x69\x74\x65\x6d"
  "\x2f\x6e\x61\x6d\x65\x12\x3c\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x2d\x69\x74\x65\x6d\x3e\x0f\x0f\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x2d\x69\x74\x65\x6d\x3f\x11\x13\x6d\x61\x6b\x65\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x2d\x69\x74\x65\x6d\x10\x3c\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x2d\x69\x74\x65\x6d\x3e\x0b\x11\x1e\x6b\x65"
  "\x79\x77\x6f\x72\x64\x2d\x76\x61\x6c\x75\x65\x2d\x69\x74\x65\x6d"
  "\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x0e\x6b\x65\x79\x77"
  "\x6f\x72\x64\x2d\x69\x74\x65\x6d\x3f\x04\x18\x6b\x65\x79\x77\x6f"
  "\x72\x64\x2d\x76\x61\x6c\x75\x65\x2d\x69\x74\x65\x6d\x2f\x69\x74"
  "\x65\x6d\x0b\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x11\x05\x69"
  "\x74\x65\x6d\x0a\x18\x6d\x61\x6b\x65\x2d\x6b\x65\x79\x77\x6f\x72"
  "\x64\x2d\x76\x61\x6c\x75\x65\x2d\x69\x74\x65\x6d\x17\x65\x78\x70"
  "\x61\x6e\x64\x65\x72\x2d\x69\x74\x65\x6d\x2f\x65\x78\x70\x61\x6e"
  "\x64\x65\x72\x15\x3c\x6b\x65\x79\x77\x6f\x72\x64\x2d\x76\x61\x6c"
  "\x75\x65\x2d\x69\x74\x65\x6d\x3e\x09\x0a\x11\x09\x65\x78\x70\x61"
  "\x6e\x64\x65\x72\x11\x13\x6d\x61\x6b\x65\x2d\x65\x78\x70\x61\x6e"
  "\x64\x65\x72\x2d\x69\x74\x65\x6d\x17\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x2d\x69\x74\x65\x6d\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x10"
  "\x3c\x65\x78\x70\x61\x6e\x64\x65\x72\x2d\x69\x74\x65\x6d\x3e\x0a"
  "\x11\x09\x63\x6f\x6d\x70\x69\x6c\x65\x72\x11\x13\x6d\x61\x6b\x65"
  "\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69\x74\x65\x6d\x1b\x63"
  "\x6c\x61\x73\x73\x69\x66\x69\x65\x72\x2d\x69\x74\x65\x6d\x2f\x63"
  "\x6c\x61\x73\x73\x69\x66\x69\x65\x72\x10\x3c\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x2d\x69\x74\x65\x6d\x3e\x11\x0b\x63\x6c\x61\x73\x73"
  "\x69\x66\x69\x65\x72\x11\x15\x6d\x61\x6b\x65\x2d\x63\x6c\x61\x73"
  "\x73\x69\x66\x69\x65\x72\x2d\x69\x74\x65\x6d\x14\x72\x65\x73\x65"
  "\x72\x76\x65\x64\x2d\x6e\x61\x6d\x65\x2d\x69\x74\x65\x6d\x3f\x12"
  "\x3c\x63\x6c\x61\x73\x73\x69\x66\x69\x65\x72\x2d\x69\x74\x65\x6d"
  "\x3e\x11\x18\x6d\x61\x6b\x65\x2d\x72\x65\x73\x65\x72\x76\x65\x64"
  "\x2d\x6e\x61\x6d\x65\x2d\x69\x74\x65\x6d\x11\x6c\x6f\x63\x61\x6c"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x15\x3c\x72\x65\x73"
  "\x65\x72\x76\x65\x64\x2d\x6e\x61\x6d\x65\x2d\x69\x74\x65\x6d\x3e"
  "\x11\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x65\x02\x11\x0a\x09\x0b\x0f\x0c\x0d\x10\x0e\x0c\x04\x11\x6d"
  "\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x04"
  "\x13\x72\x65\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63"
  "\x74\x6f\x72\x03\x11\x72\x65\x63\x6f\x72\x64\x2d\x70\x72\x65\x64"
  "\x69\x63\x61\x74\x65\x04\x10\x72\x65\x63\x6f\x72\x64\x2d\x61\x63"
  "\x63\x65\x73\x73\x6f\x72\x05\x7e\xfe\x01\x80\x80\x04\x7d\xfc\x01"
  "\x81\x81\x02\x7c\xfa\x01\x81\x81\x02\x7b\xf8\x01\x81\x87\x02\x7a"
  "\xf6\x01\x81\x85\x02\x79\xf4\x01\x81\x89\x02\x78\xf2\x01\x81\x83"
  "\x02\x77\xf0\x01\x81\x85\x02\x76\xee\x01\x81\x89\x02\x75\xec\x01"
  "\x81\x83\x02\x74\xea\x01\x81\x85\x02\x73\xe8\x01\x81\x83\x02\x72"
  "\xe6\x01\x81\x85\x02\x71\xe4\x01\x81\x89\x02\x70\xe2\x01\x81\x83"
  "\x02\x6f\xe0\x01\x81\x85\x02\x6e\xde\x01\x81\x89\x02\x6d\xdc\x01"
  "\x81\x83\x02\x6c\xda\x01\x81\x85\x02\x6b\xd8\x01\x81\x87\x02\x6a"
  "\xd6\x01\x81\x83\x02\x69\xd4\x01\x81\x85\x02\x68\xd2\x01\x81\x89"
  "\x02\x67\xd0\x01\x81\x83\x02\x66\xce\x01\x81\x83\x02\x65\xcc\x01"
  "\x81\x85\x02\x64\xca\x01\x81\x83\x02\x63\xc8\x01\x81\x85\x02\x62"
  "\xc6\x01\x81\x89\x02\x61\xc4\x01\x81\x83\x02\x60\xc2\x01\x81\x85"
  "\x02\x5f\xc0\x01\x81\x87\x02\x5e\xbe\x01\x81\x83\x02\x5d\xbc\x01"
  "\x81\x85\x02\x5c\xba\x01\x81\x89\x02\x5b\xb8\x01\x81\x83\x02\x5a"
  "\xb6\x01\x81\x83\x02\x59\xb4\x01\x81\x85\x02\x58\xb2\x01\x81\x83"
  "\x02\x57\xb0\x01\x81\x85\x02\x56\xae\x01\x81\x89\x02\x55\xac\x01"
  "\x81\x83\x02\x54\xaa\x01\x81\x85\x02\x53\xa8\x01\x81\x87\x02\x52"
  "\xa6\x01\x81\x83\x02\x51\xa4\x01\x81\x85\x02\x50\xa2\x01\x81\x89"
  "\x02\x4f\xa0\x01\x81\x83\x02\x4e\x9e\x01\x81\x85\x02\x4d\x9c\x01"
  "\x81\x83\x02\x4c\x9a\x01\x81\x85\x02\x4b\x98\x01\x81\x89\x02\x4a"
  "\x96\x01\x81\x83\x02\x49\x94\x01\x81\x85\x02\x48\x92\x01\x81\x87"
  "\x02\x47\x90\x01\x81\x83\x02\x46\x8e\x01\x81\x85\x02\x45\x8c\x01"
  "\x81\x89\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81\x85\x02\x42"
  "\x86\x01\x81\x83\x02\x41\x84\x01\x81\x85\x02\x40\x82\x01\x81\x89"
  "\x02\x3f\x80\x01\x81\x83\x02\x3e\x7e\x81\x85\x02\x3d\x7c\x81\x87"
  "\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81\x85\x02\x3a\x76\x81\x89\x02"
  "\x39\x74\x81\x83\x02\x38\x72\x81\x83\x02\x37\x70\x81\x85\x02\x36"
  "\x6e\x81\x83\x02\x35\x6c\x81\x85\x02\x34\x6a\x81\x89\x02\x33\x68"
  "\x81\x83\x02\x32\x66\x81\x85\x02\x31\x64\x81\x89\x02\x30\x62\x81"
  "\x83\x02\x2f\x60\x81\x85\x02\x2e\x5e\x81\x87\x02\x2d\x5c\x81\x83"
  "\x02\x2c\x5a\x81\x85\x02\x2b\x58\x81\x89\x02\x2a\x56\x81\x83\x02"
  "\x29\x54\x81\x85\x02\x28\x52\x81\x83\x02\x27\x50\x81\x85\x02\x26"
  "\x4e\x81\x89\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x85\x02\x23\x48"
  "\x81\x87\x02\x22\x46\x81\x83\x02\x21\x44\x81\x85\x02\x20\x42\x81"
  "\x89\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x85\x02\x1d\x3c\x81\x83"
  "\x02\x1c\x3a\x81\x85\x02\x1b\x38\x81\x89\x02\x1a\x36\x81\x83\x02"
  "\x19\x34\x81\x85\x02\x18\x32\x81\x87\x02\x17\x30\x81\x83\x02\x16"
  "\x2e\x81\x85\x02\x15\x2c\x81\x89\x02\x14\x2a\x81\x83\x02\x13\x28"
  "\x81\x85\x02\x12\x26\x81\x83\x02\x11\x24\x81\x85\x02\x10\x22\x81"
  "\x89\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x87"
  "\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x89\x02"
  "\x09\x14\x81\x83\x02\x08\x12\x81\x85\x02\x07\x10\x81\x83\x02\x06"
  "\x0e\x81\x85\x02\x05\x0c\x81\x87\x02\x04\x0a\x81\x83\x02\x03\x08"
  "\x81\x85\x02\x02\x06\x81\x89\x02\x01\x04\x81\x83\x02\xfd\x01\xdf"
  "\x02";

SCHEME_OBJECT *
syntax_items_so_data_b05f07ab8dee4f34 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_syntax_items_so_data_b05f07ab8dee4f34 [0]))), (sizeof (prog_syntax_items_so_data_b05f07ab8dee4f34)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_134]));
}

DECLARE_COMPILED_DATA_NS ("syntax-items.so", syntax_items_so_data_b05f07ab8dee4f34)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("syntax-items.so", "28b1c6ad45a12858")
