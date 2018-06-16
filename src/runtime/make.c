/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:42-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_5 3
#define LABEL_1_4 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define LABEL_1_10 13
#define LABEL_1_12 15
#define LABEL_1_13 17
#define LABEL_1_11 19
#define ENVIRONMENT_LABEL_1_3 30
#define DEBUGGING_LABEL_1_2 29
#define OBJECT_1_5 28
#define OBJECT_1_4 27
#define OBJECT_1_3 26
#define OBJECT_1_2 25
#define OBJECT_1_1 24
#define OBJECT_1_0 23
#define EXECUTE_CACHE_1_9 21
#define FREE_REFERENCES_LABEL_1_0 20
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
make_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd34;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd28;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_1_5);
      goto continuation_5;

    case 1:
      current_block = (Rpc - LABEL_1_4);
      goto lambda_16;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto loop_13;

    case 6:
      current_block = (Rpc - LABEL_1_12);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_24)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_30;

DEFLABEL (label_29)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_5);

DEFLABEL (label_28)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_27;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Obj) = (MAKE_OBJECT (26, (Wrd41.uLng)));
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_26)
  (Wrd49.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd50.Obj);
  goto loop_13;

DEFLABEL (label_27)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 10))
    goto label_29;
  if (! ((Wrd14.uLng) == 10))
    goto label_34;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Obj) = (MAKE_OBJECT (26, (Wrd18.uLng)));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_33)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_32;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd26.Obj) = (MAKE_OBJECT (26, (Wrd30.uLng)));

DEFLABEL (label_31)
  (Wrd37.Obj) = (* (Rsp++));
  if ((Wrd26.Obj) == (Wrd37.Obj))
    goto label_28;
  goto label_29;

DEFLABEL (label_32)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_19)
  (Wrd26.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (loop_25)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_1_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_35;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd28.Obj) = (Rsp [6]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_39;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_39;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_39;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd18.pObj) = (& ((Wrd25.pObj) [(Wrd15.Lng)]));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_38)
  (Wrd49.Obj) = (Rsp [6]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_37;
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_37;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) (Wrd44.Lng)) < ((unsigned long) (Wrd48.Lng))))
    goto label_37;
  (Wrd36.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd39.pObj) = (& ((Wrd46.pObj) [(Wrd36.Lng)]));
  (Wrd40.Obj) = ((Wrd39.pObj) [1]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_36)
  (Wrd56.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [0]) = (Wrd6.Obj);
  goto loop_13;

DEFLABEL (label_37)
  (Wrd51.Obj) = (Rsp [6]);
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd30.Obj) = (Rsp [6]);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define ENVIRONMENT_LABEL_2_3 15
#define DEBUGGING_LABEL_2_2 14
#define OBJECT_2_5 13
#define OBJECT_2_4 12
#define OBJECT_2_3 11
#define OBJECT_2_2 10
#define OBJECT_2_1 9
#define OBJECT_2_0 8
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
make_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_2_4);
      goto Z__make_environment_3;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__make_environment_6)
DEFLABEL (Z__make_environment_3)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_2_3]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_4]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_7 11
#define LABEL_9 13
#define LABEL_12 15
#define LABEL_10 17
#define LABEL_15 19
#define LABEL_11 21
#define LABEL_14 23
#define LABEL_16 25
#define LABEL_30 27
#define LABEL_35 29
#define LABEL_28 31
#define TAG_29 14
#define LABEL_37 33
#define LABEL_26 35
#define TAG_27 16
#define LABEL_24 37
#define TAG_25 17
#define LABEL_22 39
#define TAG_23 18
#define LABEL_20 41
#define TAG_21 19
#define LABEL_18 43
#define TAG_19 20
#define LABEL_31 45
#define LABEL_32 47
#define LABEL_36 49
#define LABEL_48 51
#define LABEL_38 53
#define LABEL_39 55
#define LABEL_40 57
#define LABEL_41 59
#define LABEL_42 61
#define LABEL_43 63
#define LABEL_46 65
#define LABEL_57 67
#define LABEL_47 69
#define LABEL_62 71
#define LABEL_63 73
#define LABEL_65 75
#define LABEL_49 77
#define LABEL_66 79
#define LABEL_67 81
#define LABEL_68 83
#define LABEL_50 85
#define LABEL_51 87
#define LABEL_52 89
#define LABEL_53 91
#define LABEL_73 93
#define LABEL_74 95
#define LABEL_75 97
#define LABEL_76 99
#define LABEL_54 101
#define LABEL_56 103
#define LABEL_58 105
#define TAG_59 51
#define LABEL_60 107
#define TAG_61 52
#define LABEL_64 109
#define LABEL_69 111
#define LABEL_70 113
#define LABEL_72 115
#define LABEL_71 117
#define LABEL_85 119
#define LABEL_86 121
#define LABEL_87 123
#define LABEL_89 125
#define LABEL_77 127
#define LABEL_78 129
#define LABEL_79 131
#define LABEL_80 133
#define LABEL_81 135
#define LABEL_82 137
#define LABEL_83 139
#define LABEL_93 141
#define LABEL_84 143
#define LABEL_88 145
#define LABEL_96 147
#define LABEL_91 149
#define LABEL_99 151
#define LABEL_100 153
#define LABEL_90 155
#define LABEL_92 157
#define LABEL_95 159
#define LABEL_94 161
#define LABEL_97 163
#define LABEL_98 165
#define LABEL_101 167
#define LABEL_102 169
#define LABEL_103 171
#define LABEL_104 173
#define LABEL_105 175
#define LABEL_106 177
#define LABEL_111 179
#define LABEL_112 181
#define LABEL_107 183
#define LABEL_108 185
#define LABEL_109 187
#define LABEL_110 189
#define LABEL_116 191
#define LABEL_113 193
#define LABEL_114 195
#define LABEL_115 197
#define LABEL_117 199
#define LABEL_118 201
#define LABEL_119 203
#define LABEL_120 205
#define LABEL_121 207
#define LABEL_122 209
#define LABEL_125 211
#define LABEL_123 213
#define LABEL_127 215
#define LABEL_128 217
#define LABEL_129 219
#define LABEL_131 221
#define LABEL_132 223
#define LABEL_133 225
#define LABEL_134 227
#define LABEL_135 229
#define LABEL_136 231
#define LABEL_137 233
#define LABEL_138 235
#define LABEL_139 237
#define LABEL_140 239
#define LABEL_141 241
#define LABEL_142 243
#define LABEL_143 245
#define LABEL_144 247
#define LABEL_124 249
#define LABEL_148 251
#define LABEL_152 253
#define LABEL_155 255
#define LABEL_156 257
#define LABEL_126 259
#define LABEL_146 261
#define LABEL_159 263
#define LABEL_145 265
#define LABEL_130 267
#define LABEL_163 269
#define LABEL_147 271
#define LABEL_165 273
#define LABEL_168 275
#define LABEL_150 277
#define LABEL_149 279
#define LABEL_153 281
#define LABEL_173 283
#define LABEL_154 285
#define LABEL_175 287
#define LABEL_176 289
#define LABEL_157 291
#define LABEL_158 293
#define LABEL_160 295
#define LABEL_161 297
#define LABEL_164 299
#define LABEL_186 301
#define LABEL_172 303
#define LABEL_188 305
#define LABEL_171 307
#define LABEL_169 309
#define LABEL_174 311
#define LABEL_177 313
#define LABEL_178 315
#define LABEL_179 317
#define LABEL_180 319
#define TAG_181 158
#define LABEL_182 321
#define LABEL_184 323
#define LABEL_185 325
#define LABEL_187 327
#define LABEL_189 329
#define LABEL_202 331
#define LABEL_190 333
#define LABEL_191 335
#define LABEL_192 337
#define LABEL_205 339
#define LABEL_193 341
#define LABEL_195 343
#define LABEL_196 345
#define LABEL_197 347
#define LABEL_199 349
#define LABEL_200 351
#define LABEL_201 353
#define LABEL_166 355
#define TAG_167 176
#define LABEL_203 357
#define LABEL_204 359
#define LABEL_216 361
#define LABEL_207 363
#define LABEL_208 365
#define LABEL_209 367
#define LABEL_210 369
#define LABEL_211 371
#define LABEL_212 373
#define LABEL_213 375
#define LABEL_214 377
#define LABEL_215 379
#define LABEL_218 381
#define TAG_219 189
#define LABEL_225 383
#define LABEL_227 385
#define LABEL_221 387
#define LABEL_229 389
#define LABEL_230 391
#define LABEL_232 393
#define LABEL_222 395
#define LABEL_223 397
#define LABEL_226 399
#define LABEL_228 401
#define LABEL_231 403
#define LABEL_237 405
#define LABEL_233 407
#define LABEL_234 409
#define LABEL_239 411
#define LABEL_236 413
#define LABEL_238 415
#define LABEL_240 417
#define LABEL_241 419
#define LABEL_242 421
#define LABEL_243 423
#define LABEL_244 425
#define LABEL_245 427
#define LABEL_246 429
#define LABEL_248 431
#define TAG_249 214
#define LABEL_250 433
#define LABEL_252 435
#define LABEL_253 437
#define LABEL_256 439
#define LABEL_257 441
#define LABEL_251 443
#define LABEL_258 445
#define LABEL_259 447
#define LABEL_260 449
#define LABEL_261 451
#define LABEL_262 453
#define LABEL_264 455
#define LABEL_265 457
#define LABEL_254 459
#define LABEL_255 461
#define LABEL_263 463
#define LABEL_268 465
#define LABEL_266 467
#define LABEL_267 469
#define LABEL_269 471
#define LABEL_270 473
#define LABEL_271 475
#define LABEL_272 477
#define ENVIRONMENT_LABEL_3 664
#define DEBUGGING_LABEL_2 663
#define PURIFICATION_ROOT 662
#define OBJECT_140 661
#define OBJECT_139 660
#define OBJECT_138 659
#define OBJECT_137 658
#define OBJECT_136 657
#define OBJECT_135 656
#define OBJECT_134 655
#define OBJECT_133 654
#define OBJECT_132 653
#define OBJECT_131 652
#define OBJECT_130 651
#define OBJECT_129 650
#define OBJECT_128 649
#define OBJECT_127 648
#define OBJECT_126 647
#define OBJECT_125 646
#define OBJECT_124 645
#define OBJECT_123 644
#define OBJECT_122 643
#define OBJECT_121 642
#define OBJECT_120 641
#define OBJECT_119 640
#define OBJECT_118 639
#define OBJECT_117 638
#define OBJECT_116 637
#define OBJECT_115 636
#define OBJECT_114 635
#define OBJECT_113 634
#define OBJECT_112 633
#define OBJECT_111 632
#define OBJECT_110 631
#define OBJECT_109 630
#define OBJECT_108 629
#define OBJECT_107 628
#define OBJECT_106 627
#define OBJECT_105 626
#define OBJECT_104 625
#define OBJECT_103 624
#define OBJECT_102 623
#define OBJECT_101 622
#define OBJECT_100 621
#define OBJECT_99 620
#define OBJECT_98 619
#define OBJECT_97 618
#define OBJECT_96 617
#define OBJECT_95 616
#define OBJECT_94 615
#define OBJECT_93 614
#define OBJECT_92 613
#define OBJECT_91 612
#define OBJECT_90 611
#define OBJECT_89 610
#define OBJECT_88 609
#define OBJECT_87 608
#define OBJECT_86 607
#define OBJECT_85 606
#define OBJECT_84 605
#define OBJECT_83 604
#define OBJECT_82 603
#define OBJECT_81 602
#define OBJECT_80 601
#define OBJECT_79 600
#define OBJECT_78 599
#define OBJECT_77 598
#define OBJECT_76 597
#define OBJECT_75 596
#define OBJECT_74 595
#define OBJECT_73 594
#define OBJECT_72 593
#define OBJECT_71 592
#define OBJECT_70 591
#define OBJECT_69 590
#define OBJECT_68 589
#define OBJECT_67 588
#define OBJECT_66 587
#define OBJECT_65 586
#define OBJECT_64 585
#define OBJECT_63 584
#define OBJECT_62 583
#define OBJECT_61 582
#define OBJECT_60 581
#define OBJECT_59 580
#define OBJECT_58 579
#define OBJECT_57 578
#define OBJECT_56 577
#define OBJECT_55 576
#define OBJECT_54 575
#define OBJECT_53 574
#define OBJECT_52 573
#define OBJECT_51 572
#define OBJECT_50 571
#define OBJECT_49 570
#define OBJECT_48 569
#define OBJECT_47 568
#define OBJECT_46 567
#define OBJECT_45 566
#define OBJECT_44 565
#define OBJECT_43 564
#define OBJECT_42 563
#define OBJECT_41 562
#define OBJECT_40 561
#define OBJECT_39 560
#define OBJECT_38 559
#define OBJECT_37 558
#define OBJECT_36 557
#define OBJECT_35 556
#define OBJECT_34 555
#define OBJECT_33 554
#define OBJECT_32 553
#define OBJECT_31 552
#define OBJECT_30 551
#define OBJECT_29 550
#define OBJECT_28 549
#define OBJECT_27 548
#define OBJECT_26 547
#define OBJECT_25 546
#define OBJECT_24 545
#define OBJECT_23 544
#define OBJECT_22 543
#define OBJECT_21 542
#define OBJECT_20 541
#define OBJECT_19 540
#define OBJECT_18 539
#define OBJECT_17 538
#define OBJECT_16 537
#define OBJECT_15 536
#define OBJECT_14 535
#define OBJECT_13 534
#define OBJECT_12 533
#define OBJECT_11 532
#define OBJECT_10 531
#define OBJECT_9 530
#define OBJECT_8 529
#define OBJECT_7 528
#define OBJECT_6 527
#define OBJECT_5 526
#define OBJECT_4 525
#define OBJECT_3 524
#define OBJECT_2 523
#define OBJECT_1 522
#define OBJECT_0 521
#define EXECUTE_CACHE_247 479
#define EXECUTE_CACHE_235 481
#define EXECUTE_CACHE_224 483
#define EXECUTE_CACHE_220 485
#define EXECUTE_CACHE_217 487
#define EXECUTE_CACHE_206 489
#define EXECUTE_CACHE_198 491
#define EXECUTE_CACHE_194 493
#define EXECUTE_CACHE_183 495
#define EXECUTE_CACHE_170 497
#define EXECUTE_CACHE_162 499
#define EXECUTE_CACHE_55 501
#define EXECUTE_CACHE_45 503
#define EXECUTE_CACHE_44 505
#define EXECUTE_CACHE_34 507
#define EXECUTE_CACHE_33 509
#define EXECUTE_CACHE_151 511
#define EXECUTE_CACHE_17 513
#define EXECUTE_CACHE_13 515
#define FREE_REFERENCE_2 518
#define FREE_REFERENCE_1 519
#define FREE_REFERENCE_0 520
#define FREE_REFERENCES_LABEL_0 478
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
make_so_e758a4c06b652970 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd58;
  machine_word Wrd144;
  machine_word Wrd142;
  machine_word Wrd80;
  machine_word Wrd85;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd140;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd136;
  machine_word Wrd133;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd168;
  machine_word Wrd162;
  machine_word Wrd163;
  machine_word Wrd164;
  machine_word Wrd160;
  machine_word Wrd154;
  machine_word Wrd155;
  machine_word Wrd156;
  machine_word Wrd153;
  machine_word Wrd145;
  machine_word Wrd147;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd115;
  machine_word Wrd116;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd108;
  machine_word Wrd21;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd29;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd34;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd68;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd11;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd49;
  machine_word Wrd87;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto label_318;

    case 4:
      current_block = (Rpc - LABEL_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto label_319;

    case 7:
      current_block = (Rpc - LABEL_10);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto label_320;

    case 9:
      current_block = (Rpc - LABEL_11);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_14);
      goto continuation_312;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_311;

    case 12:
      current_block = (Rpc - LABEL_30);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_35);
      goto label_321;

    case 14:
      current_block = (Rpc - LABEL_28);
      goto tty_write_string_167;

    case 15:
      current_block = (Rpc - LABEL_37);
      goto label_322;

    case 16:
      current_block = (Rpc - LABEL_26);
      goto fatal_error_171;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto remember_to_purify_239;

    case 18:
      current_block = (Rpc - LABEL_22);
      goto fasload_245;

    case 19:
      current_block = (Rpc - LABEL_20);
      goto file__object_264;

    case 20:
      current_block = (Rpc - LABEL_18);
      goto eval_268;

    case 21:
      current_block = (Rpc - LABEL_31);
      goto continuation_314;

    case 22:
      current_block = (Rpc - LABEL_32);
      goto continuation_313;

    case 23:
      current_block = (Rpc - LABEL_36);
      goto continuation_10;

    case 24:
      current_block = (Rpc - LABEL_48);
      goto loop_164;

    case 25:
      current_block = (Rpc - LABEL_38);
      goto continuation_168;

    case 26:
      current_block = (Rpc - LABEL_39);
      goto continuation_240;

    case 27:
      current_block = (Rpc - LABEL_40);
      goto continuation_253;

    case 28:
      current_block = (Rpc - LABEL_41);
      goto string_append_292;

    case 29:
      current_block = (Rpc - LABEL_42);
      goto continuation_265;

    case 30:
      current_block = (Rpc - LABEL_43);
      goto continuation_315;

    case 31:
      current_block = (Rpc - LABEL_46);
      goto continuation_16;

    case 32:
      current_block = (Rpc - LABEL_57);
      goto continuation_18;

    case 33:
      current_block = (Rpc - LABEL_47);
      goto continuation_15;

    case 34:
      current_block = (Rpc - LABEL_62);
      goto label_323;

    case 35:
      current_block = (Rpc - LABEL_63);
      goto label_325;

    case 36:
      current_block = (Rpc - LABEL_65);
      goto label_324;

    case 37:
      current_block = (Rpc - LABEL_49);
      goto continuation_159;

    case 38:
      current_block = (Rpc - LABEL_66);
      goto label_326;

    case 39:
      current_block = (Rpc - LABEL_67);
      goto label_327;

    case 40:
      current_block = (Rpc - LABEL_68);
      goto label_328;

    case 41:
      current_block = (Rpc - LABEL_50);
      goto continuation_169;

    case 42:
      current_block = (Rpc - LABEL_51);
      goto continuation_241;

    case 43:
      current_block = (Rpc - LABEL_52);
      goto continuation_254;

    case 44:
      current_block = (Rpc - LABEL_53);
      goto continuation_278;

    case 45:
      current_block = (Rpc - LABEL_73);
      goto loop_276;

    case 46:
      current_block = (Rpc - LABEL_74);
      goto label_329;

    case 47:
      current_block = (Rpc - LABEL_75);
      goto label_330;

    case 48:
      current_block = (Rpc - LABEL_76);
      goto label_331;

    case 49:
      current_block = (Rpc - LABEL_54);
      goto continuation_266;

    case 50:
      current_block = (Rpc - LABEL_56);
      goto continuation_23;

    case 51:
      current_block = (Rpc - LABEL_58);
      goto lambda_380;

    case 52:
      current_block = (Rpc - LABEL_60);
      goto lambda_381;

    case 53:
      current_block = (Rpc - LABEL_64);
      goto lambda_12;

    case 54:
      current_block = (Rpc - LABEL_69);
      goto continuation_170;

    case 55:
      current_block = (Rpc - LABEL_70);
      goto continuation_242;

    case 56:
      current_block = (Rpc - LABEL_72);
      goto continuation_259;

    case 57:
      current_block = (Rpc - LABEL_71);
      goto continuation_246;

    case 58:
      current_block = (Rpc - LABEL_85);
      goto loop_289;

    case 59:
      current_block = (Rpc - LABEL_86);
      goto label_332;

    case 60:
      current_block = (Rpc - LABEL_87);
      goto label_333;

    case 61:
      current_block = (Rpc - LABEL_89);
      goto label_334;

    case 62:
      current_block = (Rpc - LABEL_77);
      goto continuation_25;

    case 63:
      current_block = (Rpc - LABEL_78);
      goto continuation_307;

    case 64:
      current_block = (Rpc - LABEL_79);
      goto continuation_306;

    case 65:
      current_block = (Rpc - LABEL_80);
      goto continuation_305;

    case 66:
      current_block = (Rpc - LABEL_81);
      goto lambda_11;

    case 67:
      current_block = (Rpc - LABEL_82);
      goto continuation_243;

    case 68:
      current_block = (Rpc - LABEL_83);
      goto continuation_260;

    case 69:
      current_block = (Rpc - LABEL_93);
      goto continuation_249;

    case 70:
      current_block = (Rpc - LABEL_84);
      goto continuation_247;

    case 71:
      current_block = (Rpc - LABEL_88);
      goto continuation_285;

    case 72:
      current_block = (Rpc - LABEL_96);
      goto label_335;

    case 73:
      current_block = (Rpc - LABEL_91);
      goto continuation_28;

    case 74:
      current_block = (Rpc - LABEL_99);
      goto intern_304;

    case 75:
      current_block = (Rpc - LABEL_100);
      goto label_336;

    case 76:
      current_block = (Rpc - LABEL_90);
      goto lambda_26;

    case 77:
      current_block = (Rpc - LABEL_92);
      goto continuation_261;

    case 78:
      current_block = (Rpc - LABEL_95);
      goto continuation_256;

    case 79:
      current_block = (Rpc - LABEL_94);
      goto continuation_248;

    case 80:
      current_block = (Rpc - LABEL_97);
      goto continuation_32;

    case 81:
      current_block = (Rpc - LABEL_98);
      goto continuation_31;

    case 82:
      current_block = (Rpc - LABEL_101);
      goto continuation_294;

    case 83:
      current_block = (Rpc - LABEL_102);
      goto continuation_33;

    case 84:
      current_block = (Rpc - LABEL_103);
      goto continuation_34;

    case 85:
      current_block = (Rpc - LABEL_104);
      goto continuation_295;

    case 86:
      current_block = (Rpc - LABEL_105);
      goto continuation_36;

    case 87:
      current_block = (Rpc - LABEL_106);
      goto continuation_37;

    case 88:
      current_block = (Rpc - LABEL_111);
      goto lambda_35;

    case 89:
      current_block = (Rpc - LABEL_112);
      goto label_337;

    case 90:
      current_block = (Rpc - LABEL_107);
      goto continuation_296;

    case 91:
      current_block = (Rpc - LABEL_108);
      goto continuation_53;

    case 92:
      current_block = (Rpc - LABEL_109);
      goto continuation_52;

    case 93:
      current_block = (Rpc - LABEL_110);
      goto continuation_38;

    case 94:
      current_block = (Rpc - LABEL_116);
      goto continuation_61;

    case 95:
      current_block = (Rpc - LABEL_113);
      goto continuation_59;

    case 96:
      current_block = (Rpc - LABEL_114);
      goto continuation_58;

    case 97:
      current_block = (Rpc - LABEL_115);
      goto continuation_39;

    case 98:
      current_block = (Rpc - LABEL_117);
      goto continuation_64;

    case 99:
      current_block = (Rpc - LABEL_118);
      goto continuation_65;

    case 100:
      current_block = (Rpc - LABEL_119);
      goto continuation_60;

    case 101:
      current_block = (Rpc - LABEL_120);
      goto continuation_40;

    case 102:
      current_block = (Rpc - LABEL_121);
      goto continuation_79;

    case 103:
      current_block = (Rpc - LABEL_122);
      goto continuation_80;

    case 104:
      current_block = (Rpc - LABEL_125);
      goto lambda_78;

    case 105:
      current_block = (Rpc - LABEL_123);
      goto continuation_41;

    case 106:
      current_block = (Rpc - LABEL_127);
      goto continuation_229;

    case 107:
      current_block = (Rpc - LABEL_128);
      goto continuation_222;

    case 108:
      current_block = (Rpc - LABEL_129);
      goto do_loop_234;

    case 109:
      current_block = (Rpc - LABEL_131);
      goto label_338;

    case 110:
      current_block = (Rpc - LABEL_132);
      goto label_339;

    case 111:
      current_block = (Rpc - LABEL_133);
      goto label_345;

    case 112:
      current_block = (Rpc - LABEL_134);
      goto label_346;

    case 113:
      current_block = (Rpc - LABEL_135);
      goto label_349;

    case 114:
      current_block = (Rpc - LABEL_136);
      goto label_350;

    case 115:
      current_block = (Rpc - LABEL_137);
      goto label_351;

    case 116:
      current_block = (Rpc - LABEL_138);
      goto label_347;

    case 117:
      current_block = (Rpc - LABEL_139);
      goto label_348;

    case 118:
      current_block = (Rpc - LABEL_140);
      goto label_340;

    case 119:
      current_block = (Rpc - LABEL_141);
      goto label_341;

    case 120:
      current_block = (Rpc - LABEL_142);
      goto label_343;

    case 121:
      current_block = (Rpc - LABEL_143);
      goto label_344;

    case 122:
      current_block = (Rpc - LABEL_144);
      goto label_342;

    case 123:
      current_block = (Rpc - LABEL_124);
      goto continuation_81;

    case 124:
      current_block = (Rpc - LABEL_148);
      goto package_initialize_208;

    case 125:
      current_block = (Rpc - LABEL_152);
      goto do_loop_76;

    case 126:
      current_block = (Rpc - LABEL_155);
      goto label_352;

    case 127:
      current_block = (Rpc - LABEL_156);
      goto label_353;

    case 128:
      current_block = (Rpc - LABEL_126);
      goto continuation_42;

    case 129:
      current_block = (Rpc - LABEL_146);
      goto continuation_127;

    case 130:
      current_block = (Rpc - LABEL_159);
      goto label_354;

    case 131:
      current_block = (Rpc - LABEL_145);
      goto continuation_128;

    case 132:
      current_block = (Rpc - LABEL_130);
      goto continuation_214;

    case 133:
      current_block = (Rpc - LABEL_163);
      goto label_355;

    case 134:
      current_block = (Rpc - LABEL_147);
      goto continuation_82;

    case 135:
      current_block = (Rpc - LABEL_165);
      goto continuation_176;

    case 136:
      current_block = (Rpc - LABEL_168);
      goto continuation_175;

    case 137:
      current_block = (Rpc - LABEL_150);
      goto continuation_172;

    case 138:
      current_block = (Rpc - LABEL_149);
      goto continuation_173;

    case 139:
      current_block = (Rpc - LABEL_153);
      goto continuation_74;

    case 140:
      current_block = (Rpc - LABEL_173);
      goto label_356;

    case 141:
      current_block = (Rpc - LABEL_154);
      goto continuation_73;

    case 142:
      current_block = (Rpc - LABEL_175);
      goto label_357;

    case 143:
      current_block = (Rpc - LABEL_176);
      goto label_358;

    case 144:
      current_block = (Rpc - LABEL_157);
      goto continuation_209;

    case 145:
      current_block = (Rpc - LABEL_158);
      goto continuation_43;

    case 146:
      current_block = (Rpc - LABEL_160);
      goto continuation_132;

    case 147:
      current_block = (Rpc - LABEL_161);
      goto continuation_131;

    case 148:
      current_block = (Rpc - LABEL_164);
      goto continuation_83;

    case 149:
      current_block = (Rpc - LABEL_186);
      goto continuation_190;

    case 150:
      current_block = (Rpc - LABEL_172);
      goto continuation_185;

    case 151:
      current_block = (Rpc - LABEL_188);
      goto print_name_207;

    case 152:
      current_block = (Rpc - LABEL_171);
      goto continuation_181;

    case 153:
      current_block = (Rpc - LABEL_169);
      goto continuation_174;

    case 154:
      current_block = (Rpc - LABEL_174);
      goto continuation_70;

    case 155:
      current_block = (Rpc - LABEL_177);
      goto continuation_44;

    case 156:
      current_block = (Rpc - LABEL_178);
      goto continuation_149;

    case 157:
      current_block = (Rpc - LABEL_179);
      goto continuation_146;

    case 158:
      current_block = (Rpc - LABEL_180);
      goto lambda_394;

    case 159:
      current_block = (Rpc - LABEL_182);
      goto continuation_134;

    case 160:
      current_block = (Rpc - LABEL_184);
      goto continuation_130;

    case 161:
      current_block = (Rpc - LABEL_185);
      goto continuation_84;

    case 162:
      current_block = (Rpc - LABEL_187);
      goto continuation_187;

    case 163:
      current_block = (Rpc - LABEL_189);
      goto continuation_193;

    case 164:
      current_block = (Rpc - LABEL_202);
      goto continuation_184;

    case 165:
      current_block = (Rpc - LABEL_190);
      goto continuation_182;

    case 166:
      current_block = (Rpc - LABEL_191);
      goto continuation_45;

    case 167:
      current_block = (Rpc - LABEL_192);
      goto continuation_151;

    case 168:
      current_block = (Rpc - LABEL_205);
      goto label_359;

    case 169:
      current_block = (Rpc - LABEL_193);
      goto continuation_150;

    case 170:
      current_block = (Rpc - LABEL_195);
      goto continuation_138;

    case 171:
      current_block = (Rpc - LABEL_196);
      goto continuation_137;

    case 172:
      current_block = (Rpc - LABEL_197);
      goto continuation_133;

    case 173:
      current_block = (Rpc - LABEL_199);
      goto continuation_85;

    case 174:
      current_block = (Rpc - LABEL_200);
      goto continuation_189;

    case 175:
      current_block = (Rpc - LABEL_201);
      goto continuation_194;

    case 176:
      current_block = (Rpc - LABEL_166);
      goto lambda_393;

    case 177:
      current_block = (Rpc - LABEL_203);
      goto continuation_46;

    case 178:
      current_block = (Rpc - LABEL_204);
      goto continuation_152;

    case 179:
      current_block = (Rpc - LABEL_216);
      goto label_360;

    case 180:
      current_block = (Rpc - LABEL_207);
      goto continuation_136;

    case 181:
      current_block = (Rpc - LABEL_208);
      goto continuation_135;

    case 182:
      current_block = (Rpc - LABEL_209);
      goto continuation_148;

    case 183:
      current_block = (Rpc - LABEL_210);
      goto continuation_147;

    case 184:
      current_block = (Rpc - LABEL_211);
      goto continuation_86;

    case 185:
      current_block = (Rpc - LABEL_212);
      goto continuation_195;

    case 186:
      current_block = (Rpc - LABEL_213);
      goto continuation_177;

    case 187:
      current_block = (Rpc - LABEL_214);
      goto continuation_47;

    case 188:
      current_block = (Rpc - LABEL_215);
      goto continuation_153;

    case 189:
      current_block = (Rpc - LABEL_218);
      goto lambda_396;

    case 190:
      current_block = (Rpc - LABEL_225);
      goto label_361;

    case 191:
      current_block = (Rpc - LABEL_227);
      goto label_362;

    case 192:
      current_block = (Rpc - LABEL_221);
      goto continuation_87;

    case 193:
      current_block = (Rpc - LABEL_229);
      goto continuation_200;

    case 194:
      current_block = (Rpc - LABEL_230);
      goto loop_205;

    case 195:
      current_block = (Rpc - LABEL_232);
      goto label_363;

    case 196:
      current_block = (Rpc - LABEL_222);
      goto continuation_48;

    case 197:
      current_block = (Rpc - LABEL_223);
      goto continuation_154;

    case 198:
      current_block = (Rpc - LABEL_226);
      goto continuation_141;

    case 199:
      current_block = (Rpc - LABEL_228);
      goto continuation_88;

    case 200:
      current_block = (Rpc - LABEL_231);
      goto continuation_203;

    case 201:
      current_block = (Rpc - LABEL_237);
      goto label_364;

    case 202:
      current_block = (Rpc - LABEL_233);
      goto continuation_49;

    case 203:
      current_block = (Rpc - LABEL_234);
      goto continuation_155;

    case 204:
      current_block = (Rpc - LABEL_239);
      goto label_365;

    case 205:
      current_block = (Rpc - LABEL_236);
      goto continuation_89;

    case 206:
      current_block = (Rpc - LABEL_238);
      goto continuation_50;

    case 207:
      current_block = (Rpc - LABEL_240);
      goto continuation_90;

    case 208:
      current_block = (Rpc - LABEL_241);
      goto continuation_91;

    case 209:
      current_block = (Rpc - LABEL_242);
      goto continuation_92;

    case 210:
      current_block = (Rpc - LABEL_243);
      goto continuation_93;

    case 211:
      current_block = (Rpc - LABEL_244);
      goto continuation_94;

    case 212:
      current_block = (Rpc - LABEL_245);
      goto continuation_96;

    case 213:
      current_block = (Rpc - LABEL_246);
      goto continuation_95;

    case 214:
      current_block = (Rpc - LABEL_248);
      goto lambda_398;

    case 215:
      current_block = (Rpc - LABEL_250);
      goto continuation_124;

    case 216:
      current_block = (Rpc - LABEL_252);
      goto continuation_120;

    case 217:
      current_block = (Rpc - LABEL_253);
      goto continuation_115;

    case 218:
      current_block = (Rpc - LABEL_256);
      goto continuation_114;

    case 219:
      current_block = (Rpc - LABEL_257);
      goto continuation_113;

    case 220:
      current_block = (Rpc - LABEL_251);
      goto continuation_112;

    case 221:
      current_block = (Rpc - LABEL_258);
      goto string_P_302;

    case 222:
      current_block = (Rpc - LABEL_259);
      goto label_366;

    case 223:
      current_block = (Rpc - LABEL_260);
      goto label_367;

    case 224:
      current_block = (Rpc - LABEL_261);
      goto lambda_110;

    case 225:
      current_block = (Rpc - LABEL_262);
      goto loop_108;

    case 226:
      current_block = (Rpc - LABEL_264);
      goto label_368;

    case 227:
      current_block = (Rpc - LABEL_265);
      goto label_369;

    case 228:
      current_block = (Rpc - LABEL_254);
      goto continuation_116;

    case 229:
      current_block = (Rpc - LABEL_255);
      goto continuation_117;

    case 230:
      current_block = (Rpc - LABEL_263);
      goto continuation_105;

    case 231:
      current_block = (Rpc - LABEL_268);
      goto label_370;

    case 232:
      current_block = (Rpc - LABEL_266);
      goto continuation_119;

    case 233:
      current_block = (Rpc - LABEL_267);
      goto continuation_118;

    case 234:
      current_block = (Rpc - LABEL_269);
      goto continuation_121;

    case 235:
      current_block = (Rpc - LABEL_270);
      goto label_403;

    case 236:
      current_block = (Rpc - LABEL_271);
      goto label_404;

    case 237:
      current_block = (Rpc - LABEL_272);
      goto expression_317;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_317)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_271])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_404)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_403)
  {
    static const short sections [] =
      {
	0,
	0,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 2)
      goto label_402;
    blocks = (current_block [OBJECT_140]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_270])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_402)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_419;
  Wrd8 = Wrd12;

DEFLABEL (label_418)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (MAKE_OBJECT (0, 1));
  (Wrd17.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_417;
  Wrd18 = Wrd22;

DEFLABEL (label_416)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11);
  (* (--Rsp)) = Rvl;
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
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd24.pObj) = (& (Rhp [-1]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd30.pObj) = (& (Rhp [-1]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd36.pObj) = (& (Rhp [-1]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd42.pObj) = (& (Rhp [-1]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd109.pObj) = (& (Rhp [-1]));
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd109.pObj)));
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd107.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd107.Obj);
  (Wrd105.pObj) = (& (Rhp [-1]));
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd105.pObj)));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd102.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18])));
  Rhp += 1;
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd102.pObj)));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd100.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20])));
  Rhp += 6;
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd100.pObj)));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd98.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22])));
  Rhp += 3;
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd98.pObj)));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd96.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24])));
  Rhp += 1;
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd96.pObj)));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd94.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26])));
  Rhp += 2;
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd94.pObj)));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd92.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28])));
  Rhp += 1;
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd92.pObj)));
  (* (--Rsp)) = (Wrd93.Obj);
  ((Wrd92.pObj) [2]) = (Wrd31.Obj);
  Wrd57 = Wrd94;
  ((Wrd57.pObj) [2]) = (Wrd93.Obj);
  ((Wrd57.pObj) [3]) = (Wrd13.Obj);
  ((Wrd96.pObj) [2]) = (Wrd106.Obj);
  Wrd69 = Wrd98;
  ((Wrd69.pObj) [2]) = (Wrd97.Obj);
  ((Wrd69.pObj) [3]) = (Wrd93.Obj);
  ((Wrd69.pObj) [4]) = (Wrd13.Obj);
  Wrd87 = Wrd100;
  ((Wrd87.pObj) [2]) = (Wrd99.Obj);
  ((Wrd87.pObj) [3]) = (Wrd97.Obj);
  ((Wrd87.pObj) [4]) = (Wrd95.Obj);
  ((Wrd87.pObj) [5]) = (Wrd93.Obj);
  ((Wrd87.pObj) [6]) = (Wrd13.Obj);
  ((Wrd87.pObj) [7]) = (Wrd25.Obj);
  ((Wrd102.pObj) [2]) = (Wrd93.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12]), 0);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd6.Obj) = (Rsp [8]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd23.Obj) = ((Wrd7.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_415;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd20.Lng))))
    goto label_415;
  (Wrd8.Obj) = ((Wrd18.pObj) [9]);

DEFLABEL (label_414)
  (Wrd32.Obj) = (Rsp [9]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  ((Wrd33.pObj) [0]) = (Wrd8.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15]), 0);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd6.Obj) = (Rsp [10]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20]), 0);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_47);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [3]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_60])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd26.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd26.uLng) == 10))
    goto label_413;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd24.Lng))))
    goto label_413;
  (Wrd18.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_412)
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 10))
    goto label_411;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd74.Lng))))
    goto label_411;
  (Wrd68.Obj) = (Rsp [2]);
  ((Wrd72.pObj) [1]) = (Wrd68.Obj);

DEFLABEL (label_410)
  (Wrd32.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (Rsp [2]) = (Wrd34.Obj);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd65.uLng) == 10)
    goto label_406;

DEFLABEL (label_405)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25]), 3);

DEFLABEL (label_406)
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd63.Lng))))
    goto label_405;
  ((Wrd61.pObj) [3]) = (Wrd34.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_409)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_408;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd46.Lng))))
    goto label_408;
  (Wrd40.Obj) = (Rsp [1]);
  ((Wrd44.pObj) [13]) = (Wrd40.Obj);

DEFLABEL (label_407)
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_28]), 1);

DEFLABEL (label_408)
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.Obj) = (current_block [OBJECT_27]);
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25]), 3);

DEFLABEL (label_324)
  goto label_407;

DEFLABEL (label_411)
  (Wrd77.Obj) = (Rsp [0]);
  (Wrd78.Obj) = (current_block [OBJECT_0]);
  (Wrd79.Obj) = (Rsp [2]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25]), 3);

DEFLABEL (label_325)
  goto label_410;

DEFLABEL (label_413)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.Obj) = (current_block [OBJECT_24]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_323)
  (* (--Rsp)) = Rvl;
  goto label_412;

DEFLABEL (label_415)
  (Wrd26.Obj) = (Rsp [8]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);
  (Wrd28.Obj) = (current_block [OBJECT_13]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (label_321)
  (Wrd8.Obj) = Rvl;
  goto label_414;

DEFLABEL (label_417)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd19.pObj));

DEFLABEL (label_319)
  (Wrd18.Obj) = Rvl;
  goto label_416;

DEFLABEL (label_419)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd9.pObj));

DEFLABEL (label_318)
  (Wrd8.Obj) = Rvl;
  goto label_418;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_57);
  goto label_409;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 1);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39]), 1);

DEFLABEL (continuation_305)
  INTERRUPT_CHECK (27, LABEL_80);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_48]), 1);

DEFLABEL (continuation_306)
  INTERRUPT_CHECK (27, LABEL_79);
  (* (--Rsp)) = Rvl;
  goto intern_304;

DEFLABEL (continuation_307)
  INTERRUPT_CHECK (27, LABEL_78);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_47]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_421;
  Wrd8 = Wrd12;

DEFLABEL (label_420)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17]));

DEFLABEL (continuation_311)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_312)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33]));

DEFLABEL (continuation_313)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_314)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44]));

DEFLABEL (continuation_315)
  INTERRUPT_CHECK (27, LABEL_43);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55]));

DEFLABEL (label_421)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd9.pObj));

DEFLABEL (label_320)
  (Wrd8.Obj) = Rvl;
  goto label_420;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_77);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_423;
  (Wrd7.Obj) = (current_block [OBJECT_38]);
  goto label_422;

DEFLABEL (label_423)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));

DEFLABEL (label_422)
DEFLABEL (label_427)
  (Wrd8.Obj) = (Rsp [11]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = (Wrd7.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [10]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto intern_304;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd6.Obj) = (Rsp [12]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (Wrd11.Obj) = ((Wrd7.pObj) [0]);
  if ((Wrd11.Obj) == (current_block [OBJECT_55]))
    goto label_425;
  (Wrd12.Obj) = (current_block [OBJECT_57]);
  goto label_424;

DEFLABEL (label_425)
  (Wrd12.Obj) = (current_block [OBJECT_56]);

DEFLABEL (label_424)
DEFLABEL (label_426)
  (Wrd13.Obj) = (Rsp [13]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  ((Wrd14.pObj) [0]) = (Wrd12.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [16]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto file__object_264;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_98);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto eval_268;

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60]), 2);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_103);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.pObj) = (& (Rsp [17]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_35;

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [17]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_35;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [17]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_35;

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [17]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_35;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [17]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_35;

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_123);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [17]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_35;

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_126);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_158]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [17]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_35;

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_158);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_177]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [17]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_35;

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_177);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_191]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [17]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_35;

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_191);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_203]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [17]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_35;

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_203);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_214]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [17]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_35;

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_214);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_222]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [17]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_35;

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_222);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_233]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [17]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_35;

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_233);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_238]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [17]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_35;

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_238);
  (Wrd5.pObj) = (& (Rsp [16]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd5.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_35;

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_109);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [15]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  if ((Wrd14.Obj) == (current_block [OBJECT_68]))
    goto label_434;
  if ((Wrd14.Obj) == (current_block [OBJECT_70]))
    goto label_433;
  if ((Wrd14.Obj) == (current_block [OBJECT_55]))
    goto label_429;
  (Wrd24.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto label_428;

DEFLABEL (label_429)
  (Wrd28.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_428)
DEFLABEL (label_432)
  (Wrd25.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd27.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_114);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_119);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [15]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_116);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_430;
  (Wrd22.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd23.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  goto fasload_245;

DEFLABEL (label_430)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [3]));

DEFLABEL (label_431)
  (Wrd6.Obj) = (Rsp [14]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = (Wrd5.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd7.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [19]);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60]), 2);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_118);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.pObj) = (& (Rsp [2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_78;

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto package_initialize_208;

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto package_initialize_208;

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_147);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_164]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto package_initialize_208;

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_164);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_185]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto package_initialize_208;

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_185);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_199]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto package_initialize_208;

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_199);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_211]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto package_initialize_208;

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_211);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_221]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_78;

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_221);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_228]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto package_initialize_208;

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_228);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_236]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto package_initialize_208;

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_236);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_240]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto package_initialize_208;

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_240);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_241]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto package_initialize_208;

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_241);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_242]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto package_initialize_208;

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_242);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_243]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto package_initialize_208;

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_243);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_244]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto package_initialize_208;

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_244);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_245]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_246]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_247]));

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_246);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_170]));

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_245);
  (Wrd6.Obj) = (Rsp [8]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  ((Wrd7.pObj) [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_249);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_248])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  ((Wrd14.pObj) [2]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_133]);
  (Wrd20.Obj) = (Rsp [14]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_134]);
  (Wrd27.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_135]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd35.Obj) = (Rsp [17]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_250]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [21]);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60]), 2);

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_250);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_433)
  (Wrd29.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd29.Obj);
  goto label_432;

DEFLABEL (label_434)
  (Wrd30.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_432;

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd5.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_234;

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd5.Obj) = Rvl;
  goto label_431;

DEFLABEL (tty_write_string_377)
DEFLABEL (tty_write_string_167)
  INTERRUPT_CHECK (26, LABEL_28);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_436;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_435)
  (Wrd16.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto loop_164;

DEFLABEL (label_436)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_322)
  (* (--Rsp)) = Rvl;
  goto label_435;

DEFLABEL (fatal_error_376)
DEFLABEL (fatal_error_171)
  INTERRUPT_CHECK (26, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_168)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_169)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_170)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_43]), 1);

DEFLABEL (remember_to_purify_375)
DEFLABEL (remember_to_purify_239)
  INTERRUPT_CHECK (26, LABEL_24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_437;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  ((Wrd18.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_437)
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (fasload_374)
DEFLABEL (fasload_245)
  INTERRUPT_CHECK (26, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_240)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_241)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33]), 1);

DEFLABEL (continuation_242)
  INTERRUPT_CHECK (27, LABEL_70);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_243)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  goto remember_to_purify_239;

DEFLABEL (file__object_373)
DEFLABEL (file__object_264)
  INTERRUPT_CHECK (26, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_253)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [7]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_254)
  INTERRUPT_CHECK (27, LABEL_52);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_438;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [6]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_259)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_260)
  INTERRUPT_CHECK (27, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_261)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54]);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto remember_to_purify_239;

DEFLABEL (label_438)
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_246)
  INTERRUPT_CHECK (27, LABEL_71);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_45]), 1);

DEFLABEL (continuation_247)
  INTERRUPT_CHECK (27, LABEL_84);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_443;
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_442)
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd9.Obj) = (Rsp [0]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_439;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_54]);
  (Rsp [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  goto fasload_245;

DEFLABEL (label_439)
  (Wrd17.Obj) = (Rsp [3]);
  if (! ((Wrd17.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_440;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_440)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_441)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_443)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  goto label_441;

DEFLABEL (continuation_256)
  INTERRUPT_CHECK (27, LABEL_95);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto fatal_error_171;

DEFLABEL (continuation_248)
  INTERRUPT_CHECK (27, LABEL_94);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45]), 1);

DEFLABEL (continuation_249)
  INTERRUPT_CHECK (27, LABEL_93);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_445;
  (Wrd8.Obj) = (Rsp [0]);
  goto label_444;

DEFLABEL (label_445)
  (Wrd8.Obj) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_444)
DEFLABEL (label_446)
  Rsp = (& (Rsp [1]));
  goto label_442;

DEFLABEL (eval_372)
DEFLABEL (eval_268)
  INTERRUPT_CHECK (26, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19]), 2);

DEFLABEL (continuation_265)
  INTERRUPT_CHECK (27, LABEL_42);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_266)
  INTERRUPT_CHECK (27, LABEL_54);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (loop_378)
DEFLABEL (loop_164)
  INTERRUPT_CHECK (26, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21]), 4);

DEFLABEL (continuation_159)
  INTERRUPT_CHECK (27, LABEL_49);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_448;

DEFLABEL (label_447)
  Rsp = (& (Rsp [1]));
  goto loop_164;

DEFLABEL (label_448)
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_455;
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_455;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd51.Lng) < (Wrd53.Lng))
    goto label_450;

DEFLABEL (label_449)
  Rvl = (current_block [OBJECT_30]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_450)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_454;
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_454;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) + (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_454;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));

DEFLABEL (label_453)
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_452;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_452;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = ((Wrd46.Lng) - (Wrd48.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd44.Lng)))
    goto label_452;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd44.Lng));

DEFLABEL (label_451)
  (Rsp [2]) = (Wrd39.Obj);
  goto label_447;

DEFLABEL (label_452)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32]), 2);

DEFLABEL (label_328)
  (Wrd39.Obj) = Rvl;
  goto label_451;

DEFLABEL (label_454)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31]), 2);

DEFLABEL (label_327)
  (Wrd24.Obj) = Rvl;
  goto label_453;

DEFLABEL (label_455)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29]), 2);

DEFLABEL (label_326)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_449;
  goto label_450;

DEFLABEL (string_append_379)
DEFLABEL (string_append_292)
  INTERRUPT_CHECK (26, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto loop_276;

DEFLABEL (continuation_278)
  INTERRUPT_CHECK (27, LABEL_53);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_289;

DEFLABEL (loop_382)
DEFLABEL (loop_276)
  INTERRUPT_CHECK (26, LABEL_73);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_456;
  (Wrd8.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37]), 1);

DEFLABEL (label_456)
  if (! ((Wrd6.uLng) == 1))
    goto label_462;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_461)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_460;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd18.Obj) = (MAKE_OBJECT (26, (Wrd21.uLng)));

DEFLABEL (label_459)
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd31.Lng) = ((Wrd28.Lng) + (Wrd30.Lng));
  (Wrd27.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_458;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_457)
  (Rsp [0]) = (Wrd32.Obj);
  goto loop_276;

DEFLABEL (label_458)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36]), 1);

DEFLABEL (label_331)
  (Wrd32.Obj) = Rvl;
  goto label_457;

DEFLABEL (label_460)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_330)
  (Wrd18.Obj) = Rvl;
  goto label_459;

DEFLABEL (label_462)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_329)
  (Wrd9.Obj) = Rvl;
  goto label_461;

DEFLABEL (lambda_380)
  CLOSURE_HEADER (LABEL_58);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40]);
  (Rsp [1]) = (Wrd8.Obj);
  goto fatal_error_171;

DEFLABEL (lambda_381)
  CLOSURE_HEADER (LABEL_60);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto fatal_error_171;

DEFLABEL (lambda_383)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_64);
  (Wrd5.Obj) = (current_block [OBJECT_0]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42]), 2);

DEFLABEL (loop_384)
DEFLABEL (loop_289)
  INTERRUPT_CHECK (26, LABEL_85);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_463;
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_463)
  if (! ((Wrd6.uLng) == 1))
    goto label_471;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_470)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 30))
    goto label_469;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Obj) = (MAKE_OBJECT (26, (Wrd21.uLng)));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_468)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [6]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_467;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_466)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46]), 5);

DEFLABEL (continuation_285)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_465;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_464)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd16.Lng) + (Wrd18.Lng));
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (Rsp [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_289;

DEFLABEL (label_465)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36]), 1);

DEFLABEL (label_335)
  (Wrd5.Obj) = Rvl;
  goto label_464;

DEFLABEL (label_467)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_334)
  (* (--Rsp)) = Rvl;
  goto label_466;

DEFLABEL (label_469)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_333)
  (* (--Rsp)) = Rvl;
  goto label_468;

DEFLABEL (label_471)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_332)
  (Wrd10.Obj) = Rvl;
  goto label_470;

DEFLABEL (lambda_385)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_81);
  (Wrd5.Obj) = (current_block [OBJECT_49]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50]), 1);

DEFLABEL (intern_386)
DEFLABEL (intern_304)
  INTERRUPT_CHECK (26, LABEL_99);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd12.uLng) == 30))
    goto label_473;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_472)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37]), 1);

DEFLABEL (continuation_294)
  INTERRUPT_CHECK (27, LABEL_101);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46]), 5);

DEFLABEL (continuation_295)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62]), 3);

DEFLABEL (continuation_296)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  (Rsp [0]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66]), 1);

DEFLABEL (label_473)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_336)
  (* (--Rsp)) = Rvl;
  goto label_472;

DEFLABEL (lambda_387)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_90);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_388)
DEFLABEL (lambda_35)
  INTERRUPT_CHECK (26, LABEL_111);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_475;
  Wrd6 = Wrd10;

DEFLABEL (label_474)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);
  (Rsp [2]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 4);

DEFLABEL (label_475)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_112])), (Wrd7.pObj));

DEFLABEL (label_337)
  (Wrd6.Obj) = Rvl;
  goto label_474;

DEFLABEL (lambda_389)
DEFLABEL (lambda_78)
  INTERRUPT_CHECK (26, LABEL_125);
  goto do_loop_76;

DEFLABEL (do_loop_390)
DEFLABEL (do_loop_234)
  INTERRUPT_CHECK (26, LABEL_129);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_486;
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_145]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto file__object_264;

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_146);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_478;
  (* (--Rsp)) = Rvl;
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_477;
  Wrd18 = Wrd22;

DEFLABEL (label_476)
  (Rsp [2]) = (Wrd18.Obj);
  goto eval_268;

DEFLABEL (label_477)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_159])), (Wrd19.pObj));

DEFLABEL (label_354)
  (Wrd18.Obj) = Rvl;
  goto label_476;

DEFLABEL (label_478)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_485)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_160]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_161]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_162]));

DEFLABEL (continuation_131)
  INTERRUPT_CHECK (27, LABEL_161);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_184]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_162]));

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_184);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 4);

DEFLABEL (continuation_132)
  INTERRUPT_CHECK (27, LABEL_160);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_178]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_179]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_181);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_180])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [8]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_182]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_183]));

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_182);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_197]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_198]));

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_197);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_209]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_210]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_162]));

DEFLABEL (continuation_147)
  INTERRUPT_CHECK (27, LABEL_210);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_60]), 2);

DEFLABEL (continuation_148)
  INTERRUPT_CHECK (27, LABEL_209);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_146)
  INTERRUPT_CHECK (27, LABEL_179);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_194]));

DEFLABEL (continuation_149)
  INTERRUPT_CHECK (27, LABEL_178);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_192]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_193]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_162]));

DEFLABEL (continuation_150)
  INTERRUPT_CHECK (27, LABEL_193);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_107]), 3);

DEFLABEL (continuation_151)
  INTERRUPT_CHECK (27, LABEL_192);
  (Wrd5.Obj) = (Rsp [7]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (50, 0));
  ((Wrd6.pObj) [0]) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_204]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_484;
  Wrd13 = Wrd17;

DEFLABEL (label_483)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_206]));

DEFLABEL (continuation_152)
  INTERRUPT_CHECK (27, LABEL_204);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_215]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_482;
  Wrd8 = Wrd12;

DEFLABEL (label_481)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_217]));

DEFLABEL (continuation_153)
  INTERRUPT_CHECK (27, LABEL_215);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_223]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_224]));

DEFLABEL (continuation_154)
  INTERRUPT_CHECK (27, LABEL_223);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_234]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_235]));

DEFLABEL (continuation_155)
  INTERRUPT_CHECK (27, LABEL_234);
  (Wrd5.Obj) = (current_block [OBJECT_126]);
  (Rsp [15]) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_480;
  Wrd7 = Wrd11;

DEFLABEL (label_479)
  (Rsp [16]) = (Wrd7.Obj);
  Rsp = (& (Rsp [15]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_217]));

DEFLABEL (label_480)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_239])), (Wrd8.pObj));

DEFLABEL (label_365)
  (Wrd7.Obj) = Rvl;
  goto label_479;

DEFLABEL (label_482)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_216])), (Wrd9.pObj));

DEFLABEL (label_360)
  (Wrd8.Obj) = Rvl;
  goto label_481;

DEFLABEL (label_484)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_205])), (Wrd14.pObj));

DEFLABEL (label_359)
  (Wrd13.Obj) = Rvl;
  goto label_483;

DEFLABEL (label_486)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd19.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_520;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_519)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_518;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [0]);

DEFLABEL (label_517)
  if ((Wrd29.Obj) == (current_block [OBJECT_82]))
    goto label_501;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_500;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [0]);

DEFLABEL (label_499)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd48.uLng) == 1)
    goto label_488;
  (Wrd49.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd51.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_487)
  (Wrd142.pObj) = (& (Rsp [6]));
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd142.pObj)));
  (Rsp [3]) = (Wrd144.Obj);
  goto package_initialize_208;

DEFLABEL (label_488)
  (Wrd56.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd63.Obj) = (Rsp [2]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_498;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd60.Obj) = ((Wrd62.pObj) [1]);

DEFLABEL (label_497)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if ((Wrd69.uLng) == 1)
    goto label_492;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_491)
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_489;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (* (--Rsp)) = (Wrd74.Obj);
  goto label_487;

DEFLABEL (label_489)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_342)
DEFLABEL (label_490)
  (* (--Rsp)) = Rvl;
  goto label_487;

DEFLABEL (label_492)
  (Wrd88.Obj) = (Rsp [2]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 1))
    goto label_496;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd85.Obj) = ((Wrd87.pObj) [1]);

DEFLABEL (label_495)
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_494;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd95.Obj) = ((Wrd96.pObj) [0]);

DEFLABEL (label_493)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd95.Obj);
  goto label_491;

DEFLABEL (label_494)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_344)
  (Wrd95.Obj) = Rvl;
  goto label_493;

DEFLABEL (label_496)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36]), 1);

DEFLABEL (label_343)
  (Wrd85.Obj) = Rvl;
  goto label_495;

DEFLABEL (label_498)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36]), 1);

DEFLABEL (label_341)
  (Wrd60.Obj) = Rvl;
  goto label_497;

DEFLABEL (label_500)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_340)
  (Wrd39.Obj) = Rvl;
  goto label_499;

DEFLABEL (label_501)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd109.Obj) = (Rsp [2]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 1))
    goto label_516;
  (Wrd108.pObj) = (OBJECT_ADDRESS (Wrd109.Obj));
  (Wrd106.Obj) = ((Wrd108.pObj) [1]);

DEFLABEL (label_515)
  (Wrd117.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd117.uLng) == 1))
    goto label_514;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd115.Obj) = ((Wrd116.pObj) [1]);

DEFLABEL (label_513)
  (Wrd122.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if ((Wrd122.uLng) == 1)
    goto label_506;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_505)
  (Wrd128.Obj) = (Rsp [2]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if (! ((Wrd129.uLng) == 1))
    goto label_504;
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd128.Obj));
  (Wrd125.Obj) = ((Wrd127.pObj) [1]);

DEFLABEL (label_503)
  (Wrd136.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd136.uLng) == 1))
    goto label_502;
  (Wrd134.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd135.Obj) = ((Wrd134.pObj) [0]);
  (* (--Rsp)) = (Wrd135.Obj);
  goto label_487;

DEFLABEL (label_502)
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_348)
  goto label_490;

DEFLABEL (label_504)
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36]), 1);

DEFLABEL (label_347)
  (Wrd125.Obj) = Rvl;
  goto label_503;

DEFLABEL (label_506)
  (Wrd148.Obj) = (Rsp [2]);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if (! ((Wrd149.uLng) == 1))
    goto label_512;
  (Wrd147.pObj) = (OBJECT_ADDRESS (Wrd148.Obj));
  (Wrd145.Obj) = ((Wrd147.pObj) [1]);

DEFLABEL (label_511)
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if (! ((Wrd156.uLng) == 1))
    goto label_510;
  (Wrd155.pObj) = (OBJECT_ADDRESS (Wrd145.Obj));
  (Wrd154.Obj) = ((Wrd155.pObj) [1]);

DEFLABEL (label_509)
  (Wrd164.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd164.uLng) == 1))
    goto label_508;
  (Wrd163.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd162.Obj) = ((Wrd163.pObj) [0]);

DEFLABEL (label_507)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd162.Obj);
  goto label_505;

DEFLABEL (label_508)
  (Wrd168.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd168.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_351)
  (Wrd162.Obj) = Rvl;
  goto label_507;

DEFLABEL (label_510)
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36]), 1);

DEFLABEL (label_350)
  (Wrd154.Obj) = Rvl;
  goto label_509;

DEFLABEL (label_512)
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd153.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36]), 1);

DEFLABEL (label_349)
  (Wrd145.Obj) = Rvl;
  goto label_511;

DEFLABEL (label_514)
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36]), 1);

DEFLABEL (label_346)
  (Wrd115.Obj) = Rvl;
  goto label_513;

DEFLABEL (label_516)
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36]), 1);

DEFLABEL (label_345)
  (Wrd106.Obj) = Rvl;
  goto label_515;

DEFLABEL (label_518)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_339)
  (Wrd29.Obj) = Rvl;
  goto label_517;

DEFLABEL (label_520)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_338)
  (* (--Rsp)) = Rvl;
  goto label_519;

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_145);
  goto label_485;

DEFLABEL (continuation_222)
  INTERRUPT_CHECK (27, LABEL_128);
  (* (--Rsp)) = Rvl;
  goto label_491;

DEFLABEL (continuation_229)
  INTERRUPT_CHECK (27, LABEL_127);
  (* (--Rsp)) = Rvl;
  goto label_505;

DEFLABEL (continuation_214)
  INTERRUPT_CHECK (27, LABEL_130);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_522;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_521)
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_234;

DEFLABEL (label_522)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_163]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36]), 1);

DEFLABEL (label_355)
  (Wrd5.Obj) = Rvl;
  goto label_521;

DEFLABEL (package_initialize_391)
DEFLABEL (package_initialize_208)
  INTERRUPT_CHECK (26, LABEL_148);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_150]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_151]));

DEFLABEL (continuation_172)
  INTERRUPT_CHECK (27, LABEL_150);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_526;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_170]));

DEFLABEL (continuation_174)
  INTERRUPT_CHECK (27, LABEL_169);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_524;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  goto label_523;

DEFLABEL (label_524)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_523)
DEFLABEL (label_525)
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_99]), 2);

DEFLABEL (label_526)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_530)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_528;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_172]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.pObj) = (& (Rsp [2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_527)
  Rdl = (& (Rsp [2]));
  goto print_name_207;

DEFLABEL (label_528)
  (Wrd15.Obj) = (Rsp [3]);
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_529;
  (Wrd25.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = (& (Rsp [2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd27.pObj)));
  (Rsp [1]) = (Wrd29.Obj);
  Rdl = (& (Rsp [6]));
  goto print_name_207;

DEFLABEL (label_529)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_171]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.pObj) = (& (Rsp [2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd23.Obj);
  goto label_527;

DEFLABEL (continuation_175)
  INTERRUPT_CHECK (27, LABEL_168);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_526;
  (Wrd43.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60]), 2);

DEFLABEL (continuation_176)
  INTERRUPT_CHECK (27, LABEL_165);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_531;
  (Wrd57.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (current_block [OBJECT_59]);
  (Rsp [1]) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60]), 2);

DEFLABEL (label_531)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd50.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_167);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_166])));
  Rhp += 2;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd50.pObj)));
  Wrd53 = Wrd50;
  (Wrd54.Obj) = (Rsp [5]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [7]);
  ((Wrd53.pObj) [2]) = (Wrd56.Obj);
  (Wrd52.Obj) = (Rsp [0]);
  ((Wrd53.pObj) [3]) = (Wrd52.Obj);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd49.Obj);
  goto label_530;

DEFLABEL (continuation_185)
  INTERRUPT_CHECK (27, LABEL_172);
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_533;

DEFLABEL (label_532)
  (Wrd16.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd16.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_533)
  if ((Wrd5.Obj) == (current_block [OBJECT_59]))
    goto label_532;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_187]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_187)
  INTERRUPT_CHECK (27, LABEL_187);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_200]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_189)
  INTERRUPT_CHECK (27, LABEL_200);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_186]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_190)
  INTERRUPT_CHECK (27, LABEL_186);
  goto label_532;

DEFLABEL (continuation_181)
  INTERRUPT_CHECK (27, LABEL_171);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_190]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_182)
  INTERRUPT_CHECK (27, LABEL_190);
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_535;

DEFLABEL (label_534)
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_105]);
  (Rsp [4]) = (Wrd19.Obj);
  Rsp = (& (Rsp [3]));
  goto fatal_error_171;

DEFLABEL (label_535)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_202]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_184)
  INTERRUPT_CHECK (27, LABEL_202);
  goto label_534;

DEFLABEL (continuation_173)
  INTERRUPT_CHECK (27, LABEL_149);
  (* (--Rsp)) = Rvl;
  goto label_530;

DEFLABEL (do_loop_392)
DEFLABEL (do_loop_76)
  INTERRUPT_CHECK (26, LABEL_152);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_11])))
    goto label_536;
  Rvl = (current_block [OBJECT_54]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_536)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_540;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_539)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_538;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_537)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_157]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17]));

DEFLABEL (continuation_209)
  INTERRUPT_CHECK (27, LABEL_157);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_170]));

DEFLABEL (label_538)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36]), 1);

DEFLABEL (label_353)
  (* (--Rsp)) = Rvl;
  goto label_537;

DEFLABEL (label_540)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_352)
  (Wrd13.Obj) = Rvl;
  goto label_539;

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_154);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_174]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_546;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_545)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_544;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_543)
  (Wrd25.Obj) = (Rsp [6]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto file__object_264;

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_174);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto eval_268;

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_153);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_542;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_541)
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_76;

DEFLABEL (label_542)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_173]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36]), 1);

DEFLABEL (label_356)
  (Wrd5.Obj) = Rvl;
  goto label_541;

DEFLABEL (label_544)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_176]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_358)
  (* (--Rsp)) = Rvl;
  goto label_543;

DEFLABEL (label_546)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_357)
  (Wrd9.Obj) = Rvl;
  goto label_545;

DEFLABEL (print_name_395)
DEFLABEL (print_name_207)
  DLINK_INTERRUPT_CHECK (25, LABEL_188);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_189]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [13]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd21.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_193)
  INTERRUPT_CHECK (27, LABEL_189);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_201]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_194)
  INTERRUPT_CHECK (27, LABEL_201);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_212]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_195)
  INTERRUPT_CHECK (27, LABEL_212);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto loop_205;

DEFLABEL (lambda_394)
  CLOSURE_HEADER (LABEL_180);

DEFLABEL (lambda_145)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_195]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_196]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_162]));

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_196);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_60]), 2);

DEFLABEL (continuation_138)
  INTERRUPT_CHECK (27, LABEL_195);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_207]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_208]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_162]));

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_208);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_60]), 2);

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_207);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_219);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_218])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd16.pObj) [0]);
  (Rsp [2]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_220]));

DEFLABEL (lambda_393)
  CLOSURE_HEADER (LABEL_166);

DEFLABEL (lambda_178)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_213]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60]), 2);

DEFLABEL (continuation_177)
  INTERRUPT_CHECK (27, LABEL_213);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_396)
  CLOSURE_HEADER (LABEL_218);

DEFLABEL (lambda_143)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_550;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_549)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_226]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_548;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_547)
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_226);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_548)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_227]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_362)
  (* (--Rsp)) = Rvl;
  goto label_547;

DEFLABEL (label_550)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_225]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36]), 1);

DEFLABEL (label_361)
  (* (--Rsp)) = Rvl;
  goto label_549;

DEFLABEL (loop_397)
DEFLABEL (loop_205)
  INTERRUPT_CHECK (26, LABEL_230);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_11])))
    goto label_551;
  Rsp = (& (Rsp [1]));
  (Wrd39.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd42.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [3]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  goto tty_write_string_167;

DEFLABEL (label_551)
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  if ((Wrd5.Obj) == (Wrd10.Obj))
    goto label_556;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_229]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd9.pObj) [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_200)
  INTERRUPT_CHECK (27, LABEL_229);

DEFLABEL (label_556)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_231]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_555;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_554)
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [3]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (* (--Rsp)) = (Wrd38.Obj);
  goto tty_write_string_167;

DEFLABEL (continuation_203)
  INTERRUPT_CHECK (27, LABEL_231);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_553;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_552)
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_205;

DEFLABEL (label_553)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_237]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36]), 1);

DEFLABEL (label_364)
  (Wrd5.Obj) = Rvl;
  goto label_552;

DEFLABEL (label_555)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_232]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_363)
  (Wrd23.Obj) = Rvl;
  goto label_554;

DEFLABEL (lambda_398)
  CLOSURE_HEADER (LABEL_248);

DEFLABEL (lambda_122)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_251]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto string_P_302;

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_251);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_558;

DEFLABEL (label_557)
  Rvl = (current_block [OBJECT_30]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_558)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_257]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto string_P_302;

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_257);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_557;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_256]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_559)
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto lambda_110;

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_256);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_557;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_253]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd26.Obj);
  goto label_559;

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_253);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_557;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_254]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_255]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [2]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60]), 2);

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_255);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_254);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_266]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_267]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto file__object_264;

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_267);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto eval_268;

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_266);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_252]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_269]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60]), 2);

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_269);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_252);
  goto label_557;

DEFLABEL (string_P_399)
DEFLABEL (string_P_302)
  INTERRUPT_CHECK (26, LABEL_258);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 30))
    goto label_563;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_562)
  (Wrd17.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Rsp [4]) = (Wrd17.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 30))
    goto label_561;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [1]);
  (Wrd20.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));

DEFLABEL (label_560)
  (Rsp [5]) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_138]), 6);

DEFLABEL (label_561)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_260]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_367)
  (Wrd20.Obj) = Rvl;
  goto label_560;

DEFLABEL (label_563)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_259]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16]), 1);

DEFLABEL (label_366)
  (* (--Rsp)) = Rvl;
  goto label_562;

DEFLABEL (lambda_400)
DEFLABEL (lambda_110)
  INTERRUPT_CHECK (26, LABEL_261);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_108;

DEFLABEL (loop_401)
DEFLABEL (loop_108)
  INTERRUPT_CHECK (26, LABEL_262);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_564;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_564)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_263]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_571;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_570)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_569;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_568)
  goto string_P_302;

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_263);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_565;
  Rvl = Rvl;
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_565)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_567;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_566)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_108;

DEFLABEL (label_567)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_268]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36]), 1);

DEFLABEL (label_370)
  (Wrd9.Obj) = Rvl;
  goto label_566;

DEFLABEL (label_569)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_265]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_369)
  (* (--Rsp)) = Rvl;
  goto label_568;

DEFLABEL (label_571)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_264]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 1);

DEFLABEL (label_368)
  (Wrd13.Obj) = Rvl;
  goto label_570;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_make_so_e758a4c06b652970 [2] =
  {
    { "make_so_code_1", 9, make_so_code_1 },
    { "make_so_code_2", 3, make_so_code_2 }
  };

int
decl_make_so_e758a4c06b652970 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_make_so_e758a4c06b652970);
  return (0);
}

DECLARE_COMPILED_CODE ("make.so", 238, decl_make_so_e758a4c06b652970, make_so_e758a4c06b652970)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_make_so_data_e758a4c06b652970 [6955] =
  "\x99\x05\x1b\xde\x0a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc3\xb9\xc2"
  "\xba\x0c\x80\x1d\xc1\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0"
  "\x82\x88\x02\xc2\x02\xc3\x02\x1d\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xb8\x99\xbc\x88\xb4\x0d\xc6\x0d\x0c\x0d\x0d\x88\x0d\x0d\x88"
  "\x0d\x0d\xbc\x0d\xbd\x08\x89\xb4\x0d\xbe\x08\x89\xb4\x0d\xbf\x08"
  "\x89\x0d\x0d\xb4\x0d\x1c\x08\x89\x0c\x0d\xb4\x0d\x1c\x08\x89\x0d"
  "\x0c\x0c\xb4\x0d\x1c\x08\x89\x0d\x0c\xb4\x0d\x1c\x0d\x08\x8b\x0c"
  "\xb4\x1b\x0d\x08\x8b\x0c\xb4\x1b\x08\x8a\x0c\xb4\x1b\x08\x8a\x0c"
  "\xb4\x1b\x08\x8a\x0c\xb4\xb7\x08\x8a\x0c\xb4\xb6\x08\x8a\x08\x8e"
  "\x0c\x0d\x1c\x0d\x0c\x0c\xb4\x0d\x1c\x08\x89\x0d\x0d\xb4\x0d\x1c"
  "\x08\x89\x0d\xc3\x0d\x0c\xb4\x0d\xbe\x08\x89\xb4\x0d\x1c\x08\x89"
  "\x0d\x0d\x0d\x1c\xc2\x0c\x0c\xb4\x0d\x1c\x08\x89\x0d\xb4\x0d\x08"
  "\x89\x0c\x0d\x0c\x0c\x0c\xb4\x0d\x1c\x08\x89\x0d\x1c\x08\x88\x0d"
  "\x0d\x1c\xb4\x0d\x1c\x08\x89\x0c\x0d\x1c\x0d\xb4\x0d\x1c\x08\x89"
  "\xb4\x0d\x08\x89\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4"
  "\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4\xb7\x08\x89\x0d"
  "\x08\x89\xb4\x0d\xbf\x08\x89\xb4\xb7\x08\x89\x0d\x08\x89\xb4\x0d"
  "\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d"
  "\xbf\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x1c\x08\x89"
  "\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89"
  "\xb4\x0d\x08\x89\xb4\x0d\x1c\x08\x89\xb4\x0d\x08\x89\xb4\x1b\x0d"
  "\x08\x8a\x0d\x08\x89\xb4\x1b\x08\x89\x0d\x08\x89\xb4\x1b\x0d\x1c"
  "\x08\x8a\x0d\x08\x89\xb4\x0d\x08\x89\x0d\x08\x89\xb4\x0d\x1c\x08"
  "\x89\x0d\x08\x89\xb4\x1b\x08\x89\x0d\x08\x89\x1b\x08\x88\x0d\x08"
  "\x89\xb4\x1b\x08\x89\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89"
  "\xb4\x1b\x08\x89\x0d\x1c\x08\x89\xb4\x1b\x1b\x08\x8a\x1b\x08\x89"
  "\xb4\x1b\x08\x89\x1b\x08\x89\xb4\xb7\x08\x89\x1b\x08\x89\xb4\x1b"
  "\x08\x89\x1b\x08\x89\xb4\x0d\x1c\x08\x89\x0d\x08\x89\xb4\x0d\x08"
  "\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08"
  "\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08"
  "\x89\xb4\x0d\x08\x89\xb4\x0d\x1c\x0d\x1c\x08\x8a\xb4\x1b\x0d\x08"
  "\x8a\xb4\x1b\x08\x89\xb4\x0d\x08\x89\xb4\x1b\x08\x89\xb4\x0d\x08"
  "\x89\x1b\xb4\x1b\x08\x89\x0d\x08\x8a\xb4\x0d\x08\x89\xb4\x0d\x08"
  "\x89\xb4\x0d\x1c\x08\x89\xb4\x1b\x0d\x08\x8a\xb4\x1b\x08\x89\x0d"
  "\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d"
  "\x08\x89\xb4\x1b\x0d\x08\x8a\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4"
  "\x0d\x08\x89\xb4\x1b\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4"
  "\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4"
  "\x08\x88\xb4\x0d\x08\x89\x1b\xb4\x0d\x08\x89\x08\x89\x1b\xb4\x0d"
  "\x08\x89\x08\x89\x1b\xb4\x0d\x08\x89\x08\x89\xb4\x0d\x08\x89\x1b"
  "\xb4\x1b\x08\x89\x0d\x08\x8a\xb4\x0d\x08\x89\xb4\x0d\x08\x89\xb4"
  "\x0d\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08\x89\x1b\xb4\x0d\x08\x89"
  "\x08\x89\x1b\xb4\x0d\x08\x89\x08\x89\xb4\x0d\x08\x89\xb4\x0d\x08"
  "\x89\x08\x14\x0d\x0c\xb4\x1b\x08\x8a\x0c\xb4\x1b\x08\x8a\x0c\xb4"
  "\xb5\x08\x8a\x0c\xb4\x0d\x08\x8a\x0c\xb4\x0d\x08\x8a\x0c\xb4\x0d"
  "\x08\x8a\x0c\xb4\x0d\x08\x8a\x0c\xb4\x0d\x08\x8a\x0c\xb4\x0d\x08"
  "\x8a\x0c\xb4\x1b\x08\x8a\x0c\xb4\x1b\x08\x8a\x0c\xb4\xb6\x08\x8a"
  "\x0c\xb4\x1b\x08\x8a\x08\x14\x0d\x1c\x0d\x0c\x0c\x0c\x0c\x0d\x0c"
  "\x0d\x0c\xc1\xc4\x0d\x1b\xc3\x0d\xc2\x0d\x0c\x0c\x0c\x1b\x07\x0c"
  "\x0c\x0c\xc1\x02\xc1\xc2\xc5\xc1\x0c\xc1\xc2\x0c\x0c\xc1\xc1\xc1"
  "\xc1\xc1\x0c\xc1\xc2\xc2\x1d\xc2\xc1\x02\x82\xc3\x81\x85\x0c\xc4"
  "\xc0\xc2\x0c\x0c\xc1\xc0\xb2\x02\xc0\x08\x0d\x0d\x0d\x1c\xb0\x2a"
  "\x0d\x0d\x1c\xb1\x0d\xb3\x2a\xc1\x80\x1b\x0d\x0d\x24\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
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
  "\x21\x17\x02\x53\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x6d\x61"
  "\x6b\x65\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x11\x6c\x6f\x63"
  "\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0b\x76\x65"
  "\x63\x74\x6f\x72\x2d\x72\x65\x66\x23\x44\x45\x46\x49\x4e\x45\x2d"
  "\x4d\x55\x4c\x54\x49\x50\x4c\x45\x3a\x20\x49\x6e\x76\x61\x6c\x69"
  "\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x02\x0e\x76\x65\x63"
  "\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x05\x06\x65\x72\x72\x6f"
  "\x72\x02\xf7\x01\x14\x81\x8d\x02\xf6\x01\x12\x81\x91\x02\xf5\x01"
  "\x10\x81\x8f\x02\xf4\x01\x0e\x81\x8d\x02\xf3\x01\x0c\x81\x87\x02"
  "\xf2\x01\x0a\x81\x89\x02\xf1\x01\x08\x81\x87\x02\xf0\x01\x06\x85"
  "\x08\xef\x01\x04\x81\x87\x02\x13\x1f\x02\x10\x16\x73\x79\x73\x74"
  "\x65\x6d\x2d\x6c\x69\x73\x74\x2d\x74\x6f\x2d\x76\x65\x63\x74\x6f"
  "\x72\x13\x11\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x63"
  "\x6f\x6e\x73\x18\x02\xfa\x01\x08\x81\x8b\x02\xf9\x01\x06\x81\x87"
  "\x02\xf8\x01\x04\xfd\x07\x07\x10\x11\x73\x61\x76\x65\x2d\x62\x6f"
  "\x6f\x74\x2d\x69\x6e\x69\x74\x73\x21\x0c\x73\x75\x62\x73\x74\x72"
  "\x69\x6e\x67\x3d\x3f\x11\x69\x6e\x69\x74\x2d\x62\x6f\x6f\x74\x2d"
  "\x69\x6e\x69\x74\x73\x21\x05\x6d\x61\x6b\x65\x0a\x73\x6f\x72\x74"
  "\x2d\x74\x79\x70\x65\x0b\x6d\x65\x72\x67\x65\x2d\x73\x6f\x72\x74"
  "\x08\x6f\x70\x74\x69\x6f\x6e\x73\x08\x6e\x6f\x2d\x6c\x6f\x61\x64"
  "\x08\x6f\x73\x2d\x74\x79\x70\x65\x08\x72\x75\x6e\x74\x69\x6d\x65"
  "\x11\x62\x6f\x6f\x74\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e"
  "\x73\x07\x73\x74\x72\x69\x6e\x67\x0d\x67\x63\x2d\x66\x69\x6e\x61"
  "\x6c\x69\x7a\x65\x72\x15\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65"
  "\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x21\x09\x70\x61\x63\x6b\x61"
  "\x67\x65\x3f\x10\x67\x6c\x6f\x62\x61\x6c\x2d\x64\x61\x74\x61\x62"
  "\x61\x73\x65\x09\x05\x64\x6f\x6e\x65\x12\x70\x61\x63\x6b\x61\x67"
  "\x65\x2f\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x12\x65\x76\x65\x6e"
  "\x74\x2d\x64\x69\x73\x74\x72\x69\x62\x75\x74\x6f\x72\x0a\x0f\x70"
  "\x61\x63\x6b\x61\x67\x65\x2f\x70\x61\x72\x65\x6e\x74\x02\x20\x02"
  "\x29\x0c\x31\x64\x2d\x70\x72\x6f\x70\x65\x72\x74\x79\x0b\x0d\x70"
  "\x61\x63\x6b\x61\x67\x65\x2f\x6e\x61\x6d\x65\x0d\x73\x79\x6e\x74"
  "\x61\x78\x2d\x69\x74\x65\x6d\x73\x07\x73\x79\x6e\x74\x61\x78\x0c"
  "\x06\x69\x74\x65\x6d\x73\x12\x73\x79\x6e\x74\x61\x78\x2d\x74\x72"
  "\x61\x6e\x73\x66\x6f\x72\x6d\x73\x0c\x0b\x74\x72\x61\x6e\x73\x66"
  "\x6f\x72\x6d\x73\x07\x70\x72\x6f\x70\x31\x64\x0b\x07\x65\x76\x65"
  "\x6e\x74\x73\x0a\x07\x67\x64\x61\x74\x61\x62\x09\x08\x67\x63\x66"
  "\x69\x6e\x61\x6c\x07\x73\x74\x72\x69\x6e\x67\x0d\x70\x75\x72\x69"
  "\x66\x79\x69\x6e\x67\x2e\x2e\x2e\x14\x70\x61\x63\x6b\x61\x67\x65"
  "\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x0b\x10\x72\x75"
  "\x6e\x2d\x62\x6f\x6f\x74\x2d\x69\x6e\x69\x74\x73\x21\x03\x20\x28"
  "\x02\x5d\x07\x72\x65\x63\x6f\x72\x64\x0a\x1d\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x2d\x74\x79\x70\x65\x21\x1e\x77\x69\x74\x68\x2d\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x2d\x72\x65\x77\x72\x69\x74\x69\x6e\x67"
  "\x2d\x72\x75\x6c\x65\x0e\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x69"
  "\x6e\x66\x6f\x09\x1f\x66\x61\x73\x6c\x6f\x61\x64\x2f\x75\x70\x64"
  "\x61\x74\x65\x2d\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e"
  "\x66\x6f\x21\x13\x6c\x65\x78\x69\x63\x61\x6c\x2d\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x11\x70\x61\x63\x6b\x61\x67\x65\x2f\x63"
  "\x68\x69\x6c\x64\x72\x65\x6e\x29\x43\x6f\x75\x6c\x64\x20\x6e\x6f"
  "\x74\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x20\x61\x20\x72"
  "\x65\x71\x75\x69\x72\x65\x64\x20\x70\x61\x63\x6b\x61\x67\x65\x2e"
  "\x0b\x70\x6f\x70\x75\x6c\x61\x74\x69\x6f\x6e\x05\x6c\x6f\x61\x64"
  "\x0d\x17\x6c\x6f\x61\x64\x2f\x70\x75\x72\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x11\x67\x63\x2d\x62\x6f\x6f\x74"
  "\x2d\x6c\x6f\x61\x64\x69\x6e\x67\x3f\x13\x70\x61\x63\x6b\x61\x67"
  "\x65\x2f\x61\x64\x64\x2d\x63\x68\x69\x6c\x64\x21\x0e\x19\x6c\x65"
  "\x78\x69\x63\x61\x6c\x2d\x75\x6e\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x61\x62\x6c\x65\x3f\x26\x20\x69\x73\x20\x6d\x69\x73\x73\x69"
  "\x6e\x67\x20\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x61\x74\x69\x6f"
  "\x6e\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x20\x03\x20\x5b\x12"
  "\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x0f\x1a\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x74\x61"
  "\x67\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x73\x21\x0c\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x08\x72\x75\x6e\x74\x69\x6d\x65"
  "\x15\x70\x61\x63\x6b\x61\x67\x65\x2d\x73\x65\x74\x2d\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x0c\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65"
  "\x3a\x08\x50\x61\x63\x6b\x61\x67\x65\x0c\x2a\x20\x73\x6b\x69\x70"
  "\x70\x69\x6e\x67\x3a\x0e\x72\x61\x6e\x64\x6f\x6d\x2d\x6e\x75\x6d"
  "\x62\x65\x72\x10\x08\x70\x61\x63\x6b\x61\x67\x65\x11\x11\x70\x61"
  "\x63\x6b\x61\x67\x65\x2d\x6e\x61\x6d\x65\x2d\x74\x61\x67\x0e\x6e"
  "\x61\x6d\x65\x2d\x3e\x70\x61\x63\x6b\x61\x67\x65\x12\x12\x67\x61"
  "\x72\x62\x61\x67\x65\x2d\x63\x6f\x6c\x6c\x65\x63\x74\x6f\x72\x13"
  "\x05\x73\x69\x74\x65\x09\x6f\x70\x74\x69\x6f\x6e\x61\x6c\x14\x18"
  "\x6c\x6f\x61\x64\x2d\x70\x61\x63\x6b\x61\x67\x65\x73\x2d\x66\x72"
  "\x6f\x6d\x2d\x66\x69\x6c\x65\x0b\x67\x63\x2d\x64\x61\x65\x6d\x6f"
  "\x6e\x73\x15\x11\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x74\x61"
  "\x62\x6c\x65\x73\x17\x72\x65\x61\x64\x2d\x6d\x69\x63\x72\x6f\x63"
  "\x6f\x64\x65\x2d\x74\x61\x62\x6c\x65\x73\x21\x0c\x73\x74\x61\x74"
  "\x65\x2d\x73\x70\x61\x63\x65\x06\x61\x70\x70\x6c\x79\x05\x68\x61"
  "\x73\x68\x0d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x69\x6f\x0d"
  "\x73\x79\x73\x74\x65\x6d\x2d\x63\x6c\x6f\x63\x6b\x13\x69\x6e\x69"
  "\x74\x69\x61\x6c\x69\x7a\x65\x2d\x65\x76\x65\x6e\x74\x73\x21\x07"
  "\x6e\x75\x6d\x62\x65\x72\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a"
  "\x65\x2d\x64\x72\x61\x67\x6f\x6e\x34\x21\x15\x6d\x69\x73\x63\x65"
  "\x6c\x6c\x61\x6e\x65\x6f\x75\x73\x2d\x67\x6c\x6f\x62\x61\x6c\x0a"
  "\x63\x68\x61\x72\x61\x63\x74\x65\x72\x0e\x63\x68\x61\x72\x61\x63"
  "\x74\x65\x72\x2d\x73\x65\x74\x07\x67\x65\x6e\x73\x79\x6d\x07\x73"
  "\x74\x72\x65\x61\x6d\x0c\x32\x64\x2d\x70\x72\x6f\x70\x65\x72\x74"
  "\x79\x0b\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x14\x72\x65\x67"
  "\x75\x6c\x61\x72\x2d\x73\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x16\x08\x68\x69\x73\x74\x6f\x72\x79\x13\x6c\x61\x6d\x62\x64\x61"
  "\x2d\x61\x62\x73\x74\x72\x61\x63\x74\x69\x6f\x6e\x06\x73\x63\x6f"
  "\x64\x65\x11\x73\x63\x6f\x64\x65\x2d\x63\x6f\x6d\x62\x69\x6e\x61"
  "\x74\x6f\x72\x0d\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x65\x72"
  "\x14\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x70\x61"
  "\x72\x73\x65\x72\x17\x0f\x70\x72\x6f\x67\x72\x61\x6d\x2d\x63\x6f"
  "\x70\x69\x65\x72\x0f\x05\x65\x71\x68\x74\x1c\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x2d\x61\x64\x64\x72\x65\x73\x73\x2d\x68\x61"
  "\x73\x68\x69\x6e\x67\x21\x0f\x1f\x69\x6e\x69\x74\x69\x61\x6c\x69"
  "\x7a\x65\x2d\x67\x65\x6e\x65\x72\x69\x63\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x73\x21\x0f\x0c\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x78\x65\x72\x18\x18\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x78\x65\x72\x21\x0e\x74\x61\x67"
  "\x67\x65\x64\x2d\x76\x65\x63\x74\x6f\x72\x1a\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x2d\x74\x61\x67\x67\x65\x64\x2d\x76\x65\x63"
  "\x74\x6f\x72\x21\x13\x72\x65\x63\x6f\x72\x64\x2d\x73\x6c\x6f\x74"
  "\x2d\x61\x63\x63\x65\x73\x73\x19\x1f\x69\x6e\x69\x74\x69\x61\x6c"
  "\x69\x7a\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x73\x6c\x6f\x74\x2d"
  "\x61\x63\x63\x65\x73\x73\x21\x0a\x1e\x69\x6e\x69\x74\x69\x61\x6c"
  "\x69\x7a\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x73\x21\x11\x1e\x66\x69\x6e\x61\x6c\x69\x7a\x65"
  "\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d"
  "\x74\x79\x70\x65\x21\x10\x1c\x66\x69\x6e\x61\x6c\x69\x7a\x65\x2d"
  "\x72\x61\x6e\x64\x6f\x6d\x2d\x73\x74\x61\x74\x65\x2d\x74\x79\x70"
  "\x65\x21\x0e\x65\x72\x72\x6f\x72\x2d\x68\x61\x6e\x64\x6c\x65\x72"
  "\x11\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x65\x72\x72\x6f\x72"
  "\x73\x0f\x17\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x73\x21\x1a\x0f\x18\x1a\x19\x1a\x1a"
  "\x16\x1a\x0e\x6f\x73\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x73"
  "\x1a\x1e\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x73\x79\x73"
  "\x74\x65\x6d\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x73\x21\x1b"
  "\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x07\x74\x68\x72\x65\x61"
  "\x64\x0c\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x11\x67\x65"
  "\x6e\x65\x72\x69\x63\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x0e\x66"
  "\x69\x6c\x65\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x11\x63\x6f\x6e"
  "\x73\x6f\x6c\x65\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x07\x73\x6f"
  "\x63\x6b\x65\x74\x0b\x74\x72\x61\x6e\x73\x63\x72\x69\x70\x74\x10"
  "\x73\x74\x72\x69\x6e\x67\x2d\x69\x2f\x6f\x2d\x70\x6f\x72\x74\x0f"
  "\x75\x73\x65\x72\x2d\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x09\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x19\x05\x75\x6e\x69\x78\x18\x19\x04"
  "\x64\x6f\x73\x19\x12\x77\x6f\x72\x6b\x69\x6e\x67\x2d\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x0d\x10\x73\x69\x6d\x70\x6c\x65\x2d\x66"
  "\x69\x6c\x65\x2d\x6f\x70\x73\x14\x1a\x17\x69\x6e\x69\x74\x69\x61"
  "\x6c\x69\x7a\x65\x2d\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x73\x21"
  "\x08\x6b\x65\x79\x77\x6f\x72\x64\x0e\x6e\x75\x6d\x62\x65\x72\x2d"
  "\x70\x61\x72\x73\x65\x72\x07\x70\x61\x72\x73\x65\x72\x1a\x1a\x10"
  "\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x19"
  "\x1a\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x72\x73"
  "\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x21\x09\x75\x6e\x70\x61\x72"
  "\x73\x65\x72\x0b\x75\x6e\x73\x79\x6e\x74\x61\x78\x65\x72\x0f\x70"
  "\x72\x65\x74\x74\x79\x2d\x70\x72\x69\x6e\x74\x65\x72\x14\x65\x78"
  "\x74\x65\x6e\x64\x65\x64\x2d\x73\x63\x6f\x64\x65\x2d\x65\x76\x61"
  "\x6c\x0c\x0c\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x73\x12\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x68\x61\x6e\x64\x6c\x65\x72"
  "\x0e\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63\x73\x04\x72"
  "\x65\x70\x09\x07\x61\x64\x76\x69\x63\x65\x16\x64\x65\x62\x75\x67"
  "\x67\x65\x72\x2d\x63\x6f\x6d\x6d\x61\x6e\x64\x2d\x6c\x6f\x6f\x70"
  "\x13\x64\x65\x62\x75\x67\x67\x65\x72\x2d\x75\x74\x69\x6c\x69\x74"
  "\x69\x65\x73\x16\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d"
  "\x69\x6e\x73\x70\x65\x63\x74\x6f\x72\x0f\x64\x65\x62\x75\x67\x67"
  "\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x09\x64\x65\x62\x75\x67\x67\x65"
  "\x72\x07\x63\x72\x79\x70\x74\x6f\x14\x12\x73\x74\x61\x72\x62\x61"
  "\x73\x65\x2d\x67\x72\x61\x70\x68\x69\x63\x73\x14\x0b\x78\x2d\x67"
  "\x72\x61\x70\x68\x69\x63\x73\x14\x0d\x6f\x73\x32\x2d\x67\x72\x61"
  "\x70\x68\x69\x63\x73\x10\x65\x6d\x61\x63\x73\x2d\x69\x6e\x74\x65"
  "\x72\x66\x61\x63\x65\x14\x17\x1b\x69\x6e\x69\x74\x69\x61\x6c\x69"
  "\x7a\x65\x2d\x73\x70\x65\x63\x69\x61\x6c\x2d\x66\x72\x61\x6d\x65"
  "\x73\x21\x04\x75\x72\x69\x10\x72\x66\x63\x32\x38\x32\x32\x2d\x68"
  "\x65\x61\x64\x65\x72\x73\x0c\x68\x74\x74\x70\x2d\x73\x79\x6e\x74"
  "\x61\x78\x0c\x68\x74\x74\x70\x2d\x63\x6c\x69\x65\x6e\x74\x10\x68"
  "\x74\x6d\x6c\x2d\x66\x6f\x72\x6d\x2d\x63\x6f\x64\x65\x63\x14\x0f"
  "\x77\x69\x6e\x33\x32\x2d\x72\x65\x67\x69\x73\x74\x72\x79\x14\x04"
  "\x66\x66\x69\x06\x73\x77\x61\x6e\x6b\x0e\x73\x74\x61\x63\x6b\x2d"
  "\x73\x61\x6d\x70\x6c\x65\x72\x5d\x11\x6c\x6f\x61\x64\x2d\x70\x61"
  "\x63\x6b\x61\x67\x65\x2d\x73\x65\x74\x07\x67\x63\x64\x65\x6d\x6e"
  "\x15\x03\x67\x63\x13\x05\x62\x6f\x6f\x74\x06\x71\x75\x65\x75\x65"
  "\x0d\x73\x69\x6d\x70\x6c\x65\x2d\x71\x75\x65\x75\x65\x07\x65\x71"
  "\x75\x61\x6c\x73\x09\x65\x71\x75\x61\x6c\x69\x74\x79\x05\x6c\x69"
  "\x73\x74\x05\x6c\x69\x73\x74\x07\x73\x79\x6d\x62\x6f\x6c\x07\x73"
  "\x79\x6d\x62\x6f\x6c\x06\x75\x70\x72\x6f\x63\x0a\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x07\x66\x69\x78\x61\x72\x74\x12\x66\x69\x78"
  "\x6e\x75\x6d\x2d\x61\x72\x69\x74\x68\x6d\x65\x74\x69\x63\x07\x72"
  "\x61\x6e\x64\x6f\x6d\x10\x07\x67\x65\x6e\x74\x61\x67\x0f\x07\x70"
  "\x6f\x70\x6c\x61\x74\x07\x72\x65\x63\x6f\x72\x64\x0a\x0d\x0d\x66"
  "\x69\x6e\x64\x2d\x70\x61\x63\x6b\x61\x67\x65\x1a\x15\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x3e\x70\x61\x63\x6b\x61\x67"
  "\x65\x09\x72\x75\x6e\x74\x69\x6d\x65\x2d\x04\x75\x6e\x6b\x04\x75"
  "\x6e\x78\x04\x6f\x73\x32\x05\x6f\x73\x2f\x32\x04\x77\x33\x32\x03"
  "\x6e\x74\x05\x2e\x70\x6b\x64\x0f\x73\x74\x72\x69\x6e\x67\x2d\x3e"
  "\x73\x79\x6d\x62\x6f\x6c\x0f\x6c\x69\x6e\x6b\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x73\x1d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x2d"
  "\x70\x61\x63\x6b\x61\x67\x65\x73\x2d\x66\x72\x6f\x6d\x2d\x66\x69"
  "\x6c\x65\x11\x14\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x64\x6f"
  "\x77\x6e\x63\x61\x73\x65\x21\x1e\x2a\x61\x6c\x6c\x6f\x77\x2d\x70"
  "\x61\x63\x6b\x61\x67\x65\x2d\x72\x65\x64\x65\x66\x69\x6e\x69\x74"
  "\x69\x6f\x6e\x3f\x2a\x12\x6c\x65\x78\x69\x63\x61\x6c\x2d\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x14\x69\x6e\x69\x74\x69\x61\x6c\x69"
  "\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x07\x70\x61\x63\x6b"
  "\x61\x67\x03\x0d\x0a\x02\x0a\x18\x10\x43\x6f\x75\x6c\x64\x20\x6e"
  "\x6f\x74\x20\x66\x69\x6e\x64\x20\x05\x2e\x62\x69\x6e\x0d\x20\x69"
  "\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x64\x10\x67\x61\x72\x62\x61"
  "\x67\x65\x2d\x63\x6f\x6c\x6c\x65\x63\x74\x95\x23\x13\x67\x65\x74"
  "\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6e\x61\x6d\x65\x16"
  "\x67\x65\x74\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x61\x64"
  "\x64\x72\x65\x73\x73\x16\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6d\x6f\x76\x65\x2d\x72\x69\x67\x68\x74\x21\x0d\x66\x69\x6c\x65"
  "\x2d\x65\x78\x69\x73\x74\x73\x3f\x08\x20\x6c\x6f\x61\x64\x65\x64"
  "\x10\x65\x78\x69\x74\x2d\x77\x69\x74\x68\x2d\x76\x61\x6c\x75\x65"
  "\x14\x77\x69\x74\x68\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d"
  "\x6d\x61\x73\x6b\x10\x53\x74\x61\x63\x6b\x20\x6f\x76\x65\x72\x66"
  "\x6c\x6f\x77\x21\x0f\x48\x61\x72\x64\x77\x61\x72\x65\x20\x74\x72"
  "\x61\x70\x21\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x64\x61\x74\x75\x6d"
  "\x1c\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x63\x2d\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x2d\x62\x6c\x6f\x63\x6b\x10\x73\x74\x72"
  "\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x04\x63\x64\x72"
  "\x04\x63\x61\x72\x05\x2e\x63\x6f\x6d\x0f\x62\x69\x6e\x61\x72\x79"
  "\x2d\x66\x61\x73\x6c\x6f\x61\x64\x11\x69\x6e\x74\x65\x67\x65\x72"
  "\x2d\x73\x75\x62\x74\x72\x61\x63\x74\x0c\x69\x6e\x74\x65\x67\x65"
  "\x72\x2d\x61\x64\x64\x02\x0e\x69\x6e\x74\x65\x67\x65\x72\x2d\x6c"
  "\x65\x73\x73\x3f\x1a\x73\x65\x74\x2d\x66\x69\x78\x65\x64\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x73\x2d\x76\x65\x63\x74\x6f\x72\x21\x0d\x0c"
  "\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x0b\x20\x65\x76\x61"
  "\x6c\x75\x61\x74\x65\x64\x0e\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x77"
  "\x72\x69\x74\x65\x19\x67\x65\x74\x2d\x66\x69\x78\x65\x64\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x73\x2d\x76\x65\x63\x74\x6f\x72\x0b\x73\x63"
  "\x6f\x64\x65\x2d\x65\x76\x61\x6c\x34\x68\x74\x74\x70\x3a\x2f\x2f"
  "\x77\x77\x77\x2e\x67\x6e\x75\x2e\x6f\x72\x67\x2f\x73\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x6c\x69\x62\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x04\x2e\x73\x6f"
  "\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x13\x74"
  "\x74\x79\x2d\x6f\x75\x74\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65"
  "\x6c\x09\x13\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x69\x64\x65"
  "\x6e\x74\x69\x66\x79\x05\x75\x73\x65\x72\x15\x23\x5b\x75\x6e\x6e"
  "\x61\x6d\x65\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x5d\x12"
  "\x2a\x6d\x61\x6b\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e"
  "\x74\x19\x04\x1b\x73\x79\x73\x74\x65\x6d\x2d\x67\x6c\x6f\x62\x61"
  "\x6c\x2d\x73\x79\x6e\x74\x61\x78\x2d\x74\x61\x62\x6c\x65\x1a\x73"
  "\x79\x73\x74\x65\x6d\x2d\x67\x6c\x6f\x62\x61\x6c\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x18\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x06\x17\x73\x65\x74\x2d\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x65\x6e\x61\x62\x6c\x65\x73"
  "\x21\x18\x19\x75\x73\x65\x72\x2d\x69\x6e\x69\x74\x69\x61\x6c\x2d"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x14\x63\x6f\x6e\x73"
  "\x6f\x6c\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x04"
  "\x04\x19\x03\x1a\x04\x1a\x02\x18\x66\x6c\x6f\x3a\x64\x65\x66\x61"
  "\x75\x6c\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x05"
  "\x0e\x02\x13\x73\x74\x61\x72\x74\x2d\x74\x68\x72\x65\x61\x64\x2d"
  "\x74\x69\x6d\x65\x72\x03\x15\x66\x6c\x6f\x3a\x73\x65\x74\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x02\x17\x69\x6e\x69"
  "\x74\x69\x61\x6c\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x72"
  "\x65\x70\x6c\x03\x0e\x2d\x3e\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x03\x0b\x03\x16\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61"
  "\x73\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x03\x0d\x6c\x69\x73"
  "\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72\x02\x1b\x77\x6f\x72\x6b\x69"
  "\x6e\x67\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x03\x08\x6e\x65\x77\x6c\x69\x6e\x65\x04\x0d"
  "\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x04\x04\x6d\x61"
  "\x70\x02\x09\x67\x63\x2d\x63\x6c\x65\x61\x6e\x05\x07\x70\x75\x72"
  "\x69\x66\x79\x03\x12\x14\xee\x01\xde\x03\x80\x80\x04\xed\x01\xdc"
  "\x03\x81\x81\x02\xec\x01\xda\x03\x81\x81\x02\xeb\x01\xd8\x03\x81"
  "\x8b\x02\xea\x01\xd6\x03\x81\x8b\x02\xe9\x01\xd4\x03\x81\x87\x02"
  "\xe8\x01\xd2\x03\x81\x89\x02\xe7\x01\xd0\x03\x81\x87\x02\xe6\x01"
  "\xce\x03\x81\x89\x02\xe5\x01\xcc\x03\x81\x87\x02\xe4\x01\xca\x03"
  "\x81\x8b\x02\xe3\x01\xc8\x03\x81\x8b\x02\xe2\x01\xc6\x03\x81\x87"
  "\x02\xe1\x01\xc4\x03\x81\x85\x02\xe0\x01\xc2\x03\x81\x8d\x02\xdf"
  "\x01\xc0\x03\x81\x87\x02\xde\x01\xbe\x03\x81\x85\x02\xdd\x01\xbc"
  "\x03\x81\x87\x02\xdc\x01\xba\x03\x81\x87\x02\xdb\x01\xb8\x03\x81"
  "\x87\x02\xda\x01\xb6\x03\x81\x87\x02\xd9\x01\xb4\x03\x81\x87\x02"
  "\xd8\x01\xb2\x03\x81\x87\x02\xd7\x01\xb0\x03\x81\x87\x02\xd6\x01"
  "\xae\x03\x81\x83\x02\xd5\x01\xac\x03\x81\x81\x02\xd4\x01\xaa\x03"
  "\x81\x81\x02\xd3\x01\xa8\x03\x81\x81\x02\xd2\x01\xa6\x03\x81\x81"
  "\x02\xd1\x01\xa4\x03\x81\x81\x02\xd0\x01\xa2\x03\x81\x81\x02\xcf"
  "\x01\xa0\x03\x81\x81\x02\xce\x01\x9e\x03\x81\x81\x02\xcd\x01\x9c"
  "\x03\x81\xa3\x02\xcc\x01\x9a\x03\x81\xa3\x02\xcb\x01\x98\x03\x81"
  "\x81\x02\xca\x01\x96\x03\xfd\xff\x03\xc9\x01\x94\x03\xfd\xff\x03"
  "\xc8\x01\x92\x03\x81\x81\x02\xc7\x01\x90\x03\x81\x87\x02\xc6\x01"
  "\x8e\x03\x81\xa3\x02\xc5\x01\x8c\x03\x81\x81\x02\xc4\x01\x8a\x03"
  "\xfd\xff\x03\xc3\x01\x88\x03\xff\xff\x03\xc2\x01\x86\x03\xfd\xff"
  "\x03\xc1\x01\x84\x03\x81\x81\x02\xc0\x01\x82\x03\x81\x89\x02\xbf"
  "\x01\x80\x03\x81\x85\x02\xbe\x01\xfe\x02\x81\x85\x02\xbd\x01\xfc"
  "\x02\x81\xa3\x02\xbc\x01\xfa\x02\x81\x81\x02\xbb\x01\xf8\x02\x81"
  "\x83\x02\xba\x01\xf6\x02\xfd\xff\x03\xb9\x01\xf4\x02\x81\x81\x02"
  "\xb8\x01\xf2\x02\x81\xaf\x02\xb7\x01\xf0\x02\x81\xab\x02\xb6\x01"
  "\xee\x02\x81\x89\x02\xb5\x01\xec\x02\x81\x85\x02\xb4\x01\xea\x02"
  "\x81\xa5\x02\xb3\x01\xe8\x02\x81\xa3\x02\xb2\x01\xe6\x02\x81\x81"
  "\x02\xb1\x01\xe4\x02\x81\x83\x02\xb0\x01\xe2\x02\xfd\xff\x03\xaf"
  "\x01\xe0\x02\x81\x8b\x02\xae\x01\xde\x02\x81\x81\x02\xad\x01\xdc"
  "\x02\x81\xa9\x02\xac\x01\xda\x02\x81\x87\x02\xab\x01\xd8\x02\x81"
  "\x83\x02\xaa\x01\xd6\x02\x81\xa9\x02\xa9\x01\xd4\x02\x81\xa5\x02"
  "\xa8\x01\xd2\x02\x81\xa3\x02\xa7\x01\xd0\x02\x81\x81\x02\xa6\x01"
  "\xce\x02\x81\x8b\x02\xa5\x01\xcc\x02\x81\x8b\x02\xa4\x01\xca\x02"
  "\xfd\xff\x03\xa3\x01\xc8\x02\x81\x8b\x02\xa2\x01\xc6\x02\x81\x81"
  "\x02\xa1\x01\xc4\x02\x81\xa9\x02\xa0\x01\xc2\x02\x81\xa7\x02\x9f"
  "\x01\xc0\x02\x81\x83\x02\x9e\x01\xbe\x02\x81\xa3\x02\x9d\x01\xbc"
  "\x02\x81\xa1\x02\x9c\x01\xba\x02\x81\x81\x02\x9b\x01\xb8\x02\x81"
  "\x89\x02\x9a\x01\xb6\x02\x81\x83\x02\x99\x01\xb4\x02\x81\x8b\x02"
  "\x98\x01\xb2\x02\xff\xff\x03\x97\x01\xb0\x02\x81\x8b\x02\x96\x01"
  "\xae\x02\x81\x8b\x02\x95\x01\xac\x02\x81\x81\x02\x94\x01\xaa\x02"
  "\x81\xa5\x02\x93\x01\xa8\x02\x81\xa1\x02\x92\x01\xa6\x02\x81\x81"
  "\x02\x91\x01\xa4\x02\x81\x83\x02\x90\x01\xa2\x02\x81\x8d\x02\x8f"
  "\x01\xa0\x02\x81\x8d\x02\x8e\x01\x9e\x02\x81\x87\x02\x8d\x01\x9c"
  "\x02\x81\x85\x02\x8c\x01\x9a\x02\x81\x85\x02\x8b\x01\x98\x02\x81"
  "\x89\x02\x8a\x01\x96\x02\x81\x8b\x02\x89\x01\x94\x02\x81\x83\x02"
  "\x88\x01\x92\x02\x81\x83\x02\x87\x01\x90\x02\x81\x81\x02\x86\x01"
  "\x8e\x02\x81\xa3\x02\x85\x01\x8c\x02\x81\xa3\x02\x84\x01\x8a\x02"
  "\x81\xa1\x02\x83\x01\x88\x02\x81\x87\x02\x82\x01\x86\x02\x81\xa3"
  "\x02\x81\x01\x84\x02\x81\x81\x02\x80\x01\x82\x02\x81\x89\x02\x7f"
  "\x80\x02\x81\x89\x02\x7e\xfe\x01\x81\x85\x02\x7d\xfc\x01\x81\x89"
  "\x02\x7c\xfa\x01\x81\x81\x02\x7b\xf8\x01\x81\x87\x02\x7a\xf6\x01"
  "\x81\x87\x02\x79\xf4\x01\x81\x87\x02\x78\xf2\x01\x81\x87\x02\x77"
  "\xf0\x01\x81\x83\x02\x76\xee\x01\x81\x87\x02\x75\xec\x01\x81\x87"
  "\x02\x74\xea\x01\x81\x87\x02\x73\xe8\x01\x81\x87\x02\x72\xe6\x01"
  "\x81\x87\x02\x71\xe4\x01\x81\x87\x02\x70\xe2\x01\x81\x87\x02\x6f"
  "\xe0\x01\x81\x83\x02\x6e\xde\x01\x81\xa5\x02\x6d\xdc\x01\x81\xa3"
  "\x02\x6c\xda\x01\x81\x85\x02\x6b\xd8\x01\x81\x85\x02\x6a\xd6\x01"
  "\x81\x81\x02\x69\xd4\x01\x81\x85\x02\x68\xd2\x01\x81\x81\x02\x67"
  "\xd0\x01\x81\xa1\x02\x66\xce\x01\x81\x81\x02\x65\xcc\x01\x81\x85"
  "\x02\x64\xca\x01\x81\xa5\x02\x63\xc8\x01\x81\xa1\x02\x62\xc6\x01"
  "\x81\x81\x02\x61\xc4\x01\x81\xa3\x02\x60\xc2\x01\x81\xa1\x02\x5f"
  "\xc0\x01\x81\x83\x02\x5e\xbe\x01\x81\x81\x02\x5d\xbc\x01\x81\xa7"
  "\x02\x5c\xba\x01\x81\xa1\x02\x5b\xb8\x01\x81\x89\x02\x5a\xb6\x01"
  "\x81\x87\x02\x59\xb4\x01\x81\x85\x02\x58\xb2\x01\x81\x81\x02\x57"
  "\xb0\x01\x81\xa1\x02\x56\xae\x01\x81\x89\x02\x55\xac\x01\x81\xa3"
  "\x02\x54\xaa\x01\x81\xa1\x02\x53\xa8\x01\x81\x87\x02\x52\xa6\x01"
  "\x81\xa5\x02\x51\xa4\x01\x81\xa1\x02\x50\xa2\x01\x81\x8f\x02\x4f"
  "\xa0\x01\x81\x89\x02\x4e\x9e\x01\x81\x8b\x02\x4d\x9c\x01\x83\x04"
  "\x4c\x9a\x01\x81\x85\x02\x4b\x98\x01\x81\x83\x02\x4a\x96\x01\x81"
  "\xa1\x02\x49\x94\x01\x81\x8b\x02\x48\x92\x01\x81\x8b\x02\x47\x90"
  "\x01\x81\x8f\x02\x46\x8e\x01\x81\x8d\x02\x45\x8c\x01\x81\x8b\x02"
  "\x44\x8a\x01\x81\x89\x02\x43\x88\x01\x83\x04\x42\x86\x01\x81\x87"
  "\x02\x41\x84\x01\x81\x85\x02\x40\x82\x01\x81\x83\x02\x3f\x80\x01"
  "\x81\xa1\x02\x3e\x7e\x81\x95\x02\x3d\x7c\x81\x89\x02\x3c\x7a\x81"
  "\x89\x02\x3b\x78\x81\x89\x02\x3a\x76\x81\x8d\x02\x39\x74\x81\x8b"
  "\x02\x38\x72\x81\x87\x02\x37\x70\x81\x85\x02\x36\x6e\x84\x06\x35"
  "\x6c\x81\x87\x02\x34\x6a\x81\x85\x02\x33\x68\x81\xa1\x02\x32\x66"
  "\x81\x89\x02\x31\x64\x81\x89\x02\x30\x62\x81\x89\x02\x2f\x60\x81"
  "\x89\x02\x2e\x5e\x81\x89\x02\x2d\x5c\x81\x83\x02\x2c\x5a\x81\x89"
  "\x02\x2b\x58\x81\x87\x02\x2a\x56\x81\x85\x02\x29\x54\x81\x8d\x02"
  "\x28\x52\x81\x8d\x02\x27\x50\x81\x8d\x02\x26\x4e\x81\x8b\x02\x25"
  "\x4c\x81\x87\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x89\x02\x22\x46"
  "\x81\xa3\x02\x21\x44\x81\x87\x02\x20\x42\x81\xa1\x02\x1f\x40\x81"
  "\x83\x02\x1e\x3e\x81\x87\x02\x1d\x3c\xff\x03\x1c\x3a\x81\x87\x02"
  "\x1b\x38\x81\x87\x02\x1a\x36\x81\x85\x02\x19\x34\x81\x8b\x02\x18"
  "\x32\x81\xa1\x02\x17\x30\x81\x85\x02\x16\x2e\x81\x83\x02\x15\x2c"
  "\x81\x87\x02\x14\x2a\x81\x87\x02\x13\x28\x81\x87\x02\x12\x26\x81"
  "\x89\x02\x11\x24\x81\x85\x02\x10\x22\x81\x85\x02\x0f\x20\x81\x85"
  "\x02\x0e\x1e\x81\xa1\x02\x0d\x1c\x81\xa1\x02\x0c\x1a\x81\x89\x02"
  "\x0b\x18\x81\x83\x02\x0a\x16\x81\x85\x02\x09\x14\x81\x85\x02\x08"
  "\x12\x81\x83\x02\x07\x10\x81\x89\x02\x06\x0e\x81\x83\x02\x05\x0c"
  "\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x83\x02\x02\x06\x81"
  "\x83\x02\x01\x04\x81\x83\x02\xdd\x03\x99\x05";

SCHEME_OBJECT *
make_so_data_e758a4c06b652970 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_make_so_data_e758a4c06b652970 [0]))), (sizeof (prog_make_so_data_e758a4c06b652970)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_272]));
}

DECLARE_COMPILED_DATA_NS ("make.so", make_so_data_e758a4c06b652970)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("make.so", "9d54a83d87fc6c21")
