/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:27-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 7
#define DEBUGGING_LABEL_1_2 6
#define OBJECT_1_1 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto scode_walker_access_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_access_3)
DEFLABEL (scode_walker_access_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

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

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 7
#define DEBUGGING_LABEL_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto scode_walker_assignment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_assignment_3)
DEFLABEL (scode_walker_assignment_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

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

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 7
#define DEBUGGING_LABEL_3_2 6
#define OBJECT_3_1 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto scode_walker_combination_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_combination_3)
DEFLABEL (scode_walker_combination_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

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

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 7
#define DEBUGGING_LABEL_4_2 6
#define OBJECT_4_1 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto scode_walker_comment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_comment_3)
DEFLABEL (scode_walker_comment_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

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

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 7
#define DEBUGGING_LABEL_5_2 6
#define OBJECT_5_1 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto scode_walker_conditional_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_conditional_3)
DEFLABEL (scode_walker_conditional_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

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

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto scode_walker_constant_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_constant_3)
DEFLABEL (scode_walker_constant_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

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

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 7
#define DEBUGGING_LABEL_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto scode_walker_declaration_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_declaration_3)
DEFLABEL (scode_walker_declaration_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 7
#define DEBUGGING_LABEL_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto scode_walker_definition_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_definition_3)
DEFLABEL (scode_walker_definition_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 7
#define DEBUGGING_LABEL_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto scode_walker_delay_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_delay_3)
DEFLABEL (scode_walker_delay_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto scode_walker_disjunction_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_disjunction_3)
DEFLABEL (scode_walker_disjunction_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [11]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 7
#define DEBUGGING_LABEL_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto scode_walker_error_combination_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_error_combination_3)
DEFLABEL (scode_walker_error_combination_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [12]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 7
#define DEBUGGING_LABEL_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto scode_walker_extended_lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_extended_lambda_3)
DEFLABEL (scode_walker_extended_lambda_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [13]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 7
#define DEBUGGING_LABEL_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto scode_walker_lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_lambda_3)
DEFLABEL (scode_walker_lambda_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [14]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 7
#define DEBUGGING_LABEL_14_2 6
#define OBJECT_14_1 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto scode_walker_open_block_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_open_block_3)
DEFLABEL (scode_walker_open_block_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [15]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 7
#define DEBUGGING_LABEL_15_2 6
#define OBJECT_15_1 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto scode_walker_quotation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_quotation_3)
DEFLABEL (scode_walker_quotation_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [16]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 7
#define DEBUGGING_LABEL_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto scode_walker_sequence_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_sequence_3)
DEFLABEL (scode_walker_sequence_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [17]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

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
codwlk_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto scode_walker_the_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_the_environment_3)
DEFLABEL (scode_walker_the_environment_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [18]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 7
#define DEBUGGING_LABEL_18_2 6
#define OBJECT_18_1 5
#define OBJECT_18_0 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto scode_walker_unassignedP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_unassignedP_3)
DEFLABEL (scode_walker_unassignedP_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [19]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 7
#define DEBUGGING_LABEL_19_2 6
#define OBJECT_19_1 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto scode_walker_variable_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walker_variable_3)
DEFLABEL (scode_walker_variable_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [20]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_7 9
#define ENVIRONMENT_LABEL_20_3 17
#define DEBUGGING_LABEL_20_2 16
#define OBJECT_20_3 15
#define OBJECT_20_2 14
#define OBJECT_20_1 13
#define OBJECT_20_0 12
#define FREE_REFERENCE_20_0 11
#define FREE_REFERENCES_LABEL_20_0 10
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto scode_walkerP_4;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walkerP_10)
DEFLABEL (scode_walkerP_4)
  INTERRUPT_CHECK (26, LABEL_20_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
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
  Rvl = (current_block [OBJECT_20_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_20_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_10 9
#define LABEL_21_11 11
#define LABEL_21_12 13
#define LABEL_21_13 15
#define LABEL_21_8 17
#define LABEL_21_9 19
#define LABEL_21_16 21
#define LABEL_21_15 23
#define LABEL_21_17 25
#define LABEL_21_19 27
#define LABEL_21_20 29
#define LABEL_21_22 31
#define LABEL_21_23 33
#define LABEL_21_24 35
#define LABEL_21_25 37
#define LABEL_21_26 39
#define LABEL_21_27 41
#define LABEL_21_28 43
#define LABEL_21_29 45
#define LABEL_21_30 47
#define LABEL_21_31 49
#define LABEL_21_32 51
#define LABEL_21_33 53
#define LABEL_21_34 55
#define LABEL_21_35 57
#define LABEL_21_36 59
#define ENVIRONMENT_LABEL_21_3 94
#define DEBUGGING_LABEL_21_2 93
#define OBJECT_21_21 92
#define OBJECT_21_20 91
#define OBJECT_21_19 90
#define OBJECT_21_18 89
#define OBJECT_21_17 88
#define OBJECT_21_16 87
#define OBJECT_21_15 86
#define OBJECT_21_14 85
#define OBJECT_21_13 84
#define OBJECT_21_12 83
#define OBJECT_21_11 82
#define OBJECT_21_10 81
#define OBJECT_21_9 80
#define OBJECT_21_8 79
#define OBJECT_21_7 78
#define OBJECT_21_6 77
#define OBJECT_21_5 76
#define OBJECT_21_4 75
#define OBJECT_21_3 74
#define OBJECT_21_2 73
#define OBJECT_21_1 72
#define OBJECT_21_0 71
#define EXECUTE_CACHE_21_37 61
#define EXECUTE_CACHE_21_21 63
#define EXECUTE_CACHE_21_18 65
#define EXECUTE_CACHE_21_14 67
#define EXECUTE_CACHE_21_7 69
#define FREE_REFERENCES_LABEL_21_0 60
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto make_scode_walker_34;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto lambda_3;

    case 3:
      current_block = (Rpc - LABEL_21_10);
      goto label_36;

    case 4:
      current_block = (Rpc - LABEL_21_11);
      goto label_37;

    case 5:
      current_block = (Rpc - LABEL_21_12);
      goto label_38;

    case 6:
      current_block = (Rpc - LABEL_21_13);
      goto continuation_31;

    case 7:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_21_16);
      goto lambda_8;

    case 10:
      current_block = (Rpc - LABEL_21_15);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_21_17);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_21_19);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_21_20);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_21_22);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_21_23);
      goto continuation_24;

    case 16:
      current_block = (Rpc - LABEL_21_24);
      goto continuation_23;

    case 17:
      current_block = (Rpc - LABEL_21_25);
      goto continuation_22;

    case 18:
      current_block = (Rpc - LABEL_21_26);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_21_27);
      goto continuation_20;

    case 20:
      current_block = (Rpc - LABEL_21_28);
      goto continuation_19;

    case 21:
      current_block = (Rpc - LABEL_21_29);
      goto continuation_18;

    case 22:
      current_block = (Rpc - LABEL_21_30);
      goto continuation_17;

    case 23:
      current_block = (Rpc - LABEL_21_31);
      goto continuation_16;

    case 24:
      current_block = (Rpc - LABEL_21_32);
      goto continuation_15;

    case 25:
      current_block = (Rpc - LABEL_21_33);
      goto continuation_14;

    case 26:
      current_block = (Rpc - LABEL_21_34);
      goto continuation_26;

    case 27:
      current_block = (Rpc - LABEL_21_35);
      goto continuation_25;

    case 28:
      current_block = (Rpc - LABEL_21_36);
      goto continuation_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_scode_walker_40)
DEFLABEL (make_scode_walker_34)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = Rvl;
  (Wrd17.pObj) = (& (Rhp [-1]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd17.pObj)));
  (Rsp [0]) = (Wrd18.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.pObj) = (& (Rsp [2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_8;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_21_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [3]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21_5]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_8;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_21_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [4]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_8;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_21_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [5]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21_7]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_8;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_21_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [6]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21_8]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_8;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_21_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [7]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21_9]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_8;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_21_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_25]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.pObj) = (& (Rsp [9]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_21_10]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_8;

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_21_25);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [10]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21_11]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_8;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_21_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [11]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21_12]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_8;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_21_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [12]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21_13]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_8;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_21_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [13]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21_14]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_8;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_21_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [14]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21_15]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_8;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_31]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.pObj) = (& (Rsp [16]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_21_16]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_8;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_21_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_32]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.pObj) = (& (Rsp [19]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [21]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_21_17]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_8;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_21_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [20]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [22]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_21_18]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_8;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_21_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [18]);
  (Rsp [15]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_34]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.pObj) = (& (Rsp [21]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_21_19]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_8;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_21_34);
  (Rsp [17]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_35]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.pObj) = (& (Rsp [21]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_21_20]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_8;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_21_35);
  (Rsp [16]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_36]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.pObj) = (& (Rsp [21]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [23]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_21_21]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_8;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_21_36);
  (Rsp [18]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_37]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if (! ((Wrd7.Obj) == (current_block [OBJECT_21_3])))
    goto label_44;

DEFLABEL (label_43)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_44)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_21_4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_14]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_21_13);
  goto label_43;

DEFLABEL (lambda_41)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_21_6);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_50;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_49)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_48;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_47)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_46;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_45)
  (Wrd30.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_38)
  (Wrd21.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

DEFLABEL (label_36)
  (Wrd5.Obj) = Rvl;
  goto label_49;

DEFLABEL (lambda_42)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_21_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_17);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_51;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21_20);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_52;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  Rvl = ((Wrd13.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_52)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define OBJECT_22_0 10
#define FREE_REFERENCE_22_0 9
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_22_4);
      goto scode_walk_2;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (scode_walk_7)
DEFLABEL (scode_walk_2)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_11;
  Wrd6 = Wrd10;

DEFLABEL (label_10)
  Wrd5 = Wrd6;
  (Wrd13.Obj) = ((SCHEME_OBJECT) 26);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_9;
  if (! ((Wrd13.uLng) == 26))
    goto label_9;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd24.Lng))))
    goto label_9;
  (Wrd18.pObj) = (& ((Wrd22.pObj) [(Wrd15.Lng)]));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_8)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_9)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_6 5
#define LABEL_23_5 7
#define LABEL_23_10 9
#define LABEL_23_11 11
#define LABEL_23_12 13
#define LABEL_23_13 15
#define LABEL_23_14 17
#define LABEL_23_15 19
#define LABEL_23_16 21
#define LABEL_23_17 23
#define LABEL_23_18 25
#define LABEL_23_19 27
#define LABEL_23_20 29
#define LABEL_23_21 31
#define LABEL_23_22 33
#define LABEL_23_23 35
#define LABEL_23_7 37
#define LABEL_23_9 39
#define LABEL_23_28 41
#define LABEL_23_29 43
#define LABEL_23_24 45
#define TAG_23_25 21
#define LABEL_23_32 47
#define LABEL_23_33 49
#define LABEL_23_34 51
#define LABEL_23_30 53
#define TAG_23_31 25
#define LABEL_23_35 55
#define LABEL_23_36 57
#define LABEL_23_37 59
#define ENVIRONMENT_LABEL_23_3 108
#define DEBUGGING_LABEL_23_2 107
#define OBJECT_23_18 106
#define OBJECT_23_17 105
#define OBJECT_23_16 104
#define OBJECT_23_15 103
#define OBJECT_23_14 102
#define OBJECT_23_13 101
#define OBJECT_23_12 100
#define OBJECT_23_11 99
#define OBJECT_23_10 98
#define OBJECT_23_9 97
#define OBJECT_23_8 96
#define OBJECT_23_7 95
#define OBJECT_23_6 94
#define OBJECT_23_5 93
#define OBJECT_23_4 92
#define OBJECT_23_3 91
#define OBJECT_23_2 90
#define OBJECT_23_1 89
#define OBJECT_23_0 88
#define EXECUTE_CACHE_23_38 61
#define EXECUTE_CACHE_23_27 63
#define EXECUTE_CACHE_23_26 65
#define EXECUTE_CACHE_23_8 67
#define FREE_REFERENCE_23_15 70
#define FREE_REFERENCE_23_14 71
#define FREE_REFERENCE_23_13 72
#define FREE_REFERENCE_23_12 73
#define FREE_REFERENCE_23_11 74
#define FREE_REFERENCE_23_10 75
#define FREE_REFERENCE_23_9 76
#define FREE_REFERENCE_23_8 77
#define FREE_REFERENCE_23_7 78
#define FREE_REFERENCE_23_6 79
#define FREE_REFERENCE_23_5 80
#define FREE_REFERENCE_23_4 81
#define FREE_REFERENCE_23_3 82
#define FREE_REFERENCE_23_2 83
#define FREE_REFERENCE_23_1 84
#define FREE_REFERENCE_23_0 85
#define FREE_ASSIGNMENT_23_0 87
#define FREE_REFERENCES_LABEL_23_0 60
#define NUMBER_OF_LINKER_SECTIONS_23_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd277;
  machine_word Wrd276;
  machine_word Wrd274;
  machine_word Wrd275;
  machine_word Wrd273;
  machine_word Wrd272;
  machine_word Wrd270;
  machine_word Wrd266;
  machine_word Wrd268;
  machine_word Wrd269;
  machine_word Wrd262;
  machine_word Wrd264;
  machine_word Wrd265;
  machine_word Wrd256;
  machine_word Wrd261;
  machine_word Wrd260;
  machine_word Wrd257;
  machine_word Wrd254;
  machine_word Wrd253;
  machine_word Wrd251;
  machine_word Wrd247;
  machine_word Wrd249;
  machine_word Wrd250;
  machine_word Wrd243;
  machine_word Wrd245;
  machine_word Wrd246;
  machine_word Wrd237;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd238;
  machine_word Wrd235;
  machine_word Wrd234;
  machine_word Wrd232;
  machine_word Wrd228;
  machine_word Wrd230;
  machine_word Wrd231;
  machine_word Wrd224;
  machine_word Wrd226;
  machine_word Wrd227;
  machine_word Wrd218;
  machine_word Wrd223;
  machine_word Wrd222;
  machine_word Wrd219;
  machine_word Wrd216;
  machine_word Wrd215;
  machine_word Wrd213;
  machine_word Wrd209;
  machine_word Wrd211;
  machine_word Wrd212;
  machine_word Wrd205;
  machine_word Wrd207;
  machine_word Wrd208;
  machine_word Wrd199;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd200;
  machine_word Wrd197;
  machine_word Wrd196;
  machine_word Wrd194;
  machine_word Wrd190;
  machine_word Wrd192;
  machine_word Wrd193;
  machine_word Wrd186;
  machine_word Wrd188;
  machine_word Wrd189;
  machine_word Wrd180;
  machine_word Wrd185;
  machine_word Wrd184;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd175;
  machine_word Wrd171;
  machine_word Wrd173;
  machine_word Wrd174;
  machine_word Wrd167;
  machine_word Wrd169;
  machine_word Wrd170;
  machine_word Wrd161;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd156;
  machine_word Wrd152;
  machine_word Wrd154;
  machine_word Wrd155;
  machine_word Wrd148;
  machine_word Wrd150;
  machine_word Wrd151;
  machine_word Wrd142;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd137;
  machine_word Wrd133;
  machine_word Wrd135;
  machine_word Wrd136;
  machine_word Wrd129;
  machine_word Wrd131;
  machine_word Wrd132;
  machine_word Wrd123;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd118;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd117;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd113;
  machine_word Wrd104;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd99;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd98;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd94;
  machine_word Wrd85;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd79;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd75;
  machine_word Wrd66;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_23_4);
      goto initialize_packageB_59;

    case 1:
      current_block = (Rpc - LABEL_23_6);
      goto label_61;

    case 2:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_23_10);
      goto label_62;

    case 4:
      current_block = (Rpc - LABEL_23_11);
      goto label_63;

    case 5:
      current_block = (Rpc - LABEL_23_12);
      goto label_64;

    case 6:
      current_block = (Rpc - LABEL_23_13);
      goto label_65;

    case 7:
      current_block = (Rpc - LABEL_23_14);
      goto label_66;

    case 8:
      current_block = (Rpc - LABEL_23_15);
      goto label_67;

    case 9:
      current_block = (Rpc - LABEL_23_16);
      goto label_68;

    case 10:
      current_block = (Rpc - LABEL_23_17);
      goto label_69;

    case 11:
      current_block = (Rpc - LABEL_23_18);
      goto label_70;

    case 12:
      current_block = (Rpc - LABEL_23_19);
      goto label_71;

    case 13:
      current_block = (Rpc - LABEL_23_20);
      goto label_72;

    case 14:
      current_block = (Rpc - LABEL_23_21);
      goto label_73;

    case 15:
      current_block = (Rpc - LABEL_23_22);
      goto label_74;

    case 16:
      current_block = (Rpc - LABEL_23_23);
      goto label_75;

    case 17:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_0;

    case 18:
      current_block = (Rpc - LABEL_23_9);
      goto continuation_55;

    case 19:
      current_block = (Rpc - LABEL_23_28);
      goto label_76;

    case 20:
      current_block = (Rpc - LABEL_23_29);
      goto label_77;

    case 21:
      current_block = (Rpc - LABEL_23_24);
      goto lambda_85;

    case 22:
      current_block = (Rpc - LABEL_23_32);
      goto label_78;

    case 23:
      current_block = (Rpc - LABEL_23_33);
      goto label_80;

    case 24:
      current_block = (Rpc - LABEL_23_34);
      goto label_79;

    case 25:
      current_block = (Rpc - LABEL_23_30);
      goto lambda_86;

    case 26:
      current_block = (Rpc - LABEL_23_35);
      goto label_81;

    case 27:
      current_block = (Rpc - LABEL_23_36);
      goto label_82;

    case 28:
      current_block = (Rpc - LABEL_23_37);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_84)
DEFLABEL (initialize_packageB_59)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_122;
  Wrd8 = Wrd12;

DEFLABEL (label_121)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_27]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_120;
  Wrd9 = Wrd13;

DEFLABEL (label_119)
  (Wrd18.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_23_1]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_2]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_118;
  Wrd28 = Wrd32;

DEFLABEL (label_117)
  (Wrd37.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_23_2]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd42.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_3]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_116;
  Wrd47 = Wrd51;

DEFLABEL (label_115)
  (Wrd56.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd60.Obj) = (current_block [OBJECT_23_3]);
  (* (Rhp++)) = (Wrd60.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (Wrd61.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_4]));
  (Wrd70.Obj) = ((Wrd67.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_114;
  Wrd66 = Wrd70;

DEFLABEL (label_113)
  (Wrd75.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (Wrd79.Obj) = (current_block [OBJECT_23_4]);
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd78.pObj) = (& (Rhp [-2]));
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd78.pObj)));
  (Wrd80.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd80.Obj);
  (Wrd82.pObj) = (& (Rhp [-2]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd82.pObj)));
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd86.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_5]));
  (Wrd89.Obj) = ((Wrd86.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_112;
  Wrd85 = Wrd89;

DEFLABEL (label_111)
  (Wrd94.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd94.Obj);
  (Wrd93.pObj) = (& (Rhp [-2]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd93.pObj)));
  (Wrd98.Obj) = (current_block [OBJECT_23_5]);
  (* (Rhp++)) = (Wrd98.Obj);
  (* (Rhp++)) = (Wrd91.Obj);
  (Wrd97.pObj) = (& (Rhp [-2]));
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd97.pObj)));
  (Wrd99.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd95.Obj);
  (* (Rhp++)) = (Wrd99.Obj);
  (Wrd101.pObj) = (& (Rhp [-2]));
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd101.pObj)));
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd105.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_6]));
  (Wrd108.Obj) = ((Wrd105.pObj) [0]);
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd108.Obj));
  if ((Wrd109.uLng) == 50)
    goto label_110;
  Wrd104 = Wrd108;

DEFLABEL (label_109)
  (Wrd113.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd104.Obj);
  (* (Rhp++)) = (Wrd113.Obj);
  (Wrd112.pObj) = (& (Rhp [-2]));
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd112.pObj)));
  (Wrd117.Obj) = (current_block [OBJECT_23_6]);
  (* (Rhp++)) = (Wrd117.Obj);
  (* (Rhp++)) = (Wrd110.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  (Wrd118.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd114.Obj);
  (* (Rhp++)) = (Wrd118.Obj);
  (Wrd120.pObj) = (& (Rhp [-2]));
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd120.pObj)));
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd124.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_7]));
  (Wrd127.Obj) = ((Wrd124.pObj) [0]);
  (Wrd128.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if ((Wrd128.uLng) == 50)
    goto label_108;
  Wrd123 = Wrd127;

DEFLABEL (label_107)
  (Wrd132.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd123.Obj);
  (* (Rhp++)) = (Wrd132.Obj);
  (Wrd131.pObj) = (& (Rhp [-2]));
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd131.pObj)));
  (Wrd136.Obj) = (current_block [OBJECT_23_7]);
  (* (Rhp++)) = (Wrd136.Obj);
  (* (Rhp++)) = (Wrd129.Obj);
  (Wrd135.pObj) = (& (Rhp [-2]));
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd135.pObj)));
  (Wrd137.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd133.Obj);
  (* (Rhp++)) = (Wrd137.Obj);
  (Wrd139.pObj) = (& (Rhp [-2]));
  (Wrd140.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd139.pObj)));
  (* (--Rsp)) = (Wrd140.Obj);
  (Wrd143.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_8]));
  (Wrd146.Obj) = ((Wrd143.pObj) [0]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  if ((Wrd147.uLng) == 50)
    goto label_106;
  Wrd142 = Wrd146;

DEFLABEL (label_105)
  (Wrd151.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd142.Obj);
  (* (Rhp++)) = (Wrd151.Obj);
  (Wrd150.pObj) = (& (Rhp [-2]));
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd150.pObj)));
  (Wrd155.Obj) = (current_block [OBJECT_23_8]);
  (* (Rhp++)) = (Wrd155.Obj);
  (* (Rhp++)) = (Wrd148.Obj);
  (Wrd154.pObj) = (& (Rhp [-2]));
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd154.pObj)));
  (Wrd156.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd152.Obj);
  (* (Rhp++)) = (Wrd156.Obj);
  (Wrd158.pObj) = (& (Rhp [-2]));
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd158.pObj)));
  (* (--Rsp)) = (Wrd159.Obj);
  (Wrd162.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_9]));
  (Wrd165.Obj) = ((Wrd162.pObj) [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if ((Wrd166.uLng) == 50)
    goto label_104;
  Wrd161 = Wrd165;

DEFLABEL (label_103)
  (Wrd170.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd161.Obj);
  (* (Rhp++)) = (Wrd170.Obj);
  (Wrd169.pObj) = (& (Rhp [-2]));
  (Wrd167.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd169.pObj)));
  (Wrd174.Obj) = (current_block [OBJECT_23_9]);
  (* (Rhp++)) = (Wrd174.Obj);
  (* (Rhp++)) = (Wrd167.Obj);
  (Wrd173.pObj) = (& (Rhp [-2]));
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd173.pObj)));
  (Wrd175.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd171.Obj);
  (* (Rhp++)) = (Wrd175.Obj);
  (Wrd177.pObj) = (& (Rhp [-2]));
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd177.pObj)));
  (* (--Rsp)) = (Wrd178.Obj);
  (Wrd181.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_10]));
  (Wrd184.Obj) = ((Wrd181.pObj) [0]);
  (Wrd185.uLng) = (OBJECT_TYPE (Wrd184.Obj));
  if ((Wrd185.uLng) == 50)
    goto label_102;
  Wrd180 = Wrd184;

DEFLABEL (label_101)
  (Wrd189.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd180.Obj);
  (* (Rhp++)) = (Wrd189.Obj);
  (Wrd188.pObj) = (& (Rhp [-2]));
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd188.pObj)));
  (Wrd193.Obj) = (current_block [OBJECT_23_10]);
  (* (Rhp++)) = (Wrd193.Obj);
  (* (Rhp++)) = (Wrd186.Obj);
  (Wrd192.pObj) = (& (Rhp [-2]));
  (Wrd190.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd192.pObj)));
  (Wrd194.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd190.Obj);
  (* (Rhp++)) = (Wrd194.Obj);
  (Wrd196.pObj) = (& (Rhp [-2]));
  (Wrd197.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd196.pObj)));
  (* (--Rsp)) = (Wrd197.Obj);
  (Wrd200.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_11]));
  (Wrd203.Obj) = ((Wrd200.pObj) [0]);
  (Wrd204.uLng) = (OBJECT_TYPE (Wrd203.Obj));
  if ((Wrd204.uLng) == 50)
    goto label_100;
  Wrd199 = Wrd203;

DEFLABEL (label_99)
  (Wrd208.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd199.Obj);
  (* (Rhp++)) = (Wrd208.Obj);
  (Wrd207.pObj) = (& (Rhp [-2]));
  (Wrd205.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd207.pObj)));
  (Wrd212.Obj) = (current_block [OBJECT_23_11]);
  (* (Rhp++)) = (Wrd212.Obj);
  (* (Rhp++)) = (Wrd205.Obj);
  (Wrd211.pObj) = (& (Rhp [-2]));
  (Wrd209.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd211.pObj)));
  (Wrd213.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd209.Obj);
  (* (Rhp++)) = (Wrd213.Obj);
  (Wrd215.pObj) = (& (Rhp [-2]));
  (Wrd216.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd215.pObj)));
  (* (--Rsp)) = (Wrd216.Obj);
  (Wrd219.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_12]));
  (Wrd222.Obj) = ((Wrd219.pObj) [0]);
  (Wrd223.uLng) = (OBJECT_TYPE (Wrd222.Obj));
  if ((Wrd223.uLng) == 50)
    goto label_98;
  Wrd218 = Wrd222;

DEFLABEL (label_97)
  (Wrd227.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd218.Obj);
  (* (Rhp++)) = (Wrd227.Obj);
  (Wrd226.pObj) = (& (Rhp [-2]));
  (Wrd224.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd226.pObj)));
  (Wrd231.Obj) = (current_block [OBJECT_23_12]);
  (* (Rhp++)) = (Wrd231.Obj);
  (* (Rhp++)) = (Wrd224.Obj);
  (Wrd230.pObj) = (& (Rhp [-2]));
  (Wrd228.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd230.pObj)));
  (Wrd232.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd228.Obj);
  (* (Rhp++)) = (Wrd232.Obj);
  (Wrd234.pObj) = (& (Rhp [-2]));
  (Wrd235.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd234.pObj)));
  (* (--Rsp)) = (Wrd235.Obj);
  (Wrd238.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_13]));
  (Wrd241.Obj) = ((Wrd238.pObj) [0]);
  (Wrd242.uLng) = (OBJECT_TYPE (Wrd241.Obj));
  if ((Wrd242.uLng) == 50)
    goto label_96;
  Wrd237 = Wrd241;

DEFLABEL (label_95)
  (Wrd246.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd237.Obj);
  (* (Rhp++)) = (Wrd246.Obj);
  (Wrd245.pObj) = (& (Rhp [-2]));
  (Wrd243.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd245.pObj)));
  (Wrd250.Obj) = (current_block [OBJECT_23_13]);
  (* (Rhp++)) = (Wrd250.Obj);
  (* (Rhp++)) = (Wrd243.Obj);
  (Wrd249.pObj) = (& (Rhp [-2]));
  (Wrd247.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd249.pObj)));
  (Wrd251.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd247.Obj);
  (* (Rhp++)) = (Wrd251.Obj);
  (Wrd253.pObj) = (& (Rhp [-2]));
  (Wrd254.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd253.pObj)));
  (* (--Rsp)) = (Wrd254.Obj);
  (Wrd257.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_14]));
  (Wrd260.Obj) = ((Wrd257.pObj) [0]);
  (Wrd261.uLng) = (OBJECT_TYPE (Wrd260.Obj));
  if ((Wrd261.uLng) == 50)
    goto label_94;
  Wrd256 = Wrd260;

DEFLABEL (label_93)
  (Wrd265.Obj) = (current_block [OBJECT_23_0]);
  (* (Rhp++)) = (Wrd256.Obj);
  (* (Rhp++)) = (Wrd265.Obj);
  (Wrd264.pObj) = (& (Rhp [-2]));
  (Wrd262.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd264.pObj)));
  (Wrd269.Obj) = (current_block [OBJECT_23_14]);
  (* (Rhp++)) = (Wrd269.Obj);
  (* (Rhp++)) = (Wrd262.Obj);
  (Wrd268.pObj) = (& (Rhp [-2]));
  (Wrd266.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd268.pObj)));
  (Wrd270.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd266.Obj);
  (* (Rhp++)) = (Wrd270.Obj);
  (Wrd272.pObj) = (& (Rhp [-2]));
  (Wrd273.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd272.pObj)));
  (* (--Rsp)) = (Wrd273.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd275.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_24])));
  Rhp += 1;
  (Wrd274.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd275.pObj)));
  Wrd276 = Wrd275;
  (Wrd277.Obj) = (Rsp [2]);
  ((Wrd276.pObj) [2]) = (Wrd277.Obj);
  (* (--Rsp)) = (Wrd274.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_26]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_23_9);
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_15]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_92;

DEFLABEL (label_91)
  Wrd7 = Wrd11;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_23_0]));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd27.Obj) = ((Wrd19.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_89;

DEFLABEL (label_88)
  ((Wrd19.pObj) [0]) = (Wrd20.Obj);

DEFLABEL (label_87)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_89)
  if ((Wrd27.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_88;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_23_29])), (Wrd19.pObj), (Wrd20.Obj));

DEFLABEL (label_77)
  goto label_87;

DEFLABEL (label_92)
  if ((Wrd11.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_91;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_23_28])), (Wrd8.pObj));

DEFLABEL (label_76)
  (Wrd7.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_23])), (Wrd257.pObj));

DEFLABEL (label_75)
  (Wrd256.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_22])), (Wrd238.pObj));

DEFLABEL (label_74)
  (Wrd237.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_21])), (Wrd219.pObj));

DEFLABEL (label_73)
  (Wrd218.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_20])), (Wrd200.pObj));

DEFLABEL (label_72)
  (Wrd199.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_19])), (Wrd181.pObj));

DEFLABEL (label_71)
  (Wrd180.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_18])), (Wrd162.pObj));

DEFLABEL (label_70)
  (Wrd161.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_17])), (Wrd143.pObj));

DEFLABEL (label_69)
  (Wrd142.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_16])), (Wrd124.pObj));

DEFLABEL (label_68)
  (Wrd123.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_15])), (Wrd105.pObj));

DEFLABEL (label_67)
  (Wrd104.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_14])), (Wrd86.pObj));

DEFLABEL (label_66)
  (Wrd85.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_13])), (Wrd67.pObj));

DEFLABEL (label_65)
  (Wrd66.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_12])), (Wrd48.pObj));

DEFLABEL (label_64)
  (Wrd47.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_11])), (Wrd29.pObj));

DEFLABEL (label_63)
  (Wrd28.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_10])), (Wrd10.pObj));

DEFLABEL (label_62)
  (Wrd9.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_6])), (Wrd9.pObj));

DEFLABEL (label_61)
  (Wrd8.Obj) = Rvl;
  goto label_121;

DEFLABEL (lambda_85)
  CLOSURE_HEADER (LABEL_23_24);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_30])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_129;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_128)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_125;
  (Wrd23.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_124;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [0]);

DEFLABEL (label_123)
  (Rsp [2]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_6;

DEFLABEL (label_124)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_34]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_15]), 1);

DEFLABEL (label_79)
  (Wrd24.Obj) = Rvl;
  goto label_123;

DEFLABEL (label_125)
  (Wrd34.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_127;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [0]);

DEFLABEL (label_126)
  (Rsp [2]) = (Wrd35.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_26]));

DEFLABEL (label_127)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_33]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_15]), 1);

DEFLABEL (label_80)
  (Wrd35.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_32]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_15]), 1);

DEFLABEL (label_78)
  (Wrd13.Obj) = Rvl;
  goto label_128;

DEFLABEL (lambda_86)
  CLOSURE_HEADER (LABEL_23_30);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_135;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_134)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_133;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_132)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_37]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_38]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_37);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 10)
    goto label_131;

DEFLABEL (label_130)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_18]), 3);

DEFLABEL (label_131)
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 26))
    goto label_130;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_130;
  (Wrd9.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd12.pObj) = (& ((Wrd20.pObj) [(Wrd9.Lng)]));
  ((Wrd12.pObj) [1]) = (Wrd6.Obj);
  Rvl = (current_block [OBJECT_23_17]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_133)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_36]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_15]), 1);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_35]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_16]), 1);

DEFLABEL (label_81)
  (Wrd8.Obj) = Rvl;
  goto label_134;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_7 5
#define LABEL_24_8 7
#define LABEL_24_9 9
#define LABEL_24_10 11
#define LABEL_24_11 13
#define LABEL_24_12 15
#define LABEL_24_13 17
#define LABEL_24_5 19
#define LABEL_24_15 21
#define LABEL_24_17 23
#define ENVIRONMENT_LABEL_24_3 49
#define DEBUGGING_LABEL_24_2 48
#define OBJECT_24_14 47
#define OBJECT_24_13 46
#define OBJECT_24_12 45
#define OBJECT_24_11 44
#define OBJECT_24_10 43
#define OBJECT_24_9 42
#define OBJECT_24_8 41
#define OBJECT_24_7 40
#define OBJECT_24_6 39
#define OBJECT_24_5 38
#define OBJECT_24_4 37
#define OBJECT_24_3 36
#define OBJECT_24_2 35
#define OBJECT_24_1 34
#define OBJECT_24_0 33
#define EXECUTE_CACHE_24_18 25
#define EXECUTE_CACHE_24_16 27
#define EXECUTE_CACHE_24_14 29
#define EXECUTE_CACHE_24_6 31
#define FREE_REFERENCES_LABEL_24_0 24
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd44;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd60;
  machine_word Wrd98;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd106;
  machine_word Wrd96;
  machine_word Wrd117;
  machine_word Wrd95;
  machine_word Wrd93;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd91;
  machine_word Wrd85;
  machine_word Wrd86;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd79;
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
      current_block = (Rpc - LABEL_24_4);
      goto walk_combination_15;

    case 1:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_24_9);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_24_10);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_24_11);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_24_12);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_24_13);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_24_15);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_24_17);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_combination_22)
DEFLABEL (walk_combination_15)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_24_13]))
    goto label_44;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_24_14]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;

DEFLABEL (label_44)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_43;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_24_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd79.Obj) = (Rsp [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_40;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd76.Obj) = ((Wrd78.pObj) [1]);

DEFLABEL (label_39)
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd87.uLng) == 1))
    goto label_38;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd85.Obj) = ((Wrd86.pObj) [0]);

DEFLABEL (label_37)
  (Rsp [0]) = (Wrd85.Obj);
  (Wrd109.Obj) = (current_block [OBJECT_24_2]);
  (Wrd112.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd112.Lng))))
    goto label_36;
  (Wrd93.uLng) = (OBJECT_DATUM (Wrd109.Obj));
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd93.Obj) == (Wrd95.Obj))
    goto label_35;

DEFLABEL (label_34)
  (Wrd96.Obj) = (current_block [OBJECT_24_4]);
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd106.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd106.Lng)))
    goto label_23;
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_23)
  (Wrd100.uLng) = (OBJECT_DATUM (Wrd96.Obj));
  (Wrd101.Obj) = (Rsp [1]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if ((Wrd100.Obj) == (Wrd102.Obj))
    goto label_25;
  (Wrd98.Obj) = (current_block [OBJECT_24_6]);
  goto label_24;

DEFLABEL (label_25)
  (Wrd98.Obj) = (current_block [OBJECT_24_5]);

DEFLABEL (label_24)
DEFLABEL (label_33)
  Rsp = (& (Rsp [3]));
  if ((Wrd98.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;

DEFLABEL (label_29)
  (Wrd44.Obj) = (current_block [OBJECT_24_8]);
  (Rsp [2]) = (Wrd44.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 62)
    goto label_27;

DEFLABEL (label_26)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_11]), 2);

DEFLABEL (label_27)
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 18L) < ((unsigned long) (Wrd54.Lng))))
    goto label_26;
  Rvl = ((Wrd52.pObj) [19]);

DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == (current_block [OBJECT_24_9]))
    goto label_31;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_24_12]);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_14]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_24_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;

DEFLABEL (label_31)
  (Wrd28.Obj) = (current_block [OBJECT_24_10]);
  (Rsp [2]) = (Wrd28.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_26;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd38.Lng))))
    goto label_26;
  Rvl = ((Wrd36.pObj) [12]);
  goto label_28;

DEFLABEL (label_32)
  (Wrd60.Obj) = (current_block [OBJECT_24_7]);
  (Rsp [2]) = (Wrd60.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 62))
    goto label_26;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd70.Lng))))
    goto label_26;
  Rvl = ((Wrd68.pObj) [4]);
  goto label_28;

DEFLABEL (label_35)
  Rsp = (& (Rsp [2]));
  goto label_29;

DEFLABEL (label_36)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_35;

DEFLABEL (label_38)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_19)
  (Wrd85.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_18)
  (Wrd76.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  Rsp = (& (Rsp [2]));
  goto label_30;

DEFLABEL (label_43)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_17]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define ENVIRONMENT_LABEL_25_3 13
#define DEBUGGING_LABEL_25_2 12
#define OBJECT_25_2 11
#define OBJECT_25_1 10
#define OBJECT_25_0 9
#define EXECUTE_CACHE_25_6 7
#define FREE_REFERENCES_LABEL_25_0 6
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_25_4);
      goto walk_comment_1;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_comment_4)
DEFLABEL (walk_comment_1)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd7.Obj) = (current_block [OBJECT_25_1]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_6)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_5;
  Rvl = ((Wrd15.pObj) [8]);

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd20.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_5;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd30.Lng))))
    goto label_5;
  Rvl = ((Wrd28.pObj) [5]);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define ENVIRONMENT_LABEL_26_3 13
#define DEBUGGING_LABEL_26_2 12
#define OBJECT_26_2 11
#define OBJECT_26_1 10
#define OBJECT_26_0 9
#define EXECUTE_CACHE_26_6 7
#define FREE_REFERENCES_LABEL_26_0 6
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_26_4);
      goto walk_sequence_1;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_sequence_4)
DEFLABEL (walk_sequence_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd7.Obj) = (current_block [OBJECT_26_1]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_6)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd17.Lng))))
    goto label_5;
  Rvl = ((Wrd15.pObj) [15]);

DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd20.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 62))
    goto label_5;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd30.Lng))))
    goto label_5;
  Rvl = ((Wrd28.pObj) [17]);
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 7
#define DEBUGGING_LABEL_27_2 6
#define OBJECT_27_1 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_27_4);
      goto walk_access_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_access_3)
DEFLABEL (walk_access_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_5)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_4;
  Rvl = ((Wrd13.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 7
#define DEBUGGING_LABEL_28_2 6
#define OBJECT_28_1 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_28_4);
      goto walk_assignment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_assignment_3)
DEFLABEL (walk_assignment_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_5)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_4;
  Rvl = ((Wrd13.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 7
#define DEBUGGING_LABEL_29_2 6
#define OBJECT_29_1 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_29_4);
      goto walk_conditional_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_conditional_3)
DEFLABEL (walk_conditional_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_5)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_4;
  Rvl = ((Wrd13.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 7
#define DEBUGGING_LABEL_30_2 6
#define OBJECT_30_1 5
#define OBJECT_30_0 4
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_30_4);
      goto walk_constant_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_constant_3)
DEFLABEL (walk_constant_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (current_block [OBJECT_30_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_5)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd15.Lng))))
    goto label_4;
  Rvl = ((Wrd13.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 7
#define DEBUGGING_LABEL_31_2 6
#define OBJECT_31_1 5
#define OBJECT_31_0 4
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_31_4);
      goto walk_definition_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_definition_3)
DEFLABEL (walk_definition_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (current_block [OBJECT_31_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_5)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd15.Lng))))
    goto label_4;
  Rvl = ((Wrd13.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 7
#define DEBUGGING_LABEL_32_2 6
#define OBJECT_32_1 5
#define OBJECT_32_0 4
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_32_4);
      goto walk_delay_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_delay_3)
DEFLABEL (walk_delay_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (current_block [OBJECT_32_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_5)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd15.Lng))))
    goto label_4;
  Rvl = ((Wrd13.pObj) [10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 7
#define DEBUGGING_LABEL_33_2 6
#define OBJECT_33_1 5
#define OBJECT_33_0 4
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_33_4);
      goto walk_disjunction_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_disjunction_3)
DEFLABEL (walk_disjunction_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (current_block [OBJECT_33_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_5)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd15.Lng))))
    goto label_4;
  Rvl = ((Wrd13.pObj) [11]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 7
#define DEBUGGING_LABEL_34_2 6
#define OBJECT_34_1 5
#define OBJECT_34_0 4
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_34_4);
      goto walk_extended_lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_extended_lambda_3)
DEFLABEL (walk_extended_lambda_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (current_block [OBJECT_34_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_5)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd15.Lng))))
    goto label_4;
  Rvl = ((Wrd13.pObj) [13]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define ENVIRONMENT_LABEL_35_3 7
#define DEBUGGING_LABEL_35_2 6
#define OBJECT_35_1 5
#define OBJECT_35_0 4
#define FREE_REFERENCES_LABEL_35_0 4
#define NUMBER_OF_LINKER_SECTIONS_35_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_35_4);
      goto walk_lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_lambda_3)
DEFLABEL (walk_lambda_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (current_block [OBJECT_35_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_5)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd15.Lng))))
    goto label_4;
  Rvl = ((Wrd13.pObj) [14]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define ENVIRONMENT_LABEL_36_3 7
#define DEBUGGING_LABEL_36_2 6
#define OBJECT_36_1 5
#define OBJECT_36_0 4
#define FREE_REFERENCES_LABEL_36_0 4
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_36_4);
      goto walk_quotation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_quotation_3)
DEFLABEL (walk_quotation_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (current_block [OBJECT_36_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_5)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd15.Lng))))
    goto label_4;
  Rvl = ((Wrd13.pObj) [16]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 7
#define DEBUGGING_LABEL_37_2 6
#define OBJECT_37_1 5
#define OBJECT_37_0 4
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_37_4);
      goto walk_the_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_the_environment_3)
DEFLABEL (walk_the_environment_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (current_block [OBJECT_37_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_5)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 17L) < ((unsigned long) (Wrd15.Lng))))
    goto label_4;
  Rvl = ((Wrd13.pObj) [18]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define ENVIRONMENT_LABEL_38_3 7
#define DEBUGGING_LABEL_38_2 6
#define OBJECT_38_1 5
#define OBJECT_38_0 4
#define FREE_REFERENCES_LABEL_38_0 4
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
codwlk_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_38_4);
      goto walk_variable_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_variable_3)
DEFLABEL (walk_variable_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (current_block [OBJECT_38_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_5)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd15.Lng))))
    goto label_4;
  Rvl = ((Wrd13.pObj) [20]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_5 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_11 13
#define LABEL_17 15
#define LABEL_13 17
#define TAG_14 7
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_18 23
#define LABEL_19 25
#define LABEL_20 27
#define ENVIRONMENT_LABEL_3 51
#define DEBUGGING_LABEL_2 50
#define PURIFICATION_ROOT 49
#define OBJECT_11 48
#define OBJECT_10 47
#define OBJECT_9 46
#define OBJECT_8 45
#define OBJECT_7 44
#define OBJECT_6 43
#define OBJECT_5 42
#define OBJECT_4 41
#define OBJECT_3 40
#define OBJECT_2 39
#define OBJECT_1 38
#define OBJECT_0 37
#define FREE_REFERENCE_0 29
#define GLOBAL_EXECUTE_CACHE_12 31
#define GLOBAL_EXECUTE_CACHE_10 33
#define GLOBAL_EXECUTE_CACHE_6 35
#define FREE_REFERENCES_LABEL_0 28
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
codwlk_so_b7ffafa34930d0e9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
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
      goto continuation_20;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_31;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_19;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_25;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_21;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_26;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto Z__make_scode_walker_34;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_28;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_27;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto expression_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_30)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_19])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_37)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_36)
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
	0,
	0,
	0,
	1,
	1,
	1,
	3,
	1,
	1,
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
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 38)
      goto label_35;
    blocks = (current_block [OBJECT_11]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_18])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_35)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd80.pObj) = (& (Rhp [-2]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd80.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd84.pObj) = (& (Rhp [-2]));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd84.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd82.Obj);
  (Wrd87.pObj) = (& (Rhp [-2]));
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd87.pObj)));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd90.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd91.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_41;
  Wrd11 = Wrd15;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1414, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_39;
  Wrd11 = Wrd15;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_9]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_32)
  (Wrd11.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_31)
  (Wrd11.Obj) = Rvl;
  goto label_40;

DEFLABEL (Z__make_scode_walker_34)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (Z__make_scode_walker_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd28.Obj) = (MAKE_OBJECT (0, 20));
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.Obj) = (Rsp [5]);
  (Wrd25.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd18.Obj) = (Rsp [7]);
  (Wrd19.Obj) = (Rsp [8]);
  (Wrd20.Obj) = (Rsp [9]);
  (Wrd21.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd14.Obj) = (Rsp [11]);
  (Wrd15.Obj) = (Rsp [12]);
  (Wrd16.Obj) = (Rsp [13]);
  (Wrd17.Obj) = (Rsp [14]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd10.Obj) = (Rsp [15]);
  (Wrd11.Obj) = (Rsp [16]);
  (Wrd12.Obj) = (Rsp [17]);
  (Wrd13.Obj) = (Rsp [18]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [19]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-21]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [20]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_codwlk_so_b7ffafa34930d0e9 [38] =
  {
    { "codwlk_so_code_1", 1, codwlk_so_code_1 },
    { "codwlk_so_code_2", 1, codwlk_so_code_2 },
    { "codwlk_so_code_3", 1, codwlk_so_code_3 },
    { "codwlk_so_code_4", 1, codwlk_so_code_4 },
    { "codwlk_so_code_5", 1, codwlk_so_code_5 },
    { "codwlk_so_code_6", 1, codwlk_so_code_6 },
    { "codwlk_so_code_7", 1, codwlk_so_code_7 },
    { "codwlk_so_code_8", 1, codwlk_so_code_8 },
    { "codwlk_so_code_9", 1, codwlk_so_code_9 },
    { "codwlk_so_code_10", 1, codwlk_so_code_10 },
    { "codwlk_so_code_11", 1, codwlk_so_code_11 },
    { "codwlk_so_code_12", 1, codwlk_so_code_12 },
    { "codwlk_so_code_13", 1, codwlk_so_code_13 },
    { "codwlk_so_code_14", 1, codwlk_so_code_14 },
    { "codwlk_so_code_15", 1, codwlk_so_code_15 },
    { "codwlk_so_code_16", 1, codwlk_so_code_16 },
    { "codwlk_so_code_17", 1, codwlk_so_code_17 },
    { "codwlk_so_code_18", 1, codwlk_so_code_18 },
    { "codwlk_so_code_19", 1, codwlk_so_code_19 },
    { "codwlk_so_code_20", 4, codwlk_so_code_20 },
    { "codwlk_so_code_21", 29, codwlk_so_code_21 },
    { "codwlk_so_code_22", 3, codwlk_so_code_22 },
    { "codwlk_so_code_23", 29, codwlk_so_code_23 },
    { "codwlk_so_code_24", 11, codwlk_so_code_24 },
    { "codwlk_so_code_25", 2, codwlk_so_code_25 },
    { "codwlk_so_code_26", 2, codwlk_so_code_26 },
    { "codwlk_so_code_27", 1, codwlk_so_code_27 },
    { "codwlk_so_code_28", 1, codwlk_so_code_28 },
    { "codwlk_so_code_29", 1, codwlk_so_code_29 },
    { "codwlk_so_code_30", 1, codwlk_so_code_30 },
    { "codwlk_so_code_31", 1, codwlk_so_code_31 },
    { "codwlk_so_code_32", 1, codwlk_so_code_32 },
    { "codwlk_so_code_33", 1, codwlk_so_code_33 },
    { "codwlk_so_code_34", 1, codwlk_so_code_34 },
    { "codwlk_so_code_35", 1, codwlk_so_code_35 },
    { "codwlk_so_code_36", 1, codwlk_so_code_36 },
    { "codwlk_so_code_37", 1, codwlk_so_code_37 },
    { "codwlk_so_code_38", 1, codwlk_so_code_38 }
  };

int
decl_codwlk_so_b7ffafa34930d0e9 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_codwlk_so_b7ffafa34930d0e9);
  return (0);
}

DECLARE_COMPILED_CODE ("codwlk.so", 13, decl_codwlk_so_b7ffafa34930d0e9, codwlk_so_b7ffafa34930d0e9)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_codwlk_so_data_b7ffafa34930d0e9 [3503] =
  "\x86\x01\x4c\xb5\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9\x81"
  "\x22\x29\x21\x9e\x2b\xba\x1d\xb0\x82\x88\xb1\x82\x22\x29\x21\x9e"
  "\x2b\xbb\x1d\xb0\x83\x88\xb1\x83\x22\x29\x21\x9e\x2b\xbc\x1d\xb0"
  "\x84\x88\xb1\x84\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x85\x88\xb1\x85"
  "\x22\x29\x21\x9e\x2b\xbe\x1d\xb0\x86\x88\xb1\x86\x22\x29\x21\x9e"
  "\x2b\xbf\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\xb1\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0c\x08\xc1\x1c\xc1"
  "\x1c\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc2\x0d\x1c\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc3\x1d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x0d\x08\x89\x1b\x1b\x1b\x1b\x08\x1b\x25\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x24\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\xc2\x0d\xb1\x02\xc3\x02\x83\x06\x07"
  "\x85\xc2\x02\x1b\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x84\x28"
  "\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x02"
  "\x02\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x85\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\xb9\x17\xb8\x88\xb0"
  "\x1b\xb1\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x0d\x0d\x0d\x17\x1b\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6"
  "\x2a\xb5\x2a\xb4\x2a\xb3\x2a\xb2\x2a\x17\xc3\x0d\x1c\x0c\x1b\x1b"
  "\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x08\x14\x08\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69"
  "\x6d\x65\x2f\x2e\x2f\x63\x6f\x64\x77\x6c\x6b\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65"
  "\x66\x0e\x04\x83\x04\x03\x02\x0f\x04\x83\x04\x03\x02\x10\x04\x83"
  "\x04\x03\x02\x11\x04\x83\x04\x03\x02\x12\x04\x83\x04\x03\x02\x13"
  "\x04\x83\x04\x03\x02\x08\x08\x14\x04\x83\x04\x03\x09\x02\x09\x09"
  "\x15\x04\x83\x04\x03\x0a\x02\x0a\x0a\x16\x04\x83\x04\x03\x0b\x02"
  "\x0b\x0b\x17\x04\x83\x04\x03\x0c\x02\x0c\x0c\x18\x04\x83\x04\x03"
  "\x0d\x02\x0d\x0d\x19\x04\x83\x04\x03\x0e\x02\x0e\x0e\x1a\x04\x83"
  "\x04\x03\x0f\x02\x0f\x0f\x1b\x04\x83\x04\x03\x10\x02\x10\x10\x1c"
  "\x04\x83\x04\x03\x11\x02\x11\x11\x1d\x04\x83\x04\x03\x12\x02\x12"
  "\x12\x1e\x04\x83\x04\x03\x13\x02\x13\x13\x1f\x04\x83\x04\x03\x14"
  "\x02\x14\x14\x20\x04\x83\x04\x03\x15\x02\x15\x0f\x25\x72\x65\x63"
  "\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e"
  "\x31\x16\x02\x24\x0a\x81\x85\x02\x23\x08\x81\x83\x02\x22\x06\x81"
  "\x83\x02\x21\x04\x83\x04\x09\x12\x17\x02\x16\x09\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x18\x10\x74\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x19\x0c\x75\x6e\x61\x73\x73\x69\x67\x6e\x65"
  "\x64\x3f\x1a\x07\x61\x63\x63\x65\x73\x73\x1b\x0b\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x1c\x0c\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x61\x6c\x1d\x0c\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e"
  "\x1e\x0b\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x1f\x06\x64\x65"
  "\x6c\x61\x79\x20\x0c\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e"
  "\x21\x12\x65\x72\x72\x6f\x72\x2d\x63\x6f\x6d\x62\x69\x6e\x61\x74"
  "\x69\x6f\x6e\x22\x10\x65\x78\x74\x65\x6e\x64\x65\x64\x2d\x6c\x61"
  "\x6d\x62\x64\x61\x23\x0b\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b"
  "\x24\x0a\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e\x25\x08\x63\x6f\x6d"
  "\x6d\x65\x6e\x74\x26\x0c\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f"
  "\x6e\x27\x07\x6c\x61\x6d\x62\x64\x61\x28\x2c\x4d\x41\x4b\x45\x2d"
  "\x53\x43\x4f\x44\x45\x2d\x57\x41\x4c\x4b\x45\x52\x3a\x20\x55\x6e"
  "\x72\x65\x63\x6f\x67\x6e\x69\x7a\x65\x64\x20\x61\x6c\x69\x73\x74"
  "\x20\x69\x74\x65\x6d\x73\x04\x63\x61\x72\x29\x04\x63\x64\x72\x2a"
  "\x09\x73\x65\x71\x75\x65\x6e\x63\x65\x2b\x04\x04\x6d\x61\x70\x04"
  "\x06\x65\x72\x72\x6f\x72\x04\x05\x61\x73\x73\x71\x04\x06\x64\x65"
  "\x6c\x71\x21\x15\x13\x25\x6d\x61\x6b\x65\x2d\x73\x63\x6f\x64\x65"
  "\x2d\x77\x61\x6c\x6b\x65\x72\x2c\x06\x41\x3c\x81\xa7\x02\x40\x3a"
  "\x81\xa7\x02\x3f\x38\x81\xa7\x02\x3e\x36\x81\xa5\x02\x3d\x34\x81"
  "\xa3\x02\x3c\x32\x81\x9d\x02\x3b\x30\x81\x99\x02\x3a\x2e\x81\x97"
  "\x02\x39\x2c\x81\x95\x02\x38\x2a\x81\x93\x02\x37\x28\x81\x91\x02"
  "\x36\x26\x81\x8f\x02\x35\x24\x81\x8b\x02\x34\x22\x81\x89\x02\x33"
  "\x20\x81\x87\x02\x32\x1e\x81\x89\x02\x31\x1c\x81\x85\x02\x30\x1a"
  "\x81\x87\x02\x2f\x18\x81\x83\x02\x2e\x16\x81\x87\x02\x2d\x14\x81"
  "\x81\x02\x2c\x12\x81\x87\x02\x2b\x10\x81\x89\x02\x2a\x0e\x81\x85"
  "\x02\x29\x0c\x81\x83\x02\x28\x0a\x81\x83\x02\x27\x08\x83\x04\x26"
  "\x06\x81\x85\x02\x25\x04\x84\x06\x3b\x5f\x2d\x02\x17\x0b\x76\x65"
  "\x63\x74\x6f\x72\x2d\x72\x65\x66\x10\x64\x69\x73\x70\x61\x74\x63"
  "\x68\x2d\x76\x65\x63\x74\x6f\x72\x2e\x02\x44\x08\x81\x85\x02\x43"
  "\x06\x81\x85\x02\x42\x04\x84\x06\x07\x0d\x2f\x02\x18\x0c\x76\x65"
  "\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x02\x2a\x29\x1b\x1c\x27\x26"
  "\x1d\x1f\x20\x21\x23\x28\x06\x6c\x65\x78\x70\x72\x25\x2b\x19\x18"
  "\x2e\x02\x0e\x77\x61\x6c\x6b\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x30\x0e\x77\x61\x6c\x6b\x2f\x76\x61\x72\x69\x61\x62\x6c\x65\x31"
  "\x15\x77\x61\x6c\x6b\x2f\x74\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x32\x0e\x77\x61\x6c\x6b\x2f\x73\x65\x71\x75"
  "\x65\x6e\x63\x65\x33\x0f\x77\x61\x6c\x6b\x2f\x71\x75\x6f\x74\x61"
  "\x74\x69\x6f\x6e\x34\x0c\x77\x61\x6c\x6b\x2f\x6c\x61\x6d\x62\x64"
  "\x61\x35\x15\x77\x61\x6c\x6b\x2f\x65\x78\x74\x65\x6e\x64\x65\x64"
  "\x2d\x6c\x61\x6d\x62\x64\x61\x36\x11\x77\x61\x6c\x6b\x2f\x64\x69"
  "\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x37\x0b\x77\x61\x6c\x6b\x2f"
  "\x64\x65\x6c\x61\x79\x38\x10\x77\x61\x6c\x6b\x2f\x64\x65\x66\x69"
  "\x6e\x69\x74\x69\x6f\x6e\x39\x11\x77\x61\x6c\x6b\x2f\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x61\x6c\x3a\x0d\x77\x61\x6c\x6b\x2f\x63"
  "\x6f\x6d\x6d\x65\x6e\x74\x3b\x11\x77\x61\x6c\x6b\x2f\x63\x6f\x6d"
  "\x62\x69\x6e\x61\x74\x69\x6f\x6e\x3c\x10\x77\x61\x6c\x6b\x2f\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x3d\x0c\x77\x61\x6c\x6b\x2f"
  "\x61\x63\x63\x65\x73\x73\x3e\x2e\x11\x02\x1a\x6d\x69\x63\x72\x6f"
  "\x63\x6f\x64\x65\x2d\x74\x79\x70\x65\x2f\x63\x6f\x64\x65\x2d\x6c"
  "\x69\x6d\x69\x74\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x04\x0c"
  "\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x03\x0f\x6d\x69\x63"
  "\x72\x6f\x63\x6f\x64\x65\x2d\x74\x79\x70\x65\x05\x61\x3c\x81\x89"
  "\x02\x60\x3a\x81\x87\x02\x5f\x38\x81\x87\x02\x5e\x36\x81\x85\x02"
  "\x5d\x34\x81\x87\x02\x5c\x32\x81\x87\x02\x5b\x30\x81\x87\x02\x5a"
  "\x2e\x81\x85\x02\x59\x2c\x81\x85\x02\x58\x2a\x81\x83\x02\x57\x28"
  "\x81\x83\x02\x56\x26\x81\x85\x02\x55\x24\x81\x87\x02\x54\x22\x81"
  "\x87\x02\x53\x20\x81\x87\x02\x52\x1e\x81\x87\x02\x51\x1c\x81\x87"
  "\x02\x50\x1a\x81\x87\x02\x4f\x18\x81\x87\x02\x4e\x16\x81\x87\x02"
  "\x4d\x14\x81\x87\x02\x4c\x12\x81\x87\x02\x4b\x10\x81\x87\x02\x4a"
  "\x0e\x81\x87\x02\x49\x0c\x81\x87\x02\x48\x0a\x81\x85\x02\x47\x08"
  "\x81\x81\x02\x46\x06\x81\x83\x02\x45\x04\x82\x02\x3b\x6d\x3f\x02"
  "\x19\x14\x6c\x65\x78\x69\x63\x61\x6c\x2d\x75\x6e\x61\x73\x73\x69"
  "\x67\x6e\x65\x64\x3f\x14\x6c\x65\x78\x69\x63\x61\x6c\x2d\x75\x6e"
  "\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x10\x65\x72\x72\x6f\x72\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x0c\x10\x65\x72\x72\x6f\x72"
  "\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x13\x0d\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x74\x79\x70\x65\x3f\x1e\x29\x2a\x03\x15\x63\x6f\x6d"
  "\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2d\x6f\x70\x65\x72\x61\x74\x6f"
  "\x72\x04\x17\x61\x62\x73\x6f\x6c\x75\x74\x65\x2d\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x74\x6f\x3f\x03\x15\x63\x6f\x6d\x62\x69"
  "\x6e\x61\x74\x69\x6f\x6e\x2d\x6f\x70\x65\x72\x61\x6e\x64\x73\x03"
  "\x11\x74\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x3f\x05\x6c\x18\x81\x85\x02\x6b\x16\x81\x89\x02\x6a\x14\x81\x85"
  "\x02\x69\x12\x81\x87\x02\x68\x10\x81\x87\x02\x67\x0e\x81\x87\x02"
  "\x66\x0c\x81\x83\x02\x65\x0a\x81\x83\x02\x64\x08\x81\x83\x02\x63"
  "\x06\x81\x83\x02\x62\x04\x84\x06\x17\x32\x2a\x02\x1a\x08\x03\x0d"
  "\x64\x65\x63\x6c\x61\x72\x61\x74\x69\x6f\x6e\x3f\x02\x6e\x06\x81"
  "\x85\x02\x6d\x04\x84\x06\x05\x0e\x29\x02\x1b\x0f\x11\x03\x0c\x6f"
  "\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x3f\x02\x70\x06\x81\x85\x02"
  "\x6f\x04\x84\x06\x05\x0e\x40\x02\x1c\x71\x04\x84\x06\x03\x41\x02"
  "\x1d\x72\x04\x84\x06\x03\x42\x02\x1e\x73\x04\x84\x06\x03\x43\x02"
  "\x1f\x74\x04\x84\x06\x03\x44\x02\x20\x09\x75\x04\x84\x06\x03\x45"
  "\x02\x21\x0a\x76\x04\x84\x06\x03\x46\x02\x22\x0b\x77\x04\x84\x06"
  "\x03\x47\x02\x23\x0d\x78\x04\x84\x06\x03\x48\x02\x24\x0e\x79\x04"
  "\x84\x06\x03\x49\x02\x25\x10\x7a\x04\x84\x06\x03\x4a\x02\x26\x12"
  "\x7b\x04\x84\x06\x03\x4b\x02\x27\x14\x7c\x04\x84\x06\x03\x27\x16"
  "\x04\x4b\x04\x4a\x04\x49\x04\x48\x04\x47\x04\x46\x04\x45\x04\x44"
  "\x04\x43\x04\x42\x04\x41\x04\x40\x04\x29\x04\x2a\x04\x3f\x04\x2f"
  "\x04\x2d\x04\x17\x04\x15\x31\x32\x34\x35\x36\x37\x38\x39\x30\x3a"
  "\x3d\x3e\x33\x3b\x3c\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65"
  "\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x2e\x0b\x73\x63\x6f\x64\x65"
  "\x2d\x77\x61\x6c\x6b\x12\x6d\x61\x6b\x65\x2d\x73\x63\x6f\x64\x65"
  "\x2d\x77\x61\x6c\x6b\x65\x72\x0e\x73\x63\x6f\x64\x65\x2d\x77\x61"
  "\x6c\x6b\x65\x72\x3f\x15\x2c\x16\x73\x63\x6f\x64\x65\x2d\x77\x61"
  "\x6c\x6b\x65\x72\x2f\x76\x61\x72\x69\x61\x62\x6c\x65\x19\x73\x63"
  "\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x65\x72\x2f\x75\x6e\x61\x73\x73"
  "\x69\x67\x6e\x65\x64\x3f\x1d\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c"
  "\x6b\x65\x72\x2f\x74\x68\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x16\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x65\x72"
  "\x2f\x73\x65\x71\x75\x65\x6e\x63\x65\x17\x73\x63\x6f\x64\x65\x2d"
  "\x77\x61\x6c\x6b\x65\x72\x2f\x71\x75\x6f\x74\x61\x74\x69\x6f\x6e"
  "\x18\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x65\x72\x2f\x6f\x70"
  "\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x14\x73\x63\x6f\x64\x65\x2d\x77"
  "\x61\x6c\x6b\x65\x72\x2f\x6c\x61\x6d\x62\x64\x61\x1d\x73\x63\x6f"
  "\x64\x65\x2d\x77\x61\x6c\x6b\x65\x72\x2f\x65\x78\x74\x65\x6e\x64"
  "\x65\x64\x2d\x6c\x61\x6d\x62\x64\x61\x1f\x73\x63\x6f\x64\x65\x2d"
  "\x77\x61\x6c\x6b\x65\x72\x2f\x65\x72\x72\x6f\x72\x2d\x63\x6f\x6d"
  "\x62\x69\x6e\x61\x74\x69\x6f\x6e\x19\x73\x63\x6f\x64\x65\x2d\x77"
  "\x61\x6c\x6b\x65\x72\x2f\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f"
  "\x6e\x13\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x65\x72\x2f\x64"
  "\x65\x6c\x61\x79\x18\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x65"
  "\x72\x2f\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x19\x73\x63\x6f"
  "\x64\x65\x2d\x77\x61\x6c\x6b\x65\x72\x2f\x64\x65\x63\x6c\x61\x72"
  "\x61\x74\x69\x6f\x6e\x16\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b"
  "\x65\x72\x2f\x63\x6f\x6e\x73\x74\x61\x6e\x74\x19\x73\x63\x6f\x64"
  "\x65\x2d\x77\x61\x6c\x6b\x65\x72\x2f\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x61\x6c\x15\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x65"
  "\x72\x2f\x63\x6f\x6d\x6d\x65\x6e\x74\x19\x73\x63\x6f\x64\x65\x2d"
  "\x77\x61\x6c\x6b\x65\x72\x2f\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69"
  "\x6f\x6e\x18\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x65\x72\x2f"
  "\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x14\x73\x63\x6f\x64\x65"
  "\x2d\x77\x61\x6c\x6b\x65\x72\x2f\x61\x63\x63\x65\x73\x73\x14\x15"
  "\x04\x14\x04\x13\x04\x12\x04\x11\x04\x10\x04\x0f\x04\x0e\x04\x0d"
  "\x04\x0c\x04\x0b\x04\x0a\x04\x09\x04\x04\x04\x04\x04\x04\x04\x14"
  "\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x11\x72\x74\x64\x3a\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b"
  "\x65\x72\x4b\x0d\x73\x63\x6f\x64\x65\x2d\x77\x61\x6c\x6b\x65\x72"
  "\x1b\x1c\x27\x26\x1d\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74\x1e\x1f"
  "\x20\x21\x22\x23\x28\x24\x25\x2b\x19\x1a\x18\x13\x06\x11\x6d\x61"
  "\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19"
  "\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70"
  "\x61\x74\x63\x68\x2d\x74\x61\x67\x05\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x04\x4b\x02\x0d\x1c\x80\x80"
  "\x04\x0c\x1a\x81\x81\x02\x0b\x18\x81\x81\x02\x0a\x16\x81\x85\x02"
  "\x09\x14\x81\x83\x02\x08\x12\x81\xa9\x02\x07\x10\x81\x87\x02\x06"
  "\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02\x03\x08"
  "\x81\x85\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02\x1b\x34";

SCHEME_OBJECT *
codwlk_so_data_b7ffafa34930d0e9 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_codwlk_so_data_b7ffafa34930d0e9 [0]))), (sizeof (prog_codwlk_so_data_b7ffafa34930d0e9)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_20]));
}

DECLARE_COMPILED_DATA_NS ("codwlk.so", codwlk_so_data_b7ffafa34930d0e9)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("codwlk.so", "c14e96fe827013b5")
