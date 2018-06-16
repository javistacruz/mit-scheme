/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:43-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define TAG_1_6 1
#define LABEL_1_7 7
#define LABEL_1_10 9
#define LABEL_1_11 11
#define LABEL_1_9 13
#define LABEL_1_13 15
#define LABEL_1_14 17
#define LABEL_1_15 19
#define LABEL_1_17 21
#define LABEL_1_18 23
#define TAG_1_19 10
#define LABEL_1_23 25
#define LABEL_1_25 27
#define LABEL_1_27 29
#define ENVIRONMENT_LABEL_1_3 54
#define DEBUGGING_LABEL_1_2 53
#define OBJECT_1_3 52
#define OBJECT_1_2 51
#define OBJECT_1_1 50
#define OBJECT_1_0 49
#define EXECUTE_CACHE_1_28 31
#define EXECUTE_CACHE_1_26 33
#define EXECUTE_CACHE_1_24 35
#define EXECUTE_CACHE_1_22 37
#define EXECUTE_CACHE_1_21 39
#define EXECUTE_CACHE_1_20 41
#define EXECUTE_CACHE_1_16 43
#define EXECUTE_CACHE_1_12 45
#define EXECUTE_CACHE_1_8 47
#define FREE_REFERENCES_LABEL_1_0 30
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_1_4);
      goto transformer_keyword_16;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_22;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_10);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_1_14);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_1_15);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_1_17);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_1_18);
      goto lambda_23;

    case 11:
      current_block = (Rpc - LABEL_1_23);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_1_25);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_1_27);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transformer_keyword_21)
DEFLABEL (transformer_keyword_16)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_1_5);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_27;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_26)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_25;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_21]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_18])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_20]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_1_17);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_22]));

DEFLABEL (label_25)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 1);

DEFLABEL (label_18)
  (Wrd9.Obj) = Rvl;
  goto label_26;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_1_18);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_24]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_26]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_1_25);
  (Wrd9.Obj) = (current_block [OBJECT_1_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_27]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_1_27);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_28]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_8 7
#define LABEL_2_9 9
#define LABEL_2_10 11
#define LABEL_2_11 13
#define LABEL_2_7 15
#define LABEL_2_13 17
#define ENVIRONMENT_LABEL_2_3 29
#define DEBUGGING_LABEL_2_2 28
#define OBJECT_2_2 27
#define OBJECT_2_1 26
#define OBJECT_2_0 25
#define EXECUTE_CACHE_2_14 19
#define EXECUTE_CACHE_2_12 21
#define EXECUTE_CACHE_2_6 23
#define FREE_REFERENCES_LABEL_2_0 18
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_2_4);
      goto compiler_lambda_7;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto lambda_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_lambda_14)
DEFLABEL (compiler_lambda_7)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_22)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_21;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_20)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_19;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_18)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_17;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_7);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_17)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_11)
  (Wrd25.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 1);

DEFLABEL (label_9)
  (Wrd9.Obj) = Rvl;
  goto label_22;

DEFLABEL (lambda_15)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_2_13);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_10 7
#define LABEL_3_11 9
#define LABEL_3_12 11
#define LABEL_3_13 13
#define LABEL_3_14 15
#define LABEL_3_7 17
#define TAG_3_8 7
#define LABEL_3_17 19
#define LABEL_3_18 21
#define LABEL_3_19 23
#define LABEL_3_9 25
#define LABEL_3_16 27
#define ENVIRONMENT_LABEL_3_3 41
#define DEBUGGING_LABEL_3_2 40
#define OBJECT_3_2 39
#define OBJECT_3_1 38
#define OBJECT_3_0 37
#define EXECUTE_CACHE_3_21 29
#define EXECUTE_CACHE_3_20 31
#define EXECUTE_CACHE_3_15 33
#define EXECUTE_CACHE_3_6 35
#define FREE_REFERENCES_LABEL_3_0 28
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_3_4);
      goto compiler_named_lambda_12;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_3_10);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_3_11);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_3_12);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_3_13);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_3_14);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_3_7);
      goto lambda_24;

    case 8:
      current_block = (Rpc - LABEL_3_17);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_3_18);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_3_19);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_3_16);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_named_lambda_23)
DEFLABEL (compiler_named_lambda_12)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_34;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_33)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_32;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_31)
  (Wrd32.Obj) = (Rsp [4]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_30;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_29)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_28;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd38.Obj) = ((Wrd39.pObj) [0]);

DEFLABEL (label_27)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_26;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [1]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_26)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_17)
  (Wrd38.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_16)
  (Wrd29.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_14)
  (Wrd13.Obj) = Rvl;
  goto label_33;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_3_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_40;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_39)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_38;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_37)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_36;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_16);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (label_36)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_19]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 1);

DEFLABEL (label_20)
  (Wrd23.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 1);

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define TAG_4_9 3
#define LABEL_4_11 11
#define LABEL_4_12 13
#define LABEL_4_15 15
#define TAG_4_16 6
#define ENVIRONMENT_LABEL_4_3 28
#define DEBUGGING_LABEL_4_2 27
#define EXECUTE_CACHE_4_17 17
#define EXECUTE_CACHE_4_14 19
#define EXECUTE_CACHE_4_13 21
#define EXECUTE_CACHE_4_10 23
#define EXECUTE_CACHE_4_6 25
#define FREE_REFERENCES_LABEL_4_0 16
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_4_4);
      goto compile_lambda_9;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto lambda_13;

    case 4:
      current_block = (Rpc - LABEL_4_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_4_15);
      goto lambda_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_lambda_12)
DEFLABEL (compile_lambda_9)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_8])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_11);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_15])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_4_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_14]));

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_4_15);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define ENVIRONMENT_LABEL_5_3 16
#define DEBUGGING_LABEL_5_2 15
#define OBJECT_5_1 14
#define OBJECT_5_0 13
#define EXECUTE_CACHE_5_8 9
#define EXECUTE_CACHE_5_6 11
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_5_4);
      goto classifier_begin_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classifier_begin_6)
DEFLABEL (classifier_begin_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_8;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_8]));

DEFLABEL (label_8)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 1);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_8 7
#define LABEL_6_9 9
#define LABEL_6_7 11
#define LABEL_6_12 13
#define LABEL_6_13 15
#define LABEL_6_14 17
#define LABEL_6_15 19
#define LABEL_6_16 21
#define LABEL_6_17 23
#define LABEL_6_18 25
#define LABEL_6_11 27
#define LABEL_6_21 29
#define LABEL_6_22 31
#define LABEL_6_23 33
#define LABEL_6_20 35
#define ENVIRONMENT_LABEL_6_3 49
#define DEBUGGING_LABEL_6_2 48
#define OBJECT_6_2 47
#define OBJECT_6_1 46
#define OBJECT_6_0 45
#define EXECUTE_CACHE_6_24 37
#define EXECUTE_CACHE_6_19 39
#define EXECUTE_CACHE_6_10 41
#define EXECUTE_CACHE_6_6 43
#define FREE_REFERENCES_LABEL_6_0 36
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd62;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_6_4);
      goto compiler_if_17;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_6_12);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_6_13);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_6_14);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_6_15);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_6_16);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_6_17);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_6_18);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_6_21);
      goto label_28;

    case 14:
      current_block = (Rpc - LABEL_6_22);
      goto label_29;

    case 15:
      current_block = (Rpc - LABEL_6_23);
      goto label_30;

    case 16:
      current_block = (Rpc - LABEL_6_20);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_if_32)
DEFLABEL (compiler_if_17)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_57;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_56)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_55;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_54)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_53;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_52)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_51;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_50)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_49;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd24.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_48)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd31.uLng) == 1)
    goto label_39;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_38;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_37)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_36;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_35)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_34;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_20);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_24]));

DEFLABEL (label_34)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_29)
  (Wrd18.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_28)
  (Wrd9.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd32.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_47;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_46)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_45;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd42.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_44)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_43;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd49.Obj) = ((Wrd50.pObj) [1]);

DEFLABEL (label_42)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_41;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_40)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (label_41)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_26)
  (Wrd49.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_25)
  (Wrd42.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_24)
  (Wrd33.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_23)
  (Wrd24.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_22)
  (Wrd17.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_21)
  (Wrd8.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 1);

DEFLABEL (label_19)
  (Wrd9.Obj) = Rvl;
  goto label_56;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_8 7
#define LABEL_7_9 9
#define LABEL_7_7 11
#define ENVIRONMENT_LABEL_7_3 23
#define DEBUGGING_LABEL_7_2 22
#define OBJECT_7_2 21
#define OBJECT_7_1 20
#define OBJECT_7_0 19
#define EXECUTE_CACHE_7_11 13
#define EXECUTE_CACHE_7_10 15
#define EXECUTE_CACHE_7_6 17
#define FREE_REFERENCES_LABEL_7_0 12
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_7_4);
      goto compiler_quote_4;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_quote_9)
DEFLABEL (compiler_quote_4)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_13;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_12)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_11;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (label_11)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_10 7
#define LABEL_8_11 9
#define LABEL_8_7 11
#define TAG_8_8 4
#define LABEL_8_14 13
#define LABEL_8_15 15
#define LABEL_8_16 17
#define LABEL_8_17 19
#define LABEL_8_18 21
#define LABEL_8_9 23
#define LABEL_8_13 25
#define LABEL_8_22 27
#define ENVIRONMENT_LABEL_8_3 47
#define DEBUGGING_LABEL_8_2 46
#define OBJECT_8_2 45
#define OBJECT_8_1 44
#define OBJECT_8_0 43
#define EXECUTE_CACHE_8_24 29
#define EXECUTE_CACHE_8_23 31
#define EXECUTE_CACHE_8_21 33
#define EXECUTE_CACHE_8_20 35
#define EXECUTE_CACHE_8_19 37
#define EXECUTE_CACHE_8_12 39
#define EXECUTE_CACHE_8_6 41
#define FREE_REFERENCES_LABEL_8_0 28
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd62;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd6;
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
      goto compiler_setB_14;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_10);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_8_11);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_8_7);
      goto lambda_25;

    case 5:
      current_block = (Rpc - LABEL_8_14);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_8_15);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_8_16);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_8_17);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_8_18);
      goto label_22;

    case 10:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_8_13);
      goto continuation_4;

    case 12:
      current_block = (Rpc - LABEL_8_22);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_setB_24)
DEFLABEL (compiler_setB_14)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_7])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_29;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_28)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_27;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_27)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_16)
  (Wrd15.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_8_7);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_41;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_40)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_39;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_38)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd30.uLng) == 1)
    goto label_31;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_30;
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_21]));

DEFLABEL (label_30)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_23]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8_22);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_24]));

DEFLABEL (label_31)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd41.Obj) = ((Wrd32.pObj) [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_37;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd34.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_36)
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_35;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd49.Obj) = ((Wrd50.pObj) [1]);

DEFLABEL (label_34)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_33;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (* (--Rsp)) = (Wrd57.Obj);

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_19]));

DEFLABEL (label_33)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_21)
  (Wrd49.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_20)
  (Wrd34.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_19)
  (Wrd23.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_18)
  (Wrd8.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_11 9
#define LABEL_9_9 11
#define LABEL_9_13 13
#define TAG_9_14 5
#define LABEL_9_16 15
#define LABEL_9_18 17
#define LABEL_9_20 19
#define TAG_9_21 8
#define ENVIRONMENT_LABEL_9_3 37
#define DEBUGGING_LABEL_9_2 36
#define OBJECT_9_0 35
#define EXECUTE_CACHE_9_19 21
#define EXECUTE_CACHE_9_17 23
#define EXECUTE_CACHE_9_15 25
#define EXECUTE_CACHE_9_12 27
#define EXECUTE_CACHE_9_10 29
#define EXECUTE_CACHE_9_8 31
#define EXECUTE_CACHE_9_6 33
#define FREE_REFERENCES_LABEL_9_0 20
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_9_4);
      goto classify_location_11;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_9_13);
      goto lambda_15;

    case 6:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_9_18);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_9_20);
      goto lambda_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classify_location_14)
DEFLABEL (classify_location_11)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (label_18)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_16);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_18);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_20])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_9_13);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_9_20);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_8 7
#define LABEL_10_9 9
#define LABEL_10_7 11
#define ENVIRONMENT_LABEL_10_3 23
#define DEBUGGING_LABEL_10_2 22
#define OBJECT_10_2 21
#define OBJECT_10_1 20
#define OBJECT_10_0 19
#define EXECUTE_CACHE_10_11 13
#define EXECUTE_CACHE_10_10 15
#define EXECUTE_CACHE_10_6 17
#define FREE_REFERENCES_LABEL_10_0 12
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_10_4);
      goto compiler_delay_4;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_delay_9)
DEFLABEL (compiler_delay_4)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_13;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_12)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_11;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (label_11)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 12
#define DEBUGGING_LABEL_11_2 11
#define EXECUTE_CACHE_11_6 7
#define FREE_REFERENCE_11_0 10
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_11_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_6;
  Wrd9 = Wrd13;

DEFLABEL (label_5)
  (Rsp [3]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd10.pObj));

DEFLABEL (label_2)
  (Wrd9.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define ENVIRONMENT_LABEL_12_3 17
#define DEBUGGING_LABEL_12_2 16
#define OBJECT_12_0 15
#define EXECUTE_CACHE_12_8 9
#define EXECUTE_CACHE_12_6 11
#define FREE_REFERENCE_12_0 14
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_12_4);
      goto classifier_define_syntax_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classifier_define_syntax_5)
DEFLABEL (classifier_define_syntax_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;
  Wrd9 = Wrd13;

DEFLABEL (label_6)
  (Rsp [3]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_7])), (Wrd10.pObj));

DEFLABEL (label_3)
  (Wrd9.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_7 5
#define LABEL_13_5 7
#define LABEL_13_11 9
#define LABEL_13_12 11
#define LABEL_13_13 13
#define LABEL_13_10 15
#define LABEL_13_15 17
#define LABEL_13_16 19
#define LABEL_13_8 21
#define LABEL_13_17 23
#define LABEL_13_18 25
#define ENVIRONMENT_LABEL_13_3 38
#define DEBUGGING_LABEL_13_2 37
#define OBJECT_13_1 36
#define OBJECT_13_0 35
#define EXECUTE_CACHE_13_19 27
#define EXECUTE_CACHE_13_14 29
#define EXECUTE_CACHE_13_9 31
#define EXECUTE_CACHE_13_6 33
#define FREE_REFERENCES_LABEL_13_0 26
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd39;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_13_4);
      goto classify_define_11;

    case 1:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_13_11);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_13_12);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_13_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_13_15);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_13_16);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_13_17);
      goto label_18;

    case 11:
      current_block = (Rpc - LABEL_13_18);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classify_define_21)
DEFLABEL (classify_define_11)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_36;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_35)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_34;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_33)
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_7);

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_31;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_30)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_29;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd20.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_28)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_27;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_25;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_24)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_23;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_22)
  (Rsp [3]) = (Wrd15.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd23.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd23.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_23)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_17)
  (Wrd15.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_16)
  (Wrd6.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_14)
  (Wrd20.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_13)
  (Wrd11.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_34)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_7 5
#define LABEL_14_5 7
#define LABEL_14_9 9
#define LABEL_14_13 11
#define LABEL_14_11 13
#define LABEL_14_14 15
#define ENVIRONMENT_LABEL_14_3 35
#define DEBUGGING_LABEL_14_2 34
#define OBJECT_14_0 33
#define EXECUTE_CACHE_14_18 17
#define EXECUTE_CACHE_14_17 19
#define EXECUTE_CACHE_14_16 21
#define EXECUTE_CACHE_14_15 23
#define EXECUTE_CACHE_14_12 25
#define EXECUTE_CACHE_14_10 27
#define EXECUTE_CACHE_14_8 29
#define EXECUTE_CACHE_14_6 31
#define FREE_REFERENCES_LABEL_14_0 16
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_14_4);
      goto syntactic_binding_theory_6;

    case 1:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_14_13);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_14_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_14_14);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (syntactic_binding_theory_9)
DEFLABEL (syntactic_binding_theory_6)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_10)
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_14);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_18]));

DEFLABEL (label_13)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_7);
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_7 5
#define LABEL_15_5 7
#define LABEL_15_8 9
#define ENVIRONMENT_LABEL_15_3 21
#define DEBUGGING_LABEL_15_2 20
#define OBJECT_15_0 19
#define EXECUTE_CACHE_15_11 11
#define EXECUTE_CACHE_15_10 13
#define EXECUTE_CACHE_15_9 15
#define EXECUTE_CACHE_15_6 17
#define FREE_REFERENCES_LABEL_15_0 10
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_15_4);
      goto variable_binding_theory_3;

    case 1:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (variable_binding_theory_6)
DEFLABEL (variable_binding_theory_3)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_7);

DEFLABEL (label_7)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_8 9
#define LABEL_16_9 11
#define ENVIRONMENT_LABEL_16_3 21
#define DEBUGGING_LABEL_16_2 20
#define EXECUTE_CACHE_16_10 13
#define EXECUTE_CACHE_16_6 15
#define FREE_REFERENCE_16_1 18
#define FREE_REFERENCE_16_0 19
#define FREE_REFERENCES_LABEL_16_0 12
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_16_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_13;
  Wrd8 = Wrd12;

DEFLABEL (label_12)
  (Rsp [5]) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_11;
  Wrd16 = Wrd20;

DEFLABEL (label_10)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_9])), (Wrd17.pObj));

DEFLABEL (label_7)
  (Wrd16.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_8])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_7 7
#define LABEL_17_9 9
#define LABEL_17_10 11
#define LABEL_17_11 13
#define ENVIRONMENT_LABEL_17_3 26
#define DEBUGGING_LABEL_17_2 25
#define OBJECT_17_0 24
#define EXECUTE_CACHE_17_12 15
#define EXECUTE_CACHE_17_8 17
#define EXECUTE_CACHE_17_6 19
#define FREE_REFERENCE_17_1 22
#define FREE_REFERENCE_17_0 23
#define FREE_REFERENCES_LABEL_17_0 14
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_17_4);
      goto classifier_let_syntax_5;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_17_10);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_17_11);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classifier_let_syntax_10)
DEFLABEL (classifier_let_syntax_5)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_14;
  Wrd8 = Wrd12;

DEFLABEL (label_13)
  (Rsp [5]) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_12;
  Wrd16 = Wrd20;

DEFLABEL (label_11)
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_11])), (Wrd17.pObj));

DEFLABEL (label_8)
  (Wrd16.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_10])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define LABEL_18_9 9
#define LABEL_18_11 11
#define LABEL_18_12 13
#define LABEL_18_10 15
#define LABEL_18_15 17
#define LABEL_18_16 19
#define LABEL_18_13 21
#define LABEL_18_18 23
#define TAG_18_19 10
#define LABEL_18_21 25
#define ENVIRONMENT_LABEL_18_3 46
#define DEBUGGING_LABEL_18_2 45
#define OBJECT_18_2 44
#define OBJECT_18_1 43
#define OBJECT_18_0 42
#define EXECUTE_CACHE_18_22 27
#define EXECUTE_CACHE_18_20 29
#define EXECUTE_CACHE_18_17 31
#define EXECUTE_CACHE_18_14 33
#define EXECUTE_CACHE_18_8 35
#define EXECUTE_CACHE_18_6 37
#define FREE_REFERENCE_18_1 40
#define FREE_REFERENCE_18_0 41
#define FREE_REFERENCES_LABEL_18_0 26
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_18_4);
      goto classifier_letrec_syntax_13;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_18_11);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_18_12);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_18_10);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_18_15);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_18_16);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_18_13);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_18_18);
      goto lambda_22;

    case 11:
      current_block = (Rpc - LABEL_18_21);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classifier_letrec_syntax_21)
DEFLABEL (classifier_letrec_syntax_13)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_30;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_29)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_28;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_27)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_13);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_18])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [4]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_18_10);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_26;
  Wrd8 = Wrd12;

DEFLABEL (label_25)
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_24;
  Wrd15 = Wrd19;

DEFLABEL (label_23)
  (Rsp [5]) = (Wrd15.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_17]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_16])), (Wrd16.pObj));

DEFLABEL (label_18)
  (Wrd15.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_15])), (Wrd9.pObj));

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 1);

DEFLABEL (label_15)
  (Wrd8.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_18_18);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_32;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_31)
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd20.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_22]));

DEFLABEL (label_32)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_21]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 1);

DEFLABEL (label_19)
  (Wrd11.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_8 5
#define LABEL_19_9 7
#define LABEL_19_5 9
#define LABEL_19_14 11
#define LABEL_19_15 13
#define LABEL_19_6 15
#define LABEL_19_17 17
#define LABEL_19_7 19
#define LABEL_19_19 21
#define LABEL_19_20 23
#define LABEL_19_10 25
#define TAG_19_11 11
#define LABEL_19_24 27
#define LABEL_19_25 29
#define LABEL_19_13 31
#define LABEL_19_27 33
#define LABEL_19_29 35
#define LABEL_19_21 37
#define TAG_19_22 17
#define LABEL_19_30 39
#define LABEL_19_28 41
#define LABEL_19_32 43
#define LABEL_19_31 45
#define LABEL_19_33 47
#define TAG_19_34 22
#define LABEL_19_37 49
#define LABEL_19_36 51
#define LABEL_19_38 53
#define ENVIRONMENT_LABEL_19_3 78
#define DEBUGGING_LABEL_19_2 77
#define OBJECT_19_1 76
#define OBJECT_19_0 75
#define EXECUTE_CACHE_19_39 55
#define EXECUTE_CACHE_19_35 57
#define EXECUTE_CACHE_19_26 59
#define EXECUTE_CACHE_19_18 61
#define EXECUTE_CACHE_19_16 63
#define EXECUTE_CACHE_19_23 65
#define EXECUTE_CACHE_19_12 67
#define FREE_REFERENCE_19_4 70
#define FREE_REFERENCE_19_3 71
#define FREE_REFERENCE_19_2 72
#define FREE_REFERENCE_19_1 73
#define FREE_REFERENCE_19_0 74
#define FREE_REFERENCES_LABEL_19_0 54
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_19_4);
      goto classify_let_like_25;

    case 1:
      current_block = (Rpc - LABEL_19_8);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_19_9);
      goto label_28;

    case 3:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_11;

    case 4:
      current_block = (Rpc - LABEL_19_14);
      goto label_29;

    case 5:
      current_block = (Rpc - LABEL_19_15);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_19_17);
      goto label_31;

    case 8:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_19_19);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_19_20);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_19_10);
      goto lambda_43;

    case 12:
      current_block = (Rpc - LABEL_19_24);
      goto label_34;

    case 13:
      current_block = (Rpc - LABEL_19_25);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_19_13);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_19_27);
      goto label_36;

    case 16:
      current_block = (Rpc - LABEL_19_29);
      goto label_37;

    case 17:
      current_block = (Rpc - LABEL_19_21);
      goto lambda_44;

    case 18:
      current_block = (Rpc - LABEL_19_30);
      goto label_38;

    case 19:
      current_block = (Rpc - LABEL_19_28);
      goto continuation_17;

    case 20:
      current_block = (Rpc - LABEL_19_32);
      goto label_39;

    case 21:
      current_block = (Rpc - LABEL_19_31);
      goto continuation_16;

    case 22:
      current_block = (Rpc - LABEL_19_33);
      goto lambda_45;

    case 23:
      current_block = (Rpc - LABEL_19_37);
      goto label_40;

    case 24:
      current_block = (Rpc - LABEL_19_36);
      goto continuation_19;

    case 25:
      current_block = (Rpc - LABEL_19_38);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classify_let_like_42)
DEFLABEL (classify_let_like_25)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_66;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_65)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_64;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_63)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_10])));
  Rhp += 1;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd31.pObj)));
  Wrd32 = Wrd31;
  (Wrd33.Obj) = (Rsp [5]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_62;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_61)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_60;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_59)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_21])));
  Rhp += 2;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd25 = Wrd22;
  (Wrd26.Obj) = (Rsp [8]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [6]);
  ((Wrd25.pObj) [3]) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_58;
  Wrd5 = Wrd9;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_56;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_55)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_54;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_53)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_19_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_52;
  Wrd6 = Wrd10;

DEFLABEL (label_51)
  (Wrd12.Obj) = (Rsp [6]);
  if (! ((Wrd12.Obj) == (Wrd6.Obj)))
    goto label_46;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_28]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_50;
  Wrd17 = Wrd21;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_19_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_3]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_48;
  Wrd9 = Wrd13;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_19_31);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_33])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [9]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  ((Wrd14.pObj) [5]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Rsp [7]) = (Wrd6.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_35]));

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_32])), (Wrd10.pObj));

DEFLABEL (label_39)
  (Wrd9.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_29])), (Wrd18.pObj));

DEFLABEL (label_37)
  (Wrd17.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_27])), (Wrd7.pObj));

DEFLABEL (label_36)
  (Wrd6.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_29)
  (Wrd10.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_17])), (Wrd6.pObj));

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_27)
  (Wrd14.Obj) = Rvl;
  goto label_65;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_19_10);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_70;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_69)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_68;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_67)
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd24.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_26]));

DEFLABEL (label_68)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_25]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_35)
  (Wrd17.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_24]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_34)
  (Wrd8.Obj) = Rvl;
  goto label_69;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_19_21);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_72;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_71)
  (Rsp [2]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_72)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_30]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 1);

DEFLABEL (label_38)
  (Wrd11.Obj) = Rvl;
  goto label_71;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_19_33);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_74;
  Wrd11 = Wrd15;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_19_36);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_38]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_39]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_19_38);
  (Rsp [3]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_37])), (Wrd12.pObj));

DEFLABEL (label_40)
  (Wrd11.Obj) = Rvl;
  goto label_73;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_8 9
#define LABEL_20_11 11
#define LABEL_20_10 13
#define LABEL_20_13 15
#define ENVIRONMENT_LABEL_20_3 30
#define DEBUGGING_LABEL_20_2 29
#define EXECUTE_CACHE_20_15 17
#define EXECUTE_CACHE_20_14 19
#define EXECUTE_CACHE_20_12 21
#define EXECUTE_CACHE_20_9 23
#define EXECUTE_CACHE_20_7 25
#define FREE_REFERENCE_20_0 28
#define FREE_REFERENCES_LABEL_20_0 16
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_20_4);
      goto compile_body_item_5;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_20_8);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_20_11);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_20_13);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_body_item_9)
DEFLABEL (compile_body_item_5)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_10)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_20_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_12;
  Wrd9 = Wrd13;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_10);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_13);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_15]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_11])), (Wrd10.pObj));

DEFLABEL (label_7)
  (Wrd9.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define LABEL_21_8 9
#define LABEL_21_9 11
#define LABEL_21_11 13
#define LABEL_21_10 15
#define LABEL_21_13 17
#define LABEL_21_15 19
#define LABEL_21_14 21
#define ENVIRONMENT_LABEL_21_3 33
#define DEBUGGING_LABEL_21_2 32
#define OBJECT_21_2 31
#define OBJECT_21_1 30
#define OBJECT_21_0 29
#define EXECUTE_CACHE_21_16 23
#define EXECUTE_CACHE_21_12 25
#define EXECUTE_CACHE_21_6 27
#define FREE_REFERENCES_LABEL_21_0 22
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_21_4);
      goto compiler_or_14;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto loop_12;

    case 5:
      current_block = (Rpc - LABEL_21_11);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_21_13);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_21_15);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_21_14);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_or_22)
DEFLABEL (compiler_or_14)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_28;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_27)
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_24;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_26;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_25)
  Rdl = (& (Rsp [4]));
  goto loop_12;

DEFLABEL (label_26)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_27;

DEFLABEL (loop_23)
DEFLABEL (loop_12)
  DLINK_INTERRUPT_CHECK (25, LABEL_21_9);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_35;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_33;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_32)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd20.uLng) == 1)
    goto label_29;
  Rvl = (Rsp [0]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_29)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_31;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_30)
  Rdl = (& (Rsp [2]));
  goto loop_12;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_21_14);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_16]));

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_20)
  (Wrd36.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd36.Obj));
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_19)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_18)
  (Wrd18.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd18.Obj));
  (* (--Rsp)) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_6 5
#define LABEL_22_7 7
#define LABEL_22_8 9
#define LABEL_22_5 11
#define LABEL_22_10 13
#define LABEL_22_11 15
#define ENVIRONMENT_LABEL_22_3 24
#define DEBUGGING_LABEL_22_2 23
#define OBJECT_22_1 22
#define OBJECT_22_0 21
#define EXECUTE_CACHE_22_12 17
#define EXECUTE_CACHE_22_9 19
#define FREE_REFERENCES_LABEL_22_0 16
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_22_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_22_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_22_10);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_22_11);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_14)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_23)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_22;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_21)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_20;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_18;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_17)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_16;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_15)
  (Rsp [1]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (label_16)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 1);

DEFLABEL (label_12)
  (Wrd15.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_9)
  (Wrd18.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_8)
  (Wrd9.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define LABEL_23_8 9
#define ENVIRONMENT_LABEL_23_3 20
#define DEBUGGING_LABEL_23_2 19
#define EXECUTE_CACHE_23_11 11
#define EXECUTE_CACHE_23_10 13
#define EXECUTE_CACHE_23_9 15
#define EXECUTE_CACHE_23_6 17
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_23_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_9 7
#define LABEL_24_7 9
#define ENVIRONMENT_LABEL_24_3 22
#define DEBUGGING_LABEL_24_2 21
#define OBJECT_24_1 20
#define OBJECT_24_0 19
#define EXECUTE_CACHE_24_11 11
#define EXECUTE_CACHE_24_10 13
#define EXECUTE_CACHE_24_8 15
#define EXECUTE_CACHE_24_6 17
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_24_4);
      goto compiler_the_environment_3;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_the_environment_6)
DEFLABEL (compiler_the_environment_3)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (label_8)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_9);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 8
#define DEBUGGING_LABEL_25_2 7
#define EXECUTE_CACHE_25_5 5
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 8
#define DEBUGGING_LABEL_26_2 7
#define EXECUTE_CACHE_26_5 5
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define TAG_27_8 2
#define LABEL_27_10 9
#define ENVIRONMENT_LABEL_27_3 20
#define DEBUGGING_LABEL_27_2 19
#define OBJECT_27_1 18
#define OBJECT_27_0 17
#define EXECUTE_CACHE_27_11 11
#define EXECUTE_CACHE_27_9 13
#define EXECUTE_CACHE_27_6 15
#define FREE_REFERENCES_LABEL_27_0 10
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_27_4);
      goto classifier_declare_3;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_27_10);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classifier_declare_7)
DEFLABEL (classifier_declare_3)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_9]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_27_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_10;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_9)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [2]);
  (Rsp [1]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_11]));

DEFLABEL (label_10)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define TAG_28_6 1
#define ENVIRONMENT_LABEL_28_3 12
#define DEBUGGING_LABEL_28_2 11
#define EXECUTE_CACHE_28_8 7
#define EXECUTE_CACHE_28_7 9
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto classify_declarations_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classify_declarations_4)
DEFLABEL (classify_declarations_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_28_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define TAG_29_6 1
#define LABEL_29_8 7
#define ENVIRONMENT_LABEL_29_3 16
#define DEBUGGING_LABEL_29_2 15
#define EXECUTE_CACHE_29_10 9
#define EXECUTE_CACHE_29_9 11
#define EXECUTE_CACHE_29_7 13
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_29_4);
      goto classify_declaration_2;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classify_declaration_5)
DEFLABEL (classify_declaration_2)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_5])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [0]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_29_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_8);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_9 7
#define LABEL_30_7 9
#define ENVIRONMENT_LABEL_30_3 19
#define DEBUGGING_LABEL_30_2 18
#define OBJECT_30_0 17
#define EXECUTE_CACHE_30_10 11
#define EXECUTE_CACHE_30_8 13
#define EXECUTE_CACHE_30_6 15
#define FREE_REFERENCES_LABEL_30_0 10
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
mit_syntax_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_30_4);
      goto classify_variable_reference_4;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (classify_variable_reference_7)
DEFLABEL (classify_variable_reference_4)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_9);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_5 7
#define LABEL_11 9
#define LABEL_6 11
#define LABEL_9 13
#define LABEL_14 15
#define LABEL_10 17
#define LABEL_12 19
#define LABEL_17 21
#define LABEL_13 23
#define LABEL_15 25
#define LABEL_16 27
#define LABEL_18 29
#define LABEL_20 31
#define LABEL_21 33
#define LABEL_23 35
#define LABEL_24 37
#define LABEL_25 39
#define LABEL_26 41
#define LABEL_29 43
#define LABEL_27 45
#define LABEL_28 47
#define LABEL_30 49
#define LABEL_31 51
#define LABEL_36 53
#define LABEL_32 55
#define LABEL_34 57
#define LABEL_40 59
#define LABEL_35 61
#define LABEL_38 63
#define LABEL_44 65
#define LABEL_39 67
#define LABEL_42 69
#define LABEL_48 71
#define LABEL_43 73
#define LABEL_46 75
#define LABEL_47 77
#define LABEL_49 79
#define LABEL_52 81
#define LABEL_50 83
#define LABEL_51 85
#define LABEL_54 87
#define LABEL_55 89
#define LABEL_56 91
#define LABEL_58 93
#define LABEL_59 95
#define LABEL_60 97
#define LABEL_61 99
#define LABEL_62 101
#define ENVIRONMENT_LABEL_3 175
#define DEBUGGING_LABEL_2 174
#define PURIFICATION_ROOT 173
#define OBJECT_43 172
#define OBJECT_42 171
#define OBJECT_41 170
#define OBJECT_40 169
#define OBJECT_39 168
#define OBJECT_38 167
#define OBJECT_37 166
#define OBJECT_36 165
#define OBJECT_35 164
#define OBJECT_34 163
#define OBJECT_33 162
#define OBJECT_32 161
#define OBJECT_31 160
#define OBJECT_30 159
#define OBJECT_29 158
#define OBJECT_28 157
#define OBJECT_27 156
#define OBJECT_26 155
#define OBJECT_25 154
#define OBJECT_24 153
#define OBJECT_23 152
#define OBJECT_22 151
#define OBJECT_21 150
#define OBJECT_20 149
#define OBJECT_19 148
#define OBJECT_18 147
#define OBJECT_17 146
#define OBJECT_16 145
#define OBJECT_15 144
#define OBJECT_14 143
#define OBJECT_13 142
#define OBJECT_12 141
#define OBJECT_11 140
#define OBJECT_10 139
#define OBJECT_9 138
#define OBJECT_8 137
#define OBJECT_7 136
#define OBJECT_6 135
#define OBJECT_5 134
#define OBJECT_4 133
#define OBJECT_3 132
#define OBJECT_2 131
#define OBJECT_1 130
#define OBJECT_0 129
#define EXECUTE_CACHE_57 103
#define EXECUTE_CACHE_53 105
#define EXECUTE_CACHE_45 107
#define EXECUTE_CACHE_41 109
#define EXECUTE_CACHE_37 111
#define EXECUTE_CACHE_33 113
#define EXECUTE_CACHE_22 115
#define EXECUTE_CACHE_8 117
#define FREE_REFERENCE_5 120
#define FREE_REFERENCE_4 121
#define FREE_REFERENCE_3 122
#define FREE_REFERENCE_2 123
#define FREE_REFERENCE_1 124
#define FREE_REFERENCE_0 125
#define GLOBAL_EXECUTE_CACHE_19 127
#define FREE_REFERENCES_LABEL_0 102
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
mit_syntax_so_7b0af6e3a631f91a (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_7);
      goto label_39;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_11);
      goto label_40;

    case 4:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_14);
      goto label_41;

    case 7:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_12);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_17);
      goto label_42;

    case 10:
      current_block = (Rpc - LABEL_13);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_15);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_16);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto continuation_14;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto continuation_13;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto continuation_15;

    case 20:
      current_block = (Rpc - LABEL_29);
      goto label_43;

    case 21:
      current_block = (Rpc - LABEL_27);
      goto continuation_17;

    case 22:
      current_block = (Rpc - LABEL_28);
      goto continuation_16;

    case 23:
      current_block = (Rpc - LABEL_30);
      goto continuation_18;

    case 24:
      current_block = (Rpc - LABEL_31);
      goto continuation_20;

    case 25:
      current_block = (Rpc - LABEL_36);
      goto label_44;

    case 26:
      current_block = (Rpc - LABEL_32);
      goto continuation_19;

    case 27:
      current_block = (Rpc - LABEL_34);
      goto continuation_22;

    case 28:
      current_block = (Rpc - LABEL_40);
      goto label_45;

    case 29:
      current_block = (Rpc - LABEL_35);
      goto continuation_21;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto continuation_24;

    case 31:
      current_block = (Rpc - LABEL_44);
      goto label_46;

    case 32:
      current_block = (Rpc - LABEL_39);
      goto continuation_23;

    case 33:
      current_block = (Rpc - LABEL_42);
      goto continuation_26;

    case 34:
      current_block = (Rpc - LABEL_48);
      goto label_47;

    case 35:
      current_block = (Rpc - LABEL_43);
      goto continuation_25;

    case 36:
      current_block = (Rpc - LABEL_46);
      goto continuation_28;

    case 37:
      current_block = (Rpc - LABEL_47);
      goto continuation_27;

    case 38:
      current_block = (Rpc - LABEL_49);
      goto continuation_30;

    case 39:
      current_block = (Rpc - LABEL_52);
      goto label_48;

    case 40:
      current_block = (Rpc - LABEL_50);
      goto continuation_29;

    case 41:
      current_block = (Rpc - LABEL_51);
      goto continuation_31;

    case 42:
      current_block = (Rpc - LABEL_54);
      goto continuation_32;

    case 43:
      current_block = (Rpc - LABEL_55);
      goto continuation_34;

    case 44:
      current_block = (Rpc - LABEL_56);
      goto continuation_33;

    case 45:
      current_block = (Rpc - LABEL_58);
      goto continuation_36;

    case 46:
      current_block = (Rpc - LABEL_59);
      goto continuation_35;

    case 47:
      current_block = (Rpc - LABEL_60);
      goto label_51;

    case 48:
      current_block = (Rpc - LABEL_61);
      goto label_52;

    case 49:
      current_block = (Rpc - LABEL_62);
      goto expression_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_38)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_61])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_52)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_51)
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
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	1,
	1,
	1,
	2,
	2,
	1,
	1,
	1,
	1,
	1,
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
    if (counter > 30)
      goto label_50;
    blocks = (current_block [OBJECT_43]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_60])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_50)
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
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_72;
  Wrd11 = Wrd15;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_70;
  Wrd11 = Wrd15;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_68;
  Wrd11 = Wrd15;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_66;
  Wrd11 = Wrd15;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_19]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_64;
  Wrd11 = Wrd15;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_19]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_62;
  Wrd12 = Wrd16;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_35);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_60;
  Wrd11 = Wrd15;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_58;
  Wrd12 = Wrd16;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_43);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_56;
  Wrd12 = Wrd16;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_47);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_50);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_54;
  Wrd9 = Wrd13;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_56);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_59);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd5.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_41]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_19]));

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52])), (Wrd10.pObj));

DEFLABEL (label_48)
  (Wrd9.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48])), (Wrd13.pObj));

DEFLABEL (label_47)
  (Wrd12.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44])), (Wrd13.pObj));

DEFLABEL (label_46)
  (Wrd12.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd12.pObj));

DEFLABEL (label_45)
  (Wrd11.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36])), (Wrd13.pObj));

DEFLABEL (label_44)
  (Wrd12.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd12.pObj));

DEFLABEL (label_43)
  (Wrd11.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_42)
  (Wrd11.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd12.pObj));

DEFLABEL (label_41)
  (Wrd11.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_40)
  (Wrd11.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd12.pObj));

DEFLABEL (label_39)
  (Wrd11.Obj) = Rvl;
  goto label_71;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_mit_syntax_so_7b0af6e3a631f91a [30] =
  {
    { "mit_syntax_so_code_1", 14, mit_syntax_so_code_1 },
    { "mit_syntax_so_code_2", 8, mit_syntax_so_code_2 },
    { "mit_syntax_so_code_3", 13, mit_syntax_so_code_3 },
    { "mit_syntax_so_code_4", 7, mit_syntax_so_code_4 },
    { "mit_syntax_so_code_5", 3, mit_syntax_so_code_5 },
    { "mit_syntax_so_code_6", 17, mit_syntax_so_code_6 },
    { "mit_syntax_so_code_7", 5, mit_syntax_so_code_7 },
    { "mit_syntax_so_code_8", 13, mit_syntax_so_code_8 },
    { "mit_syntax_so_code_9", 9, mit_syntax_so_code_9 },
    { "mit_syntax_so_code_10", 5, mit_syntax_so_code_10 },
    { "mit_syntax_so_code_11", 2, mit_syntax_so_code_11 },
    { "mit_syntax_so_code_12", 3, mit_syntax_so_code_12 },
    { "mit_syntax_so_code_13", 12, mit_syntax_so_code_13 },
    { "mit_syntax_so_code_14", 7, mit_syntax_so_code_14 },
    { "mit_syntax_so_code_15", 4, mit_syntax_so_code_15 },
    { "mit_syntax_so_code_16", 5, mit_syntax_so_code_16 },
    { "mit_syntax_so_code_17", 6, mit_syntax_so_code_17 },
    { "mit_syntax_so_code_18", 12, mit_syntax_so_code_18 },
    { "mit_syntax_so_code_19", 26, mit_syntax_so_code_19 },
    { "mit_syntax_so_code_20", 7, mit_syntax_so_code_20 },
    { "mit_syntax_so_code_21", 10, mit_syntax_so_code_21 },
    { "mit_syntax_so_code_22", 7, mit_syntax_so_code_22 },
    { "mit_syntax_so_code_23", 4, mit_syntax_so_code_23 },
    { "mit_syntax_so_code_24", 4, mit_syntax_so_code_24 },
    { "mit_syntax_so_code_25", 1, mit_syntax_so_code_25 },
    { "mit_syntax_so_code_26", 1, mit_syntax_so_code_26 },
    { "mit_syntax_so_code_27", 4, mit_syntax_so_code_27 },
    { "mit_syntax_so_code_28", 2, mit_syntax_so_code_28 },
    { "mit_syntax_so_code_29", 3, mit_syntax_so_code_29 },
    { "mit_syntax_so_code_30", 4, mit_syntax_so_code_30 }
  };

int
decl_mit_syntax_so_7b0af6e3a631f91a (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_mit_syntax_so_7b0af6e3a631f91a);
  return (0);
}

DECLARE_COMPILED_CODE ("mit-syntax.so", 50, decl_mit_syntax_so_7b0af6e3a631f91a, mit_syntax_so_7b0af6e3a631f91a)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_mit_syntax_so_data_7b0af6e3a631f91a [5840] =
  "\xb0\x01\x36\xee\x0a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\xc1\xb9"
  "\xc1\xba\x0d\xbb\x0d\xbc\x08\x89\x28\x0d\xbd\x28\x0d\xbe\x28\x0d"
  "\xbf\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x82\x88\xb1\xb2\xb3\x0d\x1c\x0d\x1c\x0d\x1c\x08\x8b\x28"
  "\xb5\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\xb1"
  "\xb2\xb3\x0d\x1c\x1b\x88\x1b\x1b\x08\x8b\x28\xb5\x28\x1b\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x84\x88\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xb2\xb3\x0d\x1c\x1b\x08"
  "\x8a\x28\xb5\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\xb1\xb2\xb3\xb4\xb4\x0d\x1c\xb4\x08\x8c\x28\xb5"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb1\xb2\xb3\x0d\x1c\x08\x89\x28\xb5\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb1\xb2\xb3\x1b\x1b\xb4\x08\x8b\x28\xb5\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x28\xb7\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28"
  "\xb6\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb2"
  "\xb3\xb4\x08\x89\x28\xb5\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x1b\xb4\x08\x8a\x0d\x1c\x24\x28\xb5\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb2\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\xb6\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b"
  "\x24\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x1b\x1b\xb4\x08\x89\x08"
  "\x89\x1b\x1b\x08\x8b\x1b\x1b\x24\x28\xb5\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb1\xb2\xb3\x1b\x1b\xb4\x08\x89\x08\x89\x1b\x1b\x08"
  "\x8b\x1b\x0d\x24\x28\xb5\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\xb2\x0d\x1b\x0d\x0d\xb7\x24\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x28\x0d\x28\xb6\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x24\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\xb2\xb3\x1b\xb4\x08\x8a\x28"
  "\xb5\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\xb2\x28\xb6\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x1b\x28\x1b\x28\x0d\x28\xb7\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xb3\x08\x88\x28\xb5\x28"
  "\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\xb2\xb3\x1b\x1b\x1b\x1b\x08\x8a\x08\x8a\x28\xb5\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28\xb6\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c"
  "\x88\x1b\x0d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9b\x1b\x1b\x1b\x0d"
  "\x9b\x0d\x1b\x2a\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x1b\x08\x89\x0d\x0d\x1b\x1b"
  "\x0d\x9b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9b\x0d\x0d\x1c\x1b\x2a"
  "\x1b\x2a\x0d\x1b\x1b\x1b\x0d\x9b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x9b\x1b\x2a\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x17\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x17\x0d\x0d\x1c\x0d\x0d\x1c\x0d\x0d\x1c\x0d\x1c\xc3\x0d\x1c\x1b"
  "\x2a\x28\x0d\x26\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53"
  "\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65"
  "\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f"
  "\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x6d\x69"
  "\x74\x2d\x73\x79\x6e\x74\x61\x78\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x04\x63\x61\x72\x04\x63\x64\x72\x08\x6b\x65\x79\x77\x6f"
  "\x72\x64\x0b\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x04\x0d\x73"
  "\x79\x6e\x74\x61\x78\x2d\x63\x68\x65\x63\x6b\x04\x14\x63\x6c\x61"
  "\x73\x73\x69\x66\x79\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x03\x18\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x69\x74\x65\x6d\x2f\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x03\x15\x6d\x61\x6b\x65\x2d"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x69\x74\x65\x6d\x09"
  "\x04\x11\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x65\x76"
  "\x61\x6c\x04\x18\x6d\x61\x6b\x65\x2d\x6b\x65\x79\x77\x6f\x72\x64"
  "\x2d\x76\x61\x6c\x75\x65\x2d\x69\x74\x65\x6d\x03\x19\x6f\x75\x74"
  "\x70\x75\x74\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2d\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x02\x17\x6f\x75\x74\x70\x75\x74\x2f\x74\x68"
  "\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x0a\x04\x13"
  "\x6f\x75\x74\x70\x75\x74\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69"
  "\x6f\x6e\x0a\x40\x1e\x81\x87\x02\x3f\x1c\x81\x85\x02\x3e\x1a\x81"
  "\x83\x02\x3d\x18\x81\x83\x02\x3c\x16\x81\x8b\x02\x3b\x14\x81\x93"
  "\x02\x3a\x12\x81\x8f\x02\x39\x10\x81\x8b\x02\x38\x0e\x81\x89\x02"
  "\x37\x0c\x81\x8d\x02\x36\x0a\x81\x8d\x02\x35\x08\x81\x89\x02\x34"
  "\x06\x81\x89\x02\x33\x04\x84\x06\x1d\x37\x0b\x02\x08\x6d\x69\x74"
  "\x2d\x62\x76\x6c\x0c\x02\x2b\x0d\x05\x66\x6f\x72\x6d\x0e\x04\x05"
  "\x0f\x63\x6f\x6d\x70\x69\x6c\x65\x2f\x6c\x61\x6d\x62\x64\x61\x0f"
  "\x04\x0e\x6f\x75\x74\x70\x75\x74\x2f\x6c\x61\x6d\x62\x64\x61\x04"
  "\x48\x12\x84\x06\x47\x10\x81\x85\x02\x46\x0e\x81\x8b\x02\x45\x0c"
  "\x81\x8b\x02\x44\x0a\x81\x89\x02\x43\x08\x81\x89\x02\x42\x06\x81"
  "\x85\x02\x41\x04\x84\x06\x11\x1e\x10\x02\x0b\x69\x64\x65\x6e\x74"
  "\x69\x66\x69\x65\x72\x11\x0c\x0d\x0e\x04\x05\x0f\x03\x13\x69\x64"
  "\x65\x6e\x74\x69\x66\x69\x65\x72\x2d\x3e\x73\x79\x6d\x62\x6f\x6c"
  "\x05\x14\x6f\x75\x74\x70\x75\x74\x2f\x6e\x61\x6d\x65\x64\x2d\x6c"
  "\x61\x6d\x62\x64\x61\x05\x55\x1c\x81\x87\x02\x54\x1a\x81\x87\x02"
  "\x53\x18\x81\x89\x02\x52\x16\x81\x89\x02\x51\x14\x81\x89\x02\x50"
  "\x12\x81\x87\x02\x4f\x10\x81\x8d\x02\x4e\x0e\x81\x8d\x02\x4d\x0c"
  "\x81\x8d\x02\x4c\x0a\x81\x8b\x02\x4b\x08\x81\x8b\x02\x4a\x06\x81"
  "\x85\x02\x49\x04\x84\x06\x1b\x2a\x0c\x02\x03\x24\x6d\x61\x6b\x65"
  "\x2d\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x73\x79\x6e\x74\x61\x63"
  "\x74\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x12"
  "\x04\x14\x6d\x61\x70\x2d\x6d\x69\x74\x2d\x6c\x61\x6d\x62\x64\x61"
  "\x2d\x6c\x69\x73\x74\x05\x0e\x63\x6c\x61\x73\x73\x69\x66\x79\x2f"
  "\x62\x6f\x64\x79\x13\x04\x0f\x62\x69\x6e\x64\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x21\x14\x03\x12\x63\x6f\x6d\x70\x69\x6c\x65\x2d"
  "\x62\x6f\x64\x79\x2d\x69\x74\x65\x6d\x15\x06\x5c\x10\x81\x85\x02"
  "\x5b\x0e\x81\x8d\x02\x5a\x0c\x81\x8b\x02\x59\x0a\x81\x85\x02\x58"
  "\x08\x81\x89\x02\x57\x06\x81\x87\x02\x56\x04\x85\x08\x0f\x1d\x16"
  "\x02\x02\x2a\x17\x0e\x04\x05\x13\x03\x5f\x08\x81\x87\x02\x5e\x06"
  "\x81\x87\x02\x5d\x04\x85\x08\x07\x11\x18\x02\x02\x3f\x19\x04\x04"
  "\x13\x63\x6f\x6d\x70\x69\x6c\x65\x2f\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x1a\x02\x12\x6f\x75\x74\x70\x75\x74\x2f\x75\x6e\x73"
  "\x70\x65\x63\x69\x66\x69\x63\x1b\x05\x13\x6f\x75\x74\x70\x75\x74"
  "\x2f\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x05\x70\x24\x81"
  "\x89\x02\x6f\x22\x81\x8d\x02\x6e\x20\x81\x8d\x02\x6d\x1e\x81\x8d"
  "\x02\x6c\x1c\x81\x87\x02\x6b\x1a\x81\x8b\x02\x6a\x18\x81\x8b\x02"
  "\x69\x16\x81\x8b\x02\x68\x14\x81\x8b\x02\x67\x12\x81\x89\x02\x66"
  "\x10\x81\x89\x02\x65\x0e\x81\x89\x02\x64\x0c\x81\x85\x02\x63\x0a"
  "\x81\x89\x02\x62\x08\x81\x89\x02\x61\x06\x81\x85\x02\x60\x04\x84"
  "\x06\x23\x32\x1c\x02\x08\x06\x64\x61\x74\x75\x6d\x1d\x04\x03\x19"
  "\x73\x74\x72\x69\x70\x2d\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d"
  "\x63\x6c\x6f\x73\x75\x72\x65\x73\x03\x10\x6f\x75\x74\x70\x75\x74"
  "\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x04\x75\x0c\x81\x85\x02\x74"
  "\x0a\x81\x87\x02\x73\x08\x81\x87\x02\x72\x06\x81\x85\x02\x71\x04"
  "\x84\x06\x0b\x18\x1e\x02\x09\x0e\x19\x04\x04\x12\x63\x6c\x61\x73"
  "\x73\x69\x66\x79\x2f\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x19\x04\x1a"
  "\x02\x12\x6f\x75\x74\x70\x75\x74\x2f\x75\x6e\x61\x73\x73\x69\x67"
  "\x6e\x65\x64\x1f\x04\x12\x6f\x75\x74\x70\x75\x74\x2f\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x03\x05\x19\x6f\x75\x74\x70\x75\x74"
  "\x2f\x61\x63\x63\x65\x73\x73\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x08\x82\x01\x1c\x81\x89\x02\x81\x01\x1a\x81\x87\x02\x80"
  "\x01\x18\x81\x87\x02\x7f\x16\x81\x8b\x02\x7e\x14\x81\x8b\x02\x7d"
  "\x12\x81\x8b\x02\x7c\x10\x81\x89\x02\x7b\x0e\x81\x89\x02\x7a\x0c"
  "\x81\x87\x02\x79\x0a\x81\x8b\x02\x78\x08\x81\x8b\x02\x77\x06\x81"
  "\x85\x02\x76\x04\x84\x06\x1b\x30\x20\x02\x0a\x23\x56\x61\x72\x69"
  "\x61\x62\x6c\x65\x20\x72\x65\x71\x75\x69\x72\x65\x64\x20\x69\x6e"
  "\x20\x74\x68\x69\x73\x20\x63\x6f\x6e\x74\x65\x78\x74\x3a\x04\x03"
  "\x0f\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x69\x74\x65\x6d\x3f\x21"
  "\x03\x0d\x61\x63\x63\x65\x73\x73\x2d\x69\x74\x65\x6d\x3f\x22\x03"
  "\x13\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x69\x74\x65\x6d\x2f\x6e"
  "\x61\x6d\x65\x23\x04\x0d\x73\x79\x6e\x74\x61\x78\x2d\x65\x72\x72"
  "\x6f\x72\x24\x03\x11\x61\x63\x63\x65\x73\x73\x2d\x69\x74\x65\x6d"
  "\x2f\x6e\x61\x6d\x65\x25\x03\x18\x61\x63\x63\x65\x73\x73\x2d\x69"
  "\x74\x65\x6d\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x26"
  "\x08\x8b\x01\x14\x81\x85\x02\x8a\x01\x12\x81\x87\x02\x89\x01\x10"
  "\x81\x87\x02\x88\x01\x0e\x81\x85\x02\x87\x01\x0c\x81\x87\x02\x86"
  "\x01\x0a\x81\x87\x02\x85\x01\x08\x81\x87\x02\x84\x01\x06\x81\x85"
  "\x02\x83\x01\x04\x84\x06\x13\x26\x27\x02\x0b\x04\x04\x1a\x03\x0d"
  "\x6f\x75\x74\x70\x75\x74\x2f\x64\x65\x6c\x61\x79\x04\x90\x01\x0c"
  "\x81\x85\x02\x8f\x01\x0a\x81\x89\x02\x8e\x01\x08\x81\x89\x02\x8d"
  "\x01\x06\x81\x85\x02\x8c\x01\x04\x84\x06\x0b\x18\x28\x02\x0c\x18"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x62\x69\x6e\x64\x69\x6e\x67"
  "\x2d\x74\x68\x65\x6f\x72\x79\x29\x02\x06\x10\x63\x6c\x61\x73\x73"
  "\x69\x66\x79\x2f\x64\x65\x66\x69\x6e\x65\x2a\x02\x92\x01\x06\x81"
  "\x89\x02\x91\x01\x04\x85\x08\x05\x0d\x2b\x02\x0d\x11\x19\x73\x79"
  "\x6e\x74\x61\x63\x74\x69\x63\x2d\x62\x69\x6e\x64\x69\x6e\x67\x2d"
  "\x74\x68\x65\x6f\x72\x79\x2c\x02\x04\x06\x2a\x03\x95\x01\x08\x81"
  "\x89\x02\x94\x01\x06\x81\x87\x02\x93\x01\x04\x85\x08\x07\x12\x2d"
  "\x02\x0e\x03\x21\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x74\x6f\x70\x2d\x6c\x65"
  "\x76\x65\x6c\x3f\x2e\x02\x18\x6d\x61\x6b\x65\x2d\x72\x65\x73\x65"
  "\x72\x76\x65\x64\x2d\x6e\x61\x6d\x65\x2d\x69\x74\x65\x6d\x2f\x04"
  "\x05\x1d\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x2d\x65\x6e\x76\x69"
  "\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x64\x65\x66\x69\x6e\x65\x30\x05"
  "\xa1\x01\x1a\x81\x8d\x02\xa0\x01\x18\x81\x8d\x02\x9f\x01\x16\x81"
  "\x8b\x02\x9e\x01\x14\x81\x8b\x02\x9d\x01\x12\x81\x8b\x02\x9c\x01"
  "\x10\x81\x89\x02\x9b\x01\x0e\x81\x8d\x02\x9a\x01\x0c\x81\x8d\x02"
  "\x99\x01\x0a\x81\x8d\x02\x98\x01\x08\x81\x89\x02\x97\x01\x06\x81"
  "\x89\x02\x96\x01\x04\x86\x0a\x19\x27\x31\x02\x0f\x2b\x53\x79\x6e"
  "\x74\x61\x63\x74\x69\x63\x20\x62\x69\x6e\x64\x69\x6e\x67\x20\x76"
  "\x61\x6c\x75\x65\x20\x6d\x75\x73\x74\x20\x62\x65\x20\x61\x20\x6b"
  "\x65\x79\x77\x6f\x72\x64\x3a\x03\x0e\x6b\x65\x79\x77\x6f\x72\x64"
  "\x2d\x69\x74\x65\x6d\x3f\x32\x04\x24\x05\x30\x03\x14\x6b\x65\x79"
  "\x77\x6f\x72\x64\x2d\x76\x61\x6c\x75\x65\x2d\x69\x74\x65\x6d\x3f"
  "\x03\x1c\x72\x65\x6e\x61\x6d\x65\x2d\x74\x6f\x70\x2d\x6c\x65\x76"
  "\x65\x6c\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x02\x17\x6d"
  "\x61\x6b\x65\x2d\x6e\x75\x6c\x6c\x2d\x62\x69\x6e\x64\x69\x6e\x67"
  "\x2d\x69\x74\x65\x6d\x03\x2e\x04\x12\x6d\x61\x6b\x65\x2d\x62\x69"
  "\x6e\x64\x69\x6e\x67\x2d\x69\x74\x65\x6d\x33\x09\xa8\x01\x10\x81"
  "\x87\x02\xa7\x01\x0e\x81\x87\x02\xa6\x01\x0c\x81\x87\x02\xa5\x01"
  "\x0a\x81\x87\x02\xa4\x01\x08\x81\x87\x02\xa3\x01\x06\x81\x87\x02"
  "\xa2\x01\x04\x85\x08\x0f\x24\x34\x02\x10\x24\x42\x69\x6e\x64\x69"
  "\x6e\x67\x20\x76\x61\x6c\x75\x65\x20\x6d\x61\x79\x20\x6e\x6f\x74"
  "\x20\x62\x65\x20\x61\x20\x6b\x65\x79\x77\x6f\x72\x64\x3a\x03\x32"
  "\x04\x14\x04\x24\x04\x33\x05\xac\x01\x0a\x81\x87\x02\xab\x01\x08"
  "\x81\x87\x02\xaa\x01\x06\x81\x87\x02\xa9\x01\x04\x85\x08\x09\x16"
  "\x33\x02\x11\x0b\x6f\x75\x74\x70\x75\x74\x2f\x6c\x65\x74\x32\x29"
  "\x03\x03\x12\x08\x12\x63\x6c\x61\x73\x73\x69\x66\x79\x2f\x6c\x65"
  "\x74\x2d\x6c\x69\x6b\x65\x14\x03\xb1\x01\x0c\x81\x8d\x02\xb0\x01"
  "\x0a\x81\x8d\x02\xaf\x01\x08\x81\x89\x02\xae\x01\x06\x81\x87\x02"
  "\xad\x01\x04\x85\x08\x0b\x16\x35\x02\x12\x17\x11\x0d\x0e\x32\x2c"
  "\x03\x04\x03\x12\x08\x14\x04\xb7\x01\x0e\x81\x8d\x02\xb6\x01\x0c"
  "\x81\x8d\x02\xb5\x01\x0a\x81\x89\x02\xb4\x01\x08\x81\x87\x02\xb3"
  "\x01\x06\x81\x87\x02\xb2\x01\x04\x85\x08\x0d\x1b\x32\x02\x13\x17"
  "\x11\x0d\x0e\x2c\x0e\x6f\x75\x74\x70\x75\x74\x2f\x6c\x65\x74\x72"
  "\x65\x63\x03\x04\x03\x12\x02\x2f\x08\x14\x04\x09\x66\x6f\x72\x2d"
  "\x65\x61\x63\x68\x05\x30\x07\xc3\x01\x1a\x81\x89\x02\xc2\x01\x18"
  "\x81\x85\x02\xc1\x01\x16\x81\x8f\x02\xc0\x01\x14\x81\x8d\x02\xbf"
  "\x01\x12\x81\x8d\x02\xbe\x01\x10\x81\x8b\x02\xbd\x01\x0e\x81\x8d"
  "\x02\xbc\x01\x0c\x81\x8d\x02\xbb\x01\x0a\x81\x89\x02\xba\x01\x08"
  "\x81\x87\x02\xb9\x01\x06\x81\x87\x02\xb8\x01\x04\x85\x08\x19\x2f"
  "\x30\x02\x14\x13\x6e\x75\x6c\x6c\x2d\x62\x69\x6e\x64\x69\x6e\x67"
  "\x2d\x69\x74\x65\x6d\x3f\x2c\x13\x62\x69\x6e\x64\x69\x6e\x67\x2d"
  "\x69\x74\x65\x6d\x2f\x76\x61\x6c\x75\x65\x12\x62\x69\x6e\x64\x69"
  "\x6e\x67\x2d\x69\x74\x65\x6d\x2f\x6e\x61\x6d\x65\x06\x04\x04\x6d"
  "\x61\x70\x2f\x05\x2f\x05\x13\x04\x08\x72\x65\x6d\x6f\x76\x65\x21"
  "\x04\x03\x09\x03\x15\x08\xdd\x01\x36\x81\x89\x02\xdc\x01\x34\x81"
  "\x83\x02\xdb\x01\x32\x81\x87\x02\xda\x01\x30\x81\x83\x02\xd9\x01"
  "\x2e\x81\x93\x02\xd8\x01\x2c\x81\x97\x02\xd7\x01\x2a\x81\x91\x02"
  "\xd6\x01\x28\x81\x89\x02\xd5\x01\x26\x81\x87\x02\xd4\x01\x24\x81"
  "\x95\x02\xd3\x01\x22\x81\x91\x02\xd2\x01\x20\x81\x8f\x02\xd1\x01"
  "\x1e\x81\x87\x02\xd0\x01\x1c\x81\x87\x02\xcf\x01\x1a\x81\x85\x02"
  "\xce\x01\x18\x81\x93\x02\xcd\x01\x16\x81\x93\x02\xcc\x01\x14\x81"
  "\x91\x02\xcb\x01\x12\x81\x91\x02\xca\x01\x10\x81\x8f\x02\xc9\x01"
  "\x0e\x81\x95\x02\xc8\x01\x0c\x81\x95\x02\xc7\x01\x0a\x81\x8d\x02"
  "\xc6\x01\x08\x81\x93\x02\xc5\x01\x06\x81\x93\x02\xc4\x01\x04\x88"
  "\x0e\x35\x4f\x13\x02\x15\x16\x64\x65\x63\x6c\x61\x72\x61\x74\x69"
  "\x6f\x6e\x2d\x69\x74\x65\x6d\x2f\x74\x65\x78\x74\x02\x03\x15\x62"
  "\x6f\x64\x79\x2d\x69\x74\x65\x6d\x2f\x63\x6f\x6d\x70\x6f\x6e\x65"
  "\x6e\x74\x73\x03\x1f\x65\x78\x74\x72\x61\x63\x74\x2d\x64\x65\x63"
  "\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x2d\x66\x72\x6f\x6d\x2d\x62"
  "\x6f\x64\x79\x04\x2f\x03\x13\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x62"
  "\x6f\x64\x79\x2d\x69\x74\x65\x6d\x73\x04\x0c\x6f\x75\x74\x70\x75"
  "\x74\x2f\x62\x6f\x64\x79\x06\xe4\x01\x10\x81\x85\x02\xe3\x01\x0e"
  "\x81\x85\x02\xe2\x01\x0c\x81\x89\x02\xe1\x01\x0a\x84\x06\xe0\x01"
  "\x08\x81\x85\x02\xdf\x01\x06\x81\x83\x02\xde\x01\x04\x83\x04\x0f"
  "\x1f\x12\x02\x16\x17\x04\x04\x1a\x04\x13\x6f\x75\x74\x70\x75\x74"
  "\x2f\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x04\xee\x01\x16"
  "\xfd\xff\x03\xed\x01\x14\xfd\xff\x03\xec\x01\x12\xfd\xff\x03\xeb"
  "\x01\x10\xfd\xff\x03\xea\x01\x0e\xfd\xff\x03\xe9\x01\x0c\xff\xff"
  "\x03\xe8\x01\x0a\x81\x87\x02\xe7\x01\x08\x81\x85\x02\xe6\x01\x06"
  "\x81\x85\x02\xe5\x01\x04\x84\x06\x15\x22\x1a\x02\x17\x04\x04\x11"
  "\x6d\x61\x6b\x65\x2d\x61\x63\x63\x65\x73\x73\x2d\x69\x74\x65\x6d"
  "\x0e\x03\xf5\x01\x10\x81\x87\x02\xf4\x01\x0e\x81\x87\x02\xf3\x01"
  "\x0c\x81\x87\x02\xf2\x01\x0a\x81\x8b\x02\xf1\x01\x08\x81\x8b\x02"
  "\xf0\x01\x06\x81\x8b\x02\xef\x01\x04\x85\x08\x0f\x19\x0d\x02\x18"
  "\x03\x25\x03\x26\x04\x18\x6f\x75\x74\x70\x75\x74\x2f\x61\x63\x63"
  "\x65\x73\x73\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x03\x05\xf9"
  "\x01\x0a\x81\x87\x02\xf8\x01\x08\x81\x85\x02\xf7\x01\x06\x81\x83"
  "\x02\xf6\x01\x04\x83\x04\x09\x15\x09\x02\x19\x25\x54\x68\x69\x73"
  "\x20\x66\x6f\x72\x6d\x20\x61\x6c\x6c\x6f\x77\x65\x64\x20\x6f\x6e"
  "\x6c\x79\x20\x61\x74\x20\x74\x6f\x70\x20\x6c\x65\x76\x65\x6c\x3a"
  "\x04\x03\x2e\x04\x24\x02\x0a\x05\xfd\x01\x0a\x81\x85\x02\xfc\x01"
  "\x08\x81\x85\x02\xfb\x01\x06\x81\x85\x02\xfa\x01\x04\x84\x06\x09"
  "\x17\x2e\x02\x1a\x02\x1b\x02\xfe\x01\x04\x84\x06\x03\x1b\x02\x1b"
  "\x02\x1f\x02\xff\x01\x04\x84\x06\x03\x1f\x02\x1c\x17\x11\x17\x1d"
  "\x04\x03\x16\x6d\x61\x6b\x65\x2d\x64\x65\x63\x6c\x61\x72\x61\x74"
  "\x69\x6f\x6e\x2d\x69\x74\x65\x6d\x04\x16\x63\x6c\x61\x73\x73\x69"
  "\x66\x79\x2f\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x1d"
  "\x04\x83\x02\x0a\x81\x83\x02\x82\x02\x08\x81\x83\x02\x81\x02\x06"
  "\x81\x87\x02\x80\x02\x04\x85\x08\x09\x15\x17\x02\x1d\x04\x2f\x04"
  "\x15\x63\x6c\x61\x73\x73\x69\x66\x79\x2f\x64\x65\x63\x6c\x61\x72"
  "\x61\x74\x69\x6f\x6e\x2f\x03\x85\x02\x06\x81\x85\x02\x84\x02\x04"
  "\x84\x06\x05\x0d\x11\x02\x1e\x04\x1c\x6d\x61\x70\x2d\x64\x65\x63"
  "\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d\x69\x64\x65\x6e\x74\x69\x66"
  "\x69\x65\x72\x73\x04\x1c\x63\x6c\x61\x73\x73\x69\x66\x79\x2f\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x0a\x03\x23\x04\x88\x02\x08\x81\x85\x02\x87\x02\x06\x81\x85"
  "\x02\x86\x02\x04\x84\x06\x07\x11\x23\x02\x1f\x23\x56\x61\x72\x69"
  "\x61\x62\x6c\x65\x20\x72\x65\x71\x75\x69\x72\x65\x64\x20\x69\x6e"
  "\x20\x74\x68\x69\x73\x20\x63\x6f\x6e\x74\x65\x78\x74\x3a\x04\x03"
  "\x21\x04\x24\x04\x8c\x02\x0a\x81\x87\x02\x8b\x02\x08\x81\x87\x02"
  "\x8a\x02\x06\x81\x85\x02\x89\x02\x04\x84\x06\x09\x14\x24\x1f\x21"
  "\x21\x13\x6b\x65\x79\x77\x6f\x72\x64\x3a\x75\x6e\x61\x73\x73\x69"
  "\x67\x6e\x65\x64\x24\x04\x23\x04\x11\x04\x17\x04\x0a\x2f\x1d\x13"
  "\x63\x6c\x61\x73\x73\x69\x66\x69\x65\x72\x3a\x64\x65\x63\x6c\x61"
  "\x72\x65\x13\x6b\x65\x79\x77\x6f\x72\x64\x3a\x75\x6e\x73\x70\x65"
  "\x63\x69\x66\x69\x63\x1f\x04\x1b\x04\x19\x63\x6f\x6d\x70\x69\x6c"
  "\x65\x72\x3a\x74\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x2e\x04\x0f\x6b\x65\x79\x77\x6f\x72\x64\x3a\x61\x63\x63"
  "\x65\x73\x73\x09\x04\x26\x0d\x04\x25\x0c\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x2f\x22\x05\x6e\x61\x6d\x65\x2e\x0e\x0e\x3c"
  "\x61\x63\x63\x65\x73\x73\x2d\x69\x74\x65\x6d\x3e\x26\x2e\x2f\x13"
  "\x6b\x65\x79\x77\x6f\x72\x64\x3a\x6c\x65\x74\x2d\x73\x79\x6e\x74"
  "\x61\x78\x0c\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x72\x15\x14"
  "\x19\x63\x6c\x61\x73\x73\x69\x66\x69\x65\x72\x3a\x6c\x65\x74\x72"
  "\x65\x63\x2d\x73\x79\x6e\x74\x61\x78\x1a\x04\x12\x04\x13\x04\x30"
  "\x04\x0c\x6b\x65\x79\x77\x6f\x72\x64\x3a\x6c\x65\x74\x16\x63\x6c"
  "\x61\x73\x73\x69\x66\x69\x65\x72\x3a\x6c\x65\x74\x2d\x73\x79\x6e"
  "\x74\x61\x78\x30\x32\x04\x35\x04\x0f\x6b\x65\x79\x77\x6f\x72\x64"
  "\x3a\x64\x65\x66\x69\x6e\x65\x29\x2c\x2a\x19\x63\x6c\x61\x73\x73"
  "\x69\x66\x69\x65\x72\x3a\x64\x65\x66\x69\x6e\x65\x2d\x73\x79\x6e"
  "\x74\x61\x78\x33\x04\x34\x04\x31\x04\x2d\x04\x2b\x04\x2a\x63\x6c"
  "\x61\x73\x73\x69\x66\x69\x65\x72\x3a\x6e\x6f\x6e\x2d\x68\x79\x67"
  "\x69\x65\x6e\x69\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e"
  "\x73\x66\x6f\x72\x6d\x65\x72\x0f\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x3a\x64\x65\x6c\x61\x79\x19\x0e\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x3a\x73\x65\x74\x21\x0f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x71"
  "\x75\x6f\x74\x65\x0c\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x69\x66"
  "\x11\x63\x6c\x61\x73\x73\x69\x66\x69\x65\x72\x3a\x62\x65\x67\x69"
  "\x6e\x0f\x16\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6e\x61\x6d\x65"
  "\x64\x2d\x6c\x61\x6d\x62\x64\x61\x10\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x3a\x6c\x61\x6d\x62\x64\x61\x0a\x28\x04\x27\x04\x20\x04\x1e"
  "\x04\x1c\x04\x18\x04\x16\x04\x0c\x04\x10\x04\x0a\x20\x63\x6c\x61"
  "\x73\x73\x69\x66\x69\x65\x72\x3a\x65\x72\x2d\x6d\x61\x63\x72\x6f"
  "\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x29\x6e\x6f\x6e"
  "\x2d\x68\x79\x67\x69\x65\x6e\x69\x63\x2d\x6d\x61\x63\x72\x6f\x2d"
  "\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78\x70"
  "\x61\x6e\x64\x65\x72\x35\x21\x63\x6c\x61\x73\x73\x69\x66\x69\x65"
  "\x72\x3a\x72\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e"
  "\x73\x66\x6f\x72\x6d\x65\x72\x1f\x65\x72\x2d\x6d\x61\x63\x72\x6f"
  "\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78"
  "\x70\x61\x6e\x64\x65\x72\x34\x20\x63\x6c\x61\x73\x73\x69\x66\x69"
  "\x65\x72\x3a\x73\x63\x2d\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e"
  "\x73\x66\x6f\x72\x6d\x65\x72\x20\x72\x73\x63\x2d\x6d\x61\x63\x72"
  "\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65"
  "\x78\x70\x61\x6e\x64\x65\x72\x33\x1f\x73\x63\x2d\x6d\x61\x63\x72"
  "\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65"
  "\x78\x70\x61\x6e\x64\x65\x72\x32\x11\x6c\x6f\x63\x61\x6c\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x14\x74\x72\x61\x6e\x73\x66"
  "\x6f\x72\x6d\x65\x72\x2d\x6b\x65\x79\x77\x6f\x72\x64\x31\x0b\x04"
  "\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x02\x32\x33\x34\x35\x30\x26\x07\x04\x31\x03\x14\x63\x6c\x61"
  "\x73\x73\x69\x66\x69\x65\x72\x2d\x3e\x6b\x65\x79\x77\x6f\x72\x64"
  "\x04\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x04\x13\x72\x65\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73\x74"
  "\x72\x75\x63\x74\x6f\x72\x03\x11\x72\x65\x63\x6f\x72\x64\x2d\x70"
  "\x72\x65\x64\x69\x63\x61\x74\x65\x04\x10\x72\x65\x63\x6f\x72\x64"
  "\x2d\x61\x63\x63\x65\x73\x73\x6f\x72\x04\x15\x64\x65\x66\x69\x6e"
  "\x65\x2d\x69\x74\x65\x6d\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x72\x03"
  "\x12\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2d\x3e\x6b\x65\x79\x77\x6f"
  "\x72\x64\x09\x32\x66\x80\x80\x04\x31\x64\x81\x81\x02\x30\x62\x81"
  "\x81\x02\x2f\x60\x81\x85\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x85"
  "\x02\x2c\x5a\x81\x83\x02\x2b\x58\x81\x83\x02\x2a\x56\x81\x83\x02"
  "\x29\x54\x81\x85\x02\x28\x52\x81\x87\x02\x27\x50\x81\x83\x02\x26"
  "\x4e\x81\x85\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x85\x02\x23\x48"
  "\x81\x89\x02\x22\x46\x81\x83\x02\x21\x44\x81\x85\x02\x20\x42\x81"
  "\x89\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x85\x02\x1d\x3c\x81\x87"
  "\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x85\x02\x1a\x36\x81\x89\x02"
  "\x19\x34\x81\x83\x02\x18\x32\x81\x83\x02\x17\x30\x81\x85\x02\x16"
  "\x2e\x81\x83\x02\x15\x2c\x81\x87\x02\x14\x2a\x81\x83\x02\x13\x28"
  "\x81\x85\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81"
  "\x85\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x85"
  "\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x87\x02"
  "\x09\x14\x81\x83\x02\x08\x12\x81\x85\x02\x07\x10\x81\x87\x02\x06"
  "\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x87\x02\x03\x08"
  "\x81\x83\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\x65\xb0\x01";

SCHEME_OBJECT *
mit_syntax_so_data_7b0af6e3a631f91a (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_mit_syntax_so_data_7b0af6e3a631f91a [0]))), (sizeof (prog_mit_syntax_so_data_7b0af6e3a631f91a)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_62]));
}

DECLARE_COMPILED_DATA_NS ("mit-syntax.so", mit_syntax_so_data_7b0af6e3a631f91a)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("mit-syntax.so", "cc41410853f404a7")
