/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:56-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 12
#define DEBUGGING_LABEL_1_2 11
#define EXECUTE_CACHE_1_7 7
#define EXECUTE_CACHE_1_6 9
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto transformer_eval_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (transformer_eval_4)
DEFLABEL (transformer_eval_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 8
#define DEBUGGING_LABEL_2_2 7
#define EXECUTE_CACHE_2_5 5
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto output_variable_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_variable_3)
DEFLABEL (output_variable_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 5
#define DEBUGGING_LABEL_3_2 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto output_constant_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_constant_3)
DEFLABEL (output_constant_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 8
#define DEBUGGING_LABEL_4_2 7
#define EXECUTE_CACHE_4_5 5
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto output_assignment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_assignment_3)
DEFLABEL (output_assignment_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_6 5
#define LABEL_5_5 7
#define LABEL_5_8 9
#define TAG_5_9 3
#define LABEL_5_12 11
#define ENVIRONMENT_LABEL_5_3 24
#define DEBUGGING_LABEL_5_2 23
#define EXECUTE_CACHE_5_13 13
#define EXECUTE_CACHE_5_11 15
#define EXECUTE_CACHE_5_10 17
#define EXECUTE_CACHE_5_7 19
#define FREE_REFERENCE_5_0 22
#define FREE_REFERENCES_LABEL_5_0 12
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_5_4);
      goto output_top_level_definition_4;

    case 1:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto lambda_9;

    case 4:
      current_block = (Rpc - LABEL_5_12);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_top_level_definition_8)
DEFLABEL (output_top_level_definition_4)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_8])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (label_11)
  (Wrd5.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  goto label_10;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_5_8);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_14;
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  (Wrd12.Obj) = (Rsp [1]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_12;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  Rvl = ((Wrd15.pObj) [2]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [3]);
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_12])), (Wrd7.pObj));

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 12
#define DEBUGGING_LABEL_6_2 11
#define EXECUTE_CACHE_6_7 7
#define EXECUTE_CACHE_6_6 9
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto output_top_level_syntax_definition_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_top_level_syntax_definition_4)
DEFLABEL (output_top_level_syntax_definition_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 8
#define DEBUGGING_LABEL_7_2 7
#define EXECUTE_CACHE_7_5 5
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto output_conditional_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_conditional_3)
DEFLABEL (output_conditional_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 8
#define DEBUGGING_LABEL_8_2 7
#define EXECUTE_CACHE_8_5 5
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto output_disjunction_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_disjunction_3)
DEFLABEL (output_disjunction_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 8
#define DEBUGGING_LABEL_9_2 7
#define EXECUTE_CACHE_9_5 5
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto output_sequence_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_sequence_3)
DEFLABEL (output_sequence_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 8
#define DEBUGGING_LABEL_10_2 7
#define EXECUTE_CACHE_10_5 5
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto output_combination_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_combination_3)
DEFLABEL (output_combination_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_5]));

INVOKE_INTERFACE_TARGET_1
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
syntax_output_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto output_lambda_0;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_lambda_4)
DEFLABEL (output_lambda_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define TAG_12_8 2
#define ENVIRONMENT_LABEL_12_3 14
#define DEBUGGING_LABEL_12_2 13
#define EXECUTE_CACHE_12_9 9
#define EXECUTE_CACHE_12_6 11
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_12_4);
      goto output_named_lambda_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_named_lambda_5)
DEFLABEL (output_named_lambda_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_7])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_12_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [4]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 8
#define DEBUGGING_LABEL_13_2 7
#define EXECUTE_CACHE_13_5 5
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto output_delay_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_delay_3)
DEFLABEL (output_delay_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 8
#define DEBUGGING_LABEL_14_2 7
#define EXECUTE_CACHE_14_5 5
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto output_unassigned_test_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_unassigned_test_3)
DEFLABEL (output_unassigned_test_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 8
#define DEBUGGING_LABEL_15_2 7
#define EXECUTE_CACHE_15_5 5
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto output_unassigned_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_unassigned_3)
DEFLABEL (output_unassigned_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 6
#define DEBUGGING_LABEL_16_2 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto output_unspecific_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_unspecific_3)
DEFLABEL (output_unspecific_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  Rvl = (current_block [OBJECT_16_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_6 5
#define LABEL_17_5 7
#define ENVIRONMENT_LABEL_17_3 16
#define DEBUGGING_LABEL_17_2 15
#define EXECUTE_CACHE_17_8 9
#define EXECUTE_CACHE_17_7 11
#define FREE_REFERENCE_17_0 14
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_17_4);
      goto output_let_1;

    case 1:
      current_block = (Rpc - LABEL_17_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_let_5)
DEFLABEL (output_let_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_7;
  Wrd11 = Wrd15;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_6])), (Wrd12.pObj));

DEFLABEL (label_3)
  (Wrd11.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_11 7
#define LABEL_18_6 9
#define LABEL_18_8 11
#define LABEL_18_19 13
#define LABEL_18_9 15
#define LABEL_18_10 17
#define LABEL_18_13 19
#define LABEL_18_14 21
#define LABEL_18_15 23
#define LABEL_18_17 25
#define LABEL_18_18 27
#define LABEL_18_21 29
#define LABEL_18_22 31
#define LABEL_18_23 33
#define LABEL_18_24 35
#define LABEL_18_32 37
#define ENVIRONMENT_LABEL_18_3 70
#define DEBUGGING_LABEL_18_2 69
#define OBJECT_18_1 68
#define OBJECT_18_0 67
#define EXECUTE_CACHE_18_34 39
#define EXECUTE_CACHE_18_33 41
#define EXECUTE_CACHE_18_31 43
#define EXECUTE_CACHE_18_30 45
#define EXECUTE_CACHE_18_29 47
#define EXECUTE_CACHE_18_28 49
#define EXECUTE_CACHE_18_27 51
#define EXECUTE_CACHE_18_26 53
#define EXECUTE_CACHE_18_20 55
#define EXECUTE_CACHE_18_16 57
#define EXECUTE_CACHE_18_12 59
#define EXECUTE_CACHE_18_25 61
#define EXECUTE_CACHE_18_7 63
#define FREE_REFERENCE_18_0 66
#define FREE_REFERENCES_LABEL_18_0 38
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_18_4);
      goto output_letrec_20;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_18_11);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_18_6);
      goto lambda_3;

    case 4:
      current_block = (Rpc - LABEL_18_8);
      goto continuation_18;

    case 5:
      current_block = (Rpc - LABEL_18_19);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_18_10);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_18_13);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_18_14);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_18_15);
      goto continuation_0;

    case 11:
      current_block = (Rpc - LABEL_18_17);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_18_18);
      goto lambda_5;

    case 13:
      current_block = (Rpc - LABEL_18_21);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_18_22);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_18_23);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_18_24);
      goto lambda_8;

    case 17:
      current_block = (Rpc - LABEL_18_32);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_letrec_24)
DEFLABEL (output_letrec_20)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_31;
  Wrd14 = Wrd18;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_18_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_26]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd25.Obj) = (current_block [OBJECT_18_1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_20]));

DEFLABEL (label_28)
  (Wrd5.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_29)
  (Wrd9.Obj) = (current_block [OBJECT_18_1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_21]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_22]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_23]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_24]))));
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_25]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_18_23);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_31]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_18_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_18_21);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_31]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_18_8);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_18_17);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_20]));

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_11])), (Wrd15.pObj));

DEFLABEL (label_22)
  (Wrd14.Obj) = Rvl;
  goto label_30;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (Wrd5.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_25)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_18_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_16]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_29]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_28]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_13);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_27]));

DEFLABEL (lambda_26)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_18_18);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_30]));

DEFLABEL (lambda_27)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_18_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_33]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18_32);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_34]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_7 5
#define LABEL_19_6 7
#define LABEL_19_5 9
#define LABEL_19_10 11
#define LABEL_19_8 13
#define ENVIRONMENT_LABEL_19_3 27
#define DEBUGGING_LABEL_19_2 26
#define OBJECT_19_1 25
#define OBJECT_19_0 24
#define EXECUTE_CACHE_19_12 15
#define EXECUTE_CACHE_19_11 17
#define EXECUTE_CACHE_19_9 19
#define FREE_REFERENCE_19_1 22
#define FREE_REFERENCE_19_0 23
#define FREE_REFERENCES_LABEL_19_0 14
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd11;
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
      goto output_body_7;

    case 1:
      current_block = (Rpc - LABEL_19_7);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_19_10);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_body_12)
DEFLABEL (output_body_7)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_18;
  Wrd12 = Wrd16;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (* (--Rsp)) = Rvl;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_13;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_19_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [0]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (label_13)
  (Wrd5.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_16)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_15;
  Wrd7 = Wrd11;

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_10])), (Wrd8.pObj));

DEFLABEL (label_10)
  (Wrd7.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_7])), (Wrd13.pObj));

DEFLABEL (label_9)
  (Wrd12.Obj) = Rvl;
  goto label_17;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd5.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 8
#define DEBUGGING_LABEL_20_2 7
#define EXECUTE_CACHE_20_5 5
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto output_definition_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_definition_3)
DEFLABEL (output_definition_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_6 5
#define LABEL_21_7 7
#define LABEL_21_5 9
#define LABEL_21_11 11
#define LABEL_21_12 13
#define LABEL_21_8 15
#define LABEL_21_13 17
#define LABEL_21_15 19
#define ENVIRONMENT_LABEL_21_3 37
#define DEBUGGING_LABEL_21_2 36
#define OBJECT_21_3 35
#define OBJECT_21_2 34
#define OBJECT_21_1 33
#define OBJECT_21_0 32
#define EXECUTE_CACHE_21_16 21
#define EXECUTE_CACHE_21_14 23
#define EXECUTE_CACHE_21_10 25
#define EXECUTE_CACHE_21_9 27
#define FREE_REFERENCE_21_1 30
#define FREE_REFERENCE_21_0 31
#define FREE_REFERENCES_LABEL_21_0 20
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd6;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_21_4);
      goto output_top_level_sequence_13;

    case 1:
      current_block = (Rpc - LABEL_21_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_21_11);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_21_12);
      goto lambda_2;

    case 6:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_21_13);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_21_15);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_top_level_sequence_19)
DEFLABEL (output_top_level_sequence_13)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_30;
  Wrd9 = Wrd13;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_26;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_21;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (label_21)
  if (! ((Wrd8.uLng) == 1))
    goto label_25;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_24)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_22;
  Rsp = (& (Rsp [2]));
  goto lambda_2;

DEFLABEL (label_22)
  Rsp = (& (Rsp [2]));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_23;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  Rvl = ((Wrd22.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 1);

DEFLABEL (label_25)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_16)
  (Wrd10.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 1)
    goto label_28;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (Wrd42.Obj) = (current_block [OBJECT_21_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_27)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_2;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd28.Obj);
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_6])), (Wrd10.pObj));

DEFLABEL (label_15)
  (Wrd9.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_20)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_21_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_32;
  Wrd6 = Wrd10;

DEFLABEL (label_31)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_16]));

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_15])), (Wrd7.pObj));

DEFLABEL (label_17)
  (Wrd6.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 8
#define DEBUGGING_LABEL_22_2 7
#define EXECUTE_CACHE_22_5 5
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto output_the_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_the_environment_3)
DEFLABEL (output_the_environment_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 8
#define DEBUGGING_LABEL_23_2 7
#define EXECUTE_CACHE_23_5 5
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_23_4);
      goto output_access_reference_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_access_reference_3)
DEFLABEL (output_access_reference_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 10
#define DEBUGGING_LABEL_24_2 9
#define OBJECT_24_1 8
#define OBJECT_24_0 7
#define EXECUTE_CACHE_24_5 5
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_24_4);
      goto output_access_assignment_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_access_assignment_6)
DEFLABEL (output_access_assignment_3)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_24_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_24_1]);
  (Rsp [1]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_5]));

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
syntax_output_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto output_runtime_reference_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_runtime_reference_3)
DEFLABEL (output_runtime_reference_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_7 7
#define LABEL_26_9 9
#define ENVIRONMENT_LABEL_26_3 20
#define DEBUGGING_LABEL_26_2 19
#define EXECUTE_CACHE_26_11 11
#define EXECUTE_CACHE_26_10 13
#define EXECUTE_CACHE_26_8 15
#define EXECUTE_CACHE_26_6 17
#define FREE_REFERENCES_LABEL_26_0 10
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_26_4);
      goto output_post_process_expression_4;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_26_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (output_post_process_expression_7)
DEFLABEL (output_post_process_expression_4)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_9);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 8
#define DEBUGGING_LABEL_27_2 7
#define EXECUTE_CACHE_27_5 5
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto empty_unmapping_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (empty_unmapping_3)
DEFLABEL (empty_unmapping_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 8
#define DEBUGGING_LABEL_28_2 7
#define EXECUTE_CACHE_28_5 5
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_28_4);
      goto store_unmapping_entryB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (store_unmapping_entryB_3)
DEFLABEL (store_unmapping_entryB_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define TAG_29_6 1
#define LABEL_29_7 7
#define ENVIRONMENT_LABEL_29_3 14
#define DEBUGGING_LABEL_29_2 13
#define EXECUTE_CACHE_29_9 9
#define EXECUTE_CACHE_29_8 11
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_29_4);
      goto unmapping__substitution_3;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unmapping__substitution_6)
DEFLABEL (unmapping__substitution_3)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_29_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_6 5
#define LABEL_30_5 7
#define ENVIRONMENT_LABEL_30_3 14
#define DEBUGGING_LABEL_30_2 13
#define EXECUTE_CACHE_30_7 9
#define FREE_REFERENCE_30_0 12
#define FREE_REFERENCES_LABEL_30_0 8
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto compute_substitution_1;

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

DEFLABEL (compute_substitution_5)
DEFLABEL (compute_substitution_1)
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
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_6])), (Wrd10.pObj));

DEFLABEL (label_3)
  (Wrd9.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 12
#define DEBUGGING_LABEL_31_2 11
#define EXECUTE_CACHE_31_7 7
#define EXECUTE_CACHE_31_6 9
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto compute_substitution_variable_1;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_substitution_variable_4)
DEFLABEL (compute_substitution_variable_1)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_6 7
#define LABEL_32_8 9
#define ENVIRONMENT_LABEL_32_3 20
#define DEBUGGING_LABEL_32_2 19
#define EXECUTE_CACHE_32_11 11
#define EXECUTE_CACHE_32_10 13
#define EXECUTE_CACHE_32_9 15
#define EXECUTE_CACHE_32_7 17
#define FREE_REFERENCES_LABEL_32_0 10
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_32_4);
      goto compute_substitution_assignment_3;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_32_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_substitution_assignment_6)
DEFLABEL (compute_substitution_assignment_3)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_32_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_11]));

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
syntax_output_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto compute_substitution_unassignedP_1;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_substitution_unassignedP_4)
DEFLABEL (compute_substitution_unassignedP_1)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define TAG_34_6 1
#define ENVIRONMENT_LABEL_34_3 12
#define DEBUGGING_LABEL_34_2 11
#define EXECUTE_CACHE_34_8 7
#define EXECUTE_CACHE_34_7 9
#define FREE_REFERENCES_LABEL_34_0 6
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_34_4);
      goto compute_substitution_lambda_1;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_substitution_lambda_4)
DEFLABEL (compute_substitution_lambda_1)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_34_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_34_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define TAG_35_6 1
#define ENVIRONMENT_LABEL_35_3 12
#define DEBUGGING_LABEL_35_2 11
#define EXECUTE_CACHE_35_8 7
#define EXECUTE_CACHE_35_7 9
#define FREE_REFERENCES_LABEL_35_0 6
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_35_4);
      goto compute_substitution_open_block_1;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_substitution_open_block_4)
DEFLABEL (compute_substitution_open_block_1)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_35_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_9 7
#define LABEL_36_6 9
#define LABEL_36_8 11
#define LABEL_36_12 13
#define LABEL_36_14 15
#define LABEL_36_15 17
#define LABEL_36_17 19
#define LABEL_36_18 21
#define LABEL_36_19 23
#define LABEL_36_20 25
#define LABEL_36_13 27
#define LABEL_36_22 29
#define LABEL_36_23 31
#define LABEL_36_25 33
#define LABEL_36_26 35
#define ENVIRONMENT_LABEL_36_3 54
#define DEBUGGING_LABEL_36_2 53
#define OBJECT_36_1 52
#define OBJECT_36_0 51
#define EXECUTE_CACHE_36_24 37
#define EXECUTE_CACHE_36_21 39
#define EXECUTE_CACHE_36_16 41
#define EXECUTE_CACHE_36_11 43
#define EXECUTE_CACHE_36_10 45
#define EXECUTE_CACHE_36_7 47
#define FREE_REFERENCE_36_0 50
#define FREE_REFERENCES_LABEL_36_0 36
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_36_4);
      goto compute_substitution_binder_20;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_36_9);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_36_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_36_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_36_12);
      goto loop_17;

    case 6:
      current_block = (Rpc - LABEL_36_14);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_36_15);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_36_17);
      goto continuation_14;

    case 9:
      current_block = (Rpc - LABEL_36_18);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_36_19);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_36_20);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_36_13);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_36_22);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_36_23);
      goto label_28;

    case 15:
      current_block = (Rpc - LABEL_36_25);
      goto label_25;

    case 16:
      current_block = (Rpc - LABEL_36_26);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_substitution_binder_32)
DEFLABEL (compute_substitution_binder_20)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_35;
  Wrd9 = Wrd13;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_17;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_9])), (Wrd10.pObj));

DEFLABEL (label_22)
  (Wrd9.Obj) = Rvl;
  goto label_34;

DEFLABEL (loop_33)
DEFLABEL (loop_17)
  INTERRUPT_CHECK (26, LABEL_36_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_36;
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_54;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_53)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_52;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_36_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;

DEFLABEL (label_41)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_40;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_38;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_37)
  (Rsp [1]) = (Wrd16.Obj);
  goto loop_17;

DEFLABEL (label_38)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_26]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 1);

DEFLABEL (label_26)
  (Wrd16.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_25]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 1);

DEFLABEL (label_25)
  (Wrd7.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_18]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_50;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_49)
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_48;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_24]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_36_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_41;
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_17]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd55.Obj) = (Rsp [3]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_46;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_45)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_44;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_36_17);
  goto label_41;

DEFLABEL (label_44)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_20]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_19]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_23]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_22]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_53;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define TAG_37_6 1
#define LABEL_37_7 7
#define ENVIRONMENT_LABEL_37_3 12
#define DEBUGGING_LABEL_37_2 11
#define EXECUTE_CACHE_37_8 9
#define FREE_REFERENCES_LABEL_37_0 8
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto compute_substitution_subexpression_2;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_substitution_subexpression_5)
DEFLABEL (compute_substitution_subexpression_2)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_37_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
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
  INTERRUPT_CHECK (27, LABEL_37_7);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define TAG_38_6 1
#define LABEL_38_7 7
#define LABEL_38_9 9
#define LABEL_38_10 11
#define LABEL_38_12 13
#define LABEL_38_13 15
#define LABEL_38_11 17
#define LABEL_38_16 19
#define LABEL_38_15 21
#define ENVIRONMENT_LABEL_38_3 32
#define DEBUGGING_LABEL_38_2 31
#define OBJECT_38_1 30
#define OBJECT_38_0 29
#define EXECUTE_CACHE_38_17 23
#define EXECUTE_CACHE_38_14 25
#define EXECUTE_CACHE_38_8 27
#define FREE_REFERENCES_LABEL_38_0 22
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd27;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd49;
  machine_word Wrd56;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_38_4);
      goto compute_substitution_subexpressions_14;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto lambda_22;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_38_9);
      goto loop_10;

    case 4:
      current_block = (Rpc - LABEL_38_10);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_38_12);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_38_13);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_38_11);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_38_16);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_38_15);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_substitution_subexpressions_21)
DEFLABEL (compute_substitution_subexpressions_14)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_38_5);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
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
  INTERRUPT_CHECK (27, LABEL_38_7);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_24;
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  (Wrd10.pObj) = (& (Rsp [2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd10.pObj)));
  (Rsp [1]) = (Wrd12.Obj);
  Rdl = (& (Rsp [5]));
  goto loop_10;

DEFLABEL (loop_23)
DEFLABEL (loop_10)
  DLINK_INTERRUPT_CHECK (25, LABEL_38_9);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_33;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_32)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 1)
    goto label_27;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_26;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_25)
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_14]));

DEFLABEL (label_26)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_17)
  (Wrd27.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd27.Obj));
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_11]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd41.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_31;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [1]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_30)
  Rdl = (& (Rsp [2]));
  goto loop_10;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_38_11);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_29;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_38_15);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_17]));

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_16]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 1);

DEFLABEL (label_19)
  (Wrd20.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd20.Obj));
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_12]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_18)
  (Wrd49.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd49.Obj));
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_16)
  (Wrd10.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd5.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 8
#define DEBUGGING_LABEL_39_2 7
#define EXECUTE_CACHE_39_5 5
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto compute_substitution_default_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_substitution_default_3)
DEFLABEL (compute_substitution_default_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_6 5
#define LABEL_40_5 7
#define ENVIRONMENT_LABEL_40_3 14
#define DEBUGGING_LABEL_40_2 13
#define EXECUTE_CACHE_40_7 9
#define FREE_REFERENCE_40_0 12
#define FREE_REFERENCES_LABEL_40_0 8
#define NUMBER_OF_LINKER_SECTIONS_40_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto alpha_substitute_1;

    case 1:
      current_block = (Rpc - LABEL_40_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alpha_substitute_5)
DEFLABEL (alpha_substitute_1)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;
  Wrd9 = Wrd13;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_6])), (Wrd10.pObj));

DEFLABEL (label_3)
  (Wrd9.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_6 7
#define ENVIRONMENT_LABEL_41_3 14
#define DEBUGGING_LABEL_41_2 13
#define EXECUTE_CACHE_41_8 9
#define EXECUTE_CACHE_41_7 11
#define FREE_REFERENCES_LABEL_41_0 8
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_41_4);
      goto alpha_substitute_variable_2;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_41_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alpha_substitute_variable_5)
DEFLABEL (alpha_substitute_variable_2)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_6 7
#define LABEL_42_8 9
#define LABEL_42_9 11
#define ENVIRONMENT_LABEL_42_3 22
#define DEBUGGING_LABEL_42_2 21
#define EXECUTE_CACHE_42_12 13
#define EXECUTE_CACHE_42_11 15
#define EXECUTE_CACHE_42_10 17
#define EXECUTE_CACHE_42_7 19
#define FREE_REFERENCES_LABEL_42_0 12
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_42_4);
      goto alpha_substitute_assignment_4;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_42_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_42_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_42_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alpha_substitute_assignment_7)
DEFLABEL (alpha_substitute_assignment_4)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_8);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_6 7
#define ENVIRONMENT_LABEL_43_3 14
#define DEBUGGING_LABEL_43_2 13
#define EXECUTE_CACHE_43_8 9
#define EXECUTE_CACHE_43_7 11
#define FREE_REFERENCES_LABEL_43_0 8
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_43_4);
      goto alpha_substitute_unassignedP_2;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alpha_substitute_unassignedP_5)
DEFLABEL (alpha_substitute_unassignedP_2)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define TAG_44_6 1
#define LABEL_44_8 7
#define LABEL_44_10 9
#define ENVIRONMENT_LABEL_44_3 20
#define DEBUGGING_LABEL_44_2 19
#define EXECUTE_CACHE_44_12 11
#define EXECUTE_CACHE_44_11 13
#define EXECUTE_CACHE_44_9 15
#define EXECUTE_CACHE_44_7 17
#define FREE_REFERENCES_LABEL_44_0 10
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto alpha_substitute_lambda_3;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_44_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_44_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alpha_substitute_lambda_6)
DEFLABEL (alpha_substitute_lambda_3)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_44_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_8);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_10);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define TAG_45_6 1
#define LABEL_45_8 7
#define LABEL_45_10 9
#define LABEL_45_12 11
#define ENVIRONMENT_LABEL_45_3 24
#define DEBUGGING_LABEL_45_2 23
#define EXECUTE_CACHE_45_14 13
#define EXECUTE_CACHE_45_13 15
#define EXECUTE_CACHE_45_11 17
#define EXECUTE_CACHE_45_9 19
#define EXECUTE_CACHE_45_7 21
#define FREE_REFERENCES_LABEL_45_0 12
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_45_4);
      goto alpha_substitute_open_block_4;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_45_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_45_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_45_12);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alpha_substitute_open_block_7)
DEFLABEL (alpha_substitute_open_block_4)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_45_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_8);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_10);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_12);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_14]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_6 7
#define LABEL_46_8 9
#define LABEL_46_9 11
#define ENVIRONMENT_LABEL_46_3 24
#define DEBUGGING_LABEL_46_2 23
#define EXECUTE_CACHE_46_13 13
#define EXECUTE_CACHE_46_12 15
#define EXECUTE_CACHE_46_11 17
#define EXECUTE_CACHE_46_10 19
#define EXECUTE_CACHE_46_7 21
#define FREE_REFERENCES_LABEL_46_0 12
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_46_4);
      goto alpha_substitute_declaration_4;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_46_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_46_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alpha_substitute_declaration_7)
DEFLABEL (alpha_substitute_declaration_4)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_46_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_8);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define TAG_47_6 1
#define ENVIRONMENT_LABEL_47_3 12
#define DEBUGGING_LABEL_47_2 11
#define EXECUTE_CACHE_47_8 7
#define EXECUTE_CACHE_47_7 9
#define FREE_REFERENCES_LABEL_47_0 6
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      goto substitute_in_declarations_1;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (substitute_in_declarations_4)
DEFLABEL (substitute_in_declarations_1)
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
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_47_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define ENVIRONMENT_LABEL_48_3 5
#define DEBUGGING_LABEL_48_2 4
#define FREE_REFERENCES_LABEL_48_0 4
#define NUMBER_OF_LINKER_SECTIONS_48_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_48_4);
      goto alpha_substitute_default_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alpha_substitute_default_3)
DEFLABEL (alpha_substitute_default_0)
  INTERRUPT_CHECK (26, LABEL_48_4);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define TAG_49_6 1
#define LABEL_49_7 7
#define LABEL_49_8 9
#define ENVIRONMENT_LABEL_49_3 14
#define DEBUGGING_LABEL_49_2 13
#define EXECUTE_CACHE_49_9 11
#define FREE_REFERENCES_LABEL_49_0 10
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_49_4);
      goto simple_substitution_3;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_49_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simple_substitution_6)
DEFLABEL (simple_substitution_3)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_5])));
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

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_49_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_7);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [2]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define TAG_50_6 1
#define LABEL_50_7 7
#define LABEL_50_8 9
#define LABEL_50_9 11
#define TAG_50_10 4
#define ENVIRONMENT_LABEL_50_3 18
#define DEBUGGING_LABEL_50_2 17
#define EXECUTE_CACHE_50_12 13
#define EXECUTE_CACHE_50_11 15
#define FREE_REFERENCES_LABEL_50_0 12
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto combinator_substitution_4;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_50_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_50_9);
      goto lambda_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (combinator_substitution_7)
DEFLABEL (combinator_substitution_4)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_5])));
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

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_50_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_9])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [3]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_50_9);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define ENVIRONMENT_LABEL_51_3 12
#define DEBUGGING_LABEL_51_2 11
#define EXECUTE_CACHE_51_7 7
#define EXECUTE_CACHE_51_6 9
#define FREE_REFERENCES_LABEL_51_0 6
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_51_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_6 7
#define ENVIRONMENT_LABEL_52_3 14
#define DEBUGGING_LABEL_52_2 13
#define OBJECT_52_1 12
#define OBJECT_52_0 11
#define EXECUTE_CACHE_52_7 9
#define FREE_REFERENCES_LABEL_52_0 8
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_52_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_11;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_9;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_7]));

DEFLABEL (label_9)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 1);

DEFLABEL (label_5)
  (Wrd14.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define ENVIRONMENT_LABEL_53_3 12
#define DEBUGGING_LABEL_53_2 11
#define EXECUTE_CACHE_53_7 7
#define EXECUTE_CACHE_53_6 9
#define FREE_REFERENCES_LABEL_53_0 6
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_6 7
#define LABEL_54_7 9
#define LABEL_54_8 11
#define LABEL_54_9 13
#define LABEL_54_10 15
#define ENVIRONMENT_LABEL_54_3 22
#define DEBUGGING_LABEL_54_2 21
#define OBJECT_54_1 20
#define OBJECT_54_0 19
#define EXECUTE_CACHE_54_11 17
#define FREE_REFERENCES_LABEL_54_0 16
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_54_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_54_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_54_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_54_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_54_9);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_54_10);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_27;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_26)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_25;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_24)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_23;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_22)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_21;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_20)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_19;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_18)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_17;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd46.Obj) = ((Wrd47.pObj) [0]);

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_11]));

DEFLABEL (label_17)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_10]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 1);

DEFLABEL (label_13)
  (Wrd46.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_9]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_0]), 1);

DEFLABEL (label_12)
  (Wrd39.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_8]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_0]), 1);

DEFLABEL (label_11)
  (Wrd30.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_0]), 1);

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define ENVIRONMENT_LABEL_55_3 12
#define DEBUGGING_LABEL_55_2 11
#define EXECUTE_CACHE_55_7 7
#define EXECUTE_CACHE_55_6 9
#define FREE_REFERENCES_LABEL_55_0 6
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 8
#define DEBUGGING_LABEL_56_2 7
#define EXECUTE_CACHE_56_5 5
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_6 7
#define LABEL_57_7 9
#define ENVIRONMENT_LABEL_57_3 16
#define DEBUGGING_LABEL_57_2 15
#define OBJECT_57_1 14
#define OBJECT_57_0 13
#define EXECUTE_CACHE_57_8 11
#define FREE_REFERENCES_LABEL_57_0 10
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_57_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_57_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_57_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_15;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_14)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_13;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_12)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_11;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_8]));

DEFLABEL (label_11)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_0]), 1);

DEFLABEL (label_7)
  (Wrd23.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_0]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define ENVIRONMENT_LABEL_58_3 6
#define DEBUGGING_LABEL_58_2 5
#define OBJECT_58_0 4
#define FREE_REFERENCES_LABEL_58_0 4
#define NUMBER_OF_LINKER_SECTIONS_58_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_58_4);
  Rvl = (current_block [OBJECT_58_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define ENVIRONMENT_LABEL_59_3 8
#define DEBUGGING_LABEL_59_2 7
#define EXECUTE_CACHE_59_5 5
#define FREE_REFERENCES_LABEL_59_0 4
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_59_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define ENVIRONMENT_LABEL_60_3 8
#define DEBUGGING_LABEL_60_2 7
#define EXECUTE_CACHE_60_5 5
#define FREE_REFERENCES_LABEL_60_0 4
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_60_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define ENVIRONMENT_LABEL_61_3 8
#define DEBUGGING_LABEL_61_2 7
#define EXECUTE_CACHE_61_5 5
#define FREE_REFERENCES_LABEL_61_0 4
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_61_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_61_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define ENVIRONMENT_LABEL_62_3 7
#define DEBUGGING_LABEL_62_2 6
#define OBJECT_62_1 5
#define OBJECT_62_0 4
#define FREE_REFERENCES_LABEL_62_0 4
#define NUMBER_OF_LINKER_SECTIONS_62_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_62_4);
      goto rename_database_frame_number_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rename_database_frame_number_3)
DEFLABEL (rename_database_frame_number_0)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_62_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

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

#define LABEL_63_4 3
#define ENVIRONMENT_LABEL_63_3 7
#define DEBUGGING_LABEL_63_2 6
#define OBJECT_63_1 5
#define OBJECT_63_0 4
#define FREE_REFERENCES_LABEL_63_0 4
#define NUMBER_OF_LINKER_SECTIONS_63_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_63_4);
      goto rename_database_mapping_table_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rename_database_mapping_table_3)
DEFLABEL (rename_database_mapping_table_0)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_63_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 2);

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

#define LABEL_64_4 3
#define ENVIRONMENT_LABEL_64_3 7
#define DEBUGGING_LABEL_64_2 6
#define OBJECT_64_1 5
#define OBJECT_64_0 4
#define FREE_REFERENCES_LABEL_64_0 4
#define NUMBER_OF_LINKER_SECTIONS_64_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_64_4);
      goto rename_database_unmapping_table_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rename_database_unmapping_table_3)
DEFLABEL (rename_database_unmapping_table_0)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_64_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

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

#define LABEL_65_4 3
#define ENVIRONMENT_LABEL_65_3 7
#define DEBUGGING_LABEL_65_2 6
#define OBJECT_65_1 5
#define OBJECT_65_0 4
#define FREE_REFERENCES_LABEL_65_0 4
#define NUMBER_OF_LINKER_SECTIONS_65_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_65_4);
      goto rename_database_id_table_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rename_database_id_table_3)
DEFLABEL (rename_database_id_table_0)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_65_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

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

#define LABEL_66_4 3
#define ENVIRONMENT_LABEL_66_3 8
#define DEBUGGING_LABEL_66_2 7
#define OBJECT_66_2 6
#define OBJECT_66_1 5
#define OBJECT_66_0 4
#define FREE_REFERENCES_LABEL_66_0 4
#define NUMBER_OF_LINKER_SECTIONS_66_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_66_4);
      goto set_rename_database_frame_numberB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_rename_database_frame_numberB_3)
DEFLABEL (set_rename_database_frame_numberB_0)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_66_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_66_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_6 7
#define LABEL_67_7 9
#define ENVIRONMENT_LABEL_67_3 17
#define DEBUGGING_LABEL_67_2 16
#define OBJECT_67_3 15
#define OBJECT_67_2 14
#define OBJECT_67_1 13
#define OBJECT_67_0 12
#define FREE_REFERENCE_67_0 11
#define FREE_REFERENCES_LABEL_67_0 10
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_67_4);
      goto rename_databaseP_4;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_67_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_67_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rename_databaseP_10)
DEFLABEL (rename_databaseP_4)
  INTERRUPT_CHECK (26, LABEL_67_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_0]));
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
  Rvl = (current_block [OBJECT_67_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_67_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_6 7
#define LABEL_68_7 9
#define LABEL_68_8 11
#define LABEL_68_9 13
#define LABEL_68_10 15
#define ENVIRONMENT_LABEL_68_3 25
#define DEBUGGING_LABEL_68_2 24
#define OBJECT_68_5 23
#define OBJECT_68_4 22
#define OBJECT_68_3 21
#define OBJECT_68_2 20
#define OBJECT_68_1 19
#define OBJECT_68_0 18
#define FREE_REFERENCE_68_0 17
#define FREE_REFERENCES_LABEL_68_0 16
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_68_4);
      goto make_rename_id_5;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto lambda_4;

    case 2:
      current_block = (Rpc - LABEL_68_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_68_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_68_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_68_9);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_68_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_rename_id_13)
DEFLABEL (make_rename_id_5)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_68_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_2]), 3);

DEFLABEL (lambda_14)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_68_5);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_24;
  Wrd6 = Wrd10;

DEFLABEL (label_23)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_22;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_22;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_21)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_20;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd30.Lng) = ((Wrd31.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_20;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_19)
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_18;
  Wrd34 = Wrd38;

DEFLABEL (label_17)
  Wrd33 = Wrd34;
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_16;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd48.Lng))))
    goto label_16;
  (Wrd43.Obj) = (Rsp [0]);
  ((Wrd46.pObj) [2]) = (Wrd43.Obj);

DEFLABEL (label_15)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd51.Obj) = (current_block [OBJECT_68_3]);
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_10]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_5]), 3);

DEFLABEL (label_11)
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_9])), (Wrd35.pObj));

DEFLABEL (label_10)
  (Wrd34.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd21.Obj) = (current_block [OBJECT_68_3]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_4]), 2);

DEFLABEL (label_8)
  (Wrd12.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_6])), (Wrd7.pObj));

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define LABEL_69_6 7
#define LABEL_69_7 9
#define LABEL_69_9 11
#define LABEL_69_10 13
#define LABEL_69_11 15
#define LABEL_69_13 17
#define LABEL_69_18 19
#define LABEL_69_19 21
#define LABEL_69_17 23
#define ENVIRONMENT_LABEL_69_3 41
#define DEBUGGING_LABEL_69_2 40
#define OBJECT_69_2 39
#define OBJECT_69_1 38
#define OBJECT_69_0 37
#define EXECUTE_CACHE_69_16 25
#define EXECUTE_CACHE_69_15 27
#define EXECUTE_CACHE_69_14 29
#define EXECUTE_CACHE_69_12 31
#define EXECUTE_CACHE_69_8 33
#define FREE_REFERENCE_69_0 36
#define FREE_REFERENCES_LABEL_69_0 24
#define NUMBER_OF_LINKER_SECTIONS_69_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_69_4);
      goto rename_identifier_12;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_69_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_69_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_69_9);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_69_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_69_11);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_69_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_69_18);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_69_19);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_69_17);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rename_identifier_19)
DEFLABEL (rename_identifier_12)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_28;
  Wrd6 = Wrd10;

DEFLABEL (label_27)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_26;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_26;
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_25)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_69_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  Rvl = Rvl;
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_69_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_69_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_69_9);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_69_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_24;
  Wrd11 = Wrd15;

DEFLABEL (label_23)
  Wrd10 = Wrd11;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_22;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd23.Lng))))
    goto label_22;
  (Wrd18.Obj) = ((Wrd21.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_69_17);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd26.Obj) = (current_block [OBJECT_69_2]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_19]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_18])), (Wrd12.pObj));

DEFLABEL (label_16)
  (Wrd11.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd21.Obj) = (current_block [OBJECT_69_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_5])), (Wrd7.pObj));

DEFLABEL (label_14)
  (Wrd6.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_5 3
#define LABEL_70_4 5
#define LABEL_70_6 7
#define LABEL_70_7 9
#define LABEL_70_8 11
#define LABEL_70_9 13
#define LABEL_70_10 15
#define LABEL_70_13 17
#define LABEL_70_14 19
#define ENVIRONMENT_LABEL_70_3 42
#define DEBUGGING_LABEL_70_2 41
#define OBJECT_70_5 40
#define OBJECT_70_4 39
#define OBJECT_70_3 38
#define OBJECT_70_2 37
#define OBJECT_70_1 36
#define OBJECT_70_0 35
#define EXECUTE_CACHE_70_19 21
#define EXECUTE_CACHE_70_18 23
#define EXECUTE_CACHE_70_17 25
#define EXECUTE_CACHE_70_16 27
#define EXECUTE_CACHE_70_15 29
#define EXECUTE_CACHE_70_12 31
#define EXECUTE_CACHE_70_11 33
#define FREE_REFERENCES_LABEL_70_0 20
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd48;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd43;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_70_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_70_4);
      goto rename_top_level_identifier_9;

    case 2:
      current_block = (Rpc - LABEL_70_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_70_7);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_70_8);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_70_9);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_70_10);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_70_13);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_70_14);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rename_top_level_identifier_13)
DEFLABEL (rename_top_level_identifier_9)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_70_0]);
  (Wrd43.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd43.Lng))))
    goto label_22;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_21;

DEFLABEL (label_20)
  (Wrd13.Obj) = (current_block [OBJECT_70_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_14;
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_14)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_16;
  (Wrd15.Obj) = (current_block [OBJECT_70_4]);
  goto label_15;

DEFLABEL (label_16)
  (Wrd15.Obj) = (current_block [OBJECT_70_3]);

DEFLABEL (label_15)
DEFLABEL (label_19)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_9]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_70_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_70_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_70_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_70_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_70_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_70_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_70_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_70_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_12]));

DEFLABEL (label_21)
  Rsp = (& (Rsp [2]));
  goto label_17;

DEFLABEL (label_22)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_6]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_21;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_70_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define LABEL_71_7 7
#define TAG_71_8 2
#define ENVIRONMENT_LABEL_71_3 14
#define DEBUGGING_LABEL_71_2 13
#define EXECUTE_CACHE_71_9 9
#define EXECUTE_CACHE_71_6 11
#define FREE_REFERENCES_LABEL_71_0 8
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_71_4);
      goto make_name_generator_3;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_71_7);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_name_generator_6)
DEFLABEL (make_name_generator_3)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_71_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_71_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_71_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_71_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_6 5
#define LABEL_72_7 7
#define LABEL_72_9 9
#define LABEL_72_10 11
#define LABEL_72_5 13
#define LABEL_72_11 15
#define LABEL_72_13 17
#define ENVIRONMENT_LABEL_72_3 37
#define DEBUGGING_LABEL_72_2 36
#define OBJECT_72_8 35
#define OBJECT_72_7 34
#define OBJECT_72_6 33
#define OBJECT_72_5 32
#define OBJECT_72_4 31
#define OBJECT_72_3 30
#define OBJECT_72_2 29
#define OBJECT_72_1 28
#define OBJECT_72_0 27
#define EXECUTE_CACHE_72_14 19
#define EXECUTE_CACHE_72_12 21
#define EXECUTE_CACHE_72_8 23
#define FREE_REFERENCE_72_0 26
#define FREE_REFERENCES_LABEL_72_0 18
#define NUMBER_OF_LINKER_SECTIONS_72_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_72_4);
      goto unmap_identifier_8;

    case 1:
      current_block = (Rpc - LABEL_72_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_72_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_72_9);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_72_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_72_11);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_72_13);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unmap_identifier_15)
DEFLABEL (unmap_identifier_8)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_72_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_31;
  Wrd11 = Wrd15;

DEFLABEL (label_30)
  Wrd10 = Wrd11;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_29;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd23.Lng))))
    goto label_29;
  (Wrd18.Obj) = ((Wrd21.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_72_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 1))
    goto label_17;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_14]));

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_8]), 1);

DEFLABEL (label_12)
  (Wrd7.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_18)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_72_2]);
  (Wrd48.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd48.Lng))))
    goto label_27;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_26;

DEFLABEL (label_25)
  (Wrd25.Obj) = (current_block [OBJECT_72_4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd35.Lng)))
    goto label_19;
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_3]), 2);

DEFLABEL (label_19)
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd29.Obj) == (Wrd31.Obj))
    goto label_21;
  (Wrd27.Obj) = (current_block [OBJECT_72_6]);
  goto label_20;

DEFLABEL (label_21)
  (Wrd27.Obj) = (current_block [OBJECT_72_5]);

DEFLABEL (label_20)
DEFLABEL (label_24)
  Rsp = (& (Rsp [3]));
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_22)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (current_block [OBJECT_72_7]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_72_9);
  goto label_22;

DEFLABEL (label_26)
  Rsp = (& (Rsp [2]));
  goto label_22;

DEFLABEL (label_27)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_3]), 2);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_26;

DEFLABEL (label_29)
  (Wrd26.Obj) = (current_block [OBJECT_72_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72_6])), (Wrd12.pObj));

DEFLABEL (label_10)
  (Wrd11.Obj) = Rvl;
  goto label_30;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_72_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_6 5
#define LABEL_73_7 7
#define LABEL_73_9 9
#define LABEL_73_10 11
#define LABEL_73_5 13
#define LABEL_73_11 15
#define LABEL_73_14 17
#define LABEL_73_13 19
#define LABEL_73_16 21
#define LABEL_73_17 23
#define ENVIRONMENT_LABEL_73_3 50
#define DEBUGGING_LABEL_73_2 49
#define OBJECT_73_9 48
#define OBJECT_73_8 47
#define OBJECT_73_7 46
#define OBJECT_73_6 45
#define OBJECT_73_5 44
#define OBJECT_73_4 43
#define OBJECT_73_3 42
#define OBJECT_73_2 41
#define OBJECT_73_1 40
#define OBJECT_73_0 39
#define EXECUTE_CACHE_73_20 25
#define EXECUTE_CACHE_73_19 27
#define EXECUTE_CACHE_73_18 29
#define EXECUTE_CACHE_73_15 31
#define EXECUTE_CACHE_73_12 33
#define EXECUTE_CACHE_73_8 35
#define FREE_REFERENCE_73_0 38
#define FREE_REFERENCES_LABEL_73_0 24
#define NUMBER_OF_LINKER_SECTIONS_73_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd55;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_73_4);
      goto finalize_mapped_identifier_12;

    case 1:
      current_block = (Rpc - LABEL_73_6);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_73_7);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_73_9);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_73_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_73_11);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_73_14);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_73_13);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_73_16);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_73_17);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finalize_mapped_identifier_20)
DEFLABEL (finalize_mapped_identifier_12)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_39;
  Wrd11 = Wrd15;

DEFLABEL (label_38)
  Wrd10 = Wrd11;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_37;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd23.Lng))))
    goto label_37;
  (Wrd18.Obj) = ((Wrd21.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_73_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_24)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_73_13);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_23;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);

DEFLABEL (label_22)
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_17]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_73_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_20]));

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_19]));

DEFLABEL (label_23)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_16]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_9]), 1);

DEFLABEL (label_18)
  (Wrd6.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_8]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd47.Obj) = (current_block [OBJECT_73_2]);
  (Wrd50.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd50.Lng))))
    goto label_35;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd24.Obj) == (Wrd26.Obj))
    goto label_34;

DEFLABEL (label_33)
  (Wrd27.Obj) = (current_block [OBJECT_73_4]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd37.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd37.Lng)))
    goto label_27;
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_27)
  (Wrd31.uLng) = (OBJECT_DATUM (Wrd27.Obj));
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd31.Obj) == (Wrd33.Obj))
    goto label_29;
  (Wrd29.Obj) = (current_block [OBJECT_73_6]);
  goto label_28;

DEFLABEL (label_29)
  (Wrd29.Obj) = (current_block [OBJECT_73_5]);

DEFLABEL (label_28)
DEFLABEL (label_32)
  Rsp = (& (Rsp [3]));
  if ((Wrd29.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;

DEFLABEL (label_30)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_73_7]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_73_9);
  goto label_30;

DEFLABEL (label_34)
  Rsp = (& (Rsp [2]));
  goto label_30;

DEFLABEL (label_35)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_11]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_3]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_34;

DEFLABEL (label_37)
  (Wrd26.Obj) = (current_block [OBJECT_73_0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73_6])), (Wrd12.pObj));

DEFLABEL (label_14)
  (Wrd11.Obj) = Rvl;
  goto label_38;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_73_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define ENVIRONMENT_LABEL_74_3 9
#define DEBUGGING_LABEL_74_2 8
#define OBJECT_74_0 7
#define EXECUTE_CACHE_74_5 5
#define FREE_REFERENCES_LABEL_74_0 4
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_74_4);
      goto map_interned_symbol_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_interned_symbol_3)
DEFLABEL (map_interned_symbol_0)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_74_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_74_0]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_7 7
#define LABEL_75_8 9
#define LABEL_75_9 11
#define LABEL_75_11 13
#define LABEL_75_16 15
#define LABEL_75_15 17
#define LABEL_75_20 19
#define LABEL_75_13 21
#define LABEL_75_18 23
#define LABEL_75_24 25
#define LABEL_75_25 27
#define LABEL_75_19 29
#define LABEL_75_22 31
#define ENVIRONMENT_LABEL_75_3 56
#define DEBUGGING_LABEL_75_2 55
#define OBJECT_75_5 54
#define OBJECT_75_4 53
#define OBJECT_75_3 52
#define OBJECT_75_2 51
#define OBJECT_75_1 50
#define OBJECT_75_0 49
#define EXECUTE_CACHE_75_23 33
#define EXECUTE_CACHE_75_21 35
#define EXECUTE_CACHE_75_17 37
#define EXECUTE_CACHE_75_14 39
#define EXECUTE_CACHE_75_12 41
#define EXECUTE_CACHE_75_10 43
#define EXECUTE_CACHE_75_6 45
#define FREE_REFERENCE_75_0 48
#define FREE_REFERENCES_LABEL_75_0 32
#define NUMBER_OF_LINKER_SECTIONS_75_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_75_4);
      goto map_uninterned_identifier_25;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_75_7);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_75_8);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_75_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_75_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_75_16);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_75_15);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_75_20);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_75_13);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_75_18);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_75_24);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_75_25);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_75_19);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_75_22);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_uninterned_identifier_34)
DEFLABEL (map_uninterned_identifier_25)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_75_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_49;
  Wrd6 = Wrd10;

DEFLABEL (label_48)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_47;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_47;
  (Wrd13.Obj) = ((Wrd16.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_46)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_75_2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_75_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_75_11);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_35;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_75_3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_75_13);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_75_2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_75_22);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 1))
    goto label_45;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_44)
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_17]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_75_15);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Rsp [6]) = Rvl;
  Rsp = (& (Rsp [6]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_36;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_4]), 1);

DEFLABEL (label_37)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_18]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_43;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_75_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_14]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_75_18);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_41;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_40)
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_39;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  ((Wrd26.pObj) [1]) = (Wrd20.Obj);

DEFLABEL (label_38)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_25]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_5]), 2);

DEFLABEL (label_32)
  goto label_38;

DEFLABEL (label_41)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_24]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_4]), 1);

DEFLABEL (label_31)
  (Wrd6.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_20]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_4]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_4]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd21.Obj) = (current_block [OBJECT_75_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_7])), (Wrd7.pObj));

DEFLABEL (label_27)
  (Wrd6.Obj) = Rvl;
  goto label_48;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define ENVIRONMENT_LABEL_76_3 10
#define DEBUGGING_LABEL_76_2 9
#define OBJECT_76_1 8
#define OBJECT_76_0 7
#define EXECUTE_CACHE_76_5 5
#define FREE_REFERENCES_LABEL_76_0 4
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_76_4);
      goto map_indexed_symbol_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (map_indexed_symbol_3)
DEFLABEL (map_indexed_symbol_0)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd5.Obj) = (current_block [OBJECT_76_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_76_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_76_1]);
  (Rsp [4]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_5]));

INVOKE_INTERFACE_TARGET_1
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
syntax_output_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_77_4);
      goto null_reference_set_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (null_reference_set_3)
DEFLABEL (null_reference_set_0)
  INTERRUPT_CHECK (26, LABEL_77_4);
  Rvl = (current_block [OBJECT_77_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define ENVIRONMENT_LABEL_78_3 11
#define DEBUGGING_LABEL_78_2 10
#define OBJECT_78_0 9
#define EXECUTE_CACHE_78_6 7
#define FREE_REFERENCES_LABEL_78_0 6
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_78_4);
      goto singleton_reference_set_2;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (singleton_reference_set_5)
DEFLABEL (singleton_reference_set_2)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_78_5);
  (Wrd9.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_78_0]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_6 5
#define LABEL_79_7 7
#define LABEL_79_5 9
#define LABEL_79_10 11
#define LABEL_79_11 13
#define LABEL_79_9 15
#define LABEL_79_13 17
#define ENVIRONMENT_LABEL_79_3 26
#define DEBUGGING_LABEL_79_2 25
#define OBJECT_79_1 24
#define OBJECT_79_0 23
#define EXECUTE_CACHE_79_12 19
#define EXECUTE_CACHE_79_8 21
#define FREE_REFERENCES_LABEL_79_0 18
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd28;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_79_4);
      goto reference_set_union_8;

    case 1:
      current_block = (Rpc - LABEL_79_6);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_79_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_79_5);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_79_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_79_11);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_79_9);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_79_13);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reference_set_union_16)
DEFLABEL (reference_set_union_8)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_17;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_26;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_25)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_24;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_79_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_20;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd7.Obj);

DEFLABEL (label_18)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_12]));

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 1);

DEFLABEL (label_12)
  (Wrd7.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_22;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto label_18;

DEFLABEL (label_22)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_24)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_10)
  (Wrd13.Obj) = Rvl;
  goto label_25;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_79_9);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_28;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_27)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_7 7
#define ENVIRONMENT_LABEL_80_3 14
#define DEBUGGING_LABEL_80_2 13
#define EXECUTE_CACHE_80_8 9
#define EXECUTE_CACHE_80_6 11
#define FREE_REFERENCES_LABEL_80_0 8
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_80_4);
      goto add_to_reference_set_3;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_80_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_to_reference_set_6)
DEFLABEL (add_to_reference_set_3)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_80_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_80_7);
  (Wrd9.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define TAG_81_6 1
#define LABEL_81_8 7
#define ENVIRONMENT_LABEL_81_3 15
#define DEBUGGING_LABEL_81_2 14
#define OBJECT_81_0 13
#define EXECUTE_CACHE_81_9 9
#define EXECUTE_CACHE_81_7 11
#define FREE_REFERENCES_LABEL_81_0 8
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_81_4);
      goto remove_from_reference_set_2;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_81_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (remove_from_reference_set_6)
DEFLABEL (remove_from_reference_set_2)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_81_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_81_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_81_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_9;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_9]));

DEFLABEL (label_9)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_0]), 1);

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define TAG_82_6 1
#define LABEL_82_8 7
#define LABEL_82_9 9
#define ENVIRONMENT_LABEL_82_3 17
#define DEBUGGING_LABEL_82_2 16
#define OBJECT_82_2 15
#define OBJECT_82_1 14
#define OBJECT_82_0 13
#define EXECUTE_CACHE_82_7 11
#define FREE_REFERENCES_LABEL_82_0 10
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
syntax_output_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_82_4);
      goto unmapping_collisionP_5;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto lambda_11;

    case 2:
      current_block = (Rpc - LABEL_82_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_82_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unmapping_collisionP_10)
DEFLABEL (unmapping_collisionP_5)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_82_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_82_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_7]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_82_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_18;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_17)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  if ((Wrd16.Obj) == (Wrd5.Obj))
    goto label_14;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_16;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_15)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [3]);
  if ((Wrd30.Obj) == (Wrd19.Obj))
    goto label_13;
  Rvl = (current_block [OBJECT_82_2]);
  goto label_12;

DEFLABEL (label_16)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_9]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 1);

DEFLABEL (label_8)
  (Wrd19.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_0]), 1);

DEFLABEL (label_7)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_8 5
#define LABEL_6 7
#define LABEL_12 9
#define LABEL_7 11
#define LABEL_10 13
#define LABEL_16 15
#define LABEL_11 17
#define LABEL_14 19
#define LABEL_19 21
#define LABEL_15 23
#define LABEL_17 25
#define LABEL_22 27
#define LABEL_18 29
#define LABEL_20 31
#define LABEL_25 33
#define LABEL_21 35
#define LABEL_23 37
#define LABEL_28 39
#define LABEL_24 41
#define LABEL_26 43
#define LABEL_31 45
#define LABEL_27 47
#define LABEL_29 49
#define LABEL_30 51
#define LABEL_32 53
#define LABEL_35 55
#define LABEL_36 57
#define LABEL_37 59
#define LABEL_38 61
#define LABEL_39 63
#define LABEL_40 65
#define LABEL_41 67
#define LABEL_42 69
#define LABEL_43 71
#define LABEL_44 73
#define LABEL_45 75
#define LABEL_46 77
#define LABEL_47 79
#define LABEL_48 81
#define LABEL_33 83
#define LABEL_34 85
#define LABEL_50 87
#define LABEL_53 89
#define LABEL_51 91
#define LABEL_57 93
#define LABEL_52 95
#define LABEL_55 97
#define LABEL_61 99
#define LABEL_56 101
#define LABEL_59 103
#define LABEL_64 105
#define LABEL_60 107
#define LABEL_62 109
#define LABEL_67 111
#define LABEL_63 113
#define LABEL_65 115
#define LABEL_70 117
#define LABEL_66 119
#define LABEL_68 121
#define LABEL_73 123
#define LABEL_69 125
#define LABEL_71 127
#define LABEL_76 129
#define LABEL_77 131
#define LABEL_72 133
#define LABEL_74 135
#define LABEL_80 137
#define LABEL_81 139
#define LABEL_82 141
#define LABEL_83 143
#define LABEL_84 145
#define LABEL_85 147
#define LABEL_86 149
#define LABEL_87 151
#define LABEL_88 153
#define LABEL_89 155
#define LABEL_90 157
#define LABEL_91 159
#define LABEL_92 161
#define LABEL_93 163
#define LABEL_94 165
#define LABEL_75 167
#define LABEL_78 169
#define LABEL_79 171
#define LABEL_95 173
#define LABEL_96 175
#define LABEL_101 177
#define LABEL_97 179
#define LABEL_99 181
#define LABEL_100 183
#define LABEL_103 185
#define LABEL_108 187
#define LABEL_104 189
#define TAG_105 93
#define LABEL_110 191
#define LABEL_106 193
#define LABEL_107 195
#define LABEL_109 197
#define LABEL_113 199
#define LABEL_112 201
#define LABEL_115 203
#define LABEL_114 205
#define LABEL_116 207
#define LABEL_117 209
#define LABEL_118 211
#define ENVIRONMENT_LABEL_3 340
#define DEBUGGING_LABEL_2 339
#define PURIFICATION_ROOT 338
#define OBJECT_65 337
#define OBJECT_64 336
#define OBJECT_63 335
#define OBJECT_62 334
#define OBJECT_61 333
#define OBJECT_60 332
#define OBJECT_59 331
#define OBJECT_58 330
#define OBJECT_57 329
#define OBJECT_56 328
#define OBJECT_55 327
#define OBJECT_54 326
#define OBJECT_53 325
#define OBJECT_52 324
#define OBJECT_51 323
#define OBJECT_50 322
#define OBJECT_49 321
#define OBJECT_48 320
#define OBJECT_47 319
#define OBJECT_46 318
#define OBJECT_45 317
#define OBJECT_44 316
#define OBJECT_43 315
#define OBJECT_42 314
#define OBJECT_41 313
#define OBJECT_40 312
#define OBJECT_39 311
#define OBJECT_38 310
#define OBJECT_37 309
#define OBJECT_36 308
#define OBJECT_35 307
#define OBJECT_34 306
#define OBJECT_33 305
#define OBJECT_32 304
#define OBJECT_31 303
#define OBJECT_30 302
#define OBJECT_29 301
#define OBJECT_28 300
#define OBJECT_27 299
#define OBJECT_26 298
#define OBJECT_25 297
#define OBJECT_24 296
#define OBJECT_23 295
#define OBJECT_22 294
#define OBJECT_21 293
#define OBJECT_20 292
#define OBJECT_19 291
#define OBJECT_18 290
#define OBJECT_17 289
#define OBJECT_16 288
#define OBJECT_15 287
#define OBJECT_14 286
#define OBJECT_13 285
#define OBJECT_12 284
#define OBJECT_11 283
#define OBJECT_10 282
#define OBJECT_9 281
#define OBJECT_8 280
#define OBJECT_7 279
#define OBJECT_6 278
#define OBJECT_5 277
#define OBJECT_4 276
#define OBJECT_3 275
#define OBJECT_2 274
#define OBJECT_1 273
#define OBJECT_0 272
#define EXECUTE_CACHE_58 213
#define EXECUTE_CACHE_54 215
#define EXECUTE_CACHE_49 217
#define EXECUTE_CACHE_13 219
#define EXECUTE_CACHE_9 221
#define FREE_REFERENCE_38 224
#define FREE_REFERENCE_37 225
#define FREE_REFERENCE_36 226
#define FREE_REFERENCE_35 227
#define FREE_REFERENCE_34 228
#define FREE_REFERENCE_33 229
#define FREE_REFERENCE_32 230
#define FREE_REFERENCE_31 231
#define FREE_REFERENCE_30 232
#define FREE_REFERENCE_29 233
#define FREE_REFERENCE_28 234
#define FREE_REFERENCE_27 235
#define FREE_REFERENCE_26 236
#define FREE_REFERENCE_25 237
#define FREE_REFERENCE_24 238
#define FREE_REFERENCE_23 239
#define FREE_REFERENCE_22 240
#define FREE_REFERENCE_21 241
#define FREE_REFERENCE_20 242
#define FREE_REFERENCE_19 243
#define FREE_REFERENCE_18 244
#define FREE_REFERENCE_17 245
#define FREE_REFERENCE_16 246
#define FREE_REFERENCE_15 247
#define FREE_REFERENCE_14 248
#define FREE_REFERENCE_13 249
#define FREE_REFERENCE_12 250
#define FREE_REFERENCE_11 251
#define FREE_REFERENCE_10 252
#define FREE_REFERENCE_9 253
#define FREE_REFERENCE_8 254
#define FREE_REFERENCE_7 255
#define FREE_REFERENCE_6 256
#define FREE_REFERENCE_5 257
#define FREE_REFERENCE_4 258
#define FREE_REFERENCE_3 259
#define FREE_REFERENCE_2 260
#define FREE_REFERENCE_1 261
#define FREE_REFERENCE_0 262
#define GLOBAL_EXECUTE_CACHE_111 264
#define GLOBAL_EXECUTE_CACHE_102 266
#define GLOBAL_EXECUTE_CACHE_98 268
#define GLOBAL_EXECUTE_CACHE_5 270
#define FREE_REFERENCES_LABEL_0 212
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
syntax_output_so_bf90b2fa0f29b253 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd277;
  machine_word Wrd282;
  machine_word Wrd281;
  machine_word Wrd278;
  machine_word Wrd276;
  machine_word Wrd275;
  machine_word Wrd273;
  machine_word Wrd269;
  machine_word Wrd271;
  machine_word Wrd272;
  machine_word Wrd265;
  machine_word Wrd267;
  machine_word Wrd268;
  machine_word Wrd264;
  machine_word Wrd260;
  machine_word Wrd258;
  machine_word Wrd263;
  machine_word Wrd262;
  machine_word Wrd259;
  machine_word Wrd257;
  machine_word Wrd256;
  machine_word Wrd254;
  machine_word Wrd250;
  machine_word Wrd252;
  machine_word Wrd253;
  machine_word Wrd246;
  machine_word Wrd248;
  machine_word Wrd249;
  machine_word Wrd240;
  machine_word Wrd245;
  machine_word Wrd244;
  machine_word Wrd241;
  machine_word Wrd238;
  machine_word Wrd237;
  machine_word Wrd235;
  machine_word Wrd231;
  machine_word Wrd233;
  machine_word Wrd234;
  machine_word Wrd227;
  machine_word Wrd229;
  machine_word Wrd230;
  machine_word Wrd221;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd222;
  machine_word Wrd219;
  machine_word Wrd218;
  machine_word Wrd216;
  machine_word Wrd212;
  machine_word Wrd214;
  machine_word Wrd215;
  machine_word Wrd208;
  machine_word Wrd210;
  machine_word Wrd211;
  machine_word Wrd202;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd203;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd197;
  machine_word Wrd193;
  machine_word Wrd195;
  machine_word Wrd196;
  machine_word Wrd189;
  machine_word Wrd191;
  machine_word Wrd192;
  machine_word Wrd183;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd184;
  machine_word Wrd181;
  machine_word Wrd180;
  machine_word Wrd178;
  machine_word Wrd174;
  machine_word Wrd176;
  machine_word Wrd177;
  machine_word Wrd170;
  machine_word Wrd172;
  machine_word Wrd173;
  machine_word Wrd164;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd159;
  machine_word Wrd155;
  machine_word Wrd157;
  machine_word Wrd158;
  machine_word Wrd151;
  machine_word Wrd153;
  machine_word Wrd154;
  machine_word Wrd145;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd140;
  machine_word Wrd136;
  machine_word Wrd138;
  machine_word Wrd139;
  machine_word Wrd132;
  machine_word Wrd134;
  machine_word Wrd135;
  machine_word Wrd126;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd121;
  machine_word Wrd117;
  machine_word Wrd119;
  machine_word Wrd120;
  machine_word Wrd113;
  machine_word Wrd115;
  machine_word Wrd116;
  machine_word Wrd107;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd102;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd101;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd88;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_8);
      goto label_140;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_12);
      goto label_141;

    case 4:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_16);
      goto label_142;

    case 7:
      current_block = (Rpc - LABEL_11);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_19);
      goto label_143;

    case 10:
      current_block = (Rpc - LABEL_15);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_22);
      goto label_144;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_25);
      goto label_145;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_9;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto continuation_12;

    case 18:
      current_block = (Rpc - LABEL_28);
      goto label_146;

    case 19:
      current_block = (Rpc - LABEL_24);
      goto continuation_11;

    case 20:
      current_block = (Rpc - LABEL_26);
      goto continuation_14;

    case 21:
      current_block = (Rpc - LABEL_31);
      goto label_147;

    case 22:
      current_block = (Rpc - LABEL_27);
      goto continuation_13;

    case 23:
      current_block = (Rpc - LABEL_29);
      goto continuation_16;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto continuation_15;

    case 25:
      current_block = (Rpc - LABEL_32);
      goto continuation_17;

    case 26:
      current_block = (Rpc - LABEL_35);
      goto label_148;

    case 27:
      current_block = (Rpc - LABEL_36);
      goto label_149;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto label_150;

    case 29:
      current_block = (Rpc - LABEL_38);
      goto label_151;

    case 30:
      current_block = (Rpc - LABEL_39);
      goto label_152;

    case 31:
      current_block = (Rpc - LABEL_40);
      goto label_153;

    case 32:
      current_block = (Rpc - LABEL_41);
      goto label_154;

    case 33:
      current_block = (Rpc - LABEL_42);
      goto label_155;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto label_156;

    case 35:
      current_block = (Rpc - LABEL_44);
      goto label_157;

    case 36:
      current_block = (Rpc - LABEL_45);
      goto label_158;

    case 37:
      current_block = (Rpc - LABEL_46);
      goto label_159;

    case 38:
      current_block = (Rpc - LABEL_47);
      goto label_160;

    case 39:
      current_block = (Rpc - LABEL_48);
      goto label_161;

    case 40:
      current_block = (Rpc - LABEL_33);
      goto continuation_58;

    case 41:
      current_block = (Rpc - LABEL_34);
      goto continuation_57;

    case 42:
      current_block = (Rpc - LABEL_50);
      goto continuation_59;

    case 43:
      current_block = (Rpc - LABEL_53);
      goto label_162;

    case 44:
      current_block = (Rpc - LABEL_51);
      goto continuation_61;

    case 45:
      current_block = (Rpc - LABEL_57);
      goto label_163;

    case 46:
      current_block = (Rpc - LABEL_52);
      goto continuation_60;

    case 47:
      current_block = (Rpc - LABEL_55);
      goto continuation_63;

    case 48:
      current_block = (Rpc - LABEL_61);
      goto label_164;

    case 49:
      current_block = (Rpc - LABEL_56);
      goto continuation_62;

    case 50:
      current_block = (Rpc - LABEL_59);
      goto continuation_65;

    case 51:
      current_block = (Rpc - LABEL_64);
      goto label_165;

    case 52:
      current_block = (Rpc - LABEL_60);
      goto continuation_64;

    case 53:
      current_block = (Rpc - LABEL_62);
      goto continuation_67;

    case 54:
      current_block = (Rpc - LABEL_67);
      goto label_166;

    case 55:
      current_block = (Rpc - LABEL_63);
      goto continuation_66;

    case 56:
      current_block = (Rpc - LABEL_65);
      goto continuation_69;

    case 57:
      current_block = (Rpc - LABEL_70);
      goto label_167;

    case 58:
      current_block = (Rpc - LABEL_66);
      goto continuation_68;

    case 59:
      current_block = (Rpc - LABEL_68);
      goto continuation_71;

    case 60:
      current_block = (Rpc - LABEL_73);
      goto label_168;

    case 61:
      current_block = (Rpc - LABEL_69);
      goto continuation_70;

    case 62:
      current_block = (Rpc - LABEL_71);
      goto continuation_73;

    case 63:
      current_block = (Rpc - LABEL_76);
      goto label_169;

    case 64:
      current_block = (Rpc - LABEL_77);
      goto label_170;

    case 65:
      current_block = (Rpc - LABEL_72);
      goto continuation_72;

    case 66:
      current_block = (Rpc - LABEL_74);
      goto continuation_75;

    case 67:
      current_block = (Rpc - LABEL_80);
      goto label_171;

    case 68:
      current_block = (Rpc - LABEL_81);
      goto label_172;

    case 69:
      current_block = (Rpc - LABEL_82);
      goto label_173;

    case 70:
      current_block = (Rpc - LABEL_83);
      goto label_174;

    case 71:
      current_block = (Rpc - LABEL_84);
      goto label_175;

    case 72:
      current_block = (Rpc - LABEL_85);
      goto label_176;

    case 73:
      current_block = (Rpc - LABEL_86);
      goto label_177;

    case 74:
      current_block = (Rpc - LABEL_87);
      goto label_178;

    case 75:
      current_block = (Rpc - LABEL_88);
      goto label_179;

    case 76:
      current_block = (Rpc - LABEL_89);
      goto label_180;

    case 77:
      current_block = (Rpc - LABEL_90);
      goto label_181;

    case 78:
      current_block = (Rpc - LABEL_91);
      goto label_182;

    case 79:
      current_block = (Rpc - LABEL_92);
      goto label_183;

    case 80:
      current_block = (Rpc - LABEL_93);
      goto label_184;

    case 81:
      current_block = (Rpc - LABEL_94);
      goto label_185;

    case 82:
      current_block = (Rpc - LABEL_75);
      goto continuation_74;

    case 83:
      current_block = (Rpc - LABEL_78);
      goto continuation_119;

    case 84:
      current_block = (Rpc - LABEL_79);
      goto continuation_118;

    case 85:
      current_block = (Rpc - LABEL_95);
      goto continuation_120;

    case 86:
      current_block = (Rpc - LABEL_96);
      goto continuation_126;

    case 87:
      current_block = (Rpc - LABEL_101);
      goto label_186;

    case 88:
      current_block = (Rpc - LABEL_97);
      goto continuation_125;

    case 89:
      current_block = (Rpc - LABEL_99);
      goto continuation_134;

    case 90:
      current_block = (Rpc - LABEL_100);
      goto continuation_127;

    case 91:
      current_block = (Rpc - LABEL_103);
      goto continuation_135;

    case 92:
      current_block = (Rpc - LABEL_108);
      goto label_187;

    case 93:
      current_block = (Rpc - LABEL_104);
      goto initial_rename_database_192;

    case 94:
      current_block = (Rpc - LABEL_110);
      goto label_188;

    case 95:
      current_block = (Rpc - LABEL_106);
      goto continuation_137;

    case 96:
      current_block = (Rpc - LABEL_107);
      goto continuation_136;

    case 97:
      current_block = (Rpc - LABEL_109);
      goto continuation_130;

    case 98:
      current_block = (Rpc - LABEL_113);
      goto label_189;

    case 99:
      current_block = (Rpc - LABEL_112);
      goto continuation_131;

    case 100:
      current_block = (Rpc - LABEL_115);
      goto label_190;

    case 101:
      current_block = (Rpc - LABEL_114);
      goto continuation_129;

    case 102:
      current_block = (Rpc - LABEL_116);
      goto label_194;

    case 103:
      current_block = (Rpc - LABEL_117);
      goto label_195;

    case 104:
      current_block = (Rpc - LABEL_118);
      goto expression_139;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_139)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_117])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_195)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_194)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	2,
	1,
	2,
	2,
	1,
	1,
	2,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
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
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	2,
	2,
	2,
	0,
	1,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	0,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 82)
      goto label_193;
    blocks = (current_block [OBJECT_65]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_116])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_193)
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
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_291;
  Wrd11 = Wrd15;

DEFLABEL (label_290)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_289;
  Wrd11 = Wrd15;

DEFLABEL (label_288)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_287;
  Wrd11 = Wrd15;

DEFLABEL (label_286)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_285;
  Wrd11 = Wrd15;

DEFLABEL (label_284)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_283;
  Wrd11 = Wrd15;

DEFLABEL (label_282)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_281;
  Wrd11 = Wrd15;

DEFLABEL (label_280)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_279;
  Wrd11 = Wrd15;

DEFLABEL (label_278)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_277;
  Wrd11 = Wrd15;

DEFLABEL (label_276)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_275;
  Wrd12 = Wrd16;

DEFLABEL (label_274)
  (Wrd21.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_14]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_273;
  Wrd31 = Wrd35;

DEFLABEL (label_272)
  (Wrd40.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd45.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_271;
  Wrd50 = Wrd54;

DEFLABEL (label_270)
  (Wrd59.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (Wrd63.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (Wrd64.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd70.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd73.Obj) = ((Wrd70.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 50)
    goto label_269;
  Wrd69 = Wrd73;

DEFLABEL (label_268)
  (Wrd78.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (Wrd82.Obj) = (current_block [OBJECT_17]);
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (Wrd83.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd83.Obj);
  (Wrd85.pObj) = (& (Rhp [-2]));
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd85.pObj)));
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd89.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd92.Obj) = ((Wrd89.pObj) [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if ((Wrd93.uLng) == 50)
    goto label_267;
  Wrd88 = Wrd92;

DEFLABEL (label_266)
  (Wrd97.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd97.Obj);
  (Wrd96.pObj) = (& (Rhp [-2]));
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd96.pObj)));
  (Wrd101.Obj) = (current_block [OBJECT_18]);
  (* (Rhp++)) = (Wrd101.Obj);
  (* (Rhp++)) = (Wrd94.Obj);
  (Wrd100.pObj) = (& (Rhp [-2]));
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd100.pObj)));
  (Wrd102.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd98.Obj);
  (* (Rhp++)) = (Wrd102.Obj);
  (Wrd104.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd104.pObj)));
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd108.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd111.Obj) = ((Wrd108.pObj) [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd112.uLng) == 50)
    goto label_265;
  Wrd107 = Wrd111;

DEFLABEL (label_264)
  (Wrd116.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd107.Obj);
  (* (Rhp++)) = (Wrd116.Obj);
  (Wrd115.pObj) = (& (Rhp [-2]));
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd115.pObj)));
  (Wrd120.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd120.Obj);
  (* (Rhp++)) = (Wrd113.Obj);
  (Wrd119.pObj) = (& (Rhp [-2]));
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd119.pObj)));
  (Wrd121.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd117.Obj);
  (* (Rhp++)) = (Wrd121.Obj);
  (Wrd123.pObj) = (& (Rhp [-2]));
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd123.pObj)));
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd127.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd130.Obj) = ((Wrd127.pObj) [0]);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if ((Wrd131.uLng) == 50)
    goto label_263;
  Wrd126 = Wrd130;

DEFLABEL (label_262)
  (Wrd135.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd126.Obj);
  (* (Rhp++)) = (Wrd135.Obj);
  (Wrd134.pObj) = (& (Rhp [-2]));
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd134.pObj)));
  (Wrd139.Obj) = (current_block [OBJECT_20]);
  (* (Rhp++)) = (Wrd139.Obj);
  (* (Rhp++)) = (Wrd132.Obj);
  (Wrd138.pObj) = (& (Rhp [-2]));
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd138.pObj)));
  (Wrd140.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd136.Obj);
  (* (Rhp++)) = (Wrd140.Obj);
  (Wrd142.pObj) = (& (Rhp [-2]));
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd142.pObj)));
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd146.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd149.Obj) = ((Wrd146.pObj) [0]);
  (Wrd150.uLng) = (OBJECT_TYPE (Wrd149.Obj));
  if ((Wrd150.uLng) == 50)
    goto label_261;
  Wrd145 = Wrd149;

DEFLABEL (label_260)
  (Wrd154.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd145.Obj);
  (* (Rhp++)) = (Wrd154.Obj);
  (Wrd153.pObj) = (& (Rhp [-2]));
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd153.pObj)));
  (Wrd158.Obj) = (current_block [OBJECT_21]);
  (* (Rhp++)) = (Wrd158.Obj);
  (* (Rhp++)) = (Wrd151.Obj);
  (Wrd157.pObj) = (& (Rhp [-2]));
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd157.pObj)));
  (Wrd159.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd155.Obj);
  (* (Rhp++)) = (Wrd159.Obj);
  (Wrd161.pObj) = (& (Rhp [-2]));
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd161.pObj)));
  (* (--Rsp)) = (Wrd162.Obj);
  (Wrd165.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd168.Obj) = ((Wrd165.pObj) [0]);
  (Wrd169.uLng) = (OBJECT_TYPE (Wrd168.Obj));
  if ((Wrd169.uLng) == 50)
    goto label_259;
  Wrd164 = Wrd168;

DEFLABEL (label_258)
  (Wrd173.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd164.Obj);
  (* (Rhp++)) = (Wrd173.Obj);
  (Wrd172.pObj) = (& (Rhp [-2]));
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd172.pObj)));
  (Wrd177.Obj) = (current_block [OBJECT_22]);
  (* (Rhp++)) = (Wrd177.Obj);
  (* (Rhp++)) = (Wrd170.Obj);
  (Wrd176.pObj) = (& (Rhp [-2]));
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd176.pObj)));
  (Wrd178.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd174.Obj);
  (* (Rhp++)) = (Wrd178.Obj);
  (Wrd180.pObj) = (& (Rhp [-2]));
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd180.pObj)));
  (* (--Rsp)) = (Wrd181.Obj);
  (Wrd184.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd187.Obj) = ((Wrd184.pObj) [0]);
  (Wrd188.uLng) = (OBJECT_TYPE (Wrd187.Obj));
  if ((Wrd188.uLng) == 50)
    goto label_257;
  Wrd183 = Wrd187;

DEFLABEL (label_256)
  (Wrd192.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd183.Obj);
  (* (Rhp++)) = (Wrd192.Obj);
  (Wrd191.pObj) = (& (Rhp [-2]));
  (Wrd189.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd191.pObj)));
  (Wrd196.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = (Wrd196.Obj);
  (* (Rhp++)) = (Wrd189.Obj);
  (Wrd195.pObj) = (& (Rhp [-2]));
  (Wrd193.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd195.pObj)));
  (Wrd197.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd193.Obj);
  (* (Rhp++)) = (Wrd197.Obj);
  (Wrd199.pObj) = (& (Rhp [-2]));
  (Wrd200.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd199.pObj)));
  (* (--Rsp)) = (Wrd200.Obj);
  (Wrd203.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd206.Obj) = ((Wrd203.pObj) [0]);
  (Wrd207.uLng) = (OBJECT_TYPE (Wrd206.Obj));
  if ((Wrd207.uLng) == 50)
    goto label_255;
  Wrd202 = Wrd206;

DEFLABEL (label_254)
  (Wrd211.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd202.Obj);
  (* (Rhp++)) = (Wrd211.Obj);
  (Wrd210.pObj) = (& (Rhp [-2]));
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd210.pObj)));
  (Wrd215.Obj) = (current_block [OBJECT_24]);
  (* (Rhp++)) = (Wrd215.Obj);
  (* (Rhp++)) = (Wrd208.Obj);
  (Wrd214.pObj) = (& (Rhp [-2]));
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd214.pObj)));
  (Wrd216.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd212.Obj);
  (* (Rhp++)) = (Wrd216.Obj);
  (Wrd218.pObj) = (& (Rhp [-2]));
  (Wrd219.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd218.pObj)));
  (* (--Rsp)) = (Wrd219.Obj);
  (Wrd222.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd225.Obj) = ((Wrd222.pObj) [0]);
  (Wrd226.uLng) = (OBJECT_TYPE (Wrd225.Obj));
  if ((Wrd226.uLng) == 50)
    goto label_253;
  Wrd221 = Wrd225;

DEFLABEL (label_252)
  (Wrd230.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd221.Obj);
  (* (Rhp++)) = (Wrd230.Obj);
  (Wrd229.pObj) = (& (Rhp [-2]));
  (Wrd227.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd229.pObj)));
  (Wrd234.Obj) = (current_block [OBJECT_25]);
  (* (Rhp++)) = (Wrd234.Obj);
  (* (Rhp++)) = (Wrd227.Obj);
  (Wrd233.pObj) = (& (Rhp [-2]));
  (Wrd231.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd233.pObj)));
  (Wrd235.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd231.Obj);
  (* (Rhp++)) = (Wrd235.Obj);
  (Wrd237.pObj) = (& (Rhp [-2]));
  (Wrd238.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd237.pObj)));
  (* (--Rsp)) = (Wrd238.Obj);
  (Wrd241.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20]));
  (Wrd244.Obj) = ((Wrd241.pObj) [0]);
  (Wrd245.uLng) = (OBJECT_TYPE (Wrd244.Obj));
  if ((Wrd245.uLng) == 50)
    goto label_251;
  Wrd240 = Wrd244;

DEFLABEL (label_250)
  (Wrd249.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd240.Obj);
  (* (Rhp++)) = (Wrd249.Obj);
  (Wrd248.pObj) = (& (Rhp [-2]));
  (Wrd246.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd248.pObj)));
  (Wrd253.Obj) = (current_block [OBJECT_26]);
  (* (Rhp++)) = (Wrd253.Obj);
  (* (Rhp++)) = (Wrd246.Obj);
  (Wrd252.pObj) = (& (Rhp [-2]));
  (Wrd250.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd252.pObj)));
  (Wrd254.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd250.Obj);
  (* (Rhp++)) = (Wrd254.Obj);
  (Wrd256.pObj) = (& (Rhp [-2]));
  (Wrd257.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd256.pObj)));
  (* (--Rsp)) = (Wrd257.Obj);
  (Wrd259.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21]));
  (Wrd262.Obj) = ((Wrd259.pObj) [0]);
  (Wrd263.uLng) = (OBJECT_TYPE (Wrd262.Obj));
  if ((Wrd263.uLng) == 50)
    goto label_249;
  Wrd258 = Wrd262;

DEFLABEL (label_248)
  (* (--Rsp)) = (Wrd258.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_247;
  Wrd11 = Wrd15;

DEFLABEL (label_246)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_245;
  Wrd11 = Wrd15;

DEFLABEL (label_244)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_56);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_243;
  Wrd11 = Wrd15;

DEFLABEL (label_242)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_60);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_241;
  Wrd11 = Wrd15;

DEFLABEL (label_240)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_63);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_239;
  Wrd11 = Wrd15;

DEFLABEL (label_238)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_66);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_237;
  Wrd11 = Wrd15;

DEFLABEL (label_236)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_69);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_235;
  Wrd11 = Wrd15;

DEFLABEL (label_234)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_72);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_233;
  Wrd11 = Wrd15;

DEFLABEL (label_232)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_231;
  Wrd17 = Wrd21;

DEFLABEL (label_230)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_75);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_229;
  Wrd12 = Wrd16;

DEFLABEL (label_228)
  (Wrd21.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_14]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_227;
  Wrd31 = Wrd35;

DEFLABEL (label_226)
  (Wrd40.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd45.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_225;
  Wrd50 = Wrd54;

DEFLABEL (label_224)
  (Wrd59.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (Wrd63.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (Wrd64.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd70.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd73.Obj) = ((Wrd70.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 50)
    goto label_223;
  Wrd69 = Wrd73;

DEFLABEL (label_222)
  (Wrd78.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (Wrd82.Obj) = (current_block [OBJECT_17]);
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (Wrd83.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd83.Obj);
  (Wrd85.pObj) = (& (Rhp [-2]));
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd85.pObj)));
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd89.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27]));
  (Wrd92.Obj) = ((Wrd89.pObj) [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if ((Wrd93.uLng) == 50)
    goto label_221;
  Wrd88 = Wrd92;

DEFLABEL (label_220)
  (Wrd97.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = (Wrd97.Obj);
  (Wrd96.pObj) = (& (Rhp [-2]));
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd96.pObj)));
  (Wrd101.Obj) = (current_block [OBJECT_18]);
  (* (Rhp++)) = (Wrd101.Obj);
  (* (Rhp++)) = (Wrd94.Obj);
  (Wrd100.pObj) = (& (Rhp [-2]));
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd100.pObj)));
  (Wrd102.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd98.Obj);
  (* (Rhp++)) = (Wrd102.Obj);
  (Wrd104.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd104.pObj)));
  (* (--Rsp)) = (Wrd105.Obj);
  (Wrd108.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28]));
  (Wrd111.Obj) = ((Wrd108.pObj) [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd112.uLng) == 50)
    goto label_219;
  Wrd107 = Wrd111;

DEFLABEL (label_218)
  (Wrd116.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd107.Obj);
  (* (Rhp++)) = (Wrd116.Obj);
  (Wrd115.pObj) = (& (Rhp [-2]));
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd115.pObj)));
  (Wrd120.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd120.Obj);
  (* (Rhp++)) = (Wrd113.Obj);
  (Wrd119.pObj) = (& (Rhp [-2]));
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd119.pObj)));
  (Wrd121.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd117.Obj);
  (* (Rhp++)) = (Wrd121.Obj);
  (Wrd123.pObj) = (& (Rhp [-2]));
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd123.pObj)));
  (* (--Rsp)) = (Wrd124.Obj);
  (Wrd127.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29]));
  (Wrd130.Obj) = ((Wrd127.pObj) [0]);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if ((Wrd131.uLng) == 50)
    goto label_217;
  Wrd126 = Wrd130;

DEFLABEL (label_216)
  (Wrd135.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd126.Obj);
  (* (Rhp++)) = (Wrd135.Obj);
  (Wrd134.pObj) = (& (Rhp [-2]));
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd134.pObj)));
  (Wrd139.Obj) = (current_block [OBJECT_20]);
  (* (Rhp++)) = (Wrd139.Obj);
  (* (Rhp++)) = (Wrd132.Obj);
  (Wrd138.pObj) = (& (Rhp [-2]));
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd138.pObj)));
  (Wrd140.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd136.Obj);
  (* (Rhp++)) = (Wrd140.Obj);
  (Wrd142.pObj) = (& (Rhp [-2]));
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd142.pObj)));
  (* (--Rsp)) = (Wrd143.Obj);
  (Wrd146.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30]));
  (Wrd149.Obj) = ((Wrd146.pObj) [0]);
  (Wrd150.uLng) = (OBJECT_TYPE (Wrd149.Obj));
  if ((Wrd150.uLng) == 50)
    goto label_215;
  Wrd145 = Wrd149;

DEFLABEL (label_214)
  (Wrd154.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd145.Obj);
  (* (Rhp++)) = (Wrd154.Obj);
  (Wrd153.pObj) = (& (Rhp [-2]));
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd153.pObj)));
  (Wrd158.Obj) = (current_block [OBJECT_21]);
  (* (Rhp++)) = (Wrd158.Obj);
  (* (Rhp++)) = (Wrd151.Obj);
  (Wrd157.pObj) = (& (Rhp [-2]));
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd157.pObj)));
  (Wrd159.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd155.Obj);
  (* (Rhp++)) = (Wrd159.Obj);
  (Wrd161.pObj) = (& (Rhp [-2]));
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd161.pObj)));
  (* (--Rsp)) = (Wrd162.Obj);
  (Wrd165.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31]));
  (Wrd168.Obj) = ((Wrd165.pObj) [0]);
  (Wrd169.uLng) = (OBJECT_TYPE (Wrd168.Obj));
  if ((Wrd169.uLng) == 50)
    goto label_213;
  Wrd164 = Wrd168;

DEFLABEL (label_212)
  (Wrd173.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd164.Obj);
  (* (Rhp++)) = (Wrd173.Obj);
  (Wrd172.pObj) = (& (Rhp [-2]));
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd172.pObj)));
  (Wrd177.Obj) = (current_block [OBJECT_44]);
  (* (Rhp++)) = (Wrd177.Obj);
  (* (Rhp++)) = (Wrd170.Obj);
  (Wrd176.pObj) = (& (Rhp [-2]));
  (Wrd174.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd176.pObj)));
  (Wrd178.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd174.Obj);
  (* (Rhp++)) = (Wrd178.Obj);
  (Wrd180.pObj) = (& (Rhp [-2]));
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd180.pObj)));
  (* (--Rsp)) = (Wrd181.Obj);
  (Wrd184.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_32]));
  (Wrd187.Obj) = ((Wrd184.pObj) [0]);
  (Wrd188.uLng) = (OBJECT_TYPE (Wrd187.Obj));
  if ((Wrd188.uLng) == 50)
    goto label_211;
  Wrd183 = Wrd187;

DEFLABEL (label_210)
  (Wrd192.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd183.Obj);
  (* (Rhp++)) = (Wrd192.Obj);
  (Wrd191.pObj) = (& (Rhp [-2]));
  (Wrd189.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd191.pObj)));
  (Wrd196.Obj) = (current_block [OBJECT_22]);
  (* (Rhp++)) = (Wrd196.Obj);
  (* (Rhp++)) = (Wrd189.Obj);
  (Wrd195.pObj) = (& (Rhp [-2]));
  (Wrd193.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd195.pObj)));
  (Wrd197.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd193.Obj);
  (* (Rhp++)) = (Wrd197.Obj);
  (Wrd199.pObj) = (& (Rhp [-2]));
  (Wrd200.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd199.pObj)));
  (* (--Rsp)) = (Wrd200.Obj);
  (Wrd203.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33]));
  (Wrd206.Obj) = ((Wrd203.pObj) [0]);
  (Wrd207.uLng) = (OBJECT_TYPE (Wrd206.Obj));
  if ((Wrd207.uLng) == 50)
    goto label_209;
  Wrd202 = Wrd206;

DEFLABEL (label_208)
  (Wrd211.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd202.Obj);
  (* (Rhp++)) = (Wrd211.Obj);
  (Wrd210.pObj) = (& (Rhp [-2]));
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd210.pObj)));
  (Wrd215.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = (Wrd215.Obj);
  (* (Rhp++)) = (Wrd208.Obj);
  (Wrd214.pObj) = (& (Rhp [-2]));
  (Wrd212.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd214.pObj)));
  (Wrd216.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd212.Obj);
  (* (Rhp++)) = (Wrd216.Obj);
  (Wrd218.pObj) = (& (Rhp [-2]));
  (Wrd219.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd218.pObj)));
  (* (--Rsp)) = (Wrd219.Obj);
  (Wrd222.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34]));
  (Wrd225.Obj) = ((Wrd222.pObj) [0]);
  (Wrd226.uLng) = (OBJECT_TYPE (Wrd225.Obj));
  if ((Wrd226.uLng) == 50)
    goto label_207;
  Wrd221 = Wrd225;

DEFLABEL (label_206)
  (Wrd230.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd221.Obj);
  (* (Rhp++)) = (Wrd230.Obj);
  (Wrd229.pObj) = (& (Rhp [-2]));
  (Wrd227.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd229.pObj)));
  (Wrd234.Obj) = (current_block [OBJECT_24]);
  (* (Rhp++)) = (Wrd234.Obj);
  (* (Rhp++)) = (Wrd227.Obj);
  (Wrd233.pObj) = (& (Rhp [-2]));
  (Wrd231.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd233.pObj)));
  (Wrd235.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd231.Obj);
  (* (Rhp++)) = (Wrd235.Obj);
  (Wrd237.pObj) = (& (Rhp [-2]));
  (Wrd238.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd237.pObj)));
  (* (--Rsp)) = (Wrd238.Obj);
  (Wrd241.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35]));
  (Wrd244.Obj) = ((Wrd241.pObj) [0]);
  (Wrd245.uLng) = (OBJECT_TYPE (Wrd244.Obj));
  if ((Wrd245.uLng) == 50)
    goto label_205;
  Wrd240 = Wrd244;

DEFLABEL (label_204)
  (Wrd249.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd240.Obj);
  (* (Rhp++)) = (Wrd249.Obj);
  (Wrd248.pObj) = (& (Rhp [-2]));
  (Wrd246.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd248.pObj)));
  (Wrd253.Obj) = (current_block [OBJECT_25]);
  (* (Rhp++)) = (Wrd253.Obj);
  (* (Rhp++)) = (Wrd246.Obj);
  (Wrd252.pObj) = (& (Rhp [-2]));
  (Wrd250.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd252.pObj)));
  (Wrd254.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd250.Obj);
  (* (Rhp++)) = (Wrd254.Obj);
  (Wrd256.pObj) = (& (Rhp [-2]));
  (Wrd257.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd256.pObj)));
  (* (--Rsp)) = (Wrd257.Obj);
  (Wrd260.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36]));
  (Wrd263.Obj) = ((Wrd260.pObj) [0]);
  (Wrd264.uLng) = (OBJECT_TYPE (Wrd263.Obj));
  if ((Wrd264.uLng) == 50)
    goto label_203;
  Wrd259 = Wrd263;

DEFLABEL (label_202)
  (Wrd268.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd259.Obj);
  (* (Rhp++)) = (Wrd268.Obj);
  (Wrd267.pObj) = (& (Rhp [-2]));
  (Wrd265.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd267.pObj)));
  (Wrd272.Obj) = (current_block [OBJECT_26]);
  (* (Rhp++)) = (Wrd272.Obj);
  (* (Rhp++)) = (Wrd265.Obj);
  (Wrd271.pObj) = (& (Rhp [-2]));
  (Wrd269.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd271.pObj)));
  (Wrd273.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd269.Obj);
  (* (Rhp++)) = (Wrd273.Obj);
  (Wrd275.pObj) = (& (Rhp [-2]));
  (Wrd276.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd275.pObj)));
  (* (--Rsp)) = (Wrd276.Obj);
  (Wrd278.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37]));
  (Wrd281.Obj) = ((Wrd278.pObj) [0]);
  (Wrd282.uLng) = (OBJECT_TYPE (Wrd281.Obj));
  if ((Wrd282.uLng) == 50)
    goto label_201;
  Wrd277 = Wrd281;

DEFLABEL (label_200)
  (* (--Rsp)) = (Wrd277.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49]));

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_79);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_48]);
  (Wrd16.Obj) = (current_block [OBJECT_13]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_49]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_50]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_51]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_98]));

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_97);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_199;
  Wrd11 = Wrd15;

DEFLABEL (label_198)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_102]));

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_100);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_105);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_197;
  Wrd11 = Wrd15;

DEFLABEL (label_196)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_102]));

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_107);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd5.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_60]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_197)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_108])), (Wrd12.pObj));

DEFLABEL (label_187)
  (Wrd11.Obj) = Rvl;
  goto label_196;

DEFLABEL (label_199)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_101])), (Wrd12.pObj));

DEFLABEL (label_186)
  (Wrd11.Obj) = Rvl;
  goto label_198;

DEFLABEL (label_201)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94])), (Wrd278.pObj));

DEFLABEL (label_185)
  (Wrd277.Obj) = Rvl;
  goto label_200;

DEFLABEL (label_203)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93])), (Wrd260.pObj));

DEFLABEL (label_184)
  (Wrd259.Obj) = Rvl;
  goto label_202;

DEFLABEL (label_205)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92])), (Wrd241.pObj));

DEFLABEL (label_183)
  (Wrd240.Obj) = Rvl;
  goto label_204;

DEFLABEL (label_207)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91])), (Wrd222.pObj));

DEFLABEL (label_182)
  (Wrd221.Obj) = Rvl;
  goto label_206;

DEFLABEL (label_209)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90])), (Wrd203.pObj));

DEFLABEL (label_181)
  (Wrd202.Obj) = Rvl;
  goto label_208;

DEFLABEL (label_211)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89])), (Wrd184.pObj));

DEFLABEL (label_180)
  (Wrd183.Obj) = Rvl;
  goto label_210;

DEFLABEL (label_213)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88])), (Wrd165.pObj));

DEFLABEL (label_179)
  (Wrd164.Obj) = Rvl;
  goto label_212;

DEFLABEL (label_215)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87])), (Wrd146.pObj));

DEFLABEL (label_178)
  (Wrd145.Obj) = Rvl;
  goto label_214;

DEFLABEL (label_217)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86])), (Wrd127.pObj));

DEFLABEL (label_177)
  (Wrd126.Obj) = Rvl;
  goto label_216;

DEFLABEL (label_219)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85])), (Wrd108.pObj));

DEFLABEL (label_176)
  (Wrd107.Obj) = Rvl;
  goto label_218;

DEFLABEL (label_221)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84])), (Wrd89.pObj));

DEFLABEL (label_175)
  (Wrd88.Obj) = Rvl;
  goto label_220;

DEFLABEL (label_223)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83])), (Wrd70.pObj));

DEFLABEL (label_174)
  (Wrd69.Obj) = Rvl;
  goto label_222;

DEFLABEL (label_225)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82])), (Wrd51.pObj));

DEFLABEL (label_173)
  (Wrd50.Obj) = Rvl;
  goto label_224;

DEFLABEL (label_227)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81])), (Wrd32.pObj));

DEFLABEL (label_172)
  (Wrd31.Obj) = Rvl;
  goto label_226;

DEFLABEL (label_229)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80])), (Wrd13.pObj));

DEFLABEL (label_171)
  (Wrd12.Obj) = Rvl;
  goto label_228;

DEFLABEL (label_231)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77])), (Wrd18.pObj));

DEFLABEL (label_170)
  (Wrd17.Obj) = Rvl;
  goto label_230;

DEFLABEL (label_233)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76])), (Wrd12.pObj));

DEFLABEL (label_169)
  (Wrd11.Obj) = Rvl;
  goto label_232;

DEFLABEL (label_235)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73])), (Wrd12.pObj));

DEFLABEL (label_168)
  (Wrd11.Obj) = Rvl;
  goto label_234;

DEFLABEL (label_237)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70])), (Wrd12.pObj));

DEFLABEL (label_167)
  (Wrd11.Obj) = Rvl;
  goto label_236;

DEFLABEL (label_239)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67])), (Wrd12.pObj));

DEFLABEL (label_166)
  (Wrd11.Obj) = Rvl;
  goto label_238;

DEFLABEL (label_241)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64])), (Wrd12.pObj));

DEFLABEL (label_165)
  (Wrd11.Obj) = Rvl;
  goto label_240;

DEFLABEL (label_243)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61])), (Wrd12.pObj));

DEFLABEL (label_164)
  (Wrd11.Obj) = Rvl;
  goto label_242;

DEFLABEL (label_245)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57])), (Wrd12.pObj));

DEFLABEL (label_163)
  (Wrd11.Obj) = Rvl;
  goto label_244;

DEFLABEL (label_247)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53])), (Wrd12.pObj));

DEFLABEL (label_162)
  (Wrd11.Obj) = Rvl;
  goto label_246;

DEFLABEL (label_249)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48])), (Wrd259.pObj));

DEFLABEL (label_161)
  (Wrd258.Obj) = Rvl;
  goto label_248;

DEFLABEL (label_251)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47])), (Wrd241.pObj));

DEFLABEL (label_160)
  (Wrd240.Obj) = Rvl;
  goto label_250;

DEFLABEL (label_253)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46])), (Wrd222.pObj));

DEFLABEL (label_159)
  (Wrd221.Obj) = Rvl;
  goto label_252;

DEFLABEL (label_255)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45])), (Wrd203.pObj));

DEFLABEL (label_158)
  (Wrd202.Obj) = Rvl;
  goto label_254;

DEFLABEL (label_257)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44])), (Wrd184.pObj));

DEFLABEL (label_157)
  (Wrd183.Obj) = Rvl;
  goto label_256;

DEFLABEL (label_259)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43])), (Wrd165.pObj));

DEFLABEL (label_156)
  (Wrd164.Obj) = Rvl;
  goto label_258;

DEFLABEL (label_261)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd146.pObj));

DEFLABEL (label_155)
  (Wrd145.Obj) = Rvl;
  goto label_260;

DEFLABEL (label_263)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd127.pObj));

DEFLABEL (label_154)
  (Wrd126.Obj) = Rvl;
  goto label_262;

DEFLABEL (label_265)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd108.pObj));

DEFLABEL (label_153)
  (Wrd107.Obj) = Rvl;
  goto label_264;

DEFLABEL (label_267)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39])), (Wrd89.pObj));

DEFLABEL (label_152)
  (Wrd88.Obj) = Rvl;
  goto label_266;

DEFLABEL (label_269)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_38])), (Wrd70.pObj));

DEFLABEL (label_151)
  (Wrd69.Obj) = Rvl;
  goto label_268;

DEFLABEL (label_271)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd51.pObj));

DEFLABEL (label_150)
  (Wrd50.Obj) = Rvl;
  goto label_270;

DEFLABEL (label_273)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36])), (Wrd32.pObj));

DEFLABEL (label_149)
  (Wrd31.Obj) = Rvl;
  goto label_272;

DEFLABEL (label_275)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd13.pObj));

DEFLABEL (label_148)
  (Wrd12.Obj) = Rvl;
  goto label_274;

DEFLABEL (label_277)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd12.pObj));

DEFLABEL (label_147)
  (Wrd11.Obj) = Rvl;
  goto label_276;

DEFLABEL (label_279)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd12.pObj));

DEFLABEL (label_146)
  (Wrd11.Obj) = Rvl;
  goto label_278;

DEFLABEL (label_281)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd12.pObj));

DEFLABEL (label_145)
  (Wrd11.Obj) = Rvl;
  goto label_280;

DEFLABEL (label_283)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd12.pObj));

DEFLABEL (label_144)
  (Wrd11.Obj) = Rvl;
  goto label_282;

DEFLABEL (label_285)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd12.pObj));

DEFLABEL (label_143)
  (Wrd11.Obj) = Rvl;
  goto label_284;

DEFLABEL (label_287)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16])), (Wrd12.pObj));

DEFLABEL (label_142)
  (Wrd11.Obj) = Rvl;
  goto label_286;

DEFLABEL (label_289)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd12.pObj));

DEFLABEL (label_141)
  (Wrd11.Obj) = Rvl;
  goto label_288;

DEFLABEL (label_291)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd12.pObj));

DEFLABEL (label_140)
  (Wrd11.Obj) = Rvl;
  goto label_290;

DEFLABEL (initial_rename_database_192)
  CLOSURE_HEADER (LABEL_104);

DEFLABEL (initial_rename_database_132)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_297;
  Wrd9 = Wrd13;

DEFLABEL (label_296)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_111]));

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_109);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_295;
  Wrd9 = Wrd13;

DEFLABEL (label_294)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_111]));

DEFLABEL (continuation_131)
  INTERRUPT_CHECK (27, LABEL_112);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_38]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_293;
  Wrd9 = Wrd13;

DEFLABEL (label_292)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_111]));

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd6.Obj) = (* (Rsp++));
  (Wrd14.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.Obj) = (current_block [OBJECT_64]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd10.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd10.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_293)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_115])), (Wrd10.pObj));

DEFLABEL (label_190)
  (Wrd9.Obj) = Rvl;
  goto label_292;

DEFLABEL (label_295)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_113])), (Wrd10.pObj));

DEFLABEL (label_189)
  (Wrd9.Obj) = Rvl;
  goto label_294;

DEFLABEL (label_297)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_110])), (Wrd10.pObj));

DEFLABEL (label_188)
  (Wrd9.Obj) = Rvl;
  goto label_296;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_syntax_output_so_bf90b2fa0f29b253 [82] =
  {
    { "syntax_output_so_code_1", 2, syntax_output_so_code_1 },
    { "syntax_output_so_code_2", 1, syntax_output_so_code_2 },
    { "syntax_output_so_code_3", 1, syntax_output_so_code_3 },
    { "syntax_output_so_code_4", 1, syntax_output_so_code_4 },
    { "syntax_output_so_code_5", 5, syntax_output_so_code_5 },
    { "syntax_output_so_code_6", 2, syntax_output_so_code_6 },
    { "syntax_output_so_code_7", 1, syntax_output_so_code_7 },
    { "syntax_output_so_code_8", 1, syntax_output_so_code_8 },
    { "syntax_output_so_code_9", 1, syntax_output_so_code_9 },
    { "syntax_output_so_code_10", 1, syntax_output_so_code_10 },
    { "syntax_output_so_code_11", 2, syntax_output_so_code_11 },
    { "syntax_output_so_code_12", 3, syntax_output_so_code_12 },
    { "syntax_output_so_code_13", 1, syntax_output_so_code_13 },
    { "syntax_output_so_code_14", 1, syntax_output_so_code_14 },
    { "syntax_output_so_code_15", 1, syntax_output_so_code_15 },
    { "syntax_output_so_code_16", 1, syntax_output_so_code_16 },
    { "syntax_output_so_code_17", 3, syntax_output_so_code_17 },
    { "syntax_output_so_code_18", 18, syntax_output_so_code_18 },
    { "syntax_output_so_code_19", 6, syntax_output_so_code_19 },
    { "syntax_output_so_code_20", 1, syntax_output_so_code_20 },
    { "syntax_output_so_code_21", 9, syntax_output_so_code_21 },
    { "syntax_output_so_code_22", 1, syntax_output_so_code_22 },
    { "syntax_output_so_code_23", 1, syntax_output_so_code_23 },
    { "syntax_output_so_code_24", 1, syntax_output_so_code_24 },
    { "syntax_output_so_code_25", 1, syntax_output_so_code_25 },
    { "syntax_output_so_code_26", 4, syntax_output_so_code_26 },
    { "syntax_output_so_code_27", 1, syntax_output_so_code_27 },
    { "syntax_output_so_code_28", 1, syntax_output_so_code_28 },
    { "syntax_output_so_code_29", 3, syntax_output_so_code_29 },
    { "syntax_output_so_code_30", 3, syntax_output_so_code_30 },
    { "syntax_output_so_code_31", 2, syntax_output_so_code_31 },
    { "syntax_output_so_code_32", 4, syntax_output_so_code_32 },
    { "syntax_output_so_code_33", 2, syntax_output_so_code_33 },
    { "syntax_output_so_code_34", 2, syntax_output_so_code_34 },
    { "syntax_output_so_code_35", 2, syntax_output_so_code_35 },
    { "syntax_output_so_code_36", 17, syntax_output_so_code_36 },
    { "syntax_output_so_code_37", 3, syntax_output_so_code_37 },
    { "syntax_output_so_code_38", 10, syntax_output_so_code_38 },
    { "syntax_output_so_code_39", 1, syntax_output_so_code_39 },
    { "syntax_output_so_code_40", 3, syntax_output_so_code_40 },
    { "syntax_output_so_code_41", 3, syntax_output_so_code_41 },
    { "syntax_output_so_code_42", 5, syntax_output_so_code_42 },
    { "syntax_output_so_code_43", 3, syntax_output_so_code_43 },
    { "syntax_output_so_code_44", 4, syntax_output_so_code_44 },
    { "syntax_output_so_code_45", 5, syntax_output_so_code_45 },
    { "syntax_output_so_code_46", 5, syntax_output_so_code_46 },
    { "syntax_output_so_code_47", 2, syntax_output_so_code_47 },
    { "syntax_output_so_code_48", 1, syntax_output_so_code_48 },
    { "syntax_output_so_code_49", 4, syntax_output_so_code_49 },
    { "syntax_output_so_code_50", 5, syntax_output_so_code_50 },
    { "syntax_output_so_code_51", 2, syntax_output_so_code_51 },
    { "syntax_output_so_code_52", 3, syntax_output_so_code_52 },
    { "syntax_output_so_code_53", 2, syntax_output_so_code_53 },
    { "syntax_output_so_code_54", 7, syntax_output_so_code_54 },
    { "syntax_output_so_code_55", 2, syntax_output_so_code_55 },
    { "syntax_output_so_code_56", 1, syntax_output_so_code_56 },
    { "syntax_output_so_code_57", 4, syntax_output_so_code_57 },
    { "syntax_output_so_code_58", 1, syntax_output_so_code_58 },
    { "syntax_output_so_code_59", 1, syntax_output_so_code_59 },
    { "syntax_output_so_code_60", 1, syntax_output_so_code_60 },
    { "syntax_output_so_code_61", 1, syntax_output_so_code_61 },
    { "syntax_output_so_code_62", 1, syntax_output_so_code_62 },
    { "syntax_output_so_code_63", 1, syntax_output_so_code_63 },
    { "syntax_output_so_code_64", 1, syntax_output_so_code_64 },
    { "syntax_output_so_code_65", 1, syntax_output_so_code_65 },
    { "syntax_output_so_code_66", 1, syntax_output_so_code_66 },
    { "syntax_output_so_code_67", 4, syntax_output_so_code_67 },
    { "syntax_output_so_code_68", 7, syntax_output_so_code_68 },
    { "syntax_output_so_code_69", 11, syntax_output_so_code_69 },
    { "syntax_output_so_code_70", 9, syntax_output_so_code_70 },
    { "syntax_output_so_code_71", 3, syntax_output_so_code_71 },
    { "syntax_output_so_code_72", 8, syntax_output_so_code_72 },
    { "syntax_output_so_code_73", 11, syntax_output_so_code_73 },
    { "syntax_output_so_code_74", 1, syntax_output_so_code_74 },
    { "syntax_output_so_code_75", 15, syntax_output_so_code_75 },
    { "syntax_output_so_code_76", 1, syntax_output_so_code_76 },
    { "syntax_output_so_code_77", 1, syntax_output_so_code_77 },
    { "syntax_output_so_code_78", 2, syntax_output_so_code_78 },
    { "syntax_output_so_code_79", 8, syntax_output_so_code_79 },
    { "syntax_output_so_code_80", 3, syntax_output_so_code_80 },
    { "syntax_output_so_code_81", 3, syntax_output_so_code_81 },
    { "syntax_output_so_code_82", 4, syntax_output_so_code_82 }
  };

int
decl_syntax_output_so_bf90b2fa0f29b253 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_syntax_output_so_bf90b2fa0f29b253);
  return (0);
}

DECLARE_COMPILED_CODE ("syntax-output.so", 105, decl_syntax_output_so_bf90b2fa0f29b253, syntax_output_so_bf90b2fa0f29b253)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_syntax_output_so_data_bf90b2fa0f29b253 [9724] =
  "\xd5\x02\x76\xf0\x12\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x82\x88\x28\x0d"
  "\xba\x23\x22\x29\x21\x9f\x2b\xbb\x1d\xb0\x83\x88\x22\x29\x21\x9c"
  "\x2b\xbc\x1d\xb0\x84\x88\x28\x0d\xbd\x23\x22\x29\x21\x9f\x2b\xbe"
  "\x1d\xb0\x85\x88\x0d\xbf\x24\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb7\x24\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1d\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0c\x0d"
  "\x1c\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x28\xb2\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\xc2\x1c\x0d\x1c\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\xc1\x1c\xc1\x1c\x08\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xc3\x08\x28\x1b\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\xb2\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28"
  "\x1b\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29"
  "\x21\x9c\x2b\xbd\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x80\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x81\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x81\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\xc1\x0e\x1c\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x81"
  "\xc3\x02\x80\x0d\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x1b\x82\x1b"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x06\x07\x85\xc2\x1c"
  "\x02\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x06\x07\x85\x1b\x02\x1b\x83\x1b\x24\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x06\x07"
  "\x85\x1b\x02\x1b\x83\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x1b\x80\x08\x1b\x84\x1b\x24\x28\x1b\x28\x1b\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x08\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x1b\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x80\x82\x84\x1b\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x1b\x0d\x17\x83\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x9c\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x9c\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x08\x8b\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x1b\x0d\x1c\x0d\x0d\x1c\x0d\x1c\x1b\x2a\x0d\x1c\x1b"
  "\x2a\x0d\x1c\x1b\x2a\x0d\x1c\x1b\x2a\x0d\x1c\x1b\x2a\x0d\x1c\x1b"
  "\x2a\x1b\x2a\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x17\x1b\x2a\xb2\x2a\xb5\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x0d\x1c"
  "\x0d\x1c\x1b\x2a\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\xc3\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x1b\x1b\x1b\x1b\x0d\x0d\x1b\xb7\x0d\x0d\x1b\x0d\x0d\x0d"
  "\x0d\x0d\x1b\x1b\x1b\x0d\x0d\x1b\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x0d\x0d"
  "\x0d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb6\x2a\xb4\x2a\xb3"
  "\x2a\xb1\x2a\x17\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x26\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x23"
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
  "\x22\x29\x21\x17\x02\x5c\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f"
  "\x73\x79\x6e\x74\x61\x78\x2d\x6f\x75\x74\x70\x75\x74\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x03\x23\x73\x79\x6e\x74\x61\x63\x74"
  "\x69\x63\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x3e"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x04\x05\x65\x76\x61"
  "\x6c\x03\x6b\x06\x81\x85\x02\x6a\x04\x84\x06\x05\x0d\x02\x03\x0e"
  "\x6d\x61\x6b\x65\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x02\x6c\x04"
  "\x83\x04\x03\x02\x6d\x04\x83\x04\x03\x02\x04\x10\x6d\x61\x6b\x65"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x02\x6e\x04\x84\x06"
  "\x03\x02\x13\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x75\x6e"
  "\x6e\x61\x6d\x65\x64\x02\x03\x08\x6c\x61\x6d\x62\x64\x61\x3f\x04"
  "\x13\x6c\x61\x6d\x62\x64\x61\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e"
  "\x74\x73\x2a\x04\x10\x6d\x61\x6b\x65\x2d\x64\x65\x66\x69\x6e\x69"
  "\x74\x69\x6f\x6e\x09\x07\x0d\x6d\x61\x6b\x65\x2d\x6c\x61\x6d\x62"
  "\x64\x61\x2a\x0a\x05\x73\x0c\x81\x8d\x02\x72\x0a\x81\x8d\x02\x71"
  "\x08\x81\x85\x02\x70\x06\x81\x87\x02\x6f\x04\x84\x06\x0b\x19\x0b"
  "\x02\x03\x25\x6d\x61\x6b\x65\x2d\x6d\x61\x63\x72\x6f\x2d\x72\x65"
  "\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x04\x09\x03\x75\x06\x81\x85\x02\x74"
  "\x04\x84\x06\x05\x0d\x0c\x02\x08\x05\x11\x6d\x61\x6b\x65\x2d\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x0d\x02\x76\x04\x85\x08"
  "\x03\x0e\x02\x09\x04\x11\x6d\x61\x6b\x65\x2d\x64\x69\x73\x6a\x75"
  "\x6e\x63\x74\x69\x6f\x6e\x0f\x02\x77\x04\x84\x06\x03\x10\x02\x0a"
  "\x03\x0e\x6d\x61\x6b\x65\x2d\x73\x65\x71\x75\x65\x6e\x63\x65\x11"
  "\x02\x78\x04\x83\x04\x03\x12\x02\x0b\x04\x11\x6d\x61\x6b\x65\x2d"
  "\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x13\x02\x79\x04\x84"
  "\x06\x03\x14\x02\x0c\x02\x05\x14\x6f\x75\x74\x70\x75\x74\x2f\x6e"
  "\x61\x6d\x65\x64\x2d\x6c\x61\x6d\x62\x64\x61\x15\x02\x7b\x06\x81"
  "\x85\x02\x7a\x04\x84\x06\x05\x0d\x16\x02\x0d\x03\x16\x70\x61\x72"
  "\x73\x65\x2d\x6d\x69\x74\x2d\x6c\x61\x6d\x62\x64\x61\x2d\x6c\x69"
  "\x73\x74\x07\x0a\x03\x7e\x08\x81\x89\x02\x7d\x06\x81\x87\x02\x7c"
  "\x04\x85\x08\x07\x0f\x0a\x02\x0e\x03\x0b\x6d\x61\x6b\x65\x2d\x64"
  "\x65\x6c\x61\x79\x17\x02\x7f\x04\x83\x04\x03\x18\x02\x0f\x03\x11"
  "\x6d\x61\x6b\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f"
  "\x19\x02\x80\x01\x04\x83\x04\x03\x1a\x02\x10\x02\x1f\x6d\x61\x6b"
  "\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x02\x81\x01\x04\x82"
  "\x02\x03\x1b\x02\x11\x02\x82\x01\x04\x82\x02\x03\x1c\x02\x12\x0f"
  "\x6c\x61\x6d\x62\x64\x61\x2d\x74\x61\x67\x3a\x6c\x65\x74\x1d\x02"
  "\x05\x15\x04\x13\x6f\x75\x74\x70\x75\x74\x2f\x63\x6f\x6d\x62\x69"
  "\x6e\x61\x74\x69\x6f\x6e\x1e\x03\x85\x01\x08\x81\x89\x02\x84\x01"
  "\x06\x81\x8f\x02\x83\x01\x04\x85\x08\x07\x11\x1f\x02\x13\x07\x2d"
  "\x76\x61\x6c\x75\x65\x10\x6d\x61\x6b\x65\x2d\x6f\x70\x65\x6e\x2d"
  "\x62\x6c\x6f\x63\x6b\x20\x02\x04\x04\x6d\x61\x70\x21\x05\x21\x04"
  "\x0d\x73\x63\x61\x6e\x2d\x64\x65\x66\x69\x6e\x65\x73\x22\x03\x13"
  "\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x2d\x3e\x73\x79\x6d\x62"
  "\x6f\x6c\x23\x05\x0b\x6f\x75\x74\x70\x75\x74\x2f\x6c\x65\x74\x24"
  "\x03\x0c\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x3f\x03\x1f\x75"
  "\x74\x66\x38\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x6e\x69\x6e"
  "\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x25\x04\x0e"
  "\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x26\x03\x0c"
  "\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61\x6d\x65\x27\x02\x12\x6f\x75"
  "\x74\x70\x75\x74\x2f\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x28"
  "\x03\x11\x03\x04\x0e\x97\x01\x26\x81\x85\x02\x96\x01\x24\x84\x06"
  "\x95\x01\x22\x81\x91\x02\x94\x01\x20\x81\x8f\x02\x93\x01\x1e\x81"
  "\x8d\x02\x92\x01\x1c\x83\x04\x91\x01\x1a\x81\x89\x02\x90\x01\x18"
  "\x81\x89\x02\x8f\x01\x16\x81\x87\x02\x8e\x01\x14\x81\x83\x02\x8d"
  "\x01\x12\x81\x8d\x02\x8c\x01\x10\x81\x8b\x02\x8b\x01\x0e\x81\x83"
  "\x02\x8a\x01\x0c\x81\x89\x02\x89\x01\x0a\x83\x04\x88\x01\x08\x81"
  "\x8f\x02\x87\x01\x06\x81\x87\x02\x86\x01\x04\x85\x08\x25\x47\x29"
  "\x02\x14\x06\x61\x70\x70\x6c\x79\x2a\x07\x61\x70\x70\x65\x6e\x64"
  "\x2b\x20\x03\x03\x17\x6d\x61\x6b\x65\x2d\x62\x6c\x6f\x63\x6b\x2d"
  "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2c\x04\x22\x03\x11"
  "\x04\x9d\x01\x0e\x81\x83\x02\x9c\x01\x0c\x81\x85\x02\x9b\x01\x0a"
  "\x81\x85\x02\x9a\x01\x08\x81\x87\x02\x99\x01\x06\x81\x8b\x02\x98"
  "\x01\x04\x84\x06\x0d\x1c\x2d\x02\x15\x04\x09\x02\x9e\x01\x04\x84"
  "\x06\x03\x2e\x02\x16\x04\x63\x61\x72\x2f\x04\x63\x64\x72\x30\x2a"
  "\x2b\x20\x03\x03\x2c\x02\x12\x6f\x75\x74\x70\x75\x74\x2f\x75\x6e"
  "\x73\x70\x65\x63\x69\x66\x69\x63\x2c\x03\x11\x04\x22\x05\xa7\x01"
  "\x14\x81\x85\x02\xa6\x01\x12\x81\x83\x02\xa5\x01\x10\x81\x89\x02"
  "\xa4\x01\x0e\x81\x83\x02\xa3\x01\x0c\x81\x87\x02\xa2\x01\x0a\x81"
  "\x85\x02\xa1\x01\x08\x81\x87\x02\xa0\x01\x06\x81\x89\x02\x9f\x01"
  "\x04\x84\x06\x13\x26\x2b\x02\x17\x02\x15\x6d\x61\x6b\x65\x2d\x74"
  "\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x02\xa8"
  "\x01\x04\x82\x02\x03\x2a\x02\x18\x04\x0c\x6d\x61\x6b\x65\x2d\x61"
  "\x63\x63\x65\x73\x73\x22\x02\xa9\x01\x04\x84\x06\x03\x31\x02\x19"
  "\x13\x6c\x65\x78\x69\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x04\x13\x02\xaa\x01\x04\x85\x08\x03\x0b\x32\x02\x1a"
  "\x04\x18\x6f\x75\x74\x70\x75\x74\x2f\x61\x63\x63\x65\x73\x73\x2d"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x33\x02\xab\x01\x04\x83\x04"
  "\x03\x34\x02\x1b\x02\x10\x65\x6d\x70\x74\x79\x2d\x75\x6e\x6d\x61"
  "\x70\x70\x69\x6e\x67\x35\x04\x15\x63\x6f\x6d\x70\x75\x74\x65\x2d"
  "\x73\x75\x62\x73\x74\x69\x74\x75\x74\x69\x6f\x6e\x36\x03\x18\x75"
  "\x6e\x6d\x61\x70\x70\x69\x6e\x67\x2d\x3e\x73\x75\x62\x73\x74\x69"
  "\x74\x75\x74\x69\x6f\x6e\x37\x04\x11\x61\x6c\x70\x68\x61\x2d\x73"
  "\x75\x62\x73\x74\x69\x74\x75\x74\x65\x38\x05\xaf\x01\x0a\x81\x85"
  "\x02\xae\x01\x08\x81\x85\x02\xad\x01\x06\x81\x83\x02\xac\x01\x04"
  "\x83\x04\x09\x15\x39\x02\x1c\x02\x1a\x6d\x61\x6b\x65\x2d\x73\x74"
  "\x72\x6f\x6e\x67\x2d\x65\x71\x2d\x68\x61\x73\x68\x2d\x74\x61\x62"
  "\x6c\x65\x3a\x02\xb0\x01\x04\x82\x02\x03\x3b\x02\x1d\x05\x10\x68"
  "\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x70\x75\x74\x21\x3c\x02"
  "\xb1\x01\x04\x85\x08\x03\x3d\x02\x1e\x05\x0f\x68\x61\x73\x68\x2d"
  "\x74\x61\x62\x6c\x65\x2f\x67\x65\x74\x3e\x03\x1b\x66\x69\x6e\x61"
  "\x6c\x69\x7a\x65\x2d\x6d\x61\x70\x70\x65\x64\x2d\x69\x64\x65\x6e"
  "\x74\x69\x66\x69\x65\x72\x3f\x03\xb4\x01\x08\x81\x85\x02\xb3\x01"
  "\x06\x81\x85\x02\xb2\x01\x04\x83\x04\x07\x0f\x40\x02\x1f\x1c\x63"
  "\x6f\x6d\x70\x75\x74\x65\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74"
  "\x69\x6f\x6e\x2d\x77\x61\x6c\x6b\x65\x72\x41\x02\x04\x0b\x73\x63"
  "\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x42\x02\xb7\x01\x08\x81\x85\x02"
  "\xb6\x01\x06\x81\x89\x02\xb5\x01\x04\x84\x06\x07\x0f\x43\x02\x20"
  "\x03\x0e\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x6e\x61\x6d\x65\x44"
  "\x03\x18\x73\x69\x6e\x67\x6c\x65\x74\x6f\x6e\x2d\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x73\x65\x74\x45\x03\xb9\x01\x06\x81\x85"
  "\x02\xb8\x01\x04\x84\x06\x05\x0d\x46\x02\x21\x03\x11\x61\x73\x73"
  "\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x6c\x75\x65\x47\x03\x10"
  "\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x6e\x61\x6d\x65\x48"
  "\x04\x36\x04\x15\x61\x64\x64\x2d\x74\x6f\x2d\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x2d\x73\x65\x74\x49\x05\xbd\x01\x0a\x81\x85\x02"
  "\xbc\x01\x08\x81\x89\x02\xbb\x01\x06\x81\x85\x02\xba\x01\x04\x84"
  "\x06\x09\x15\x4a\x02\x22\x03\x11\x75\x6e\x61\x73\x73\x69\x67\x6e"
  "\x65\x64\x3f\x2d\x6e\x61\x6d\x65\x4b\x03\x45\x03\xbf\x01\x06\x81"
  "\x85\x02\xbe\x01\x04\x84\x06\x05\x0d\x4c\x02\x23\x04\x14\x6c\x61"
  "\x6d\x62\x64\x61\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x2a"
  "\x2a\x4d\x05\x1c\x63\x6f\x6d\x70\x75\x74\x65\x2d\x73\x75\x62\x73"
  "\x74\x69\x74\x75\x74\x69\x6f\x6e\x2f\x62\x69\x6e\x64\x65\x72\x4e"
  "\x03\xc1\x01\x06\x81\x89\x02\xc0\x01\x04\x84\x06\x05\x0d\x4f\x02"
  "\x24\x04\x16\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x2d\x63\x6f"
  "\x6d\x70\x6f\x6e\x65\x6e\x74\x73\x50\x05\x4e\x03\xc3\x01\x06\x81"
  "\x89\x02\xc2\x01\x04\x84\x06\x05\x0d\x51\x02\x25\x30\x2f\x11\x75"
  "\x6e\x6d\x61\x70\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x52"
  "\x02\x04\x36\x04\x21\x04\x1a\x72\x65\x6d\x6f\x76\x65\x2d\x66\x72"
  "\x6f\x6d\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x73\x65\x74"
  "\x53\x05\x15\x75\x6e\x6d\x61\x70\x70\x69\x6e\x67\x2d\x63\x6f\x6c"
  "\x6c\x69\x73\x69\x6f\x6e\x3f\x54\x05\x17\x73\x74\x6f\x72\x65\x2d"
  "\x75\x6e\x6d\x61\x70\x70\x69\x6e\x67\x2d\x65\x6e\x74\x72\x79\x21"
  "\x55\x04\x05\x6d\x65\x6d\x71\x56\x07\xd4\x01\x24\x81\x8d\x02\xd3"
  "\x01\x22\x81\x8d\x02\xd2\x01\x20\x81\x91\x02\xd1\x01\x1e\x81\x8f"
  "\x02\xd0\x01\x1c\x81\x8d\x02\xcf\x01\x1a\x81\x93\x02\xce\x01\x18"
  "\x81\x91\x02\xcd\x01\x16\x81\x8d\x02\xcc\x01\x14\x81\x8d\x02\xcb"
  "\x01\x12\x81\x93\x02\xca\x01\x10\x81\x91\x02\xc9\x01\x0e\x81\x8d"
  "\x02\xc8\x01\x0c\x81\x89\x02\xc7\x01\x0a\x81\x89\x02\xc6\x01\x08"
  "\x81\x8d\x02\xc5\x01\x06\x81\x87\x02\xc4\x01\x04\x85\x08\x23\x37"
  "\x57\x02\x26\x04\x36\x02\xd7\x01\x08\x81\x87\x02\xd6\x01\x06\x81"
  "\x87\x02\xd5\x01\x04\x83\x04\x07\x0d\x58\x02\x27\x2f\x30\x02\x13"
  "\x6e\x75\x6c\x6c\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x73"
  "\x65\x74\x59\x04\x36\x04\x14\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x2d\x73\x65\x74\x2d\x75\x6e\x69\x6f\x6e\x5a\x04\xe1\x01\x16\xfd"
  "\xff\x03\xe0\x01\x14\xfd\xff\x03\xdf\x01\x12\xfd\xff\x03\xde\x01"
  "\x10\xfd\xff\x03\xdd\x01\x0e\xfd\xff\x03\xdc\x01\x0c\xfd\xff\x03"
  "\xdb\x01\x0a\xff\xff\x03\xda\x01\x08\x81\x87\x02\xd9\x01\x06\x81"
  "\x87\x02\xd8\x01\x04\x83\x04\x15\x21\x5b\x02\x28\x02\x59\x02\xe2"
  "\x01\x04\x84\x06\x03\x5c\x02\x29\x18\x61\x6c\x70\x68\x61\x2d\x73"
  "\x75\x62\x73\x74\x69\x74\x75\x74\x65\x2d\x77\x61\x6c\x6b\x65\x72"
  "\x5d\x02\x04\x42\x02\xe5\x01\x08\x81\x85\x02\xe4\x01\x06\x81\x89"
  "\x02\xe3\x01\x04\x84\x06\x07\x0f\x42\x02\x2a\x03\x44\x03\x03\xe8"
  "\x01\x08\x81\x87\x02\xe7\x01\x06\x81\x85\x02\xe6\x01\x04\x84\x06"
  "\x07\x0f\x44\x02\x2b\x03\x47\x03\x48\x04\x38\x04\x05\xed\x01\x0c"
  "\x81\x89\x02\xec\x01\x0a\x81\x87\x02\xeb\x01\x08\x81\x87\x02\xea"
  "\x01\x06\x81\x85\x02\xe9\x01\x04\x84\x06\x0b\x17\x48\x02\x2c\x03"
  "\x4b\x03\x19\x03\xf0\x01\x08\x81\x87\x02\xef\x01\x06\x81\x85\x02"
  "\xee\x01\x04\x84\x06\x07\x0f\x4b\x02\x2d\x04\x4d\x04\x21\x04\x38"
  "\x05\x0e\x6d\x61\x6b\x65\x2d\x6c\x61\x6d\x62\x64\x61\x2a\x2a\x05"
  "\xf4\x01\x0a\x81\x89\x02\xf3\x01\x08\x81\x89\x02\xf2\x01\x06\x81"
  "\x89\x02\xf1\x01\x04\x84\x06\x09\x15\x4d\x02\x2e\x04\x50\x04\x21"
  "\x04\x1b\x73\x75\x62\x73\x74\x69\x74\x75\x74\x65\x2d\x69\x6e\x2d"
  "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x73\x50\x04\x38\x05"
  "\x20\x06\xf9\x01\x0c\x81\x89\x02\xf8\x01\x0a\x81\x89\x02\xf7\x01"
  "\x08\x81\x89\x02\xf6\x01\x06\x81\x89\x02\xf5\x01\x04\x84\x06\x0b"
  "\x19\x47\x02\x2f\x03\x17\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f"
  "\x6e\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x03\x11\x64\x65"
  "\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d\x74\x65\x78\x74\x04\x38"
  "\x04\x11\x6d\x61\x6b\x65\x2d\x64\x65\x63\x6c\x61\x72\x61\x74\x69"
  "\x6f\x6e\x04\x50\x06\xfe\x01\x0c\x81\x89\x02\xfd\x01\x0a\x81\x87"
  "\x02\xfc\x01\x08\x81\x87\x02\xfb\x01\x06\x81\x85\x02\xfa\x01\x04"
  "\x84\x06\x0b\x19\x20\x02\x30\x04\x21\x04\x1c\x6d\x61\x70\x2d\x64"
  "\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x2d\x69\x64\x65\x6e\x74"
  "\x69\x66\x69\x65\x72\x73\x03\x80\x02\x06\x81\x85\x02\xff\x01\x04"
  "\x84\x06\x05\x0d\x19\x02\x31\x81\x02\x04\x84\x06\x03\x02\x32\x04"
  "\x38\x02\x85\x02\x0a\x81\x89\x02\x84\x02\x08\x81\x87\x02\x83\x02"
  "\x06\x81\x87\x02\x82\x02\x04\x84\x06\x09\x0f\x02\x33\x04\x21\x04"
  "\x38\x03\x8a\x02\x0c\x81\x85\x02\x89\x02\x0a\x81\x89\x02\x88\x02"
  "\x08\x81\x87\x02\x87\x02\x06\x81\x87\x02\x86\x02\x04\x84\x06\x0b"
  "\x13\x21\x02\x34\x03\x0c\x61\x63\x63\x65\x73\x73\x2d\x6e\x61\x6d"
  "\x65\x04\x22\x03\x8c\x02\x06\x81\x85\x02\x8b\x02\x04\x84\x06\x05"
  "\x0d\x22\x02\x35\x30\x2f\x04\x13\x02\x8f\x02\x08\x81\x85\x02\x8e"
  "\x02\x06\x81\x83\x02\x8d\x02\x04\x83\x04\x07\x0f\x13\x02\x36\x03"
  "\x0d\x63\x6f\x6d\x6d\x65\x6e\x74\x2d\x74\x65\x78\x74\x04\x0d\x6d"
  "\x61\x6b\x65\x2d\x63\x6f\x6d\x6d\x65\x6e\x74\x03\x91\x02\x06\x81"
  "\x85\x02\x90\x02\x04\x84\x06\x05\x0d\x5e\x02\x37\x2f\x30\x05\x0d"
  "\x02\x98\x02\x10\x81\x87\x02\x97\x02\x0e\x81\x87\x02\x96\x02\x0c"
  "\x81\x87\x02\x95\x02\x0a\x81\x85\x02\x94\x02\x08\x81\x83\x02\x93"
  "\x02\x06\x81\x83\x02\x92\x02\x04\x83\x04\x0f\x17\x0d\x02\x38\x03"
  "\x10\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2d\x6e\x61\x6d\x65"
  "\x04\x09\x03\x9a\x02\x06\x81\x85\x02\x99\x02\x04\x84\x06\x05\x0d"
  "\x09\x02\x39\x03\x17\x02\x9b\x02\x04\x84\x06\x03\x17\x02\x3a\x30"
  "\x2f\x04\x0f\x02\x9f\x02\x0a\x81\x85\x02\x9e\x02\x08\x81\x85\x02"
  "\x9d\x02\x06\x81\x83\x02\x9c\x02\x04\x83\x04\x09\x11\x0f\x02\x3b"
  "\xa0\x02\x04\x82\x02\x03\x5f\x02\x3c\x02\x16\x6d\x61\x6b\x65\x2d"
  "\x65\x71\x75\x61\x6c\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x02\xa1\x02\x04\x82\x02\x03\x60\x02\x3d\x02\x3a\x02\xa2\x02\x04"
  "\x82\x02\x03\x61\x02\x3e\x02\x3a\x02\xa3\x02\x04\x82\x02\x03\x3a"
  "\x02\x3f\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x62\xa4"
  "\x02\x04\x83\x04\x03\x63\x02\x40\x62\xa5\x02\x04\x83\x04\x03\x64"
  "\x02\x41\x62\xa6\x02\x04\x83\x04\x03\x65\x02\x42\x62\xa7\x02\x04"
  "\x83\x04\x03\x66\x02\x43\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73"
  "\x65\x74\x21\x67\x02\xa8\x02\x04\x84\x06\x03\x68\x02\x44\x62\x0f"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e"
  "\x74\x61\x67\x2e\x31\x69\x02\xac\x02\x0a\x81\x85\x02\xab\x02\x08"
  "\x81\x83\x02\xaa\x02\x06\x81\x83\x02\xa9\x02\x04\x83\x04\x09\x12"
  "\x6a\x02\x45\x67\x62\x11\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69"
  "\x72\x2d\x63\x6f\x6e\x73\x14\x12\x2a\x72\x65\x6e\x61\x6d\x65\x2d"
  "\x64\x61\x74\x61\x62\x61\x73\x65\x2a\x67\x02\xb3\x02\x10\x81\x83"
  "\x02\xb2\x02\x0e\x81\x83\x02\xb1\x02\x0c\x81\x81\x02\xb0\x02\x0a"
  "\x81\x81\x02\xaf\x02\x08\x81\x81\x02\xae\x02\x06\x82\x02\xad\x02"
  "\x04\x82\x02\x0f\x1a\x6b\x02\x46\x62\x67\x02\x05\x3e\x03\x23\x05"
  "\x3c\x03\x25\x03\x27\x06\xbe\x02\x18\x81\x8b\x02\xbd\x02\x16\x81"
  "\x91\x02\xbc\x02\x14\x81\x91\x02\xbb\x02\x12\x81\x8b\x02\xba\x02"
  "\x10\x81\x8f\x02\xb9\x02\x0e\x81\x8d\x02\xb8\x02\x0c\x81\x8b\x02"
  "\xb7\x02\x0a\x81\x89\x02\xb6\x02\x08\x81\x85\x02\xb5\x02\x06\x81"
  "\x85\x02\xb4\x02\x04\x84\x06\x17\x2a\x6c\x02\x47\x02\x2e\x0d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x6d\x1e\x02\x0f\x6d"
  "\x61\x6b\x65\x2d\x72\x65\x6e\x61\x6d\x65\x2d\x69\x64\x6e\x03\x25"
  "\x03\x23\x03\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69"
  "\x6e\x67\x03\x06\x66\x6f\x72\x63\x65\x25\x06\x26\x03\x27\x08\xc7"
  "\x02\x14\x81\x8b\x02\xc6\x02\x12\x81\x89\x02\xc5\x02\x10\x81\x89"
  "\x02\xc4\x02\x0e\x81\x87\x02\xc3\x02\x0c\x81\x85\x02\xc2\x02\x0a"
  "\x81\x83\x02\xc1\x02\x08\x81\x83\x02\xc0\x02\x06\x83\x04\xbf\x02"
  "\x04\x81\x83\x02\x13\x2b\x27\x02\x48\x02\x6e\x04\x12\x72\x65\x6e"
  "\x61\x6d\x65\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x26\x03"
  "\xca\x02\x08\x81\x85\x02\xc9\x02\x06\x81\x81\x02\xc8\x02\x04\x82"
  "\x02\x07\x0f\x6f\x02\x49\x2f\x52\x6d\x1e\x62\x67\x02\x05\x3e\x04"
  "\x19\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65"
  "\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x70\x03\x23\x04\xd2\x02\x12"
  "\x81\x85\x02\xd1\x02\x10\x81\x83\x02\xd0\x02\x0e\x81\x83\x02\xcf"
  "\x02\x0c\x81\x85\x02\xce\x02\x0a\x81\x85\x02\xcd\x02\x08\x81\x89"
  "\x02\xcc\x02\x06\x81\x89\x02\xcb\x02\x04\x83\x04\x11\x26\x71\x02"
  "\x4a\x2f\x30\x3f\x6d\x1e\x62\x67\x02\x05\x3e\x04\x70\x03\x25\x03"
  "\x11\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c"
  "\x3f\x04\x1a\x6d\x61\x70\x2d\x75\x6e\x69\x6e\x74\x65\x72\x6e\x65"
  "\x64\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65\x72\x70\x04\x14\x6d"
  "\x61\x70\x2d\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x79\x6d\x62"
  "\x6f\x6c\x6d\x07\xdd\x02\x18\x81\x85\x02\xdc\x02\x16\x81\x85\x02"
  "\xdb\x02\x14\x81\x85\x02\xda\x02\x12\x81\x87\x02\xd9\x02\x10\x81"
  "\x83\x02\xd8\x02\x0e\x81\x83\x02\xd7\x02\x0c\x81\x85\x02\xd6\x02"
  "\x0a\x81\x85\x02\xd5\x02\x08\x81\x89\x02\xd4\x02\x06\x81\x89\x02"
  "\xd3\x02\x04\x83\x04\x17\x33\x25\x02\x4b\x02\x2e\x06\x07\x73\x79"
  "\x6d\x62\x6f\x6c\x72\x02\xde\x02\x04\x84\x06\x03\x0a\x73\x02\x4c"
  "\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x30\x62\x67\x02\x03\x23\x05"
  "\x3e\x04\x05\x61\x73\x73\x76\x05\x13\x6d\x61\x70\x2d\x69\x6e\x64"
  "\x65\x78\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x62\x04\x05\x61\x73"
  "\x73\x71\x3e\x03\x07\x6c\x65\x6e\x67\x74\x68\x05\x3c\x08\xed\x02"
  "\x20\x81\x8d\x02\xec\x02\x1e\x81\x91\x02\xeb\x02\x1c\x81\x8f\x02"
  "\xea\x02\x1a\x81\x8f\x02\xe9\x02\x18\x81\x8f\x02\xe8\x02\x16\x81"
  "\x8d\x02\xe7\x02\x14\x81\x93\x02\xe6\x02\x12\x81\x8d\x02\xe5\x02"
  "\x10\x81\x8f\x02\xe4\x02\x0e\x81\x8b\x02\xe3\x02\x0c\x81\x89\x02"
  "\xe2\x02\x0a\x81\x87\x02\xe1\x02\x08\x81\x87\x02\xe0\x02\x06\x81"
  "\x85\x02\xdf\x02\x04\x84\x06\x1f\x39\x3c\x02\x4d\x02\x2d\x02\x2e"
  "\x08\x72\x02\xee\x02\x04\x85\x08\x03\x0b\x72\x02\x4e\xef\x02\x04"
  "\x82\x02\x03\x23\x02\x4f\x03\x52\x02\xf1\x02\x06\x81\x83\x02\xf0"
  "\x02\x04\x83\x04\x05\x0c\x74\x02\x50\x30\x2f\x04\x3e\x04\x5a\x03"
  "\xf9\x02\x12\x81\x87\x02\xf8\x02\x10\x81\x85\x02\xf7\x02\x0e\x81"
  "\x85\x02\xf6\x02\x0c\x81\x89\x02\xf5\x02\x0a\x81\x85\x02\xf4\x02"
  "\x08\x81\x89\x02\xf3\x02\x06\x81\x89\x02\xf2\x02\x04\x84\x06\x11"
  "\x1b\x75\x02\x51\x04\x3e\x03\x52\x03\xfc\x02\x08\x81\x85\x02\xfb"
  "\x02\x06\x81\x85\x02\xfa\x02\x04\x84\x06\x07\x0f\x3e\x02\x52\x2f"
  "\x04\x16\x64\x65\x6c\x65\x74\x65\x2d\x6d\x61\x74\x63\x68\x69\x6e"
  "\x67\x2d\x69\x74\x65\x6d\x73\x04\x56\x03\xff\x02\x08\x81\x87\x02"
  "\xfe\x02\x06\x81\x85\x02\xfd\x02\x04\x84\x06\x07\x10\x56\x02\x53"
  "\x2f\x30\x04\x13\x66\x69\x6e\x64\x2d\x6d\x61\x74\x63\x68\x69\x6e"
  "\x67\x2d\x69\x74\x65\x6d\x02\x83\x03\x0a\x81\x85\x02\x82\x03\x08"
  "\x81\x85\x02\x81\x03\x06\x81\x85\x02\x80\x03\x04\x85\x08\x09\x12"
  "\x30\x53\x2f\x2f\x69\x30\x04\x56\x04\x3e\x04\x75\x04\x74\x04\x23"
  "\x04\x72\x04\x3c\x04\x73\x04\x25\x04\x71\x04\x6f\x04\x27\x06\x6c"
  "\x04\x6b\x04\x6a\x04\x11\x54\x53\x49\x5a\x45\x59\x62\x70\x6d\x3f"
  "\x52\x14\x6d\x61\x6b\x65\x2d\x6e\x61\x6d\x65\x2d\x67\x65\x6e\x65"
  "\x72\x61\x74\x6f\x72\x1c\x72\x65\x6e\x61\x6d\x65\x2d\x74\x6f\x70"
  "\x2d\x6c\x65\x76\x65\x6c\x2d\x69\x64\x65\x6e\x74\x69\x66\x69\x65"
  "\x72\x26\x6e\x11\x72\x65\x6e\x61\x6d\x65\x2d\x64\x61\x74\x61\x62"
  "\x61\x73\x65\x3f\x11\x18\x69\x6e\x69\x74\x69\x61\x6c\x2d\x72\x65"
  "\x6e\x61\x6d\x65\x2d\x64\x61\x74\x61\x62\x61\x73\x65\x22\x73\x65"
  "\x74\x2d\x72\x65\x6e\x61\x6d\x65\x2d\x64\x61\x74\x61\x62\x61\x73"
  "\x65\x2f\x66\x72\x61\x6d\x65\x2d\x6e\x75\x6d\x62\x65\x72\x21\x19"
  "\x72\x65\x6e\x61\x6d\x65\x2d\x64\x61\x74\x61\x62\x61\x73\x65\x2f"
  "\x69\x64\x2d\x74\x61\x62\x6c\x65\x20\x72\x65\x6e\x61\x6d\x65\x2d"
  "\x64\x61\x74\x61\x62\x61\x73\x65\x2f\x75\x6e\x6d\x61\x70\x70\x69"
  "\x6e\x67\x2d\x74\x61\x62\x6c\x65\x1e\x72\x65\x6e\x61\x6d\x65\x2d"
  "\x64\x61\x74\x61\x62\x61\x73\x65\x2f\x6d\x61\x70\x70\x69\x6e\x67"
  "\x2d\x74\x61\x62\x6c\x65\x1d\x72\x65\x6e\x61\x6d\x65\x2d\x64\x61"
  "\x74\x61\x62\x61\x73\x65\x2f\x66\x72\x61\x6d\x65\x2d\x6e\x75\x6d"
  "\x62\x65\x72\x68\x04\x66\x04\x65\x04\x64\x04\x63\x04\x14\x72\x74"
  "\x64\x3a\x72\x65\x6e\x61\x6d\x65\x2d\x64\x61\x74\x61\x62\x61\x73"
  "\x65\x75\x10\x72\x65\x6e\x61\x6d\x65\x2d\x64\x61\x74\x61\x62\x61"
  "\x73\x65\x0d\x66\x72\x61\x6d\x65\x2d\x6e\x75\x6d\x62\x65\x72\x0e"
  "\x6d\x61\x70\x70\x69\x6e\x67\x2d\x74\x61\x62\x6c\x65\x10\x75\x6e"
  "\x6d\x61\x70\x70\x69\x6e\x67\x2d\x74\x61\x62\x6c\x65\x09\x69\x64"
  "\x2d\x74\x61\x62\x6c\x65\x5f\x04\x60\x04\x61\x04\x3a\x04\x5d\x67"
  "\x1a\x61\x6c\x70\x68\x61\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74"
  "\x65\x2f\x73\x65\x71\x75\x65\x6e\x63\x65\x74\x0c\x64\x65\x63\x6c"
  "\x61\x72\x61\x74\x69\x6f\x6e\x1d\x61\x6c\x70\x68\x61\x2d\x73\x75"
  "\x62\x73\x74\x69\x74\x75\x74\x65\x2f\x64\x69\x73\x6a\x75\x6e\x63"
  "\x74\x69\x6f\x6e\x73\x17\x61\x6c\x70\x68\x61\x2d\x73\x75\x62\x73"
  "\x74\x69\x74\x75\x74\x65\x2f\x64\x65\x6c\x61\x79\x72\x0f\x04\x1c"
  "\x61\x6c\x70\x68\x61\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x65"
  "\x2f\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x71\x17\x04\x1d\x61"
  "\x6c\x70\x68\x61\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x65\x2f"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x70\x09\x04\x19\x61"
  "\x6c\x70\x68\x61\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x65\x2f"
  "\x63\x6f\x6d\x6d\x65\x6e\x74\x6f\x0d\x04\x1d\x61\x6c\x70\x68\x61"
  "\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x65\x2f\x63\x6f\x6d\x62"
  "\x69\x6e\x61\x74\x69\x6f\x6e\x6e\x5e\x04\x18\x61\x6c\x70\x68\x61"
  "\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x65\x2f\x61\x63\x63\x65"
  "\x73\x73\x6d\x13\x04\x22\x04\x41\x18\x63\x6f\x6d\x62\x69\x6e\x61"
  "\x74\x6f\x72\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x69\x6f\x6e"
  "\x6c\x14\x73\x69\x6d\x70\x6c\x65\x2d\x73\x75\x62\x73\x74\x69\x74"
  "\x75\x74\x69\x6f\x6e\x6b\x19\x61\x6c\x70\x68\x61\x2d\x73\x75\x62"
  "\x73\x74\x69\x74\x75\x74\x65\x2f\x64\x65\x66\x61\x75\x6c\x74\x6a"
  "\x50\x1d\x61\x6c\x70\x68\x61\x2d\x73\x75\x62\x73\x74\x69\x74\x75"
  "\x74\x65\x2f\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x69\x1c"
  "\x61\x6c\x70\x68\x61\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x65"
  "\x2f\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x68\x18\x61\x6c\x70"
  "\x68\x61\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x65\x2f\x6c\x61"
  "\x6d\x62\x64\x61\x67\x1d\x61\x6c\x70\x68\x61\x2d\x73\x75\x62\x73"
  "\x74\x69\x74\x75\x74\x65\x2f\x75\x6e\x61\x73\x73\x69\x67\x6e\x65"
  "\x64\x3f\x66\x1c\x61\x6c\x70\x68\x61\x2d\x73\x75\x62\x73\x74\x69"
  "\x74\x75\x74\x65\x2f\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x65"
  "\x1a\x61\x6c\x70\x68\x61\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74"
  "\x65\x2f\x76\x61\x72\x69\x61\x62\x6c\x65\x64\x38\x0c\x21\x04\x04"
  "\x04\x19\x04\x20\x04\x47\x04\x4d\x04\x4b\x04\x48\x04\x44\x04\x42"
  "\x04\x0c\x07\x61\x63\x63\x65\x73\x73\x0b\x61\x73\x73\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x0c\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e"
  "\x08\x63\x6f\x6d\x6d\x65\x6e\x74\x0c\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x61\x6c\x0b\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x06"
  "\x64\x65\x6c\x61\x79\x0c\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f"
  "\x6e\x07\x6c\x61\x6d\x62\x64\x61\x0b\x6f\x70\x65\x6e\x2d\x62\x6c"
  "\x6f\x63\x6b\x09\x73\x65\x71\x75\x65\x6e\x63\x65\x0c\x75\x6e\x61"
  "\x73\x73\x69\x67\x6e\x65\x64\x3f\x09\x76\x61\x72\x69\x61\x62\x6c"
  "\x65\x1e\x63\x6f\x6d\x70\x75\x74\x65\x2d\x73\x75\x62\x73\x74\x69"
  "\x74\x75\x74\x69\x6f\x6e\x2f\x73\x65\x71\x75\x65\x6e\x63\x65\x63"
  "\x1d\x63\x6f\x6d\x70\x75\x74\x65\x2d\x73\x75\x62\x73\x74\x69\x74"
  "\x75\x74\x69\x6f\x6e\x2f\x64\x65\x66\x61\x75\x6c\x74\x62\x5c\x04"
  "\x21\x63\x6f\x6d\x70\x75\x74\x65\x2d\x73\x75\x62\x73\x74\x69\x74"
  "\x75\x74\x69\x6f\x6e\x2f\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f"
  "\x6e\x61\x1b\x63\x6f\x6d\x70\x75\x74\x65\x2d\x73\x75\x62\x73\x74"
  "\x69\x74\x75\x74\x69\x6f\x6e\x2f\x64\x65\x6c\x61\x79\x60\x20\x63"
  "\x6f\x6d\x70\x75\x74\x65\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74"
  "\x69\x6f\x6e\x2f\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x5f\x21"
  "\x63\x6f\x6d\x70\x75\x74\x65\x2d\x73\x75\x62\x73\x74\x69\x74\x75"
  "\x74\x69\x6f\x6e\x2f\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c"
  "\x5e\x1d\x63\x6f\x6d\x70\x75\x74\x65\x2d\x73\x75\x62\x73\x74\x69"
  "\x74\x75\x74\x69\x6f\x6e\x2f\x63\x6f\x6d\x6d\x65\x6e\x74\x5d\x21"
  "\x63\x6f\x6d\x70\x75\x74\x65\x2d\x73\x75\x62\x73\x74\x69\x74\x75"
  "\x74\x69\x6f\x6e\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e"
  "\x5c\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x1c\x63\x6f\x6d\x70\x75\x74\x65\x2d\x73\x75\x62\x73\x74"
  "\x69\x74\x75\x74\x69\x6f\x6e\x2f\x61\x63\x63\x65\x73\x73\x5a\x24"
  "\x63\x6f\x6d\x70\x75\x74\x65\x2d\x73\x75\x62\x73\x74\x69\x74\x75"
  "\x74\x69\x6f\x6e\x2f\x73\x75\x62\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x73\x59\x23\x63\x6f\x6d\x70\x75\x74\x65\x2d\x73\x75\x62"
  "\x73\x74\x69\x74\x75\x74\x69\x6f\x6e\x2f\x73\x75\x62\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x56\x4e\x20\x63\x6f\x6d\x70\x75\x74"
  "\x65\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x69\x6f\x6e\x2f\x6f"
  "\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x54\x1c\x63\x6f\x6d\x70\x75"
  "\x74\x65\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x69\x6f\x6e\x2f"
  "\x6c\x61\x6d\x62\x64\x61\x53\x21\x63\x6f\x6d\x70\x75\x74\x65\x2d"
  "\x73\x75\x62\x73\x74\x69\x74\x75\x74\x69\x6f\x6e\x2f\x75\x6e\x61"
  "\x73\x73\x69\x67\x6e\x65\x64\x3f\x52\x20\x63\x6f\x6d\x70\x75\x74"
  "\x65\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x69\x6f\x6e\x2f\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x50\x1e\x63\x6f\x6d\x70\x75"
  "\x74\x65\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x69\x6f\x6e\x2f"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x4e\x36\x37\x55\x35\x1f\x6f\x75"
  "\x74\x70\x75\x74\x2f\x70\x6f\x73\x74\x2d\x70\x72\x6f\x63\x65\x73"
  "\x73\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x15\x6c\x61\x6d"
  "\x62\x64\x61\x2d\x74\x61\x67\x3a\x66\x6c\x75\x69\x64\x2d\x6c\x65"
  "\x74\x1d\x19\x6f\x75\x74\x70\x75\x74\x2f\x72\x75\x6e\x74\x69\x6d"
  "\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x19\x6f\x75\x74\x70"
  "\x75\x74\x2f\x61\x63\x63\x65\x73\x73\x2d\x61\x73\x73\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x33\x17\x6f\x75\x74\x70\x75\x74\x2f\x74\x68\x65"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x1a\x6f\x75\x74"
  "\x70\x75\x74\x2f\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d\x73\x65"
  "\x71\x75\x65\x6e\x63\x65\x12\x6f\x75\x74\x70\x75\x74\x2f\x64\x65"
  "\x66\x69\x6e\x69\x74\x69\x6f\x6e\x0c\x6f\x75\x74\x70\x75\x74\x2f"
  "\x62\x6f\x64\x79\x0e\x6f\x75\x74\x70\x75\x74\x2f\x6c\x65\x74\x72"
  "\x65\x63\x24\x2c\x28\x17\x6f\x75\x74\x70\x75\x74\x2f\x75\x6e\x61"
  "\x73\x73\x69\x67\x6e\x65\x64\x2d\x74\x65\x73\x74\x0d\x6f\x75\x74"
  "\x70\x75\x74\x2f\x64\x65\x6c\x61\x79\x15\x0e\x6f\x75\x74\x70\x75"
  "\x74\x2f\x6c\x61\x6d\x62\x64\x61\x1e\x10\x6f\x75\x74\x70\x75\x74"
  "\x2f\x73\x65\x71\x75\x65\x6e\x63\x65\x13\x6f\x75\x74\x70\x75\x74"
  "\x2f\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x13\x6f\x75\x74"
  "\x70\x75\x74\x2f\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x23"
  "\x6f\x75\x74\x70\x75\x74\x2f\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c"
  "\x2d\x73\x79\x6e\x74\x61\x78\x2d\x64\x65\x66\x69\x6e\x69\x74\x69"
  "\x6f\x6e\x1c\x6f\x75\x74\x70\x75\x74\x2f\x74\x6f\x70\x2d\x6c\x65"
  "\x76\x65\x6c\x2d\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x12\x6f"
  "\x75\x74\x70\x75\x74\x2f\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x10\x6f\x75\x74\x70\x75\x74\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x10\x6f\x75\x74\x70\x75\x74\x2f\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x11\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x65\x76\x61"
  "\x6c\x2a\x5b\x04\x58\x04\x57\x04\x51\x04\x4f\x04\x4c\x04\x4a\x04"
  "\x46\x04\x43\x04\x40\x04\x3d\x04\x3b\x04\x39\x04\x17\x23\x5b\x66"
  "\x6c\x75\x69\x64\x2d\x6c\x65\x74\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x5d\x11\x23\x5b\x6c\x65\x74\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x5d\x15\x23\x5b\x75\x6e\x6e\x61\x6d\x65\x64\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x5d\x34\x04\x32\x04\x31\x04\x2a"
  "\x04\x2b\x04\x2e\x04\x2d\x04\x29\x04\x1f\x04\x1c\x04\x1b\x04\x1a"
  "\x04\x18\x04\x0a\x04\x16\x04\x14\x04\x12\x04\x10\x04\x0e\x04\x0c"
  "\x04\x0b\x04\x04\x04\x04\x04\x2a\x05\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x06\x11\x6d\x61\x6b\x65\x2d"
  "\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63"
  "\x68\x2d\x74\x61\x67\x04\x23\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65"
  "\x2d\x62\x79\x2d\x69\x6e\x64\x65\x78\x05\x13\x61\x63\x63\x65\x73"
  "\x73\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x1b\x63\x6f"
  "\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x73\x75\x62\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x73\x13\x63\x6f\x6d\x6d\x65\x6e\x74"
  "\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x1b\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x61\x6c\x2d\x73\x75\x62\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x73\x11\x64\x65\x66\x69\x6e\x69\x74\x69\x6f"
  "\x6e\x2d\x76\x61\x6c\x75\x65\x11\x64\x65\x6c\x61\x79\x2d\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x1b\x64\x69\x73\x6a\x75\x6e\x63"
  "\x74\x69\x6f\x6e\x2d\x73\x75\x62\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x73\x11\x73\x65\x71\x75\x65\x6e\x63\x65\x2d\x61\x63\x74"
  "\x69\x6f\x6e\x73\x4e\x52\x63\x54\x53\x61\x60\x5f\x5e\x5d\x5c\x50"
  "\x5a\x62\x11\x64\x66\x74\x68\x67\x73\x72\x71\x69\x70\x6f\x6e\x65"
  "\x6d\x6a\x75\x28\x03\x56\x03\x59\x04\x12\x6d\x61\x6b\x65\x2d\x73"
  "\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x65\x72\x04\x6b\x04\x6c\x06"
  "\x69\xd4\x01\x80\x80\x04\x68\xd2\x01\x81\x81\x02\x67\xd0\x01\x81"
  "\x81\x02\x66\xce\x01\x81\x87\x02\x65\xcc\x01\x81\x8b\x02\x64\xca"
  "\x01\x81\x85\x02\x63\xc8\x01\x81\x89\x02\x62\xc6\x01\x81\x83\x02"
  "\x61\xc4\x01\x81\x85\x02\x60\xc2\x01\x81\x83\x02\x5f\xc0\x01\x81"
  "\x87\x02\x5e\xbe\x01\x81\x83\x02\x5d\xbc\x01\x81\x87\x02\x5c\xba"
  "\x01\x81\x83\x02\x5b\xb8\x01\x81\x85\x02\x5a\xb6\x01\x81\x83\x02"
  "\x59\xb4\x01\x81\x85\x02\x58\xb2\x01\x81\x87\x02\x57\xb0\x01\x81"
  "\x83\x02\x56\xae\x01\x81\x83\x02\x55\xac\x01\x81\x85\x02\x54\xaa"
  "\x01\x81\x83\x02\x53\xa8\x01\x81\x85\x02\x52\xa6\x01\x81\x89\x02"
  "\x51\xa4\x01\x81\x89\x02\x50\xa2\x01\x81\x89\x02\x4f\xa0\x01\x81"
  "\x89\x02\x4e\x9e\x01\x81\x89\x02\x4d\x9c\x01\x81\x89\x02\x4c\x9a"
  "\x01\x81\x89\x02\x4b\x98\x01\x81\x89\x02\x4a\x96\x01\x81\x89\x02"
  "\x49\x94\x01\x81\x89\x02\x48\x92\x01\x81\x89\x02\x47\x90\x01\x81"
  "\x89\x02\x46\x8e\x01\x81\x89\x02\x45\x8c\x01\x81\x89\x02\x44\x8a"
  "\x01\x81\x87\x02\x43\x88\x01\x81\x83\x02\x42\x86\x01\x81\x85\x02"
  "\x41\x84\x01\x81\x89\x02\x40\x82\x01\x81\x87\x02\x3f\x80\x01\x81"
  "\x83\x02\x3e\x7e\x81\x85\x02\x3d\x7c\x81\x87\x02\x3c\x7a\x81\x83"
  "\x02\x3b\x78\x81\x85\x02\x3a\x76\x81\x87\x02\x39\x74\x81\x83\x02"
  "\x38\x72\x81\x85\x02\x37\x70\x81\x87\x02\x36\x6e\x81\x83\x02\x35"
  "\x6c\x81\x85\x02\x34\x6a\x81\x87\x02\x33\x68\x81\x83\x02\x32\x66"
  "\x81\x85\x02\x31\x64\x81\x87\x02\x30\x62\x81\x83\x02\x2f\x60\x81"
  "\x85\x02\x2e\x5e\x81\x87\x02\x2d\x5c\x81\x83\x02\x2c\x5a\x81\x87"
  "\x02\x2b\x58\x81\x83\x02\x2a\x56\x81\x85\x02\x29\x54\x81\x83\x02"
  "\x28\x52\x81\x89\x02\x27\x50\x81\x89\x02\x26\x4e\x81\x89\x02\x25"
  "\x4c\x81\x89\x02\x24\x4a\x81\x89\x02\x23\x48\x81\x89\x02\x22\x46"
  "\x81\x89\x02\x21\x44\x81\x89\x02\x20\x42\x81\x89\x02\x1f\x40\x81"
  "\x89\x02\x1e\x3e\x81\x89\x02\x1d\x3c\x81\x89\x02\x1c\x3a\x81\x89"
  "\x02\x1b\x38\x81\x87\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x85\x02"
  "\x18\x32\x81\x83\x02\x17\x30\x81\x85\x02\x16\x2e\x81\x87\x02\x15"
  "\x2c\x81\x83\x02\x14\x2a\x81\x85\x02\x13\x28\x81\x87\x02\x12\x26"
  "\x81\x83\x02\x11\x24\x81\x85\x02\x10\x22\x81\x87\x02\x0f\x20\x81"
  "\x83\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x87\x02\x0c\x1a\x81\x83"
  "\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x87\x02\x09\x14\x81\x83\x02"
  "\x08\x12\x81\x85\x02\x07\x10\x81\x87\x02\x06\x0e\x81\x83\x02\x05"
  "\x0c\x81\x85\x02\x04\x0a\x81\x87\x02\x03\x08\x81\x83\x02\x02\x06"
  "\x81\x87\x02\x01\x04\x81\x83\x02\xd3\x01\xd5\x02";

SCHEME_OBJECT *
syntax_output_so_data_bf90b2fa0f29b253 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_syntax_output_so_data_bf90b2fa0f29b253 [0]))), (sizeof (prog_syntax_output_so_data_bf90b2fa0f29b253)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_118]));
}

DECLARE_COMPILED_DATA_NS ("syntax-output.so", syntax_output_so_data_bf90b2fa0f29b253)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("syntax-output.so", "d8d446cc883e52a8")
