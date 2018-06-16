/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:09-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 11
#define DEBUGGING_LABEL_1_2 10
#define OBJECT_1_1 9
#define OBJECT_1_0 8
#define FREE_REFERENCE_1_0 7
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto compiler_compiled_code_pathname_type_0;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_compiled_code_pathname_type_4)
DEFLABEL (compiler_compiled_code_pathname_type_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_1_1]);
  goto pop_return;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_1_0]);
  goto pop_return;

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_6;

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
asstop_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto compiler_file_output_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_file_output_3)
DEFLABEL (compiler_file_output_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 8
#define DEBUGGING_LABEL_3_2 7
#define EXECUTE_CACHE_3_5 5
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto compiler_output__procedure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_output__procedure_3)
DEFLABEL (compiler_output__procedure_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 5
#define DEBUGGING_LABEL_4_2 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto compiler_output__compiled_expression_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_output__compiled_expression_3)
DEFLABEL (compiler_output__compiled_expression_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 5
#define DEBUGGING_LABEL_5_2 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto compile_scode_file_hook_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_scode_file_hook_3)
DEFLABEL (compile_scode_file_hook_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 5
#define DEBUGGING_LABEL_6_2 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto compile_scode_no_file_hook_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_scode_no_file_hook_3)
DEFLABEL (compile_scode_no_file_hook_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 5
#define DEBUGGING_LABEL_7_2 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto compile_scode_recursive_hook_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_scode_recursive_hook_3)
DEFLABEL (compile_scode_recursive_hook_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_7 5
#define LABEL_8_5 7
#define LABEL_8_8 9
#define LABEL_8_11 11
#define ENVIRONMENT_LABEL_8_3 22
#define DEBUGGING_LABEL_8_2 21
#define EXECUTE_CACHE_8_10 13
#define EXECUTE_CACHE_8_9 15
#define EXECUTE_CACHE_8_6 17
#define FREE_REFERENCE_8_0 20
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd5;
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
      goto assemble_link_3;

    case 1:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_8_11);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (assemble_link_7)
DEFLABEL (assemble_link_3)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_7);

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_8);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_9;
  Wrd6 = Wrd10;

DEFLABEL (label_8)
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_11])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_7 5
#define LABEL_9_8 7
#define LABEL_9_5 9
#define LABEL_9_6 11
#define LABEL_9_10 13
#define LABEL_9_11 15
#define LABEL_9_13 17
#define ENVIRONMENT_LABEL_9_3 35
#define DEBUGGING_LABEL_9_2 34
#define EXECUTE_CACHE_9_16 19
#define EXECUTE_CACHE_9_17 21
#define EXECUTE_CACHE_9_15 23
#define EXECUTE_CACHE_9_14 25
#define EXECUTE_CACHE_9_12 27
#define EXECUTE_CACHE_9_9 29
#define FREE_REFERENCE_9_1 32
#define FREE_REFERENCE_9_0 33
#define FREE_REFERENCES_LABEL_9_0 18
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_9_4);
      goto wrap_lap_5;

    case 1:
      current_block = (Rpc - LABEL_9_7);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_9_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_9_13);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wrap_lap_10)
DEFLABEL (wrap_lap_5)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_15;
  Wrd11 = Wrd15;

DEFLABEL (label_14)
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_13);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_17]));

DEFLABEL (label_11)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_13;
  Wrd25 = Wrd29;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_8])), (Wrd26.pObj));

DEFLABEL (label_8)
  (Wrd25.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_7])), (Wrd12.pObj));

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_7 5
#define TAG_10_8 1
#define LABEL_10_5 7
#define TAG_10_6 2
#define LABEL_10_10 9
#define LABEL_10_11 11
#define LABEL_10_12 13
#define ENVIRONMENT_LABEL_10_3 24
#define DEBUGGING_LABEL_10_2 23
#define OBJECT_10_1 22
#define OBJECT_10_0 21
#define EXECUTE_CACHE_10_9 15
#define FREE_REFERENCE_10_0 18
#define FREE_ASSIGNMENT_10_0 20
#define FREE_REFERENCES_LABEL_10_0 14
#define NUMBER_OF_LINKER_SECTIONS_10_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_10_4);
      goto bind_assembler_linker_top_level_variables_9;

    case 1:
      current_block = (Rpc - LABEL_10_7);
      goto lambda_17;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto swapB_16;

    case 3:
      current_block = (Rpc - LABEL_10_10);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_10_11);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_10_12);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bind_assembler_linker_top_level_variables_15)
DEFLABEL (bind_assembler_linker_top_level_variables_9)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 1;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  ((Wrd19.pObj) [2]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_7])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd20.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_10_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_16)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (swapB_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  Wrd5 = Wrd9;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_21)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_10_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_20;

DEFLABEL (label_19)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_10_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_19;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_12])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_13)
  goto label_18;

DEFLABEL (label_23)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_10_11])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_12)
  goto label_21;

DEFLABEL (label_26)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_25;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_10_10])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_7 5
#define TAG_11_8 1
#define LABEL_11_5 7
#define TAG_11_6 2
#define LABEL_11_10 9
#define LABEL_11_11 11
#define LABEL_11_12 13
#define LABEL_11_13 15
#define LABEL_11_14 17
#define LABEL_11_15 19
#define LABEL_11_16 21
#define LABEL_11_17 23
#define LABEL_11_18 25
#define LABEL_11_19 27
#define LABEL_11_20 29
#define LABEL_11_21 31
#define LABEL_11_22 33
#define LABEL_11_23 35
#define LABEL_11_24 37
#define LABEL_11_25 39
#define LABEL_11_26 41
#define LABEL_11_27 43
#define LABEL_11_28 45
#define LABEL_11_29 47
#define LABEL_11_30 49
#define LABEL_11_31 51
#define LABEL_11_32 53
#define LABEL_11_33 55
#define LABEL_11_34 57
#define LABEL_11_35 59
#define LABEL_11_36 61
#define LABEL_11_37 63
#define LABEL_11_38 65
#define LABEL_11_39 67
#define LABEL_11_40 69
#define LABEL_11_41 71
#define LABEL_11_42 73
#define LABEL_11_43 75
#define LABEL_11_44 77
#define LABEL_11_45 79
#define LABEL_11_46 81
#define LABEL_11_47 83
#define LABEL_11_48 85
#define LABEL_11_49 87
#define LABEL_11_50 89
#define LABEL_11_51 91
#define LABEL_11_52 93
#define LABEL_11_53 95
#define LABEL_11_54 97
#define ENVIRONMENT_LABEL_11_3 135
#define DEBUGGING_LABEL_11_2 134
#define OBJECT_11_0 133
#define EXECUTE_CACHE_11_9 99
#define FREE_REFERENCE_11_14 102
#define FREE_REFERENCE_11_13 103
#define FREE_REFERENCE_11_12 104
#define FREE_REFERENCE_11_11 105
#define FREE_REFERENCE_11_10 106
#define FREE_REFERENCE_11_9 107
#define FREE_REFERENCE_11_8 108
#define FREE_REFERENCE_11_7 109
#define FREE_REFERENCE_11_6 110
#define FREE_REFERENCE_11_5 111
#define FREE_REFERENCE_11_4 112
#define FREE_REFERENCE_11_3 113
#define FREE_REFERENCE_11_2 114
#define FREE_REFERENCE_11_1 115
#define FREE_REFERENCE_11_0 116
#define FREE_ASSIGNMENT_11_14 118
#define FREE_ASSIGNMENT_11_13 119
#define FREE_ASSIGNMENT_11_12 120
#define FREE_ASSIGNMENT_11_11 121
#define FREE_ASSIGNMENT_11_10 122
#define FREE_ASSIGNMENT_11_9 123
#define FREE_ASSIGNMENT_11_8 124
#define FREE_ASSIGNMENT_11_7 125
#define FREE_ASSIGNMENT_11_6 126
#define FREE_ASSIGNMENT_11_5 127
#define FREE_ASSIGNMENT_11_4 128
#define FREE_ASSIGNMENT_11_3 129
#define FREE_ASSIGNMENT_11_2 130
#define FREE_ASSIGNMENT_11_1 131
#define FREE_ASSIGNMENT_11_0 132
#define FREE_REFERENCES_LABEL_11_0 98
#define NUMBER_OF_LINKER_SECTIONS_11_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd782;
  machine_word Wrd781;
  machine_word Wrd773;
  machine_word Wrd765;
  machine_word Wrd764;
  machine_word Wrd763;
  machine_word Wrd762;
  machine_word Wrd761;
  machine_word Wrd760;
  machine_word Wrd756;
  machine_word Wrd755;
  machine_word Wrd746;
  machine_word Wrd745;
  machine_word Wrd733;
  machine_word Wrd738;
  machine_word Wrd737;
  machine_word Wrd734;
  machine_word Wrd730;
  machine_word Wrd729;
  machine_word Wrd721;
  machine_word Wrd713;
  machine_word Wrd712;
  machine_word Wrd711;
  machine_word Wrd710;
  machine_word Wrd709;
  machine_word Wrd708;
  machine_word Wrd704;
  machine_word Wrd703;
  machine_word Wrd694;
  machine_word Wrd693;
  machine_word Wrd681;
  machine_word Wrd686;
  machine_word Wrd685;
  machine_word Wrd682;
  machine_word Wrd678;
  machine_word Wrd677;
  machine_word Wrd669;
  machine_word Wrd661;
  machine_word Wrd660;
  machine_word Wrd659;
  machine_word Wrd658;
  machine_word Wrd657;
  machine_word Wrd656;
  machine_word Wrd652;
  machine_word Wrd651;
  machine_word Wrd642;
  machine_word Wrd641;
  machine_word Wrd629;
  machine_word Wrd634;
  machine_word Wrd633;
  machine_word Wrd630;
  machine_word Wrd626;
  machine_word Wrd625;
  machine_word Wrd617;
  machine_word Wrd609;
  machine_word Wrd608;
  machine_word Wrd607;
  machine_word Wrd606;
  machine_word Wrd605;
  machine_word Wrd604;
  machine_word Wrd600;
  machine_word Wrd599;
  machine_word Wrd590;
  machine_word Wrd589;
  machine_word Wrd577;
  machine_word Wrd582;
  machine_word Wrd581;
  machine_word Wrd578;
  machine_word Wrd574;
  machine_word Wrd573;
  machine_word Wrd565;
  machine_word Wrd557;
  machine_word Wrd556;
  machine_word Wrd555;
  machine_word Wrd554;
  machine_word Wrd553;
  machine_word Wrd552;
  machine_word Wrd548;
  machine_word Wrd547;
  machine_word Wrd538;
  machine_word Wrd537;
  machine_word Wrd525;
  machine_word Wrd530;
  machine_word Wrd529;
  machine_word Wrd526;
  machine_word Wrd522;
  machine_word Wrd521;
  machine_word Wrd513;
  machine_word Wrd505;
  machine_word Wrd504;
  machine_word Wrd503;
  machine_word Wrd502;
  machine_word Wrd501;
  machine_word Wrd500;
  machine_word Wrd496;
  machine_word Wrd495;
  machine_word Wrd486;
  machine_word Wrd485;
  machine_word Wrd473;
  machine_word Wrd478;
  machine_word Wrd477;
  machine_word Wrd474;
  machine_word Wrd470;
  machine_word Wrd469;
  machine_word Wrd461;
  machine_word Wrd453;
  machine_word Wrd452;
  machine_word Wrd451;
  machine_word Wrd450;
  machine_word Wrd449;
  machine_word Wrd448;
  machine_word Wrd444;
  machine_word Wrd443;
  machine_word Wrd434;
  machine_word Wrd433;
  machine_word Wrd421;
  machine_word Wrd426;
  machine_word Wrd425;
  machine_word Wrd422;
  machine_word Wrd418;
  machine_word Wrd417;
  machine_word Wrd409;
  machine_word Wrd401;
  machine_word Wrd400;
  machine_word Wrd399;
  machine_word Wrd398;
  machine_word Wrd397;
  machine_word Wrd396;
  machine_word Wrd392;
  machine_word Wrd391;
  machine_word Wrd382;
  machine_word Wrd381;
  machine_word Wrd369;
  machine_word Wrd374;
  machine_word Wrd373;
  machine_word Wrd370;
  machine_word Wrd366;
  machine_word Wrd365;
  machine_word Wrd357;
  machine_word Wrd349;
  machine_word Wrd348;
  machine_word Wrd347;
  machine_word Wrd346;
  machine_word Wrd345;
  machine_word Wrd344;
  machine_word Wrd340;
  machine_word Wrd339;
  machine_word Wrd330;
  machine_word Wrd329;
  machine_word Wrd317;
  machine_word Wrd322;
  machine_word Wrd321;
  machine_word Wrd318;
  machine_word Wrd314;
  machine_word Wrd313;
  machine_word Wrd305;
  machine_word Wrd297;
  machine_word Wrd296;
  machine_word Wrd295;
  machine_word Wrd294;
  machine_word Wrd293;
  machine_word Wrd292;
  machine_word Wrd288;
  machine_word Wrd287;
  machine_word Wrd278;
  machine_word Wrd277;
  machine_word Wrd265;
  machine_word Wrd270;
  machine_word Wrd269;
  machine_word Wrd266;
  machine_word Wrd262;
  machine_word Wrd261;
  machine_word Wrd253;
  machine_word Wrd245;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd213;
  machine_word Wrd218;
  machine_word Wrd217;
  machine_word Wrd214;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd201;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd188;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd161;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd80;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd97;
  machine_word Wrd98;
  machine_word Wrd146;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd10;
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
      goto bind_assembler_linker_variables_93;

    case 1:
      current_block = (Rpc - LABEL_11_7);
      goto lambda_143;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto swapB_142;

    case 3:
      current_block = (Rpc - LABEL_11_10);
      goto label_95;

    case 4:
      current_block = (Rpc - LABEL_11_11);
      goto label_96;

    case 5:
      current_block = (Rpc - LABEL_11_12);
      goto label_97;

    case 6:
      current_block = (Rpc - LABEL_11_13);
      goto label_98;

    case 7:
      current_block = (Rpc - LABEL_11_14);
      goto label_99;

    case 8:
      current_block = (Rpc - LABEL_11_15);
      goto label_100;

    case 9:
      current_block = (Rpc - LABEL_11_16);
      goto label_101;

    case 10:
      current_block = (Rpc - LABEL_11_17);
      goto label_102;

    case 11:
      current_block = (Rpc - LABEL_11_18);
      goto label_103;

    case 12:
      current_block = (Rpc - LABEL_11_19);
      goto label_104;

    case 13:
      current_block = (Rpc - LABEL_11_20);
      goto label_105;

    case 14:
      current_block = (Rpc - LABEL_11_21);
      goto label_106;

    case 15:
      current_block = (Rpc - LABEL_11_22);
      goto label_107;

    case 16:
      current_block = (Rpc - LABEL_11_23);
      goto label_108;

    case 17:
      current_block = (Rpc - LABEL_11_24);
      goto label_109;

    case 18:
      current_block = (Rpc - LABEL_11_25);
      goto label_110;

    case 19:
      current_block = (Rpc - LABEL_11_26);
      goto label_111;

    case 20:
      current_block = (Rpc - LABEL_11_27);
      goto label_112;

    case 21:
      current_block = (Rpc - LABEL_11_28);
      goto label_113;

    case 22:
      current_block = (Rpc - LABEL_11_29);
      goto label_114;

    case 23:
      current_block = (Rpc - LABEL_11_30);
      goto label_115;

    case 24:
      current_block = (Rpc - LABEL_11_31);
      goto label_116;

    case 25:
      current_block = (Rpc - LABEL_11_32);
      goto label_117;

    case 26:
      current_block = (Rpc - LABEL_11_33);
      goto label_118;

    case 27:
      current_block = (Rpc - LABEL_11_34);
      goto label_119;

    case 28:
      current_block = (Rpc - LABEL_11_35);
      goto label_120;

    case 29:
      current_block = (Rpc - LABEL_11_36);
      goto label_121;

    case 30:
      current_block = (Rpc - LABEL_11_37);
      goto label_122;

    case 31:
      current_block = (Rpc - LABEL_11_38);
      goto label_123;

    case 32:
      current_block = (Rpc - LABEL_11_39);
      goto label_124;

    case 33:
      current_block = (Rpc - LABEL_11_40);
      goto label_125;

    case 34:
      current_block = (Rpc - LABEL_11_41);
      goto label_126;

    case 35:
      current_block = (Rpc - LABEL_11_42);
      goto label_127;

    case 36:
      current_block = (Rpc - LABEL_11_43);
      goto label_128;

    case 37:
      current_block = (Rpc - LABEL_11_44);
      goto label_129;

    case 38:
      current_block = (Rpc - LABEL_11_45);
      goto label_130;

    case 39:
      current_block = (Rpc - LABEL_11_46);
      goto label_131;

    case 40:
      current_block = (Rpc - LABEL_11_47);
      goto label_132;

    case 41:
      current_block = (Rpc - LABEL_11_48);
      goto label_133;

    case 42:
      current_block = (Rpc - LABEL_11_49);
      goto label_134;

    case 43:
      current_block = (Rpc - LABEL_11_50);
      goto label_135;

    case 44:
      current_block = (Rpc - LABEL_11_51);
      goto label_136;

    case 45:
      current_block = (Rpc - LABEL_11_52);
      goto label_137;

    case 46:
      current_block = (Rpc - LABEL_11_53);
      goto label_138;

    case 47:
      current_block = (Rpc - LABEL_11_54);
      goto label_139;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bind_assembler_linker_variables_141)
DEFLABEL (bind_assembler_linker_variables_93)
  INTERRUPT_CHECK (26, LABEL_11_4);
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
  (Wrd48.pObj) = (& (Rhp [-1]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd54.pObj) = (& (Rhp [-1]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd54.pObj)));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd60.pObj) = (& (Rhp [-1]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd60.pObj)));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd66.pObj) = (& (Rhp [-1]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd66.pObj)));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd72.pObj) = (& (Rhp [-1]));
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd72.pObj)));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd78.pObj) = (& (Rhp [-1]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd78.pObj)));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd84.pObj) = (& (Rhp [-1]));
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd84.pObj)));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd90.pObj) = (& (Rhp [-1]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd90.pObj)));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 18));
  (Wrd148.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 15;
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd148.pObj)));
  (* (--Rsp)) = (Wrd149.Obj);
  Wrd146 = Wrd148;
  ((Wrd146.pObj) [2]) = (Wrd7.Obj);
  ((Wrd146.pObj) [3]) = (Wrd13.Obj);
  ((Wrd146.pObj) [4]) = (Wrd19.Obj);
  ((Wrd146.pObj) [5]) = (Wrd25.Obj);
  ((Wrd146.pObj) [6]) = (Wrd31.Obj);
  ((Wrd146.pObj) [7]) = (Wrd37.Obj);
  ((Wrd146.pObj) [8]) = (Wrd43.Obj);
  ((Wrd146.pObj) [9]) = (Wrd49.Obj);
  ((Wrd146.pObj) [10]) = (Wrd55.Obj);
  ((Wrd146.pObj) [11]) = (Wrd61.Obj);
  ((Wrd146.pObj) [12]) = (Wrd67.Obj);
  ((Wrd146.pObj) [13]) = (Wrd73.Obj);
  ((Wrd146.pObj) [14]) = (Wrd79.Obj);
  ((Wrd146.pObj) [15]) = (Wrd85.Obj);
  ((Wrd146.pObj) [16]) = (Wrd91.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd98.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_7])));
  Rhp += 1;
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd98.pObj)));
  Wrd99 = Wrd98;
  (Wrd100.Obj) = (Rsp [16]);
  ((Wrd99.pObj) [2]) = (Wrd100.Obj);
  (Rsp [16]) = (Wrd149.Obj);
  (Rsp [15]) = (Wrd97.Obj);
  (Rsp [14]) = (Wrd149.Obj);
  Rsp = (& (Rsp [14]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (lambda_143)
  CLOSURE_HEADER (LABEL_11_7);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_142)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (swapB_91)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_278;

DEFLABEL (label_277)
  Wrd5 = Wrd9;

DEFLABEL (label_276)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_275;

DEFLABEL (label_274)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_273)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [16]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_272;

DEFLABEL (label_271)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_270)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_269;

DEFLABEL (label_268)
  Wrd57 = Wrd61;

DEFLABEL (label_267)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_266;

DEFLABEL (label_265)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_264)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [15]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_263;

DEFLABEL (label_262)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_261)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_2]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_260;

DEFLABEL (label_259)
  Wrd109 = Wrd113;

DEFLABEL (label_258)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_257;

DEFLABEL (label_256)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_255)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [14]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_254;

DEFLABEL (label_253)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_252)
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_3]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_251;

DEFLABEL (label_250)
  Wrd161 = Wrd165;

DEFLABEL (label_249)
  (* (--Rsp)) = (Wrd161.Obj);
  (Wrd173.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_3]));
  (Wrd174.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd183.Obj) = ((Wrd173.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_248;

DEFLABEL (label_247)
  ((Wrd173.pObj) [0]) = (Wrd174.Obj);

DEFLABEL (label_246)
  (Wrd188.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd191.Obj) = ((Wrd190.pObj) [13]);
  (Wrd192.pObj) = (OBJECT_ADDRESS (Wrd191.Obj));
  (Wrd193.Obj) = ((Wrd192.pObj) [0]);
  (* (--Rsp)) = (Wrd193.Obj);
  ((Wrd192.pObj) [0]) = (Wrd188.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd201.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_3]));
  (Wrd209.Obj) = ((Wrd201.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_245;

DEFLABEL (label_244)
  ((Wrd201.pObj) [0]) = (Wrd193.Obj);

DEFLABEL (label_243)
  (Wrd214.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_4]));
  (Wrd217.Obj) = ((Wrd214.pObj) [0]);
  (Wrd218.uLng) = (OBJECT_TYPE (Wrd217.Obj));
  if ((Wrd218.uLng) == 50)
    goto label_242;

DEFLABEL (label_241)
  Wrd213 = Wrd217;

DEFLABEL (label_240)
  (* (--Rsp)) = (Wrd213.Obj);
  (Wrd225.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_4]));
  (Wrd226.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd235.Obj) = ((Wrd225.pObj) [0]);
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd235.Obj));
  if ((Wrd236.uLng) == 50)
    goto label_239;

DEFLABEL (label_238)
  ((Wrd225.pObj) [0]) = (Wrd226.Obj);

DEFLABEL (label_237)
  (Wrd240.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd240.Obj);
  (Wrd241.Obj) = (Rsp [1]);
  (Wrd242.pObj) = (OBJECT_ADDRESS (Wrd241.Obj));
  (Wrd243.Obj) = ((Wrd242.pObj) [12]);
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [0]);
  (* (--Rsp)) = (Wrd245.Obj);
  ((Wrd244.pObj) [0]) = (Wrd240.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd253.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_4]));
  (Wrd261.Obj) = ((Wrd253.pObj) [0]);
  (Wrd262.uLng) = (OBJECT_TYPE (Wrd261.Obj));
  if ((Wrd262.uLng) == 50)
    goto label_236;

DEFLABEL (label_235)
  ((Wrd253.pObj) [0]) = (Wrd245.Obj);

DEFLABEL (label_234)
  (Wrd266.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_5]));
  (Wrd269.Obj) = ((Wrd266.pObj) [0]);
  (Wrd270.uLng) = (OBJECT_TYPE (Wrd269.Obj));
  if ((Wrd270.uLng) == 50)
    goto label_233;

DEFLABEL (label_232)
  Wrd265 = Wrd269;

DEFLABEL (label_231)
  (* (--Rsp)) = (Wrd265.Obj);
  (Wrd277.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_5]));
  (Wrd278.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd287.Obj) = ((Wrd277.pObj) [0]);
  (Wrd288.uLng) = (OBJECT_TYPE (Wrd287.Obj));
  if ((Wrd288.uLng) == 50)
    goto label_230;

DEFLABEL (label_229)
  ((Wrd277.pObj) [0]) = (Wrd278.Obj);

DEFLABEL (label_228)
  (Wrd292.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd292.Obj);
  (Wrd293.Obj) = (Rsp [1]);
  (Wrd294.pObj) = (OBJECT_ADDRESS (Wrd293.Obj));
  (Wrd295.Obj) = ((Wrd294.pObj) [11]);
  (Wrd296.pObj) = (OBJECT_ADDRESS (Wrd295.Obj));
  (Wrd297.Obj) = ((Wrd296.pObj) [0]);
  (* (--Rsp)) = (Wrd297.Obj);
  ((Wrd296.pObj) [0]) = (Wrd292.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd305.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_5]));
  (Wrd313.Obj) = ((Wrd305.pObj) [0]);
  (Wrd314.uLng) = (OBJECT_TYPE (Wrd313.Obj));
  if ((Wrd314.uLng) == 50)
    goto label_227;

DEFLABEL (label_226)
  ((Wrd305.pObj) [0]) = (Wrd297.Obj);

DEFLABEL (label_225)
  (Wrd318.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_6]));
  (Wrd321.Obj) = ((Wrd318.pObj) [0]);
  (Wrd322.uLng) = (OBJECT_TYPE (Wrd321.Obj));
  if ((Wrd322.uLng) == 50)
    goto label_224;

DEFLABEL (label_223)
  Wrd317 = Wrd321;

DEFLABEL (label_222)
  (* (--Rsp)) = (Wrd317.Obj);
  (Wrd329.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_6]));
  (Wrd330.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd339.Obj) = ((Wrd329.pObj) [0]);
  (Wrd340.uLng) = (OBJECT_TYPE (Wrd339.Obj));
  if ((Wrd340.uLng) == 50)
    goto label_221;

DEFLABEL (label_220)
  ((Wrd329.pObj) [0]) = (Wrd330.Obj);

DEFLABEL (label_219)
  (Wrd344.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd344.Obj);
  (Wrd345.Obj) = (Rsp [1]);
  (Wrd346.pObj) = (OBJECT_ADDRESS (Wrd345.Obj));
  (Wrd347.Obj) = ((Wrd346.pObj) [10]);
  (Wrd348.pObj) = (OBJECT_ADDRESS (Wrd347.Obj));
  (Wrd349.Obj) = ((Wrd348.pObj) [0]);
  (* (--Rsp)) = (Wrd349.Obj);
  ((Wrd348.pObj) [0]) = (Wrd344.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd357.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_6]));
  (Wrd365.Obj) = ((Wrd357.pObj) [0]);
  (Wrd366.uLng) = (OBJECT_TYPE (Wrd365.Obj));
  if ((Wrd366.uLng) == 50)
    goto label_218;

DEFLABEL (label_217)
  ((Wrd357.pObj) [0]) = (Wrd349.Obj);

DEFLABEL (label_216)
  (Wrd370.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_7]));
  (Wrd373.Obj) = ((Wrd370.pObj) [0]);
  (Wrd374.uLng) = (OBJECT_TYPE (Wrd373.Obj));
  if ((Wrd374.uLng) == 50)
    goto label_215;

DEFLABEL (label_214)
  Wrd369 = Wrd373;

DEFLABEL (label_213)
  (* (--Rsp)) = (Wrd369.Obj);
  (Wrd381.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_7]));
  (Wrd382.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd391.Obj) = ((Wrd381.pObj) [0]);
  (Wrd392.uLng) = (OBJECT_TYPE (Wrd391.Obj));
  if ((Wrd392.uLng) == 50)
    goto label_212;

DEFLABEL (label_211)
  ((Wrd381.pObj) [0]) = (Wrd382.Obj);

DEFLABEL (label_210)
  (Wrd396.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd396.Obj);
  (Wrd397.Obj) = (Rsp [1]);
  (Wrd398.pObj) = (OBJECT_ADDRESS (Wrd397.Obj));
  (Wrd399.Obj) = ((Wrd398.pObj) [9]);
  (Wrd400.pObj) = (OBJECT_ADDRESS (Wrd399.Obj));
  (Wrd401.Obj) = ((Wrd400.pObj) [0]);
  (* (--Rsp)) = (Wrd401.Obj);
  ((Wrd400.pObj) [0]) = (Wrd396.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd409.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_7]));
  (Wrd417.Obj) = ((Wrd409.pObj) [0]);
  (Wrd418.uLng) = (OBJECT_TYPE (Wrd417.Obj));
  if ((Wrd418.uLng) == 50)
    goto label_209;

DEFLABEL (label_208)
  ((Wrd409.pObj) [0]) = (Wrd401.Obj);

DEFLABEL (label_207)
  (Wrd422.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_8]));
  (Wrd425.Obj) = ((Wrd422.pObj) [0]);
  (Wrd426.uLng) = (OBJECT_TYPE (Wrd425.Obj));
  if ((Wrd426.uLng) == 50)
    goto label_206;

DEFLABEL (label_205)
  Wrd421 = Wrd425;

DEFLABEL (label_204)
  (* (--Rsp)) = (Wrd421.Obj);
  (Wrd433.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_8]));
  (Wrd434.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd443.Obj) = ((Wrd433.pObj) [0]);
  (Wrd444.uLng) = (OBJECT_TYPE (Wrd443.Obj));
  if ((Wrd444.uLng) == 50)
    goto label_203;

DEFLABEL (label_202)
  ((Wrd433.pObj) [0]) = (Wrd434.Obj);

DEFLABEL (label_201)
  (Wrd448.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd448.Obj);
  (Wrd449.Obj) = (Rsp [1]);
  (Wrd450.pObj) = (OBJECT_ADDRESS (Wrd449.Obj));
  (Wrd451.Obj) = ((Wrd450.pObj) [8]);
  (Wrd452.pObj) = (OBJECT_ADDRESS (Wrd451.Obj));
  (Wrd453.Obj) = ((Wrd452.pObj) [0]);
  (* (--Rsp)) = (Wrd453.Obj);
  ((Wrd452.pObj) [0]) = (Wrd448.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd461.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_8]));
  (Wrd469.Obj) = ((Wrd461.pObj) [0]);
  (Wrd470.uLng) = (OBJECT_TYPE (Wrd469.Obj));
  if ((Wrd470.uLng) == 50)
    goto label_200;

DEFLABEL (label_199)
  ((Wrd461.pObj) [0]) = (Wrd453.Obj);

DEFLABEL (label_198)
  (Wrd474.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_9]));
  (Wrd477.Obj) = ((Wrd474.pObj) [0]);
  (Wrd478.uLng) = (OBJECT_TYPE (Wrd477.Obj));
  if ((Wrd478.uLng) == 50)
    goto label_197;

DEFLABEL (label_196)
  Wrd473 = Wrd477;

DEFLABEL (label_195)
  (* (--Rsp)) = (Wrd473.Obj);
  (Wrd485.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_9]));
  (Wrd486.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd495.Obj) = ((Wrd485.pObj) [0]);
  (Wrd496.uLng) = (OBJECT_TYPE (Wrd495.Obj));
  if ((Wrd496.uLng) == 50)
    goto label_194;

DEFLABEL (label_193)
  ((Wrd485.pObj) [0]) = (Wrd486.Obj);

DEFLABEL (label_192)
  (Wrd500.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd500.Obj);
  (Wrd501.Obj) = (Rsp [1]);
  (Wrd502.pObj) = (OBJECT_ADDRESS (Wrd501.Obj));
  (Wrd503.Obj) = ((Wrd502.pObj) [7]);
  (Wrd504.pObj) = (OBJECT_ADDRESS (Wrd503.Obj));
  (Wrd505.Obj) = ((Wrd504.pObj) [0]);
  (* (--Rsp)) = (Wrd505.Obj);
  ((Wrd504.pObj) [0]) = (Wrd500.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd513.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_9]));
  (Wrd521.Obj) = ((Wrd513.pObj) [0]);
  (Wrd522.uLng) = (OBJECT_TYPE (Wrd521.Obj));
  if ((Wrd522.uLng) == 50)
    goto label_191;

DEFLABEL (label_190)
  ((Wrd513.pObj) [0]) = (Wrd505.Obj);

DEFLABEL (label_189)
  (Wrd526.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_10]));
  (Wrd529.Obj) = ((Wrd526.pObj) [0]);
  (Wrd530.uLng) = (OBJECT_TYPE (Wrd529.Obj));
  if ((Wrd530.uLng) == 50)
    goto label_188;

DEFLABEL (label_187)
  Wrd525 = Wrd529;

DEFLABEL (label_186)
  (* (--Rsp)) = (Wrd525.Obj);
  (Wrd537.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_10]));
  (Wrd538.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd547.Obj) = ((Wrd537.pObj) [0]);
  (Wrd548.uLng) = (OBJECT_TYPE (Wrd547.Obj));
  if ((Wrd548.uLng) == 50)
    goto label_185;

DEFLABEL (label_184)
  ((Wrd537.pObj) [0]) = (Wrd538.Obj);

DEFLABEL (label_183)
  (Wrd552.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd552.Obj);
  (Wrd553.Obj) = (Rsp [1]);
  (Wrd554.pObj) = (OBJECT_ADDRESS (Wrd553.Obj));
  (Wrd555.Obj) = ((Wrd554.pObj) [6]);
  (Wrd556.pObj) = (OBJECT_ADDRESS (Wrd555.Obj));
  (Wrd557.Obj) = ((Wrd556.pObj) [0]);
  (* (--Rsp)) = (Wrd557.Obj);
  ((Wrd556.pObj) [0]) = (Wrd552.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd565.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_10]));
  (Wrd573.Obj) = ((Wrd565.pObj) [0]);
  (Wrd574.uLng) = (OBJECT_TYPE (Wrd573.Obj));
  if ((Wrd574.uLng) == 50)
    goto label_182;

DEFLABEL (label_181)
  ((Wrd565.pObj) [0]) = (Wrd557.Obj);

DEFLABEL (label_180)
  (Wrd578.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_11]));
  (Wrd581.Obj) = ((Wrd578.pObj) [0]);
  (Wrd582.uLng) = (OBJECT_TYPE (Wrd581.Obj));
  if ((Wrd582.uLng) == 50)
    goto label_179;

DEFLABEL (label_178)
  Wrd577 = Wrd581;

DEFLABEL (label_177)
  (* (--Rsp)) = (Wrd577.Obj);
  (Wrd589.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_11]));
  (Wrd590.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd599.Obj) = ((Wrd589.pObj) [0]);
  (Wrd600.uLng) = (OBJECT_TYPE (Wrd599.Obj));
  if ((Wrd600.uLng) == 50)
    goto label_176;

DEFLABEL (label_175)
  ((Wrd589.pObj) [0]) = (Wrd590.Obj);

DEFLABEL (label_174)
  (Wrd604.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd604.Obj);
  (Wrd605.Obj) = (Rsp [1]);
  (Wrd606.pObj) = (OBJECT_ADDRESS (Wrd605.Obj));
  (Wrd607.Obj) = ((Wrd606.pObj) [5]);
  (Wrd608.pObj) = (OBJECT_ADDRESS (Wrd607.Obj));
  (Wrd609.Obj) = ((Wrd608.pObj) [0]);
  (* (--Rsp)) = (Wrd609.Obj);
  ((Wrd608.pObj) [0]) = (Wrd604.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd617.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_11]));
  (Wrd625.Obj) = ((Wrd617.pObj) [0]);
  (Wrd626.uLng) = (OBJECT_TYPE (Wrd625.Obj));
  if ((Wrd626.uLng) == 50)
    goto label_173;

DEFLABEL (label_172)
  ((Wrd617.pObj) [0]) = (Wrd609.Obj);

DEFLABEL (label_171)
  (Wrd630.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_12]));
  (Wrd633.Obj) = ((Wrd630.pObj) [0]);
  (Wrd634.uLng) = (OBJECT_TYPE (Wrd633.Obj));
  if ((Wrd634.uLng) == 50)
    goto label_170;

DEFLABEL (label_169)
  Wrd629 = Wrd633;

DEFLABEL (label_168)
  (* (--Rsp)) = (Wrd629.Obj);
  (Wrd641.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_12]));
  (Wrd642.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd651.Obj) = ((Wrd641.pObj) [0]);
  (Wrd652.uLng) = (OBJECT_TYPE (Wrd651.Obj));
  if ((Wrd652.uLng) == 50)
    goto label_167;

DEFLABEL (label_166)
  ((Wrd641.pObj) [0]) = (Wrd642.Obj);

DEFLABEL (label_165)
  (Wrd656.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd656.Obj);
  (Wrd657.Obj) = (Rsp [1]);
  (Wrd658.pObj) = (OBJECT_ADDRESS (Wrd657.Obj));
  (Wrd659.Obj) = ((Wrd658.pObj) [4]);
  (Wrd660.pObj) = (OBJECT_ADDRESS (Wrd659.Obj));
  (Wrd661.Obj) = ((Wrd660.pObj) [0]);
  (* (--Rsp)) = (Wrd661.Obj);
  ((Wrd660.pObj) [0]) = (Wrd656.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd669.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_12]));
  (Wrd677.Obj) = ((Wrd669.pObj) [0]);
  (Wrd678.uLng) = (OBJECT_TYPE (Wrd677.Obj));
  if ((Wrd678.uLng) == 50)
    goto label_164;

DEFLABEL (label_163)
  ((Wrd669.pObj) [0]) = (Wrd661.Obj);

DEFLABEL (label_162)
  (Wrd682.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_13]));
  (Wrd685.Obj) = ((Wrd682.pObj) [0]);
  (Wrd686.uLng) = (OBJECT_TYPE (Wrd685.Obj));
  if ((Wrd686.uLng) == 50)
    goto label_161;

DEFLABEL (label_160)
  Wrd681 = Wrd685;

DEFLABEL (label_159)
  (* (--Rsp)) = (Wrd681.Obj);
  (Wrd693.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_13]));
  (Wrd694.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd703.Obj) = ((Wrd693.pObj) [0]);
  (Wrd704.uLng) = (OBJECT_TYPE (Wrd703.Obj));
  if ((Wrd704.uLng) == 50)
    goto label_158;

DEFLABEL (label_157)
  ((Wrd693.pObj) [0]) = (Wrd694.Obj);

DEFLABEL (label_156)
  (Wrd708.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd708.Obj);
  (Wrd709.Obj) = (Rsp [1]);
  (Wrd710.pObj) = (OBJECT_ADDRESS (Wrd709.Obj));
  (Wrd711.Obj) = ((Wrd710.pObj) [3]);
  (Wrd712.pObj) = (OBJECT_ADDRESS (Wrd711.Obj));
  (Wrd713.Obj) = ((Wrd712.pObj) [0]);
  (* (--Rsp)) = (Wrd713.Obj);
  ((Wrd712.pObj) [0]) = (Wrd708.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd721.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_13]));
  (Wrd729.Obj) = ((Wrd721.pObj) [0]);
  (Wrd730.uLng) = (OBJECT_TYPE (Wrd729.Obj));
  if ((Wrd730.uLng) == 50)
    goto label_155;

DEFLABEL (label_154)
  ((Wrd721.pObj) [0]) = (Wrd713.Obj);

DEFLABEL (label_153)
  (Wrd734.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_14]));
  (Wrd737.Obj) = ((Wrd734.pObj) [0]);
  (Wrd738.uLng) = (OBJECT_TYPE (Wrd737.Obj));
  if ((Wrd738.uLng) == 50)
    goto label_152;

DEFLABEL (label_151)
  Wrd733 = Wrd737;

DEFLABEL (label_150)
  (* (--Rsp)) = (Wrd733.Obj);
  (Wrd745.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_14]));
  (Wrd746.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd755.Obj) = ((Wrd745.pObj) [0]);
  (Wrd756.uLng) = (OBJECT_TYPE (Wrd755.Obj));
  if ((Wrd756.uLng) == 50)
    goto label_149;

DEFLABEL (label_148)
  ((Wrd745.pObj) [0]) = (Wrd746.Obj);

DEFLABEL (label_147)
  (Wrd760.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd760.Obj);
  (Wrd761.Obj) = (Rsp [1]);
  (Wrd762.pObj) = (OBJECT_ADDRESS (Wrd761.Obj));
  (Wrd763.Obj) = ((Wrd762.pObj) [2]);
  (Wrd764.pObj) = (OBJECT_ADDRESS (Wrd763.Obj));
  (Wrd765.Obj) = ((Wrd764.pObj) [0]);
  (* (--Rsp)) = (Wrd765.Obj);
  ((Wrd764.pObj) [0]) = (Wrd760.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd773.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_14]));
  (Wrd781.Obj) = ((Wrd773.pObj) [0]);
  (Wrd782.uLng) = (OBJECT_TYPE (Wrd781.Obj));
  if ((Wrd782.uLng) == 50)
    goto label_146;

DEFLABEL (label_145)
  ((Wrd773.pObj) [0]) = (Wrd765.Obj);

DEFLABEL (label_144)
  Rvl = (current_block [OBJECT_11_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_146)
  if ((Wrd781.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_145;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_54])), (Wrd773.pObj), (Wrd765.Obj));

DEFLABEL (label_139)
  goto label_144;

DEFLABEL (label_149)
  if ((Wrd755.Obj) == (Wrd746.Obj))
    goto label_148;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_53])), (Wrd745.pObj), (Wrd746.Obj));

DEFLABEL (label_138)
  goto label_147;

DEFLABEL (label_152)
  if ((Wrd737.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_151;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_52])), (Wrd734.pObj));

DEFLABEL (label_137)
  (Wrd733.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_155)
  if ((Wrd729.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_154;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_51])), (Wrd721.pObj), (Wrd713.Obj));

DEFLABEL (label_136)
  goto label_153;

DEFLABEL (label_158)
  if ((Wrd703.Obj) == (Wrd694.Obj))
    goto label_157;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_50])), (Wrd693.pObj), (Wrd694.Obj));

DEFLABEL (label_135)
  goto label_156;

DEFLABEL (label_161)
  if ((Wrd685.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_160;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_49])), (Wrd682.pObj));

DEFLABEL (label_134)
  (Wrd681.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_164)
  if ((Wrd677.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_163;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_48])), (Wrd669.pObj), (Wrd661.Obj));

DEFLABEL (label_133)
  goto label_162;

DEFLABEL (label_167)
  if ((Wrd651.Obj) == (Wrd642.Obj))
    goto label_166;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_47])), (Wrd641.pObj), (Wrd642.Obj));

DEFLABEL (label_132)
  goto label_165;

DEFLABEL (label_170)
  if ((Wrd633.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_169;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_46])), (Wrd630.pObj));

DEFLABEL (label_131)
  (Wrd629.Obj) = Rvl;
  goto label_168;

DEFLABEL (label_173)
  if ((Wrd625.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_172;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_45])), (Wrd617.pObj), (Wrd609.Obj));

DEFLABEL (label_130)
  goto label_171;

DEFLABEL (label_176)
  if ((Wrd599.Obj) == (Wrd590.Obj))
    goto label_175;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_44])), (Wrd589.pObj), (Wrd590.Obj));

DEFLABEL (label_129)
  goto label_174;

DEFLABEL (label_179)
  if ((Wrd581.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_178;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_43])), (Wrd578.pObj));

DEFLABEL (label_128)
  (Wrd577.Obj) = Rvl;
  goto label_177;

DEFLABEL (label_182)
  if ((Wrd573.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_181;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_42])), (Wrd565.pObj), (Wrd557.Obj));

DEFLABEL (label_127)
  goto label_180;

DEFLABEL (label_185)
  if ((Wrd547.Obj) == (Wrd538.Obj))
    goto label_184;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_41])), (Wrd537.pObj), (Wrd538.Obj));

DEFLABEL (label_126)
  goto label_183;

DEFLABEL (label_188)
  if ((Wrd529.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_187;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_40])), (Wrd526.pObj));

DEFLABEL (label_125)
  (Wrd525.Obj) = Rvl;
  goto label_186;

DEFLABEL (label_191)
  if ((Wrd521.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_190;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_39])), (Wrd513.pObj), (Wrd505.Obj));

DEFLABEL (label_124)
  goto label_189;

DEFLABEL (label_194)
  if ((Wrd495.Obj) == (Wrd486.Obj))
    goto label_193;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_38])), (Wrd485.pObj), (Wrd486.Obj));

DEFLABEL (label_123)
  goto label_192;

DEFLABEL (label_197)
  if ((Wrd477.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_196;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_37])), (Wrd474.pObj));

DEFLABEL (label_122)
  (Wrd473.Obj) = Rvl;
  goto label_195;

DEFLABEL (label_200)
  if ((Wrd469.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_199;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_36])), (Wrd461.pObj), (Wrd453.Obj));

DEFLABEL (label_121)
  goto label_198;

DEFLABEL (label_203)
  if ((Wrd443.Obj) == (Wrd434.Obj))
    goto label_202;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_35])), (Wrd433.pObj), (Wrd434.Obj));

DEFLABEL (label_120)
  goto label_201;

DEFLABEL (label_206)
  if ((Wrd425.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_205;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_34])), (Wrd422.pObj));

DEFLABEL (label_119)
  (Wrd421.Obj) = Rvl;
  goto label_204;

DEFLABEL (label_209)
  if ((Wrd417.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_208;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_33])), (Wrd409.pObj), (Wrd401.Obj));

DEFLABEL (label_118)
  goto label_207;

DEFLABEL (label_212)
  if ((Wrd391.Obj) == (Wrd382.Obj))
    goto label_211;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_32])), (Wrd381.pObj), (Wrd382.Obj));

DEFLABEL (label_117)
  goto label_210;

DEFLABEL (label_215)
  if ((Wrd373.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_214;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_31])), (Wrd370.pObj));

DEFLABEL (label_116)
  (Wrd369.Obj) = Rvl;
  goto label_213;

DEFLABEL (label_218)
  if ((Wrd365.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_217;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_30])), (Wrd357.pObj), (Wrd349.Obj));

DEFLABEL (label_115)
  goto label_216;

DEFLABEL (label_221)
  if ((Wrd339.Obj) == (Wrd330.Obj))
    goto label_220;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_29])), (Wrd329.pObj), (Wrd330.Obj));

DEFLABEL (label_114)
  goto label_219;

DEFLABEL (label_224)
  if ((Wrd321.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_223;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_28])), (Wrd318.pObj));

DEFLABEL (label_113)
  (Wrd317.Obj) = Rvl;
  goto label_222;

DEFLABEL (label_227)
  if ((Wrd313.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_226;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_27])), (Wrd305.pObj), (Wrd297.Obj));

DEFLABEL (label_112)
  goto label_225;

DEFLABEL (label_230)
  if ((Wrd287.Obj) == (Wrd278.Obj))
    goto label_229;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_26])), (Wrd277.pObj), (Wrd278.Obj));

DEFLABEL (label_111)
  goto label_228;

DEFLABEL (label_233)
  if ((Wrd269.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_232;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_25])), (Wrd266.pObj));

DEFLABEL (label_110)
  (Wrd265.Obj) = Rvl;
  goto label_231;

DEFLABEL (label_236)
  if ((Wrd261.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_235;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_24])), (Wrd253.pObj), (Wrd245.Obj));

DEFLABEL (label_109)
  goto label_234;

DEFLABEL (label_239)
  if ((Wrd235.Obj) == (Wrd226.Obj))
    goto label_238;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_23])), (Wrd225.pObj), (Wrd226.Obj));

DEFLABEL (label_108)
  goto label_237;

DEFLABEL (label_242)
  if ((Wrd217.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_241;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_22])), (Wrd214.pObj));

DEFLABEL (label_107)
  (Wrd213.Obj) = Rvl;
  goto label_240;

DEFLABEL (label_245)
  if ((Wrd209.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_244;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_21])), (Wrd201.pObj), (Wrd193.Obj));

DEFLABEL (label_106)
  goto label_243;

DEFLABEL (label_248)
  if ((Wrd183.Obj) == (Wrd174.Obj))
    goto label_247;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_20])), (Wrd173.pObj), (Wrd174.Obj));

DEFLABEL (label_105)
  goto label_246;

DEFLABEL (label_251)
  if ((Wrd165.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_250;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_19])), (Wrd162.pObj));

DEFLABEL (label_104)
  (Wrd161.Obj) = Rvl;
  goto label_249;

DEFLABEL (label_254)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_253;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_18])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_103)
  goto label_252;

DEFLABEL (label_257)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_256;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_17])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_102)
  goto label_255;

DEFLABEL (label_260)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_259;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_16])), (Wrd110.pObj));

DEFLABEL (label_101)
  (Wrd109.Obj) = Rvl;
  goto label_258;

DEFLABEL (label_263)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_262;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_15])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_100)
  goto label_261;

DEFLABEL (label_266)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_265;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_14])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_99)
  goto label_264;

DEFLABEL (label_269)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_268;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_13])), (Wrd58.pObj));

DEFLABEL (label_98)
  (Wrd57.Obj) = Rvl;
  goto label_267;

DEFLABEL (label_272)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_271;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_12])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_97)
  goto label_270;

DEFLABEL (label_275)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_274;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_11])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_96)
  goto label_273;

DEFLABEL (label_278)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_277;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_11_10])), (Wrd6.pObj));

DEFLABEL (label_95)
  (Wrd5.Obj) = Rvl;
  goto label_276;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define LABEL_12_8 11
#define LABEL_12_9 13
#define LABEL_12_10 15
#define LABEL_12_11 17
#define LABEL_12_12 19
#define LABEL_12_13 21
#define LABEL_12_14 23
#define LABEL_12_15 25
#define LABEL_12_16 27
#define LABEL_12_17 29
#define LABEL_12_18 31
#define LABEL_12_19 33
#define LABEL_12_20 35
#define ENVIRONMENT_LABEL_12_3 56
#define DEBUGGING_LABEL_12_2 55
#define OBJECT_12_1 54
#define OBJECT_12_0 53
#define FREE_ASSIGNMENT_12_15 37
#define FREE_ASSIGNMENT_12_14 38
#define FREE_ASSIGNMENT_12_13 39
#define FREE_ASSIGNMENT_12_12 40
#define FREE_ASSIGNMENT_12_11 41
#define FREE_ASSIGNMENT_12_10 42
#define FREE_ASSIGNMENT_12_9 43
#define FREE_ASSIGNMENT_12_8 44
#define FREE_ASSIGNMENT_12_7 45
#define FREE_ASSIGNMENT_12_6 46
#define FREE_ASSIGNMENT_12_5 47
#define FREE_ASSIGNMENT_12_4 48
#define FREE_ASSIGNMENT_12_3 49
#define FREE_ASSIGNMENT_12_2 50
#define FREE_ASSIGNMENT_12_1 51
#define FREE_ASSIGNMENT_12_0 52
#define FREE_REFERENCES_LABEL_12_0 36
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd210;
  machine_word Wrd209;
  machine_word Wrd200;
  machine_word Wrd199;
  machine_word Wrd196;
  machine_word Wrd195;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_12_4);
      goto assembler_linker_resetB_0;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_12_8);
      goto label_5;

    case 5:
      current_block = (Rpc - LABEL_12_9);
      goto label_6;

    case 6:
      current_block = (Rpc - LABEL_12_10);
      goto label_7;

    case 7:
      current_block = (Rpc - LABEL_12_11);
      goto label_8;

    case 8:
      current_block = (Rpc - LABEL_12_12);
      goto label_9;

    case 9:
      current_block = (Rpc - LABEL_12_13);
      goto label_10;

    case 10:
      current_block = (Rpc - LABEL_12_14);
      goto label_11;

    case 11:
      current_block = (Rpc - LABEL_12_15);
      goto label_12;

    case 12:
      current_block = (Rpc - LABEL_12_16);
      goto label_13;

    case 13:
      current_block = (Rpc - LABEL_12_17);
      goto label_14;

    case 14:
      current_block = (Rpc - LABEL_12_18);
      goto label_15;

    case 15:
      current_block = (Rpc - LABEL_12_19);
      goto label_16;

    case 16:
      current_block = (Rpc - LABEL_12_20);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (assembler_linker_resetB_19)
DEFLABEL (assembler_linker_resetB_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_0]));
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_67;

DEFLABEL (label_66)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_65)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_1]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_64;

DEFLABEL (label_63)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_62)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_2]));
  (Wrd32.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd41.Obj) = ((Wrd31.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_61;

DEFLABEL (label_60)
  ((Wrd31.pObj) [0]) = (Wrd32.Obj);

DEFLABEL (label_59)
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_3]));
  (Wrd46.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd55.Obj) = ((Wrd45.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_58;

DEFLABEL (label_57)
  ((Wrd45.pObj) [0]) = (Wrd46.Obj);

DEFLABEL (label_56)
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_4]));
  (Wrd60.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd69.Obj) = ((Wrd59.pObj) [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 50)
    goto label_55;

DEFLABEL (label_54)
  ((Wrd59.pObj) [0]) = (Wrd60.Obj);

DEFLABEL (label_53)
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_5]));
  (Wrd74.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd83.Obj) = ((Wrd73.pObj) [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if ((Wrd84.uLng) == 50)
    goto label_52;

DEFLABEL (label_51)
  ((Wrd73.pObj) [0]) = (Wrd74.Obj);

DEFLABEL (label_50)
  (Wrd87.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_6]));
  (Wrd88.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd97.Obj) = ((Wrd87.pObj) [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if ((Wrd98.uLng) == 50)
    goto label_49;

DEFLABEL (label_48)
  ((Wrd87.pObj) [0]) = (Wrd88.Obj);

DEFLABEL (label_47)
  (Wrd101.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_7]));
  (Wrd102.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd111.Obj) = ((Wrd101.pObj) [0]);
  (Wrd112.uLng) = (OBJECT_TYPE (Wrd111.Obj));
  if ((Wrd112.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd101.pObj) [0]) = (Wrd102.Obj);

DEFLABEL (label_44)
  (Wrd115.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_8]));
  (Wrd116.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd125.Obj) = ((Wrd115.pObj) [0]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if ((Wrd126.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd115.pObj) [0]) = (Wrd116.Obj);

DEFLABEL (label_41)
  (Wrd129.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_9]));
  (Wrd130.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd139.Obj) = ((Wrd129.pObj) [0]);
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd139.Obj));
  if ((Wrd140.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  ((Wrd129.pObj) [0]) = (Wrd130.Obj);

DEFLABEL (label_38)
  (Wrd143.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_10]));
  (Wrd144.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd153.Obj) = ((Wrd143.pObj) [0]);
  (Wrd154.uLng) = (OBJECT_TYPE (Wrd153.Obj));
  if ((Wrd154.uLng) == 50)
    goto label_37;

DEFLABEL (label_36)
  ((Wrd143.pObj) [0]) = (Wrd144.Obj);

DEFLABEL (label_35)
  (Wrd157.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_11]));
  (Wrd158.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd167.Obj) = ((Wrd157.pObj) [0]);
  (Wrd168.uLng) = (OBJECT_TYPE (Wrd167.Obj));
  if ((Wrd168.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd157.pObj) [0]) = (Wrd158.Obj);

DEFLABEL (label_32)
  (Wrd171.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_12]));
  (Wrd172.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd181.Obj) = ((Wrd171.pObj) [0]);
  (Wrd182.uLng) = (OBJECT_TYPE (Wrd181.Obj));
  if ((Wrd182.uLng) == 50)
    goto label_31;

DEFLABEL (label_30)
  ((Wrd171.pObj) [0]) = (Wrd172.Obj);

DEFLABEL (label_29)
  (Wrd185.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_13]));
  (Wrd186.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd195.Obj) = ((Wrd185.pObj) [0]);
  (Wrd196.uLng) = (OBJECT_TYPE (Wrd195.Obj));
  if ((Wrd196.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd185.pObj) [0]) = (Wrd186.Obj);

DEFLABEL (label_26)
  (Wrd199.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_14]));
  (Wrd200.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd209.Obj) = ((Wrd199.pObj) [0]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if ((Wrd210.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd199.pObj) [0]) = (Wrd200.Obj);

DEFLABEL (label_23)
  (Wrd213.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_12_15]));
  (Wrd214.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd223.Obj) = ((Wrd213.pObj) [0]);
  (Wrd224.uLng) = (OBJECT_TYPE (Wrd223.Obj));
  if ((Wrd224.uLng) == 50)
    goto label_22;

DEFLABEL (label_21)
  ((Wrd213.pObj) [0]) = (Wrd214.Obj);

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_12_1]);
  goto pop_return;

DEFLABEL (label_22)
  if ((Wrd223.Obj) == (Wrd214.Obj))
    goto label_21;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_20])), (Wrd213.pObj), (Wrd214.Obj));

DEFLABEL (label_17)
  goto label_20;

DEFLABEL (label_25)
  if ((Wrd209.Obj) == (Wrd200.Obj))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_19])), (Wrd199.pObj), (Wrd200.Obj));

DEFLABEL (label_16)
  goto label_23;

DEFLABEL (label_28)
  if ((Wrd195.Obj) == (Wrd186.Obj))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_18])), (Wrd185.pObj), (Wrd186.Obj));

DEFLABEL (label_15)
  goto label_26;

DEFLABEL (label_31)
  if ((Wrd181.Obj) == (Wrd172.Obj))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_17])), (Wrd171.pObj), (Wrd172.Obj));

DEFLABEL (label_14)
  goto label_29;

DEFLABEL (label_34)
  if ((Wrd167.Obj) == (Wrd158.Obj))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_16])), (Wrd157.pObj), (Wrd158.Obj));

DEFLABEL (label_13)
  goto label_32;

DEFLABEL (label_37)
  if ((Wrd153.Obj) == (Wrd144.Obj))
    goto label_36;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_15])), (Wrd143.pObj), (Wrd144.Obj));

DEFLABEL (label_12)
  goto label_35;

DEFLABEL (label_40)
  if ((Wrd139.Obj) == (Wrd130.Obj))
    goto label_39;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_14])), (Wrd129.pObj), (Wrd130.Obj));

DEFLABEL (label_11)
  goto label_38;

DEFLABEL (label_43)
  if ((Wrd125.Obj) == (Wrd116.Obj))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_13])), (Wrd115.pObj), (Wrd116.Obj));

DEFLABEL (label_10)
  goto label_41;

DEFLABEL (label_46)
  if ((Wrd111.Obj) == (Wrd102.Obj))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_12])), (Wrd101.pObj), (Wrd102.Obj));

DEFLABEL (label_9)
  goto label_44;

DEFLABEL (label_49)
  if ((Wrd97.Obj) == (Wrd88.Obj))
    goto label_48;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_11])), (Wrd87.pObj), (Wrd88.Obj));

DEFLABEL (label_8)
  goto label_47;

DEFLABEL (label_52)
  if ((Wrd83.Obj) == (Wrd74.Obj))
    goto label_51;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_10])), (Wrd73.pObj), (Wrd74.Obj));

DEFLABEL (label_7)
  goto label_50;

DEFLABEL (label_55)
  if ((Wrd69.Obj) == (Wrd60.Obj))
    goto label_54;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_9])), (Wrd59.pObj), (Wrd60.Obj));

DEFLABEL (label_6)
  goto label_53;

DEFLABEL (label_58)
  if ((Wrd55.Obj) == (Wrd46.Obj))
    goto label_57;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_8])), (Wrd45.pObj), (Wrd46.Obj));

DEFLABEL (label_5)
  goto label_56;

DEFLABEL (label_61)
  if ((Wrd41.Obj) == (Wrd32.Obj))
    goto label_60;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_7])), (Wrd31.pObj), (Wrd32.Obj));

DEFLABEL (label_4)
  goto label_59;

DEFLABEL (label_64)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_63;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_6])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_3)
  goto label_62;

DEFLABEL (label_67)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_66;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_12_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_65;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_8 9
#define LABEL_13_9 11
#define LABEL_13_10 13
#define LABEL_13_11 15
#define LABEL_13_12 17
#define LABEL_13_13 19
#define LABEL_13_14 21
#define LABEL_13_15 23
#define LABEL_13_16 25
#define LABEL_13_17 27
#define ENVIRONMENT_LABEL_13_3 47
#define DEBUGGING_LABEL_13_2 46
#define OBJECT_13_2 45
#define OBJECT_13_1 44
#define OBJECT_13_0 43
#define EXECUTE_CACHE_13_7 29
#define FREE_ASSIGNMENT_13_10 32
#define FREE_ASSIGNMENT_13_9 33
#define FREE_ASSIGNMENT_13_8 34
#define FREE_ASSIGNMENT_13_7 35
#define FREE_ASSIGNMENT_13_6 36
#define FREE_ASSIGNMENT_13_5 37
#define FREE_ASSIGNMENT_13_4 38
#define FREE_ASSIGNMENT_13_3 39
#define FREE_ASSIGNMENT_13_2 40
#define FREE_ASSIGNMENT_13_1 41
#define FREE_ASSIGNMENT_13_0 42
#define FREE_REFERENCES_LABEL_13_0 28
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_13_4);
      goto initialize_back_endB_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto label_4;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto label_5;

    case 5:
      current_block = (Rpc - LABEL_13_10);
      goto label_6;

    case 6:
      current_block = (Rpc - LABEL_13_11);
      goto label_7;

    case 7:
      current_block = (Rpc - LABEL_13_12);
      goto label_8;

    case 8:
      current_block = (Rpc - LABEL_13_13);
      goto label_9;

    case 9:
      current_block = (Rpc - LABEL_13_14);
      goto label_10;

    case 10:
      current_block = (Rpc - LABEL_13_15);
      goto label_11;

    case 11:
      current_block = (Rpc - LABEL_13_16);
      goto label_12;

    case 12:
      current_block = (Rpc - LABEL_13_17);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_back_endB_15)
DEFLABEL (initialize_back_endB_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_0]));
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_48;

DEFLABEL (label_47)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_46)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_45;

DEFLABEL (label_44)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_43)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_2]));
  (Wrd19.Obj) = (current_block [OBJECT_13_0]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_42;

DEFLABEL (label_41)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_40)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_3]));
  (Wrd31.Obj) = (current_block [OBJECT_13_0]);
  (Wrd38.Obj) = ((Wrd30.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_39;

DEFLABEL (label_38)
  ((Wrd30.pObj) [0]) = (Wrd31.Obj);

DEFLABEL (label_37)
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_4]));
  (Wrd43.Obj) = (current_block [OBJECT_13_1]);
  (Wrd50.Obj) = ((Wrd42.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  ((Wrd42.pObj) [0]) = (Wrd43.Obj);

DEFLABEL (label_34)
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_5]));
  (Wrd55.Obj) = (current_block [OBJECT_13_0]);
  (Wrd62.Obj) = ((Wrd54.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd54.pObj) [0]) = (Wrd55.Obj);

DEFLABEL (label_31)
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_6]));
  (Wrd67.Obj) = (current_block [OBJECT_13_0]);
  (Wrd74.Obj) = ((Wrd66.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd66.pObj) [0]) = (Wrd67.Obj);

DEFLABEL (label_28)
  (Wrd78.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_7]));
  (Wrd79.Obj) = (current_block [OBJECT_13_0]);
  (Wrd86.Obj) = ((Wrd78.pObj) [0]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if ((Wrd87.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd78.pObj) [0]) = (Wrd79.Obj);

DEFLABEL (label_25)
  (Wrd90.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_8]));
  (Wrd91.Obj) = (current_block [OBJECT_13_0]);
  (Wrd98.Obj) = ((Wrd90.pObj) [0]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if ((Wrd99.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd90.pObj) [0]) = (Wrd91.Obj);

DEFLABEL (label_22)
  (Wrd102.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_9]));
  (Wrd103.Obj) = (current_block [OBJECT_13_0]);
  (Wrd110.Obj) = ((Wrd102.pObj) [0]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if ((Wrd111.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd102.pObj) [0]) = (Wrd103.Obj);

DEFLABEL (label_19)
  (Wrd114.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_13_10]));
  (Wrd115.Obj) = (current_block [OBJECT_13_0]);
  (Wrd122.Obj) = ((Wrd114.pObj) [0]);
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if ((Wrd123.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  ((Wrd114.pObj) [0]) = (Wrd115.Obj);

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_13_2]);
  goto pop_return;

DEFLABEL (label_18)
  if ((Wrd122.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_17])), (Wrd114.pObj), (Wrd115.Obj));

DEFLABEL (label_13)
  goto label_16;

DEFLABEL (label_21)
  if ((Wrd110.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_16])), (Wrd102.pObj), (Wrd103.Obj));

DEFLABEL (label_12)
  goto label_19;

DEFLABEL (label_24)
  if ((Wrd98.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_15])), (Wrd90.pObj), (Wrd91.Obj));

DEFLABEL (label_11)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd86.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_14])), (Wrd78.pObj), (Wrd79.Obj));

DEFLABEL (label_10)
  goto label_25;

DEFLABEL (label_30)
  if ((Wrd74.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_13])), (Wrd66.pObj), (Wrd67.Obj));

DEFLABEL (label_9)
  goto label_28;

DEFLABEL (label_33)
  if ((Wrd62.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_12])), (Wrd54.pObj), (Wrd55.Obj));

DEFLABEL (label_8)
  goto label_31;

DEFLABEL (label_36)
  if ((Wrd50.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_11])), (Wrd42.pObj), (Wrd43.Obj));

DEFLABEL (label_7)
  goto label_34;

DEFLABEL (label_39)
  if ((Wrd38.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_38;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_10])), (Wrd30.pObj), (Wrd31.Obj));

DEFLABEL (label_6)
  goto label_37;

DEFLABEL (label_42)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_41;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_9])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_5)
  goto label_40;

DEFLABEL (label_45)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_44;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_8])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_43;

DEFLABEL (label_48)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_47;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_13_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_3)
  goto label_46;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_10 7
#define LABEL_14_7 9
#define LABEL_14_12 11
#define LABEL_14_13 13
#define LABEL_14_14 15
#define LABEL_14_15 17
#define LABEL_14_8 19
#define LABEL_14_9 21
#define LABEL_14_19 23
#define LABEL_14_16 25
#define TAG_14_17 11
#define LABEL_14_21 27
#define LABEL_14_24 29
#define LABEL_14_23 31
#define LABEL_14_27 33
#define LABEL_14_26 35
#define LABEL_14_28 37
#define ENVIRONMENT_LABEL_14_3 66
#define DEBUGGING_LABEL_14_2 65
#define OBJECT_14_5 64
#define OBJECT_14_4 63
#define OBJECT_14_3 62
#define OBJECT_14_2 61
#define OBJECT_14_1 60
#define OBJECT_14_0 59
#define EXECUTE_CACHE_14_25 39
#define EXECUTE_CACHE_14_22 41
#define EXECUTE_CACHE_14_20 43
#define EXECUTE_CACHE_14_18 45
#define EXECUTE_CACHE_14_11 47
#define EXECUTE_CACHE_14_6 49
#define FREE_REFERENCE_14_2 52
#define FREE_REFERENCE_14_1 53
#define FREE_REFERENCE_14_0 54
#define FREE_ASSIGNMENT_14_2 56
#define FREE_ASSIGNMENT_14_1 57
#define FREE_ASSIGNMENT_14_0 58
#define FREE_REFERENCES_LABEL_14_0 38
#define NUMBER_OF_LINKER_SECTIONS_14_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_14_4);
      goto phase_assemble_11;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_14_10);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto lambda_7;

    case 4:
      current_block = (Rpc - LABEL_14_12);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_14_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_14_14);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_14_15);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_14_8);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_14_19);
      goto label_18;

    case 11:
      current_block = (Rpc - LABEL_14_16);
      goto lambda_25;

    case 12:
      current_block = (Rpc - LABEL_14_21);
      goto continuation_0;

    case 13:
      current_block = (Rpc - LABEL_14_24);
      goto label_19;

    case 14:
      current_block = (Rpc - LABEL_14_23);
      goto continuation_2;

    case 15:
      current_block = (Rpc - LABEL_14_27);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_14_26);
      goto continuation_3;

    case 17:
      current_block = (Rpc - LABEL_14_28);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_assemble_22)
DEFLABEL (phase_assemble_11)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (lambda_23)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_14_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_29;
  Wrd13 = Wrd17;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_27;
  Wrd5 = Wrd9;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14_8);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_19])), (Wrd6.pObj));

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_10])), (Wrd14.pObj));

DEFLABEL (label_13)
  (Wrd13.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_24)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_14_7);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_0]));
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_39)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_1]));
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_36)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_14_2]));
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  ((Wrd29.pObj) [0]) = (Wrd30.Obj);

DEFLABEL (label_33)
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_32;
  Wrd41 = Wrd45;

DEFLABEL (label_31)
  if ((Wrd41.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd50.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_16])));
  Rhp += 1;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd50.pObj)));
  Wrd51 = Wrd50;
  (Wrd52.Obj) = (Rsp [0]);
  ((Wrd51.pObj) [2]) = (Wrd52.Obj);
  (Rsp [3]) = (Wrd49.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_18]));

DEFLABEL (label_30)
  Rvl = (current_block [OBJECT_14_1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_15])), (Wrd42.pObj));

DEFLABEL (label_17)
  (Wrd41.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_35)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_14])), (Wrd29.pObj), (Wrd30.Obj));

DEFLABEL (label_16)
  goto label_33;

DEFLABEL (label_38)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_15)
  goto label_36;

DEFLABEL (label_41)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_14_12])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_14)
  goto label_39;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_14_16);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_22]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_46;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd23.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd19.Lng)))
    goto label_46;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_25]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_14_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_22]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_26);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_44;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd25.Lng) > 0)
    goto label_43;

DEFLABEL (label_42)
  (Wrd16.Obj) = (current_block [OBJECT_14_4]);
  (Rsp [0]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_22]));

DEFLABEL (label_43)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_27]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_14_5]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_22]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_27);
  goto label_42;

DEFLABEL (label_44)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_28]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto label_43;

DEFLABEL (label_46)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_24]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_9 7
#define LABEL_15_7 9
#define LABEL_15_13 11
#define LABEL_15_15 13
#define LABEL_15_8 15
#define LABEL_15_20 17
#define LABEL_15_21 19
#define LABEL_15_22 21
#define LABEL_15_24 23
#define LABEL_15_10 25
#define LABEL_15_12 27
#define LABEL_15_29 29
#define LABEL_15_30 31
#define LABEL_15_31 33
#define LABEL_15_32 35
#define LABEL_15_33 37
#define LABEL_15_34 39
#define LABEL_15_35 41
#define LABEL_15_36 43
#define LABEL_15_14 45
#define LABEL_15_17 47
#define TAG_15_18 22
#define LABEL_15_40 49
#define LABEL_15_19 51
#define LABEL_15_41 53
#define LABEL_15_44 55
#define LABEL_15_23 57
#define LABEL_15_49 59
#define LABEL_15_50 61
#define LABEL_15_53 63
#define LABEL_15_25 65
#define LABEL_15_26 67
#define TAG_15_27 32
#define LABEL_15_54 69
#define LABEL_15_56 71
#define LABEL_15_38 73
#define LABEL_15_37 75
#define LABEL_15_42 77
#define TAG_15_43 37
#define LABEL_15_60 79
#define LABEL_15_46 81
#define TAG_15_47 39
#define LABEL_15_61 83
#define LABEL_15_48 85
#define LABEL_15_52 87
#define LABEL_15_51 89
#define LABEL_15_55 91
#define LABEL_15_66 93
#define LABEL_15_59 95
#define LABEL_15_67 97
#define LABEL_15_62 99
#define LABEL_15_63 101
#define LABEL_15_64 103
#define LABEL_15_65 105
#define LABEL_15_69 107
#define LABEL_15_71 109
#define LABEL_15_70 111
#define LABEL_15_72 113
#define ENVIRONMENT_LABEL_15_3 169
#define DEBUGGING_LABEL_15_2 168
#define OBJECT_15_12 167
#define OBJECT_15_11 166
#define OBJECT_15_10 165
#define OBJECT_15_9 164
#define OBJECT_15_8 163
#define OBJECT_15_7 162
#define OBJECT_15_6 161
#define OBJECT_15_5 160
#define OBJECT_15_4 159
#define OBJECT_15_3 158
#define OBJECT_15_2 157
#define OBJECT_15_1 156
#define OBJECT_15_0 155
#define EXECUTE_CACHE_15_68 115
#define EXECUTE_CACHE_15_58 117
#define EXECUTE_CACHE_15_45 119
#define EXECUTE_CACHE_15_39 121
#define EXECUTE_CACHE_15_28 123
#define EXECUTE_CACHE_15_57 125
#define EXECUTE_CACHE_15_16 127
#define EXECUTE_CACHE_15_11 129
#define EXECUTE_CACHE_15_6 131
#define FREE_REFERENCE_15_11 134
#define FREE_REFERENCE_15_10 135
#define FREE_REFERENCE_15_9 136
#define FREE_REFERENCE_15_8 137
#define FREE_REFERENCE_15_7 138
#define FREE_REFERENCE_15_6 139
#define FREE_REFERENCE_15_5 140
#define FREE_REFERENCE_15_4 141
#define FREE_REFERENCE_15_3 142
#define FREE_REFERENCE_15_2 143
#define FREE_REFERENCE_15_1 144
#define FREE_REFERENCE_15_0 145
#define FREE_ASSIGNMENT_15_7 147
#define FREE_ASSIGNMENT_15_6 148
#define FREE_ASSIGNMENT_15_5 149
#define FREE_ASSIGNMENT_15_4 150
#define FREE_ASSIGNMENT_15_3 151
#define FREE_ASSIGNMENT_15_2 152
#define FREE_ASSIGNMENT_15_1 153
#define FREE_ASSIGNMENT_15_0 154
#define FREE_REFERENCES_LABEL_15_0 114
#define NUMBER_OF_LINKER_SECTIONS_15_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd5;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd14;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_15_4);
      goto phase_link_44;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_43;

    case 2:
      current_block = (Rpc - LABEL_15_9);
      goto label_46;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_15_13);
      goto label_47;

    case 5:
      current_block = (Rpc - LABEL_15_15);
      goto label_48;

    case 6:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_15_20);
      goto label_49;

    case 8:
      current_block = (Rpc - LABEL_15_21);
      goto label_52;

    case 9:
      current_block = (Rpc - LABEL_15_22);
      goto label_50;

    case 10:
      current_block = (Rpc - LABEL_15_24);
      goto label_51;

    case 11:
      current_block = (Rpc - LABEL_15_10);
      goto lambda_12;

    case 12:
      current_block = (Rpc - LABEL_15_12);
      goto continuation_41;

    case 13:
      current_block = (Rpc - LABEL_15_29);
      goto label_53;

    case 14:
      current_block = (Rpc - LABEL_15_30);
      goto label_54;

    case 15:
      current_block = (Rpc - LABEL_15_31);
      goto label_55;

    case 16:
      current_block = (Rpc - LABEL_15_32);
      goto label_56;

    case 17:
      current_block = (Rpc - LABEL_15_33);
      goto label_57;

    case 18:
      current_block = (Rpc - LABEL_15_34);
      goto label_58;

    case 19:
      current_block = (Rpc - LABEL_15_35);
      goto label_59;

    case 20:
      current_block = (Rpc - LABEL_15_36);
      goto label_60;

    case 21:
      current_block = (Rpc - LABEL_15_14);
      goto continuation_42;

    case 22:
      current_block = (Rpc - LABEL_15_17);
      goto lambda_17;

    case 23:
      current_block = (Rpc - LABEL_15_40);
      goto continuation_27;

    case 24:
      current_block = (Rpc - LABEL_15_19);
      goto continuation_18;

    case 25:
      current_block = (Rpc - LABEL_15_41);
      goto label_61;

    case 26:
      current_block = (Rpc - LABEL_15_44);
      goto label_62;

    case 27:
      current_block = (Rpc - LABEL_15_23);
      goto continuation_20;

    case 28:
      current_block = (Rpc - LABEL_15_49);
      goto label_63;

    case 29:
      current_block = (Rpc - LABEL_15_50);
      goto lambda_3;

    case 30:
      current_block = (Rpc - LABEL_15_53);
      goto label_64;

    case 31:
      current_block = (Rpc - LABEL_15_25);
      goto continuation_11;

    case 32:
      current_block = (Rpc - LABEL_15_26);
      goto lambda_78;

    case 33:
      current_block = (Rpc - LABEL_15_54);
      goto label_65;

    case 34:
      current_block = (Rpc - LABEL_15_56);
      goto label_66;

    case 35:
      current_block = (Rpc - LABEL_15_38);
      goto continuation_14;

    case 36:
      current_block = (Rpc - LABEL_15_37);
      goto continuation_15;

    case 37:
      current_block = (Rpc - LABEL_15_42);
      goto lambda_79;

    case 38:
      current_block = (Rpc - LABEL_15_60);
      goto label_67;

    case 39:
      current_block = (Rpc - LABEL_15_46);
      goto lambda_25;

    case 40:
      current_block = (Rpc - LABEL_15_61);
      goto label_68;

    case 41:
      current_block = (Rpc - LABEL_15_48);
      goto continuation_19;

    case 42:
      current_block = (Rpc - LABEL_15_52);
      goto continuation_0;

    case 43:
      current_block = (Rpc - LABEL_15_51);
      goto continuation_1;

    case 44:
      current_block = (Rpc - LABEL_15_55);
      goto continuation_9;

    case 45:
      current_block = (Rpc - LABEL_15_66);
      goto label_69;

    case 46:
      current_block = (Rpc - LABEL_15_59);
      goto continuation_36;

    case 47:
      current_block = (Rpc - LABEL_15_67);
      goto label_70;

    case 48:
      current_block = (Rpc - LABEL_15_62);
      goto continuation_23;

    case 49:
      current_block = (Rpc - LABEL_15_63);
      goto continuation_28;

    case 50:
      current_block = (Rpc - LABEL_15_64);
      goto continuation_8;

    case 51:
      current_block = (Rpc - LABEL_15_65);
      goto continuation_6;

    case 52:
      current_block = (Rpc - LABEL_15_69);
      goto continuation_29;

    case 53:
      current_block = (Rpc - LABEL_15_71);
      goto label_71;

    case 54:
      current_block = (Rpc - LABEL_15_70);
      goto continuation_5;

    case 55:
      current_block = (Rpc - LABEL_15_72);
      goto label_72;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_link_74)
DEFLABEL (phase_link_44)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (lambda_75)
DEFLABEL (lambda_43)
  INTERRUPT_CHECK (26, LABEL_15_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_102;
  Wrd11 = Wrd15;

DEFLABEL (label_101)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_11]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_17])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_3]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_100;
  Wrd13 = Wrd17;

DEFLABEL (label_99)
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_96;
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_5]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_95;
  Wrd20 = Wrd24;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_23]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_6]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_93;
  Wrd29 = Wrd33;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd29.Obj);
  goto lambda_3;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_15_23);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_47);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_46])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_48]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_4]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_91;
  Wrd16 = Wrd20;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto lambda_17;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_15_48);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_25;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_15_63);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_25;

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_15_69);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_89;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_89;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_88)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_40]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_11]), 1);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_15_40);
  (Wrd29.Obj) = (* (Rsp++));
  (Wrd30.Obj) = (* (Rsp++));
  (Wrd31.Obj) = (* (Rsp++));
  (Wrd38.Obj) = (MAKE_OBJECT (0, 4));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-5]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd35.pObj)));
  (Wrd42.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  Rsp = (& (Rsp [4]));

DEFLABEL (label_87)
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_7]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_86;

DEFLABEL (label_85)
  ((Wrd6.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_84)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_43);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_42])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd20 = Wrd19;
  (Wrd21.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_8]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_83;
  Wrd23 = Wrd27;

DEFLABEL (label_82)
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_45]));

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_44])), (Wrd24.pObj));

DEFLABEL (label_62)
  (Wrd23.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_86)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_85;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_41])), (Wrd6.pObj), (Wrd5.Obj));

DEFLABEL (label_61)
  goto label_84;

DEFLABEL (label_89)
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (current_block [OBJECT_15_10]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_71]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 2);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_49])), (Wrd17.pObj));

DEFLABEL (label_63)
  (Wrd16.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_24])), (Wrd30.pObj));

DEFLABEL (label_51)
  (Wrd29.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_22])), (Wrd21.pObj));

DEFLABEL (label_50)
  (Wrd20.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_96)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_4]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_98;
  Wrd35 = Wrd39;

DEFLABEL (label_97)
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  goto lambda_17;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_15_19);
  (Wrd5.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_21])), (Wrd36.pObj));

DEFLABEL (label_52)
  (Wrd35.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_20])), (Wrd14.pObj));

DEFLABEL (label_49)
  (Wrd13.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_9])), (Wrd12.pObj));

DEFLABEL (label_46)
  (Wrd11.Obj) = Rvl;
  goto label_101;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_130;
  Wrd8 = Wrd12;

DEFLABEL (label_129)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_15_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_2]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_128;
  Wrd18 = Wrd22;

DEFLABEL (label_127)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_16]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_15_14);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_15_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_7]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_126;
  Wrd5 = Wrd9;

DEFLABEL (label_125)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_104;

DEFLABEL (label_103)
  Rvl = (current_block [OBJECT_15_2]);
  goto pop_return;

DEFLABEL (label_104)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_0]));
  (Wrd14.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd23.Obj) = ((Wrd13.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_124;

DEFLABEL (label_123)
  ((Wrd13.pObj) [0]) = (Wrd14.Obj);

DEFLABEL (label_122)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_1]));
  (Wrd28.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd37.Obj) = ((Wrd27.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_121;

DEFLABEL (label_120)
  ((Wrd27.pObj) [0]) = (Wrd28.Obj);

DEFLABEL (label_119)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_2]));
  (Wrd42.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd51.Obj) = ((Wrd41.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_118;

DEFLABEL (label_117)
  ((Wrd41.pObj) [0]) = (Wrd42.Obj);

DEFLABEL (label_116)
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_3]));
  (Wrd56.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd65.Obj) = ((Wrd55.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_115;

DEFLABEL (label_114)
  ((Wrd55.pObj) [0]) = (Wrd56.Obj);

DEFLABEL (label_113)
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_4]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_112;

DEFLABEL (label_111)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_110)
  (Wrd83.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_5]));
  (Wrd84.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd93.Obj) = ((Wrd83.pObj) [0]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if ((Wrd94.uLng) == 50)
    goto label_109;

DEFLABEL (label_108)
  ((Wrd83.pObj) [0]) = (Wrd84.Obj);

DEFLABEL (label_107)
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_15_6]));
  (Wrd98.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd107.Obj) = ((Wrd97.pObj) [0]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if ((Wrd108.uLng) == 50)
    goto label_106;

DEFLABEL (label_105)
  ((Wrd97.pObj) [0]) = (Wrd98.Obj);
  goto label_103;

DEFLABEL (label_106)
  if ((Wrd107.Obj) == (Wrd98.Obj))
    goto label_105;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_36])), (Wrd97.pObj), (Wrd98.Obj));

DEFLABEL (label_60)
  goto label_103;

DEFLABEL (label_109)
  if ((Wrd93.Obj) == (Wrd84.Obj))
    goto label_108;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_35])), (Wrd83.pObj), (Wrd84.Obj));

DEFLABEL (label_59)
  goto label_107;

DEFLABEL (label_112)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_111;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_34])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_58)
  goto label_110;

DEFLABEL (label_115)
  if ((Wrd65.Obj) == (Wrd56.Obj))
    goto label_114;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_33])), (Wrd55.pObj), (Wrd56.Obj));

DEFLABEL (label_57)
  goto label_113;

DEFLABEL (label_118)
  if ((Wrd51.Obj) == (Wrd42.Obj))
    goto label_117;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_32])), (Wrd41.pObj), (Wrd42.Obj));

DEFLABEL (label_56)
  goto label_116;

DEFLABEL (label_121)
  if ((Wrd37.Obj) == (Wrd28.Obj))
    goto label_120;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_31])), (Wrd27.pObj), (Wrd28.Obj));

DEFLABEL (label_55)
  goto label_119;

DEFLABEL (label_124)
  if ((Wrd23.Obj) == (Wrd14.Obj))
    goto label_123;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_15_30])), (Wrd13.pObj), (Wrd14.Obj));

DEFLABEL (label_54)
  goto label_122;

DEFLABEL (label_126)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_29])), (Wrd6.pObj));

DEFLABEL (label_53)
  (Wrd5.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_128)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_15])), (Wrd19.pObj));

DEFLABEL (label_48)
  (Wrd18.Obj) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_13])), (Wrd9.pObj));

DEFLABEL (label_47)
  (Wrd8.Obj) = Rvl;
  goto label_129;

DEFLABEL (lambda_77)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_15_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_26])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_28]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15_25);
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_76)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_15_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_38]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_39]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_15_38);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_131;
  (Wrd16.Obj) = (current_block [OBJECT_15_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_58]));

DEFLABEL (label_131)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_133)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_132;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  Rvl = ((Wrd8.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_132)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 1);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_15_37);
  (Wrd5.Obj) = Rvl;
  goto label_133;

DEFLABEL (lambda_81)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_15_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_52]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_9]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_138;
  Wrd11 = Wrd15;

DEFLABEL (label_137)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_39]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_52);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_134;
  (Wrd15.Obj) = (current_block [OBJECT_15_7]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_58]));

DEFLABEL (label_134)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_136)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_135;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  Rvl = ((Wrd8.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_135)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 1);

DEFLABEL (label_138)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_53])), (Wrd12.pObj));

DEFLABEL (label_64)
  (Wrd11.Obj) = Rvl;
  goto label_137;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_51);
  (Wrd5.Obj) = Rvl;
  goto label_136;

DEFLABEL (lambda_78)
  CLOSURE_HEADER (LABEL_15_26);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_10]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_146;
  Wrd5 = Wrd9;

DEFLABEL (label_145)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_55]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_11]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_144;
  Wrd14 = Wrd18;

DEFLABEL (label_143)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_57]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_15_55);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_65]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_142;
  Wrd11 = Wrd15;

DEFLABEL (label_141)
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_8]), 1);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15_65);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto lambda_3;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15_70);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_140;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_140;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd14.Lng) = ((Wrd15.Lng) + (Wrd16.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_140;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_139)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_12]), 1);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_15_64);
  (Rsp [2]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_140)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_72]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_72)
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_66])), (Wrd12.pObj));

DEFLABEL (label_69)
  (Wrd11.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_56])), (Wrd15.pObj));

DEFLABEL (label_66)
  (Wrd14.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_54])), (Wrd6.pObj));

DEFLABEL (label_65)
  (Wrd5.Obj) = Rvl;
  goto label_145;

DEFLABEL (lambda_79)
  CLOSURE_HEADER (LABEL_15_42);

DEFLABEL (lambda_37)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_150;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_149)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto lambda_17;

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_15_59);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_148;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_147)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd14.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_68]));

DEFLABEL (label_148)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_67]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_9]), 1);

DEFLABEL (label_70)
  (Wrd5.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_60]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 1);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_149;

DEFLABEL (lambda_80)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_15_46);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_155;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_155;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_155;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd11.pObj) = (& ((Wrd20.pObj) [(Wrd6.Lng)]));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_154)
  (Wrd34.Obj) = (Rsp [0]);
  if (! ((Wrd34.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_151;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_151)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [3]);
  (Rsp [2]) = (Wrd36.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_62]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  goto lambda_3;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_15_62);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 26)
    goto label_153;

DEFLABEL (label_152)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_153)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_152;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd13.Lng) - (Wrd15.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_152;
  Rvl = (LONG_TO_FIXNUM (Wrd11.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_155)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_61]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 2);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_154;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 12
#define DEBUGGING_LABEL_16_2 11
#define EXECUTE_CACHE_16_6 7
#define FREE_REFERENCE_16_0 10
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_16_4);
      goto phase_info_generation_2_0;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (phase_info_generation_2_4)
DEFLABEL (phase_info_generation_2_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define TAG_17_6 1
#define LABEL_17_8 7
#define LABEL_17_11 9
#define LABEL_17_13 11
#define LABEL_17_14 13
#define LABEL_17_15 15
#define LABEL_17_9 17
#define LABEL_17_16 19
#define LABEL_17_17 21
#define LABEL_17_18 23
#define LABEL_17_19 25
#define LABEL_17_20 27
#define LABEL_17_21 29
#define LABEL_17_22 31
#define LABEL_17_23 33
#define LABEL_17_24 35
#define LABEL_17_10 37
#define LABEL_17_29 39
#define LABEL_17_31 41
#define LABEL_17_25 43
#define LABEL_17_32 45
#define LABEL_17_26 47
#define LABEL_17_27 49
#define LABEL_17_30 51
#define LABEL_17_38 53
#define LABEL_17_35 55
#define LABEL_17_37 57
#define LABEL_17_40 59
#define LABEL_17_39 61
#define ENVIRONMENT_LABEL_17_3 102
#define DEBUGGING_LABEL_17_2 101
#define OBJECT_17_8 100
#define OBJECT_17_7 99
#define OBJECT_17_6 98
#define OBJECT_17_5 97
#define OBJECT_17_4 96
#define OBJECT_17_3 95
#define OBJECT_17_2 94
#define OBJECT_17_1 93
#define OBJECT_17_0 92
#define EXECUTE_CACHE_17_41 63
#define EXECUTE_CACHE_17_36 65
#define EXECUTE_CACHE_17_34 67
#define EXECUTE_CACHE_17_33 69
#define EXECUTE_CACHE_17_28 71
#define EXECUTE_CACHE_17_12 73
#define EXECUTE_CACHE_17_7 75
#define FREE_REFERENCE_17_11 78
#define FREE_REFERENCE_17_10 79
#define FREE_REFERENCE_17_9 80
#define FREE_REFERENCE_17_8 81
#define FREE_REFERENCE_17_7 82
#define FREE_REFERENCE_17_6 83
#define FREE_REFERENCE_17_5 84
#define FREE_REFERENCE_17_4 85
#define FREE_REFERENCE_17_3 86
#define FREE_REFERENCE_17_2 87
#define FREE_REFERENCE_17_1 88
#define FREE_REFERENCE_17_0 89
#define FREE_ASSIGNMENT_17_0 91
#define FREE_REFERENCES_LABEL_17_0 62
#define NUMBER_OF_LINKER_SECTIONS_17_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd107;
  machine_word Wrd144;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd98;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd91;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd85;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd79;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd145;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd141;
  machine_word Wrd135;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd136;
  machine_word Wrd128;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd129;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_17_4);
      goto info_generation_2_19;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_41;

    case 2:
      current_block = (Rpc - LABEL_17_8);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_17_11);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_17_13);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_17_14);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_17_15);
      goto label_35;

    case 7:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_17_16);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_17_17);
      goto label_24;

    case 10:
      current_block = (Rpc - LABEL_17_18);
      goto label_25;

    case 11:
      current_block = (Rpc - LABEL_17_19);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_17_20);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_17_21);
      goto label_28;

    case 14:
      current_block = (Rpc - LABEL_17_22);
      goto label_29;

    case 15:
      current_block = (Rpc - LABEL_17_23);
      goto label_30;

    case 16:
      current_block = (Rpc - LABEL_17_24);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_17_10);
      goto continuation_3;

    case 18:
      current_block = (Rpc - LABEL_17_29);
      goto label_32;

    case 19:
      current_block = (Rpc - LABEL_17_31);
      goto label_33;

    case 20:
      current_block = (Rpc - LABEL_17_25);
      goto continuation_12;

    case 21:
      current_block = (Rpc - LABEL_17_32);
      goto label_36;

    case 22:
      current_block = (Rpc - LABEL_17_26);
      goto continuation_10;

    case 23:
      current_block = (Rpc - LABEL_17_27);
      goto continuation_9;

    case 24:
      current_block = (Rpc - LABEL_17_30);
      goto continuation_2;

    case 25:
      current_block = (Rpc - LABEL_17_38);
      goto label_37;

    case 26:
      current_block = (Rpc - LABEL_17_35);
      goto lambda_8;

    case 27:
      current_block = (Rpc - LABEL_17_37);
      goto continuation_1;

    case 28:
      current_block = (Rpc - LABEL_17_40);
      goto label_38;

    case 29:
      current_block = (Rpc - LABEL_17_39);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (info_generation_2_40)
DEFLABEL (info_generation_2_19)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [0]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_17_5);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_83;
  Wrd5 = Wrd9;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_81;
  Wrd20 = Wrd24;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_17_10);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_8]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_79;
  Wrd5 = Wrd9;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_30]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_9]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_77;
  Wrd14 = Wrd18;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_10]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_75;
  Wrd8 = Wrd12;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_37);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_11]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_73;
  Wrd8 = Wrd12;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_39);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_41]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  if ((Wrd7.Obj) == (current_block [OBJECT_17_4]))
    goto label_71;
  if ((Wrd7.Obj) == (current_block [OBJECT_17_5]))
    goto label_51;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_25]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_26]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_27]))));
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_28]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_17_27);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_35]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_36]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_17_26);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_34]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17_25);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_3]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_50;
  Wrd6 = Wrd10;

DEFLABEL (label_49)
  (Wrd12.Obj) = (* (Rsp++));
  (Wrd18.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd19.Obj) = (current_block [OBJECT_17_6]);
  (Wrd20.Obj) = (current_block [OBJECT_17_2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd14.pObj) = (& (Rhp [-5]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_33]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_17_13);
  (Wrd129.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_2]));
  (Wrd132.Obj) = ((Wrd129.pObj) [0]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if ((Wrd133.uLng) == 50)
    goto label_48;
  Wrd128 = Wrd132;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd128.Obj);
  (Wrd136.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_3]));
  (Wrd139.Obj) = ((Wrd136.pObj) [0]);
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd139.Obj));
  if ((Wrd140.uLng) == 50)
    goto label_46;
  Wrd135 = Wrd139;

DEFLABEL (label_45)
  (Wrd141.Obj) = (* (Rsp++));
  (Wrd149.Obj) = (MAKE_OBJECT (0, 6));
  (Wrd150.Obj) = (current_block [OBJECT_17_1]);
  (Wrd151.Obj) = (current_block [OBJECT_17_2]);
  (* (Rhp++)) = (Wrd149.Obj);
  (* (Rhp++)) = (Wrd150.Obj);
  (* (Rhp++)) = (Wrd151.Obj);
  (* (Rhp++)) = (Wrd135.Obj);
  (Wrd145.Obj) = (current_block [OBJECT_17_3]);
  (* (Rhp++)) = (Wrd141.Obj);
  (* (Rhp++)) = (Wrd145.Obj);

DEFLABEL (label_44)
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_43)
  (Wrd144.pObj) = (& (Rhp [-7]));
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd144.pObj)));
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd107.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_15])), (Wrd136.pObj));

DEFLABEL (label_35)
  (Wrd135.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_14])), (Wrd129.pObj));

DEFLABEL (label_34)
  (Wrd128.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_32])), (Wrd7.pObj));

DEFLABEL (label_36)
  (Wrd6.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_51)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_4]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_70;
  Wrd28 = Wrd32;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_68;
  Wrd34 = Wrd38;

DEFLABEL (label_67)
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_5]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_66;
  Wrd40 = Wrd44;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_6]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_64;
  Wrd46 = Wrd50;

DEFLABEL (label_63)
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_7]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_62;
  Wrd53 = Wrd57;

DEFLABEL (label_61)
  (Wrd59.Obj) = (* (Rsp++));
  (Wrd60.Obj) = (* (Rsp++));
  (Wrd61.Obj) = (* (Rsp++));
  (Wrd65.Obj) = ((SCHEME_OBJECT) 0);
  (Wrd67.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd68.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd64.pObj) = (& (Rhp [-6]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd64.pObj)));
  (Wrd69.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd69.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (Wrd73.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_17_0]));
  (Wrd81.Obj) = ((Wrd73.pObj) [0]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if ((Wrd82.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd73.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_58)
  (Wrd86.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_2]));
  (Wrd89.Obj) = ((Wrd86.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_57;
  Wrd85 = Wrd89;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd92.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_7]));
  (Wrd95.Obj) = ((Wrd92.pObj) [0]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd96.uLng) == 50)
    goto label_55;
  Wrd91 = Wrd95;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd99.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_3]));
  (Wrd102.Obj) = ((Wrd99.pObj) [0]);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd103.uLng) == 50)
    goto label_53;
  Wrd98 = Wrd102;

DEFLABEL (label_52)
  (Wrd104.Obj) = (* (Rsp++));
  (Wrd105.Obj) = (* (Rsp++));
  (Wrd113.Obj) = (MAKE_OBJECT (0, 6));
  (Wrd114.Obj) = (current_block [OBJECT_17_1]);
  (Wrd115.Obj) = (current_block [OBJECT_17_2]);
  (* (Rhp++)) = (Wrd113.Obj);
  (* (Rhp++)) = (Wrd114.Obj);
  (* (Rhp++)) = (Wrd115.Obj);
  (* (Rhp++)) = (Wrd98.Obj);
  (* (Rhp++)) = (Wrd105.Obj);
  (* (Rhp++)) = (Wrd104.Obj);
  goto label_44;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_24])), (Wrd99.pObj));

DEFLABEL (label_31)
  (Wrd98.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_23])), (Wrd92.pObj));

DEFLABEL (label_30)
  (Wrd91.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_22])), (Wrd86.pObj));

DEFLABEL (label_29)
  (Wrd85.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_60)
  (Wrd79.Obj) = (MAKE_OBJECT (50, (Wrd65.uLng)));
  if ((Wrd81.Obj) == (Wrd79.Obj))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_17_21])), (Wrd73.pObj), (Wrd70.Obj));

DEFLABEL (label_28)
  goto label_58;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_20])), (Wrd54.pObj));

DEFLABEL (label_27)
  (Wrd53.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_19])), (Wrd47.pObj));

DEFLABEL (label_26)
  (Wrd46.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_18])), (Wrd41.pObj));

DEFLABEL (label_25)
  (Wrd40.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_17])), (Wrd35.pObj));

DEFLABEL (label_24)
  (Wrd34.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_16])), (Wrd29.pObj));

DEFLABEL (label_23)
  (Wrd28.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_71)
  (Wrd124.Obj) = (MAKE_OBJECT (0, 6));
  (Wrd125.Obj) = (current_block [OBJECT_17_1]);
  (Wrd126.Obj) = (current_block [OBJECT_17_2]);
  (* (Rhp++)) = (Wrd124.Obj);
  (* (Rhp++)) = (Wrd125.Obj);
  (* (Rhp++)) = (Wrd126.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = Rvl;
  goto label_43;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_40])), (Wrd9.pObj));

DEFLABEL (label_38)
  (Wrd8.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_38])), (Wrd9.pObj));

DEFLABEL (label_37)
  (Wrd8.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_31])), (Wrd15.pObj));

DEFLABEL (label_33)
  (Wrd14.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_29])), (Wrd6.pObj));

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_11])), (Wrd21.pObj));

DEFLABEL (label_22)
  (Wrd20.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_8])), (Wrd6.pObj));

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_82;

DEFLABEL (lambda_42)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_17_35);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_7]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_85;

DEFLABEL (label_84)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_8]), 2);

DEFLABEL (label_85)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_84;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_6 5
#define LABEL_18_5 7
#define LABEL_18_8 9
#define LABEL_18_9 11
#define ENVIRONMENT_LABEL_18_3 21
#define DEBUGGING_LABEL_18_2 20
#define OBJECT_18_2 19
#define OBJECT_18_1 18
#define OBJECT_18_0 17
#define EXECUTE_CACHE_18_7 13
#define FREE_REFERENCE_18_0 16
#define FREE_REFERENCES_LABEL_18_0 12
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd39;
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
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_18_4);
      goto recursive_compilation_results_3;

    case 1:
      current_block = (Rpc - LABEL_18_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_2;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (recursive_compilation_results_9)
DEFLABEL (recursive_compilation_results_3)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_12;
  Wrd7 = Wrd11;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_6])), (Wrd8.pObj));

DEFLABEL (label_5)
  (Wrd7.Obj) = Rvl;
  goto label_11;

DEFLABEL (lambda_10)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_18_5);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_17;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_17;
  (Wrd21.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_16)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if ((Wrd39.Lng) < (Wrd40.Lng))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_18_2]);

DEFLABEL (label_13)
DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_18_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_7)
  (Wrd21.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_18_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
asstop_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto compiler_dump_inf_file_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_dump_inf_file_3)
DEFLABEL (compiler_dump_inf_file_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_7 7
#define LABEL_20_8 9
#define LABEL_20_10 11
#define ENVIRONMENT_LABEL_20_3 22
#define DEBUGGING_LABEL_20_2 21
#define OBJECT_20_1 20
#define OBJECT_20_0 19
#define EXECUTE_CACHE_20_11 13
#define EXECUTE_CACHE_20_9 15
#define EXECUTE_CACHE_20_6 17
#define FREE_REFERENCES_LABEL_20_0 12
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_20_4);
      goto compiler_dump_bif_bsm_files_6;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_dump_bif_bsm_files_9)
DEFLABEL (compiler_dump_bif_bsm_files_6)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define LABEL_21_8 9
#define LABEL_21_10 11
#define ENVIRONMENT_LABEL_21_3 22
#define DEBUGGING_LABEL_21_2 21
#define OBJECT_21_1 20
#define OBJECT_21_0 19
#define EXECUTE_CACHE_21_11 13
#define EXECUTE_CACHE_21_9 15
#define EXECUTE_CACHE_21_6 17
#define FREE_REFERENCES_LABEL_21_0 12
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_21_4);
      goto compiler_dump_bci_bcs_files_6;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_dump_bci_bcs_files_9)
DEFLABEL (compiler_dump_bci_bcs_files_6)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define ENVIRONMENT_LABEL_22_3 17
#define DEBUGGING_LABEL_22_2 16
#define OBJECT_22_0 15
#define EXECUTE_CACHE_22_9 9
#define EXECUTE_CACHE_22_8 11
#define EXECUTE_CACHE_22_6 13
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_22_4);
      goto compiler_dump_bci_file_3;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compiler_dump_bci_file_6)
DEFLABEL (compiler_dump_bci_file_3)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define TAG_23_6 1
#define LABEL_23_8 7
#define ENVIRONMENT_LABEL_23_3 16
#define DEBUGGING_LABEL_23_2 15
#define EXECUTE_CACHE_23_10 9
#define EXECUTE_CACHE_23_9 11
#define EXECUTE_CACHE_23_7 13
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_23_4);
      goto dump_compressed_2;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_23_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dump_compressed_5)
DEFLABEL (dump_compressed_2)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_23_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_8);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_10]));

INVOKE_INTERFACE_TARGET_0
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
asstop_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto compile_data_from_file_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_data_from_file_3)
DEFLABEL (compile_data_from_file_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_24_1]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_8 7
#define LABEL_25_9 9
#define LABEL_25_10 11
#define LABEL_25_11 13
#define LABEL_25_12 15
#define LABEL_25_13 17
#define LABEL_25_14 19
#define LABEL_25_15 21
#define LABEL_25_16 23
#define LABEL_25_17 25
#define LABEL_25_18 27
#define LABEL_25_20 29
#define LABEL_25_21 31
#define LABEL_25_22 33
#define LABEL_25_23 35
#define LABEL_25_25 37
#define LABEL_25_27 39
#define ENVIRONMENT_LABEL_25_3 68
#define DEBUGGING_LABEL_25_2 67
#define OBJECT_25_1 66
#define OBJECT_25_0 65
#define EXECUTE_CACHE_25_26 41
#define EXECUTE_CACHE_25_24 43
#define EXECUTE_CACHE_25_19 45
#define EXECUTE_CACHE_25_7 47
#define FREE_REFERENCE_25_0 50
#define FREE_ASSIGNMENT_25_12 52
#define FREE_ASSIGNMENT_25_11 53
#define FREE_ASSIGNMENT_25_10 54
#define FREE_ASSIGNMENT_25_9 55
#define FREE_ASSIGNMENT_25_8 56
#define FREE_ASSIGNMENT_25_7 57
#define FREE_ASSIGNMENT_25_6 58
#define FREE_ASSIGNMENT_25_5 59
#define FREE_ASSIGNMENT_25_4 60
#define FREE_ASSIGNMENT_25_3 61
#define FREE_ASSIGNMENT_25_2 62
#define FREE_ASSIGNMENT_25_1 63
#define FREE_ASSIGNMENT_25_0 64
#define FREE_REFERENCES_LABEL_25_0 40
#define NUMBER_OF_LINKER_SECTIONS_25_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd131;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_25_4);
      goto lap__code_4;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto lambda_22;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_25_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_25_11);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_25_12);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_25_13);
      goto label_11;

    case 8:
      current_block = (Rpc - LABEL_25_14);
      goto label_12;

    case 9:
      current_block = (Rpc - LABEL_25_15);
      goto label_13;

    case 10:
      current_block = (Rpc - LABEL_25_16);
      goto label_14;

    case 11:
      current_block = (Rpc - LABEL_25_17);
      goto label_15;

    case 12:
      current_block = (Rpc - LABEL_25_18);
      goto continuation_0;

    case 13:
      current_block = (Rpc - LABEL_25_20);
      goto label_16;

    case 14:
      current_block = (Rpc - LABEL_25_21);
      goto label_17;

    case 15:
      current_block = (Rpc - LABEL_25_22);
      goto label_18;

    case 16:
      current_block = (Rpc - LABEL_25_23);
      goto continuation_1;

    case 17:
      current_block = (Rpc - LABEL_25_25);
      goto continuation_2;

    case 18:
      current_block = (Rpc - LABEL_25_27);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lap__code_21)
DEFLABEL (lap__code_4)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_7]));

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_25_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_0]));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Wrd15.Obj) = ((Wrd5.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_63;

DEFLABEL (label_62)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_61)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_1]));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [3]);
  (Wrd29.Obj) = ((Wrd19.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd19.pObj) [0]) = (Wrd20.Obj);

DEFLABEL (label_58)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_2]));
  (Wrd34.Obj) = (current_block [OBJECT_25_0]);
  (Wrd41.Obj) = ((Wrd33.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_57;

DEFLABEL (label_56)
  ((Wrd33.pObj) [0]) = (Wrd34.Obj);

DEFLABEL (label_55)
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_3]));
  (Wrd46.Obj) = (current_block [OBJECT_25_0]);
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_54;

DEFLABEL (label_53)
  ((Wrd45.pObj) [0]) = (Wrd46.Obj);

DEFLABEL (label_52)
  (Wrd57.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_4]));
  (Wrd58.Obj) = (current_block [OBJECT_25_1]);
  (Wrd65.Obj) = ((Wrd57.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_51;

DEFLABEL (label_50)
  ((Wrd57.pObj) [0]) = (Wrd58.Obj);

DEFLABEL (label_49)
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_5]));
  (Wrd70.Obj) = (current_block [OBJECT_25_1]);
  (Wrd77.Obj) = ((Wrd69.pObj) [0]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd78.uLng) == 50)
    goto label_48;

DEFLABEL (label_47)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_46)
  (Wrd81.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_6]));
  (Wrd82.Obj) = (current_block [OBJECT_25_1]);
  (Wrd89.Obj) = ((Wrd81.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_45;

DEFLABEL (label_44)
  ((Wrd81.pObj) [0]) = (Wrd82.Obj);

DEFLABEL (label_43)
  (Wrd93.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_7]));
  (Wrd94.Obj) = (current_block [OBJECT_25_1]);
  (Wrd101.Obj) = ((Wrd93.pObj) [0]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if ((Wrd102.uLng) == 50)
    goto label_42;

DEFLABEL (label_41)
  ((Wrd93.pObj) [0]) = (Wrd94.Obj);

DEFLABEL (label_40)
  (Wrd105.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_8]));
  (Wrd106.Obj) = (current_block [OBJECT_25_1]);
  (Wrd113.Obj) = ((Wrd105.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_39;

DEFLABEL (label_38)
  ((Wrd105.pObj) [0]) = (Wrd106.Obj);

DEFLABEL (label_37)
  (Wrd117.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_9]));
  (Wrd118.Obj) = (current_block [OBJECT_25_1]);
  (Wrd125.Obj) = ((Wrd117.pObj) [0]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if ((Wrd126.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  ((Wrd117.pObj) [0]) = (Wrd118.Obj);

DEFLABEL (label_34)
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_18]))));
  (* (--Rsp)) = (Wrd131.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_19]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_18);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_10]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_31)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_11]));
  (Wrd19.Obj) = (current_block [OBJECT_25_1]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_28)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_25_12]));
  (Wrd31.Obj) = (current_block [OBJECT_25_1]);
  (Wrd38.Obj) = ((Wrd30.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd30.pObj) [0]) = (Wrd31.Obj);

DEFLABEL (label_25)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_23]))));
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_24]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_26]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_25);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_24;
  Wrd6 = Wrd10;

DEFLABEL (label_23)
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_27])), (Wrd7.pObj));

DEFLABEL (label_19)
  (Wrd6.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_27)
  if ((Wrd38.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_22])), (Wrd30.pObj), (Wrd31.Obj));

DEFLABEL (label_18)
  goto label_25;

DEFLABEL (label_30)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_21])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_17)
  goto label_28;

DEFLABEL (label_33)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_20])), (Wrd6.pObj), Rvl);

DEFLABEL (label_16)
  goto label_31;

DEFLABEL (label_36)
  if ((Wrd125.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_17])), (Wrd117.pObj), (Wrd118.Obj));

DEFLABEL (label_15)
  goto label_34;

DEFLABEL (label_39)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_38;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_16])), (Wrd105.pObj), (Wrd106.Obj));

DEFLABEL (label_14)
  goto label_37;

DEFLABEL (label_42)
  if ((Wrd101.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_41;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_15])), (Wrd93.pObj), (Wrd94.Obj));

DEFLABEL (label_13)
  goto label_40;

DEFLABEL (label_45)
  if ((Wrd89.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_44;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_14])), (Wrd81.pObj), (Wrd82.Obj));

DEFLABEL (label_12)
  goto label_43;

DEFLABEL (label_48)
  if ((Wrd77.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_47;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_13])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_11)
  goto label_46;

DEFLABEL (label_51)
  if ((Wrd65.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_50;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_12])), (Wrd57.pObj), (Wrd58.Obj));

DEFLABEL (label_10)
  goto label_49;

DEFLABEL (label_54)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_53;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_11])), (Wrd45.pObj), (Wrd46.Obj));

DEFLABEL (label_9)
  goto label_52;

DEFLABEL (label_57)
  if ((Wrd41.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_56;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_10])), (Wrd33.pObj), (Wrd34.Obj));

DEFLABEL (label_8)
  goto label_55;

DEFLABEL (label_60)
  if ((Wrd29.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_9])), (Wrd19.pObj), (Wrd20.Obj));

DEFLABEL (label_7)
  goto label_58;

DEFLABEL (label_63)
  if ((Wrd15.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_62;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_25_8])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_6)
  goto label_61;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 5
#define DEBUGGING_LABEL_26_2 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asstop_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto canonicalize_label_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_label_name_3)
DEFLABEL (canonicalize_label_name_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define ENVIRONMENT_LABEL_3 28
#define DEBUGGING_LABEL_2 27
#define PURIFICATION_ROOT 26
#define OBJECT_6 25
#define OBJECT_5 24
#define OBJECT_4 23
#define OBJECT_3 22
#define OBJECT_2 21
#define OBJECT_1 20
#define OBJECT_0 19
#define FREE_REFERENCE_0 15
#define GLOBAL_EXECUTE_CACHE_5 17
#define FREE_REFERENCES_LABEL_0 14
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
asstop_so_1b0245cffa7fbd0f (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto expression_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_3)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_9])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_8)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_7)
  {
    static const short sections [] =
      {
	0,
	0,
	3,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	3,
	2,
	3,
	3,
	2,
	1,
	3,
	3,
	2,
	2,
	0,
	0,
	0,
	0,
	1,
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 26)
      goto label_6;
    blocks = (current_block [OBJECT_6]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_8])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_6)
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
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_5]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_asstop_so_1b0245cffa7fbd0f [26] =
  {
    { "asstop_so_code_1", 2, asstop_so_code_1 },
    { "asstop_so_code_2", 1, asstop_so_code_2 },
    { "asstop_so_code_3", 1, asstop_so_code_3 },
    { "asstop_so_code_4", 1, asstop_so_code_4 },
    { "asstop_so_code_5", 1, asstop_so_code_5 },
    { "asstop_so_code_6", 1, asstop_so_code_6 },
    { "asstop_so_code_7", 1, asstop_so_code_7 },
    { "asstop_so_code_8", 5, asstop_so_code_8 },
    { "asstop_so_code_9", 8, asstop_so_code_9 },
    { "asstop_so_code_10", 6, asstop_so_code_10 },
    { "asstop_so_code_11", 48, asstop_so_code_11 },
    { "asstop_so_code_12", 17, asstop_so_code_12 },
    { "asstop_so_code_13", 13, asstop_so_code_13 },
    { "asstop_so_code_14", 18, asstop_so_code_14 },
    { "asstop_so_code_15", 56, asstop_so_code_15 },
    { "asstop_so_code_16", 2, asstop_so_code_16 },
    { "asstop_so_code_17", 30, asstop_so_code_17 },
    { "asstop_so_code_18", 5, asstop_so_code_18 },
    { "asstop_so_code_19", 1, asstop_so_code_19 },
    { "asstop_so_code_20", 5, asstop_so_code_20 },
    { "asstop_so_code_21", 5, asstop_so_code_21 },
    { "asstop_so_code_22", 3, asstop_so_code_22 },
    { "asstop_so_code_23", 3, asstop_so_code_23 },
    { "asstop_so_code_24", 1, asstop_so_code_24 },
    { "asstop_so_code_25", 19, asstop_so_code_25 },
    { "asstop_so_code_26", 1, asstop_so_code_26 }
  };

int
decl_asstop_so_1b0245cffa7fbd0f (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_asstop_so_1b0245cffa7fbd0f);
  return (0);
}

DECLARE_COMPILED_CODE ("asstop.so", 6, decl_asstop_so_1b0245cffa7fbd0f, asstop_so_1b0245cffa7fbd0f)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_asstop_so_data_1b0245cffa7fbd0f [5354] =
  "\xbb\x01\x35\xb3\x09\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0c\x0d"
  "\x24\x22\x29\x22\x29\x21\x17\x2b\xb9\x1d\xb0\x82\x88\x07\x28\x0d"
  "\x23\x22\x29\x21\x17\x2b\xba\x1d\xb0\x83\x88\x28\x0d\x23\x22\x29"
  "\x21\x9f\x2b\xbb\x1d\xb0\x84\x88\x22\x29\x21\x9c\x2b\xbc\x1d\xb0"
  "\x85\x88\x22\x29\x21\x9c\x2b\xbd\x1d\xb0\x86\x88\x22\x29\x21\x9c"
  "\x2b\xbe\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\xbf\x1d\xb0\x02\x88"
  "\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x08\x0d\x1c\x25\x1b"
  "\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x1b\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x1b\x25\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x08\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x25\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x80\x08\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x25\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x1d\x0c\x1b\x1b\x1b\x25\x0d\x1c"
  "\x0d\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\xc1"
  "\x82\xc1\xc1\x0c\x80\xc2\x1c\xc1\x0c\x1d\x81\x0c\x1b\x1b\x0d\x1c"
  "\x1b\x1b\x0d\x1c\x0d\x1c\x1b\x25\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x0d"
  "\x1b\x1b\x0d\x0d\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x81\x0d\x0d\x0d\x80\x82\x0d\x0c\x1b\x25"
  "\x1b\x1b\x0d\x0d\x1b\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x24\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x1b\x80\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x80"
  "\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x25\x1b\x24"
  "\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x17\x1c\x88"
  "\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x0d\x0d\x1b\x9a\xc3\x1b\x1b\x0d"
  "\x1c\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x17\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1e"
  "\x1e\x1e\x1e\x1e\x1e\xb7\x2a\xb6\x2a\xb5\x2a\xb4\x2a\xb3\x2a\xb2"
  "\x2a\xb1\x2a\x17\x28\x0d\x26\x1b\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x02\x59\x2f\x55\x73\x65\x72\x73\x2f"
  "\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d"
  "\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63"
  "\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x2f\x62\x61\x73\x65\x2f\x61\x73\x73\x74\x6f\x70\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x04\x6d\x6f\x63\x04\x63\x6f\x6d\x1a"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x63\x72\x6f\x73\x73\x2d\x63"
  "\x6f\x6d\x70\x69\x6c\x69\x6e\x67\x3f\x02\x08\x06\x81\x81\x02\x07"
  "\x04\x82\x02\x05\x0c\x02\x05\x08\x66\x61\x73\x64\x75\x6d\x70\x02"
  "\x09\x04\x84\x06\x03\x0a\x02\x04\x0b\x73\x63\x6f\x64\x65\x2d\x65"
  "\x76\x61\x6c\x02\x0a\x04\x84\x06\x03\x02\x0b\x04\x83\x04\x03\x02"
  "\x0c\x04\x85\x08\x03\x02\x0d\x04\x83\x04\x03\x02\x08\x0e\x04\x83"
  "\x04\x03\x02\x09\x09\x2a\x72\x65\x73\x75\x6c\x74\x2a\x09\x02\x02"
  "\x0f\x70\x68\x61\x73\x65\x2f\x61\x73\x73\x65\x6d\x62\x6c\x65\x0a"
  "\x02\x0b\x70\x68\x61\x73\x65\x2f\x6c\x69\x6e\x6b\x0b\x03\x18\x70"
  "\x68\x61\x73\x65\x2f\x69\x6e\x66\x6f\x2d\x67\x65\x6e\x65\x72\x61"
  "\x74\x69\x6f\x6e\x2d\x32\x0c\x04\x13\x0c\x81\x83\x02\x12\x0a\x81"
  "\x83\x02\x11\x08\x81\x83\x02\x10\x06\x81\x83\x02\x0f\x04\x83\x04"
  "\x0b\x17\x0d\x02\x0a\x14\x2a\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x72\x65\x73\x75\x6c\x74\x3f\x2a\x0e\x0e\x2a\x62\x6c\x6f\x63"
  "\x6b\x2d\x6c\x61\x62\x65\x6c\x2a\x0f\x03\x04\x15\x6c\x61\x70\x3a"
  "\x6d\x61\x6b\x65\x2d\x65\x6e\x74\x72\x79\x2d\x70\x6f\x69\x6e\x74"
  "\x03\x08\x75\x6e\x71\x75\x6f\x74\x65\x03\x11\x75\x6e\x71\x75\x6f"
  "\x74\x65\x2d\x73\x70\x6c\x69\x63\x69\x6e\x67\x03\x04\x6c\x61\x70"
  "\x10\x04\x10\x03\x0c\x65\x6e\x74\x72\x79\x2d\x70\x6f\x69\x6e\x74"
  "\x07\x1b\x12\x81\x85\x02\x1a\x10\x81\x8b\x02\x19\x0e\x81\x89\x02"
  "\x18\x0c\x81\x87\x02\x17\x0a\x81\x85\x02\x16\x08\x81\x89\x02\x15"
  "\x06\x81\x89\x02\x14\x04\x84\x06\x11\x24\x10\x02\x0b\x02\x20\x2a"
  "\x72\x65\x63\x75\x72\x73\x69\x76\x65\x2d\x63\x6f\x6d\x70\x69\x6c"
  "\x61\x74\x69\x6f\x6e\x2d\x72\x65\x73\x75\x6c\x74\x73\x2a\x11\x02"
  "\x11\x02\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69"
  "\x64\x2d\x62\x69\x6e\x64\x12\x02\x21\x0e\x81\x83\x02\x20\x0c\x81"
  "\x85\x02\x1f\x0a\x81\x83\x02\x1e\x08\x81\x83\x02\x1d\x06\x81\x83"
  "\x02\x1c\x04\x83\x04\x0d\x19\x13\x02\x0c\x02\x15\x2a\x62\x6c\x6f"
  "\x63\x6b\x2d\x61\x73\x73\x6f\x63\x69\x61\x74\x69\x6f\x6e\x73\x2a"
  "\x14\x0f\x12\x2a\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x6c\x61\x62"
  "\x65\x6c\x73\x2a\x15\x14\x2a\x65\x6e\x64\x2d\x6f\x66\x2d\x62\x6c"
  "\x6f\x63\x6b\x2d\x63\x6f\x64\x65\x2a\x16\x10\x2a\x6e\x65\x78\x74"
  "\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2a\x17\x17\x2a\x69\x6e\x74"
  "\x65\x72\x6e\x65\x64\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x73\x2a\x18\x15\x2a\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x63\x6f"
  "\x6e\x73\x74\x61\x6e\x74\x73\x2a\x19\x18\x2a\x69\x6e\x74\x65\x72"
  "\x6e\x65\x64\x2d\x67\x6c\x6f\x62\x61\x6c\x2d\x6c\x69\x6e\x6b\x73"
  "\x2a\x1a\x1c\x2a\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73\x74\x61"
  "\x74\x69\x63\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x2a\x1b\x15"
  "\x2a\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x75\x75\x6f\x2d\x6c\x69"
  "\x6e\x6b\x73\x2a\x1c\x15\x2a\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x2a\x1d\x11\x2a\x6c\x61\x62"
  "\x65\x6c\x2d\x62\x69\x6e\x64\x69\x6e\x67\x73\x2a\x1e\x0e\x2a\x63"
  "\x6f\x64\x65\x2d\x76\x65\x63\x74\x6f\x72\x2a\x1f\x0f\x2a\x65\x6e"
  "\x74\x72\x79\x2d\x70\x6f\x69\x6e\x74\x73\x2a\x20\x09\x10\x14\x0f"
  "\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x1e\x1f\x20\x09\x10\x05\x12"
  "\x02\x51\x62\x81\x83\x02\x50\x60\x81\x85\x02\x4f\x5e\x81\x83\x02"
  "\x4e\x5c\x81\x83\x02\x4d\x5a\x81\x85\x02\x4c\x58\x81\x83\x02\x4b"
  "\x56\x81\x83\x02\x4a\x54\x81\x85\x02\x49\x52\x81\x83\x02\x48\x50"
  "\x81\x83\x02\x47\x4e\x81\x85\x02\x46\x4c\x81\x83\x02\x45\x4a\x81"
  "\x83\x02\x44\x48\x81\x85\x02\x43\x46\x81\x83\x02\x42\x44\x81\x83"
  "\x02\x41\x42\x81\x85\x02\x40\x40\x81\x83\x02\x3f\x3e\x81\x83\x02"
  "\x3e\x3c\x81\x85\x02\x3d\x3a\x81\x83\x02\x3c\x38\x81\x83\x02\x3b"
  "\x36\x81\x85\x02\x3a\x34\x81\x83\x02\x39\x32\x81\x83\x02\x38\x30"
  "\x81\x85\x02\x37\x2e\x81\x83\x02\x36\x2c\x81\x83\x02\x35\x2a\x81"
  "\x85\x02\x34\x28\x81\x83\x02\x33\x26\x81\x83\x02\x32\x24\x81\x85"
  "\x02\x31\x22\x81\x83\x02\x30\x20\x81\x83\x02\x2f\x1e\x81\x85\x02"
  "\x2e\x1c\x81\x83\x02\x2d\x1a\x81\x83\x02\x2c\x18\x81\x85\x02\x2b"
  "\x16\x81\x83\x02\x2a\x14\x81\x83\x02\x29\x12\x81\x85\x02\x28\x10"
  "\x81\x83\x02\x27\x0e\x81\x83\x02\x26\x0c\x81\x85\x02\x25\x0a\x81"
  "\x83\x02\x24\x08\x81\x83\x02\x23\x06\x81\x83\x02\x22\x04\x83\x04"
  "\x61\x88\x01\x12\x02\x0d\x02\x11\x14\x0f\x15\x16\x17\x18\x19\x1a"
  "\x1b\x1c\x1d\x1e\x1f\x20\x09\x11\x62\x24\x81\x81\x02\x61\x22\x81"
  "\x81\x02\x60\x20\x81\x81\x02\x5f\x1e\x81\x81\x02\x5e\x1c\x81\x81"
  "\x02\x5d\x1a\x81\x81\x02\x5c\x18\x81\x81\x02\x5b\x16\x81\x81\x02"
  "\x5a\x14\x81\x81\x02\x59\x12\x81\x81\x02\x58\x10\x81\x81\x02\x57"
  "\x0e\x81\x81\x02\x56\x0c\x81\x81\x02\x55\x0a\x81\x81\x02\x54\x08"
  "\x81\x81\x02\x53\x06\x81\x81\x02\x52\x04\x82\x02\x23\x39\x21\x02"
  "\x0e\x02\x14\x0f\x15\x16\x17\x18\x19\x1a\x1b\x1c\x1d\x0c\x02\x0f"
  "\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x6c\x61\x62\x65\x6c\x16\x02"
  "\x6f\x1c\x81\x81\x02\x6e\x1a\x81\x81\x02\x6d\x18\x81\x81\x02\x6c"
  "\x16\x81\x81\x02\x6b\x14\x81\x81\x02\x6a\x12\x81\x81\x02\x69\x10"
  "\x81\x81\x02\x68\x0e\x81\x81\x02\x67\x0c\x81\x81\x02\x66\x0a\x81"
  "\x81\x02\x65\x08\x81\x81\x02\x64\x06\x81\x81\x02\x63\x04\x82\x02"
  "\x1b\x30\x14\x02\x0f\x02\x73\x02\x2e\x0b\x20\x69\x74\x65\x72\x61"
  "\x74\x69\x6f\x6e\x1b\x42\x72\x61\x6e\x63\x68\x20\x74\x65\x6e\x73"
  "\x69\x6f\x6e\x69\x6e\x67\x20\x64\x6f\x6e\x65\x20\x69\x6e\x20\x02"
  "\x09\x41\x73\x73\x65\x6d\x62\x6c\x79\x1f\x20\x1e\x04\x06\x2a\x6c"
  "\x61\x70\x2a\x22\x16\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x73\x68"
  "\x6f\x77\x2d\x70\x68\x61\x73\x65\x73\x3f\x0f\x04\x04\x0f\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2d\x70\x68\x61\x73\x65\x23\x03\x0f\x6c"
  "\x61\x73\x74\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x24\x03\x18"
  "\x77\x72\x69\x74\x65\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x6c\x69\x6e\x65\x04\x09\x61\x73\x73\x65\x6d\x62\x6c"
  "\x65\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x04"
  "\x06\x77\x72\x69\x74\x65\x07\x81\x01\x26\x81\x85\x02\x80\x01\x24"
  "\x81\x85\x02\x7f\x22\x81\x85\x02\x7e\x20\x81\x85\x02\x7d\x1e\x81"
  "\x89\x02\x7c\x1c\x81\x85\x02\x7b\x1a\x81\x85\x02\x7a\x18\x81\x87"
  "\x02\x79\x16\x81\x85\x02\x78\x14\x81\x83\x02\x77\x12\x81\x89\x02"
  "\x76\x10\x81\x89\x02\x75\x0e\x81\x89\x02\x74\x0c\x81\x89\x02\x73"
  "\x0a\x86\x0a\x72\x08\x81\x87\x02\x71\x06\x82\x02\x70\x04\x82\x02"
  "\x25\x43\x25\x02\x10\x18\x6d\x61\x6b\x65\x2d\x6e\x6f\x6e\x2d\x70"
  "\x6f\x69\x6e\x74\x65\x72\x2d\x6f\x62\x6a\x65\x63\x74\x1d\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d\x61\x64\x64\x72"
  "\x65\x73\x73\x2d\x3e\x62\x6c\x6f\x63\x6b\x04\x63\x61\x72\x0d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x64\x61\x74\x75\x6d\x14\x4d\x69\x73\x73"
  "\x69\x6e\x67\x20\x65\x6e\x74\x72\x79\x20\x70\x6f\x69\x6e\x74\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x26\x04\x63\x64\x72\x21"
  "\x4c\x61\x62\x65\x6c\x20\x6e\x6f\x74\x20\x64\x65\x66\x69\x6e\x65"
  "\x64\x20\x61\x73\x20\x65\x6e\x74\x72\x79\x20\x70\x6f\x69\x6e\x74"
  "\x02\x0e\x4c\x69\x6e\x6b\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x1f"
  "\x20\x1c\x2a\x73\x75\x62\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x6c\x69\x6e\x6b\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x2a\x27\x1e\x0f"
  "\x0e\x2a\x65\x6e\x74\x72\x79\x2d\x6c\x61\x62\x65\x6c\x2a\x28\x17"
  "\x2a\x69\x63\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x68\x65"
  "\x61\x64\x65\x72\x73\x2a\x29\x09\x09\x20\x1f\x1c\x64\x65\x63\x6c"
  "\x61\x72\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64"
  "\x65\x2d\x62\x6c\x6f\x63\x6b\x0e\x28\x27\x0f\x23\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x3a\x70\x72\x65\x73\x65\x72\x76\x65\x2d\x64\x61"
  "\x74\x61\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x73\x3f\x29\x1e"
  "\x19\x74\x79\x70\x65\x2d\x63\x6f\x64\x65\x3a\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x64\x2d\x65\x6e\x74\x72\x79\x1a\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74"
  "\x79\x70\x65\x0d\x04\x23\x04\x04\x6d\x61\x70\x27\x04\x10\x75\x63"
  "\x6f\x64\x65\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x0e\x03\x0e"
  "\x03\x1e\x77\x69\x74\x68\x2d\x61\x62\x73\x6f\x6c\x75\x74\x65\x6c"
  "\x79\x2d\x6e\x6f\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x04"
  "\x05\x61\x73\x73\x71\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x04"
  "\x06\x65\x72\x72\x6f\x72\x0e\x04\x11\x73\x65\x74\x2d\x6c\x61\x6d"
  "\x62\x64\x61\x2d\x62\x6f\x64\x79\x21\x0a\xb9\x01\x72\x81\x89\x02"
  "\xb8\x01\x70\x81\x8b\x02\xb7\x01\x6e\x81\x8b\x02\xb6\x01\x6c\x81"
  "\x89\x02\xb5\x01\x6a\x81\x89\x02\xb4\x01\x68\x81\x87\x02\xb3\x01"
  "\x66\x81\x87\x02\xb2\x01\x64\x81\x87\x02\xb1\x01\x62\x81\x87\x02"
  "\xb0\x01\x60\x81\x85\x02\xaf\x01\x5e\x81\x8b\x02\xae\x01\x5c\x81"
  "\x85\x02\xad\x01\x5a\x81\x83\x02\xac\x01\x58\x81\x85\x02\xab\x01"
  "\x56\x81\x85\x02\xaa\x01\x54\x81\x85\x02\xa9\x01\x52\x81\x85\x02"
  "\xa8\x01\x50\x81\x87\x02\xa7\x01\x4e\x81\x85\x02\xa6\x01\x4c\x81"
  "\x85\x02\xa5\x01\x4a\x81\x87\x02\xa4\x01\x48\x81\x87\x02\xa3\x01"
  "\x46\x81\x83\x02\xa2\x01\x44\x81\x83\x02\xa1\x01\x42\x81\x83\x02"
  "\xa0\x01\x40\x81\x87\x02\x9f\x01\x3e\x81\x83\x02\x9e\x01\x3c\x81"
  "\x87\x02\x9d\x01\x3a\x81\x83\x02\x9c\x01\x38\x81\x85\x02\x9b\x01"
  "\x36\x81\x83\x02\x9a\x01\x34\x81\x83\x02\x99\x01\x32\x81\x8d\x02"
  "\x98\x01\x30\x81\x85\x02\x97\x01\x2e\x81\x85\x02\x96\x01\x2c\x81"
  "\x81\x02\x95\x01\x2a\x81\x81\x02\x94\x01\x28\x81\x81\x02\x93\x01"
  "\x26\x81\x81\x02\x92\x01\x24\x81\x81\x02\x91\x01\x22\x81\x81\x02"
  "\x90\x01\x20\x81\x81\x02\x8f\x01\x1e\x81\x81\x02\x8e\x01\x1c\x81"
  "\x81\x02\x8d\x01\x1a\x83\x04\x8c\x01\x18\x81\x85\x02\x8b\x01\x16"
  "\x81\x85\x02\x8a\x01\x14\x81\x85\x02\x89\x01\x12\x81\x85\x02\x88"
  "\x01\x10\x81\x81\x02\x87\x01\x0e\x81\x89\x02\x86\x01\x0c\x81\x83"
  "\x02\x85\x01\x0a\x81\x81\x02\x84\x01\x08\x81\x83\x02\x83\x01\x06"
  "\x82\x02\x82\x01\x04\x82\x02\x71\xaa\x01\x2a\x02\x11\x28\x73\x65"
  "\x74\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d"
  "\x62\x6c\x6f\x63\x6b\x2f\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d"
  "\x69\x6e\x66\x6f\x21\x02\x04\x12\x69\x6e\x66\x6f\x2d\x67\x65\x6e"
  "\x65\x72\x61\x74\x69\x6f\x6e\x2d\x32\x2b\x02\xbb\x01\x06\x81\x85"
  "\x02\xba\x01\x04\x83\x04\x05\x0d\x2c\x02\x12\x26\x17\x64\x65\x62"
  "\x75\x67\x67\x69\x6e\x67\x2d\x66\x69\x6c\x65\x2d\x77\x72\x61\x70"
  "\x70\x65\x72\x0a\x72\x65\x63\x75\x72\x73\x69\x76\x65\x05\x6b\x65"
  "\x65\x70\x17\x64\x65\x62\x75\x67\x67\x69\x6e\x67\x2d\x69\x6e\x66"
  "\x6f\x2d\x77\x72\x61\x70\x70\x65\x72\x21\x44\x65\x62\x75\x67\x67"
  "\x69\x6e\x67\x20\x49\x6e\x66\x6f\x72\x6d\x61\x74\x69\x6f\x6e\x20"
  "\x47\x65\x6e\x65\x72\x61\x74\x69\x6f\x6e\x11\x02\x1f\x15\x17\x2a"
  "\x69\x6e\x66\x6f\x2d\x6f\x75\x74\x70\x75\x74\x2d\x66\x69\x6c\x65"
  "\x6e\x61\x6d\x65\x2a\x10\x2a\x64\x65\x62\x75\x67\x67\x69\x6e\x67"
  "\x2d\x6b\x65\x79\x2a\x11\x0b\x2a\x74\x6c\x2d\x62\x6f\x75\x6e\x64"
  "\x2a\x0a\x2a\x74\x6c\x2d\x66\x72\x65\x65\x2a\x1f\x2a\x72\x65\x63"
  "\x75\x72\x73\x69\x76\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x61\x74\x69"
  "\x6f\x6e\x2d\x6e\x75\x6d\x62\x65\x72\x2a\x1e\x14\x2a\x64\x62\x67"
  "\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x73\x2a\x11"
  "\x2a\x64\x62\x67\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x73\x2a"
  "\x11\x2a\x64\x62\x67\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e"
  "\x2a\x0d\x04\x23\x03\x24\x02\x1e\x72\x65\x63\x75\x72\x73\x69\x76"
  "\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x61\x74\x69\x6f\x6e\x2d\x72\x65"
  "\x73\x75\x6c\x74\x73\x24\x04\x18\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x3a\x64\x75\x6d\x70\x2d\x69\x6e\x66\x6f\x2d\x66\x69\x6c\x65\x23"
  "\x03\x0d\x6c\x69\x73\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72\x04\x27"
  "\x07\x18\x69\x6e\x66\x6f\x2d\x67\x65\x6e\x65\x72\x61\x74\x69\x6f"
  "\x6e\x2d\x70\x68\x61\x73\x65\x2d\x33\x08\xd9\x01\x3e\x81\x91\x02"
  "\xd8\x01\x3c\x81\x93\x02\xd7\x01\x3a\x81\x8f\x02\xd6\x01\x38\x83"
  "\x04\xd5\x01\x36\x81\x91\x02\xd4\x01\x34\x81\x8d\x02\xd3\x01\x32"
  "\x81\x91\x02\xd2\x01\x30\x81\x8f\x02\xd1\x01\x2e\x81\x8f\x02\xd0"
  "\x01\x2c\x81\x8d\x02\xcf\x01\x2a\x81\x8f\x02\xce\x01\x28\x81\x8b"
  "\x02\xcd\x01\x26\x81\x89\x02\xcc\x01\x24\x81\x8d\x02\xcb\x01\x22"
  "\x81\x8b\x02\xca\x01\x20\x81\x89\x02\xc9\x01\x1e\x81\x89\x02\xc8"
  "\x01\x1c\x81\x91\x02\xc7\x01\x1a\x81\x8f\x02\xc6\x01\x18\x81\x8d"
  "\x02\xc5\x01\x16\x81\x8b\x02\xc4\x01\x14\x81\x89\x02\xc3\x01\x12"
  "\x81\x87\x02\xc2\x01\x10\x81\x8b\x02\xc1\x01\x0e\x81\x89\x02\xc0"
  "\x01\x0c\x81\x89\x02\xbf\x01\x0a\x81\x8b\x02\xbe\x01\x08\x81\x83"
  "\x02\xbd\x01\x06\x81\x83\x02\xbc\x01\x04\x84\x06\x3d\x67\x27\x02"
  "\x13\x26\x11\x02\x04\x05\x73\x6f\x72\x74\x02\xde\x01\x0c\x81\x87"
  "\x02\xdd\x01\x0a\x81\x85\x02\xdc\x01\x08\x84\x06\xdb\x01\x06\x81"
  "\x83\x02\xda\x01\x04\x82\x02\x0b\x16\x26\x02\x14\x04\x15\x63\x6f"
  "\x6d\x70\x69\x6c\x65\x72\x2d\x66\x69\x6c\x65\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2d\x02\xdf\x01\x04\x84\x06\x03\x2e\x02\x15\x04\x62\x69"
  "\x66\x04\x62\x73\x6d\x04\x12\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d"
  "\x6e\x65\x77\x2d\x74\x79\x70\x65\x2f\x04\x15\x73\x70\x6c\x69\x74"
  "\x2d\x69\x6e\x66\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x21\x30"
  "\x04\x2d\x04\xe4\x01\x0c\x81\x8b\x02\xe3\x01\x0a\x81\x89\x02\xe2"
  "\x01\x08\x81\x87\x02\xe1\x01\x06\x81\x85\x02\xe0\x01\x04\x84\x06"
  "\x0b\x17\x31\x02\x16\x04\x62\x63\x69\x04\x62\x63\x73\x04\x2f\x04"
  "\x30\x04\x10\x64\x75\x6d\x70\x2d\x63\x6f\x6d\x70\x72\x65\x73\x73"
  "\x65\x64\x32\x04\xe9\x01\x0c\x81\x8b\x02\xe8\x01\x0a\x81\x89\x02"
  "\xe7\x01\x08\x81\x87\x02\xe6\x01\x06\x81\x85\x02\xe5\x01\x04\x84"
  "\x06\x0b\x17\x33\x02\x17\x04\x62\x63\x69\x04\x2f\x04\x30\x04\x32"
  "\x04\xec\x01\x08\x81\x87\x02\xeb\x01\x06\x81\x85\x02\xea\x01\x04"
  "\x84\x06\x07\x12\x30\x02\x18\x03\x1d\x63\x61\x6c\x6c\x2d\x77\x69"
  "\x74\x68\x2d\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c"
  "\x65\x6e\x61\x6d\x65\x04\x2d\x04\x09\x63\x6f\x6d\x70\x72\x65\x73"
  "\x73\x04\xef\x01\x08\x81\x85\x02\xee\x01\x06\x81\x85\x02\xed\x01"
  "\x04\x84\x06\x07\x11\x2f\x02\x19\x17\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x2d\x64\x61\x74\x61\x2d\x66\x72\x6f\x6d\x2d\x66\x69\x6c\x65\x34"
  "\x13\x49\x6c\x6c\x65\x67\x61\x6c\x20\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x3a\x04\x0e\x02\xf0\x01\x04\x84\x06\x03\x0b\x0e\x02\x1a"
  "\x22\x28\x17\x2a\x63\x75\x72\x72\x65\x6e\x74\x2d\x6c\x61\x62\x65"
  "\x6c\x2d\x6e\x75\x6d\x62\x65\x72\x2a\x17\x18\x19\x1a\x1b\x1c\x1d"
  "\x0f\x15\x29\x0e\x09\x02\x03\x0c\x69\x6e\x2d\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x02\x16\x02\x0a\x02\x0b\x05\x83\x02\x28\x81\x83\x02"
  "\x82\x02\x26\x81\x83\x02\x81\x02\x24\x81\x83\x02\x80\x02\x22\x81"
  "\x83\x02\xff\x01\x20\x81\x83\x02\xfe\x01\x1e\x81\x83\x02\xfd\x01"
  "\x1c\x81\x83\x02\xfc\x01\x1a\x81\x83\x02\xfb\x01\x18\x81\x83\x02"
  "\xfa\x01\x16\x81\x83\x02\xf9\x01\x14\x81\x83\x02\xf8\x01\x12\x81"
  "\x83\x02\xf7\x01\x10\x81\x83\x02\xf6\x01\x0e\x81\x83\x02\xf5\x01"
  "\x0c\x81\x83\x02\xf4\x01\x0a\x81\x83\x02\xf3\x01\x08\x81\x83\x02"
  "\xf2\x01\x06\x81\x83\x02\xf1\x01\x04\x84\x06\x27\x45\x29\x02\x1b"
  "\x84\x02\x04\x83\x04\x03\x28\x1b\x22\x22\x28\x04\x29\x04\x0e\x04"
  "\x18\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2d\x6c\x61"
  "\x62\x65\x6c\x2d\x6e\x61\x6d\x65\x0a\x6c\x61\x70\x2d\x3e\x63\x6f"
  "\x64\x65\x34\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x23\x32\x17\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a"
  "\x64\x75\x6d\x70\x2d\x62\x63\x69\x2d\x66\x69\x6c\x65\x34\x1c\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x64\x75\x6d\x70\x2d\x62\x63\x69"
  "\x2f\x62\x63\x73\x2d\x66\x69\x6c\x65\x73\x1c\x63\x6f\x6d\x70\x69"
  "\x6c\x65\x72\x3a\x64\x75\x6d\x70\x2d\x62\x69\x66\x2f\x62\x73\x6d"
  "\x2d\x66\x69\x6c\x65\x73\x17\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a"
  "\x64\x75\x6d\x70\x2d\x69\x6e\x66\x2d\x66\x69\x6c\x65\x24\x2b\x0c"
  "\x0b\x0a\x15\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x62\x61"
  "\x63\x6b\x2d\x65\x6e\x64\x21\x18\x61\x73\x73\x65\x6d\x62\x6c\x65"
  "\x72\x26\x6c\x69\x6e\x6b\x65\x72\x2d\x72\x65\x73\x65\x74\x21\x20"
  "\x62\x69\x6e\x64\x2d\x61\x73\x73\x65\x6d\x62\x6c\x65\x72\x26\x6c"
  "\x69\x6e\x6b\x65\x72\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x2a"
  "\x62\x69\x6e\x64\x2d\x61\x73\x73\x65\x6d\x62\x6c\x65\x72\x26\x6c"
  "\x69\x6e\x6b\x65\x72\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x09\x77\x72\x61\x70\x2d\x6c"
  "\x61\x70\x0e\x61\x73\x73\x65\x6d\x62\x6c\x65\x26\x6c\x69\x6e\x6b"
  "\x09\x20\x1f\x1e\x15\x0f\x11\x1d\x63\x6f\x6d\x70\x69\x6c\x65\x2d"
  "\x73\x63\x6f\x64\x65\x2f\x72\x65\x63\x75\x72\x73\x69\x76\x65\x2f"
  "\x68\x6f\x6f\x6b\x1b\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x73\x63\x6f"
  "\x64\x65\x2f\x6e\x6f\x2d\x66\x69\x6c\x65\x2f\x68\x6f\x6f\x6b\x18"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x73\x63\x6f\x64\x65\x2f\x66\x69"
  "\x6c\x65\x2f\x68\x6f\x6f\x6b\x25\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x2d\x6f\x75\x74\x70\x75\x74\x2d\x3e\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x64\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x1b\x63\x6f\x6d"
  "\x70\x69\x6c\x65\x72\x2d\x6f\x75\x74\x70\x75\x74\x2d\x3e\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x25\x63\x6f\x6d\x70\x69\x6c\x65"
  "\x72\x3a\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x63\x6f\x64\x65\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x74\x79\x70\x65\x1f\x2f\x04"
  "\x30\x04\x33\x04\x31\x04\x2e\x04\x26\x04\x27\x04\x2c\x04\x2a\x04"
  "\x25\x04\x14\x04\x21\x04\x12\x04\x13\x04\x10\x04\x0d\x04\x04\x04"
  "\x04\x04\x04\x04\x04\x1f\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d"
  "\x75\x6c\x74\x69\x70\x6c\x65\x02\x34\x02\x06\x0e\x80\x80\x04\x05"
  "\x0c\x81\x81\x02\x04\x0a\x81\x81\x02\x03\x08\x81\x83\x02\x02\x06"
  "\x81\x85\x02\x01\x04\x81\x83\x02\x0d\x1d";

SCHEME_OBJECT *
asstop_so_data_1b0245cffa7fbd0f (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_asstop_so_data_1b0245cffa7fbd0f [0]))), (sizeof (prog_asstop_so_data_1b0245cffa7fbd0f)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_10]));
}

DECLARE_COMPILED_DATA_NS ("asstop.so", asstop_so_data_1b0245cffa7fbd0f)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("asstop.so", "a6141c7d929b8df6")
