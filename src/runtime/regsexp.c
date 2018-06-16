/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:50-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_10 5
#define LABEL_1_5 7
#define LABEL_1_6 9
#define TAG_1_7 3
#define LABEL_1_8 11
#define TAG_1_9 4
#define ENVIRONMENT_LABEL_1_3 25
#define DEBUGGING_LABEL_1_2 24
#define OBJECT_1_0 23
#define EXECUTE_CACHE_1_14 13
#define EXECUTE_CACHE_1_13 15
#define EXECUTE_CACHE_1_12 17
#define EXECUTE_CACHE_1_11 19
#define FREE_REFERENCE_1_0 22
#define FREE_REFERENCES_LABEL_1_0 12
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd9;
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
      goto compile_regsexp_4;

    case 1:
      current_block = (Rpc - LABEL_1_10);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_1_6);
      goto lambda_9;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_regsexp_8)
DEFLABEL (compile_regsexp_4)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_6])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_8])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  ((Wrd13.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_12;
  Wrd17 = Wrd21;

DEFLABEL (label_11)
  (Wrd26.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_10])), (Wrd18.pObj));

DEFLABEL (label_6)
  (Wrd17.Obj) = Rvl;
  goto label_11;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_1_6);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_1_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_8 9
#define LABEL_2_10 11
#define ENVIRONMENT_LABEL_2_3 20
#define DEBUGGING_LABEL_2_2 19
#define EXECUTE_CACHE_2_11 13
#define EXECUTE_CACHE_2_9 15
#define EXECUTE_CACHE_2_7 17
#define FREE_REFERENCES_LABEL_2_0 12
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_2_4);
      goto Z__link_insn_4;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto lambda_2;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__link_insn_7)
DEFLABEL (Z__link_insn_4)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_2_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 13
#define DEBUGGING_LABEL_3_2 12
#define OBJECT_3_0 11
#define EXECUTE_CACHE_3_7 7
#define EXECUTE_CACHE_3_6 9
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto guarantee_compiled_regsexp_1;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_compiled_regsexp_4)
DEFLABEL (guarantee_compiled_regsexp_1)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_3_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 11
#define DEBUGGING_LABEL_4_2 10
#define OBJECT_4_2 9
#define OBJECT_4_1 8
#define OBJECT_4_0 7
#define EXECUTE_CACHE_4_5 5
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_4_4);
      goto error_not_compiled_regsexp_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_compiled_regsexp_5)
DEFLABEL (error_not_compiled_regsexp_2)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_4_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_4_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define ENVIRONMENT_LABEL_5_3 13
#define DEBUGGING_LABEL_5_2 12
#define OBJECT_5_0 11
#define EXECUTE_CACHE_5_6 9
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_5_4);
      goto Z__top_level_match_2;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__top_level_match_5)
DEFLABEL (Z__top_level_match_2)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (Rsp [3]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_5_7);
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_7 5
#define LABEL_6_8 7
#define LABEL_6_5 9
#define LABEL_6_10 11
#define LABEL_6_11 13
#define LABEL_6_12 15
#define LABEL_6_17 17
#define LABEL_6_18 19
#define LABEL_6_13 21
#define TAG_6_14 9
#define LABEL_6_20 23
#define LABEL_6_21 25
#define LABEL_6_22 27
#define LABEL_6_23 29
#define LABEL_6_24 31
#define LABEL_6_25 33
#define ENVIRONMENT_LABEL_6_3 59
#define DEBUGGING_LABEL_6_2 58
#define OBJECT_6_8 57
#define OBJECT_6_7 56
#define OBJECT_6_6 55
#define OBJECT_6_5 54
#define OBJECT_6_4 53
#define OBJECT_6_3 52
#define OBJECT_6_2 51
#define OBJECT_6_1 50
#define OBJECT_6_0 49
#define EXECUTE_CACHE_6_26 35
#define EXECUTE_CACHE_6_19 37
#define EXECUTE_CACHE_6_16 39
#define EXECUTE_CACHE_6_15 41
#define EXECUTE_CACHE_6_9 43
#define EXECUTE_CACHE_6_6 45
#define FREE_REFERENCE_6_0 48
#define FREE_REFERENCES_LABEL_6_0 34
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd36;
  machine_word Wrd16;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd67;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd63;
  machine_word Wrd53;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_6_4);
      goto Z__compile_regsexp_20;

    case 1:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_6_11);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_6_12);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_6_17);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_6_18);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_6_13);
      goto lambda_35;

    case 10:
      current_block = (Rpc - LABEL_6_20);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_6_21);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_6_22);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_6_23);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_6_24);
      goto label_31;

    case 15:
      current_block = (Rpc - LABEL_6_25);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__compile_regsexp_34)
DEFLABEL (Z__compile_regsexp_20)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_19]));

DEFLABEL (label_36)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 30))
    goto label_37;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (label_37)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if ((Wrd8.uLng) == 1)
    goto label_45;

DEFLABEL (label_44)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_43)
  (Wrd16.Obj) = (Rsp [0]);
  if (! ((Wrd16.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_38;
  (Wrd36.Obj) = (current_block [OBJECT_6_6]);
  (Rsp [0]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (label_38)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_42;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_41)
  (Rsp [0]) = (Wrd18.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_40;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [1]) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_8]), 2);

DEFLABEL (label_40)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_23)
  (Wrd27.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_22)
  (Wrd18.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_45)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  if (! ((Wrd8.uLng) == 1))
    goto label_57;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_56)
  (Wrd78.Obj) = (current_block [OBJECT_6_1]);
  (Wrd81.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd81.Lng))))
    goto label_55;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd78.Obj));
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd50.Obj) == (Wrd52.Obj))
    goto label_54;

DEFLABEL (label_53)
  (Wrd53.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd63.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd63.Lng)))
    goto label_46;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_46)
  (Wrd57.uLng) = (OBJECT_DATUM (Wrd53.Obj));
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd57.Obj) == (Wrd59.Obj))
    goto label_48;
  (Wrd55.Obj) = (current_block [OBJECT_6_5]);
  goto label_47;

DEFLABEL (label_48)
  (Wrd55.Obj) = (current_block [OBJECT_6_4]);

DEFLABEL (label_47)
DEFLABEL (label_52)
  Rsp = (& (Rsp [3]));
  if ((Wrd55.Obj) == ((SCHEME_OBJECT) 0))
    goto label_44;

DEFLABEL (label_51)
  (Wrd68.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd71.Obj) = ((Wrd68.pObj) [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd72.uLng) == 50)
    goto label_50;
  Wrd67 = Wrd71;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd67.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd74.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_13])));
  Rhp += 1;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd74.pObj)));
  Wrd75 = Wrd74;
  (Wrd76.Obj) = (Rsp [2]);
  ((Wrd75.pObj) [2]) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_12])), (Wrd68.pObj));

DEFLABEL (label_25)
  (Wrd67.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_54)
  Rsp = (& (Rsp [2]));
  goto label_51;

DEFLABEL (label_55)
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_54;

DEFLABEL (label_57)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  goto label_51;

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_6_13);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_70;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_69)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_68;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_67)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_66;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd29.Obj) = ((Wrd30.pObj) [0]);

DEFLABEL (label_65)
  (Wrd36.Obj) = (* (Rsp++));
  if ((Wrd29.Obj) == (Wrd36.Obj))
    goto label_58;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_64;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_63)
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 1))
    goto label_62;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd54.Obj) = ((Wrd56.pObj) [0]);

DEFLABEL (label_61)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_60;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd63.Obj) = ((Wrd64.pObj) [1]);

DEFLABEL (label_59)
  (Rsp [1]) = (Wrd63.Obj);
  (Wrd70.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_26]));

DEFLABEL (label_60)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_32)
  (Wrd63.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_31)
  (Wrd54.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_7]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_29)
  (Wrd29.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_28)
  (Wrd20.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_69;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_9 9
#define LABEL_7_11 11
#define LABEL_7_15 13
#define LABEL_7_13 15
#define LABEL_7_16 17
#define LABEL_7_17 19
#define ENVIRONMENT_LABEL_7_3 45
#define DEBUGGING_LABEL_7_2 44
#define OBJECT_7_2 43
#define OBJECT_7_1 42
#define OBJECT_7_0 41
#define EXECUTE_CACHE_7_21 21
#define EXECUTE_CACHE_7_20 23
#define EXECUTE_CACHE_7_19 25
#define EXECUTE_CACHE_7_18 27
#define EXECUTE_CACHE_7_14 29
#define EXECUTE_CACHE_7_12 31
#define EXECUTE_CACHE_7_10 33
#define EXECUTE_CACHE_7_8 35
#define EXECUTE_CACHE_7_7 37
#define FREE_REFERENCE_7_0 40
#define FREE_REFERENCES_LABEL_7_0 20
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
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
      goto Z__compile_char_set_8;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto lambda_6;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_7_15);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_7_16);
      goto label_11;

    case 8:
      current_block = (Rpc - LABEL_7_17);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__compile_char_set_13)
DEFLABEL (Z__compile_char_set_8)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (lambda_14)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_7_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_20]));

DEFLABEL (label_16)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 30)
    goto label_17;
  (Wrd9.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (label_17)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_19;
  Wrd10 = Wrd14;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_17);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_21]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_16])), (Wrd11.pObj));

DEFLABEL (label_11)
  (Wrd10.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 2))
    goto label_22;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd7.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd12.uLng)));

DEFLABEL (label_21)
  (Wrd21.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_5 3
#define LABEL_8_6 5
#define LABEL_8_7 7
#define LABEL_8_8 9
#define LABEL_8_4 11
#define ENVIRONMENT_LABEL_8_3 24
#define DEBUGGING_LABEL_8_2 23
#define OBJECT_8_5 22
#define OBJECT_8_4 21
#define OBJECT_8_3 20
#define OBJECT_8_2 19
#define OBJECT_8_1 18
#define OBJECT_8_0 17
#define EXECUTE_CACHE_8_10 13
#define EXECUTE_CACHE_8_9 15
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd49;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_8_5);
      goto continuation_5;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_8_4);
      goto Z__compile_group_key_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__compile_group_key_10)
DEFLABEL (Z__compile_group_key_6)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_8_0]);
  (Wrd44.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd44.Lng))))
    goto label_20;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd20.Obj) == (Wrd22.Obj))
    goto label_19;

DEFLABEL (label_18)
  (Wrd23.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd33.Lng)))
    goto label_13;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_13)
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd23.Obj));
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd27.Obj) == (Wrd29.Obj))
    goto label_15;
  (Wrd25.Obj) = (current_block [OBJECT_8_4]);
  goto label_14;

DEFLABEL (label_15)
  (Wrd25.Obj) = (current_block [OBJECT_8_3]);

DEFLABEL (label_14)
DEFLABEL (label_17)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd25.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_11;

DEFLABEL (label_16)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_8_5]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_5);
  goto label_11;

DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));
  goto label_11;

DEFLABEL (label_20)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_7 5
#define LABEL_9_5 7
#define LABEL_9_9 9
#define LABEL_9_11 11
#define LABEL_9_12 13
#define LABEL_9_6 15
#define LABEL_9_10 17
#define LABEL_9_17 19
#define LABEL_9_14 21
#define LABEL_9_15 23
#define LABEL_9_18 25
#define LABEL_9_21 27
#define ENVIRONMENT_LABEL_9_3 55
#define DEBUGGING_LABEL_9_2 54
#define OBJECT_9_5 53
#define OBJECT_9_4 52
#define OBJECT_9_3 51
#define OBJECT_9_2 50
#define OBJECT_9_1 49
#define OBJECT_9_0 48
#define EXECUTE_CACHE_9_22 29
#define EXECUTE_CACHE_9_20 31
#define EXECUTE_CACHE_9_19 33
#define EXECUTE_CACHE_9_16 35
#define EXECUTE_CACHE_9_13 37
#define EXECUTE_CACHE_9_8 39
#define FREE_REFERENCE_9_2 42
#define FREE_REFERENCE_9_1 43
#define FREE_REFERENCE_9_0 44
#define FREE_ASSIGNMENT_9_1 46
#define FREE_ASSIGNMENT_9_0 47
#define FREE_REFERENCES_LABEL_9_0 28
#define NUMBER_OF_LINKER_SECTIONS_9_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
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
      goto initialize_conditionsB_7;

    case 1:
      current_block = (Rpc - LABEL_9_7);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_9_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_9_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_9_12);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_9_6);
      goto lambda_4;

    case 7:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_9_17);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_9_15);
      goto continuation_0;

    case 11:
      current_block = (Rpc - LABEL_9_18);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_9_21);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_conditionsB_15)
DEFLABEL (initialize_conditionsB_7)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_28;
  Wrd11 = Wrd15;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_9_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_24)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_23;
  Wrd21 = Wrd25;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_2]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_21;
  Wrd28 = Wrd32;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_9_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_19;

DEFLABEL (label_18)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_9_3]);
  goto pop_return;

DEFLABEL (label_19)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_18;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_17])), (Wrd6.pObj), Rvl);

DEFLABEL (label_13)
  goto label_17;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_12])), (Wrd29.pObj));

DEFLABEL (label_12)
  (Wrd28.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_11])), (Wrd22.pObj));

DEFLABEL (label_11)
  (Wrd21.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_26)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_25;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_9_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_10)
  goto label_24;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_7])), (Wrd12.pObj));

DEFLABEL (label_9)
  (Wrd11.Obj) = Rvl;
  goto label_27;

DEFLABEL (lambda_16)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_9_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_20]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_21);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_22]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_8 5
#define LABEL_10_9 7
#define LABEL_10_5 9
#define TAG_10_6 3
#define LABEL_10_10 11
#define LABEL_10_11 13
#define LABEL_10_13 15
#define LABEL_10_12 17
#define LABEL_10_18 19
#define LABEL_10_19 21
#define LABEL_10_14 23
#define TAG_10_15 10
#define LABEL_10_20 25
#define LABEL_10_21 27
#define ENVIRONMENT_LABEL_10_3 49
#define DEBUGGING_LABEL_10_2 48
#define OBJECT_10_8 47
#define OBJECT_10_7 46
#define OBJECT_10_6 45
#define OBJECT_10_5 44
#define OBJECT_10_4 43
#define OBJECT_10_3 42
#define OBJECT_10_2 41
#define OBJECT_10_1 40
#define OBJECT_10_0 39
#define EXECUTE_CACHE_10_17 29
#define EXECUTE_CACHE_10_16 31
#define EXECUTE_CACHE_10_7 33
#define FREE_REFERENCE_10_0 36
#define FREE_ASSIGNMENT_10_0 38
#define FREE_REFERENCES_LABEL_10_0 28
#define NUMBER_OF_LINKER_SECTIONS_10_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd45;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_10_4);
      goto define_rule_14;

    case 1:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_10_9);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_25;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_10_11);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_10_13);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_10_12);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_10_18);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_10_19);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_10_14);
      goto lambda_26;

    case 11:
      current_block = (Rpc - LABEL_10_20);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_10_21);
      goto label_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_rule_24)
DEFLABEL (define_rule_14)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_38;

DEFLABEL (label_37)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_10_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_9);

DEFLABEL (label_36)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_35;
  Wrd53 = Wrd57;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd53.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd60.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_14])));
  Rhp += 1;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd60.pObj)));
  Wrd61 = Wrd60;
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [3]);
  ((Wrd61.pObj) [2]) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_10_12);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd16.uLng) == 1)
    goto label_27;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_8]), 2);

DEFLABEL (label_27)
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  ((Wrd12.pObj) [1]) = (Wrd7.Obj);

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_10_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_33;
  Wrd18 = Wrd22;

DEFLABEL (label_32)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [3]);
  (Wrd32.Obj) = ((Wrd28.pObj) [2]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd44.Obj) = ((Wrd36.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd36.pObj) [0]) = (Wrd33.Obj);
  goto label_28;

DEFLABEL (label_31)
  if ((Wrd44.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_19])), (Wrd36.pObj), (Wrd33.Obj));

DEFLABEL (label_20)
  goto label_28;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_18])), (Wrd19.pObj));

DEFLABEL (label_19)
  (Wrd18.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_13])), (Wrd54.pObj));

DEFLABEL (label_17)
  (Wrd53.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  if (! ((Wrd8.uLng) == 1))
    goto label_47;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_46)
  (Wrd66.Obj) = (current_block [OBJECT_10_1]);
  (Wrd69.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd69.Lng))))
    goto label_45;
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd66.Obj));
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_44;

DEFLABEL (label_43)
  (Wrd38.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd48.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd48.Lng)))
    goto label_39;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_39)
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_41;
  (Wrd40.Obj) = (current_block [OBJECT_10_5]);
  goto label_40;

DEFLABEL (label_41)
  (Wrd40.Obj) = (current_block [OBJECT_10_4]);

DEFLABEL (label_40)
DEFLABEL (label_42)
  Rsp = (& (Rsp [3]));
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_36;

DEFLABEL (label_44)
  Rsp = (& (Rsp [2]));
  goto label_36;

DEFLABEL (label_45)
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (label_47)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_36;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_10_14);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_54;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_53)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_52;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_51)
  (Wrd29.Obj) = (* (Rsp++));
  if ((Wrd20.Obj) == (Wrd29.Obj))
    goto label_49;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_48;

DEFLABEL (label_49)
  Rvl = (current_block [OBJECT_10_4]);

DEFLABEL (label_48)
DEFLABEL (label_50)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_21]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_22)
  (Wrd20.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_53;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 9
#define DEBUGGING_LABEL_11_2 8
#define OBJECT_11_0 7
#define EXECUTE_CACHE_11_5 5
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 11
#define DEBUGGING_LABEL_12_2 10
#define OBJECT_12_2 9
#define OBJECT_12_1 8
#define OBJECT_12_0 7
#define EXECUTE_CACHE_12_5 5
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_12_4);
      goto lambda_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_12_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_12_1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_12_2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [0]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 11
#define DEBUGGING_LABEL_13_2 10
#define OBJECT_13_2 9
#define OBJECT_13_1 8
#define OBJECT_13_0 7
#define EXECUTE_CACHE_13_5 5
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_13_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_13_1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_13_2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [0]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 12
#define DEBUGGING_LABEL_14_2 11
#define EXECUTE_CACHE_14_7 7
#define EXECUTE_CACHE_14_6 9
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 12
#define DEBUGGING_LABEL_15_2 11
#define EXECUTE_CACHE_15_7 7
#define EXECUTE_CACHE_15_6 9
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 8
#define DEBUGGING_LABEL_16_2 7
#define EXECUTE_CACHE_16_5 5
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 8
#define DEBUGGING_LABEL_17_2 7
#define EXECUTE_CACHE_17_5 5
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 8
#define DEBUGGING_LABEL_18_2 7
#define EXECUTE_CACHE_18_5 5
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 8
#define DEBUGGING_LABEL_19_2 7
#define EXECUTE_CACHE_19_5 5
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 12
#define DEBUGGING_LABEL_20_2 11
#define EXECUTE_CACHE_20_7 7
#define EXECUTE_CACHE_20_6 9
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 12
#define DEBUGGING_LABEL_21_2 11
#define EXECUTE_CACHE_21_7 7
#define EXECUTE_CACHE_21_6 9
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define EXECUTE_CACHE_22_7 7
#define EXECUTE_CACHE_22_6 9
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 12
#define DEBUGGING_LABEL_23_2 11
#define EXECUTE_CACHE_23_7 7
#define EXECUTE_CACHE_23_6 9
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define ENVIRONMENT_LABEL_24_3 16
#define DEBUGGING_LABEL_24_2 15
#define EXECUTE_CACHE_24_9 9
#define EXECUTE_CACHE_24_8 11
#define EXECUTE_CACHE_24_6 13
#define FREE_REFERENCES_LABEL_24_0 8
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_24_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_7);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define ENVIRONMENT_LABEL_25_3 16
#define DEBUGGING_LABEL_25_2 15
#define EXECUTE_CACHE_25_9 9
#define EXECUTE_CACHE_25_8 11
#define EXECUTE_CACHE_25_6 13
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_25_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 14
#define DEBUGGING_LABEL_26_2 13
#define OBJECT_26_1 12
#define OBJECT_26_0 11
#define EXECUTE_CACHE_26_7 7
#define EXECUTE_CACHE_26_6 9
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_26_4);
      goto check_repeat_1_arg_1;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_repeat_1_arg_4)
DEFLABEL (check_repeat_1_arg_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_26_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define ENVIRONMENT_LABEL_27_3 16
#define DEBUGGING_LABEL_27_2 15
#define EXECUTE_CACHE_27_9 9
#define EXECUTE_CACHE_27_8 11
#define EXECUTE_CACHE_27_6 13
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_27_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define ENVIRONMENT_LABEL_28_3 16
#define DEBUGGING_LABEL_28_2 15
#define EXECUTE_CACHE_28_9 9
#define EXECUTE_CACHE_28_8 11
#define EXECUTE_CACHE_28_6 13
#define FREE_REFERENCES_LABEL_28_0 8
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_28_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_7 5
#define LABEL_29_5 7
#define LABEL_29_10 9
#define LABEL_29_9 11
#define LABEL_29_11 13
#define ENVIRONMENT_LABEL_29_3 25
#define DEBUGGING_LABEL_29_2 24
#define OBJECT_29_2 23
#define OBJECT_29_1 22
#define OBJECT_29_0 21
#define EXECUTE_CACHE_29_12 15
#define EXECUTE_CACHE_29_8 17
#define EXECUTE_CACHE_29_6 19
#define FREE_REFERENCES_LABEL_29_0 14
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_29_4);
      goto check_repeat_2_args_5;

    case 1:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_29_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_29_11);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (check_repeat_2_args_9)
DEFLABEL (check_repeat_2_args_5)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_7);

DEFLABEL (label_15)
  (Wrd7.Obj) = (Rsp [1]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = (current_block [OBJECT_29_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_10);

DEFLABEL (label_14)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_13;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_13;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd21.Lng) > (Wrd23.Lng))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_29_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd19.Obj) = (current_block [OBJECT_29_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (label_13)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_6 5
#define LABEL_30_5 7
#define ENVIRONMENT_LABEL_30_3 16
#define DEBUGGING_LABEL_30_2 15
#define EXECUTE_CACHE_30_8 9
#define EXECUTE_CACHE_30_7 11
#define FREE_REFERENCE_30_0 14
#define FREE_REFERENCES_LABEL_30_0 8
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_30_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;
  Wrd9 = Wrd13;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_6])), (Wrd10.pObj));

DEFLABEL (label_3)
  (Wrd9.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_6 5
#define LABEL_31_5 7
#define ENVIRONMENT_LABEL_31_3 16
#define DEBUGGING_LABEL_31_2 15
#define EXECUTE_CACHE_31_8 9
#define EXECUTE_CACHE_31_7 11
#define FREE_REFERENCE_31_0 14
#define FREE_REFERENCES_LABEL_31_0 8
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_31_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;
  Wrd9 = Wrd13;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_6])), (Wrd10.pObj));

DEFLABEL (label_3)
  (Wrd9.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define ENVIRONMENT_LABEL_32_3 16
#define DEBUGGING_LABEL_32_2 15
#define EXECUTE_CACHE_32_9 9
#define EXECUTE_CACHE_32_8 11
#define EXECUTE_CACHE_32_6 13
#define FREE_REFERENCES_LABEL_32_0 8
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_32_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define ENVIRONMENT_LABEL_33_3 12
#define DEBUGGING_LABEL_33_2 11
#define EXECUTE_CACHE_33_7 7
#define EXECUTE_CACHE_33_6 9
#define FREE_REFERENCES_LABEL_33_0 6
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define ENVIRONMENT_LABEL_34_3 7
#define DEBUGGING_LABEL_34_2 6
#define FREE_REFERENCES_LABEL_34_0 6
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto insn_always_succeed_1;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_always_succeed_4)
DEFLABEL (insn_always_succeed_1)
  INTERRUPT_CHECK (26, LABEL_34_4);
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  goto pop_return;

DEFLABEL (lambda_5)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_34_5);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define ENVIRONMENT_LABEL_35_3 9
#define DEBUGGING_LABEL_35_2 8
#define FREE_REFERENCES_LABEL_35_0 8
#define NUMBER_OF_LINKER_SECTIONS_35_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto insn_always_fail_2;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_always_fail_5)
DEFLABEL (insn_always_fail_2)
  INTERRUPT_CHECK (26, LABEL_35_4);
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  goto pop_return;

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_35_5);
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_7)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_35_6);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define TAG_36_7 2
#define LABEL_36_8 9
#define ENVIRONMENT_LABEL_36_3 14
#define DEBUGGING_LABEL_36_2 13
#define EXECUTE_CACHE_36_9 11
#define FREE_REFERENCES_LABEL_36_0 10
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_36_4);
      goto insn_string_start_3;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto lambda_2;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_36_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_string_start_6)
DEFLABEL (insn_string_start_3)
  INTERRUPT_CHECK (26, LABEL_36_4);
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  goto pop_return;

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_36_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_36_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_36_6])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_36_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_9)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [0]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define TAG_37_7 2
#define LABEL_37_8 9
#define ENVIRONMENT_LABEL_37_3 14
#define DEBUGGING_LABEL_37_2 13
#define EXECUTE_CACHE_37_9 11
#define FREE_REFERENCES_LABEL_37_0 10
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_37_4);
      goto insn_string_end_3;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto lambda_2;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_string_end_6)
DEFLABEL (insn_string_end_3)
  INTERRUPT_CHECK (26, LABEL_37_4);
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  goto pop_return;

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_37_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_6])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_37_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_9)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [0]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_6 7
#define TAG_38_7 2
#define LABEL_38_8 9
#define ENVIRONMENT_LABEL_38_3 16
#define DEBUGGING_LABEL_38_2 15
#define OBJECT_38_1 14
#define OBJECT_38_0 13
#define EXECUTE_CACHE_38_9 11
#define FREE_REFERENCES_LABEL_38_0 10
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_38_4);
      goto insn_line_start_7;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_38_6);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_38_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_line_start_10)
DEFLABEL (insn_line_start_7)
  INTERRUPT_CHECK (26, LABEL_38_4);
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  goto pop_return;

DEFLABEL (lambda_11)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_38_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_6])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_38_6);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  (Wrd22.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_13)
DEFLABEL (label_21)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rsp = (& (Rsp [2]));
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [2]);
  (Rsp [0]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_16)
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [1]);
  if ((Wrd19.Obj) == (current_block [OBJECT_38_1]))
    goto label_19;
  (Wrd18.Obj) = ((SCHEME_OBJECT) 0);
  goto label_18;

DEFLABEL (label_19)
  (Wrd18.Obj) = (current_block [OBJECT_38_0]);

DEFLABEL (label_18)
DEFLABEL (label_20)
  Rsp = (& (Rsp [2]));
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define TAG_39_7 2
#define LABEL_39_8 9
#define ENVIRONMENT_LABEL_39_3 16
#define DEBUGGING_LABEL_39_2 15
#define OBJECT_39_1 14
#define OBJECT_39_0 13
#define EXECUTE_CACHE_39_9 11
#define FREE_REFERENCES_LABEL_39_0 10
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_39_4);
      goto insn_line_end_7;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_39_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_line_end_10)
DEFLABEL (insn_line_end_7)
  INTERRUPT_CHECK (26, LABEL_39_4);
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  goto pop_return;

DEFLABEL (lambda_11)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_39_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_6])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_39_6);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_8);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  (Wrd22.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_13)
DEFLABEL (label_21)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rsp = (& (Rsp [2]));
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [2]);
  (Rsp [0]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_16)
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_17)
  (Wrd19.Obj) = (Rsp [1]);
  if ((Wrd19.Obj) == (current_block [OBJECT_39_1]))
    goto label_19;
  (Wrd18.Obj) = ((SCHEME_OBJECT) 0);
  goto label_18;

DEFLABEL (label_19)
  (Wrd18.Obj) = (current_block [OBJECT_39_0]);

DEFLABEL (label_18)
DEFLABEL (label_20)
  Rsp = (& (Rsp [2]));
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define TAG_40_6 1
#define LABEL_40_7 7
#define TAG_40_8 2
#define LABEL_40_9 9
#define LABEL_40_10 11
#define LABEL_40_12 13
#define ENVIRONMENT_LABEL_40_3 22
#define DEBUGGING_LABEL_40_2 21
#define EXECUTE_CACHE_40_14 15
#define EXECUTE_CACHE_40_13 17
#define EXECUTE_CACHE_40_11 19
#define FREE_REFERENCES_LABEL_40_0 14
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_40_4);
      goto insn_char_5;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_40_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_40_10);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_40_12);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_char_8)
DEFLABEL (insn_char_5)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_40_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_40_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_11;
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_11)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_12);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define TAG_41_6 1
#define LABEL_41_7 7
#define TAG_41_8 2
#define LABEL_41_9 9
#define LABEL_41_11 11
#define LABEL_41_10 13
#define LABEL_41_14 15
#define LABEL_41_12 17
#define LABEL_41_15 19
#define ENVIRONMENT_LABEL_41_3 30
#define DEBUGGING_LABEL_41_2 29
#define OBJECT_41_1 28
#define OBJECT_41_0 27
#define EXECUTE_CACHE_41_17 21
#define EXECUTE_CACHE_41_16 23
#define EXECUTE_CACHE_41_13 25
#define FREE_REFERENCES_LABEL_41_0 20
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_41_4);
      goto insn_chars_11;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto lambda_17;

    case 2:
      current_block = (Rpc - LABEL_41_7);
      goto lambda_18;

    case 3:
      current_block = (Rpc - LABEL_41_9);
      goto loop_7;

    case 4:
      current_block = (Rpc - LABEL_41_11);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_41_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_41_14);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_41_12);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_41_15);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_chars_16)
DEFLABEL (insn_chars_11)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_41_5);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_41_7);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_7;

DEFLABEL (loop_19)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_41_9);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_20;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_20)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_25;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_24)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_12]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_41_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_21)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_23;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_22)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_41_15);
  (Rsp [1]) = Rvl;
  goto loop_7;

DEFLABEL (label_23)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 1);

DEFLABEL (label_14)
  (Wrd7.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define LABEL_42_9 9
#define TAG_42_10 3
#define LABEL_42_11 11
#define TAG_42_12 4
#define LABEL_42_13 13
#define LABEL_42_14 15
#define LABEL_42_15 17
#define LABEL_42_16 19
#define LABEL_42_18 21
#define ENVIRONMENT_LABEL_42_3 38
#define DEBUGGING_LABEL_42_2 37
#define OBJECT_42_3 36
#define OBJECT_42_2 35
#define OBJECT_42_1 34
#define OBJECT_42_0 33
#define EXECUTE_CACHE_42_20 23
#define EXECUTE_CACHE_42_19 25
#define EXECUTE_CACHE_42_17 27
#define EXECUTE_CACHE_42_8 29
#define EXECUTE_CACHE_42_6 31
#define FREE_REFERENCES_LABEL_42_0 22
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_42_4);
      goto insn_string_17;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_42_9);
      goto lambda_24;

    case 4:
      current_block = (Rpc - LABEL_42_11);
      goto lambda_25;

    case 5:
      current_block = (Rpc - LABEL_42_13);
      goto loop_11;

    case 6:
      current_block = (Rpc - LABEL_42_14);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_42_15);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_42_16);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_42_18);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_string_23)
DEFLABEL (insn_string_17)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_32;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [0]);
  if (! ((Wrd16.Obj) == (current_block [OBJECT_42_1])))
    goto label_27;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (label_27)
  if ((Wrd16.Obj) == (current_block [OBJECT_42_2]))
    goto label_28;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_9])));
  Rhp += 2;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd25 = Wrd22;
  (Wrd26.Obj) = (Rsp [1]);
  ((Wrd25.pObj) [2]) = (Wrd26.Obj);
  ((Wrd25.pObj) [3]) = (Wrd16.Obj);
  Rvl = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 30))
    goto label_30;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [1]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_30;
  (Wrd31.uLng) = ((unsigned long) (((unsigned char *) (Wrd35.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd27.Obj) = (MAKE_OBJECT (2, (Wrd31.uLng)));

DEFLABEL (label_29)
  (Rsp [1]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_8]));

DEFLABEL (label_30)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_42_1]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 2);

DEFLABEL (label_20)
  (Wrd27.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_42_9);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_11])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_42_11);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_42_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_11;

DEFLABEL (loop_26)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_42_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd6.Lng) < (Wrd10.Lng))
    goto label_33;
  (Wrd11.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_33)
  (Wrd38.Obj) = ((Wrd8.pObj) [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 30))
    goto label_36;
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_36;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd35.Lng))))
    goto label_36;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd23.pChr) = (& ((Wrd33.pChr) [(Wrd18.Lng)]));
  (Wrd24.uLng) = ((unsigned long) (((unsigned char *) (Wrd23.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd25.Obj) = (MAKE_OBJECT (2, (Wrd24.uLng)));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_35)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_16]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_42_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_42_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_34)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_42_18);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_11;

DEFLABEL (label_36)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [2]);
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_14]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define TAG_43_6 1
#define LABEL_43_7 7
#define TAG_43_8 2
#define LABEL_43_10 9
#define LABEL_43_9 11
#define LABEL_43_13 13
#define ENVIRONMENT_LABEL_43_3 22
#define DEBUGGING_LABEL_43_2 21
#define EXECUTE_CACHE_43_14 15
#define EXECUTE_CACHE_43_12 17
#define EXECUTE_CACHE_43_11 19
#define FREE_REFERENCES_LABEL_43_0 14
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_43_4);
      goto insn_char_set_6;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto lambda_11;

    case 3:
      current_block = (Rpc - LABEL_43_10);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_43_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_43_13);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_char_set_9)
DEFLABEL (insn_char_set_6)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_43_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_43_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_43_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_43_7);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_13)
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_43_13);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define TAG_44_6 1
#define LABEL_44_7 7
#define TAG_44_8 2
#define LABEL_44_11 9
#define LABEL_44_9 11
#define LABEL_44_12 13
#define ENVIRONMENT_LABEL_44_3 22
#define DEBUGGING_LABEL_44_2 21
#define EXECUTE_CACHE_44_14 15
#define EXECUTE_CACHE_44_13 17
#define EXECUTE_CACHE_44_10 19
#define FREE_REFERENCES_LABEL_44_0 14
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_44_4);
      goto insn_inverse_char_set_7;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto lambda_12;

    case 3:
      current_block = (Rpc - LABEL_44_11);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_44_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_44_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_inverse_char_set_10)
DEFLABEL (insn_inverse_char_set_7)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_44_5);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_44_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;

DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_44_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rsp = (& (Rsp [1]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_44_12);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_7 7
#define ENVIRONMENT_LABEL_45_3 17
#define DEBUGGING_LABEL_45_2 16
#define OBJECT_45_0 15
#define EXECUTE_CACHE_45_9 9
#define EXECUTE_CACHE_45_8 11
#define EXECUTE_CACHE_45_6 13
#define FREE_REFERENCES_LABEL_45_0 8
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_45_4);
      goto insn_group_5;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_group_8)
DEFLABEL (insn_group_5)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (Wrd9.Obj) = (current_block [OBJECT_45_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_7);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define TAG_46_6 1
#define LABEL_46_7 7
#define TAG_46_8 2
#define LABEL_46_9 9
#define ENVIRONMENT_LABEL_46_3 14
#define DEBUGGING_LABEL_46_2 13
#define EXECUTE_CACHE_46_10 11
#define FREE_REFERENCES_LABEL_46_0 10
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_46_4);
      goto Z__insn_start_group_3;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_46_7);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_46_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__insn_start_group_6)
DEFLABEL (Z__insn_start_group_3)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_46_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_46_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_9);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define TAG_47_6 1
#define LABEL_47_7 7
#define TAG_47_8 2
#define LABEL_47_9 9
#define ENVIRONMENT_LABEL_47_3 14
#define DEBUGGING_LABEL_47_2 13
#define EXECUTE_CACHE_47_10 11
#define FREE_REFERENCES_LABEL_47_0 10
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_47_4);
      goto Z__insn_end_group_3;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_47_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__insn_end_group_6)
DEFLABEL (Z__insn_end_group_3)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_47_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_47_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_9);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define TAG_48_6 1
#define LABEL_48_7 7
#define TAG_48_8 2
#define LABEL_48_9 9
#define LABEL_48_10 11
#define ENVIRONMENT_LABEL_48_3 16
#define DEBUGGING_LABEL_48_2 15
#define EXECUTE_CACHE_48_11 13
#define FREE_REFERENCES_LABEL_48_0 12
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_48_4);
      goto insn_group_ref_4;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_48_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_48_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_group_ref_7)
DEFLABEL (insn_group_ref_4)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_48_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_48_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_10);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_9);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define TAG_49_6 1
#define LABEL_49_7 7
#define ENVIRONMENT_LABEL_49_3 12
#define DEBUGGING_LABEL_49_2 11
#define EXECUTE_CACHE_49_8 9
#define FREE_REFERENCES_LABEL_49_0 8
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_49_4);
      goto insn_seq_2;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_seq_5)
DEFLABEL (insn_seq_2)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_49_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_49_7);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_7 7
#define LABEL_50_9 9
#define TAG_50_10 3
#define LABEL_50_11 11
#define LABEL_50_12 13
#define ENVIRONMENT_LABEL_50_3 22
#define DEBUGGING_LABEL_50_2 21
#define EXECUTE_CACHE_50_13 15
#define EXECUTE_CACHE_50_8 17
#define EXECUTE_CACHE_50_6 19
#define FREE_REFERENCES_LABEL_50_0 14
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_50_4);
      goto insn_alt_5;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto lambda_3;

    case 3:
      current_block = (Rpc - LABEL_50_9);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_50_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_50_12);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_alt_8)
DEFLABEL (insn_alt_5)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (lambda_9)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_50_7);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_9])));
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

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_50_9);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_12);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_13]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define TAG_51_6 1
#define LABEL_51_7 7
#define ENVIRONMENT_LABEL_51_3 12
#define DEBUGGING_LABEL_51_2 11
#define EXECUTE_CACHE_51_8 9
#define FREE_REFERENCES_LABEL_51_0 8
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_51_4);
      goto insn_P_2;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_P_5)
DEFLABEL (insn_P_2)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_51_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_51_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define TAG_52_6 1
#define LABEL_52_7 7
#define ENVIRONMENT_LABEL_52_3 12
#define DEBUGGING_LABEL_52_2 11
#define EXECUTE_CACHE_52_8 9
#define FREE_REFERENCES_LABEL_52_0 8
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_52_4);
      goto insn_PP_2;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_52_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn_PP_5)
DEFLABEL (insn_PP_2)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_52_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_52_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_52_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define TAG_53_6 1
#define LABEL_53_7 7
#define TAG_53_8 2
#define LABEL_53_9 9
#define LABEL_53_10 11
#define LABEL_53_11 13
#define TAG_53_12 5
#define LABEL_53_14 15
#define ENVIRONMENT_LABEL_53_3 22
#define DEBUGGING_LABEL_53_2 21
#define EXECUTE_CACHE_53_15 17
#define EXECUTE_CACHE_53_13 19
#define FREE_REFERENCES_LABEL_53_0 16
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_53_4);
      goto insn___6;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_53_7);
      goto loop_11;

    case 3:
      current_block = (Rpc - LABEL_53_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_53_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_53_11);
      goto lambda_12;

    case 6:
      current_block = (Rpc - LABEL_53_14);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn___9)
DEFLABEL (insn___6)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_53_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_7])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  Wrd11 = Wrd15;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (loop_11)
  CLOSURE_HEADER (LABEL_53_7);

DEFLABEL (loop_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_11])));
  Rhp += 2;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd18 = Wrd15;
  ((Wrd18.pObj) [2]) = (Wrd8.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd22.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_53_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_53_9);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_53_11);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_13)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [0]) = (Wrd8.Obj);
  goto loop_4;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define TAG_54_6 1
#define LABEL_54_7 7
#define TAG_54_8 2
#define LABEL_54_9 9
#define LABEL_54_10 11
#define LABEL_54_11 13
#define TAG_54_12 5
#define LABEL_54_14 15
#define ENVIRONMENT_LABEL_54_3 22
#define DEBUGGING_LABEL_54_2 21
#define EXECUTE_CACHE_54_15 17
#define EXECUTE_CACHE_54_13 19
#define FREE_REFERENCES_LABEL_54_0 16
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_54_4);
      goto insn__P_6;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_54_7);
      goto loop_11;

    case 3:
      current_block = (Rpc - LABEL_54_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_54_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_54_11);
      goto lambda_12;

    case 6:
      current_block = (Rpc - LABEL_54_14);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn__P_9)
DEFLABEL (insn__P_6)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_54_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_7])));
  Rhp += 2;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  Wrd11 = Wrd15;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  ((Wrd11.pObj) [2]) = (Wrd14.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd16.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (loop_11)
  CLOSURE_HEADER (LABEL_54_7);

DEFLABEL (loop_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_54_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_54_11])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_54_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_54_9);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_54_11);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_54_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_13)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [0]) = (Wrd8.Obj);
  goto loop_4;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define TAG_55_6 1
#define LABEL_55_7 7
#define TAG_55_8 2
#define ENVIRONMENT_LABEL_55_3 9
#define DEBUGGING_LABEL_55_2 8
#define FREE_REFERENCES_LABEL_55_0 8
#define NUMBER_OF_LINKER_SECTIONS_55_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_55_4);
      goto Z__failure_chain_2;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_55_7);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__failure_chain_5)
DEFLABEL (Z__failure_chain_2)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_55_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55_5])));
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

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_55_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_55_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55_7])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd18.Obj) = ((Wrd16.pObj) [3]);
  (Rsp [0]) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_55_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [3]) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_6 5
#define LABEL_56_5 7
#define LABEL_56_8 9
#define TAG_56_9 3
#define LABEL_56_11 11
#define TAG_56_12 4
#define LABEL_56_13 13
#define ENVIRONMENT_LABEL_56_3 24
#define DEBUGGING_LABEL_56_2 23
#define EXECUTE_CACHE_56_14 15
#define EXECUTE_CACHE_56_10 17
#define EXECUTE_CACHE_56_7 19
#define FREE_REFERENCE_56_0 22
#define FREE_REFERENCES_LABEL_56_0 14
#define NUMBER_OF_LINKER_SECTIONS_56_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_56_4);
      goto insn____4;

    case 1:
      current_block = (Rpc - LABEL_56_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_56_5);
      goto lambda_3;

    case 3:
      current_block = (Rpc - LABEL_56_8);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_56_11);
      goto lambda_11;

    case 5:
      current_block = (Rpc - LABEL_56_13);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn____8)
DEFLABEL (insn____4)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_13;
  Wrd11 = Wrd15;

DEFLABEL (label_12)
  (Rsp [4]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_7]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_6])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_12;

DEFLABEL (lambda_9)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_56_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_56_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_56_8])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_10]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_56_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_56_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_56_11])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_56_11);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_56_13);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_6 5
#define LABEL_57_5 7
#define LABEL_57_8 9
#define TAG_57_9 3
#define LABEL_57_11 11
#define TAG_57_12 4
#define LABEL_57_13 13
#define ENVIRONMENT_LABEL_57_3 24
#define DEBUGGING_LABEL_57_2 23
#define EXECUTE_CACHE_57_14 15
#define EXECUTE_CACHE_57_10 17
#define EXECUTE_CACHE_57_7 19
#define FREE_REFERENCE_57_0 22
#define FREE_REFERENCES_LABEL_57_0 14
#define NUMBER_OF_LINKER_SECTIONS_57_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_57_4);
      goto insn___P_4;

    case 1:
      current_block = (Rpc - LABEL_57_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_57_5);
      goto lambda_3;

    case 3:
      current_block = (Rpc - LABEL_57_8);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_57_11);
      goto lambda_11;

    case 5:
      current_block = (Rpc - LABEL_57_13);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (insn___P_8)
DEFLABEL (insn___P_4)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_13;
  Wrd11 = Wrd15;

DEFLABEL (label_12)
  (Rsp [4]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_7]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_6])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_12;

DEFLABEL (lambda_9)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_57_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_8])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_10]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_57_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_11])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_57_11);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_13);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_6 5
#define LABEL_58_5 7
#define LABEL_58_7 9
#define LABEL_58_9 11
#define TAG_58_10 4
#define LABEL_58_11 13
#define ENVIRONMENT_LABEL_58_3 18
#define DEBUGGING_LABEL_58_2 17
#define EXECUTE_CACHE_58_8 15
#define FREE_REFERENCES_LABEL_58_0 14
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd28;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_58_4);
      goto Z__repeat_6;

    case 1:
      current_block = (Rpc - LABEL_58_6);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_58_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_58_9);
      goto lambda_11;

    case 5:
      current_block = (Rpc - LABEL_58_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__repeat_10)
DEFLABEL (Z__repeat_6)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if (! ((Wrd8.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd28.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_7);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_9])));
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

DEFLABEL (label_12)
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_14;
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_14;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = ((Wrd22.Lng) - (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_14;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_13)
  (Wrd26.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd26.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_14)
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_58_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_58_11);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define TAG_59_6 1
#define ENVIRONMENT_LABEL_59_3 10
#define DEBUGGING_LABEL_59_2 9
#define EXECUTE_CACHE_59_7 7
#define FREE_REFERENCES_LABEL_59_0 6
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_59_4);
      goto Z__repeat_exactly_1;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__repeat_exactly_4)
DEFLABEL (Z__repeat_exactly_1)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_59_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define ENVIRONMENT_LABEL_60_3 13
#define DEBUGGING_LABEL_60_2 12
#define OBJECT_60_0 11
#define EXECUTE_CACHE_60_7 7
#define EXECUTE_CACHE_60_6 9
#define FREE_REFERENCES_LABEL_60_0 6
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_60_4);
      goto Z__hybrid_chain_1;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__hybrid_chain_5)
DEFLABEL (Z__hybrid_chain_1)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_8;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) > 8L)
    goto label_7;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_6]));

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_7]));

DEFLABEL (label_8)
  (Wrd12.Obj) = (current_block [OBJECT_60_0]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define TAG_61_6 1
#define LABEL_61_7 7
#define LABEL_61_8 9
#define LABEL_61_9 11
#define LABEL_61_11 13
#define LABEL_61_10 15
#define ENVIRONMENT_LABEL_61_3 18
#define DEBUGGING_LABEL_61_2 17
#define OBJECT_61_0 16
#define FREE_REFERENCES_LABEL_61_0 16
#define NUMBER_OF_LINKER_SECTIONS_61_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_61_4);
      goto Z__immediate_chain_9;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto lambda_15;

    case 2:
      current_block = (Rpc - LABEL_61_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_61_8);
      goto loop_5;

    case 4:
      current_block = (Rpc - LABEL_61_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_61_11);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_61_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__immediate_chain_14)
DEFLABEL (Z__immediate_chain_9)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_61_5])));
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

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_61_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_7);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_61_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [5]));
  goto loop_5;

DEFLABEL (loop_16)
DEFLABEL (loop_5)
  DLINK_INTERRUPT_CHECK (25, LABEL_61_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_21;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_21;
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd55.Lng) < (Wrd61.Lng))
    goto label_18;

DEFLABEL (label_17)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  Rvl = ((Wrd28.pObj) [2]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_18)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd36.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_20;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd49.Lng) = ((Wrd51.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd49.Lng)))
    goto label_20;
  (Wrd52.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_19)
  Rdl = (& (Rsp [2]));
  goto loop_5;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_61_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_20)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_11]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_12)
  (Wrd39.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd39.Obj));
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd22.pObj) [3]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_11)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define TAG_62_6 1
#define LABEL_62_7 7
#define LABEL_62_8 9
#define TAG_62_9 3
#define LABEL_62_10 11
#define LABEL_62_11 13
#define TAG_62_12 5
#define LABEL_62_15 15
#define LABEL_62_13 17
#define LABEL_62_14 19
#define ENVIRONMENT_LABEL_62_3 22
#define DEBUGGING_LABEL_62_2 21
#define OBJECT_62_0 20
#define FREE_REFERENCES_LABEL_62_0 20
#define NUMBER_OF_LINKER_SECTIONS_62_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_62_4);
      goto Z__delayed_chain_11;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto lambda_17;

    case 2:
      current_block = (Rpc - LABEL_62_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_62_8);
      goto loop_7;

    case 4:
      current_block = (Rpc - LABEL_62_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_62_11);
      goto lambda_19;

    case 6:
      current_block = (Rpc - LABEL_62_15);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_62_13);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_62_14);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__delayed_chain_16)
DEFLABEL (Z__delayed_chain_11)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_5])));
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

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_62_5);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_8])));
  Rhp += 3;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  Wrd16 = Wrd20;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd14.Obj);
  ((Wrd16.pObj) [4]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_62_0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_7;

DEFLABEL (loop_18)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_62_8);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_24;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_24;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd35.Lng) < (Wrd39.Lng))
    goto label_21;

DEFLABEL (label_22)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  Rvl = ((Wrd21.pObj) [3]);
  goto label_20;

DEFLABEL (label_21)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_11])));
  Rhp += 3;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd30 = Wrd25;
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [4]);
  ((Wrd30.pObj) [2]) = (Wrd33.Obj);
  ((Wrd30.pObj) [3]) = (Wrd31.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [4]) = (Wrd27.Obj);
  Rvl = (Wrd24.Obj);

DEFLABEL (label_20)
DEFLABEL (label_23)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [2]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_21;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_62_11);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [4]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_26;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd25.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_26;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_25)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  goto loop_7;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_62_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_62_13);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_26)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [4]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_7 7
#define ENVIRONMENT_LABEL_63_3 14
#define DEBUGGING_LABEL_63_2 13
#define OBJECT_63_1 12
#define OBJECT_63_0 11
#define EXECUTE_CACHE_63_6 9
#define FREE_REFERENCES_LABEL_63_0 8
#define NUMBER_OF_LINKER_SECTIONS_63_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_63_4);
      goto get_index_2;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_63_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_index_6)
DEFLABEL (get_index_2)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_8;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd12.Lng))))
    goto label_8;
  (Wrd7.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_7)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_8)
  (Wrd15.Obj) = (current_block [OBJECT_63_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_7 7
#define ENVIRONMENT_LABEL_64_3 14
#define DEBUGGING_LABEL_64_2 13
#define OBJECT_64_1 12
#define OBJECT_64_0 11
#define EXECUTE_CACHE_64_6 9
#define FREE_REFERENCES_LABEL_64_0 8
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_64_4);
      goto next_char_2;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_64_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (next_char_6)
DEFLABEL (next_char_2)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_8;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_8;
  (Wrd7.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_7)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_8)
  (Wrd15.Obj) = (current_block [OBJECT_64_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_7 7
#define ENVIRONMENT_LABEL_65_3 14
#define DEBUGGING_LABEL_65_2 13
#define OBJECT_65_1 12
#define OBJECT_65_0 11
#define EXECUTE_CACHE_65_6 9
#define FREE_REFERENCES_LABEL_65_0 8
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_65_4);
      goto prev_char_2;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_65_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (prev_char_6)
DEFLABEL (prev_char_2)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_8;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd12.Lng))))
    goto label_8;
  (Wrd7.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_7)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_8)
  (Wrd15.Obj) = (current_block [OBJECT_65_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_7 7
#define ENVIRONMENT_LABEL_66_3 14
#define DEBUGGING_LABEL_66_2 13
#define OBJECT_66_1 12
#define OBJECT_66_0 11
#define EXECUTE_CACHE_66_6 9
#define FREE_REFERENCES_LABEL_66_0 8
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_66_4);
      goto next_position_2;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_66_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (next_position_6)
DEFLABEL (next_position_2)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_8;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd12.Lng))))
    goto label_8;
  (Wrd7.Obj) = ((Wrd10.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_7)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_8)
  (Wrd15.Obj) = (current_block [OBJECT_66_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_7 7
#define ENVIRONMENT_LABEL_67_3 14
#define DEBUGGING_LABEL_67_2 13
#define OBJECT_67_1 12
#define OBJECT_67_0 11
#define EXECUTE_CACHE_67_6 9
#define FREE_REFERENCES_LABEL_67_0 8
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_67_4);
      goto same_positionsP_2;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_67_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (same_positionsP_6)
DEFLABEL (same_positionsP_2)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_8;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd12.Lng))))
    goto label_8;
  (Wrd7.Obj) = ((Wrd10.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_7)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_8)
  (Wrd15.Obj) = (current_block [OBJECT_67_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_6 5
#define LABEL_68_5 7
#define LABEL_68_7 9
#define TAG_68_8 3
#define LABEL_68_11 11
#define ENVIRONMENT_LABEL_68_3 23
#define DEBUGGING_LABEL_68_2 22
#define OBJECT_68_2 21
#define OBJECT_68_1 20
#define OBJECT_68_0 19
#define EXECUTE_CACHE_68_10 13
#define EXECUTE_CACHE_68_9 15
#define FREE_REFERENCE_68_0 18
#define FREE_REFERENCES_LABEL_68_0 12
#define NUMBER_OF_LINKER_SECTIONS_68_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_68_4);
      goto Z__get_position_type_4;

    case 1:
      current_block = (Rpc - LABEL_68_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_68_7);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_68_11);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__get_position_type_9)
DEFLABEL (Z__get_position_type_4)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_13;
  Wrd8 = Wrd12;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_68_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_68_7])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_68_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_68_0]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_10]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_6])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_12;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_68_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_15;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_15;
  (Wrd8.Obj) = ((Wrd14.pObj) [2]);

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd24.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_15)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_68_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_2]), 2);

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define ENVIRONMENT_LABEL_69_3 7
#define DEBUGGING_LABEL_69_2 6
#define OBJECT_69_1 5
#define OBJECT_69_0 4
#define FREE_REFERENCES_LABEL_69_0 4
#define NUMBER_OF_LINKER_SECTIONS_69_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_69_4);
      goto Z__position_type_predicate_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__position_type_predicate_3)
DEFLABEL (Z__position_type_predicate_0)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_69_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define ENVIRONMENT_LABEL_70_3 7
#define DEBUGGING_LABEL_70_2 6
#define OBJECT_70_1 5
#define OBJECT_70_0 4
#define FREE_REFERENCES_LABEL_70_0 4
#define NUMBER_OF_LINKER_SECTIONS_70_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_70_4);
      goto Z__position_type_get_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__position_type_get_index_3)
DEFLABEL (Z__position_type_get_index_0)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_70_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define ENVIRONMENT_LABEL_71_3 7
#define DEBUGGING_LABEL_71_2 6
#define OBJECT_71_1 5
#define OBJECT_71_0 4
#define FREE_REFERENCES_LABEL_71_0 4
#define NUMBER_OF_LINKER_SECTIONS_71_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_71_4);
      goto Z__position_type_next_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__position_type_next_char_3)
DEFLABEL (Z__position_type_next_char_0)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_71_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define ENVIRONMENT_LABEL_72_3 7
#define DEBUGGING_LABEL_72_2 6
#define OBJECT_72_1 5
#define OBJECT_72_0 4
#define FREE_REFERENCES_LABEL_72_0 4
#define NUMBER_OF_LINKER_SECTIONS_72_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_72_4);
      goto Z__position_type_prev_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__position_type_prev_char_3)
DEFLABEL (Z__position_type_prev_char_0)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_72_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define ENVIRONMENT_LABEL_73_3 7
#define DEBUGGING_LABEL_73_2 6
#define OBJECT_73_1 5
#define OBJECT_73_0 4
#define FREE_REFERENCES_LABEL_73_0 4
#define NUMBER_OF_LINKER_SECTIONS_73_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_73_4);
      goto Z__position_type_next_position_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__position_type_next_position_3)
DEFLABEL (Z__position_type_next_position_0)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_73_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define ENVIRONMENT_LABEL_74_3 7
#define DEBUGGING_LABEL_74_2 6
#define OBJECT_74_1 5
#define OBJECT_74_0 4
#define FREE_REFERENCES_LABEL_74_0 4
#define NUMBER_OF_LINKER_SECTIONS_74_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_74_4);
      goto Z__position_type_sameP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__position_type_sameP_3)
DEFLABEL (Z__position_type_sameP_0)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_74_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_6 7
#define LABEL_75_7 9
#define ENVIRONMENT_LABEL_75_3 17
#define DEBUGGING_LABEL_75_2 16
#define OBJECT_75_3 15
#define OBJECT_75_2 14
#define OBJECT_75_1 13
#define OBJECT_75_0 12
#define FREE_REFERENCE_75_0 11
#define FREE_REFERENCES_LABEL_75_0 10
#define NUMBER_OF_LINKER_SECTIONS_75_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_75_4);
      goto Z__position_typeP_4;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_75_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_75_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__position_typeP_10)
DEFLABEL (Z__position_typeP_4)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 62))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_18)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd50.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd29.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_15;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_15;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_14)
  (Wrd46.Obj) = (* (Rsp++));
  if (! ((Wrd30.Obj) == (Wrd46.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_75_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_75_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define TAG_76_6 1
#define LABEL_76_9 7
#define LABEL_76_8 9
#define LABEL_76_11 11
#define LABEL_76_10 13
#define LABEL_76_15 15
#define LABEL_76_16 17
#define LABEL_76_12 19
#define TAG_76_13 8
#define LABEL_76_17 21
#define ENVIRONMENT_LABEL_76_3 39
#define DEBUGGING_LABEL_76_2 38
#define OBJECT_76_5 37
#define OBJECT_76_4 36
#define OBJECT_76_3 35
#define OBJECT_76_2 34
#define OBJECT_76_1 33
#define OBJECT_76_0 32
#define EXECUTE_CACHE_76_14 23
#define EXECUTE_CACHE_76_7 25
#define FREE_REFERENCE_76_1 28
#define FREE_REFERENCE_76_0 29
#define FREE_ASSIGNMENT_76_0 31
#define FREE_REFERENCES_LABEL_76_0 22
#define NUMBER_OF_LINKER_SECTIONS_76_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_76_4);
      goto define_position_type_9;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto lambda_18;

    case 2:
      current_block = (Rpc - LABEL_76_9);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_76_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_76_11);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_76_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_76_15);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_76_16);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_76_12);
      goto lambda_19;

    case 9:
      current_block = (Rpc - LABEL_76_17);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_position_type_17)
DEFLABEL (define_position_type_9)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_76_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_76_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_7]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_76_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (Wrd16.Obj) = ((Wrd12.pObj) [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_76_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_30;
  Wrd17 = Wrd21;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_0]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_76_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_76_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_28;
  Wrd8 = Wrd12;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_76_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_76_12])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [3]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_76_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [0]) = (Wrd12.Obj);
  Rvl = (current_block [OBJECT_76_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_2]), 2);

DEFLABEL (label_21)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_76_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_26;
  Wrd18 = Wrd22;

DEFLABEL (label_25)
  (Wrd27.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_76_0]));
  (Wrd36.Obj) = ((Wrd28.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd28.pObj) [0]) = (Wrd24.Obj);

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_76_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  if ((Wrd36.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_76_16])), (Wrd28.pObj), (Wrd24.Obj));

DEFLABEL (label_14)
  goto label_22;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76_15])), (Wrd19.pObj));

DEFLABEL (label_13)
  (Wrd18.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76_11])), (Wrd9.pObj));

DEFLABEL (label_12)
  (Wrd8.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76_9])), (Wrd18.pObj));

DEFLABEL (label_11)
  (Wrd17.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_76_12);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_35;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_35;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_34)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  if ((Wrd5.Obj) == (Wrd24.Obj))
    goto label_32;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_31;

DEFLABEL (label_32)
  Rvl = (current_block [OBJECT_76_5]);

DEFLABEL (label_31)
DEFLABEL (label_33)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_76_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_4]), 2);

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define ENVIRONMENT_LABEL_77_3 6
#define DEBUGGING_LABEL_77_2 5
#define OBJECT_77_0 4
#define FREE_REFERENCES_LABEL_77_0 4
#define NUMBER_OF_LINKER_SECTIONS_77_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_77_4);
      goto Z__start_group_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__start_group_5)
DEFLABEL (Z__start_group_2)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_77_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_7 5
#define LABEL_78_5 7
#define LABEL_78_8 9
#define LABEL_78_9 11
#define LABEL_78_10 13
#define LABEL_78_13 15
#define LABEL_78_14 17
#define ENVIRONMENT_LABEL_78_3 30
#define DEBUGGING_LABEL_78_2 29
#define OBJECT_78_3 28
#define OBJECT_78_2 27
#define OBJECT_78_1 26
#define OBJECT_78_0 25
#define EXECUTE_CACHE_78_12 19
#define EXECUTE_CACHE_78_11 21
#define EXECUTE_CACHE_78_6 23
#define FREE_REFERENCES_LABEL_78_0 18
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_78_4);
      goto Z__end_group_12;

    case 1:
      current_block = (Rpc - LABEL_78_7);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_78_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_78_9);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_78_10);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_78_13);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_78_14);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__end_group_19)
DEFLABEL (Z__end_group_12)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_78_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;

DEFLABEL (label_25)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_78_2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_78_7);

DEFLABEL (label_24)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_10]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_78_10);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_23;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_22)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_21;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_20)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.Obj) = (current_block [OBJECT_78_1]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd32.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd33.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_3]), 1);

DEFLABEL (label_17)
  (Wrd14.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 1);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_26)
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_30;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_29)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_28;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_27)
  if ((Wrd16.Obj) == (current_block [OBJECT_78_1]))
    goto label_24;
  goto label_25;

DEFLABEL (label_28)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 1);

DEFLABEL (label_15)
  (Wrd16.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 1);

DEFLABEL (label_14)
  (Wrd7.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_7 5
#define LABEL_79_5 7
#define LABEL_79_9 9
#define LABEL_79_10 11
#define LABEL_79_13 13
#define LABEL_79_14 15
#define LABEL_79_15 17
#define LABEL_79_16 19
#define LABEL_79_17 21
#define LABEL_79_12 23
#define ENVIRONMENT_LABEL_79_3 40
#define DEBUGGING_LABEL_79_2 39
#define OBJECT_79_3 38
#define OBJECT_79_2 37
#define OBJECT_79_1 36
#define OBJECT_79_0 35
#define EXECUTE_CACHE_79_19 25
#define EXECUTE_CACHE_79_18 27
#define EXECUTE_CACHE_79_11 29
#define EXECUTE_CACHE_79_8 31
#define EXECUTE_CACHE_79_6 33
#define FREE_REFERENCES_LABEL_79_0 24
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd65;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_79_4);
      goto Z__find_group_12;

    case 1:
      current_block = (Rpc - LABEL_79_7);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_79_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_79_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_79_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_79_13);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_79_14);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_79_15);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_79_16);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_79_17);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_79_12);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__find_group_22)
DEFLABEL (Z__find_group_12)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_79_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_8]));

DEFLABEL (label_23)
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_38;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_37)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_36;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_35)
  if (! ((Wrd16.Obj) == (current_block [OBJECT_79_1])))
    goto label_34;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_7]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (current_block [OBJECT_79_2]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_79_7);

DEFLABEL (label_34)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_12]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_33;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_32)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_31;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd36.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_30)
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_29;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_28)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_27;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [1]);

DEFLABEL (label_26)
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_25;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_79_12);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_19]));

DEFLABEL (label_25)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_17]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_3]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_16]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_19)
  (Wrd50.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_15]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_3]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_17)
  (Wrd36.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_13]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_16)
  (Wrd27.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_36)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_10]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_15)
  (Wrd16.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_14)
  (Wrd7.Obj) = Rvl;
  goto label_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_7 7
#define LABEL_80_8 9
#define LABEL_80_9 11
#define LABEL_80_13 13
#define LABEL_80_10 15
#define LABEL_80_15 17
#define ENVIRONMENT_LABEL_80_3 34
#define DEBUGGING_LABEL_80_2 33
#define OBJECT_80_3 32
#define OBJECT_80_2 31
#define OBJECT_80_1 30
#define OBJECT_80_0 29
#define EXECUTE_CACHE_80_16 19
#define EXECUTE_CACHE_80_14 21
#define EXECUTE_CACHE_80_12 23
#define EXECUTE_CACHE_80_11 25
#define EXECUTE_CACHE_80_6 27
#define FREE_REFERENCES_LABEL_80_0 18
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_80_4);
      goto Z__group_chars_12;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_80_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_80_8);
      goto loop_9;

    case 4:
      current_block = (Rpc - LABEL_80_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_80_13);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_80_10);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_80_15);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__group_chars_16)
DEFLABEL (Z__group_chars_12)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_80_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_19;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd12.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd10.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd19.Obj) = (current_block [OBJECT_80_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto loop_9;

DEFLABEL (label_19)
  (Wrd15.Obj) = (current_block [OBJECT_80_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (loop_17)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_80_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_80_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_12]));

DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_80_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_21)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_80_15);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_9;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_80_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_80_13);
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define LABEL_81_10 7
#define LABEL_81_11 9
#define LABEL_81_12 11
#define LABEL_81_6 13
#define LABEL_81_7 15
#define LABEL_81_15 17
#define LABEL_81_16 19
#define LABEL_81_9 21
#define LABEL_81_18 23
#define LABEL_81_19 25
#define LABEL_81_17 27
#define LABEL_81_20 29
#define ENVIRONMENT_LABEL_81_3 42
#define DEBUGGING_LABEL_81_2 41
#define OBJECT_81_3 40
#define OBJECT_81_2 39
#define OBJECT_81_1 38
#define OBJECT_81_0 37
#define EXECUTE_CACHE_81_14 31
#define EXECUTE_CACHE_81_13 33
#define EXECUTE_CACHE_81_8 35
#define FREE_REFERENCES_LABEL_81_0 30
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_81_4);
      goto Z__convert_groups_15;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_81_10);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_81_11);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_81_12);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_81_6);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_81_7);
      goto lambda_13;

    case 7:
      current_block = (Rpc - LABEL_81_15);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_81_16);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_81_9);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_81_18);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_81_19);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_81_17);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_81_20);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__convert_groups_26)
DEFLABEL (Z__convert_groups_15)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_8]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_81_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_14]));

DEFLABEL (lambda_27)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_81_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_40;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_39)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_38;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_37)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_36;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_81_9);
  (Wrd9.Obj) = (current_block [OBJECT_81_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_17]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_34;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_33)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_32;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_81_17);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_30;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_29)
  (Wrd19.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_20]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 1);

DEFLABEL (label_24)
  (Wrd10.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_19]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_18]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_0]), 1);

DEFLABEL (label_22)
  (Wrd13.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_12]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_0]), 1);

DEFLABEL (label_18)
  (Wrd17.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_0]), 1);

DEFLABEL (label_17)
  (Wrd8.Obj) = Rvl;
  goto label_39;

DEFLABEL (lambda_28)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_81_7);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_47;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_46)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_45;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_44)
  if ((Wrd14.Obj) == (current_block [OBJECT_81_2]))
    goto label_42;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_41;

DEFLABEL (label_42)
  Rvl = (current_block [OBJECT_81_3]);

DEFLABEL (label_41)
DEFLABEL (label_43)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_0]), 1);

DEFLABEL (label_21)
  (Wrd14.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_0]), 1);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define LABEL_82_7 7
#define LABEL_82_9 9
#define LABEL_82_10 11
#define TAG_82_11 4
#define LABEL_82_14 13
#define LABEL_82_16 15
#define ENVIRONMENT_LABEL_82_3 31
#define DEBUGGING_LABEL_82_2 30
#define OBJECT_82_0 29
#define EXECUTE_CACHE_82_17 17
#define EXECUTE_CACHE_82_15 19
#define EXECUTE_CACHE_82_13 21
#define EXECUTE_CACHE_82_12 23
#define EXECUTE_CACHE_82_8 25
#define EXECUTE_CACHE_82_6 27
#define FREE_REFERENCES_LABEL_82_0 16
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_82_4);
      goto regsexp_match_input_port_8;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_82_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_82_9);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_82_10);
      goto lambda_12;

    case 5:
      current_block = (Rpc - LABEL_82_14);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_82_16);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (regsexp_match_input_port_11)
DEFLABEL (regsexp_match_input_port_8)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_82_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_82_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_82_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_82_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_82_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_82_10])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_82_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_13]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_82_10);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_82_14);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_82_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  Rvl = (Rsp [0]);

DEFLABEL (label_13)
DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define ENVIRONMENT_LABEL_83_3 11
#define DEBUGGING_LABEL_83_2 10
#define OBJECT_83_0 9
#define EXECUTE_CACHE_83_6 7
#define FREE_REFERENCES_LABEL_83_0 6
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_83_4);
      goto Z__char_source__position_1;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__char_source__position_4)
DEFLABEL (Z__char_source__position_1)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_83_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_6]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define ENVIRONMENT_LABEL_84_3 7
#define DEBUGGING_LABEL_84_2 6
#define OBJECT_84_1 5
#define OBJECT_84_0 4
#define FREE_REFERENCES_LABEL_84_0 4
#define NUMBER_OF_LINKER_SECTIONS_84_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_84_4);
      goto Z__source_position_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__source_position_index_3)
DEFLABEL (Z__source_position_index_0)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_84_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define ENVIRONMENT_LABEL_85_3 7
#define DEBUGGING_LABEL_85_2 6
#define OBJECT_85_1 5
#define OBJECT_85_0 4
#define FREE_REFERENCES_LABEL_85_0 4
#define NUMBER_OF_LINKER_SECTIONS_85_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_85_4);
      goto Z__source_position_next_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__source_position_next_char_3)
DEFLABEL (Z__source_position_next_char_0)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_85_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define ENVIRONMENT_LABEL_86_3 7
#define DEBUGGING_LABEL_86_2 6
#define OBJECT_86_1 5
#define OBJECT_86_0 4
#define FREE_REFERENCES_LABEL_86_0 4
#define NUMBER_OF_LINKER_SECTIONS_86_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_86_4);
      goto Z__source_position_prev_char_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__source_position_prev_char_3)
DEFLABEL (Z__source_position_prev_char_0)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_86_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define ENVIRONMENT_LABEL_87_3 7
#define DEBUGGING_LABEL_87_2 6
#define OBJECT_87_1 5
#define OBJECT_87_0 4
#define FREE_REFERENCES_LABEL_87_0 4
#define NUMBER_OF_LINKER_SECTIONS_87_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_87_4);
      goto Z__source_position_source_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__source_position_source_3)
DEFLABEL (Z__source_position_source_0)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_87_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_6 7
#define LABEL_88_7 9
#define ENVIRONMENT_LABEL_88_3 17
#define DEBUGGING_LABEL_88_2 16
#define OBJECT_88_3 15
#define OBJECT_88_2 14
#define OBJECT_88_1 13
#define OBJECT_88_0 12
#define FREE_REFERENCE_88_0 11
#define FREE_REFERENCES_LABEL_88_0 10
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_88_4);
      goto Z__source_positionP_4;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_88_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_88_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__source_positionP_10)
DEFLABEL (Z__source_positionP_4)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 62))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_18)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd50.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_0]));
  (Wrd29.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_15;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_15;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_14)
  (Wrd46.Obj) = (* (Rsp++));
  if (! ((Wrd30.Obj) == (Wrd46.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_88_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_88_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define ENVIRONMENT_LABEL_89_3 7
#define DEBUGGING_LABEL_89_2 6
#define OBJECT_89_1 5
#define OBJECT_89_0 4
#define FREE_REFERENCES_LABEL_89_0 4
#define NUMBER_OF_LINKER_SECTIONS_89_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_89_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_89_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define ENVIRONMENT_LABEL_90_3 7
#define DEBUGGING_LABEL_90_2 6
#define OBJECT_90_1 5
#define OBJECT_90_0 4
#define FREE_REFERENCES_LABEL_90_0 4
#define NUMBER_OF_LINKER_SECTIONS_90_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_90_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_90_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define ENVIRONMENT_LABEL_91_3 7
#define DEBUGGING_LABEL_91_2 6
#define OBJECT_91_1 5
#define OBJECT_91_0 4
#define FREE_REFERENCES_LABEL_91_0 4
#define NUMBER_OF_LINKER_SECTIONS_91_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_91_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_91_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define LABEL_92_7 7
#define LABEL_92_6 9
#define LABEL_92_8 11
#define LABEL_92_9 13
#define ENVIRONMENT_LABEL_92_3 22
#define DEBUGGING_LABEL_92_2 21
#define OBJECT_92_3 20
#define OBJECT_92_2 19
#define OBJECT_92_1 18
#define OBJECT_92_0 17
#define EXECUTE_CACHE_92_10 15
#define FREE_REFERENCES_LABEL_92_0 14
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_92_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_92_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_92_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_92_8);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_92_9);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_13)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_20)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_19;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_19;
  (Wrd26.Obj) = ((Wrd30.pObj) [5]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_18)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_92_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_17;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_17;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_16)
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd22.Lng) = ((Wrd21.Lng) + 1L);
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_15;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_15;
  (Wrd24.Obj) = ((Wrd30.pObj) [5]);

DEFLABEL (label_14)
  (Rsp [3]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_10]));

DEFLABEL (label_15)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_92_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 2);

DEFLABEL (label_11)
  (Wrd24.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_92_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 2);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_92_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_92_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_5 5
#define LABEL_93_6 7
#define LABEL_93_7 9
#define LABEL_93_8 11
#define ENVIRONMENT_LABEL_93_3 17
#define DEBUGGING_LABEL_93_2 16
#define OBJECT_93_3 15
#define OBJECT_93_2 14
#define OBJECT_93_1 13
#define OBJECT_93_0 12
#define FREE_REFERENCES_LABEL_93_0 12
#define NUMBER_OF_LINKER_SECTIONS_93_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd56;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_93_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_93_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_93_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_93_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_93_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_12)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_21;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd29.Lng))))
    goto label_21;
  (Wrd21.Obj) = ((Wrd27.pObj) [5]);

DEFLABEL (label_20)
  (Wrd37.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd37.Obj))
    goto label_15;

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_19;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd48.Lng))))
    goto label_19;
  (Wrd42.Obj) = ((Wrd46.pObj) [2]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_18)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_17;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd64.Lng))))
    goto label_17;
  (Wrd56.Obj) = ((Wrd62.pObj) [2]);

DEFLABEL (label_16)
  (Wrd72.Obj) = (* (Rsp++));
  if (! ((Wrd56.Obj) == (Wrd72.Obj)))
    goto label_14;
  Rvl = (current_block [OBJECT_93_3]);
  goto label_13;

DEFLABEL (label_17)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (current_block [OBJECT_93_2]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_8]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 2);

DEFLABEL (label_10)
  (Wrd56.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (current_block [OBJECT_93_2]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_7]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_93_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 2);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_93_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define LABEL_94_9 7
#define LABEL_94_10 9
#define LABEL_94_7 11
#define LABEL_94_11 13
#define LABEL_94_12 15
#define ENVIRONMENT_LABEL_94_3 34
#define DEBUGGING_LABEL_94_2 33
#define OBJECT_94_3 32
#define OBJECT_94_2 31
#define OBJECT_94_1 30
#define OBJECT_94_0 29
#define EXECUTE_CACHE_94_16 17
#define EXECUTE_CACHE_94_15 19
#define EXECUTE_CACHE_94_14 21
#define EXECUTE_CACHE_94_13 23
#define EXECUTE_CACHE_94_8 25
#define EXECUTE_CACHE_94_6 27
#define FREE_REFERENCES_LABEL_94_0 16
#define NUMBER_OF_LINKER_SECTIONS_94_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd43;
  machine_word Wrd44;
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
      current_block = (Rpc - LABEL_94_4);
      goto regsexp_match_string_15;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_94_9);
      goto continuation_9;

    case 3:
      current_block = (Rpc - LABEL_94_10);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_94_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_94_11);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_94_12);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (regsexp_match_string_19)
DEFLABEL (regsexp_match_string_15)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_94_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_94_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_94_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_94_7);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_25;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [4]);
  if ((Wrd16.Obj) == (current_block [OBJECT_94_2]))
    goto label_23;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_94_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_94_10);
  (Wrd43.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_22)
  (Wrd26.Obj) = (Rsp [3]);
  if ((Wrd26.Obj) == (current_block [OBJECT_94_2]))
    goto label_21;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_94_0]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_94_9);
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_20)
  (Wrd35.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_94_12);
  (Wrd9.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_16]));

DEFLABEL (label_21)
  (Wrd34.Obj) = (current_block [OBJECT_94_3]);
  (* (--Rsp)) = (Wrd34.Obj);
  goto label_20;

DEFLABEL (label_23)
  (Wrd25.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd25.Obj);
  goto label_22;

DEFLABEL (label_25)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define ENVIRONMENT_LABEL_95_3 7
#define DEBUGGING_LABEL_95_2 6
#define OBJECT_95_1 5
#define OBJECT_95_0 4
#define FREE_REFERENCES_LABEL_95_0 4
#define NUMBER_OF_LINKER_SECTIONS_95_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_95_4);
      goto Z__substring_string_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__substring_string_3)
DEFLABEL (Z__substring_string_0)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_95_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define ENVIRONMENT_LABEL_96_3 7
#define DEBUGGING_LABEL_96_2 6
#define OBJECT_96_1 5
#define OBJECT_96_0 4
#define FREE_REFERENCES_LABEL_96_0 4
#define NUMBER_OF_LINKER_SECTIONS_96_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_96_4);
      goto Z__substring_start_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__substring_start_3)
DEFLABEL (Z__substring_start_0)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_96_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define ENVIRONMENT_LABEL_97_3 7
#define DEBUGGING_LABEL_97_2 6
#define OBJECT_97_1 5
#define OBJECT_97_0 4
#define FREE_REFERENCES_LABEL_97_0 4
#define NUMBER_OF_LINKER_SECTIONS_97_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_97_4);
      goto Z__substring_end_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__substring_end_3)
DEFLABEL (Z__substring_end_0)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_97_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define LABEL_98_5 5
#define LABEL_98_6 7
#define LABEL_98_7 9
#define ENVIRONMENT_LABEL_98_3 17
#define DEBUGGING_LABEL_98_2 16
#define OBJECT_98_3 15
#define OBJECT_98_2 14
#define OBJECT_98_1 13
#define OBJECT_98_0 12
#define FREE_REFERENCE_98_0 11
#define FREE_REFERENCES_LABEL_98_0 10
#define NUMBER_OF_LINKER_SECTIONS_98_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_98_4);
      goto Z__substringP_4;

    case 1:
      current_block = (Rpc - LABEL_98_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_98_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_98_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__substringP_10)
DEFLABEL (Z__substringP_4)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 62))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));

DEFLABEL (label_18)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd50.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_98_0]));
  (Wrd29.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_15;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd38.Lng))))
    goto label_15;
  (Wrd30.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_14)
  (Wrd46.Obj) = (* (Rsp++));
  if (! ((Wrd30.Obj) == (Wrd46.Obj)))
    goto label_12;
  Rvl = (current_block [OBJECT_98_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_98_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define ENVIRONMENT_LABEL_99_3 8
#define DEBUGGING_LABEL_99_2 7
#define EXECUTE_CACHE_99_5 5
#define FREE_REFERENCES_LABEL_99_0 4
#define NUMBER_OF_LINKER_SECTIONS_99_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_99_4);
      goto Z__string_positionP_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__string_positionP_5)
DEFLABEL (Z__string_positionP_2)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define ENVIRONMENT_LABEL_100_3 5
#define DEBUGGING_LABEL_100_2 4
#define FREE_REFERENCES_LABEL_100_0 4
#define NUMBER_OF_LINKER_SECTIONS_100_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_100_4);
      goto Z__string_position_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__string_position_index_3)
DEFLABEL (Z__string_position_index_0)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define ENVIRONMENT_LABEL_101_3 7
#define DEBUGGING_LABEL_101_2 6
#define OBJECT_101_1 5
#define OBJECT_101_0 4
#define FREE_REFERENCES_LABEL_101_0 4
#define NUMBER_OF_LINKER_SECTIONS_101_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_101_4);
      goto Z__string_position_string_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__string_position_string_4)
DEFLABEL (Z__string_position_string_1)
  INTERRUPT_CHECK (26, LABEL_101_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_101_0]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_5;
  Rvl = ((Wrd16.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define ENVIRONMENT_LABEL_102_3 7
#define DEBUGGING_LABEL_102_2 6
#define OBJECT_102_1 5
#define OBJECT_102_0 4
#define FREE_REFERENCES_LABEL_102_0 4
#define NUMBER_OF_LINKER_SECTIONS_102_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_102_4);
      goto Z__string_position_start_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__string_position_start_4)
DEFLABEL (Z__string_position_start_1)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_102_0]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_5;
  Rvl = ((Wrd16.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_103_4 3
#define ENVIRONMENT_LABEL_103_3 7
#define DEBUGGING_LABEL_103_2 6
#define OBJECT_103_1 5
#define OBJECT_103_0 4
#define FREE_REFERENCES_LABEL_103_0 4
#define NUMBER_OF_LINKER_SECTIONS_103_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_103 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_103_4);
      goto Z__string_position_end_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__string_position_end_4)
DEFLABEL (Z__string_position_end_1)
  INTERRUPT_CHECK (26, LABEL_103_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103_0]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_5;
  Rvl = ((Wrd16.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_104_4 3
#define ENVIRONMENT_LABEL_104_3 5
#define DEBUGGING_LABEL_104_2 4
#define FREE_REFERENCES_LABEL_104_0 4
#define NUMBER_OF_LINKER_SECTIONS_104_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_104 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_104_4);
      goto lambda_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_104_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_105_5 3
#define LABEL_105_6 5
#define LABEL_105_4 7
#define ENVIRONMENT_LABEL_105_3 13
#define DEBUGGING_LABEL_105_2 12
#define OBJECT_105_3 11
#define OBJECT_105_2 10
#define OBJECT_105_1 9
#define OBJECT_105_0 8
#define FREE_REFERENCES_LABEL_105_0 8
#define NUMBER_OF_LINKER_SECTIONS_105_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_105 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_105_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_105_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_105_4);
      goto lambda_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_14)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_105_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_105_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (((unsigned long) 3L) < ((unsigned long) (Wrd21.Lng)))
    goto label_16;

DEFLABEL (label_15)
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_3]), 2);

DEFLABEL (label_16)
  (Wrd13.Obj) = ((Wrd19.pObj) [4]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_21)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [0]);
  (Wrd25.Obj) = (* (Rsp++));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd26.Lng) < (Wrd27.Lng))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_5]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_105_1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd46.Lng))))
    goto label_15;
  (Wrd38.Obj) = ((Wrd44.pObj) [2]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_20)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [0]);
  (Rsp [1]) = (Wrd47.Obj);
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if ((Wrd68.uLng) == 30)
    goto label_19;

DEFLABEL (label_18)
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_2]), 2);

DEFLABEL (label_19)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_18;
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [1]);
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd65.Obj));
  if (! (((unsigned long) (Wrd62.Lng)) < ((unsigned long) (Wrd66.Lng))))
    goto label_18;
  (Wrd53.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  (Wrd56.pChr) = (& ((Wrd64.pChr) [(Wrd53.Lng)]));
  (Wrd57.uLng) = ((unsigned long) (((unsigned char *) (Wrd56.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  Rvl = (MAKE_OBJECT (2, (Wrd57.uLng)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_105_5);
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_105_6);
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_106_5 3
#define LABEL_106_6 5
#define LABEL_106_4 7
#define ENVIRONMENT_LABEL_106_3 13
#define DEBUGGING_LABEL_106_2 12
#define OBJECT_106_3 11
#define OBJECT_106_2 10
#define OBJECT_106_1 9
#define OBJECT_106_0 8
#define FREE_REFERENCES_LABEL_106_0 8
#define NUMBER_OF_LINKER_SECTIONS_106_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_106 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_106_5);
      goto continuation_6;

    case 1:
      current_block = (Rpc - LABEL_106_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_106_4);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_106_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_106_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng)))
    goto label_17;

DEFLABEL (label_16)
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_3]), 2);

DEFLABEL (label_17)
  (Wrd13.Obj) = ((Wrd19.pObj) [3]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_22)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [0]);
  (Wrd25.Obj) = (* (Rsp++));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd26.Lng) > (Wrd27.Lng))
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_5]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_106_1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd46.Lng))))
    goto label_16;
  (Wrd38.Obj) = ((Wrd44.pObj) [2]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_21)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd52.Lng) = ((Wrd51.Lng) - 1L);
  (Wrd50.Obj) = (LONG_TO_FIXNUM (Wrd52.Lng));
  (Rsp [1]) = (Wrd50.Obj);
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 30)
    goto label_20;

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_2]), 2);

DEFLABEL (label_20)
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_19;
  Wrd65 = Wrd52;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [1]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) (Wrd65.Lng)) < ((unsigned long) (Wrd69.Lng))))
    goto label_19;
  (Wrd56.uLng) = (OBJECT_DATUM (Wrd50.Obj));
  (Wrd59.pChr) = (& ((Wrd67.pChr) [(Wrd56.Lng)]));
  (Wrd60.uLng) = ((unsigned long) (((unsigned char *) (Wrd59.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  Rvl = (MAKE_OBJECT (2, (Wrd60.uLng)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_106_5);
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_106_6);
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_107_4 3
#define ENVIRONMENT_LABEL_107_3 5
#define DEBUGGING_LABEL_107_2 4
#define FREE_REFERENCES_LABEL_107_0 4
#define NUMBER_OF_LINKER_SECTIONS_107_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_107 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_107_4);
      goto lambda_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_107_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Wrd11.Obj) = ((Wrd7.pObj) [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_108_4 3
#define ENVIRONMENT_LABEL_108_3 6
#define DEBUGGING_LABEL_108_2 5
#define OBJECT_108_0 4
#define FREE_REFERENCES_LABEL_108_0 4
#define NUMBER_OF_LINKER_SECTIONS_108_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
regsexp_so_code_108 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_108_4);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_8)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_108_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);
  if ((Wrd5.Obj) == (Wrd8.Obj))
    goto label_11;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd13.Obj) = ((Wrd7.pObj) [0]);
  (Wrd16.Obj) = ((Wrd10.pObj) [0]);
  if (! ((Wrd13.Obj) == (Wrd16.Obj)))
    goto label_10;
  Rvl = (current_block [OBJECT_108_0]);
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_15 13
#define LABEL_10 15
#define LABEL_13 17
#define LABEL_19 19
#define LABEL_14 21
#define LABEL_17 23
#define LABEL_18 25
#define LABEL_21 27
#define LABEL_22 29
#define LABEL_24 31
#define LABEL_25 33
#define LABEL_26 35
#define LABEL_27 37
#define LABEL_28 39
#define LABEL_29 41
#define LABEL_30 43
#define LABEL_31 45
#define LABEL_32 47
#define LABEL_33 49
#define LABEL_34 51
#define LABEL_35 53
#define LABEL_36 55
#define LABEL_37 57
#define LABEL_38 59
#define LABEL_39 61
#define LABEL_40 63
#define LABEL_41 65
#define LABEL_42 67
#define LABEL_43 69
#define LABEL_44 71
#define LABEL_45 73
#define LABEL_46 75
#define LABEL_47 77
#define LABEL_52 79
#define LABEL_48 81
#define LABEL_50 83
#define LABEL_51 85
#define LABEL_54 87
#define LABEL_59 89
#define LABEL_55 91
#define TAG_56 44
#define LABEL_57 93
#define LABEL_58 95
#define LABEL_60 97
#define LABEL_61 99
#define LABEL_65 101
#define LABEL_62 103
#define LABEL_63 105
#define LABEL_64 107
#define LABEL_66 109
#define LABEL_71 111
#define LABEL_67 113
#define TAG_68 55
#define LABEL_69 115
#define LABEL_70 117
#define LABEL_72 119
#define LABEL_74 121
#define LABEL_73 123
#define LABEL_76 125
#define LABEL_80 127
#define LABEL_77 129
#define LABEL_78 131
#define LABEL_79 133
#define LABEL_81 135
#define LABEL_86 137
#define LABEL_82 139
#define TAG_83 68
#define LABEL_84 141
#define LABEL_85 143
#define LABEL_87 145
#define LABEL_88 147
#define LABEL_89 149
#define LABEL_90 151
#define LABEL_91 153
#define ENVIRONMENT_LABEL_3 282
#define DEBUGGING_LABEL_2 281
#define PURIFICATION_ROOT 280
#define OBJECT_98 279
#define OBJECT_97 278
#define OBJECT_96 277
#define OBJECT_95 276
#define OBJECT_94 275
#define OBJECT_93 274
#define OBJECT_92 273
#define OBJECT_91 272
#define OBJECT_90 271
#define OBJECT_89 270
#define OBJECT_88 269
#define OBJECT_87 268
#define OBJECT_86 267
#define OBJECT_85 266
#define OBJECT_84 265
#define OBJECT_83 264
#define OBJECT_82 263
#define OBJECT_81 262
#define OBJECT_80 261
#define OBJECT_79 260
#define OBJECT_78 259
#define OBJECT_77 258
#define OBJECT_76 257
#define OBJECT_75 256
#define OBJECT_74 255
#define OBJECT_73 254
#define OBJECT_72 253
#define OBJECT_71 252
#define OBJECT_70 251
#define OBJECT_69 250
#define OBJECT_68 249
#define OBJECT_67 248
#define OBJECT_66 247
#define OBJECT_65 246
#define OBJECT_64 245
#define OBJECT_63 244
#define OBJECT_62 243
#define OBJECT_61 242
#define OBJECT_60 241
#define OBJECT_59 240
#define OBJECT_58 239
#define OBJECT_57 238
#define OBJECT_56 237
#define OBJECT_55 236
#define OBJECT_54 235
#define OBJECT_53 234
#define OBJECT_52 233
#define OBJECT_51 232
#define OBJECT_50 231
#define OBJECT_49 230
#define OBJECT_48 229
#define OBJECT_47 228
#define OBJECT_46 227
#define OBJECT_45 226
#define OBJECT_44 225
#define OBJECT_43 224
#define OBJECT_42 223
#define OBJECT_41 222
#define OBJECT_40 221
#define OBJECT_39 220
#define OBJECT_38 219
#define OBJECT_37 218
#define OBJECT_36 217
#define OBJECT_35 216
#define OBJECT_34 215
#define OBJECT_33 214
#define OBJECT_32 213
#define OBJECT_31 212
#define OBJECT_30 211
#define OBJECT_29 210
#define OBJECT_28 209
#define OBJECT_27 208
#define OBJECT_26 207
#define OBJECT_25 206
#define OBJECT_24 205
#define OBJECT_23 204
#define OBJECT_22 203
#define OBJECT_21 202
#define OBJECT_20 201
#define OBJECT_19 200
#define OBJECT_18 199
#define OBJECT_17 198
#define OBJECT_16 197
#define OBJECT_15 196
#define OBJECT_14 195
#define OBJECT_13 194
#define OBJECT_12 193
#define OBJECT_11 192
#define OBJECT_10 191
#define OBJECT_9 190
#define OBJECT_8 189
#define OBJECT_7 188
#define OBJECT_6 187
#define OBJECT_5 186
#define OBJECT_4 185
#define OBJECT_3 184
#define OBJECT_2 183
#define OBJECT_1 182
#define OBJECT_0 181
#define EXECUTE_CACHE_75 155
#define EXECUTE_CACHE_23 157
#define EXECUTE_CACHE_20 159
#define EXECUTE_CACHE_16 161
#define EXECUTE_CACHE_12 163
#define EXECUTE_CACHE_8 165
#define FREE_REFERENCE_5 168
#define FREE_REFERENCE_4 169
#define FREE_REFERENCE_3 170
#define FREE_REFERENCE_2 171
#define FREE_REFERENCE_1 172
#define FREE_REFERENCE_0 173
#define GLOBAL_EXECUTE_CACHE_53 175
#define GLOBAL_EXECUTE_CACHE_49 177
#define GLOBAL_EXECUTE_CACHE_5 179
#define FREE_REFERENCES_LABEL_0 154
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
regsexp_so_7bbca1aae24de1cb (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_84;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_15);
      goto label_85;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_19);
      goto label_86;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_21);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_24);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_25);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_26);
      goto continuation_13;

    case 17:
      current_block = (Rpc - LABEL_27);
      goto continuation_14;

    case 18:
      current_block = (Rpc - LABEL_28);
      goto continuation_15;

    case 19:
      current_block = (Rpc - LABEL_29);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_30);
      goto continuation_17;

    case 21:
      current_block = (Rpc - LABEL_31);
      goto continuation_18;

    case 22:
      current_block = (Rpc - LABEL_32);
      goto continuation_19;

    case 23:
      current_block = (Rpc - LABEL_33);
      goto continuation_20;

    case 24:
      current_block = (Rpc - LABEL_34);
      goto continuation_21;

    case 25:
      current_block = (Rpc - LABEL_35);
      goto continuation_22;

    case 26:
      current_block = (Rpc - LABEL_36);
      goto continuation_23;

    case 27:
      current_block = (Rpc - LABEL_37);
      goto continuation_24;

    case 28:
      current_block = (Rpc - LABEL_38);
      goto continuation_25;

    case 29:
      current_block = (Rpc - LABEL_39);
      goto continuation_26;

    case 30:
      current_block = (Rpc - LABEL_40);
      goto continuation_27;

    case 31:
      current_block = (Rpc - LABEL_41);
      goto continuation_28;

    case 32:
      current_block = (Rpc - LABEL_42);
      goto continuation_29;

    case 33:
      current_block = (Rpc - LABEL_43);
      goto continuation_30;

    case 34:
      current_block = (Rpc - LABEL_44);
      goto continuation_31;

    case 35:
      current_block = (Rpc - LABEL_45);
      goto continuation_32;

    case 36:
      current_block = (Rpc - LABEL_46);
      goto continuation_33;

    case 37:
      current_block = (Rpc - LABEL_47);
      goto continuation_41;

    case 38:
      current_block = (Rpc - LABEL_52);
      goto label_87;

    case 39:
      current_block = (Rpc - LABEL_48);
      goto continuation_40;

    case 40:
      current_block = (Rpc - LABEL_50);
      goto continuation_46;

    case 41:
      current_block = (Rpc - LABEL_51);
      goto continuation_42;

    case 42:
      current_block = (Rpc - LABEL_54);
      goto continuation_47;

    case 43:
      current_block = (Rpc - LABEL_59);
      goto label_88;

    case 44:
      current_block = (Rpc - LABEL_55);
      goto Z__make_position_type_96;

    case 45:
      current_block = (Rpc - LABEL_57);
      goto continuation_49;

    case 46:
      current_block = (Rpc - LABEL_58);
      goto continuation_48;

    case 47:
      current_block = (Rpc - LABEL_60);
      goto continuation_50;

    case 48:
      current_block = (Rpc - LABEL_61);
      goto continuation_56;

    case 49:
      current_block = (Rpc - LABEL_65);
      goto label_89;

    case 50:
      current_block = (Rpc - LABEL_62);
      goto continuation_55;

    case 51:
      current_block = (Rpc - LABEL_63);
      goto continuation_61;

    case 52:
      current_block = (Rpc - LABEL_64);
      goto continuation_57;

    case 53:
      current_block = (Rpc - LABEL_66);
      goto continuation_62;

    case 54:
      current_block = (Rpc - LABEL_71);
      goto label_90;

    case 55:
      current_block = (Rpc - LABEL_67);
      goto Z__make_source_position_97;

    case 56:
      current_block = (Rpc - LABEL_69);
      goto continuation_64;

    case 57:
      current_block = (Rpc - LABEL_70);
      goto continuation_63;

    case 58:
      current_block = (Rpc - LABEL_72);
      goto continuation_65;

    case 59:
      current_block = (Rpc - LABEL_74);
      goto label_91;

    case 60:
      current_block = (Rpc - LABEL_73);
      goto continuation_66;

    case 61:
      current_block = (Rpc - LABEL_76);
      goto continuation_72;

    case 62:
      current_block = (Rpc - LABEL_80);
      goto label_92;

    case 63:
      current_block = (Rpc - LABEL_77);
      goto continuation_70;

    case 64:
      current_block = (Rpc - LABEL_78);
      goto continuation_77;

    case 65:
      current_block = (Rpc - LABEL_79);
      goto continuation_73;

    case 66:
      current_block = (Rpc - LABEL_81);
      goto continuation_78;

    case 67:
      current_block = (Rpc - LABEL_86);
      goto label_93;

    case 68:
      current_block = (Rpc - LABEL_82);
      goto Z__make_substring_98;

    case 69:
      current_block = (Rpc - LABEL_84);
      goto continuation_80;

    case 70:
      current_block = (Rpc - LABEL_85);
      goto continuation_79;

    case 71:
      current_block = (Rpc - LABEL_87);
      goto continuation_81;

    case 72:
      current_block = (Rpc - LABEL_88);
      goto label_94;

    case 73:
      current_block = (Rpc - LABEL_89);
      goto label_100;

    case 74:
      current_block = (Rpc - LABEL_90);
      goto label_101;

    case 75:
      current_block = (Rpc - LABEL_91);
      goto expression_83;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_83)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_90])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_101)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_100)
  {
    static const short sections [] =
      {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	0,
	0,
	0,
	1,
	0,
	1,
	0,
	0,
	0,
	1,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	3,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
	2,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	1,
	1,
	1,
	2,
	2,
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
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
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
	3,
	3,
	1,
	2,
	2,
	1,
	1,
	1,
	1,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 108)
      goto label_99;
    blocks = (current_block [OBJECT_98]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_89])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_99)
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
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_123;
  Wrd12 = Wrd16;

DEFLABEL (label_122)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_121;
  Wrd11 = Wrd15;

DEFLABEL (label_120)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_119;
  Wrd12 = Wrd16;

DEFLABEL (label_118)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_59]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_49]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_48);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_117;
  Wrd11 = Wrd15;

DEFLABEL (label_116)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_53]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_51);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x707, 2);
  (* (Rhp++)) = (dispatch_base + TAG_56);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_55])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_115;
  Wrd11 = Wrd15;

DEFLABEL (label_114)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_53]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_58);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_57);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_59]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_49]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_62);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_113;
  Wrd11 = Wrd15;

DEFLABEL (label_112)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_53]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_64);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_68);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_67])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_111;
  Wrd11 = Wrd15;

DEFLABEL (label_110)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_53]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_70);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_109;
  Wrd13 = Wrd17;

DEFLABEL (label_108)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_59]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_49]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (current_block [OBJECT_85]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_107;
  Wrd11 = Wrd15;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_53]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_79);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_83);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_82])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_105;
  Wrd11 = Wrd15;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_53]));

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_85);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd5.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_103;
  Wrd9 = Wrd13;

DEFLABEL (label_102)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_97]);
  (Rsp [5]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75]));

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88])), (Wrd10.pObj));

DEFLABEL (label_94)
  (Wrd9.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86])), (Wrd12.pObj));

DEFLABEL (label_93)
  (Wrd11.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80])), (Wrd12.pObj));

DEFLABEL (label_92)
  (Wrd11.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74])), (Wrd14.pObj));

DEFLABEL (label_91)
  (Wrd13.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71])), (Wrd12.pObj));

DEFLABEL (label_90)
  (Wrd11.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65])), (Wrd12.pObj));

DEFLABEL (label_89)
  (Wrd11.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59])), (Wrd12.pObj));

DEFLABEL (label_88)
  (Wrd11.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52])), (Wrd12.pObj));

DEFLABEL (label_87)
  (Wrd11.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd13.pObj));

DEFLABEL (label_86)
  (Wrd12.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd12.pObj));

DEFLABEL (label_85)
  (Wrd11.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd13.pObj));

DEFLABEL (label_84)
  (Wrd12.Obj) = Rvl;
  goto label_122;

DEFLABEL (Z__make_position_type_96)
  CLOSURE_HEADER (LABEL_55);

DEFLABEL (Z__make_position_type_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd15.Obj) = (MAKE_OBJECT (0, 7));
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd7.pObj) = (& (Rhp [-8]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (Z__make_source_position_97)
  CLOSURE_HEADER (LABEL_67);

DEFLABEL (Z__make_source_position_59)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (Z__make_substring_98)
  CLOSURE_HEADER (LABEL_82);

DEFLABEL (Z__make_substring_75)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_regsexp_so_7bbca1aae24de1cb [108] =
  {
    { "regsexp_so_code_1", 5, regsexp_so_code_1 },
    { "regsexp_so_code_2", 5, regsexp_so_code_2 },
    { "regsexp_so_code_3", 2, regsexp_so_code_3 },
    { "regsexp_so_code_4", 1, regsexp_so_code_4 },
    { "regsexp_so_code_5", 3, regsexp_so_code_5 },
    { "regsexp_so_code_6", 16, regsexp_so_code_6 },
    { "regsexp_so_code_7", 9, regsexp_so_code_7 },
    { "regsexp_so_code_8", 5, regsexp_so_code_8 },
    { "regsexp_so_code_9", 13, regsexp_so_code_9 },
    { "regsexp_so_code_10", 13, regsexp_so_code_10 },
    { "regsexp_so_code_11", 1, regsexp_so_code_11 },
    { "regsexp_so_code_12", 1, regsexp_so_code_12 },
    { "regsexp_so_code_13", 1, regsexp_so_code_13 },
    { "regsexp_so_code_14", 2, regsexp_so_code_14 },
    { "regsexp_so_code_15", 2, regsexp_so_code_15 },
    { "regsexp_so_code_16", 1, regsexp_so_code_16 },
    { "regsexp_so_code_17", 1, regsexp_so_code_17 },
    { "regsexp_so_code_18", 1, regsexp_so_code_18 },
    { "regsexp_so_code_19", 1, regsexp_so_code_19 },
    { "regsexp_so_code_20", 2, regsexp_so_code_20 },
    { "regsexp_so_code_21", 2, regsexp_so_code_21 },
    { "regsexp_so_code_22", 2, regsexp_so_code_22 },
    { "regsexp_so_code_23", 2, regsexp_so_code_23 },
    { "regsexp_so_code_24", 3, regsexp_so_code_24 },
    { "regsexp_so_code_25", 3, regsexp_so_code_25 },
    { "regsexp_so_code_26", 2, regsexp_so_code_26 },
    { "regsexp_so_code_27", 3, regsexp_so_code_27 },
    { "regsexp_so_code_28", 3, regsexp_so_code_28 },
    { "regsexp_so_code_29", 6, regsexp_so_code_29 },
    { "regsexp_so_code_30", 3, regsexp_so_code_30 },
    { "regsexp_so_code_31", 3, regsexp_so_code_31 },
    { "regsexp_so_code_32", 3, regsexp_so_code_32 },
    { "regsexp_so_code_33", 2, regsexp_so_code_33 },
    { "regsexp_so_code_34", 2, regsexp_so_code_34 },
    { "regsexp_so_code_35", 3, regsexp_so_code_35 },
    { "regsexp_so_code_36", 4, regsexp_so_code_36 },
    { "regsexp_so_code_37", 4, regsexp_so_code_37 },
    { "regsexp_so_code_38", 4, regsexp_so_code_38 },
    { "regsexp_so_code_39", 4, regsexp_so_code_39 },
    { "regsexp_so_code_40", 6, regsexp_so_code_40 },
    { "regsexp_so_code_41", 9, regsexp_so_code_41 },
    { "regsexp_so_code_42", 10, regsexp_so_code_42 },
    { "regsexp_so_code_43", 6, regsexp_so_code_43 },
    { "regsexp_so_code_44", 6, regsexp_so_code_44 },
    { "regsexp_so_code_45", 3, regsexp_so_code_45 },
    { "regsexp_so_code_46", 4, regsexp_so_code_46 },
    { "regsexp_so_code_47", 4, regsexp_so_code_47 },
    { "regsexp_so_code_48", 5, regsexp_so_code_48 },
    { "regsexp_so_code_49", 3, regsexp_so_code_49 },
    { "regsexp_so_code_50", 6, regsexp_so_code_50 },
    { "regsexp_so_code_51", 3, regsexp_so_code_51 },
    { "regsexp_so_code_52", 3, regsexp_so_code_52 },
    { "regsexp_so_code_53", 7, regsexp_so_code_53 },
    { "regsexp_so_code_54", 7, regsexp_so_code_54 },
    { "regsexp_so_code_55", 3, regsexp_so_code_55 },
    { "regsexp_so_code_56", 6, regsexp_so_code_56 },
    { "regsexp_so_code_57", 6, regsexp_so_code_57 },
    { "regsexp_so_code_58", 6, regsexp_so_code_58 },
    { "regsexp_so_code_59", 2, regsexp_so_code_59 },
    { "regsexp_so_code_60", 2, regsexp_so_code_60 },
    { "regsexp_so_code_61", 7, regsexp_so_code_61 },
    { "regsexp_so_code_62", 9, regsexp_so_code_62 },
    { "regsexp_so_code_63", 3, regsexp_so_code_63 },
    { "regsexp_so_code_64", 3, regsexp_so_code_64 },
    { "regsexp_so_code_65", 3, regsexp_so_code_65 },
    { "regsexp_so_code_66", 3, regsexp_so_code_66 },
    { "regsexp_so_code_67", 3, regsexp_so_code_67 },
    { "regsexp_so_code_68", 5, regsexp_so_code_68 },
    { "regsexp_so_code_69", 1, regsexp_so_code_69 },
    { "regsexp_so_code_70", 1, regsexp_so_code_70 },
    { "regsexp_so_code_71", 1, regsexp_so_code_71 },
    { "regsexp_so_code_72", 1, regsexp_so_code_72 },
    { "regsexp_so_code_73", 1, regsexp_so_code_73 },
    { "regsexp_so_code_74", 1, regsexp_so_code_74 },
    { "regsexp_so_code_75", 4, regsexp_so_code_75 },
    { "regsexp_so_code_76", 10, regsexp_so_code_76 },
    { "regsexp_so_code_77", 1, regsexp_so_code_77 },
    { "regsexp_so_code_78", 8, regsexp_so_code_78 },
    { "regsexp_so_code_79", 11, regsexp_so_code_79 },
    { "regsexp_so_code_80", 8, regsexp_so_code_80 },
    { "regsexp_so_code_81", 14, regsexp_so_code_81 },
    { "regsexp_so_code_82", 7, regsexp_so_code_82 },
    { "regsexp_so_code_83", 2, regsexp_so_code_83 },
    { "regsexp_so_code_84", 1, regsexp_so_code_84 },
    { "regsexp_so_code_85", 1, regsexp_so_code_85 },
    { "regsexp_so_code_86", 1, regsexp_so_code_86 },
    { "regsexp_so_code_87", 1, regsexp_so_code_87 },
    { "regsexp_so_code_88", 4, regsexp_so_code_88 },
    { "regsexp_so_code_89", 1, regsexp_so_code_89 },
    { "regsexp_so_code_90", 1, regsexp_so_code_90 },
    { "regsexp_so_code_91", 1, regsexp_so_code_91 },
    { "regsexp_so_code_92", 6, regsexp_so_code_92 },
    { "regsexp_so_code_93", 5, regsexp_so_code_93 },
    { "regsexp_so_code_94", 7, regsexp_so_code_94 },
    { "regsexp_so_code_95", 1, regsexp_so_code_95 },
    { "regsexp_so_code_96", 1, regsexp_so_code_96 },
    { "regsexp_so_code_97", 1, regsexp_so_code_97 },
    { "regsexp_so_code_98", 4, regsexp_so_code_98 },
    { "regsexp_so_code_99", 1, regsexp_so_code_99 },
    { "regsexp_so_code_100", 1, regsexp_so_code_100 },
    { "regsexp_so_code_101", 1, regsexp_so_code_101 },
    { "regsexp_so_code_102", 1, regsexp_so_code_102 },
    { "regsexp_so_code_103", 1, regsexp_so_code_103 },
    { "regsexp_so_code_104", 1, regsexp_so_code_104 },
    { "regsexp_so_code_105", 3, regsexp_so_code_105 },
    { "regsexp_so_code_106", 3, regsexp_so_code_106 },
    { "regsexp_so_code_107", 1, regsexp_so_code_107 },
    { "regsexp_so_code_108", 1, regsexp_so_code_108 }
  };

int
decl_regsexp_so_7bbca1aae24de1cb (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_regsexp_so_7bbca1aae24de1cb);
  return (0);
}

DECLARE_COMPILED_CODE ("regsexp.so", 76, decl_regsexp_so_7bbca1aae24de1cb, regsexp_so_7bbca1aae24de1cb)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_regsexp_so_data_7bbca1aae24de1cb [10487] =
  "\x9b\x02\xb5\x01\xe9\x17\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x0d"
  "\xb9\x24\x28\x0d\x28\x0d\xba\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x82\x88"
  "\x28\x0d\xbe\x28\x0d\xbf\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88\x1d\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88"
  "\x06\x1d\x0c\x28\x0d\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88"
  "\x08\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x86\x88\xc2\x1c\xc1\x1c\x0c\x06\x07\x85\xc2\x1c\x02\xc1\x1c"
  "\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xc1\x08"
  "\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x06\x07\x85\x1b\x02\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0c"
  "\x1d\x0d\x1c\x0d\x1c\x1b\x1b\x08\x89\x0d\x1c\xb4\x25\xb1\x0d\x1b"
  "\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x1d\x0d\xb9\x06\x07\x85\x1b\x02\x1b\x1b\x25\x1b\x24\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0c\x08\x89\x28\xb3\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x81\x08\x28\xb3"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x81\x08\x28"
  "\xb3\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\xb3\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\xb3\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\xb3\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\xb3\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x28\xb3\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\xb3\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c"
  "\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\x1c\x28\xb3\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\xb3\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d\x0c"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x24\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb3\x24\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\xb3\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x22\x29\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0f\x07\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x07\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x81\x80"
  "\xc1\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x80\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x1c\x82\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x85\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x86\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x0c\x0d\x1c\x24\x28\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\xc1\x1c"
  "\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x1b\x81\xc2\x1d\x1b\x1b\x25\x0d\x1c\x1b\x24\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x08\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x08\x1b\x28"
  "\x0d\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x0c\x08\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x08"
  "\x1b\x86\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x08\x1b\x1b\x28\x0d\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80"
  "\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x81\x84\x1b\x82\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x81\x1b\x84\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x1d\x1b\x0d\x1c\x28\x1b"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x81\x83\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x81\x82\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x22\x29\x21\x9d\x2b\xb8\x17\x1c\x88\x1b\xb0\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x0d\x0d\x0d\x0d\x0d\x1c\x1b\x9d\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9d\x1b\x0d\x0d\x0d"
  "\x9a\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x0d\x1c\x1b\x99\x1b\x2a\x0c\x0d"
  "\x0d\x0d\x08\x8a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x0d"
  "\x1c\x1b\x2a\x1b\x0d\x0d\x0d\x0d\x9b\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x9b\x0d\x1c\x0c\x0d\x1b\x1b\x0d\x08\x8b\x1b\x1b\x1b\xb7\x1b"
  "\x1b\x1b\x1b\x1b\x0d\x1c\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x08\x1b\x2a\x1b\x2a\x17\x1b\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x9d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x9d\x0d\x1c\x0c\x0d\x1b\x1b\x1b\x1b\x0d\x08\x8d\x08\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x0d\x1c\x08\x89\x1b\x2a\x0d"
  "\x1b\x0d\x1c\x08\x8a\x1b\x2a\x0d\x0d\x1c\x1b\x08\x8a\x1b\x2a\x0d"
  "\x1b\x1b\x08\x8a\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x1b\x08\x8b\x1b"
  "\x2a\x1b\x1b\x1b\x1b\x08\x8b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x08"
  "\x8a\x1b\x2a\x1b\x1b\x1b\x08\x8a\x1b\x2a\x0d\x1b\x08\x89\x1b\x2a"
  "\x0d\x1b\x08\x89\x1b\x2a\x1b\x1b\x08\x89\x1b\x2a\x0d\x1b\x08\x89"
  "\x1b\x2a\x0d\x08\x88\x1b\x2a\x0d\x08\x88\x1b\x2a\x0d\x08\x88\x1b"
  "\x2a\x0d\x08\x88\x1b\x2a\x1b\x1b\x1b\x08\x8a\x1b\x2a\x0d\x1b\x1b"
  "\x08\x8a\x1b\x2a\x0d\x1b\x08\x89\x1b\x2a\x0d\x1b\x08\x89\x1b\x2a"
  "\x0d\x08\x88\x1b\x2a\x1b\x1b\xb1\x0d\xb4\x1b\x1b\x1b\xb3\x1b\x1b"
  "\x1b\x17\x08\x1b\x2a\x1b\x2a\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d\x1c\xb6\xc3\x0d\x1c\x1b\x08\x88"
  "\xb2\x1b\x99\x1b\x2a\xb5\x2a\x99\x28\x0d\x28\x0d\x1c\x28\x0d\x26"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28"
  "\xb1\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x56"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x72\x65\x67\x73\x65\x78"
  "\x70\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x15\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x65\x72\x72\x6f\x72"
  "\x02\x05\x17\x62\x69\x6e\x64\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72\x03\x0b\x25\x6c\x69\x6e\x6b"
  "\x2d\x69\x6e\x73\x6e\x03\x11\x25\x63\x6f\x6d\x70\x69\x6c\x65\x2d"
  "\x72\x65\x67\x73\x65\x78\x70\x04\x15\x73\x69\x67\x6e\x61\x6c\x2d"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x65\x72\x72\x6f\x72\x05\x51\x0c"
  "\x81\x85\x02\x50\x0a\x81\x83\x02\x4f\x08\x81\x83\x02\x4e\x06\x81"
  "\x89\x02\x4d\x04\x83\x04\x0b\x1a\x02\x03\x17\x25\x6d\x61\x6b\x65"
  "\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65\x67\x73\x65\x78"
  "\x70\x03\x10\x25\x63\x6f\x6e\x76\x65\x72\x74\x2d\x67\x72\x6f\x75"
  "\x70\x73\x03\x0a\x67\x65\x74\x2d\x69\x6e\x64\x65\x78\x09\x04\x56"
  "\x0c\x81\x89\x02\x55\x0a\x81\x87\x02\x54\x08\x85\x08\x53\x06\x81"
  "\x83\x02\x52\x04\x83\x04\x0b\x15\x0a\x02\x02\x03\x12\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x64\x2d\x72\x65\x67\x73\x65\x78\x70\x3f\x0b\x04"
  "\x1b\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x2d\x72\x65\x67\x73\x65\x78\x70\x0c\x03\x58\x06\x81"
  "\x85\x02\x57\x04\x84\x04\x05\x0e\x0d\x02\x08\x1e\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x20\x72\x65\x67\x75\x6c\x61\x72\x20\x73\x2d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x05\x1a\x65\x72\x72\x6f\x72"
  "\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75"
  "\x6d\x65\x6e\x74\x02\x59\x04\x84\x04\x03\x0c\x0e\x02\x03\x17\x25"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65\x67\x73\x65\x78\x70"
  "\x2d\x69\x6d\x70\x6c\x0f\x02\x5c\x08\x82\x02\x5b\x06\x81\x87\x02"
  "\x5a\x04\x84\x06\x07\x0e\x10\x02\x06\x61\x70\x70\x6c\x79\x11\x04"
  "\x63\x64\x72\x12\x21\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x20"
  "\x72\x65\x67\x75\x6c\x61\x72\x20\x73\x2d\x65\x78\x70\x72\x65\x73"
  "\x73\x69\x6f\x6e\x3a\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70"
  "\x65\x3f\x13\x1e\x04\x63\x61\x72\x14\x17\x25\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x2d\x72\x65\x67\x73\x65\x78\x70\x2d\x72\x75\x6c\x65\x73"
  "\x15\x02\x03\x0e\x75\x6e\x69\x63\x6f\x64\x65\x2d\x63\x68\x61\x72"
  "\x3f\x16\x03\x0c\x69\x6e\x73\x6e\x3a\x73\x74\x72\x69\x6e\x67\x17"
  "\x04\x05\x66\x69\x6e\x64\x18\x04\x06\x65\x72\x72\x6f\x72\x19\x03"
  "\x0a\x69\x6e\x73\x6e\x3a\x63\x68\x61\x72\x1a\x04\x0e\x73\x79\x6e"
  "\x74\x61\x78\x2d\x6d\x61\x74\x63\x68\x3f\x07\x6c\x22\x81\x87\x02"
  "\x6b\x20\x81\x87\x02\x6a\x1e\x81\x85\x02\x69\x1c\x81\x87\x02\x68"
  "\x1a\x81\x87\x02\x67\x18\x81\x85\x02\x66\x16\x81\x85\x02\x65\x14"
  "\x81\x85\x02\x64\x12\x81\x85\x02\x63\x10\x81\x85\x02\x62\x0e\x81"
  "\x83\x02\x61\x0c\x81\x87\x02\x60\x0a\x81\x83\x02\x5f\x08\x81\x83"
  "\x02\x5e\x06\x81\x85\x02\x5d\x04\x83\x04\x21\x3c\x1b\x02\x08\x1a"
  "\x49\x6c\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x20\x63\x68\x61\x72\x2d"
  "\x73\x65\x74\x20\x69\x74\x65\x6d\x3a\x0e\x63\x68\x61\x72\x2d\x3e"
  "\x69\x6e\x74\x65\x67\x65\x72\x0e\x63\x68\x61\x72\x2d\x3e\x69\x6e"
  "\x74\x65\x67\x65\x72\x02\x04\x0b\x61\x70\x70\x65\x6e\x64\x2d\x6d"
  "\x61\x70\x03\x18\x73\x63\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75\x65"
  "\x73\x2d\x3e\x63\x68\x61\x72\x2d\x73\x65\x74\x03\x20\x77\x65\x6c"
  "\x6c\x2d\x66\x6f\x72\x6d\x65\x64\x2d\x73\x63\x61\x6c\x61\x72\x2d"
  "\x76\x61\x6c\x75\x65\x2d\x72\x61\x6e\x67\x65\x3f\x03\x16\x03\x0a"
  "\x63\x68\x61\x72\x2d\x73\x65\x74\x3f\x03\x0d\x73\x74\x72\x69\x6e"
  "\x67\x2d\x3e\x6c\x69\x73\x74\x04\x19\x03\x18\x63\x68\x61\x72\x2d"
  "\x73\x65\x74\x2d\x3e\x73\x63\x61\x6c\x61\x72\x2d\x76\x61\x6c\x75"
  "\x65\x73\x04\x04\x6d\x61\x70\x1c\x0a\x75\x14\x81\x85\x02\x74\x12"
  "\x81\x83\x02\x73\x10\x81\x83\x02\x72\x0e\x81\x83\x02\x71\x0c\x81"
  "\x83\x02\x70\x0a\x81\x83\x02\x6f\x08\x83\x04\x6e\x06\x81\x83\x02"
  "\x6d\x04\x83\x04\x13\x2e\x1d\x02\x09\x1e\x49\x6c\x6c\x2d\x66\x6f"
  "\x72\x6d\x65\x64\x20\x72\x65\x67\x73\x65\x78\x70\x20\x67\x72\x6f"
  "\x75\x70\x20\x6b\x65\x79\x3a\x13\x1e\x04\x19\x03\x16\x03\x7a\x0c"
  "\x83\x04\x79\x0a\x81\x83\x02\x78\x08\x81\x83\x02\x77\x06\x81\x83"
  "\x02\x76\x04\x81\x83\x02\x0b\x19\x16\x02\x0a\x06\x63\x61\x75\x73"
  "\x65\x1e\x03\x3a\x20\x02\x08\x70\x61\x74\x74\x65\x72\x6e\x1f\x10"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x72\x65\x67\x73\x65\x78\x70\x20"
  "\x1f\x1e\x1f\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70"
  "\x65\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x72\x65\x67\x73\x65\x78"
  "\x70\x1f\x03\x17\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x65\x72\x72"
  "\x6f\x72\x2d\x68\x61\x6e\x64\x6c\x65\x72\x1f\x04\x06\x14\x6d\x61"
  "\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70"
  "\x65\x05\x14\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x73\x69\x67"
  "\x6e\x61\x6c\x6c\x65\x72\x04\x11\x61\x63\x63\x65\x73\x73\x2d\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x04\x0d\x77\x72\x69\x74\x65\x2d"
  "\x73\x74\x72\x69\x6e\x67\x04\x06\x77\x72\x69\x74\x65\x04\x17\x77"
  "\x72\x69\x74\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x72"
  "\x65\x70\x6f\x72\x74\x07\x87\x01\x1c\x81\x85\x02\x86\x01\x1a\x81"
  "\x85\x02\x85\x01\x18\x81\x89\x02\x84\x01\x16\x81\x85\x02\x83\x01"
  "\x14\x81\x81\x02\x82\x01\x12\x81\x81\x02\x81\x01\x10\x84\x06\x80"
  "\x01\x0e\x81\x87\x02\x7f\x0c\x81\x83\x02\x7e\x0a\x81\x81\x02\x7d"
  "\x08\x81\x81\x02\x7c\x06\x81\x87\x02\x7b\x04\x82\x02\x1b\x38\x1e"
  "\x02\x0b\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x02\x0c\x64\x65\x66"
  "\x69\x6e\x65\x2d\x72\x75\x6c\x65\x13\x1e\x14\x15\x02\x15\x02\x03"
  "\x0f\x61\x64\x64\x2d\x62\x6f\x6f\x74\x2d\x69\x6e\x69\x74\x21\x13"
  "\x04\x18\x04\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61"
  "\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x04\x94\x01\x1c"
  "\x81\x87\x02\x93\x01\x1a\x81\x85\x02\x92\x01\x18\x81\x85\x02\x91"
  "\x01\x16\x81\x85\x02\x90\x01\x14\x81\x85\x02\x8f\x01\x12\x81\x83"
  "\x02\x8e\x01\x10\x81\x85\x02\x8d\x01\x0e\x81\x83\x02\x8c\x01\x0c"
  "\x81\x85\x02\x8b\x01\x0a\x81\x83\x02\x8a\x01\x08\x81\x83\x02\x89"
  "\x01\x06\x81\x83\x02\x88\x01\x04\x84\x06\x1b\x32\x21\x02\x0c\x11"
  "\x69\x6e\x76\x65\x72\x73\x65\x2d\x63\x68\x61\x72\x2d\x73\x65\x74"
  "\x22\x02\x0a\x03\x02\x95\x01\x04\x82\x02\x03\x0a\x23\x02\x0d\x03"
  "\x2a\x2a\x24\x03\x02\x96\x01\x04\x83\x04\x03\x0c\x25\x02\x0e\x04"
  "\x2a\x2a\x3f\x26\x03\x02\x97\x01\x04\x83\x04\x03\x0c\x27\x02\x0f"
  "\x03\x12\x25\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x63\x68\x61\x72\x2d"
  "\x73\x65\x74\x28\x03\x0e\x69\x6e\x73\x6e\x3a\x63\x68\x61\x72\x2d"
  "\x73\x65\x74\x29\x03\x99\x01\x06\x81\x83\x02\x98\x01\x04\xff\x03"
  "\x05\x0d\x2a\x02\x10\x03\x28\x03\x16\x69\x6e\x73\x6e\x3a\x69\x6e"
  "\x76\x65\x72\x73\x65\x2d\x63\x68\x61\x72\x2d\x73\x65\x74\x2b\x03"
  "\x9b\x01\x06\x81\x83\x02\x9a\x01\x04\xff\x03\x05\x0d\x2c\x02\x11"
  "\x02\x10\x69\x6e\x73\x6e\x3a\x6c\x69\x6e\x65\x2d\x73\x74\x61\x72"
  "\x74\x2d\x02\x9c\x01\x04\x82\x02\x03\x2e\x02\x12\x02\x0e\x69\x6e"
  "\x73\x6e\x3a\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x2f\x02\x9d\x01\x04"
  "\x82\x02\x03\x30\x02\x13\x02\x12\x69\x6e\x73\x6e\x3a\x73\x74\x72"
  "\x69\x6e\x67\x2d\x73\x74\x61\x72\x74\x31\x02\x9e\x01\x04\x82\x02"
  "\x03\x32\x02\x14\x02\x10\x69\x6e\x73\x6e\x3a\x73\x74\x72\x69\x6e"
  "\x67\x2d\x65\x6e\x64\x33\x02\x9f\x01\x04\x82\x02\x03\x34\x02\x15"
  "\x03\x03\x07\x69\x6e\x73\x6e\x3a\x3f\x35\x03\xa1\x01\x06\x81\x83"
  "\x02\xa0\x01\x04\x83\x04\x05\x0d\x36\x02\x16\x03\x03\x07\x69\x6e"
  "\x73\x6e\x3a\x2a\x37\x03\xa3\x01\x06\x81\x83\x02\xa2\x01\x04\x83"
  "\x04\x05\x0d\x38\x02\x17\x03\x03\x08\x69\x6e\x73\x6e\x3a\x3f\x3f"
  "\x39\x03\xa5\x01\x06\x81\x83\x02\xa4\x01\x04\x83\x04\x05\x0d\x3a"
  "\x02\x18\x03\x03\x08\x69\x6e\x73\x6e\x3a\x2a\x3f\x3b\x03\xa7\x01"
  "\x06\x81\x83\x02\xa6\x01\x04\x83\x04\x05\x0d\x3c\x02\x19\x03\x13"
  "\x63\x68\x65\x63\x6b\x2d\x72\x65\x70\x65\x61\x74\x2d\x31\x2d\x61"
  "\x72\x67\x3d\x03\x05\x08\x69\x6e\x73\x6e\x3a\x2a\x2a\x3e\x04\xaa"
  "\x01\x08\x81\x87\x02\xa9\x01\x06\x81\x85\x02\xa8\x01\x04\x84\x06"
  "\x07\x11\x3f\x02\x1a\x03\x3d\x03\x05\x09\x69\x6e\x73\x6e\x3a\x2a"
  "\x2a\x3f\x40\x04\xad\x01\x08\x81\x87\x02\xac\x01\x06\x81\x85\x02"
  "\xab\x01\x04\x84\x06\x07\x11\x41\x02\x1b\x02\x2b\x52\x65\x70\x65"
  "\x61\x74\x20\x6c\x69\x6d\x69\x74\x20\x6d\x75\x73\x74\x20\x62\x65"
  "\x20\x6e\x6f\x6e\x2d\x6e\x65\x67\x61\x74\x69\x76\x65\x20\x69\x6e"
  "\x74\x65\x67\x65\x72\x3a\x03\x1b\x65\x78\x61\x63\x74\x2d\x6e\x6f"
  "\x6e\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65"
  "\x72\x3f\x42\x04\x19\x03\xaf\x01\x06\x81\x83\x02\xae\x01\x04\x83"
  "\x04\x05\x0f\x43\x02\x1c\x04\x14\x63\x68\x65\x63\x6b\x2d\x72\x65"
  "\x70\x65\x61\x74\x2d\x32\x2d\x61\x72\x67\x73\x44\x03\x05\x3e\x04"
  "\xb2\x01\x08\x81\x87\x02\xb1\x01\x06\x81\x87\x02\xb0\x01\x04\x85"
  "\x08\x07\x11\x45\x02\x1d\x04\x44\x03\x05\x40\x04\xb5\x01\x08\x81"
  "\x87\x02\xb4\x01\x06\x81\x87\x02\xb3\x01\x04\x85\x08\x07\x11\x46"
  "\x02\x1e\x2d\x52\x65\x70\x65\x61\x74\x20\x6c\x6f\x77\x65\x72\x20"
  "\x6c\x69\x6d\x69\x74\x20\x67\x72\x65\x61\x74\x65\x72\x20\x74\x68"
  "\x61\x6e\x20\x75\x70\x70\x65\x72\x20\x6c\x69\x6d\x69\x74\x3a\x02"
  "\x2b\x52\x65\x70\x65\x61\x74\x20\x6c\x69\x6d\x69\x74\x20\x6d\x75"
  "\x73\x74\x20\x62\x65\x20\x6e\x6f\x6e\x2d\x6e\x65\x67\x61\x74\x69"
  "\x76\x65\x20\x69\x6e\x74\x65\x67\x65\x72\x3a\x03\x42\x04\x19\x05"
  "\x19\x04\xbb\x01\x0e\x81\x85\x02\xba\x01\x0c\x81\x85\x02\xb9\x01"
  "\x0a\x81\x85\x02\xb8\x01\x08\x81\x85\x02\xb7\x01\x06\x81\x85\x02"
  "\xb6\x01\x04\x84\x06\x0d\x1a\x42\x02\x1f\x02\x04\x1c\x03\x09\x69"
  "\x6e\x73\x6e\x3a\x61\x6c\x74\x47\x03\xbe\x01\x08\x81\x83\x02\xbd"
  "\x01\x06\x81\x87\x02\xbc\x01\x04\xff\x03\x07\x11\x48\x02\x20\x02"
  "\x04\x1c\x03\x09\x69\x6e\x73\x6e\x3a\x73\x65\x71\x49\x03\xc1\x01"
  "\x08\x81\x83\x02\xc0\x01\x06\x81\x87\x02\xbf\x01\x04\xff\x03\x07"
  "\x11\x4a\x02\x21\x03\x13\x25\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x67"
  "\x72\x6f\x75\x70\x2d\x6b\x65\x79\x4b\x03\x04\x0b\x69\x6e\x73\x6e"
  "\x3a\x67\x72\x6f\x75\x70\x4c\x04\xc4\x01\x08\x81\x85\x02\xc3\x01"
  "\x06\x81\x85\x02\xc2\x01\x04\x84\x06\x07\x11\x4d\x02\x22\x03\x4b"
  "\x03\x0f\x69\x6e\x73\x6e\x3a\x67\x72\x6f\x75\x70\x2d\x72\x65\x66"
  "\x4e\x03\xc6\x01\x06\x81\x83\x02\xc5\x01\x04\x83\x04\x05\x0d\x4f"
  "\x02\x23\xc8\x01\x06\x83\x04\xc7\x01\x04\x82\x02\x05\x50\x02\x24"
  "\xcb\x01\x08\x85\x08\xca\x01\x06\x83\x04\xc9\x01\x04\x82\x02\x07"
  "\x0a\x51\x02\x25\x03\x0a\x70\x72\x65\x76\x2d\x63\x68\x61\x72\x52"
  "\x02\xcf\x01\x0a\x81\x89\x02\xce\x01\x08\x81\x89\x02\xcd\x01\x06"
  "\x83\x04\xcc\x01\x04\x82\x02\x09\x0f\x53\x02\x26\x03\x0a\x6e\x65"
  "\x78\x74\x2d\x63\x68\x61\x72\x54\x02\xd3\x01\x0a\x81\x89\x02\xd2"
  "\x01\x08\x81\x89\x02\xd1\x01\x06\x83\x04\xd0\x01\x04\x82\x02\x09"
  "\x0f\x55\x02\x27\x01\x0b\x03\x52\x02\xd7\x01\x0a\x81\x89\x02\xd6"
  "\x01\x08\x81\x89\x02\xd5\x01\x06\x83\x04\xd4\x01\x04\x82\x02\x09"
  "\x11\x56\x02\x28\x01\x0b\x03\x54\x02\xdb\x01\x0a\x81\x89\x02\xda"
  "\x01\x08\x81\x89\x02\xd9\x01\x06\x83\x04\xd8\x01\x04\x82\x02\x09"
  "\x11\x57\x02\x29\x03\x54\x03\x0e\x6e\x65\x78\x74\x2d\x70\x6f\x73"
  "\x69\x74\x69\x6f\x6e\x58\x04\x05\x65\x71\x76\x3f\x59\x04\xe1\x01"
  "\x0e\x81\x89\x02\xe0\x01\x0c\x81\x8d\x02\xdf\x01\x0a\x81\x89\x02"
  "\xde\x01\x08\x81\x89\x02\xdd\x01\x06\x81\x85\x02\xdc\x01\x04\x83"
  "\x04\x0d\x17\x5a\x02\x2a\x12\x14\x03\x54\x03\x58\x04\x59\x04\xea"
  "\x01\x14\x81\x8d\x02\xe9\x01\x12\x81\x91\x02\xe8\x01\x10\x81\x8d"
  "\x02\xe7\x01\x0e\x81\x8d\x02\xe6\x01\x0c\x81\x8f\x02\xe5\x01\x0a"
  "\x81\x8d\x02\xe4\x01\x08\x81\x89\x02\xe3\x01\x06\x81\x85\x02\xe2"
  "\x01\x04\x83\x04\x13\x1f\x5b\x02\x2b\x0b\x73\x74\x72\x69\x6e\x67"
  "\x2d\x72\x65\x66\x5c\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x5d\x02\x14\x69\x6e\x73\x6e\x3a\x61\x6c\x77\x61\x79"
  "\x73\x2d\x73\x75\x63\x63\x65\x65\x64\x5e\x03\x1a\x03\x54\x03\x58"
  "\x04\x59\x06\xf4\x01\x16\x81\x8f\x02\xf3\x01\x14\x81\x93\x02\xf2"
  "\x01\x12\x81\x8f\x02\xf1\x01\x10\x81\x8d\x02\xf0\x01\x0e\x81\x8d"
  "\x02\xef\x01\x0c\x81\x89\x02\xee\x01\x0a\x81\x85\x02\xed\x01\x08"
  "\x81\x85\x02\xec\x01\x06\x81\x83\x02\xeb\x01\x04\x83\x04\x15\x27"
  "\x59\x02\x2c\x03\x54\x04\x11\x63\x68\x61\x72\x2d\x73\x65\x74\x2d"
  "\x6d\x65\x6d\x62\x65\x72\x3f\x5f\x03\x58\x04\xfa\x01\x0e\x81\x89"
  "\x02\xf9\x01\x0c\x81\x89\x02\xf8\x01\x0a\x81\x8b\x02\xf7\x01\x08"
  "\x81\x89\x02\xf6\x01\x06\x81\x85\x02\xf5\x01\x04\x83\x04\x0d\x17"
  "\x60\x02\x2d\x03\x54\x03\x58\x04\x5f\x04\x80\x02\x0e\x81\x89\x02"
  "\xff\x01\x0c\x81\x89\x02\xfe\x01\x0a\x81\x8b\x02\xfd\x01\x08\x81"
  "\x89\x02\xfc\x01\x06\x81\x85\x02\xfb\x01\x04\x83\x04\x0d\x17\x5f"
  "\x02\x2e\x03\x10\x25\x69\x6e\x73\x6e\x3a\x65\x6e\x64\x2d\x67\x72"
  "\x6f\x75\x70\x61\x03\x12\x25\x69\x6e\x73\x6e\x3a\x73\x74\x61\x72"
  "\x74\x2d\x67\x72\x6f\x75\x70\x62\x03\x49\x04\x83\x02\x08\x81\x87"
  "\x02\x82\x02\x06\x81\x85\x02\x81\x02\x04\x84\x06\x07\x12\x63\x02"
  "\x2f\x05\x0d\x25\x73\x74\x61\x72\x74\x2d\x67\x72\x6f\x75\x70\x64"
  "\x02\x87\x02\x0a\x81\x89\x02\x86\x02\x08\x81\x89\x02\x85\x02\x06"
  "\x81\x85\x02\x84\x02\x04\x83\x04\x09\x0f\x65\x02\x30\x05\x0b\x25"
  "\x65\x6e\x64\x2d\x67\x72\x6f\x75\x70\x66\x02\x8b\x02\x0a\x81\x89"
  "\x02\x8a\x02\x08\x81\x89\x02\x89\x02\x06\x81\x85\x02\x88\x02\x04"
  "\x83\x04\x09\x0f\x67\x02\x31\x04\x0c\x25\x66\x69\x6e\x64\x2d\x67"
  "\x72\x6f\x75\x70\x68\x02\x90\x02\x0c\x81\x8d\x02\x8f\x02\x0a\x81"
  "\x89\x02\x8e\x02\x08\x81\x89\x02\x8d\x02\x06\x81\x85\x02\x8c\x02"
  "\x04\x83\x04\x0b\x11\x69\x02\x32\x05\x0b\x66\x6f\x6c\x64\x2d\x72"
  "\x69\x67\x68\x74\x02\x93\x02\x08\x84\x06\x92\x02\x06\x81\x85\x02"
  "\x91\x02\x04\x83\x04\x07\x0d\x6a\x02\x33\x02\x11\x69\x6e\x73\x6e"
  "\x3a\x61\x6c\x77\x61\x79\x73\x2d\x66\x61\x69\x6c\x6b\x05\x0d\x72"
  "\x65\x64\x75\x63\x65\x2d\x72\x69\x67\x68\x74\x04\x0f\x25\x66\x61"
  "\x69\x6c\x75\x72\x65\x2d\x63\x68\x61\x69\x6e\x6c\x04\x99\x02\x0e"
  "\x81\x87\x02\x98\x02\x0c\x81\x85\x02\x97\x02\x0a\x81\x85\x02\x96"
  "\x02\x08\x84\x06\x95\x02\x06\x81\x83\x02\x94\x02\x04\x83\x04\x0d"
  "\x17\x6d\x02\x34\x04\x6c\x02\x9c\x02\x08\x81\x85\x02\x9b\x02\x06"
  "\x81\x85\x02\x9a\x02\x04\x83\x04\x07\x0d\x6e\x02\x35\x04\x6c\x02"
  "\x9f\x02\x08\x81\x85\x02\x9e\x02\x06\x81\x85\x02\x9d\x02\x04\x83"
  "\x04\x07\x0d\x6f\x02\x36\x04\x6c\x04\x10\x73\x61\x6d\x65\x2d\x70"
  "\x6f\x73\x69\x74\x69\x6f\x6e\x73\x3f\x70\x03\xa6\x02\x10\x81\x89"
  "\x02\xa5\x02\x0e\x81\x89\x02\xa4\x02\x0c\x81\x8d\x02\xa3\x02\x0a"
  "\x81\x89\x02\xa2\x02\x08\x81\x89\x02\xa1\x02\x06\x81\x87\x02\xa0"
  "\x02\x04\x83\x04\x0f\x17\x71\x02\x37\x04\x6c\x04\x70\x03\xad\x02"
  "\x10\x81\x89\x02\xac\x02\x0e\x81\x89\x02\xab\x02\x0c\x81\x8b\x02"
  "\xaa\x02\x0a\x81\x89\x02\xa9\x02\x08\x81\x89\x02\xa8\x02\x06\x81"
  "\x87\x02\xa7\x02\x04\x83\x04\x0f\x17\x72\x02\x38\xb0\x02\x08\x81"
  "\x83\x02\xaf\x02\x06\x81\x89\x02\xae\x02\x04\x84\x06\x07\x0a\x73"
  "\x02\x39\x37\x02\x07\x08\x25\x72\x65\x70\x65\x61\x74\x74\x04\x0e"
  "\x25\x68\x79\x62\x72\x69\x64\x2d\x63\x68\x61\x69\x6e\x75\x04\x6c"
  "\x04\xb6\x02\x0e\x81\x87\x02\xb5\x02\x0c\x81\x85\x02\xb4\x02\x0a"
  "\x81\x85\x02\xb3\x02\x08\x84\x06\xb2\x02\x06\x81\x8b\x02\xb1\x02"
  "\x04\x85\x08\x0d\x19\x76\x02\x3a\x3b\x02\x07\x74\x04\x75\x04\x6c"
  "\x04\xbc\x02\x0e\x81\x85\x02\xbb\x02\x0c\x81\x85\x02\xba\x02\x0a"
  "\x81\x85\x02\xb9\x02\x08\x84\x06\xb8\x02\x06\x81\x8b\x02\xb7\x02"
  "\x04\x85\x08\x0d\x19\x77\x02\x3b\x04\x10\x25\x72\x65\x70\x65\x61"
  "\x74\x2d\x65\x78\x61\x63\x74\x6c\x79\x78\x02\xc2\x02\x0e\x81\x85"
  "\x02\xc1\x02\x0c\x81\x85\x02\xc0\x02\x0a\x81\x8b\x02\xbf\x02\x08"
  "\x81\x8b\x02\xbe\x02\x06\x81\x8f\x02\xbd\x02\x04\x87\x0c\x0d\x13"
  "\x79\x02\x3c\x04\x75\x02\xc4\x02\x06\x81\x85\x02\xc3\x02\x04\x84"
  "\x06\x05\x0b\x7a\x02\x3d\x09\x04\x11\x25\x69\x6d\x6d\x65\x64\x69"
  "\x61\x74\x65\x2d\x63\x68\x61\x69\x6e\x7b\x04\x0f\x25\x64\x65\x6c"
  "\x61\x79\x65\x64\x2d\x63\x68\x61\x69\x6e\x7c\x03\xc6\x02\x06\x81"
  "\x85\x02\xc5\x02\x04\x84\x06\x05\x0e\x7d\x02\x3e\xcd\x02\x10\xfd"
  "\xff\x03\xcc\x02\x0e\xfd\xff\x03\xcb\x02\x0c\xfd\xff\x03\xca\x02"
  "\x0a\xff\xff\x03\xc9\x02\x08\x81\x85\x02\xc8\x02\x06\x81\x85\x02"
  "\xc7\x02\x04\x84\x06\x0f\x13\x7e\x02\x3f\xd6\x02\x14\x81\x8b\x02"
  "\xd5\x02\x12\x81\x89\x02\xd4\x02\x10\x81\x8d\x02\xd3\x02\x0e\x81"
  "\x89\x02\xd2\x02\x0c\x81\x85\x02\xd1\x02\x0a\x81\x85\x02\xd0\x02"
  "\x08\x81\x85\x02\xcf\x02\x06\x81\x85\x02\xce\x02\x04\x84\x06\x13"
  "\x17\x7f\x02\x40\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66"
  "\x80\x01\x03\x13\x25\x67\x65\x74\x2d\x70\x6f\x73\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x81\x01\x02\xd9\x02\x08\x81\x83\x02\xd8"
  "\x02\x06\x81\x83\x02\xd7\x02\x04\x83\x04\x07\x0f\x82\x01\x02\x41"
  "\x80\x01\x03\x81\x01\x02\xdc\x02\x08\x81\x83\x02\xdb\x02\x06\x81"
  "\x83\x02\xda\x02\x04\x83\x04\x07\x0f\x83\x01\x02\x42\x80\x01\x03"
  "\x81\x01\x02\xdf\x02\x08\x81\x83\x02\xde\x02\x06\x81\x83\x02\xdd"
  "\x02\x04\x83\x04\x07\x0f\x84\x01\x02\x43\x80\x01\x03\x81\x01\x02"
  "\xe2\x02\x08\x81\x83\x02\xe1\x02\x06\x81\x83\x02\xe0\x02\x04\x83"
  "\x04\x07\x0f\x85\x01\x02\x44\x80\x01\x03\x81\x01\x02\xe5\x02\x08"
  "\x81\x85\x02\xe4\x02\x06\x81\x85\x02\xe3\x02\x04\x84\x06\x07\x0f"
  "\x86\x01\x02\x45\x80\x01\x09\x70\x6f\x73\x69\x74\x69\x6f\x6e\x14"
  "\x25\x61\x6c\x6c\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x73\x87\x01\x02\x04\x18\x04\x17\x65\x72\x72\x6f\x72\x3a"
  "\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x64\x61\x74\x75\x6d"
  "\x03\xea\x02\x0c\x81\x87\x02\xe9\x02\x0a\x81\x85\x02\xe8\x02\x08"
  "\x81\x83\x02\xe7\x02\x06\x81\x85\x02\xe6\x02\x04\x83\x04\x0b\x18"
  "\x18\x02\x46\x80\x01\xeb\x02\x04\x83\x04\x03\x88\x01\x02\x47\x80"
  "\x01\xec\x02\x04\x83\x04\x03\x89\x01\x02\x48\x80\x01\xed\x02\x04"
  "\x83\x04\x03\x8a\x01\x02\x49\x80\x01\xee\x02\x04\x83\x04\x03\x8b"
  "\x01\x02\x4a\x80\x01\xef\x02\x04\x83\x04\x03\x8c\x01\x02\x4b\x80"
  "\x01\xf0\x02\x04\x83\x04\x03\x8d\x01\x02\x4c\x80\x01\x0f\x25\x72"
  "\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x8e\x01\x07\x2e"
  "\x74\x61\x67\x2e\x31\x8f\x01\x02\xf4\x02\x0a\x81\x85\x02\xf3\x02"
  "\x08\x81\x83\x02\xf2\x02\x06\x81\x83\x02\xf1\x02\x04\x83\x04\x09"
  "\x12\x90\x01\x02\x4d\x80\x01\x09\x73\x65\x74\x2d\x63\x61\x72\x21"
  "\x02\x11\x87\x01\x02\x14\x25\x6d\x61\x6b\x65\x2d\x70\x6f\x73\x69"
  "\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x11\x87\x01\x03\x03\x13\x04"
  "\x0a\x66\x69\x6e\x64\x2d\x74\x61\x69\x6c\x03\xfe\x02\x16\x81\x85"
  "\x02\xfd\x02\x14\x81\x85\x02\xfc\x02\x12\x81\x87\x02\xfb\x02\x10"
  "\x81\x87\x02\xfa\x02\x0e\x81\x85\x02\xf9\x02\x0c\x81\x87\x02\xf8"
  "\x02\x0a\x81\x83\x02\xf7\x02\x08\x81\x87\x02\xf6\x02\x06\x81\x83"
  "\x02\xf5\x02\x04\xfe\x05\x15\x28\x13\x02\x4e\xff\x02\x04\x85\x08"
  "\x03\x91\x01\x02\x4f\x14\x28\x25\x45\x4e\x44\x2d\x47\x52\x4f\x55"
  "\x50\x20\x63\x61\x6c\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x6e\x6f"
  "\x20\x25\x53\x54\x41\x52\x54\x2d\x47\x52\x4f\x55\x50\x3a\x12\x04"
  "\x05\x61\x73\x73\x71\x92\x01\x04\x05\x64\x65\x6c\x71\x04\x19\x04"
  "\x87\x03\x12\x81\x8b\x02\x86\x03\x10\x81\x8b\x02\x85\x03\x0e\x81"
  "\x89\x02\x84\x03\x0c\x81\x89\x02\x83\x03\x0a\x81\x89\x02\x82\x03"
  "\x08\x81\x87\x02\x81\x03\x06\x81\x89\x02\x80\x03\x04\x85\x08\x11"
  "\x1f\x93\x01\x02\x50\x14\x2f\x52\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x20\x74\x6f\x20\x67\x72\x6f\x75\x70\x20\x61\x70\x70\x65\x61\x72"
  "\x73\x20\x62\x65\x66\x6f\x72\x65\x20\x67\x72\x6f\x75\x70\x27\x73"
  "\x20\x65\x6e\x64\x3a\x12\x04\x92\x01\x02\x5e\x04\x19\x04\x0d\x25"
  "\x67\x72\x6f\x75\x70\x2d\x63\x68\x61\x72\x73\x92\x01\x03\x0b\x69"
  "\x6e\x73\x6e\x3a\x63\x68\x61\x72\x73\x94\x01\x06\x92\x03\x18\x81"
  "\x87\x02\x91\x03\x16\x81\x8b\x02\x90\x03\x14\x81\x8b\x02\x8f\x03"
  "\x12\x81\x89\x02\x8e\x03\x10\x81\x89\x02\x8d\x03\x0e\x81\x89\x02"
  "\x8c\x03\x0c\x81\x87\x02\x8b\x03\x0a\x81\x87\x02\x8a\x03\x08\x81"
  "\x85\x02\x89\x03\x06\x81\x87\x02\x88\x03\x04\x84\x06\x17\x29\x95"
  "\x01\x02\x51\x1b\x46\x61\x69\x6c\x75\x72\x65\x20\x6f\x66\x20\x53"
  "\x41\x4d\x45\x3f\x20\x70\x72\x65\x64\x69\x63\x61\x74\x65\x80\x01"
  "\x03\x81\x01\x03\x54\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x03"
  "\x19\x03\x58\x06\x9a\x03\x12\x81\x8d\x02\x99\x03\x10\x81\x8b\x02"
  "\x98\x03\x0e\x81\x8d\x02\x97\x03\x0c\x81\x8b\x02\x96\x03\x0a\x81"
  "\x8b\x02\x95\x03\x08\x81\x85\x02\x94\x03\x06\x81\x85\x02\x93\x03"
  "\x04\x84\x06\x11\x23\x19\x02\x52\x14\x12\x04\x07\x72\x65\x6d\x6f"
  "\x76\x65\x03\x09\x04\x1c\x04\xa8\x03\x1e\x81\x85\x02\xa7\x03\x1c"
  "\x81\x85\x02\xa6\x03\x1a\x81\x87\x02\xa5\x03\x18\x81\x87\x02\xa4"
  "\x03\x16\x81\x83\x02\xa3\x03\x14\x81\x83\x02\xa2\x03\x12\x81\x83"
  "\x02\xa1\x03\x10\x83\x04\xa0\x03\x0e\x81\x85\x02\x9f\x03\x0c\x81"
  "\x85\x02\x9e\x03\x0a\x81\x85\x02\x9d\x03\x08\x81\x85\x02\x9c\x03"
  "\x06\x83\x04\x9b\x03\x04\x83\x04\x1d\x2b\x1c\x02\x53\x19\x72\x65"
  "\x67\x73\x65\x78\x70\x2d\x6d\x61\x74\x63\x68\x2d\x69\x6e\x70\x75"
  "\x74\x2d\x70\x6f\x72\x74\x14\x04\x1b\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65\x67\x73"
  "\x65\x78\x70\x12\x04\x15\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d"
  "\x69\x6e\x70\x75\x74\x2d\x70\x6f\x72\x74\x03\x17\x25\x63\x68\x61"
  "\x72\x2d\x73\x6f\x75\x72\x63\x65\x2d\x3e\x70\x6f\x73\x69\x74\x69"
  "\x6f\x6e\x96\x01\x04\x11\x25\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c"
  "\x2d\x6d\x61\x74\x63\x68\x97\x01\x03\x0a\x72\x65\x61\x64\x2d\x63"
  "\x68\x61\x72\x03\x0c\x65\x6f\x66\x2d\x6f\x62\x6a\x65\x63\x74\x3f"
  "\x07\xaf\x03\x10\x81\x83\x02\xae\x03\x0e\x81\x83\x02\xad\x03\x0c"
  "\x81\x83\x02\xac\x03\x0a\x81\x85\x02\xab\x03\x08\x81\x85\x02\xaa"
  "\x03\x06\x81\x85\x02\xa9\x03\x04\x84\x06\x0f\x20\x98\x01\x02\x54"
  "\x06\x16\x25\x6d\x61\x6b\x65\x2d\x73\x6f\x75\x72\x63\x65\x2d\x70"
  "\x6f\x73\x69\x74\x69\x6f\x6e\x99\x01\x02\xb1\x03\x06\x81\x85\x02"
  "\xb0\x03\x04\x83\x04\x05\x0c\x9a\x01\x02\x55\x80\x01\xb2\x03\x04"
  "\x83\x04\x03\x9b\x01\x02\x56\x80\x01\xb3\x03\x04\x83\x04\x03\x9c"
  "\x01\x02\x57\x80\x01\xb4\x03\x04\x83\x04\x03\x9d\x01\x02\x58\x80"
  "\x01\xb5\x03\x04\x83\x04\x03\x9e\x01\x02\x59\x80\x01\x8e\x01\x07"
  "\x2e\x74\x61\x67\x2e\x32\x9f\x01\x02\xb9\x03\x0a\x81\x85\x02\xb8"
  "\x03\x08\x81\x83\x02\xb7\x03\x06\x81\x83\x02\xb6\x03\x04\x83\x04"
  "\x09\x12\xa0\x01\x02\x5a\x80\x01\xba\x03\x04\x83\x04\x03\xa1\x01"
  "\x02\x5b\x80\x01\xbb\x03\x04\x83\x04\x03\xa2\x01\x02\x5c\x80\x01"
  "\xbc\x03\x04\x83\x04\x03\xa3\x01\x02\x5d\x80\x01\x06\x99\x01\x02"
  "\xc2\x03\x0e\x81\x89\x02\xc1\x03\x0c\x81\x87\x02\xc0\x03\x0a\x81"
  "\x85\x02\xbf\x03\x08\x81\x87\x02\xbe\x03\x06\x81\x83\x02\xbd\x03"
  "\x04\x83\x04\x0d\x17\xa4\x01\x02\x5e\x80\x01\xc7\x03\x0c\x81\x87"
  "\x02\xc6\x03\x0a\x81\x85\x02\xc5\x03\x08\x81\x87\x02\xc4\x03\x06"
  "\x81\x85\x02\xc3\x03\x04\x84\x06\x0b\x12\xa5\x01\x02\x5f\x08\x5d"
  "\x15\x72\x65\x67\x73\x65\x78\x70\x2d\x6d\x61\x74\x63\x68\x2d\x73"
  "\x74\x72\x69\x6e\x67\x5d\x04\x12\x04\x11\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x73\x74\x72\x69\x6e\x67\x05\x10\x25\x6d\x61\x6b"
  "\x65\x2d\x73\x75\x62\x73\x74\x72\x69\x6e\x67\xa6\x01\x05\x20\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x75\x62\x73\x74\x72\x69"
  "\x6e\x67\x2d\x73\x74\x61\x72\x74\x2d\x69\x6e\x64\x65\x78\x05\x1e"
  "\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x75\x62\x73\x74\x72"
  "\x69\x6e\x67\x2d\x65\x6e\x64\x2d\x69\x6e\x64\x65\x78\x04\x97\x01"
  "\x07\xce\x03\x10\x81\x8d\x02\xcd\x03\x0e\x81\x89\x02\xcc\x03\x0c"
  "\x81\x89\x02\xcb\x03\x0a\x81\x8b\x02\xca\x03\x08\x81\x8b\x02\xc9"
  "\x03\x06\x81\x89\x02\xc8\x03\x04\x86\x06\x0f\x23\xa7\x01\x02\x60"
  "\x80\x01\xcf\x03\x04\x83\x04\x03\xa8\x01\x02\x61\x80\x01\xd0\x03"
  "\x04\x83\x04\x03\xa9\x01\x02\x62\x80\x01\xd1\x03\x04\x83\x04\x03"
  "\xaa\x01\x02\x63\x80\x01\x8e\x01\x07\x2e\x74\x61\x67\x2e\x33\x8e"
  "\x01\x02\xd5\x03\x0a\x81\x85\x02\xd4\x03\x08\x81\x83\x02\xd3\x03"
  "\x06\x81\x83\x02\xd2\x03\x04\x83\x04\x09\x12\xab\x01\x02\x64\x03"
  "\x0c\x25\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x3f\xac\x01\x02\xd6"
  "\x03\x04\x83\x04\x03\xad\x01\x02\x65\xd7\x03\x04\x83\x04\x03\xae"
  "\x01\x02\x66\x80\x01\xd8\x03\x04\x83\x04\x03\xaf\x01\x02\x67\x80"
  "\x01\xd9\x03\x04\x83\x04\x03\xb0\x01\x02\x68\x80\x01\xda\x03\x04"
  "\x83\x04\x03\xb1\x01\x02\x69\xdb\x03\x04\x83\x04\x03\xb2\x01\x02"
  "\x6a\x80\x01\x5c\xde\x03\x08\x83\x04\xdd\x03\x06\x81\x83\x02\xdc"
  "\x03\x04\x81\x83\x02\x07\x0e\xb3\x01\x02\x6b\x80\x01\x5c\xe1\x03"
  "\x08\x83\x04\xe0\x03\x06\x81\x83\x02\xdf\x03\x04\x81\x83\x02\x07"
  "\x0e\x80\x01\x02\x6c\xe2\x03\x04\x83\x04\x03\x5c\x02\x6d\xe3\x03"
  "\x04\x84\x06\x03\x6d\xb4\x01\xb4\x01\x04\xb2\x01\x04\xb3\x01\x08"
  "\x80\x01\x08\x5c\x04\x8e\x01\x15\x25\x73\x74\x72\x69\x6e\x67\x2d"
  "\x70\x6f\x73\x69\x74\x69\x6f\x6e\x2d\x65\x6e\x64\x17\x25\x73\x74"
  "\x72\x69\x6e\x67\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x2d\x73\x74"
  "\x61\x72\x74\x18\x25\x73\x74\x72\x69\x6e\x67\x2d\x70\x6f\x73\x69"
  "\x74\x69\x6f\x6e\x2d\x73\x74\x72\x69\x6e\x67\x17\x25\x73\x74\x72"
  "\x69\x6e\x67\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x2d\x69\x6e\x64"
  "\x65\x78\x12\x25\x73\x74\x72\x69\x6e\x67\x2d\x70\x6f\x73\x69\x74"
  "\x69\x6f\x6e\x3f\xb4\x01\xac\x01\xb1\x01\x04\xb0\x01\x04\xaf\x01"
  "\x04\xae\x01\x04\xad\x01\x04\xab\x01\x04\xa6\x01\x0f\x25\x73\x75"
  "\x62\x73\x74\x72\x69\x6e\x67\x2d\x65\x6e\x64\x11\x25\x73\x75\x62"
  "\x73\x74\x72\x69\x6e\x67\x2d\x73\x74\x61\x72\x74\x12\x25\x73\x75"
  "\x62\x73\x74\x72\x69\x6e\x67\x2d\x73\x74\x72\x69\x6e\x67\xaa\x01"
  "\x04\xa9\x01\x04\xa8\x01\x04\x0f\x72\x74\x64\x3a\x25\x73\x75\x62"
  "\x73\x74\x72\x69\x6e\x67\xb3\x01\x5d\xa7\x01\x04\x0b\x25\x73\x75"
  "\x62\x73\x74\x72\x69\x6e\x67\x07\x73\x74\x72\x69\x6e\x67\x06\x73"
  "\x74\x61\x72\x74\x04\x65\x6e\x64\xa1\x01\x04\xa2\x01\x04\xa3\x01"
  "\x04\xa4\x01\x04\xa5\x01\x04\x9f\x01\x12\x25\x73\x6f\x75\x72\x63"
  "\x65\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x3f\xb2\x01\xa0\x01\x04"
  "\x99\x01\x18\x25\x73\x6f\x75\x72\x63\x65\x2d\x70\x6f\x73\x69\x74"
  "\x69\x6f\x6e\x2d\x73\x6f\x75\x72\x63\x65\x1b\x25\x73\x6f\x75\x72"
  "\x63\x65\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x2d\x70\x72\x65\x76"
  "\x2d\x63\x68\x61\x72\x1b\x25\x73\x6f\x75\x72\x63\x65\x2d\x70\x6f"
  "\x73\x69\x74\x69\x6f\x6e\x2d\x6e\x65\x78\x74\x2d\x63\x68\x61\x72"
  "\x17\x25\x73\x6f\x75\x72\x63\x65\x2d\x70\x6f\x73\x69\x74\x69\x6f"
  "\x6e\x2d\x69\x6e\x64\x65\x78\x9e\x01\x04\x9d\x01\x04\x9c\x01\x04"
  "\x9b\x01\x04\x15\x72\x74\x64\x3a\x25\x73\x6f\x75\x72\x63\x65\x2d"
  "\x70\x6f\x73\x69\x74\x69\x6f\x6e\xb1\x01\x11\x25\x73\x6f\x75\x72"
  "\x63\x65\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x06\x69\x6e\x64\x65"
  "\x78\x54\x52\x07\x73\x6f\x75\x72\x63\x65\x8f\x01\x96\x01\x14\x92"
  "\x01\x68\x66\x64\x87\x01\x15\x64\x65\x66\x69\x6e\x65\x2d\x70\x6f"
  "\x73\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\xb0\x01\x10\x25\x70"
  "\x6f\x73\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3f\x0b\x9a\x01"
  "\x04\x98\x01\x04\x1c\x04\x19\x04\x95\x01\x04\x93\x01\x04\x91\x01"
  "\x04\x13\x04\x90\x01\x04\x0b\x11\x15\x25\x70\x6f\x73\x69\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x2d\x73\x61\x6d\x65\x3f\x1d\x25\x70"
  "\x6f\x73\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2d\x6e\x65\x78"
  "\x74\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x19\x25\x70\x6f\x73\x69"
  "\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2d\x70\x72\x65\x76\x2d\x63"
  "\x68\x61\x72\x19\x25\x70\x6f\x73\x69\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x2d\x6e\x65\x78\x74\x2d\x63\x68\x61\x72\x19\x25\x70\x6f"
  "\x73\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2d\x67\x65\x74\x2d"
  "\x69\x6e\x64\x65\x78\x19\x25\x70\x6f\x73\x69\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x2d\x70\x72\x65\x64\x69\x63\x61\x74\x65\x8d\x01"
  "\x04\x8c\x01\x04\x8b\x01\x04\x8a\x01\x04\x89\x01\x04\x88\x01\x04"
  "\x13\x72\x74\x64\x3a\x25\x70\x6f\x73\x69\x74\x69\x6f\x6e\x2d\x74"
  "\x79\x70\x65\xaf\x01\x0f\x25\x70\x6f\x73\x69\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x0a\x70\x72\x65\x64\x69\x63\x61\x74\x65\x09\x54"
  "\x52\x58\x06\x73\x61\x6d\x65\x3f\x81\x01\x70\x58\x52\x54\x09\x7c"
  "\x7b\x75\x78\x74\x40\x3e\x6c\x3b\x37\x39\x35\x47\x49\x4e\x61\x62"
  "\x4c\x2b\x29\x17\x94\x01\x1a\x2f\x2d\x33\x31\x6b\x5e\x24\x18\x04"
  "\x86\x01\x04\x85\x01\x04\x84\x01\x04\x83\x01\x04\x82\x01\x04\x7f"
  "\x04\x7e\x04\x7d\x04\x7a\x04\x79\x04\x77\x04\x76\x04\x73\x04\x72"
  "\x04\x71\x04\x6f\x04\x6e\x04\x6d\x04\x6a\x04\x69\x04\x67\x04\x65"
  "\x04\x63\x04\x5f\x04\x60\x04\x59\x04\x5b\x04\x5a\x04\x57\x04\x56"
  "\x04\x55\x04\x53\x04\x51\x04\x50\x04\x24\x0a\x67\x72\x6f\x75\x70"
  "\x2d\x72\x65\x66\x06\x64\x61\x74\x75\x6d\xae\x01\x4f\x04\x06\x67"
  "\x72\x6f\x75\x70\xae\x01\x05\x66\x6f\x72\x6d\xad\x01\x4d\x04\x04"
  "\x73\x65\x71\x02\x2a\xac\x01\xad\x01\x4a\x04\x04\x61\x6c\x74\xac"
  "\x01\xad\x01\x48\x04\x44\x42\x04\x26\xae\x01\xae\x01\xad\x01\x46"
  "\x04\x24\xae\x01\xae\x01\xad\x01\x45\x04\x3d\x43\x04\x26\xae\x01"
  "\xad\x01\x41\x04\x24\xae\x01\xad\x01\x3f\x04\x03\x2a\x3f\xad\x01"
  "\x3c\x04\x03\x3f\x3f\xad\x01\x3a\x04\xac\x01\xad\x01\x38\x04\x02"
  "\x3f\xad\x01\x36\x04\x0b\x73\x74\x72\x69\x6e\x67\x2d\x65\x6e\x64"
  "\x34\x04\x0d\x73\x74\x72\x69\x6e\x67\x2d\x73\x74\x61\x72\x74\x32"
  "\x04\x09\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x30\x04\x0b\x6c\x69\x6e"
  "\x65\x2d\x73\x74\x61\x72\x74\x2e\x04\x22\xac\x01\xae\x01\x2c\x04"
  "\x09\x63\x68\x61\x72\x2d\x73\x65\x74\xac\x01\xae\x01\x2a\x04\x03"
  "\x2b\x3f\xad\x01\x27\x04\x02\x2b\xad\x01\x25\x04\x09\x61\x6e\x79"
  "\x2d\x63\x68\x61\x72\x23\x04\x0f\x15\x17\x69\x6e\x69\x74\x69\x61"
  "\x6c\x69\x7a\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x73\x21"
  "\x1f\x4b\x28\x97\x01\x0c\x12\x0c\x21\x04\x1e\x04\x16\x0c\x1d\x04"
  "\x1b\x04\x10\x04\x0e\x04\x0d\x04\x0c\x0b\x05\x69\x6d\x70\x6c\xae"
  "\x01\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x13\x3c\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x72\x65\x67"
  "\x73\x65\x78\x70\x3e\xad\x01\xae\x01\x20\x0a\x04\x04\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x06\x11"
  "\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65"
  "\xae\x01\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d"
  "\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04\xad\x01\xaf"
  "\x01\xb1\x01\xb2\x01\xb3\x01\xb4\x01\x07\x04\xae\x01\x04\x13\x72"
  "\x65\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x6f"
  "\x72\x03\x11\x72\x65\x63\x6f\x72\x64\x2d\x70\x72\x65\x64\x69\x63"
  "\x61\x74\x65\x04\x10\x72\x65\x63\x6f\x72\x64\x2d\x61\x63\x63\x65"
  "\x73\x73\x6f\x72\x04\x08\xb0\x01\x07\x4c\x9a\x01\x80\x80\x04\x4b"
  "\x98\x01\x81\x81\x02\x4a\x96\x01\x81\x81\x02\x49\x94\x01\x81\x8b"
  "\x02\x48\x92\x01\x81\x83\x02\x47\x90\x01\x81\x85\x02\x46\x8e\x01"
  "\x81\x83\x02\x45\x8c\x01\x81\x89\x02\x44\x8a\x01\x81\x87\x02\x43"
  "\x88\x01\x81\x83\x02\x42\x86\x01\x81\x85\x02\x41\x84\x01\x81\x83"
  "\x02\x40\x82\x01\x81\x85\x02\x3f\x80\x01\x81\x87\x02\x3e\x7e\x81"
  "\x83\x02\x3d\x7c\x81\x83\x02\x3c\x7a\x81\x8f\x02\x3b\x78\x81\x83"
  "\x02\x3a\x76\x81\x85\x02\x39\x74\x81\x83\x02\x38\x72\x81\x8b\x02"
  "\x37\x70\x81\x87\x02\x36\x6e\x81\x83\x02\x35\x6c\x81\x85\x02\x34"
  "\x6a\x81\x83\x02\x33\x68\x81\x85\x02\x32\x66\x81\x87\x02\x31\x64"
  "\x81\x83\x02\x30\x62\x81\x83\x02\x2f\x60\x81\x85\x02\x2e\x5e\x81"
  "\x83\x02\x2d\x5c\x81\x8f\x02\x2c\x5a\x81\x87\x02\x2b\x58\x81\x83"
  "\x02\x2a\x56\x81\x85\x02\x29\x54\x81\x83\x02\x28\x52\x81\x85\x02"
  "\x27\x50\x81\x87\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x83\x02\x24"
  "\x4a\x81\x83\x02\x23\x48\x81\x83\x02\x22\x46\x81\x83\x02\x21\x44"
  "\x81\x83\x02\x20\x42\x81\x83\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81"
  "\x83\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x83"
  "\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x83\x02\x18\x32\x81\x83\x02"
  "\x17\x30\x81\x83\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x83\x02\x14"
  "\x2a\x81\x83\x02\x13\x28\x81\x83\x02\x12\x26\x81\x83\x02\x11\x24"
  "\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81"
  "\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x85\x02\x0b\x18\x81\x83"
  "\x02\x0a\x16\x81\x85\x02\x09\x14\x81\x89\x02\x08\x12\x81\x83\x02"
  "\x07\x10\x81\x85\x02\x06\x0e\x81\x87\x02\x05\x0c\x81\x83\x02\x04"
  "\x0a\x81\x85\x02\x03\x08\x81\x89\x02\x02\x06\x81\x83\x02\x01\x04"
  "\x81\x83\x02\x99\x01\x9b\x02";

SCHEME_OBJECT *
regsexp_so_data_7bbca1aae24de1cb (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_regsexp_so_data_7bbca1aae24de1cb [0]))), (sizeof (prog_regsexp_so_data_7bbca1aae24de1cb)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_91]));
}

DECLARE_COMPILED_DATA_NS ("regsexp.so", regsexp_so_data_7bbca1aae24de1cb)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("regsexp.so", "3ab5ff5e6d185abe")
