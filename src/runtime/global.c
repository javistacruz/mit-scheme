/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:36-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto error_procedure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_procedure_3)
DEFLABEL (error_procedure_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 5
#define DEBUGGING_LABEL_2_2 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto get_interrupt_enables_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_interrupt_enables_3)
DEFLABEL (get_interrupt_enables_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.Obj) = (Rrb [1]);
  Rvl = (MAKE_OBJECT (26, (Wrd6.uLng)));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 6
#define DEBUGGING_LABEL_3_2 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto set_interrupt_enablesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_interrupt_enablesB_3)
DEFLABEL (set_interrupt_enablesB_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 6
#define DEBUGGING_LABEL_4_2 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto with_interrupt_mask_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_interrupt_mask_3)
DEFLABEL (with_interrupt_mask_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 6
#define DEBUGGING_LABEL_5_2 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto get_fixed_objects_vector_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_fixed_objects_vector_3)
DEFLABEL (get_fixed_objects_vector_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 0);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 6
#define DEBUGGING_LABEL_6_2 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto with_history_disabled_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_history_disabled_3)
DEFLABEL (with_history_disabled_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 6
#define DEBUGGING_LABEL_7_2 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto primitive_procedure_arity_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_procedure_arity_3)
DEFLABEL (primitive_procedure_arity_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 6
#define DEBUGGING_LABEL_8_2 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto primitive_procedure_documentation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_procedure_documentation_3)
DEFLABEL (primitive_procedure_documentation_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 6
#define DEBUGGING_LABEL_9_2 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_9_4);
      goto lexical_reference_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lexical_reference_3)
DEFLABEL (lexical_reference_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 6
#define DEBUGGING_LABEL_10_2 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto lexical_assignment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lexical_assignment_3)
DEFLABEL (lexical_assignment_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 6
#define DEBUGGING_LABEL_11_2 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_11_4);
      goto local_assignment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (local_assignment_3)
DEFLABEL (local_assignment_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 6
#define DEBUGGING_LABEL_12_2 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_12_4);
      goto lexical_unassignedP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lexical_unassignedP_3)
DEFLABEL (lexical_unassignedP_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 6
#define DEBUGGING_LABEL_13_2 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto lexical_unboundP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lexical_unboundP_3)
DEFLABEL (lexical_unboundP_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 6
#define DEBUGGING_LABEL_14_2 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_14_4);
      goto lexical_unreferenceableP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lexical_unreferenceableP_3)
DEFLABEL (lexical_unreferenceableP_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 5
#define DEBUGGING_LABEL_15_2 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto object_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_type_3)
DEFLABEL (object_type_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  Rvl = (MAKE_OBJECT (26, (Wrd8.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

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
global_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_16_4);
      goto object_datum_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_datum_3)
DEFLABEL (object_datum_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 7
#define DEBUGGING_LABEL_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto object_typeP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_typeP_3)
DEFLABEL (object_typeP_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_5)
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) (Wrd15.Lng)) < ((unsigned long) (1 << TYPE_CODE_LENGTH))))
    goto label_4;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd7.Obj) == (Wrd9.Obj))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_17_0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 6
#define DEBUGGING_LABEL_18_2 5
#define OBJECT_18_0 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto object_new_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_new_type_3)
DEFLABEL (object_new_type_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 6
#define DEBUGGING_LABEL_19_2 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto make_non_pointer_object_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_non_pointer_object_3)
DEFLABEL (make_non_pointer_object_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 6
#define DEBUGGING_LABEL_20_2 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto eqP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eqP_3)
DEFLABEL (eqP_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd6.Obj) == (Wrd7.Obj))
    goto label_5;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_4;

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_20_0]);

DEFLABEL (label_4)
DEFLABEL (label_6)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 6
#define DEBUGGING_LABEL_21_2 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto make_cell_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_cell_3)
DEFLABEL (make_cell_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 6
#define DEBUGGING_LABEL_22_2 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto cellP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cellP_3)
DEFLABEL (cellP_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 6
#define DEBUGGING_LABEL_23_2 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_23_4);
      goto cell_contents_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cell_contents_3)
DEFLABEL (cell_contents_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 6
#define DEBUGGING_LABEL_24_2 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_24_4);
      goto set_cell_contentsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_cell_contentsB_3)
DEFLABEL (set_cell_contentsB_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 6
#define DEBUGGING_LABEL_25_2 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_25_4);
      goto system_pair_cons_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_pair_cons_3)
DEFLABEL (system_pair_cons_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 6
#define DEBUGGING_LABEL_26_2 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_26_4);
      goto system_pairP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_pairP_3)
DEFLABEL (system_pairP_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 5
#define DEBUGGING_LABEL_27_2 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto system_pair_car_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_pair_car_3)
DEFLABEL (system_pair_car_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 6
#define DEBUGGING_LABEL_28_2 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_28_4);
      goto system_pair_set_carB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_pair_set_carB_3)
DEFLABEL (system_pair_set_carB_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 5
#define DEBUGGING_LABEL_29_2 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto system_pair_cdr_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_pair_cdr_3)
DEFLABEL (system_pair_cdr_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 6
#define DEBUGGING_LABEL_30_2 5
#define OBJECT_30_0 4
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_30_4);
      goto system_pair_set_cdrB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_pair_set_cdrB_3)
DEFLABEL (system_pair_set_cdrB_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 6
#define DEBUGGING_LABEL_31_2 5
#define OBJECT_31_0 4
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_31_4);
      goto hunk3_cons_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hunk3_cons_3)
DEFLABEL (hunk3_cons_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 5
#define DEBUGGING_LABEL_32_2 4
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto system_hunk3_cxr0_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_hunk3_cxr0_3)
DEFLABEL (system_hunk3_cxr0_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 6
#define DEBUGGING_LABEL_33_2 5
#define OBJECT_33_0 4
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_33_4);
      goto system_hunk3_set_cxr0B_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_hunk3_set_cxr0B_3)
DEFLABEL (system_hunk3_set_cxr0B_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 5
#define DEBUGGING_LABEL_34_2 4
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto system_hunk3_cxr1_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_hunk3_cxr1_3)
DEFLABEL (system_hunk3_cxr1_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define ENVIRONMENT_LABEL_35_3 6
#define DEBUGGING_LABEL_35_2 5
#define OBJECT_35_0 4
#define FREE_REFERENCES_LABEL_35_0 4
#define NUMBER_OF_LINKER_SECTIONS_35_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_35_4);
      goto system_hunk3_set_cxr1B_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_hunk3_set_cxr1B_3)
DEFLABEL (system_hunk3_set_cxr1B_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define ENVIRONMENT_LABEL_36_3 5
#define DEBUGGING_LABEL_36_2 4
#define FREE_REFERENCES_LABEL_36_0 4
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_36_4);
      goto system_hunk3_cxr2_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_hunk3_cxr2_3)
DEFLABEL (system_hunk3_cxr2_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 6
#define DEBUGGING_LABEL_37_2 5
#define OBJECT_37_0 4
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_37_4);
      goto system_hunk3_set_cxr2B_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_hunk3_set_cxr2B_3)
DEFLABEL (system_hunk3_set_cxr2B_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define ENVIRONMENT_LABEL_38_3 6
#define DEBUGGING_LABEL_38_2 5
#define OBJECT_38_0 4
#define FREE_REFERENCES_LABEL_38_0 4
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto system_list__vector_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_list__vector_3)
DEFLABEL (system_list__vector_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 6
#define DEBUGGING_LABEL_39_2 5
#define OBJECT_39_0 4
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_39_4);
      goto system_subvector__list_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_subvector__list_3)
DEFLABEL (system_subvector__list_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define ENVIRONMENT_LABEL_40_3 6
#define DEBUGGING_LABEL_40_2 5
#define OBJECT_40_0 4
#define FREE_REFERENCES_LABEL_40_0 4
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_40_4);
      goto system_vectorP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_vectorP_3)
DEFLABEL (system_vectorP_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define ENVIRONMENT_LABEL_41_3 5
#define DEBUGGING_LABEL_41_2 4
#define FREE_REFERENCES_LABEL_41_0 4
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_41_4);
      goto system_vector_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_vector_length_3)
DEFLABEL (system_vector_length_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  Rvl = (MAKE_OBJECT (26, (Wrd10.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define ENVIRONMENT_LABEL_42_3 6
#define DEBUGGING_LABEL_42_2 5
#define OBJECT_42_0 4
#define FREE_REFERENCES_LABEL_42_0 4
#define NUMBER_OF_LINKER_SECTIONS_42_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto system_vector_ref_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_vector_ref_3)
DEFLABEL (system_vector_ref_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 2);

DEFLABEL (label_5)
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) (Wrd15.Lng)) < ((unsigned long) (Wrd19.Lng))))
    goto label_4;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd10.pObj) = (& ((Wrd17.pObj) [(Wrd7.Lng)]));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define ENVIRONMENT_LABEL_43_3 6
#define DEBUGGING_LABEL_43_2 5
#define OBJECT_43_0 4
#define FREE_REFERENCES_LABEL_43_0 4
#define NUMBER_OF_LINKER_SECTIONS_43_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_43_4);
      goto system_vector_setB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_vector_setB_3)
DEFLABEL (system_vector_setB_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define ENVIRONMENT_LABEL_44_3 6
#define DEBUGGING_LABEL_44_2 5
#define OBJECT_44_0 4
#define FREE_REFERENCES_LABEL_44_0 4
#define NUMBER_OF_LINKER_SECTIONS_44_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_44_4);
      goto primitive_object_ref_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_object_ref_3)
DEFLABEL (primitive_object_ref_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd12.Obj) = (Rsp [1]);
  if (! (INDEX_FIXNUM_P (Wrd12.Obj)))
    goto label_4;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.pObj) = (& ((Wrd9.pObj) [(Wrd7.Lng)]));
  Rvl = ((Wrd10.pObj) [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 7
#define DEBUGGING_LABEL_45_2 6
#define OBJECT_45_1 5
#define OBJECT_45_0 4
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_45_4);
      goto primitive_object_setB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_object_setB_3)
DEFLABEL (primitive_object_setB_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd13.Obj) = (Rsp [1]);
  if (! (INDEX_FIXNUM_P (Wrd13.Obj)))
    goto label_4;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.pObj) = (& ((Wrd9.pObj) [(Wrd7.Lng)]));
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [0]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_45_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define ENVIRONMENT_LABEL_46_3 9
#define DEBUGGING_LABEL_46_2 8
#define FREE_REFERENCE_46_0 7
#define FREE_REFERENCES_LABEL_46_0 6
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto host_big_endianP_0;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_big_endianP_4)
DEFLABEL (host_big_endianP_0)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_6 5
#define LABEL_47_5 7
#define LABEL_47_9 9
#define LABEL_47_11 11
#define LABEL_47_7 13
#define LABEL_47_13 15
#define LABEL_47_10 17
#define LABEL_47_14 19
#define LABEL_47_16 21
#define LABEL_47_17 23
#define ENVIRONMENT_LABEL_47_3 52
#define DEBUGGING_LABEL_47_2 51
#define OBJECT_47_13 50
#define OBJECT_47_12 49
#define OBJECT_47_11 48
#define OBJECT_47_10 47
#define OBJECT_47_9 46
#define OBJECT_47_8 45
#define OBJECT_47_7 44
#define OBJECT_47_6 43
#define OBJECT_47_5 42
#define OBJECT_47_4 41
#define OBJECT_47_3 40
#define OBJECT_47_2 39
#define OBJECT_47_1 38
#define OBJECT_47_0 37
#define EXECUTE_CACHE_47_15 25
#define EXECUTE_CACHE_47_12 27
#define EXECUTE_CACHE_47_8 29
#define FREE_REFERENCE_47_1 32
#define FREE_REFERENCE_47_0 33
#define FREE_ASSIGNMENT_47_1 35
#define FREE_ASSIGNMENT_47_0 36
#define FREE_REFERENCES_LABEL_47_0 24
#define NUMBER_OF_LINKER_SECTIONS_47_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd35;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_47_4);
      goto initialize_packageB_11;

    case 1:
      current_block = (Rpc - LABEL_47_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_47_9);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_47_11);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_47_7);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_47_13);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_47_10);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_47_14);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_47_16);
      goto label_16;

    case 10:
      current_block = (Rpc - LABEL_47_17);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_19)
DEFLABEL (initialize_packageB_11)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_47_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_7);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 10))
    goto label_35;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd12.Lng))))
    goto label_35;
  (Wrd7.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_34)
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_12]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_47_3]))
    goto label_33;
  if (Rvl == (current_block [OBJECT_47_4]))
    goto label_33;
  if (Rvl == (current_block [OBJECT_47_6]))
    goto label_20;
  if (Rvl == (current_block [OBJECT_47_7]))
    goto label_20;
  (Wrd35.Obj) = (current_block [OBJECT_47_9]);
  (Rsp [0]) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (label_20)
  (Wrd5.Obj) = (current_block [OBJECT_47_8]);

DEFLABEL (label_32)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_31)
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_47_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd6.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_28)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_27;
  Wrd21 = Wrd25;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_47_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_47_14);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_47_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_23)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_47_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_22;
  Wrd18 = Wrd22;

DEFLABEL (label_21)
  Rvl = (Wrd18.Obj);
  goto pop_return;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_17])), (Wrd19.pObj));

DEFLABEL (label_17)
  (Wrd18.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_47_16])), (Wrd6.pObj), Rvl);

DEFLABEL (label_16)
  goto label_23;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47_11])), (Wrd22.pObj));

DEFLABEL (label_14)
  (Wrd21.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_47_9])), (Wrd6.pObj), (Wrd5.Obj));

DEFLABEL (label_13)
  goto label_28;

DEFLABEL (label_33)
  (Wrd5.Obj) = (current_block [OBJECT_47_5]);
  goto label_32;

DEFLABEL (label_35)
  (Wrd15.Obj) = (current_block [OBJECT_47_10]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_13]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_11]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Wrd5.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define ENVIRONMENT_LABEL_48_3 5
#define DEBUGGING_LABEL_48_2 4
#define FREE_REFERENCES_LABEL_48_0 4
#define NUMBER_OF_LINKER_SECTIONS_48_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto identity_procedure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (identity_procedure_3)
DEFLABEL (identity_procedure_0)
  INTERRUPT_CHECK (26, LABEL_48_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define TAG_49_6 1
#define ENVIRONMENT_LABEL_49_3 7
#define DEBUGGING_LABEL_49_2 6
#define FREE_REFERENCES_LABEL_49_0 6
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_49_4);
      goto constant_procedure_1;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constant_procedure_4)
DEFLABEL (constant_procedure_1)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
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

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_49_5);

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

#define LABEL_50_4 3
#define ENVIRONMENT_LABEL_50_3 6
#define DEBUGGING_LABEL_50_2 5
#define OBJECT_50_0 4
#define FREE_REFERENCES_LABEL_50_0 4
#define NUMBER_OF_LINKER_SECTIONS_50_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_50_4);
      goto null_procedure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (null_procedure_3)
DEFLABEL (null_procedure_0)
  INTERRUPT_CHECK (26, LABEL_50_4);
  Rvl = (current_block [OBJECT_50_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define ENVIRONMENT_LABEL_51_3 5
#define DEBUGGING_LABEL_51_2 4
#define FREE_REFERENCES_LABEL_51_0 4
#define NUMBER_OF_LINKER_SECTIONS_51_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_51_4);
      goto false_procedure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (false_procedure_3)
DEFLABEL (false_procedure_0)
  INTERRUPT_CHECK (26, LABEL_51_4);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define ENVIRONMENT_LABEL_52_3 6
#define DEBUGGING_LABEL_52_2 5
#define OBJECT_52_0 4
#define FREE_REFERENCES_LABEL_52_0 4
#define NUMBER_OF_LINKER_SECTIONS_52_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_52_4);
      goto true_procedure_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (true_procedure_3)
DEFLABEL (true_procedure_0)
  INTERRUPT_CHECK (26, LABEL_52_4);
  Rvl = (current_block [OBJECT_52_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
global_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto eval_1;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eval_4)
DEFLABEL (eval_1)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 8
#define DEBUGGING_LABEL_54_2 7
#define EXECUTE_CACHE_54_5 5
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto scode_eval_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_eval_3)
DEFLABEL (scode_eval_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define ENVIRONMENT_LABEL_55_3 9
#define DEBUGGING_LABEL_55_2 8
#define OBJECT_55_1 7
#define OBJECT_55_0 6
#define FREE_REFERENCES_LABEL_55_0 6
#define NUMBER_OF_LINKER_SECTIONS_55_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_55_4);
      goto system_hunk3_cons_1;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_hunk3_cons_4)
DEFLABEL (system_hunk3_cons_1)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_0]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 6
#define DEBUGGING_LABEL_56_2 5
#define OBJECT_56_0 4
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_56_4);
      goto limit_interruptsB_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (limit_interruptsB_5)
DEFLABEL (limit_interruptsB_2)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd7.Obj) = (Rrb [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd7.uLng)));
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd12.Lng) = ((Wrd10.Lng) & (Wrd11.Lng));
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [0]) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define TAG_57_6 1
#define LABEL_57_7 7
#define TAG_57_8 2
#define LABEL_57_10 9
#define ENVIRONMENT_LABEL_57_3 14
#define DEBUGGING_LABEL_57_2 13
#define EXECUTE_CACHE_57_9 11
#define FREE_REFERENCES_LABEL_57_0 10
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_57_4);
      goto object_component_binder_4;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_57_7);
      goto swapB_9;

    case 3:
      current_block = (Rpc - LABEL_57_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_component_binder_7)
DEFLABEL (object_component_binder_4)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_5])));
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
  CLOSURE_HEADER (LABEL_57_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd29.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_57_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57_7])));
  Rhp += 4;
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd26.pObj) = (& (Rhp [-1]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd26.pObj)));
  (Rsp [3]) = (Wrd27.Obj);
  Wrd21 = Wrd29;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  ((Wrd21.pObj) [2]) = (Wrd24.Obj);
  (Wrd19.Obj) = ((Wrd23.pObj) [3]);
  ((Wrd21.pObj) [3]) = (Wrd19.Obj);
  ((Wrd21.pObj) [4]) = (Wrd27.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd21.pObj) [5]) = (Wrd11.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [4]) = (Wrd30.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd30.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_9]));

DEFLABEL (swapB_9)
  CLOSURE_HEADER (LABEL_57_7);

DEFLABEL (swapB_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_57_10);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Wrd12.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.Obj) = ((Wrd7.pObj) [5]);
  (Rsp [1]) = (Wrd14.Obj);
  (Rsp [2]) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define TAG_58_6 1
#define LABEL_58_8 7
#define ENVIRONMENT_LABEL_58_3 14
#define DEBUGGING_LABEL_58_2 13
#define OBJECT_58_1 12
#define OBJECT_58_0 11
#define EXECUTE_CACHE_58_7 9
#define FREE_REFERENCES_LABEL_58_0 8
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_58_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto swapB_7;

    case 2:
      current_block = (Rpc - LABEL_58_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_58_5])));
  Rhp += 2;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (Rsp [2]) = (Wrd17.Obj);
  Wrd13 = Wrd19;
  ((Wrd13.pObj) [2]) = (Wrd17.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd11.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [3]) = (Wrd20.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_7]));

DEFLABEL (swapB_7)
  CLOSURE_HEADER (LABEL_58_5);

DEFLABEL (swapB_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_8);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
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
global_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto values_1;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (values_4)
DEFLABEL (values_1)
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
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_59_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define ENVIRONMENT_LABEL_60_3 7
#define DEBUGGING_LABEL_60_2 6
#define FREE_REFERENCES_LABEL_60_0 6
#define NUMBER_OF_LINKER_SECTIONS_60_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto call_with_values_1;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_with_values_4)
DEFLABEL (call_with_values_1)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_60_5);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_8 5
#define TAG_61_9 1
#define LABEL_61_5 7
#define TAG_61_6 2
#define ENVIRONMENT_LABEL_61_3 17
#define DEBUGGING_LABEL_61_2 16
#define OBJECT_61_0 15
#define EXECUTE_CACHE_61_11 9
#define EXECUTE_CACHE_61_10 11
#define EXECUTE_CACHE_61_7 13
#define FREE_REFERENCES_LABEL_61_0 8
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_61_4);
      goto write_to_string_3;

    case 1:
      current_block = (Rpc - LABEL_61_8);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_61_5);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_to_string_6)
DEFLABEL (write_to_string_3)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_61_0])))
    goto label_10;

DEFLABEL (label_9)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_61_5])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [0]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_7]));

DEFLABEL (label_10)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_61_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_61_8])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_10]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_61_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_11]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_61_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_7 7
#define LABEL_62_12 9
#define LABEL_62_10 11
#define LABEL_62_9 13
#define LABEL_62_17 15
#define LABEL_62_15 17
#define LABEL_62_19 19
#define LABEL_62_20 21
#define ENVIRONMENT_LABEL_62_3 42
#define DEBUGGING_LABEL_62_2 41
#define OBJECT_62_3 40
#define OBJECT_62_2 39
#define OBJECT_62_1 38
#define OBJECT_62_0 37
#define EXECUTE_CACHE_62_18 23
#define EXECUTE_CACHE_62_16 25
#define EXECUTE_CACHE_62_14 27
#define EXECUTE_CACHE_62_13 29
#define EXECUTE_CACHE_62_11 31
#define EXECUTE_CACHE_62_8 33
#define EXECUTE_CACHE_62_6 35
#define FREE_REFERENCES_LABEL_62_0 22
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_62_4);
      goto pa_13;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_62_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_62_12);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_62_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_62_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_62_17);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_62_15);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_62_19);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_62_20);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pa_16)
DEFLABEL (pa_13)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_62_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_62_12);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_14]));

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_62_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_62_9);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_62_17);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_18]));

DEFLABEL (label_18)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_15]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_62_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_16]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_62_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_62_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_62_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_62_20);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_18]));

DEFLABEL (label_20)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define ENVIRONMENT_LABEL_63_3 8
#define DEBUGGING_LABEL_63_2 7
#define EXECUTE_CACHE_63_5 5
#define FREE_REFERENCES_LABEL_63_0 4
#define NUMBER_OF_LINKER_SECTIONS_63_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_63_4);
      goto pwd_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pwd_3)
DEFLABEL (pwd_0)
  INTERRUPT_CHECK (26, LABEL_63_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_5 3
#define LABEL_64_4 5
#define ENVIRONMENT_LABEL_64_3 13
#define DEBUGGING_LABEL_64_2 12
#define OBJECT_64_0 11
#define EXECUTE_CACHE_64_7 7
#define EXECUTE_CACHE_64_6 9
#define FREE_REFERENCES_LABEL_64_0 6
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_64_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_64_4);
      goto cd_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (cd_5)
DEFLABEL (cd_2)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_64_0])))
    goto label_7;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_64_5);
  (Wrd11.Obj) = Rvl;

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_7]));

DEFLABEL (label_7)
  Wrd11 = Wrd8;
  Rsp = (& (Rsp [1]));
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_7 7
#define LABEL_65_9 9
#define LABEL_65_11 11
#define LABEL_65_12 13
#define LABEL_65_13 15
#define LABEL_65_14 17
#define LABEL_65_15 19
#define LABEL_65_16 21
#define LABEL_65_18 23
#define LABEL_65_19 25
#define LABEL_65_17 27
#define LABEL_65_21 29
#define TAG_65_22 13
#define LABEL_65_24 31
#define LABEL_65_26 33
#define LABEL_65_28 35
#define LABEL_65_29 37
#define LABEL_65_30 39
#define LABEL_65_32 41
#define LABEL_65_31 43
#define LABEL_65_33 45
#define LABEL_65_34 47
#define ENVIRONMENT_LABEL_65_3 69
#define DEBUGGING_LABEL_65_2 68
#define OBJECT_65_4 67
#define OBJECT_65_3 66
#define OBJECT_65_2 65
#define OBJECT_65_1 64
#define OBJECT_65_0 63
#define EXECUTE_CACHE_65_27 49
#define EXECUTE_CACHE_65_25 51
#define EXECUTE_CACHE_65_23 53
#define EXECUTE_CACHE_65_20 55
#define EXECUTE_CACHE_65_10 57
#define EXECUTE_CACHE_65_8 59
#define EXECUTE_CACHE_65_6 61
#define FREE_REFERENCES_LABEL_65_0 48
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_65_4);
      goto show_time_29;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_65_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_65_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_65_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_65_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_65_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_65_14);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_65_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_65_16);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_65_18);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_65_19);
      goto label_33;

    case 12:
      current_block = (Rpc - LABEL_65_17);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_65_21);
      goto lambda_38;

    case 14:
      current_block = (Rpc - LABEL_65_24);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_65_26);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_65_28);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_65_29);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_65_30);
      goto continuation_16;

    case 19:
      current_block = (Rpc - LABEL_65_32);
      goto label_34;

    case 20:
      current_block = (Rpc - LABEL_65_31);
      goto continuation_18;

    case 21:
      current_block = (Rpc - LABEL_65_33);
      goto continuation_19;

    case 22:
      current_block = (Rpc - LABEL_65_34);
      goto label_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (show_time_37)
DEFLABEL (show_time_29)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_65_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_65_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_65_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_65_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_65_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_65_15);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_44;
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_44;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) - (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_44;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_43)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_42;
  (Wrd31.Obj) = (Rsp [8]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_42;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd35.Lng) - (Wrd37.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd33.Lng)))
    goto label_42;
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));

DEFLABEL (label_41)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_40;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (multiply_with_overflow ((Wrd47.Lng), 1000, (& (Wrd44.Lng))))
    goto label_40;
  (Wrd48.Obj) = (LONG_TO_FIXNUM (Wrd44.Lng));
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_65_17);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_65_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_65_21])));
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
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_23]));

DEFLABEL (label_40)
  (Wrd38.Obj) = (current_block [OBJECT_65_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_19]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.Obj) = (Rsp [8]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_18]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_32)
  (Wrd28.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [5]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_65_12);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_65_21);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_65_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_65_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_27]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_65_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_65_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_25]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_65_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_27]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_65_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_65_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_65_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_48;
  (Wrd24.Obj) = ((Wrd19.pObj) [5]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_48;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = ((Wrd30.Lng) - (Wrd34.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_48;
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_47)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_27]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_65_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_65_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_25]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_65_33);
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_46;
  (Wrd21.Obj) = ((Wrd16.pObj) [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_46;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = ((Wrd27.Lng) - (Wrd31.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd23.Lng)))
    goto label_46;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));

DEFLABEL (label_45)
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_27]));

DEFLABEL (label_46)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_34]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_35)
  (Wrd14.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [4]);
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_32]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_47;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_7 7
#define LABEL_66_8 9
#define LABEL_66_9 11
#define LABEL_66_10 13
#define ENVIRONMENT_LABEL_66_3 19
#define DEBUGGING_LABEL_66_2 18
#define OBJECT_66_0 17
#define EXECUTE_CACHE_66_6 15
#define FREE_REFERENCES_LABEL_66_0 14
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_66_4);
      goto wait_interval_8;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_66_7);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_66_8);
      goto wait_loop_5;

    case 4:
      current_block = (Rpc - LABEL_66_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_66_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (wait_interval_13)
DEFLABEL (wait_interval_8)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_5);
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_16;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_16;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd16.Lng) + (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_16;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd11.Obj);
  goto wait_loop_5;

DEFLABEL (label_16)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_10)
  (Wrd11.Obj) = Rvl;
  goto label_15;

DEFLABEL (wait_loop_14)
DEFLABEL (wait_loop_5)
  INTERRUPT_CHECK (26, LABEL_66_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_66_9);
  (Wrd5.Obj) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_19;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_19;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd17.Lng) < (Wrd19.Lng))
    goto label_18;

DEFLABEL (label_17)
  Rvl = (current_block [OBJECT_66_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  goto wait_loop_5;

DEFLABEL (label_19)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define ENVIRONMENT_LABEL_67_3 10
#define DEBUGGING_LABEL_67_2 9
#define OBJECT_67_1 8
#define OBJECT_67_0 7
#define EXECUTE_CACHE_67_5 5
#define FREE_REFERENCES_LABEL_67_0 4
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_67_4);
      goto exit_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (exit_5)
DEFLABEL (exit_2)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_67_0]))
    goto label_7;
  Wrd7 = Wrd5;
  goto label_6;

DEFLABEL (label_7)
  (Wrd7.Obj) = (current_block [OBJECT_67_1]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define ENVIRONMENT_LABEL_68_3 14
#define DEBUGGING_LABEL_68_2 13
#define OBJECT_68_1 12
#define OBJECT_68_0 11
#define EXECUTE_CACHE_68_7 7
#define EXECUTE_CACHE_68_6 9
#define FREE_REFERENCES_LABEL_68_0 6
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_68_4);
      goto default_exit_1;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_exit_4)
DEFLABEL (default_exit_1)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_7]));

DEFLABEL (label_5)
  Rvl = (current_block [OBJECT_68_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_6 5
#define LABEL_69_5 7
#define ENVIRONMENT_LABEL_69_3 17
#define DEBUGGING_LABEL_69_2 16
#define OBJECT_69_2 15
#define OBJECT_69_1 14
#define OBJECT_69_0 13
#define EXECUTE_CACHE_69_7 9
#define FREE_REFERENCE_69_0 12
#define FREE_REFERENCES_LABEL_69_0 8
#define NUMBER_OF_LINKER_SECTIONS_69_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_69_4);
      goto Z__exit_2;

    case 1:
      current_block = (Rpc - LABEL_69_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_69_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__exit_6)
DEFLABEL (Z__exit_2)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_69_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_69_0])))
    goto label_8;

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 0);

DEFLABEL (label_8)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_2]), 1);

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_6])), (Wrd9.pObj));

DEFLABEL (label_4)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define ENVIRONMENT_LABEL_70_3 8
#define DEBUGGING_LABEL_70_2 7
#define EXECUTE_CACHE_70_5 5
#define FREE_REFERENCES_LABEL_70_0 4
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_70_4);
      goto quit_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (quit_3)
DEFLABEL (quit_0)
  INTERRUPT_CHECK (26, LABEL_70_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define LABEL_71_7 7
#define ENVIRONMENT_LABEL_71_3 15
#define DEBUGGING_LABEL_71_2 14
#define OBJECT_71_0 13
#define EXECUTE_CACHE_71_6 9
#define FREE_REFERENCE_71_0 12
#define FREE_REFERENCES_LABEL_71_0 8
#define NUMBER_OF_LINKER_SECTIONS_71_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_71_4);
      goto Z__quit_1;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_71_7);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__quit_5)
DEFLABEL (Z__quit_1)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_71_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_71_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  Rvl = (Wrd5.Obj);
  goto pop_return;

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define LABEL_72_7 7
#define ENVIRONMENT_LABEL_72_3 13
#define DEBUGGING_LABEL_72_2 12
#define OBJECT_72_0 11
#define EXECUTE_CACHE_72_6 9
#define FREE_REFERENCES_LABEL_72_0 8
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_72_4);
      goto link_variables_2;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_72_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (link_variables_5)
DEFLABEL (link_variables_2)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_72_7);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_0]), 4);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define ENVIRONMENT_LABEL_73_3 8
#define DEBUGGING_LABEL_73_2 7
#define EXECUTE_CACHE_73_5 5
#define FREE_REFERENCES_LABEL_73_0 4
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_73_4);
      goto environment_link_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_link_name_3)
DEFLABEL (environment_link_name_0)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define ENVIRONMENT_LABEL_74_3 11
#define DEBUGGING_LABEL_74_2 10
#define OBJECT_74_0 9
#define EXECUTE_CACHE_74_6 7
#define FREE_REFERENCES_LABEL_74_0 6
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_74_4);
      goto unbind_variable_1;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unbind_variable_4)
DEFLABEL (unbind_variable_1)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_74_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define ENVIRONMENT_LABEL_75_3 11
#define DEBUGGING_LABEL_75_2 10
#define OBJECT_75_0 9
#define EXECUTE_CACHE_75_6 7
#define FREE_REFERENCES_LABEL_75_0 6
#define NUMBER_OF_LINKER_SECTIONS_75_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto object_gc_type_1;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_gc_type_4)
DEFLABEL (object_gc_type_1)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_75_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_6]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define ENVIRONMENT_LABEL_76_3 11
#define DEBUGGING_LABEL_76_2 10
#define OBJECT_76_0 9
#define EXECUTE_CACHE_76_6 7
#define FREE_REFERENCES_LABEL_76_0 6
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_76_4);
      goto type_code__gc_type_1;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (type_code__gc_type_4)
DEFLABEL (type_code__gc_type_1)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_76_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_6]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_5 3
#define LABEL_77_4 5
#define ENVIRONMENT_LABEL_77_3 13
#define DEBUGGING_LABEL_77_2 12
#define OBJECT_77_2 11
#define OBJECT_77_1 10
#define OBJECT_77_0 9
#define EXECUTE_CACHE_77_6 7
#define FREE_REFERENCES_LABEL_77_0 6
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_77_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_77_4);
      goto Z__encode_gc_type_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__encode_gc_type_8)
DEFLABEL (Z__encode_gc_type_5)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 26)
    goto label_13;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_77_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_77_5);

DEFLABEL (label_11)
  (Wrd20.Obj) = (current_block [OBJECT_77_0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd26.Lng) = ((Wrd23.Lng) + 4L);
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd35.uLng) == 26)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_10)
  Wrd37 = Wrd26;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd37.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_9;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd32.pObj) = (& ((Wrd39.pObj) [(Wrd29.Lng)]));
  Rvl = ((Wrd32.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd13.Lng) < (-4L))
    goto label_12;
  if ((Wrd13.Lng) > 4L)
    goto label_12;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define LABEL_78_7 7
#define LABEL_78_8 9
#define LABEL_78_9 11
#define LABEL_78_10 13
#define LABEL_78_11 15
#define ENVIRONMENT_LABEL_78_3 29
#define DEBUGGING_LABEL_78_2 28
#define OBJECT_78_6 27
#define OBJECT_78_5 26
#define OBJECT_78_4 25
#define OBJECT_78_3 24
#define OBJECT_78_2 23
#define OBJECT_78_1 22
#define OBJECT_78_0 21
#define EXECUTE_CACHE_78_6 17
#define FREE_REFERENCE_78_0 20
#define FREE_REFERENCES_LABEL_78_0 16
#define NUMBER_OF_LINKER_SECTIONS_78_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd44;
  machine_word Wrd41;
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
      goto object_non_pointerP_8;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_78_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_78_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_78_9);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_78_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_78_11);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_non_pointerP_15)
DEFLABEL (object_non_pointerP_8)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_78_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_78_0]))
    goto label_29;
  if (Rvl == (current_block [OBJECT_78_1]))
    goto label_18;

DEFLABEL (label_17)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd41.Obj) = (current_block [OBJECT_78_2]);
  (Wrd44.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 39L) < ((unsigned long) (Wrd44.Lng))))
    goto label_30;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd12.Obj) == (Wrd14.Obj))
    goto label_29;

DEFLABEL (label_28)
  (Wrd29.Obj) = (current_block [OBJECT_78_4]);
  (Wrd32.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 50L) < ((unsigned long) (Wrd32.Lng))))
    goto label_27;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd16.Obj) == (Wrd18.Obj)))
    goto label_17;

DEFLABEL (label_26)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_25;
  Wrd19 = Wrd23;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_5]), 1);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_78_10);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_23;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_23;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd19.Lng) > (Wrd20.Lng))
    goto label_20;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_78_6]);
  goto label_19;

DEFLABEL (label_20)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_19)
DEFLABEL (label_22)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_20;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_9])), (Wrd20.pObj));

DEFLABEL (label_10)
  (Wrd19.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_3]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_26;

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_78_6]);
  goto label_16;

DEFLABEL (label_30)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_3]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define LABEL_79_7 7
#define LABEL_79_9 9
#define LABEL_79_10 11
#define LABEL_79_11 13
#define LABEL_79_12 15
#define ENVIRONMENT_LABEL_79_3 31
#define DEBUGGING_LABEL_79_2 30
#define OBJECT_79_6 29
#define OBJECT_79_5 28
#define OBJECT_79_4 27
#define OBJECT_79_3 26
#define OBJECT_79_2 25
#define OBJECT_79_1 24
#define OBJECT_79_0 23
#define EXECUTE_CACHE_79_8 17
#define EXECUTE_CACHE_79_6 19
#define FREE_REFERENCE_79_0 22
#define FREE_REFERENCES_LABEL_79_0 16
#define NUMBER_OF_LINKER_SECTIONS_79_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd38;
  machine_word Wrd35;
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
      goto object_pointerP_7;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_79_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_79_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_79_10);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_79_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_79_12);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (object_pointerP_13)
DEFLABEL (object_pointerP_7)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_79_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_79_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_79_6]);

DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (Rsp [0]);
  if ((Wrd9.Obj) == (current_block [OBJECT_79_1]))
    goto label_18;

DEFLABEL (label_17)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_14;

DEFLABEL (label_18)
  (Wrd35.Obj) = (current_block [OBJECT_79_2]);
  (Wrd38.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 34L) < ((unsigned long) (Wrd38.Lng))))
    goto label_29;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_15;

DEFLABEL (label_28)
  (Wrd25.Obj) = (current_block [OBJECT_79_4]);
  (Wrd28.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 50L) < ((unsigned long) (Wrd28.Lng))))
    goto label_27;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd18.Obj) == (Wrd20.Obj)))
    goto label_17;

DEFLABEL (label_26)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_5]), 1);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_79_11);
  (Rsp [0]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_25;
  Wrd7 = Wrd11;

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 26)
    goto label_20;

DEFLABEL (label_19)
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_20)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_19;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd19.Lng) > (Wrd21.Lng))
    goto label_22;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_21;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_79_6]);

DEFLABEL (label_21)
DEFLABEL (label_23)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_12])), (Wrd8.pObj));

DEFLABEL (label_11)
  (Wrd7.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_3]), 2);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_26;

DEFLABEL (label_29)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_3]), 2);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define ENVIRONMENT_LABEL_80_3 14
#define DEBUGGING_LABEL_80_2 13
#define OBJECT_80_3 12
#define OBJECT_80_2 11
#define OBJECT_80_1 10
#define OBJECT_80_0 9
#define EXECUTE_CACHE_80_6 7
#define FREE_REFERENCES_LABEL_80_0 6
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
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
      goto non_pointer_type_codeP_4;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (non_pointer_type_codeP_7)
DEFLABEL (non_pointer_type_codeP_4)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_80_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_80_0]))
    goto label_11;
  if (Rvl == (current_block [OBJECT_80_1]))
    goto label_10;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd13.Obj) = (Rsp [1]);
  if (! ((Wrd13.Obj) == (current_block [OBJECT_80_2])))
    goto label_9;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_80_3]);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define LABEL_81_7 7
#define ENVIRONMENT_LABEL_81_3 18
#define DEBUGGING_LABEL_81_2 17
#define OBJECT_81_3 16
#define OBJECT_81_2 15
#define OBJECT_81_1 14
#define OBJECT_81_0 13
#define EXECUTE_CACHE_81_8 9
#define EXECUTE_CACHE_81_6 11
#define FREE_REFERENCES_LABEL_81_0 8
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_81_4);
      goto pointer_type_codeP_4;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_81_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pointer_type_codeP_7)
DEFLABEL (pointer_type_codeP_4)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_81_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_81_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_81_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_81_3]);

DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (Rsp [0]);
  if ((Wrd9.Obj) == (current_block [OBJECT_81_1]))
    goto label_12;

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_12)
  (Wrd15.Obj) = (Rsp [1]);
  if ((Wrd15.Obj) == (current_block [OBJECT_81_2]))
    goto label_9;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define LABEL_82_6 7
#define ENVIRONMENT_LABEL_82_3 15
#define DEBUGGING_LABEL_82_2 14
#define OBJECT_82_3 13
#define OBJECT_82_2 12
#define OBJECT_82_1 11
#define OBJECT_82_0 10
#define FREE_REFERENCE_82_0 9
#define FREE_REFERENCES_LABEL_82_0 8
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_82_4);
      goto undefined_valueP_2;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_82_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (undefined_valueP_6)
DEFLABEL (undefined_valueP_2)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_82_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (Wrd12.Obj) = (Rsp [0]);
  if (! ((Wrd12.Obj) == (Wrd6.Obj)))
    goto label_7;
  Rvl = (current_block [OBJECT_82_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_82_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_82_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_3]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_82_6);
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == Rvl)
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_82_0]);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define ENVIRONMENT_LABEL_83_3 13
#define DEBUGGING_LABEL_83_2 12
#define OBJECT_83_0 11
#define EXECUTE_CACHE_83_7 7
#define EXECUTE_CACHE_83_6 9
#define FREE_REFERENCES_LABEL_83_0 6
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_83_4);
      goto for_each_interned_symbol_1;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_each_interned_symbol_4)
DEFLABEL (for_each_interned_symbol_1)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_83_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define LABEL_84_6 7
#define LABEL_84_7 9
#define LABEL_84_8 11
#define LABEL_84_9 13
#define LABEL_84_11 15
#define LABEL_84_10 17
#define LABEL_84_15 19
#define LABEL_84_16 21
#define LABEL_84_12 23
#define LABEL_84_13 25
#define LABEL_84_17 27
#define ENVIRONMENT_LABEL_84_3 43
#define DEBUGGING_LABEL_84_2 42
#define OBJECT_84_6 41
#define OBJECT_84_5 40
#define OBJECT_84_4 39
#define OBJECT_84_3 38
#define OBJECT_84_2 37
#define OBJECT_84_1 36
#define OBJECT_84_0 35
#define EXECUTE_CACHE_84_19 29
#define EXECUTE_CACHE_84_18 31
#define EXECUTE_CACHE_84_14 33
#define FREE_REFERENCES_LABEL_84_0 28
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_84_4);
      goto for_each_symbol_in_obarray_21;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_84_6);
      goto per_bucket_19;

    case 3:
      current_block = (Rpc - LABEL_84_7);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_84_8);
      goto per_symbol_16;

    case 5:
      current_block = (Rpc - LABEL_84_9);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_84_11);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_84_10);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_84_15);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_84_16);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_84_12);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_84_13);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_84_17);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_each_symbol_in_obarray_29)
DEFLABEL (for_each_symbol_in_obarray_21)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_33;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_32)
  goto per_bucket_19;

DEFLABEL (label_33)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (per_bucket_30)
DEFLABEL (per_bucket_19)
  INTERRUPT_CHECK (26, LABEL_84_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_34;
  Rvl = (current_block [OBJECT_84_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd12.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_36;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_36;
  Wrd22 = Wrd12;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_36;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd17.pObj) = (& ((Wrd24.pObj) [(Wrd14.Lng)]));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_35)
  goto per_symbol_16;

DEFLABEL (label_36)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (per_symbol_31)
DEFLABEL (per_symbol_16)
  INTERRUPT_CHECK (26, LABEL_84_8);
  (Wrd32.Obj) = (current_block [OBJECT_84_3]);
  (Wrd35.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 55L) < ((unsigned long) (Wrd35.Lng))))
    goto label_46;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd6.Obj) == (Wrd8.Obj)))
    goto label_40;

DEFLABEL (label_39)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_14]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_84_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_19]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_84_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_37)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_38)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_18]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_84_17);
  (Rsp [0]) = Rvl;
  goto per_symbol_16;

DEFLABEL (label_40)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 1)
    goto label_41;
  Rsp = (& (Rsp [1]));
  goto per_bucket_19;

DEFLABEL (label_41)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  if (! ((Wrd10.uLng) == 1))
    goto label_45;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_44)
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_84_10);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_43;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_42)
  (Rsp [0]) = (Wrd5.Obj);
  goto per_symbol_16;

DEFLABEL (label_43)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_6]), 1);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_5]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_4]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  goto label_39;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_84_12);
  goto label_38;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_7 5
#define LABEL_85_5 7
#define TAG_85_6 2
#define LABEL_85_10 9
#define ENVIRONMENT_LABEL_85_3 20
#define DEBUGGING_LABEL_85_2 19
#define OBJECT_85_1 18
#define OBJECT_85_0 17
#define EXECUTE_CACHE_85_9 11
#define EXECUTE_CACHE_85_8 13
#define FREE_REFERENCE_85_0 16
#define FREE_REFERENCES_LABEL_85_0 10
#define NUMBER_OF_LINKER_SECTIONS_85_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_85_4);
      goto obarray__list_5;

    case 1:
      current_block = (Rpc - LABEL_85_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_85_5);
      goto accumulate_10;

    case 3:
      current_block = (Rpc - LABEL_85_10);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (obarray__list_9)
DEFLABEL (obarray__list_5)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd8.Obj) = (current_block [OBJECT_85_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_85_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_85_5])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  ((Wrd23.pObj) [2]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  if ((Wrd9.Obj) == (current_block [OBJECT_85_1]))
    goto label_11;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_85_7);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_8]));

DEFLABEL (accumulate_10)
  CLOSURE_HEADER (LABEL_85_5);

DEFLABEL (accumulate_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  ((Wrd12.pObj) [0]) = (Wrd5.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_13;
  Wrd19 = Wrd23;

DEFLABEL (label_12)
  Rvl = (Wrd19.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_10])), (Wrd20.pObj));

DEFLABEL (label_7)
  (Wrd19.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_7 7
#define LABEL_86_9 9
#define LABEL_86_10 11
#define LABEL_86_12 13
#define LABEL_86_13 15
#define LABEL_86_14 17
#define LABEL_86_15 19
#define LABEL_86_11 21
#define LABEL_86_16 23
#define LABEL_86_18 25
#define LABEL_86_20 27
#define LABEL_86_21 29
#define LABEL_86_24 31
#define LABEL_86_25 33
#define LABEL_86_22 35
#define LABEL_86_27 37
#define LABEL_86_23 39
#define LABEL_86_28 41
#define LABEL_86_29 43
#define ENVIRONMENT_LABEL_86_3 66
#define DEBUGGING_LABEL_86_2 65
#define OBJECT_86_9 64
#define OBJECT_86_8 63
#define OBJECT_86_7 62
#define OBJECT_86_6 61
#define OBJECT_86_5 60
#define OBJECT_86_4 59
#define OBJECT_86_3 58
#define OBJECT_86_2 57
#define OBJECT_86_1 56
#define OBJECT_86_0 55
#define EXECUTE_CACHE_86_26 45
#define EXECUTE_CACHE_86_19 47
#define EXECUTE_CACHE_86_17 49
#define EXECUTE_CACHE_86_8 51
#define EXECUTE_CACHE_86_6 53
#define FREE_REFERENCES_LABEL_86_0 44
#define NUMBER_OF_LINKER_SECTIONS_86_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd23;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_86_4);
      goto clean_obarray_31;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto lambda_30;

    case 2:
      current_block = (Rpc - LABEL_86_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_86_9);
      goto label_33;

    case 4:
      current_block = (Rpc - LABEL_86_10);
      goto loop_27;

    case 5:
      current_block = (Rpc - LABEL_86_12);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_86_13);
      goto find_broken_entry_13;

    case 7:
      current_block = (Rpc - LABEL_86_14);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_86_15);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_86_11);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_86_16);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_86_18);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_86_20);
      goto delete_broken_entries_22;

    case 13:
      current_block = (Rpc - LABEL_86_21);
      goto label_37;

    case 14:
      current_block = (Rpc - LABEL_86_24);
      goto clobber_25;

    case 15:
      current_block = (Rpc - LABEL_86_25);
      goto label_38;

    case 16:
      current_block = (Rpc - LABEL_86_22);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_86_27);
      goto label_39;

    case 18:
      current_block = (Rpc - LABEL_86_23);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_86_28);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_86_29);
      goto continuation_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (clean_obarray_41)
DEFLABEL (clean_obarray_31)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_6]));

DEFLABEL (lambda_42)
DEFLABEL (lambda_30)
  INTERRUPT_CHECK (26, LABEL_86_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_86_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_86_7);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 10))
    goto label_48;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_47)
  goto loop_27;

DEFLABEL (label_48)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_1]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (loop_43)
DEFLABEL (loop_27)
  INTERRUPT_CHECK (26, LABEL_86_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_49;
  Rvl = (current_block [OBJECT_86_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd12.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_52;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_52;
  Wrd26 = Wrd12;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd26.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_52;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd21.pObj) = (& ((Wrd28.pObj) [(Wrd18.Lng)]));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_51)
  goto find_broken_entry_13;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_86_11);

DEFLABEL (label_50)
  goto loop_27;

DEFLABEL (label_52)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_2]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (find_broken_entry_44)
DEFLABEL (find_broken_entry_13)
  INTERRUPT_CHECK (26, LABEL_86_13);
  (Wrd26.Obj) = (current_block [OBJECT_86_4]);
  (Wrd29.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 55L) < ((unsigned long) (Wrd29.Lng))))
    goto label_59;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd6.Obj) == (Wrd8.Obj)))
    goto label_55;

DEFLABEL (label_54)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_86_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_86_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto find_broken_entry_13;

DEFLABEL (label_53)
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  goto delete_broken_entries_22;

DEFLABEL (label_55)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 1)
    goto label_56;
  Rsp = (& (Rsp [3]));
  goto label_50;

DEFLABEL (label_56)
  (Rsp [1]) = (Wrd9.Obj);
  if (! ((Wrd10.uLng) == 1))
    goto label_58;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_57)
  (Rsp [0]) = (Wrd13.Obj);
  goto find_broken_entry_13;

DEFLABEL (label_58)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_15]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_6]), 1);

DEFLABEL (label_35)
  (Wrd13.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_59)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_14]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_5]), 2);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  goto label_54;

DEFLABEL (delete_broken_entries_45)
DEFLABEL (delete_broken_entries_22)
  INTERRUPT_CHECK (26, LABEL_86_20);
  (Wrd29.Obj) = (current_block [OBJECT_86_4]);
  (Wrd32.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 55L) < ((unsigned long) (Wrd32.Lng))))
    goto label_66;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd6.Obj) == (Wrd8.Obj)))
    goto label_62;

DEFLABEL (label_61)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_23]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_17]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_86_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_19]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_86_28);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_60;
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  goto delete_broken_entries_22;

DEFLABEL (label_60)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_29]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.pObj) = (& (Rsp [5]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto clobber_25;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_86_29);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto find_broken_entry_13;

DEFLABEL (label_62)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 1)
    goto label_63;
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_86_7]);
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd14.pObj) = (& (Rsp [4]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd14.pObj)));
  (Rsp [2]) = (Wrd16.Obj);
  goto clobber_25;

DEFLABEL (label_63)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_22]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.pObj) = (& (Rsp [4]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto clobber_25;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_86_22);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_65;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_64)
  (Rsp [0]) = (Wrd6.Obj);
  goto find_broken_entry_13;

DEFLABEL (label_65)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_27]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_6]), 1);

DEFLABEL (label_39)
  (Wrd6.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_66)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_21]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_5]), 2);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_61;

DEFLABEL (clobber_46)
DEFLABEL (clobber_25)
  INTERRUPT_CHECK (26, LABEL_86_24);
  (Wrd49.Obj) = (current_block [OBJECT_86_4]);
  (Wrd52.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 55L) < ((unsigned long) (Wrd52.Lng))))
    goto label_73;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd49.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd6.Obj) == (Wrd8.Obj)))
    goto label_68;

DEFLABEL (label_67)
  (Wrd46.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd47.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_26]));

DEFLABEL (label_68)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 1)
    goto label_71;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);
  (Rsp [0]) = (Wrd11.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Obj) = ((Wrd13.pObj) [0]);
  (Rsp [1]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd35.uLng) == 10)
    goto label_70;

DEFLABEL (label_69)
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_9]), 3);

DEFLABEL (label_70)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_69;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) (Wrd29.Lng)) < ((unsigned long) (Wrd33.Lng))))
    goto label_69;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd23.pObj) = (& ((Wrd31.pObj) [(Wrd20.Lng)]));
  ((Wrd23.pObj) [1]) = (Wrd14.Obj);
  Rvl = (current_block [OBJECT_86_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd36.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd36.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_72;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = (Rsp [1]);
  ((Wrd40.pObj) [1]) = (Wrd41.Obj);
  Rvl = (current_block [OBJECT_86_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_72)
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_8]), 2);

DEFLABEL (label_73)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_25]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_5]), 2);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_67;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define ENVIRONMENT_LABEL_87_3 5
#define DEBUGGING_LABEL_87_2 4
#define FREE_REFERENCES_LABEL_87_0 4
#define NUMBER_OF_LINKER_SECTIONS_87_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_87_4);
      goto impurify_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (impurify_3)
DEFLABEL (impurify_0)
  INTERRUPT_CHECK (26, LABEL_87_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_6 7
#define LABEL_88_8 9
#define TAG_88_9 3
#define LABEL_88_10 11
#define TAG_88_11 4
#define LABEL_88_16 13
#define LABEL_88_14 15
#define LABEL_88_17 17
#define LABEL_88_18 19
#define LABEL_88_20 21
#define LABEL_88_21 23
#define TAG_88_22 10
#define ENVIRONMENT_LABEL_88_3 49
#define DEBUGGING_LABEL_88_2 48
#define OBJECT_88_6 47
#define OBJECT_88_5 46
#define OBJECT_88_4 45
#define OBJECT_88_3 44
#define OBJECT_88_2 43
#define OBJECT_88_1 42
#define OBJECT_88_0 41
#define EXECUTE_CACHE_88_25 25
#define EXECUTE_CACHE_88_24 27
#define EXECUTE_CACHE_88_23 29
#define EXECUTE_CACHE_88_19 31
#define EXECUTE_CACHE_88_15 33
#define EXECUTE_CACHE_88_13 35
#define EXECUTE_CACHE_88_12 37
#define EXECUTE_CACHE_88_7 39
#define FREE_REFERENCES_LABEL_88_0 24
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_88_4);
      goto fasdump_18;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_88_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_88_8);
      goto lambda_22;

    case 4:
      current_block = (Rpc - LABEL_88_10);
      goto lambda_23;

    case 5:
      current_block = (Rpc - LABEL_88_16);
      goto loop_10;

    case 6:
      current_block = (Rpc - LABEL_88_14);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_88_17);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_88_18);
      goto continuation_14;

    case 9:
      current_block = (Rpc - LABEL_88_20);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_88_21);
      goto lambda_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fasdump_21)
DEFLABEL (fasdump_18)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == (current_block [OBJECT_88_0]))
    goto label_27;
  (* (--Rsp)) = (Wrd5.Obj);
  goto label_26;

DEFLABEL (label_27)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_26)
DEFLABEL (label_32)
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == (current_block [OBJECT_88_0]))
    goto label_29;
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_28;

DEFLABEL (label_29)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_28)
DEFLABEL (label_31)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_88_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_88_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_88_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88_8])));
  Rhp += 3;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd11 = Wrd6;
  (Wrd12.Obj) = (Rsp [3]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  ((Wrd11.pObj) [4]) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Rsp [7]) = (Wrd5.Obj);
  Rsp = (& (Rsp [7]));
  goto lambda_12;

DEFLABEL (label_30)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_88_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88_10])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  ((Wrd19.pObj) [2]) = Rvl;
  (Rsp [6]) = (Wrd18.Obj);
  (Rsp [7]) = (Wrd5.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_12]));

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_88_8);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  goto loop_10;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_88_10);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_88_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_88_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_19]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_88_18);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_24]));

DEFLABEL (loop_24)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_88_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_2]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_88_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  Rvl = (current_block [OBJECT_88_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_88_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88_21])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_88_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_88_4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_88_20);
  goto loop_10;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_88_21);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_88_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_25]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define ENVIRONMENT_LABEL_89_3 9
#define DEBUGGING_LABEL_89_2 8
#define OBJECT_89_0 7
#define EXECUTE_CACHE_89_5 5
#define FREE_REFERENCES_LABEL_89_0 4
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_89_4);
      goto make_hook_list_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_hook_list_3)
DEFLABEL (make_hook_list_0)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd5.Obj) = (current_block [OBJECT_89_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define ENVIRONMENT_LABEL_90_3 13
#define DEBUGGING_LABEL_90_2 12
#define OBJECT_90_0 11
#define EXECUTE_CACHE_90_7 7
#define EXECUTE_CACHE_90_6 9
#define FREE_REFERENCES_LABEL_90_0 6
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_90_4);
      goto guarantee_hook_list_1;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_hook_list_4)
DEFLABEL (guarantee_hook_list_1)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_90_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_90_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define ENVIRONMENT_LABEL_91_3 9
#define DEBUGGING_LABEL_91_2 8
#define OBJECT_91_0 7
#define EXECUTE_CACHE_91_5 5
#define FREE_REFERENCES_LABEL_91_0 4
#define NUMBER_OF_LINKER_SECTIONS_91_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_91_4);
      goto error_not_hook_list_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_hook_list_3)
DEFLABEL (error_not_hook_list_0)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_91_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define LABEL_92_7 7
#define LABEL_92_9 9
#define LABEL_92_10 11
#define LABEL_92_11 13
#define LABEL_92_12 15
#define LABEL_92_13 17
#define LABEL_92_15 19
#define LABEL_92_16 21
#define LABEL_92_17 23
#define ENVIRONMENT_LABEL_92_3 38
#define DEBUGGING_LABEL_92_2 37
#define OBJECT_92_5 36
#define OBJECT_92_4 35
#define OBJECT_92_3 34
#define OBJECT_92_2 33
#define OBJECT_92_1 32
#define OBJECT_92_0 31
#define EXECUTE_CACHE_92_14 25
#define EXECUTE_CACHE_92_8 27
#define EXECUTE_CACHE_92_6 29
#define FREE_REFERENCES_LABEL_92_0 24
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd77;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd58;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_92_4);
      goto append_hook_to_list_17;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_92_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_92_9);
      goto continuation_13;

    case 4:
      current_block = (Rpc - LABEL_92_10);
      goto loop_15;

    case 5:
      current_block = (Rpc - LABEL_92_11);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_92_12);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_92_13);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_92_15);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_92_16);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_92_17);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (append_hook_to_list_26)
DEFLABEL (append_hook_to_list_17)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_92_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_92_5);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_92_7);
  (* (--Rsp)) = Rvl;
  goto loop_15;

DEFLABEL (loop_27)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_92_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_30;
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_92_4]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  if (! ((Wrd16.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_28;
  (Wrd28.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd28.Obj);
  (Rsp [5]) = (Wrd14.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_14]));

DEFLABEL (label_28)
  (Rsp [4]) = (Wrd16.Obj);
  (Rsp [5]) = (Wrd14.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_29;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [1]) = (Wrd23.Obj);
  Rvl = (current_block [OBJECT_92_5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_29)
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_3]), 2);

DEFLABEL (label_30)
  if (! ((Wrd6.uLng) == 1))
    goto label_45;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_44)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_43;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd40.Obj) = ((Wrd41.pObj) [0]);

DEFLABEL (label_42)
  (Wrd47.Obj) = (Rsp [3]);
  if ((Wrd40.Obj) == (Wrd47.Obj))
    goto label_34;
  (Wrd48.Obj) = (Rsp [0]);

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_32;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [1]);

DEFLABEL (label_31)
  (Rsp [0]) = (Wrd49.Obj);
  goto loop_15;

DEFLABEL (label_32)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_17]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_2]), 1);

DEFLABEL (label_21)
  (Wrd49.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd58.Obj) = (Rsp [1]);
  if ((Wrd58.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 1))
    goto label_38;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd60.Obj) = ((Wrd62.pObj) [1]);

DEFLABEL (label_37)
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_36;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  ((Wrd70.pObj) [1]) = (Wrd60.Obj);

DEFLABEL (label_35)
  (Wrd48.Obj) = (Rsp [1]);
  goto label_33;

DEFLABEL (label_36)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_16]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_3]), 2);

DEFLABEL (label_23)
  goto label_35;

DEFLABEL (label_38)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_15]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_2]), 1);

DEFLABEL (label_22)
  (Wrd60.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_9]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd84.Obj) = (Rsp [1]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_41;
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd83.Obj) = ((Wrd82.pObj) [1]);
  (* (--Rsp)) = (Wrd83.Obj);

DEFLABEL (label_40)
  (Wrd90.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd90.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_92_9);
  goto label_35;

DEFLABEL (label_41)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_13]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_2]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_12]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 1);

DEFLABEL (label_20)
  (Wrd40.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_11]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 1);

DEFLABEL (label_19)
  (Wrd31.Obj) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_5 5
#define LABEL_93_7 7
#define LABEL_93_9 9
#define LABEL_93_10 11
#define LABEL_93_11 13
#define LABEL_93_12 15
#define LABEL_93_13 17
#define LABEL_93_15 19
#define LABEL_93_16 21
#define LABEL_93_17 23
#define ENVIRONMENT_LABEL_93_3 37
#define DEBUGGING_LABEL_93_2 36
#define OBJECT_93_4 35
#define OBJECT_93_3 34
#define OBJECT_93_2 33
#define OBJECT_93_1 32
#define OBJECT_93_0 31
#define EXECUTE_CACHE_93_14 25
#define EXECUTE_CACHE_93_8 27
#define EXECUTE_CACHE_93_6 29
#define FREE_REFERENCES_LABEL_93_0 24
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd55;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_93_4);
      goto remove_hook_from_list_14;

    case 1:
      current_block = (Rpc - LABEL_93_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_93_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_93_9);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_93_10);
      goto loop_12;

    case 5:
      current_block = (Rpc - LABEL_93_11);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_93_12);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_93_13);
      goto label_21;

    case 8:
      current_block = (Rpc - LABEL_93_15);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_93_16);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_93_17);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (remove_hook_from_list_23)
DEFLABEL (remove_hook_from_list_14)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_93_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_93_5);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_93_7);
  (* (--Rsp)) = Rvl;
  goto loop_12;

DEFLABEL (loop_24)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_93_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_25;
  Rvl = (current_block [OBJECT_93_4]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  if (! ((Wrd6.uLng) == 1))
    goto label_40;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_39)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_38;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_37)
  (Wrd25.Obj) = (Rsp [3]);
  if ((Wrd18.Obj) == (Wrd25.Obj))
    goto label_29;
  (Wrd26.Obj) = (Rsp [0]);

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_27;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [0]) = (Wrd27.Obj);
  goto loop_12;

DEFLABEL (label_27)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_17]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_2]), 1);

DEFLABEL (label_18)
  (Wrd27.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd36.Obj) = (Rsp [1]);
  if ((Wrd36.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_33;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_32)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_31;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  ((Wrd48.pObj) [1]) = (Wrd38.Obj);

DEFLABEL (label_30)
  (Wrd26.Obj) = (Rsp [1]);
  goto label_28;

DEFLABEL (label_31)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_16]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_3]), 2);

DEFLABEL (label_20)
  goto label_30;

DEFLABEL (label_33)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_15]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_2]), 1);

DEFLABEL (label_19)
  (Wrd38.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_36;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [1]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_35)
  (Wrd68.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_93_9);
  goto label_30;

DEFLABEL (label_36)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_13]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_2]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 1);

DEFLABEL (label_17)
  (Wrd18.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 1);

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define LABEL_94_7 7
#define LABEL_94_8 9
#define ENVIRONMENT_LABEL_94_3 20
#define DEBUGGING_LABEL_94_2 19
#define OBJECT_94_1 18
#define OBJECT_94_0 17
#define EXECUTE_CACHE_94_10 11
#define EXECUTE_CACHE_94_9 13
#define EXECUTE_CACHE_94_6 15
#define FREE_REFERENCES_LABEL_94_0 10
#define NUMBER_OF_LINKER_SECTIONS_94_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_94_4);
      goto hook_in_listP_3;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_94_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_94_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hook_in_listP_6)
DEFLABEL (hook_in_listP_3)
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
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_94_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_94_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  Rvl = (current_block [OBJECT_94_1]);
  goto label_7;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define LABEL_95_7 7
#define LABEL_95_9 9
#define TAG_95_10 3
#define LABEL_95_12 11
#define ENVIRONMENT_LABEL_95_3 24
#define DEBUGGING_LABEL_95_2 23
#define OBJECT_95_1 22
#define OBJECT_95_0 21
#define EXECUTE_CACHE_95_13 13
#define EXECUTE_CACHE_95_11 15
#define EXECUTE_CACHE_95_8 17
#define EXECUTE_CACHE_95_6 19
#define FREE_REFERENCES_LABEL_95_0 12
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_95_4);
      goto run_hooks_in_list_4;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_95_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_95_9);
      goto lambda_9;

    case 4:
      current_block = (Rpc - LABEL_95_12);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (run_hooks_in_list_8)
DEFLABEL (run_hooks_in_list_4)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_95_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_95_7);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_9])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_11]));

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_95_9);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_11;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_13]));

DEFLABEL (label_11)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_1]), 1);

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_5 5
#define ENVIRONMENT_LABEL_96_3 9
#define DEBUGGING_LABEL_96_2 8
#define FREE_REFERENCE_96_0 7
#define FREE_REFERENCES_LABEL_96_0 6
#define NUMBER_OF_LINKER_SECTIONS_96_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_96_4);
      goto canonicalize_1;

    case 1:
      current_block = (Rpc - LABEL_96_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_5)
DEFLABEL (canonicalize_1)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = (Wrd5.Obj);

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_96_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_9;
  Wrd10 = Wrd14;

DEFLABEL (label_8)
  Rvl = (Wrd10.Obj);
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96_5])), (Wrd11.pObj));

DEFLABEL (label_3)
  (Wrd10.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define LABEL_97_5 5
#define ENVIRONMENT_LABEL_97_3 9
#define DEBUGGING_LABEL_97_2 8
#define FREE_REFERENCE_97_0 7
#define FREE_REFERENCES_LABEL_97_0 6
#define NUMBER_OF_LINKER_SECTIONS_97_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_97_4);
      goto decanonicalize_1;

    case 1:
      current_block = (Rpc - LABEL_97_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decanonicalize_5)
DEFLABEL (decanonicalize_1)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_97_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  (Wrd12.Obj) = (Rsp [0]);
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_7;
  Rvl = (Wrd12.Obj);
  goto label_6;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_97_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define LABEL_98_5 5
#define LABEL_98_7 7
#define ENVIRONMENT_LABEL_98_3 13
#define DEBUGGING_LABEL_98_2 12
#define OBJECT_98_0 11
#define EXECUTE_CACHE_98_6 9
#define FREE_REFERENCES_LABEL_98_0 8
#define NUMBER_OF_LINKER_SECTIONS_98_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_98_4);
      goto make_ephemeron_2;

    case 1:
      current_block = (Rpc - LABEL_98_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_98_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_ephemeron_5)
DEFLABEL (make_ephemeron_2)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_98_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_98_7);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define LABEL_99_5 5
#define ENVIRONMENT_LABEL_99_3 11
#define DEBUGGING_LABEL_99_2 10
#define OBJECT_99_1 9
#define OBJECT_99_0 8
#define FREE_REFERENCE_99_0 7
#define FREE_REFERENCES_LABEL_99_0 6
#define NUMBER_OF_LINKER_SECTIONS_99_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_99_4);
      goto ephemeronP_0;

    case 1:
      current_block = (Rpc - LABEL_99_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ephemeronP_4)
DEFLABEL (ephemeronP_0)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_99_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 26)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_1]), 2);

DEFLABEL (label_6)
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (1 << TYPE_CODE_LENGTH))))
    goto label_5;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd13.Obj) == (Wrd15.Obj))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_99_0]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define LABEL_100_5 5
#define ENVIRONMENT_LABEL_100_3 13
#define DEBUGGING_LABEL_100_2 12
#define OBJECT_100_0 11
#define EXECUTE_CACHE_100_7 7
#define EXECUTE_CACHE_100_6 9
#define FREE_REFERENCES_LABEL_100_0 6
#define NUMBER_OF_LINKER_SECTIONS_100_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_100_4);
      goto guarantee_ephemeron_1;

    case 1:
      current_block = (Rpc - LABEL_100_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_ephemeron_4)
DEFLABEL (guarantee_ephemeron_1)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_100_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_100_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define ENVIRONMENT_LABEL_101_3 11
#define DEBUGGING_LABEL_101_2 10
#define OBJECT_101_2 9
#define OBJECT_101_1 8
#define OBJECT_101_0 7
#define EXECUTE_CACHE_101_5 5
#define FREE_REFERENCES_LABEL_101_0 4
#define NUMBER_OF_LINKER_SECTIONS_101_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_101_4);
      goto error_not_ephemeron_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_ephemeron_5)
DEFLABEL (error_not_ephemeron_2)
  INTERRUPT_CHECK (26, LABEL_101_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_101_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_101_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_101_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define LABEL_102_5 5
#define ENVIRONMENT_LABEL_102_3 13
#define DEBUGGING_LABEL_102_2 12
#define OBJECT_102_0 11
#define EXECUTE_CACHE_102_7 7
#define EXECUTE_CACHE_102_6 9
#define FREE_REFERENCES_LABEL_102_0 6
#define NUMBER_OF_LINKER_SECTIONS_102_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_102_4);
      goto ephemeron_key_2;

    case 1:
      current_block = (Rpc - LABEL_102_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ephemeron_key_5)
DEFLABEL (ephemeron_key_2)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_102_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_102_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_103_4 3
#define LABEL_103_5 5
#define ENVIRONMENT_LABEL_103_3 13
#define DEBUGGING_LABEL_103_2 12
#define OBJECT_103_0 11
#define EXECUTE_CACHE_103_7 7
#define EXECUTE_CACHE_103_6 9
#define FREE_REFERENCES_LABEL_103_0 6
#define NUMBER_OF_LINKER_SECTIONS_103_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_103 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_103_4);
      goto ephemeron_datum_2;

    case 1:
      current_block = (Rpc - LABEL_103_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ephemeron_datum_5)
DEFLABEL (ephemeron_datum_2)
  INTERRUPT_CHECK (26, LABEL_103_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_103_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_103_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_103_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_104_4 3
#define LABEL_104_7 5
#define LABEL_104_5 7
#define LABEL_104_8 9
#define LABEL_104_11 11
#define ENVIRONMENT_LABEL_104_3 23
#define DEBUGGING_LABEL_104_2 22
#define OBJECT_104_0 21
#define EXECUTE_CACHE_104_10 13
#define EXECUTE_CACHE_104_9 15
#define EXECUTE_CACHE_104_6 17
#define FREE_REFERENCE_104_0 20
#define FREE_REFERENCES_LABEL_104_0 12
#define NUMBER_OF_LINKER_SECTIONS_104_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_104 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_104_4);
      goto set_ephemeron_keyB_6;

    case 1:
      current_block = (Rpc - LABEL_104_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_104_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_104_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_104_11);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_ephemeron_keyB_10)
DEFLABEL (set_ephemeron_keyB_6)
  INTERRUPT_CHECK (26, LABEL_104_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_104_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  if (! ((Wrd10.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_12;

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_9]));

DEFLABEL (label_12)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_104_7);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  ((Wrd19.pObj) [1]) = Rvl;
  goto label_11;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_104_8);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_14;
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_11])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_105_4 3
#define LABEL_105_7 5
#define LABEL_105_5 7
#define LABEL_105_8 9
#define LABEL_105_11 11
#define ENVIRONMENT_LABEL_105_3 23
#define DEBUGGING_LABEL_105_2 22
#define OBJECT_105_0 21
#define EXECUTE_CACHE_105_10 13
#define EXECUTE_CACHE_105_9 15
#define EXECUTE_CACHE_105_6 17
#define FREE_REFERENCE_105_0 20
#define FREE_REFERENCES_LABEL_105_0 12
#define NUMBER_OF_LINKER_SECTIONS_105_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_105 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_105_4);
      goto set_ephemeron_datumB_6;

    case 1:
      current_block = (Rpc - LABEL_105_7);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_105_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_105_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_105_11);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_ephemeron_datumB_10)
DEFLABEL (set_ephemeron_datumB_6)
  INTERRUPT_CHECK (26, LABEL_105_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_105_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_105_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  if (! ((Wrd10.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_12;

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_9]));

DEFLABEL (label_12)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_105_7);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  ((Wrd19.pObj) [2]) = Rvl;
  goto label_11;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_105_8);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_105_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_14;
  Wrd6 = Wrd10;

DEFLABEL (label_13)
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_105_11])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_106_4 3
#define LABEL_106_5 5
#define ENVIRONMENT_LABEL_106_3 12
#define DEBUGGING_LABEL_106_2 11
#define OBJECT_106_1 10
#define OBJECT_106_0 9
#define EXECUTE_CACHE_106_6 7
#define FREE_REFERENCES_LABEL_106_0 6
#define NUMBER_OF_LINKER_SECTIONS_106_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
global_so_code_106 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_106_4);
      goto ephemeron_brokenP_2;

    case 1:
      current_block = (Rpc - LABEL_106_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ephemeron_brokenP_5)
DEFLABEL (ephemeron_brokenP_2)
  INTERRUPT_CHECK (26, LABEL_106_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_106_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_106_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_106_1]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_10 11
#define LABEL_9 13
#define LABEL_11 15
#define LABEL_13 17
#define LABEL_12 19
#define LABEL_15 21
#define LABEL_14 23
#define LABEL_16 25
#define LABEL_17 27
#define LABEL_19 29
#define LABEL_20 31
#define LABEL_21 33
#define LABEL_22 35
#define LABEL_27 37
#define LABEL_23 39
#define LABEL_25 41
#define LABEL_31 43
#define LABEL_26 45
#define LABEL_29 47
#define LABEL_35 49
#define LABEL_30 51
#define LABEL_33 53
#define LABEL_39 55
#define LABEL_34 57
#define LABEL_37 59
#define LABEL_38 61
#define LABEL_41 63
#define LABEL_42 65
#define LABEL_43 67
#define LABEL_44 69
#define ENVIRONMENT_LABEL_3 126
#define DEBUGGING_LABEL_2 125
#define PURIFICATION_ROOT 124
#define OBJECT_31 123
#define OBJECT_30 122
#define OBJECT_29 121
#define OBJECT_28 120
#define OBJECT_27 119
#define OBJECT_26 118
#define OBJECT_25 117
#define OBJECT_24 116
#define OBJECT_23 115
#define OBJECT_22 114
#define OBJECT_21 113
#define OBJECT_20 112
#define OBJECT_19 111
#define OBJECT_18 110
#define OBJECT_17 109
#define OBJECT_16 108
#define OBJECT_15 107
#define OBJECT_14 106
#define OBJECT_13 105
#define OBJECT_12 104
#define OBJECT_11 103
#define OBJECT_10 102
#define OBJECT_9 101
#define OBJECT_8 100
#define OBJECT_7 99
#define OBJECT_6 98
#define OBJECT_5 97
#define OBJECT_4 96
#define OBJECT_3 95
#define OBJECT_2 94
#define OBJECT_1 93
#define OBJECT_0 92
#define EXECUTE_CACHE_40 71
#define EXECUTE_CACHE_36 73
#define EXECUTE_CACHE_32 75
#define EXECUTE_CACHE_28 77
#define EXECUTE_CACHE_24 79
#define EXECUTE_CACHE_18 81
#define FREE_REFERENCE_4 84
#define FREE_REFERENCE_3 85
#define FREE_REFERENCE_2 86
#define FREE_REFERENCE_1 87
#define FREE_REFERENCE_0 88
#define GLOBAL_EXECUTE_CACHE_5 90
#define FREE_REFERENCES_LABEL_0 70
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
global_so_2213cb99071bf562 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_12);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_14);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_22);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_27);
      goto label_31;

    case 18:
      current_block = (Rpc - LABEL_23);
      goto continuation_13;

    case 19:
      current_block = (Rpc - LABEL_25);
      goto continuation_16;

    case 20:
      current_block = (Rpc - LABEL_31);
      goto label_32;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto continuation_15;

    case 22:
      current_block = (Rpc - LABEL_29);
      goto continuation_18;

    case 23:
      current_block = (Rpc - LABEL_35);
      goto label_33;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto continuation_17;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto continuation_20;

    case 26:
      current_block = (Rpc - LABEL_39);
      goto label_34;

    case 27:
      current_block = (Rpc - LABEL_34);
      goto continuation_19;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto continuation_22;

    case 29:
      current_block = (Rpc - LABEL_38);
      goto continuation_21;

    case 30:
      current_block = (Rpc - LABEL_41);
      goto continuation_24;

    case 31:
      current_block = (Rpc - LABEL_42);
      goto label_37;

    case 32:
      current_block = (Rpc - LABEL_43);
      goto label_38;

    case 33:
      current_block = (Rpc - LABEL_44);
      goto expression_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_26)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_43])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_38)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_37)
  {
    static const short sections [] =
      {
	0,
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
	0,
	1,
	2,
	1,
	1,
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
	2,
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
	0,
	1,
	1,
	1,
	0,
	0,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	3,
	1,
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
	0,
	0,
	0,
	0,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 106)
      goto label_36;
    blocks = (current_block [OBJECT_31]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_42])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_36)
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
    goto label_54;
  Wrd8 = Wrd12;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_52;
  Wrd8 = Wrd12;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_50;
  Wrd8 = Wrd12;

DEFLABEL (label_49)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_48;
  Wrd8 = Wrd12;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (MAKE_OBJECT (0, 1));
  (Wrd17.Obj) = (current_block [OBJECT_11]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14]), 2);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_46;
  Wrd12 = Wrd16;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_44;
  Wrd11 = Wrd15;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_42;
  Wrd12 = Wrd16;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_40;
  Wrd12 = Wrd16;

DEFLABEL (label_39)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_38);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25]);
  (Wrd12.Obj) = (current_block [OBJECT_26]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd5.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_30]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39])), (Wrd13.pObj));

DEFLABEL (label_34)
  (Wrd12.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd13.pObj));

DEFLABEL (label_33)
  (Wrd12.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd12.pObj));

DEFLABEL (label_32)
  (Wrd11.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd13.pObj));

DEFLABEL (label_31)
  (Wrd12.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd9.pObj));

DEFLABEL (label_30)
  (Wrd8.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd9.pObj));

DEFLABEL (label_29)
  (Wrd8.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd9.pObj));

DEFLABEL (label_28)
  (Wrd8.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_27)
  (Wrd8.Obj) = Rvl;
  goto label_53;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_global_so_2213cb99071bf562 [106] =
  {
    { "global_so_code_1", 1, global_so_code_1 },
    { "global_so_code_2", 1, global_so_code_2 },
    { "global_so_code_3", 1, global_so_code_3 },
    { "global_so_code_4", 1, global_so_code_4 },
    { "global_so_code_5", 1, global_so_code_5 },
    { "global_so_code_6", 1, global_so_code_6 },
    { "global_so_code_7", 1, global_so_code_7 },
    { "global_so_code_8", 1, global_so_code_8 },
    { "global_so_code_9", 1, global_so_code_9 },
    { "global_so_code_10", 1, global_so_code_10 },
    { "global_so_code_11", 1, global_so_code_11 },
    { "global_so_code_12", 1, global_so_code_12 },
    { "global_so_code_13", 1, global_so_code_13 },
    { "global_so_code_14", 1, global_so_code_14 },
    { "global_so_code_15", 1, global_so_code_15 },
    { "global_so_code_16", 1, global_so_code_16 },
    { "global_so_code_17", 1, global_so_code_17 },
    { "global_so_code_18", 1, global_so_code_18 },
    { "global_so_code_19", 1, global_so_code_19 },
    { "global_so_code_20", 1, global_so_code_20 },
    { "global_so_code_21", 1, global_so_code_21 },
    { "global_so_code_22", 1, global_so_code_22 },
    { "global_so_code_23", 1, global_so_code_23 },
    { "global_so_code_24", 1, global_so_code_24 },
    { "global_so_code_25", 1, global_so_code_25 },
    { "global_so_code_26", 1, global_so_code_26 },
    { "global_so_code_27", 1, global_so_code_27 },
    { "global_so_code_28", 1, global_so_code_28 },
    { "global_so_code_29", 1, global_so_code_29 },
    { "global_so_code_30", 1, global_so_code_30 },
    { "global_so_code_31", 1, global_so_code_31 },
    { "global_so_code_32", 1, global_so_code_32 },
    { "global_so_code_33", 1, global_so_code_33 },
    { "global_so_code_34", 1, global_so_code_34 },
    { "global_so_code_35", 1, global_so_code_35 },
    { "global_so_code_36", 1, global_so_code_36 },
    { "global_so_code_37", 1, global_so_code_37 },
    { "global_so_code_38", 1, global_so_code_38 },
    { "global_so_code_39", 1, global_so_code_39 },
    { "global_so_code_40", 1, global_so_code_40 },
    { "global_so_code_41", 1, global_so_code_41 },
    { "global_so_code_42", 1, global_so_code_42 },
    { "global_so_code_43", 1, global_so_code_43 },
    { "global_so_code_44", 1, global_so_code_44 },
    { "global_so_code_45", 1, global_so_code_45 },
    { "global_so_code_46", 2, global_so_code_46 },
    { "global_so_code_47", 11, global_so_code_47 },
    { "global_so_code_48", 1, global_so_code_48 },
    { "global_so_code_49", 2, global_so_code_49 },
    { "global_so_code_50", 1, global_so_code_50 },
    { "global_so_code_51", 1, global_so_code_51 },
    { "global_so_code_52", 1, global_so_code_52 },
    { "global_so_code_53", 2, global_so_code_53 },
    { "global_so_code_54", 1, global_so_code_54 },
    { "global_so_code_55", 2, global_so_code_55 },
    { "global_so_code_56", 1, global_so_code_56 },
    { "global_so_code_57", 4, global_so_code_57 },
    { "global_so_code_58", 3, global_so_code_58 },
    { "global_so_code_59", 2, global_so_code_59 },
    { "global_so_code_60", 2, global_so_code_60 },
    { "global_so_code_61", 3, global_so_code_61 },
    { "global_so_code_62", 10, global_so_code_62 },
    { "global_so_code_63", 1, global_so_code_63 },
    { "global_so_code_64", 2, global_so_code_64 },
    { "global_so_code_65", 23, global_so_code_65 },
    { "global_so_code_66", 6, global_so_code_66 },
    { "global_so_code_67", 1, global_so_code_67 },
    { "global_so_code_68", 2, global_so_code_68 },
    { "global_so_code_69", 3, global_so_code_69 },
    { "global_so_code_70", 1, global_so_code_70 },
    { "global_so_code_71", 3, global_so_code_71 },
    { "global_so_code_72", 3, global_so_code_72 },
    { "global_so_code_73", 1, global_so_code_73 },
    { "global_so_code_74", 2, global_so_code_74 },
    { "global_so_code_75", 2, global_so_code_75 },
    { "global_so_code_76", 2, global_so_code_76 },
    { "global_so_code_77", 2, global_so_code_77 },
    { "global_so_code_78", 7, global_so_code_78 },
    { "global_so_code_79", 7, global_so_code_79 },
    { "global_so_code_80", 2, global_so_code_80 },
    { "global_so_code_81", 3, global_so_code_81 },
    { "global_so_code_82", 3, global_so_code_82 },
    { "global_so_code_83", 2, global_so_code_83 },
    { "global_so_code_84", 13, global_so_code_84 },
    { "global_so_code_85", 4, global_so_code_85 },
    { "global_so_code_86", 21, global_so_code_86 },
    { "global_so_code_87", 1, global_so_code_87 },
    { "global_so_code_88", 11, global_so_code_88 },
    { "global_so_code_89", 1, global_so_code_89 },
    { "global_so_code_90", 2, global_so_code_90 },
    { "global_so_code_91", 1, global_so_code_91 },
    { "global_so_code_92", 11, global_so_code_92 },
    { "global_so_code_93", 11, global_so_code_93 },
    { "global_so_code_94", 4, global_so_code_94 },
    { "global_so_code_95", 5, global_so_code_95 },
    { "global_so_code_96", 2, global_so_code_96 },
    { "global_so_code_97", 2, global_so_code_97 },
    { "global_so_code_98", 3, global_so_code_98 },
    { "global_so_code_99", 2, global_so_code_99 },
    { "global_so_code_100", 2, global_so_code_100 },
    { "global_so_code_101", 1, global_so_code_101 },
    { "global_so_code_102", 2, global_so_code_102 },
    { "global_so_code_103", 2, global_so_code_103 },
    { "global_so_code_104", 5, global_so_code_104 },
    { "global_so_code_105", 5, global_so_code_105 },
    { "global_so_code_106", 2, global_so_code_106 }
  };

int
decl_global_so_2213cb99071bf562 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_global_so_2213cb99071bf562);
  return (0);
}

DECLARE_COMPILED_CODE ("global.so", 34, decl_global_so_2213cb99071bf562, global_so_2213cb99071bf562)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_global_so_data_2213cb99071bf562 [9604] =
  "\x9b\x01\x93\x01\xfe\x12\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc3\x22"
  "\x29\x21\x9d\x2b\xb9\x1d\xb0\x82\x88\x22\x29\x21\x9c\x2b\xba\x1d"
  "\xb0\x83\x88\xc1\xbb\x22\x29\x21\x9d\x2b\xbc\x1d\xb0\x84\x88\xc2"
  "\x22\x29\x21\x9d\x2b\xbd\x1d\xb0\x85\x88\xc0\x22\x29\x21\x9d\x2b"
  "\xbe\x1d\xb0\x86\x88\xc1\x22\x29\x21\x9d\x2b\xbf\x1d\xb0\x02\x88"
  "\xc1\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21"
  "\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\xc3\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c"
  "\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x1c\x07\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02"
  "\x88\xc2\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc3\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x22\x29"
  "\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\xc3\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc3\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc2\x22\x29\x21\x9d\x2b\x1c"
  "\x1d\xb0\x02\x88\xc3\x1d\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1b\xc2\x1c\x81\x0c\x06\x04\x02\x07\x04\x02\x1b\x02\x0c\x1b\x0d"
  "\x1c\x25\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21"
  "\x9c\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x22\x29"
  "\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x22\x29\x21\x9d\x2b\xbb\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x22\x29\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1d\x28"
  "\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x0c\x1b\x0d\x1c\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x02\x28\x0d\x1c\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x28\x0d\x1c\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x28\x0d\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\xc0\x1d\x0d"
  "\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\xc0\x1b\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc4\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc1\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc1\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x0d\x0d\x1c\x0d\x1c\x0d\x1c\x17\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x02\x1b\x02\x1b\x1b"
  "\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x02"
  "\x1b\x02\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x08\x8d\x1b\x24\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x02\x1b\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x02\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x08\x8d\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x82\x07\x1b"
  "\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc1\x1c\xc1\x1c\x1b\x02\x1d\x1b\xc1\x1c\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x08\x1b\x24\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc3\xc2\x1c\x08\x1b\x1b\x02\x1d\x1b\x1b\x1b\x28\x0d"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x1d\x0d\x0c\xc3\x0c\x1d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x28\x0d\x1c\x23"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x28"
  "\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x08\x1b"
  "\x1b\x1b\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x1b"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x28\x1b\x28\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x1c\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x07\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x24\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x24\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\xb8\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\xb0\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x17"
  "\x1b\x1b\x08\x0d\x1b\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x08\x88\x1b\x0d"
  "\x0d\x1b\x0d\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x0d\x0d\x1b"
  "\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x0c\x17\x0d\x1b\x02\x81\x0d\x1b\x0d\x1c\x0d\x1c"
  "\x0d\x1b\x9a\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x1b\x0d\x1c\x0d\x0d\x0d"
  "\x0d\x0d\x1b\x0d\x9f\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x9f\x1b\x0d\x0d\x1c\x0d\x0d\x0d\x0d\x0d\x1b"
  "\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\xb3\x2a\x1b\x2a\xc2\x1b\x2a\x1b\x2a\xc2\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a\xb5\x2a"
  "\xb4\x2a\xb2\x2a\xb1\x2a\x17\x28\x0d\x26\x1b\x1b\x1b\x1b\x1b\x24"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x67"
  "\x6c\x6f\x62\x61\x6c\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x10"
  "\x65\x72\x72\x6f\x72\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x23"
  "\x04\x85\x08\x03\x02\x24\x04\x82\x02\x03\x02\x17\x73\x65\x74\x2d"
  "\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x65\x6e\x61\x62\x6c\x65"
  "\x73\x21\x25\x04\x83\x04\x03\x02\x14\x77\x69\x74\x68\x2d\x69\x6e"
  "\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x26\x04\x84\x06"
  "\x03\x02\x19\x67\x65\x74\x2d\x66\x69\x78\x65\x64\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x73\x2d\x76\x65\x63\x74\x6f\x72\x27\x04\x82\x02\x03"
  "\x02\x16\x77\x69\x74\x68\x2d\x68\x69\x73\x74\x6f\x72\x79\x2d\x64"
  "\x69\x73\x61\x62\x6c\x65\x64\x28\x04\x83\x04\x03\x02\x08\x1a\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x2d\x61\x72\x69\x74\x79\x29\x04\x83\x04\x03\x09\x02\x09"
  "\x22\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69"
  "\x6f\x6e\x0a\x2a\x04\x83\x04\x03\x0b\x02\x0a\x12\x6c\x65\x78\x69"
  "\x63\x61\x6c\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2b\x04\x84"
  "\x06\x03\x0c\x02\x0b\x13\x6c\x65\x78\x69\x63\x61\x6c\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2c\x04\x85\x08\x03\x0d\x02\x0c"
  "\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x0e\x2d\x04\x85\x08\x03\x0f\x02\x0d\x14\x6c\x65\x78\x69\x63"
  "\x61\x6c\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x2e\x04"
  "\x84\x06\x03\x10\x02\x0e\x11\x6c\x65\x78\x69\x63\x61\x6c\x2d\x75"
  "\x6e\x62\x6f\x75\x6e\x64\x3f\x2f\x04\x84\x06\x03\x11\x02\x0f\x19"
  "\x6c\x65\x78\x69\x63\x61\x6c\x2d\x75\x6e\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x61\x62\x6c\x65\x3f\x30\x04\x84\x06\x03\x12\x02\x10"
  "\x31\x04\x83\x04\x03\x13\x02\x11\x0d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x64\x61\x74\x75\x6d\x14\x32\x04\x83\x04\x03\x15\x02\x12\x0d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x16\x33\x04\x84\x06"
  "\x03\x17\x02\x13\x10\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d"
  "\x74\x79\x70\x65\x18\x34\x04\x84\x06\x03\x19\x02\x14\x18\x6d\x61"
  "\x6b\x65\x2d\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x35\x04\x83\x04\x03\x1a\x02\x15\x36\x04\x84"
  "\x06\x03\x1b\x02\x16\x0a\x6d\x61\x6b\x65\x2d\x63\x65\x6c\x6c\x37"
  "\x04\x83\x04\x03\x1c\x02\x17\x06\x63\x65\x6c\x6c\x3f\x38\x04\x83"
  "\x04\x03\x1d\x02\x18\x0e\x63\x65\x6c\x6c\x2d\x63\x6f\x6e\x74\x65"
  "\x6e\x74\x73\x1e\x39\x04\x83\x04\x03\x1f\x02\x19\x13\x73\x65\x74"
  "\x2d\x63\x65\x6c\x6c\x2d\x63\x6f\x6e\x74\x65\x6e\x74\x73\x21\x20"
  "\x3a\x04\x84\x06\x03\x21\x02\x1a\x11\x73\x79\x73\x74\x65\x6d\x2d"
  "\x70\x61\x69\x72\x2d\x63\x6f\x6e\x73\x3b\x04\x85\x08\x03\x22\x02"
  "\x1b\x0d\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x3f\x3c\x04"
  "\x83\x04\x03\x23\x02\x1c\x3d\x04\x83\x04\x03\x24\x02\x1d\x15\x73"
  "\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x73\x65\x74\x2d\x63"
  "\x61\x72\x21\x3e\x04\x84\x06\x03\x25\x02\x1e\x3f\x04\x83\x04\x03"
  "\x26\x02\x1f\x15\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d"
  "\x73\x65\x74\x2d\x63\x64\x72\x21\x40\x04\x84\x06\x03\x27\x02\x20"
  "\x0b\x68\x75\x6e\x6b\x33\x2d\x63\x6f\x6e\x73\x28\x41\x04\x85\x08"
  "\x03\x29\x02\x21\x42\x04\x83\x04\x03\x2a\x02\x22\x17\x73\x79\x73"
  "\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x73\x65\x74\x2d\x63\x78"
  "\x72\x30\x21\x43\x04\x84\x06\x03\x2b\x02\x23\x44\x04\x83\x04\x03"
  "\x2c\x02\x24\x17\x73\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33"
  "\x2d\x73\x65\x74\x2d\x63\x78\x72\x31\x21\x45\x04\x84\x06\x03\x2d"
  "\x02\x25\x46\x04\x83\x04\x03\x2e\x02\x26\x17\x73\x79\x73\x74\x65"
  "\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x73\x65\x74\x2d\x63\x78\x72\x32"
  "\x21\x47\x04\x84\x06\x03\x2f\x02\x27\x16\x73\x79\x73\x74\x65\x6d"
  "\x2d\x6c\x69\x73\x74\x2d\x74\x6f\x2d\x76\x65\x63\x74\x6f\x72\x48"
  "\x04\x84\x06\x03\x30\x02\x28\x19\x73\x79\x73\x74\x65\x6d\x2d\x73"
  "\x75\x62\x76\x65\x63\x74\x6f\x72\x2d\x74\x6f\x2d\x6c\x69\x73\x74"
  "\x49\x04\x85\x08\x03\x31\x02\x29\x0f\x73\x79\x73\x74\x65\x6d\x2d"
  "\x76\x65\x63\x74\x6f\x72\x3f\x4a\x04\x83\x04\x03\x32\x02\x2a\x4b"
  "\x04\x83\x04\x03\x33\x02\x2b\x12\x73\x79\x73\x74\x65\x6d\x2d\x76"
  "\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x4c\x04\x84\x06\x03\x34\x02"
  "\x2c\x13\x73\x79\x73\x74\x65\x6d\x2d\x76\x65\x63\x74\x6f\x72\x2d"
  "\x73\x65\x74\x21\x4d\x04\x85\x08\x03\x35\x02\x2d\x15\x70\x72\x69"
  "\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x72\x65"
  "\x66\x4e\x04\x84\x06\x03\x36\x02\x2e\x16\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x21\x02"
  "\x4f\x04\x85\x08\x03\x37\x02\x2f\x17\x68\x6f\x73\x74\x2d\x62\x69"
  "\x67\x2d\x65\x6e\x64\x69\x61\x6e\x3f\x2d\x73\x61\x76\x65\x64\x38"
  "\x02\x51\x06\x81\x81\x02\x50\x04\x82\x02\x05\x0a\x39\x02\x30\x0a"
  "\x65\x70\x68\x65\x6d\x65\x72\x6f\x6e\x14\x0b\x76\x65\x63\x74\x6f"
  "\x72\x2d\x72\x65\x66\x3a\x28\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f"
  "\x20\x64\x65\x74\x65\x72\x6d\x69\x6e\x65\x20\x65\x6e\x64\x69\x61"
  "\x6e\x6e\x65\x73\x73\x20\x6f\x66\x20\x68\x6f\x73\x74\x2e\x0e\x34"
  "\x30\x33\x30\x30\x30\x30\x30\x32\x30\x31\x30\x30\x81\x82\x08\x0e"
  "\x31\x30\x32\x30\x30\x30\x30\x30\x33\x30\x34\x30\x30\x81\x84\x04"
  "\x18\x0b\x09\x00\x01\x02\x00\x00\x03\x04\x00\x38\x0f\x65\x70\x68"
  "\x65\x6d\x65\x72\x6f\x6e\x2d\x74\x79\x70\x65\x3b\x03\x0e\x63\x6c"
  "\x65\x61\x6e\x2d\x6f\x62\x61\x72\x72\x61\x79\x3c\x0b\x75\x6e\x73"
  "\x70\x65\x63\x69\x66\x69\x63\x3d\x03\x03\x06\x65\x72\x72\x6f\x72"
  "\x3e\x03\x19\x61\x64\x64\x2d\x73\x65\x63\x6f\x6e\x64\x61\x72\x79"
  "\x2d\x67\x63\x2d\x64\x61\x65\x6d\x6f\x6e\x21\x03\x0f\x6d\x69\x63"
  "\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70\x65\x04\x5c\x18\x81\x81"
  "\x02\x5b\x16\x81\x81\x02\x5a\x14\x81\x81\x02\x59\x12\x81\x81\x02"
  "\x58\x10\x81\x85\x02\x57\x0e\x81\x85\x02\x56\x0c\x81\x83\x02\x55"
  "\x0a\x81\x81\x02\x54\x08\x81\x81\x02\x53\x06\x81\x83\x02\x52\x04"
  "\x82\x02\x17\x35\x3f\x02\x31\x5d\x04\x83\x04\x03\x40\x02\x32\x5f"
  "\x06\x81\x85\x02\x5e\x04\x83\x04\x05\x41\x02\x33\x60\x04\xff\x03"
  "\x03\x42\x02\x34\x61\x04\xff\x03\x03\x43\x02\x35\x62\x04\xff\x03"
  "\x03\x44\x02\x36\x04\x07\x73\x79\x6e\x74\x61\x78\x04\x14\x65\x78"
  "\x74\x65\x6e\x64\x65\x64\x2d\x73\x63\x6f\x64\x65\x2d\x65\x76\x61"
  "\x6c\x03\x64\x06\x81\x85\x02\x63\x04\x84\x06\x05\x0d\x45\x02\x37"
  "\x04\x10\x68\x6f\x6f\x6b\x2f\x73\x63\x6f\x64\x65\x2d\x65\x76\x61"
  "\x6c\x46\x02\x65\x04\x84\x06\x03\x47\x02\x38\x18\x28\x67\x06\x81"
  "\x89\x02\x66\x04\x86\x0a\x05\x0a\x28\x02\x39\x68\x04\x83\x04\x03"
  "\x02\x3a\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69"
  "\x64\x2d\x62\x69\x6e\x64\x48\x02\x6c\x0a\x81\x85\x02\x6b\x08\x81"
  "\x83\x02\x6a\x06\x81\x8b\x02\x69\x04\x84\x06\x09\x0f\x49\x02\x3b"
  "\x20\x1e\x05\x48\x02\x6f\x08\x81\x85\x02\x6e\x06\x81\x83\x02\x6d"
  "\x04\x85\x08\x07\x0f\x48\x02\x3c\x04\x06\x61\x70\x70\x6c\x79\x20"
  "\x02\x71\x06\x81\x85\x02\x70\x04\xff\x03\x05\x0b\x1e\x02\x3d\x73"
  "\x06\x81\x85\x02\x72\x04\x84\x06\x05\x4a\x02\x3e\x08\x03\x16\x77"
  "\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x73\x74"
  "\x72\x69\x6e\x67\x04\x20\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75"
  "\x74\x2d\x74\x6f\x2d\x74\x72\x75\x6e\x63\x61\x74\x65\x64\x2d\x73"
  "\x74\x72\x69\x6e\x67\x03\x06\x77\x72\x69\x74\x65\x4b\x04\x76\x08"
  "\x81\x83\x02\x75\x06\x81\x83\x02\x74\x04\x84\x04\x07\x12\x4c\x02"
  "\x3f\x02\x2e\x28\x4e\x6f\x20\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61"
  "\x74\x69\x6f\x6e\x20\x6f\x72\x20\x64\x65\x62\x75\x67\x67\x69\x6e"
  "\x67\x20\x69\x6e\x66\x6f\x20\x66\x6f\x72\x20\x0a\x03\x70\x61\x0a"
  "\x04\x14\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x03\x11\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x6c\x61\x6d\x62\x64\x61\x03\x15\x70\x72\x69\x6d\x69\x74\x69"
  "\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x03\x15\x75"
  "\x6e\x73\x79\x6e\x74\x61\x78\x2d\x6c\x61\x6d\x62\x64\x61\x2d\x6c"
  "\x69\x73\x74\x03\x03\x70\x70\x03\x08\x64\x69\x73\x70\x6c\x61\x79"
  "\x02\x08\x6e\x65\x77\x6c\x69\x6e\x65\x08\x80\x01\x16\x81\x85\x02"
  "\x7f\x14\x81\x85\x02\x7e\x12\x81\x85\x02\x7d\x10\x81\x83\x02\x7c"
  "\x0e\x81\x85\x02\x7b\x0c\x81\x87\x02\x7a\x0a\x81\x83\x02\x79\x08"
  "\x81\x83\x02\x78\x06\x81\x83\x02\x77\x04\x83\x04\x15\x2b\x4d\x02"
  "\x40\x02\x1b\x77\x6f\x72\x6b\x69\x6e\x67\x2d\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x02\x81\x01"
  "\x04\x82\x02\x03\x4e\x02\x41\x08\x02\x16\x75\x73\x65\x72\x2d\x68"
  "\x6f\x6d\x65\x64\x69\x72\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x03"
  "\x20\x73\x65\x74\x2d\x77\x6f\x72\x6b\x69\x6e\x67\x2d\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x21"
  "\x03\x83\x01\x06\x83\x02\x82\x01\x04\x81\x83\x02\x05\x0e\x4f\x02"
  "\x42\x12\x20\x47\x43\x29\x3b\x20\x72\x65\x61\x6c\x20\x74\x69\x6d"
  "\x65\x3a\x20\x08\x20\x52\x55\x4e\x20\x2b\x20\x03\x20\x28\x0f\x70"
  "\x72\x6f\x63\x65\x73\x73\x20\x74\x69\x6d\x65\x3a\x20\xe9\x07\x02"
  "\x10\x72\x65\x61\x6c\x2d\x74\x69\x6d\x65\x2d\x63\x6c\x6f\x63\x6b"
  "\x50\x02\x08\x72\x75\x6e\x74\x69\x6d\x65\x02\x13\x70\x72\x6f\x63"
  "\x65\x73\x73\x2d\x74\x69\x6d\x65\x2d\x63\x6c\x6f\x63\x6b\x03\x0d"
  "\x72\x6f\x75\x6e\x64\x2d\x3e\x65\x78\x61\x63\x74\x03\x18\x77\x72"
  "\x69\x74\x65\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x6c\x69\x6e\x65\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x51\x04\x4b\x08\x9a\x01\x30\x81\x85\x02\x99\x01\x2e"
  "\x81\x85\x02\x98\x01\x2c\x81\x85\x02\x97\x01\x2a\x81\x89\x02\x96"
  "\x01\x28\x81\x85\x02\x95\x01\x26\x81\x85\x02\x94\x01\x24\x81\x85"
  "\x02\x93\x01\x22\x81\x85\x02\x92\x01\x20\x81\x85\x02\x91\x01\x1e"
  "\x81\x85\x02\x90\x01\x1c\x81\x89\x02\x8f\x01\x1a\x81\x8b\x02\x8e"
  "\x01\x18\x81\x8b\x02\x8d\x01\x16\x81\x87\x02\x8c\x01\x14\x81\x85"
  "\x02\x8b\x01\x12\x81\x83\x02\x8a\x01\x10\x81\x8d\x02\x89\x01\x0e"
  "\x81\x8b\x02\x88\x01\x0c\x81\x89\x02\x87\x01\x0a\x81\x87\x02\x86"
  "\x01\x08\x81\x85\x02\x85\x01\x06\x81\x83\x02\x84\x01\x04\x83\x04"
  "\x2f\x46\x52\x02\x43\x02\x02\x50\x02\xa0\x01\x0e\x81\x83\x02\x9f"
  "\x01\x0c\x81\x83\x02\x9e\x01\x0a\x81\x83\x02\x9d\x01\x08\x81\x83"
  "\x02\x9c\x01\x06\x81\x83\x02\x9b\x01\x04\x83\x04\x0d\x14\x50\x02"
  "\x44\x08\x03\x0a\x68\x6f\x6f\x6b\x2f\x65\x78\x69\x74\x53\x02\xa1"
  "\x01\x04\x83\x02\x03\x0b\x54\x02\x45\x02\x0c\x4b\x69\x6c\x6c\x20"
  "\x53\x63\x68\x65\x6d\x65\x03\x18\x70\x72\x6f\x6d\x70\x74\x2d\x66"
  "\x6f\x72\x2d\x63\x6f\x6e\x66\x69\x72\x6d\x61\x74\x69\x6f\x6e\x03"
  "\x06\x25\x65\x78\x69\x74\x55\x03\xa3\x01\x06\x81\x83\x02\xa2\x01"
  "\x04\x83\x04\x05\x0f\x56\x02\x46\x10\x65\x78\x69\x74\x2d\x77\x69"
  "\x74\x68\x2d\x76\x61\x6c\x75\x65\x05\x65\x78\x69\x74\x08\x12\x65"
  "\x76\x65\x6e\x74\x3a\x62\x65\x66\x6f\x72\x65\x2d\x65\x78\x69\x74"
  "\x02\x03\x1a\x65\x76\x65\x6e\x74\x2d\x64\x69\x73\x74\x72\x69\x62"
  "\x75\x74\x6f\x72\x2f\x69\x6e\x76\x6f\x6b\x65\x21\x02\xa6\x01\x08"
  "\x81\x83\x02\xa5\x01\x06\x81\x85\x02\xa4\x01\x04\x83\x02\x07\x12"
  "\x57\x02\x47\x02\x0a\x68\x6f\x6f\x6b\x2f\x71\x75\x69\x74\x58\x02"
  "\xa7\x01\x04\x82\x02\x03\x59\x02\x48\x05\x68\x61\x6c\x74\x3d\x02"
  "\x03\x1e\x77\x69\x74\x68\x2d\x61\x62\x73\x6f\x6c\x75\x74\x65\x6c"
  "\x79\x2d\x6e\x6f\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x02"
  "\xaa\x01\x08\x81\x81\x02\xa9\x01\x06\x81\x81\x02\xa8\x01\x04\x82"
  "\x02\x07\x10\x5a\x02\x49\x0f\x6c\x69\x6e\x6b\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x73\x03\x0e\x2d\x3e\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x5b\x02\xad\x01\x08\x81\x89\x02\xac\x01\x06\x81"
  "\x89\x02\xab\x01\x04\x86\x0a\x07\x0e\x5c\x02\x4a\x06\x0f\x6c\x69"
  "\x6e\x6b\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x5d\x02\xae\x01"
  "\x04\x85\x08\x03\x5e\x02\x4b\x10\x75\x6e\x62\x69\x6e\x64\x2d\x76"
  "\x61\x72\x69\x61\x62\x6c\x65\x03\x5b\x02\xb0\x01\x06\x81\x85\x02"
  "\xaf\x01\x04\x84\x06\x05\x0c\x5b\x02\x4c\x0f\x6f\x62\x6a\x65\x63"
  "\x74\x2d\x67\x63\x2d\x74\x79\x70\x65\x03\x10\x25\x65\x6e\x63\x6f"
  "\x64\x65\x2d\x67\x63\x2d\x74\x79\x70\x65\x5f\x02\xb2\x01\x06\x81"
  "\x83\x02\xb1\x01\x04\x83\x04\x05\x0c\x60\x02\x4d\x0e\x74\x79\x70"
  "\x65\x2d\x3e\x67\x63\x2d\x74\x79\x70\x65\x03\x5f\x02\xb4\x01\x06"
  "\x81\x83\x02\xb3\x01\x04\x83\x04\x05\x0c\x61\x02\x4e\x17\x49\x6c"
  "\x6c\x65\x67\x61\x6c\x20\x47\x43\x2d\x74\x79\x70\x65\x20\x76\x61"
  "\x6c\x75\x65\x3a\x3a\x0a\x71\x75\x61\x64\x72\x75\x70\x6c\x65\x62"
  "\x07\x74\x72\x69\x70\x6c\x65\x63\x05\x70\x61\x69\x72\x64\x05\x63"
  "\x65\x6c\x6c\x65\x0c\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72"
  "\x66\x0a\x75\x6e\x64\x65\x66\x69\x6e\x65\x64\x0c\x67\x63\x2d\x69"
  "\x6e\x74\x65\x72\x6e\x61\x6c\x67\x07\x76\x65\x63\x74\x6f\x72\x68"
  "\x0f\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x6e\x74\x72\x79\x69"
  "\x0a\x04\x3e\x02\xb6\x01\x06\x83\x04\xb5\x01\x04\x81\x83\x02\x05"
  "\x0e\x6a\x02\x4f\x14\x33\x16\x28\x67\x66\x13\x74\x72\x61\x70\x2d"
  "\x6d\x61\x78\x2d\x69\x6d\x6d\x65\x64\x69\x61\x74\x65\x6b\x02\x03"
  "\x0f\x6f\x62\x6a\x65\x63\x74\x2d\x67\x63\x2d\x74\x79\x70\x65\x6c"
  "\x02\xbd\x01\x10\x81\x85\x02\xbc\x01\x0e\x81\x87\x02\xbb\x01\x0c"
  "\x81\x85\x02\xba\x01\x0a\x81\x85\x02\xb9\x01\x08\x81\x85\x02\xb8"
  "\x01\x06\x81\x83\x02\xb7\x01\x04\x83\x04\x0f\x1e\x6d\x02\x50\x14"
  "\x33\x16\x23\x67\x65\x64\x63\x62\x68\x69\x6b\x02\x03\x6c\x04\x05"
  "\x6d\x65\x6d\x71\x6b\x03\xc4\x01\x10\x81\x85\x02\xc3\x01\x0e\x81"
  "\x85\x02\xc2\x01\x0c\x81\x85\x02\xc1\x01\x0a\x81\x85\x02\xc0\x01"
  "\x08\x81\x85\x02\xbf\x01\x06\x81\x83\x02\xbe\x01\x04\x83\x04\x0f"
  "\x20\x14\x02\x51\x28\x67\x66\x03\x13\x74\x79\x70\x65\x2d\x63\x6f"
  "\x64\x65\x2d\x3e\x67\x63\x2d\x74\x79\x70\x65\x66\x02\xc6\x01\x06"
  "\x81\x83\x02\xc5\x01\x04\x83\x04\x05\x0f\x6e\x02\x52\x23\x67\x65"
  "\x64\x63\x62\x68\x69\x03\x66\x04\x6b\x03\xc9\x01\x08\x81\x85\x02"
  "\xc8\x01\x06\x81\x83\x02\xc7\x01\x04\x83\x04\x07\x13\x6b\x02\x53"
  "\x18\x09\x3d\x02\xcc\x01\x08\x81\x83\x02\xcb\x01\x06\x81\x83\x02"
  "\xca\x01\x04\x83\x04\x07\x10\x69\x02\x54\x08\x6f\x62\x61\x72\x72"
  "\x61\x79\x68\x03\x13\x66\x69\x78\x65\x64\x2d\x6f\x62\x6a\x65\x63"
  "\x74\x73\x2d\x69\x74\x65\x6d\x67\x04\x1b\x66\x6f\x72\x2d\x65\x61"
  "\x63\x68\x2d\x73\x79\x6d\x62\x6f\x6c\x2d\x69\x6e\x2d\x6f\x62\x61"
  "\x72\x72\x61\x79\x65\x03\xce\x01\x06\x81\x83\x02\xcd\x01\x04\x83"
  "\x04\x05\x0e\x64\x02\x55\x04\x63\x64\x72\x63\x04\x63\x61\x72\x62"
  "\x16\x38\x02\x3a\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x6f\x03\x09\x77\x65\x61\x6b\x2d\x63\x61\x72\x03\x09\x77"
  "\x65\x61\x6b\x2d\x63\x64\x72\x70\x03\x0f\x77\x65\x61\x6b\x2d\x70"
  "\x61\x69\x72\x2f\x63\x61\x72\x3f\x71\x04\xdb\x01\x1c\x81\x89\x02"
  "\xda\x01\x1a\x81\x8b\x02\xd9\x01\x18\x81\x89\x02\xd8\x01\x16\x81"
  "\x83\x02\xd7\x01\x14\x81\x89\x02\xd6\x01\x12\x81\x89\x02\xd5\x01"
  "\x10\x81\x8b\x02\xd4\x01\x0e\x81\x89\x02\xd3\x01\x0c\x81\x89\x02"
  "\xd2\x01\x0a\x81\x87\x02\xd1\x01\x08\x81\x87\x02\xd0\x01\x06\x81"
  "\x85\x02\xcf\x01\x04\x84\x06\x1b\x2c\x72\x02\x56\x08\x3d\x02\x03"
  "\x19\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d\x69\x6e\x74\x65\x72\x6e"
  "\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x04\x65\x03\xdf\x01\x0a"
  "\x81\x85\x02\xde\x01\x08\x81\x85\x02\xdd\x01\x06\x81\x87\x02\xdc"
  "\x01\x04\x83\x02\x09\x15\x74\x02\x57\x0c\x76\x65\x63\x74\x6f\x72"
  "\x2d\x73\x65\x74\x21\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x75\x63"
  "\x16\x38\x02\x3a\x6f\x68\x03\x13\x77\x69\x74\x68\x6f\x75\x74\x2d"
  "\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x03\x67\x03\x70\x03\x71"
  "\x04\x0e\x77\x65\x61\x6b\x2d\x73\x65\x74\x2d\x63\x64\x72\x21\x06"
  "\xf4\x01\x2c\x81\x87\x02\xf3\x01\x2a\x81\x87\x02\xf2\x01\x28\x81"
  "\x85\x02\xf1\x01\x26\x81\x85\x02\xf0\x01\x24\x81\x85\x02\xef\x01"
  "\x22\x81\x87\x02\xee\x01\x20\x81\x87\x02\xed\x01\x1e\x81\x85\x02"
  "\xec\x01\x1c\x81\x85\x02\xeb\x01\x1a\x81\x87\x02\xea\x01\x18\x81"
  "\x85\x02\xe9\x01\x16\x81\x85\x02\xe8\x01\x14\x81\x85\x02\xe7\x01"
  "\x12\x81\x85\x02\xe6\x01\x10\x81\x85\x02\xe5\x01\x0e\x81\x89\x02"
  "\xe4\x01\x0c\x81\x85\x02\xe3\x01\x0a\x81\x83\x02\xe2\x01\x08\x81"
  "\x81\x02\xe1\x01\x06\x82\x02\xe0\x01\x04\x82\x02\x2b\x43\x71\x02"
  "\x58\xf5\x01\x04\x83\x04\x03\x70\x02\x59\x2b\x46\x41\x53\x44\x55"
  "\x4d\x50\x3a\x20\x4f\x62\x6a\x65\x63\x74\x20\x69\x73\x20\x74\x6f"
  "\x6f\x20\x6c\x61\x72\x67\x65\x20\x74\x6f\x20\x62\x65\x20\x64\x75"
  "\x6d\x70\x65\x64\x3a\x02\x06\x72\x65\x74\x72\x79\x0b\x54\x72\x79"
  "\x20\x61\x67\x61\x69\x6e\x2e\x12\x70\x72\x69\x6d\x69\x74\x69\x76"
  "\x65\x2d\x66\x61\x73\x64\x75\x6d\x70\x09\x44\x75\x6d\x70\x69\x6e"
  "\x67\x20\x08\x03\x10\x6d\x65\x72\x67\x65\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x73\x04\x12\x77\x69\x74\x68\x2d\x6e\x6f\x74\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73"
  "\x74\x72\x69\x6e\x67\x04\x51\x03\x12\x65\x6e\x6f\x75\x67\x68\x2d"
  "\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x05\x14\x77\x69\x74\x68"
  "\x2d\x73\x69\x6d\x70\x6c\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x04"
  "\x4b\x04\x3e\x09\x80\x02\x18\x81\x83\x02\xff\x01\x16\x81\x83\x02"
  "\xfe\x01\x14\x81\x85\x02\xfd\x01\x12\x81\x83\x02\xfc\x01\x10\x81"
  "\x85\x02\xfb\x01\x0e\x81\x83\x02\xfa\x01\x0c\x81\x85\x02\xf9\x01"
  "\x0a\x81\x83\x02\xf8\x01\x08\x81\x8f\x02\xf7\x01\x06\x81\x8d\x02"
  "\xf6\x01\x04\x86\x06\x17\x32\x6f\x02\x5a\x03\x10\x25\x6d\x61\x6b"
  "\x65\x2d\x68\x6f\x6f\x6b\x2d\x6c\x69\x73\x74\x68\x02\x81\x02\x04"
  "\x82\x02\x03\x0a\x67\x02\x5b\x02\x03\x0b\x68\x6f\x6f\x6b\x2d\x6c"
  "\x69\x73\x74\x3f\x51\x04\x14\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74"
  "\x2d\x68\x6f\x6f\x6b\x2d\x6c\x69\x73\x74\x4b\x03\x83\x02\x06\x81"
  "\x85\x02\x82\x02\x04\x84\x06\x05\x0e\x3e\x02\x5c\x0a\x68\x6f\x6f"
  "\x6b\x20\x6c\x69\x73\x74\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72"
  "\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e"
  "\x74\x3a\x02\x84\x02\x04\x84\x06\x03\x0a\x76\x02\x5d\x02\x75\x63"
  "\x62\x14\x61\x70\x70\x65\x6e\x64\x2d\x68\x6f\x6f\x6b\x2d\x74\x6f"
  "\x2d\x6c\x69\x73\x74\x77\x04\x14\x67\x75\x61\x72\x61\x6e\x74\x65"
  "\x65\x2d\x68\x6f\x6f\x6b\x2d\x6c\x69\x73\x74\x78\x03\x10\x68\x6f"
  "\x6f\x6b\x2d\x6c\x69\x73\x74\x2d\x68\x6f\x6f\x6b\x73\x79\x04\x15"
  "\x73\x65\x74\x2d\x68\x6f\x6f\x6b\x2d\x6c\x69\x73\x74\x2d\x68\x6f"
  "\x6f\x6b\x73\x21\x7a\x04\x8f\x02\x18\x81\x8b\x02\x8e\x02\x16\x81"
  "\x8b\x02\x8d\x02\x14\x81\x8b\x02\x8c\x02\x12\x81\x8d\x02\x8b\x02"
  "\x10\x81\x8b\x02\x8a\x02\x0e\x81\x8b\x02\x89\x02\x0c\x81\x8b\x02"
  "\x88\x02\x0a\x81\x8b\x02\x87\x02\x08\x81\x89\x02\x86\x02\x06\x81"
  "\x87\x02\x85\x02\x04\x85\x08\x17\x27\x7b\x02\x5e\x02\x75\x63\x62"
  "\x16\x72\x65\x6d\x6f\x76\x65\x2d\x68\x6f\x6f\x6b\x2d\x66\x72\x6f"
  "\x6d\x2d\x6c\x69\x73\x74\x75\x04\x78\x03\x79\x04\x7a\x04\x9a\x02"
  "\x18\x81\x89\x02\x99\x02\x16\x81\x89\x02\x98\x02\x14\x81\x89\x02"
  "\x97\x02\x12\x81\x8b\x02\x96\x02\x10\x81\x89\x02\x95\x02\x0e\x81"
  "\x89\x02\x94\x02\x0c\x81\x89\x02\x93\x02\x0a\x81\x89\x02\x92\x02"
  "\x08\x81\x87\x02\x91\x02\x06\x81\x85\x02\x90\x02\x04\x84\x06\x17"
  "\x26\x62\x02\x5f\x0e\x68\x6f\x6f\x6b\x2d\x69\x6e\x2d\x6c\x69\x73"
  "\x74\x3f\x7c\x04\x78\x03\x79\x04\x05\x61\x73\x73\x71\x04\x9e\x02"
  "\x0a\x81\x87\x02\x9d\x02\x08\x81\x85\x02\x9c\x02\x06\x81\x85\x02"
  "\x9b\x02\x04\x84\x06\x09\x15\x7d\x02\x60\x63\x12\x72\x75\x6e\x2d"
  "\x68\x6f\x6f\x6b\x73\x2d\x69\x6e\x2d\x6c\x69\x73\x74\x63\x04\x78"
  "\x03\x79\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x04\x20\x05\xa3"
  "\x02\x0c\x81\x87\x02\xa2\x02\x0a\x81\x85\x02\xa1\x02\x08\x81\x85"
  "\x02\xa0\x02\x06\x81\x85\x02\x9f\x02\x04\xfe\x05\x0b\x19\x7e\x02"
  "\x61\x10\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x2d\x66\x61\x6c\x73"
  "\x65\x7f\x02\xa5\x02\x06\x81\x83\x02\xa4\x02\x04\x83\x04\x05\x0a"
  "\x80\x01\x02\x62\x7f\x02\xa7\x02\x06\x81\x83\x02\xa6\x02\x04\x83"
  "\x04\x05\x0a\x81\x01\x02\x63\x0f\x6d\x61\x6b\x65\x2d\x65\x70\x68"
  "\x65\x6d\x65\x72\x6f\x6e\x03\x0d\x63\x61\x6e\x6f\x6e\x69\x63\x61"
  "\x6c\x69\x7a\x65\x82\x01\x02\xaa\x02\x08\x81\x85\x02\xa9\x02\x06"
  "\x81\x85\x02\xa8\x02\x04\x84\x06\x07\x0e\x83\x01\x02\x64\x16\x3b"
  "\x02\xac\x02\x06\x81\x83\x02\xab\x02\x04\x83\x04\x05\x0c\x16\x02"
  "\x65\x02\x03\x0b\x65\x70\x68\x65\x6d\x65\x72\x6f\x6e\x3f\x84\x01"
  "\x04\x14\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x65\x70\x68\x65"
  "\x6d\x65\x72\x6f\x6e\x85\x01\x03\xae\x02\x06\x81\x85\x02\xad\x02"
  "\x04\x84\x04\x05\x0e\x86\x01\x02\x66\x08\x0a\x65\x70\x68\x65\x6d"
  "\x65\x72\x6f\x6e\x05\x3a\x02\xaf\x02\x04\x84\x04\x03\x0c\x3a\x02"
  "\x67\x0e\x65\x70\x68\x65\x6d\x65\x72\x6f\x6e\x2d\x6b\x65\x79\x87"
  "\x01\x04\x14\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x65\x70\x68"
  "\x65\x6d\x65\x72\x6f\x6e\x88\x01\x03\x0f\x64\x65\x63\x61\x6e\x6f"
  "\x6e\x69\x63\x61\x6c\x69\x7a\x65\x89\x01\x03\xb1\x02\x06\x81\x83"
  "\x02\xb0\x02\x04\x83\x04\x05\x0e\x8a\x01\x02\x68\x10\x65\x70\x68"
  "\x65\x6d\x65\x72\x6f\x6e\x2d\x64\x61\x74\x75\x6d\x8b\x01\x04\x88"
  "\x01\x03\x89\x01\x03\xb3\x02\x06\x81\x83\x02\xb2\x02\x04\x83\x04"
  "\x05\x0e\x8c\x01\x02\x69\x13\x73\x65\x74\x2d\x65\x70\x68\x65\x6d"
  "\x65\x72\x6f\x6e\x2d\x6b\x65\x79\x21\x8d\x01\x3d\x02\x04\x88\x01"
  "\x03\x12\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x62\x61\x72\x72"
  "\x69\x65\x72\x8e\x01\x03\x82\x01\x04\xb8\x02\x0c\x81\x85\x02\xb7"
  "\x02\x0a\x81\x85\x02\xb6\x02\x08\x81\x85\x02\xb5\x02\x06\x81\x83"
  "\x02\xb4\x02\x04\x84\x06\x0b\x18\x8f\x01\x02\x6a\x15\x73\x65\x74"
  "\x2d\x65\x70\x68\x65\x6d\x65\x72\x6f\x6e\x2d\x64\x61\x74\x75\x6d"
  "\x21\x90\x01\x3d\x02\x04\x88\x01\x03\x8e\x01\x03\x82\x01\x04\xbd"
  "\x02\x0c\x81\x85\x02\xbc\x02\x0a\x81\x85\x02\xbb\x02\x08\x81\x85"
  "\x02\xba\x02\x06\x81\x83\x02\xb9\x02\x04\x84\x06\x0b\x18\x8e\x01"
  "\x02\x6b\x12\x65\x70\x68\x65\x6d\x65\x72\x6f\x6e\x2d\x62\x72\x6f"
  "\x6b\x65\x6e\x3f\x04\x88\x01\x02\xbf\x02\x06\x81\x83\x02\xbe\x02"
  "\x04\x83\x04\x05\x0d\x91\x01\x6b\x92\x01\x92\x01\x91\x01\x04\x8e"
  "\x01\x04\x8f\x01\x04\x8c\x01\x04\x8a\x01\x04\x3a\x04\x86\x01\x04"
  "\x16\x04\x83\x01\x04\x81\x01\x04\x80\x01\x04\x7e\x04\x7d\x04\x62"
  "\x04\x7b\x04\x76\x04\x3e\x04\x67\x04\x13\x90\x01\x8d\x01\x8b\x01"
  "\x87\x01\x85\x01\x88\x01\x84\x01\x0f\x6d\x61\x6b\x65\x2d\x65\x70"
  "\x68\x65\x6d\x65\x72\x6f\x6e\x89\x01\x82\x01\x63\x7c\x75\x77\x4b"
  "\x78\x0f\x6d\x61\x6b\x65\x2d\x68\x6f\x6f\x6b\x2d\x6c\x69\x73\x74"
  "\x13\x7a\x7f\x06\x66\x61\x6c\x73\x65\x79\x51\x06\x68\x6f\x6f\x6b"
  "\x73\x92\x01\x68\x0c\x3c\x68\x6f\x6f\x6b\x2d\x6c\x69\x73\x74\x3e"
  "\x91\x01\x92\x01\x3d\x08\x66\x61\x73\x64\x75\x6d\x70\x09\x69\x6d"
  "\x70\x75\x72\x69\x66\x79\x3c\x0e\x6f\x62\x61\x72\x72\x61\x79\x2d"
  "\x3e\x6c\x69\x73\x74\x65\x73\x11\x75\x6e\x64\x65\x66\x69\x6e\x65"
  "\x64\x2d\x76\x61\x6c\x75\x65\x3f\x13\x70\x6f\x69\x6e\x74\x65\x72"
  "\x2d\x74\x79\x70\x65\x2d\x63\x6f\x64\x65\x3f\x17\x6e\x6f\x6e\x2d"
  "\x70\x6f\x69\x6e\x74\x65\x72\x2d\x74\x79\x70\x65\x2d\x63\x6f\x64"
  "\x65\x3f\x10\x6f\x62\x6a\x65\x63\x74\x2d\x70\x6f\x69\x6e\x74\x65"
  "\x72\x3f\x14\x6f\x62\x6a\x65\x63\x74\x2d\x6e\x6f\x6e\x2d\x70\x6f"
  "\x69\x6e\x74\x65\x72\x3f\x5f\x66\x6c\x10\x75\x6e\x62\x69\x6e\x64"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x16\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x2d\x6c\x69\x6e\x6b\x2d\x6e\x61\x6d\x65\x5d"
  "\x14\x75\x73\x65\x72\x2d\x69\x6e\x69\x74\x69\x61\x6c\x2d\x70\x72"
  "\x6f\x6d\x70\x74\x13\x6f\x04\x70\x04\x71\x04\x74\x04\x72\x04\x64"
  "\x04\x69\x04\x6b\x04\x6e\x04\x14\x04\x6d\x04\x6a\x06\x61\x04\x60"
  "\x04\x5b\x04\x5e\x04\x5c\x04\x04\x5d\x3d\x3e\x13\x19\x75\x73\x65"
  "\x72\x2d\x69\x6e\x69\x74\x69\x61\x6c\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x18\x09\x15\x23\x5b\x75\x6e\x6e\x61\x6d\x65"
  "\x64\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x5d\x58\x0d\x64\x65"
  "\x66\x61\x75\x6c\x74\x2f\x71\x75\x69\x74\x92\x01\x06\x25\x71\x75"
  "\x69\x74\x90\x01\x05\x71\x75\x69\x74\x55\x5a\x04\x59\x04\x57\x04"
  "\x53\x0d\x64\x65\x66\x61\x75\x6c\x74\x2f\x65\x78\x69\x74\x8f\x01"
  "\x05\x65\x78\x69\x74\x0e\x77\x61\x69\x74\x2d\x69\x6e\x74\x65\x72"
  "\x76\x61\x6c\x0a\x73\x68\x6f\x77\x2d\x74\x69\x6d\x65\x03\x63\x64"
  "\x04\x70\x77\x64\x0a\x10\x77\x72\x69\x74\x65\x2d\x74\x6f\x2d\x73"
  "\x74\x72\x69\x6e\x67\x56\x04\x54\x04\x50\x04\x52\x04\x4f\x06\x4e"
  "\x04\x4d\x04\x4c\x04\x0e\x0c\x77\x69\x74\x68\x2d\x76\x61\x6c\x75"
  "\x65\x73\x11\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x76\x61\x6c"
  "\x75\x65\x73\x8e\x01\x07\x76\x61\x6c\x75\x65\x73\x14\x62\x69\x6e"
  "\x64\x2d\x63\x65\x6c\x6c\x2d\x63\x6f\x6e\x74\x65\x6e\x74\x73\x21"
  "\x18\x6f\x62\x6a\x65\x63\x74\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e"
  "\x74\x2d\x62\x69\x6e\x64\x65\x72\x12\x6c\x69\x6d\x69\x74\x2d\x69"
  "\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x21\x12\x73\x79\x73\x74\x65"
  "\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x63\x6f\x6e\x73\x46\x0b\x73\x63"
  "\x6f\x64\x65\x2d\x65\x76\x61\x6c\x05\x65\x76\x61\x6c\x20\x0f\x74"
  "\x72\x75\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x10\x66\x61"
  "\x6c\x73\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x0f\x6e\x75"
  "\x6c\x6c\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x13\x63\x6f\x6e"
  "\x73\x74\x61\x6e\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x13"
  "\x69\x64\x65\x6e\x74\x69\x74\x79\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61"
  "\x63\x6b\x61\x67\x65\x21\x3b\x38\x11\x68\x6f\x73\x74\x2d\x62\x69"
  "\x67\x2d\x65\x6e\x64\x69\x61\x6e\x3f\x16\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x21\x15"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x72\x65\x66\x13\x73\x79\x73\x74\x65\x6d\x2d\x76\x65\x63\x74"
  "\x6f\x72\x2d\x73\x65\x74\x21\x12\x73\x79\x73\x74\x65\x6d\x2d\x76"
  "\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x15\x73\x79\x73\x74\x65\x6d"
  "\x2d\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x0f\x73"
  "\x79\x73\x74\x65\x6d\x2d\x76\x65\x63\x74\x6f\x72\x3f\x17\x73\x79"
  "\x73\x74\x65\x6d\x2d\x73\x75\x62\x76\x65\x63\x74\x6f\x72\x2d\x3e"
  "\x6c\x69\x73\x74\x14\x73\x79\x73\x74\x65\x6d\x2d\x6c\x69\x73\x74"
  "\x2d\x3e\x76\x65\x63\x74\x6f\x72\x17\x73\x79\x73\x74\x65\x6d\x2d"
  "\x68\x75\x6e\x6b\x33\x2d\x73\x65\x74\x2d\x63\x78\x72\x32\x21\x12"
  "\x73\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x63\x78\x72"
  "\x32\x17\x73\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x73"
  "\x65\x74\x2d\x63\x78\x72\x31\x21\x12\x73\x79\x73\x74\x65\x6d\x2d"
  "\x68\x75\x6e\x6b\x33\x2d\x63\x78\x72\x31\x17\x73\x79\x73\x74\x65"
  "\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x73\x65\x74\x2d\x63\x78\x72\x30"
  "\x21\x12\x73\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x63"
  "\x78\x72\x30\x0b\x68\x75\x6e\x6b\x33\x2d\x63\x6f\x6e\x73\x15\x73"
  "\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x73\x65\x74\x2d\x63"
  "\x64\x72\x21\x10\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d"
  "\x63\x64\x72\x15\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d"
  "\x73\x65\x74\x2d\x63\x61\x72\x21\x10\x73\x79\x73\x74\x65\x6d\x2d"
  "\x70\x61\x69\x72\x2d\x63\x61\x72\x0d\x73\x79\x73\x74\x65\x6d\x2d"
  "\x70\x61\x69\x72\x3f\x11\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69"
  "\x72\x2d\x63\x6f\x6e\x73\x13\x73\x65\x74\x2d\x63\x65\x6c\x6c\x2d"
  "\x63\x6f\x6e\x74\x65\x6e\x74\x73\x21\x0e\x63\x65\x6c\x6c\x2d\x63"
  "\x6f\x6e\x74\x65\x6e\x74\x73\x06\x63\x65\x6c\x6c\x3f\x0a\x6d\x61"
  "\x6b\x65\x2d\x63\x65\x6c\x6c\x04\x65\x71\x3f\x18\x6d\x61\x6b\x65"
  "\x2d\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x10\x6f\x62\x6a\x65\x63\x74\x2d\x6e\x65\x77\x2d\x74"
  "\x79\x70\x65\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f"
  "\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x64\x61\x74\x75\x6d\x0c\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x19\x6c\x65\x78\x69\x63\x61"
  "\x6c\x2d\x75\x6e\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x61\x62\x6c"
  "\x65\x3f\x11\x6c\x65\x78\x69\x63\x61\x6c\x2d\x75\x6e\x62\x6f\x75"
  "\x6e\x64\x3f\x14\x6c\x65\x78\x69\x63\x61\x6c\x2d\x75\x6e\x61\x73"
  "\x73\x69\x67\x6e\x65\x64\x3f\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x13\x6c\x65\x78\x69\x63\x61\x6c"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x12\x6c\x65\x78\x69"
  "\x63\x61\x6c\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x22\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x2d\x64\x6f\x63\x75\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x1a"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x16\x77\x69\x74\x68\x2d\x68"
  "\x69\x73\x74\x6f\x72\x79\x2d\x64\x69\x73\x61\x62\x6c\x65\x64\x19"
  "\x67\x65\x74\x2d\x66\x69\x78\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74"
  "\x73\x2d\x76\x65\x63\x74\x6f\x72\x14\x77\x69\x74\x68\x2d\x69\x6e"
  "\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x17\x73\x65\x74"
  "\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x65\x6e\x61\x62\x6c"
  "\x65\x73\x21\x16\x67\x65\x74\x2d\x69\x6e\x74\x65\x72\x72\x75\x70"
  "\x74\x2d\x65\x6e\x61\x62\x6c\x65\x73\x10\x65\x72\x72\x6f\x72\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x41\x4a\x04\x1e\x04\x48\x04"
  "\x49\x04\x04\x28\x04\x0b\x73\x63\x6f\x64\x65\x2d\x65\x76\x61\x6c"
  "\x47\x04\x45\x04\x06\x61\x70\x70\x6c\x79\x44\x04\x43\x04\x42\x04"
  "\x41\x04\x40\x04\x3f\x04\x39\x04\x37\x04\x36\x04\x35\x04\x34\x04"
  "\x33\x04\x32\x04\x31\x04\x30\x04\x2f\x04\x2e\x04\x2d\x04\x2c\x04"
  "\x2b\x04\x2a\x04\x29\x04\x27\x04\x26\x04\x25\x04\x24\x04\x23\x04"
  "\x22\x04\x21\x04\x1f\x04\x1d\x04\x1c\x04\x1b\x04\x1a\x04\x19\x04"
  "\x17\x04\x15\x04\x13\x04\x12\x04\x11\x04\x10\x04\x0f\x04\x0d\x04"
  "\x0c\x04\x0b\x04\x09\x04\x04\x04\x04\x04\x04\x04\x41\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x8e"
  "\x01\x8f\x01\x90\x01\x92\x01\x91\x01\x06\x04\x12\x2a\x6d\x61\x6b"
  "\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x04\x11\x6d"
  "\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x04"
  "\x13\x72\x65\x63\x6f\x72\x64\x2d\x63\x6f\x6e\x73\x74\x72\x75\x63"
  "\x74\x6f\x72\x03\x11\x72\x65\x63\x6f\x72\x64\x2d\x70\x72\x65\x64"
  "\x69\x63\x61\x74\x65\x04\x10\x72\x65\x63\x6f\x72\x64\x2d\x61\x63"
  "\x63\x65\x73\x73\x6f\x72\x04\x10\x72\x65\x63\x6f\x72\x64\x2d\x6d"
  "\x6f\x64\x69\x66\x69\x65\x72\x07\x22\x46\x80\x80\x04\x21\x44\x81"
  "\x81\x02\x20\x42\x81\x81\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x85"
  "\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x85\x02\x1b\x38\x81\x89\x02"
  "\x1a\x36\x81\x83\x02\x19\x34\x81\x85\x02\x18\x32\x81\x89\x02\x17"
  "\x30\x81\x83\x02\x16\x2e\x81\x85\x02\x15\x2c\x81\x87\x02\x14\x2a"
  "\x81\x83\x02\x13\x28\x81\x85\x02\x12\x26\x81\x89\x02\x11\x24\x81"
  "\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x83"
  "\x02\x0d\x1c\x81\x85\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02"
  "\x0a\x16\x81\x85\x02\x09\x14\x81\x83\x02\x08\x12\x81\x85\x02\x07"
  "\x10\x81\x83\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a"
  "\x81\x83\x02\x03\x08\x81\x83\x02\x02\x06\x81\x85\x02\x01\x04\x81"
  "\x83\x02\x45\x7f";

SCHEME_OBJECT *
global_so_data_2213cb99071bf562 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_global_so_data_2213cb99071bf562 [0]))), (sizeof (prog_global_so_data_2213cb99071bf562)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_44]));
}

DECLARE_COMPILED_DATA_NS ("global.so", global_so_data_2213cb99071bf562)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("global.so", "552402fd64b08013")
